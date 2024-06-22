// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#include "V8CompositionEventInit.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/V8UIEventInit.h"

namespace blink {

void V8CompositionEventInit::toImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, CompositionEventInit& impl, ExceptionState& exceptionState)
{
    if (isUndefinedOrNull(v8Value))
        return;
    if (!v8Value->IsObject()) {
        exceptionState.throwTypeError("cannot convert to dictionary.");
        return;
    }

    V8UIEventInit::toImpl(isolate, v8Value, impl, exceptionState);
    if (exceptionState.hadException())
        return;

    v8::TryCatch block(isolate);
    v8::Local<v8::Object> v8Object;
    if (!v8Call(v8Value->ToObject(isolate->GetCurrentContext()), v8Object, block)) {
        exceptionState.rethrowV8Exception(block.Exception());
        return;
    }
    {
        v8::Local<v8::Value> dataValue;
        if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "data")).ToLocal(&dataValue)) {
            exceptionState.rethrowV8Exception(block.Exception());
            return;
        }
        if (dataValue.IsEmpty() || dataValue->IsUndefined()) {
            // Do nothing.
        } else {
            V8StringResource<> data = dataValue;
            if (!data.prepare(exceptionState))
                return;
            impl.setData(data);
        }
    }

}

v8::Local<v8::Value> toV8(const CompositionEventInit& impl, v8::Local<v8::Object> creationContext, v8::Isolate* isolate)
{
    v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
    if (!toV8UIEventInit(impl, v8Object, creationContext, isolate))
        return v8::Local<v8::Value>();
    if (!toV8CompositionEventInit(impl, v8Object, creationContext, isolate))
        return v8::Local<v8::Value>();
    return v8Object;
}

bool toV8CompositionEventInit(const CompositionEventInit& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate)
{
    if (impl.hasData()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "data"), v8String(isolate, impl.data()))))
            return false;
    } else {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "data"), v8String(isolate, String("")))))
            return false;
    }

    return true;
}

CompositionEventInit NativeValueTraits<CompositionEventInit>::nativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState)
{
    CompositionEventInit impl;
    V8CompositionEventInit::toImpl(isolate, value, impl, exceptionState);
    return impl;
}

} // namespace blink
