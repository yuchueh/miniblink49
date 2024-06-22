// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#ifndef FetchEventInit_h
#define FetchEventInit_h

#include "bindings/core/v8/Nullable.h"
#include "modules/ModulesExport.h"
#include "modules/fetch/Request.h"
#include "modules/serviceworkers/ExtendableEventInit.h"
#include "platform/heap/Handle.h"

namespace blink {

class MODULES_EXPORT FetchEventInit : public ExtendableEventInit {
    ALLOW_ONLY_INLINE_ALLOCATION();
public:
    FetchEventInit();

    bool hasIsReload() const { return !m_isReload.isNull(); }
    bool isReload() const { return m_isReload.get(); }
    void setIsReload(bool value) { m_isReload = value; }

    bool hasRequest() const { return m_request; }
    Request* request() const { return m_request; }
    void setRequest(Request* value) { m_request = value; }

    DECLARE_VIRTUAL_TRACE();

private:
    Nullable<bool> m_isReload;
    Member<Request> m_request;

    friend class V8FetchEventInit;
};

} // namespace blink

#endif // FetchEventInit_h
