// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#include "V8PositionError.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "core/dom/ContextFeatures.h"
#include "core/dom/Document.h"
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
const WrapperTypeInfo V8PositionError::wrapperTypeInfo = { gin::kEmbedderBlink, V8PositionError::domTemplate, V8PositionError::refObject, V8PositionError::derefObject, V8PositionError::trace, 0, 0, V8PositionError::preparePrototypeObject, V8PositionError::installConditionallyEnabledProperties, "PositionError", 0, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::NotInheritFromEventTarget, WrapperTypeInfo::Independent, WrapperTypeInfo::GarbageCollectedObject };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in PositionError.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& PositionError::s_wrapperTypeInfo = V8PositionError::wrapperTypeInfo;

namespace PositionErrorV8Internal {

static void codeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    PositionError* impl = V8PositionError::toImpl(holder);
    v8SetReturnValueUnsigned(info, impl->code());
}

static void codeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    PositionErrorV8Internal::codeAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void messageAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    PositionError* impl = V8PositionError::toImpl(holder);
    v8SetReturnValueString(info, impl->message(), info.GetIsolate());
}

static void messageAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    PositionErrorV8Internal::messageAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

} // namespace PositionErrorV8Internal

static const V8DOMConfiguration::AccessorConfiguration V8PositionErrorAccessors[] = {
    {"code", PositionErrorV8Internal::codeAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"message", PositionErrorV8Internal::messageAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
};

static void installV8PositionErrorTemplate(v8::Local<v8::FunctionTemplate> functionTemplate, v8::Isolate* isolate)
{
    functionTemplate->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::installDOMClassTemplate(isolate, functionTemplate, "PositionError", v8::Local<v8::FunctionTemplate>(), V8PositionError::internalFieldCount,
        0, 0,
        V8PositionErrorAccessors, WTF_ARRAY_LENGTH(V8PositionErrorAccessors),
        0, 0);
    v8::Local<v8::ObjectTemplate> instanceTemplate = functionTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = functionTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);
    static const V8DOMConfiguration::ConstantConfiguration V8PositionErrorConstants[] = {
        {"PERMISSION_DENIED", 1, 0, 0, V8DOMConfiguration::ConstantTypeUnsignedShort},
        {"POSITION_UNAVAILABLE", 2, 0, 0, V8DOMConfiguration::ConstantTypeUnsignedShort},
        {"TIMEOUT", 3, 0, 0, V8DOMConfiguration::ConstantTypeUnsignedShort},
    };
    V8DOMConfiguration::installConstants(isolate, functionTemplate, prototypeTemplate, V8PositionErrorConstants, WTF_ARRAY_LENGTH(V8PositionErrorConstants));
    static_assert(1 == PositionError::PERMISSION_DENIED, "the value of PositionError_PERMISSION_DENIED does not match with implementation");
    static_assert(2 == PositionError::POSITION_UNAVAILABLE, "the value of PositionError_POSITION_UNAVAILABLE does not match with implementation");
    static_assert(3 == PositionError::TIMEOUT, "the value of PositionError_TIMEOUT does not match with implementation");

    // Custom toString template
#if V8_MAJOR_VERSION < 7
    functionTemplate->Set(v8AtomicString(isolate, "toString"), V8PerIsolateData::from(isolate)->toStringTemplate());
#endif
}

v8::Local<v8::FunctionTemplate> V8PositionError::domTemplate(v8::Isolate* isolate)
{
    return V8DOMConfiguration::domClassTemplate(isolate, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8PositionErrorTemplate);
}

bool V8PositionError::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8PositionError::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

PositionError* V8PositionError::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : 0;
}

void V8PositionError::refObject(ScriptWrappable* scriptWrappable)
{
}

void V8PositionError::derefObject(ScriptWrappable* scriptWrappable)
{
}

} // namespace blink
