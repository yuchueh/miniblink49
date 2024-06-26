// Copyright (c) 2012 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "cc/test/pixel_test_utils.h"

#include <string>
#include <vector>

#include "base/base64.h"
#include "base/files/file_util.h"
#include "base/logging.h"
#include "third_party/skia/include/core/SkBitmap.h"
#include "ui/gfx/codec/png_codec.h"

namespace cc {

bool WritePNGFile(const SkBitmap& bitmap, const base::FilePath& file_path,
    bool discard_transparency)
{
    std::vector<unsigned char> png_data;
    if (gfx::PNGCodec::EncodeBGRASkBitmap(bitmap,
            discard_transparency,
            &png_data)
        && base::CreateDirectory(file_path.DirName())) {
        char* data = reinterpret_cast<char*>(&png_data[0]);
        int size = static_cast<int>(png_data.size());
        return base::WriteFile(file_path, data, size) == size;
    }
    return false;
}

std::string GetPNGDataUrl(const SkBitmap& bitmap)
{
    std::vector<unsigned char> png_data;
    gfx::PNGCodec::EncodeBGRASkBitmap(bitmap, false, &png_data);
    std::string data_url;
    data_url.insert(data_url.end(), png_data.begin(), png_data.end());
    base::Base64Encode(data_url, &data_url);
    data_url.insert(0, "data:image/png;base64,");

    return data_url;
}

bool ReadPNGFile(const base::FilePath& file_path, SkBitmap* bitmap)
{
    DCHECK(bitmap);
    std::string png_data;
    return base::ReadFileToString(file_path, &png_data) && gfx::PNGCodec::Decode(reinterpret_cast<unsigned char*>(&png_data[0]), png_data.length(), bitmap);
}

bool MatchesPNGFile(const SkBitmap& gen_bmp, base::FilePath ref_img_path,
    const PixelComparator& comparator)
{
    SkBitmap ref_bmp;
    if (!ReadPNGFile(ref_img_path, &ref_bmp)) {
        LOG(ERROR) << "Cannot read reference image: " << ref_img_path.value();
        return false;
    }

    // Check if images size matches
    if (gen_bmp.width() != ref_bmp.width() || gen_bmp.height() != ref_bmp.height()) {
        LOG(ERROR)
            << "Dimensions do not match! "
            << "Actual: " << gen_bmp.width() << "x" << gen_bmp.height()
            << "; "
            << "Expected: " << ref_bmp.width() << "x" << ref_bmp.height();
        return false;
    }

    // Shortcut for empty images. They are always equal.
    if (gen_bmp.width() == 0 || gen_bmp.height() == 0)
        return true;

    bool compare = comparator.Compare(gen_bmp, ref_bmp);
    if (!compare) {
        std::string gen_bmp_data_url = GetPNGDataUrl(gen_bmp);
        std::string ref_bmp_data_url = GetPNGDataUrl(ref_bmp);
        LOG(ERROR) << "Pixels do not match!";
        LOG(ERROR) << "Actual: " << gen_bmp_data_url;
        LOG(ERROR) << "Expected: " << ref_bmp_data_url;
    }
    return compare;
}

} // namespace cc
