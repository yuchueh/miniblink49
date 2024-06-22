// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#include "V8ANGLEInstancedArrays.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8GCController.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "core/dom/ContextFeatures.h"
#include "core/dom/Document.h"
#include "core/dom/Element.h"
#include "platform/RuntimeEnabledFeatures.h"
#include "platform/TraceEvent.h"
#include "wtf/GetPtr.h"
#include "wtf/RefPtr.h"

namespace blink {

// Suppress warning: global constructors, because struct WrapperTypeInfo is trivial
// and does not depend on another global objects.
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wglobal-constructors"
#endif
const WrapperTypeInfo V8ANGLEInstancedArrays::wrapperTypeInfo = { gin::kEmbedderBlink, V8ANGLEInstancedArrays::domTemplate, V8ANGLEInstancedArrays::refObject, V8ANGLEInstancedArrays::derefObject, V8ANGLEInstancedArrays::trace, 0, V8ANGLEInstancedArrays::visitDOMWrapper, V8ANGLEInstancedArrays::preparePrototypeObject, V8ANGLEInstancedArrays::installConditionallyEnabledProperties, "ANGLEInstancedArrays", 0, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::NotInheritFromEventTarget, WrapperTypeInfo::Dependent, WrapperTypeInfo::WillBeGarbageCollectedObject };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in ANGLEInstancedArrays.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& ANGLEInstancedArrays::s_wrapperTypeInfo = V8ANGLEInstancedArrays::wrapperTypeInfo;

namespace ANGLEInstancedArraysV8Internal {

static void drawArraysInstancedANGLEMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "drawArraysInstancedANGLE", "ANGLEInstancedArrays", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 4)) {
        setMinimumArityTypeError(exceptionState, 4, info.Length());
        exceptionState.throwIfNeeded();
        return;
    }
    ANGLEInstancedArrays* impl = V8ANGLEInstancedArrays::toImpl(info.Holder());
    unsigned mode;
    int first;
    int count;
    int primcount;
    {
        mode = toUInt32(info.GetIsolate(), info[0], NormalConversion, exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
        first = toInt32(info.GetIsolate(), info[1], NormalConversion, exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
        count = toInt32(info.GetIsolate(), info[2], NormalConversion, exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
        primcount = toInt32(info.GetIsolate(), info[3], NormalConversion, exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
    }
    impl->drawArraysInstancedANGLE(mode, first, count, primcount);
}

static void drawArraysInstancedANGLEMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    ANGLEInstancedArraysV8Internal::drawArraysInstancedANGLEMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void drawElementsInstancedANGLEMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "drawElementsInstancedANGLE", "ANGLEInstancedArrays", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 5)) {
        setMinimumArityTypeError(exceptionState, 5, info.Length());
        exceptionState.throwIfNeeded();
        return;
    }
    ANGLEInstancedArrays* impl = V8ANGLEInstancedArrays::toImpl(info.Holder());
    unsigned mode;
    int count;
    unsigned type;
    long long offset;
    int primcount;
    {
        mode = toUInt32(info.GetIsolate(), info[0], NormalConversion, exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
        count = toInt32(info.GetIsolate(), info[1], NormalConversion, exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
        type = toUInt32(info.GetIsolate(), info[2], NormalConversion, exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
        offset = toInt64(info.GetIsolate(), info[3], NormalConversion, exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
        primcount = toInt32(info.GetIsolate(), info[4], NormalConversion, exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
    }
    impl->drawElementsInstancedANGLE(mode, count, type, offset, primcount);
}

static void drawElementsInstancedANGLEMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    ANGLEInstancedArraysV8Internal::drawElementsInstancedANGLEMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void vertexAttribDivisorANGLEMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "vertexAttribDivisorANGLE", "ANGLEInstancedArrays", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 2)) {
        setMinimumArityTypeError(exceptionState, 2, info.Length());
        exceptionState.throwIfNeeded();
        return;
    }
    ANGLEInstancedArrays* impl = V8ANGLEInstancedArrays::toImpl(info.Holder());
    unsigned index;
    int divisor;
    {
        index = toUInt32(info.GetIsolate(), info[0], NormalConversion, exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
        divisor = toInt32(info.GetIsolate(), info[1], NormalConversion, exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
    }
    impl->vertexAttribDivisorANGLE(index, divisor);
}

static void vertexAttribDivisorANGLEMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    ANGLEInstancedArraysV8Internal::vertexAttribDivisorANGLEMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

} // namespace ANGLEInstancedArraysV8Internal

void V8ANGLEInstancedArrays::visitDOMWrapper(v8::Isolate* isolate, ScriptWrappable* scriptWrappable, const v8::Persistent<v8::Object>& wrapper)
{
    ANGLEInstancedArrays* impl = scriptWrappable->toImpl<ANGLEInstancedArrays>();
    // The canvas() method may return a reference or a pointer.
    if (Node* owner = WTF::getPtr(impl->canvas())) {
        Node* root = V8GCController::opaqueRootForGC(isolate, owner);
        isolate->SetReferenceFromGroup(v8::UniqueId(reinterpret_cast<intptr_t>(root)), wrapper);
        return;
    }
}

static const V8DOMConfiguration::MethodConfiguration V8ANGLEInstancedArraysMethods[] = {
    {"drawArraysInstancedANGLE", ANGLEInstancedArraysV8Internal::drawArraysInstancedANGLEMethodCallback, 0, 4, V8DOMConfiguration::ExposedToAllScripts},
    {"drawElementsInstancedANGLE", ANGLEInstancedArraysV8Internal::drawElementsInstancedANGLEMethodCallback, 0, 5, V8DOMConfiguration::ExposedToAllScripts},
    {"vertexAttribDivisorANGLE", ANGLEInstancedArraysV8Internal::vertexAttribDivisorANGLEMethodCallback, 0, 2, V8DOMConfiguration::ExposedToAllScripts},
};

static void installV8ANGLEInstancedArraysTemplate(v8::Local<v8::FunctionTemplate> functionTemplate, v8::Isolate* isolate)
{
    functionTemplate->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::installDOMClassTemplate(isolate, functionTemplate, "ANGLEInstancedArrays", v8::Local<v8::FunctionTemplate>(), V8ANGLEInstancedArrays::internalFieldCount,
        0, 0,
        0, 0,
        V8ANGLEInstancedArraysMethods, WTF_ARRAY_LENGTH(V8ANGLEInstancedArraysMethods));
    v8::Local<v8::ObjectTemplate> instanceTemplate = functionTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = functionTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);
    static const V8DOMConfiguration::ConstantConfiguration V8ANGLEInstancedArraysConstants[] = {
        {"VERTEX_ATTRIB_ARRAY_DIVISOR_ANGLE", 0x88FE, 0, 0, V8DOMConfiguration::ConstantTypeUnsignedLong},
    };
    V8DOMConfiguration::installConstants(isolate, functionTemplate, prototypeTemplate, V8ANGLEInstancedArraysConstants, WTF_ARRAY_LENGTH(V8ANGLEInstancedArraysConstants));

    // Custom toString template
#if V8_MAJOR_VERSION < 7
    functionTemplate->Set(v8AtomicString(isolate, "toString"), V8PerIsolateData::from(isolate)->toStringTemplate());
#endif
}

v8::Local<v8::FunctionTemplate> V8ANGLEInstancedArrays::domTemplate(v8::Isolate* isolate)
{
    return V8DOMConfiguration::domClassTemplate(isolate, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8ANGLEInstancedArraysTemplate);
}

bool V8ANGLEInstancedArrays::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8ANGLEInstancedArrays::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

ANGLEInstancedArrays* V8ANGLEInstancedArrays::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : 0;
}

void V8ANGLEInstancedArrays::refObject(ScriptWrappable* scriptWrappable)
{
#if !ENABLE(OILPAN)
    scriptWrappable->toImpl<ANGLEInstancedArrays>()->ref();
#endif
}

void V8ANGLEInstancedArrays::derefObject(ScriptWrappable* scriptWrappable)
{
#if !ENABLE(OILPAN)
    scriptWrappable->toImpl<ANGLEInstancedArrays>()->deref();
#endif
}

} // namespace blink
