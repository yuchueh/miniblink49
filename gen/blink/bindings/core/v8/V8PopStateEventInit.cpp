// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#include "V8PopStateEventInit.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/ScriptValue.h"
#include "bindings/core/v8/V8EventInit.h"

namespace blink {

void V8PopStateEventInit::toImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, PopStateEventInit& impl, ExceptionState& exceptionState)
{
    if (isUndefinedOrNull(v8Value))
        return;
    if (!v8Value->IsObject()) {
        exceptionState.throwTypeError("cannot convert to dictionary.");
        return;
    }

    V8EventInit::toImpl(isolate, v8Value, impl, exceptionState);
    if (exceptionState.hadException())
        return;

    v8::TryCatch block(isolate);
    v8::Local<v8::Object> v8Object;
    if (!v8Call(v8Value->ToObject(isolate->GetCurrentContext()), v8Object, block)) {
        exceptionState.rethrowV8Exception(block.Exception());
        return;
    }
    {
        v8::Local<v8::Value> stateValue;
        if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "state")).ToLocal(&stateValue)) {
            exceptionState.rethrowV8Exception(block.Exception());
            return;
        }
        if (stateValue.IsEmpty() || stateValue->IsUndefined()) {
            // Do nothing.
        } else {
            ScriptValue state = ScriptValue(ScriptState::current(isolate), stateValue);
            impl.setState(state);
        }
    }

}

v8::Local<v8::Value> toV8(const PopStateEventInit& impl, v8::Local<v8::Object> creationContext, v8::Isolate* isolate)
{
    v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
    if (!toV8EventInit(impl, v8Object, creationContext, isolate))
        return v8::Local<v8::Value>();
    if (!toV8PopStateEventInit(impl, v8Object, creationContext, isolate))
        return v8::Local<v8::Value>();
    return v8Object;
}

bool toV8PopStateEventInit(const PopStateEventInit& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate)
{
    if (impl.hasState()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "state"), impl.state().v8Value())))
            return false;
    }

    return true;
}

PopStateEventInit NativeValueTraits<PopStateEventInit>::nativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState)
{
    PopStateEventInit impl;
    V8PopStateEventInit::toImpl(isolate, value, impl, exceptionState);
    return impl;
}

} // namespace blink
