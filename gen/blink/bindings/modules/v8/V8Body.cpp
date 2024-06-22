// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#include "V8Body.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/ScriptPromise.h"
#include "bindings/core/v8/ScriptState.h"
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
const WrapperTypeInfo V8Body::wrapperTypeInfo = { gin::kEmbedderBlink, V8Body::domTemplate, V8Body::refObject, V8Body::derefObject, V8Body::trace, V8Body::toActiveDOMObject, 0, V8Body::preparePrototypeObject, V8Body::installConditionallyEnabledProperties, "Body", 0, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::NotInheritFromEventTarget, WrapperTypeInfo::Dependent, WrapperTypeInfo::GarbageCollectedObject };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in Body.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& Body::s_wrapperTypeInfo = V8Body::wrapperTypeInfo;

namespace BodyV8Internal {

static void bodyUsedAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    Body* impl = V8Body::toImpl(holder);
    v8SetReturnValueBool(info, impl->bodyUsed());
}

static void bodyUsedAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    BodyV8Internal::bodyUsedAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void arrayBufferMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    Body* impl = V8Body::toImpl(info.Holder());
    ScriptState* scriptState = ScriptState::current(info.GetIsolate());
    ScriptPromise result = impl->arrayBuffer(scriptState);
    v8SetReturnValue(info, result.v8Value());
}

static void arrayBufferMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    BodyV8Internal::arrayBufferMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void blobMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    Body* impl = V8Body::toImpl(info.Holder());
    ScriptState* scriptState = ScriptState::current(info.GetIsolate());
    ScriptPromise result = impl->blob(scriptState);
    v8SetReturnValue(info, result.v8Value());
}

static void blobMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    BodyV8Internal::blobMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void jsonMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    Body* impl = V8Body::toImpl(info.Holder());
    ScriptState* scriptState = ScriptState::current(info.GetIsolate());
    ScriptPromise result = impl->json(scriptState);
    v8SetReturnValue(info, result.v8Value());
}

static void jsonMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    BodyV8Internal::jsonMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void textMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    Body* impl = V8Body::toImpl(info.Holder());
    ScriptState* scriptState = ScriptState::current(info.GetIsolate());
    ScriptPromise result = impl->text(scriptState);
    v8SetReturnValue(info, result.v8Value());
}

static void textMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    BodyV8Internal::textMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

} // namespace BodyV8Internal

static const V8DOMConfiguration::AccessorConfiguration V8BodyAccessors[] = {
    {"bodyUsed", BodyV8Internal::bodyUsedAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
};

static const V8DOMConfiguration::MethodConfiguration V8BodyMethods[] = {
    {"arrayBuffer", BodyV8Internal::arrayBufferMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts},
    {"blob", BodyV8Internal::blobMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts},
    {"json", BodyV8Internal::jsonMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts},
    {"text", BodyV8Internal::textMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts},
};

static void installV8BodyTemplate(v8::Local<v8::FunctionTemplate> functionTemplate, v8::Isolate* isolate)
{
    functionTemplate->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::installDOMClassTemplate(isolate, functionTemplate, "Body", v8::Local<v8::FunctionTemplate>(), V8Body::internalFieldCount,
        0, 0,
        V8BodyAccessors, WTF_ARRAY_LENGTH(V8BodyAccessors),
        V8BodyMethods, WTF_ARRAY_LENGTH(V8BodyMethods));
    v8::Local<v8::ObjectTemplate> instanceTemplate = functionTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = functionTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);

    // Custom toString template
#if V8_MAJOR_VERSION < 7
    functionTemplate->Set(v8AtomicString(isolate, "toString"), V8PerIsolateData::from(isolate)->toStringTemplate());
#endif
}

v8::Local<v8::FunctionTemplate> V8Body::domTemplate(v8::Isolate* isolate)
{
    return V8DOMConfiguration::domClassTemplate(isolate, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8BodyTemplate);
}

bool V8Body::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8Body::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

Body* V8Body::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : 0;
}

ActiveDOMObject* V8Body::toActiveDOMObject(v8::Local<v8::Object> wrapper)
{
    return toImpl(wrapper);
}

void V8Body::refObject(ScriptWrappable* scriptWrappable)
{
}

void V8Body::derefObject(ScriptWrappable* scriptWrappable)
{
}

} // namespace blink
