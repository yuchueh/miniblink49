// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#include "V8FederatedCredentialData.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/modules/v8/V8LocallyStoredCredentialData.h"

namespace blink {

void V8FederatedCredentialData::toImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, FederatedCredentialData& impl, ExceptionState& exceptionState)
{
    if (isUndefinedOrNull(v8Value))
        return;
    if (!v8Value->IsObject()) {
        exceptionState.throwTypeError("cannot convert to dictionary.");
        return;
    }

    V8LocallyStoredCredentialData::toImpl(isolate, v8Value, impl, exceptionState);
    if (exceptionState.hadException())
        return;

    v8::TryCatch block;
    v8::Local<v8::Object> v8Object;
    if (!v8Call(v8Value->ToObject(isolate->GetCurrentContext()), v8Object, block)) {
        exceptionState.rethrowV8Exception(block.Exception());
        return;
    }
    {
        v8::Local<v8::Value> providerValue;
        if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "provider")).ToLocal(&providerValue)) {
            exceptionState.rethrowV8Exception(block.Exception());
            return;
        }
        if (providerValue.IsEmpty() || providerValue->IsUndefined()) {
            // Do nothing.
        } else {
            V8StringResource<> provider = toUSVString(isolate, providerValue, exceptionState);
            if (exceptionState.hadException())
                return;
            impl.setProvider(provider);
        }
    }

}

v8::Local<v8::Value> toV8(const FederatedCredentialData& impl, v8::Local<v8::Object> creationContext, v8::Isolate* isolate)
{
    v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
    if (!toV8LocallyStoredCredentialData(impl, v8Object, creationContext, isolate))
        return v8::Local<v8::Value>();
    if (!toV8FederatedCredentialData(impl, v8Object, creationContext, isolate))
        return v8::Local<v8::Value>();
    return v8Object;
}

bool toV8FederatedCredentialData(const FederatedCredentialData& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate)
{
    if (impl.hasProvider()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "provider"), v8String(isolate, impl.provider()))))
            return false;
    }

    return true;
}

FederatedCredentialData NativeValueTraits<FederatedCredentialData>::nativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState)
{
    FederatedCredentialData impl;
    V8FederatedCredentialData::toImpl(isolate, value, impl, exceptionState);
    return impl;
}

} // namespace blink
