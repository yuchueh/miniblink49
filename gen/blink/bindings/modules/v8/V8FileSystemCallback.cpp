// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#include "V8FileSystemCallback.h"

#include "bindings/core/v8/ScriptController.h"
#include "bindings/core/v8/V8Binding.h"
#include "bindings/modules/v8/V8DOMFileSystem.h"
#include "core/dom/ExecutionContext.h"
#include "wtf/Assertions.h"
#include "wtf/GetPtr.h"
#include "wtf/RefPtr.h"

namespace blink {

V8FileSystemCallback::V8FileSystemCallback(v8::Local<v8::Function> callback, ScriptState* scriptState)
    : ActiveDOMCallback(scriptState->executionContext())
    , m_scriptState(scriptState)
{
    m_callback.set(scriptState->isolate(), callback);
}

V8FileSystemCallback::~V8FileSystemCallback()
{
}

DEFINE_TRACE(V8FileSystemCallback)
{
    FileSystemCallback::trace(visitor);
    ActiveDOMCallback::trace(visitor);
}

void V8FileSystemCallback::handleEvent(DOMFileSystem* fileSystem)
{
    if (!canInvokeCallback())
        return;

    if (!m_scriptState->contextIsValid())
        return;

    ScriptState::Scope scope(m_scriptState.get());
    v8::Local<v8::Value> fileSystemHandle = toV8(fileSystem, m_scriptState->context()->Global(), m_scriptState->isolate());
    if (fileSystemHandle.IsEmpty()) {
        if (!isScriptControllerTerminating())
            CRASH();
        return;
    }
    v8::Local<v8::Value> argv[] = { fileSystemHandle };

    ScriptController::callFunction(m_scriptState->executionContext(), m_callback.newLocal(m_scriptState->isolate()), m_scriptState->context()->Global(), 1, argv, m_scriptState->isolate());
}

} // namespace blink
