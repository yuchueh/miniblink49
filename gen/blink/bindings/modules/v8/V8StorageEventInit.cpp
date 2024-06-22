// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#include "V8StorageEventInit.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/V8EventInit.h"
#include "bindings/modules/v8/V8Storage.h"

namespace blink {

void V8StorageEventInit::toImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, StorageEventInit& impl, ExceptionState& exceptionState)
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
        v8::Local<v8::Value> keyValue;
        if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "key")).ToLocal(&keyValue)) {
            exceptionState.rethrowV8Exception(block.Exception());
            return;
        }
        if (keyValue.IsEmpty() || keyValue->IsUndefined()) {
            // Do nothing.
        } else if (keyValue->IsNull()) {
            impl.setKeyToNull();
        } else {
            V8StringResource<> key = keyValue;
            if (!key.prepare(exceptionState))
                return;
            impl.setKey(key);
        }
    }

    {
        v8::Local<v8::Value> newValueValue;
        if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "newValue")).ToLocal(&newValueValue)) {
            exceptionState.rethrowV8Exception(block.Exception());
            return;
        }
        if (newValueValue.IsEmpty() || newValueValue->IsUndefined()) {
            // Do nothing.
        } else if (newValueValue->IsNull()) {
            impl.setNewValueToNull();
        } else {
            V8StringResource<> newValue = newValueValue;
            if (!newValue.prepare(exceptionState))
                return;
            impl.setNewValue(newValue);
        }
    }

    {
        v8::Local<v8::Value> oldValueValue;
        if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "oldValue")).ToLocal(&oldValueValue)) {
            exceptionState.rethrowV8Exception(block.Exception());
            return;
        }
        if (oldValueValue.IsEmpty() || oldValueValue->IsUndefined()) {
            // Do nothing.
        } else if (oldValueValue->IsNull()) {
            impl.setOldValueToNull();
        } else {
            V8StringResource<> oldValue = oldValueValue;
            if (!oldValue.prepare(exceptionState))
                return;
            impl.setOldValue(oldValue);
        }
    }

    {
        v8::Local<v8::Value> storageAreaValue;
        if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "storageArea")).ToLocal(&storageAreaValue)) {
            exceptionState.rethrowV8Exception(block.Exception());
            return;
        }
        if (storageAreaValue.IsEmpty() || storageAreaValue->IsUndefined()) {
            // Do nothing.
        } else if (storageAreaValue->IsNull()) {
            impl.setStorageAreaToNull();
        } else {
            Storage* storageArea = V8Storage::toImplWithTypeCheck(isolate, storageAreaValue);
            if (!storageArea && !storageAreaValue->IsNull()) {
                exceptionState.throwTypeError("member storageArea is not of type Storage.");
                return;
            }
            impl.setStorageArea(storageArea);
        }
    }

    {
        v8::Local<v8::Value> urlValue;
        if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "url")).ToLocal(&urlValue)) {
            exceptionState.rethrowV8Exception(block.Exception());
            return;
        }
        if (urlValue.IsEmpty() || urlValue->IsUndefined()) {
            // Do nothing.
        } else {
            V8StringResource<> url = urlValue;
            if (!url.prepare(exceptionState))
                return;
            impl.setURL(url);
        }
    }

}

v8::Local<v8::Value> toV8(const StorageEventInit& impl, v8::Local<v8::Object> creationContext, v8::Isolate* isolate)
{
    v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
    if (!toV8EventInit(impl, v8Object, creationContext, isolate))
        return v8::Local<v8::Value>();
    if (!toV8StorageEventInit(impl, v8Object, creationContext, isolate))
        return v8::Local<v8::Value>();
    return v8Object;
}

bool toV8StorageEventInit(const StorageEventInit& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate)
{
    if (impl.hasKey()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "key"), v8String(isolate, impl.key()))))
            return false;
    }

    if (impl.hasNewValue()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "newValue"), v8String(isolate, impl.newValue()))))
            return false;
    }

    if (impl.hasOldValue()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "oldValue"), v8String(isolate, impl.oldValue()))))
            return false;
    }

    if (impl.hasStorageArea()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "storageArea"), toV8(impl.storageArea(), creationContext, isolate))))
            return false;
    }

    if (impl.hasURL()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "url"), v8String(isolate, impl.url()))))
            return false;
    }

    return true;
}

StorageEventInit NativeValueTraits<StorageEventInit>::nativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState)
{
    StorageEventInit impl;
    V8StorageEventInit::toImpl(isolate, value, impl, exceptionState);
    return impl;
}

} // namespace blink
