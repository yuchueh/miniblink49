// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#ifndef EventSourceInit_h
#define EventSourceInit_h

#include "bindings/core/v8/Nullable.h"
#include "core/CoreExport.h"
#include "platform/heap/Handle.h"

namespace blink {

class CORE_EXPORT EventSourceInit {
    ALLOW_ONLY_INLINE_ALLOCATION();
public:
    EventSourceInit();

    bool hasWithCredentials() const { return !m_withCredentials.isNull(); }
    bool withCredentials() const { return m_withCredentials.get(); }
    void setWithCredentials(bool value) { m_withCredentials = value; }

    DECLARE_VIRTUAL_TRACE();

private:
    Nullable<bool> m_withCredentials;

    friend class V8EventSourceInit;
};

} // namespace blink

#endif // EventSourceInit_h
