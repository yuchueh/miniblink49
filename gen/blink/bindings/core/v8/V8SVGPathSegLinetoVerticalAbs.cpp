// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#include "V8SVGPathSegLinetoVerticalAbs.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "core/dom/ContextFeatures.h"
#include "core/dom/Document.h"
#include "core/frame/UseCounter.h"
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
const WrapperTypeInfo V8SVGPathSegLinetoVerticalAbs::wrapperTypeInfo = { gin::kEmbedderBlink, V8SVGPathSegLinetoVerticalAbs::domTemplate, V8SVGPathSegLinetoVerticalAbs::refObject, V8SVGPathSegLinetoVerticalAbs::derefObject, V8SVGPathSegLinetoVerticalAbs::trace, 0, 0, V8SVGPathSegLinetoVerticalAbs::preparePrototypeObject, V8SVGPathSegLinetoVerticalAbs::installConditionallyEnabledProperties, "SVGPathSegLinetoVerticalAbs", &V8SVGPathSeg::wrapperTypeInfo, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::NotInheritFromEventTarget, WrapperTypeInfo::Dependent, WrapperTypeInfo::WillBeGarbageCollectedObject };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in SVGPathSegLinetoVerticalAbs.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& SVGPathSegLinetoVerticalAbs::s_wrapperTypeInfo = V8SVGPathSegLinetoVerticalAbs::wrapperTypeInfo;

namespace SVGPathSegLinetoVerticalAbsV8Internal {

static void yAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    SVGPathSegLinetoVerticalAbs* impl = V8SVGPathSegLinetoVerticalAbs::toImpl(holder);
    v8SetReturnValue(info, impl->y());
}

static void yAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    SVGPathSegLinetoVerticalAbsV8Internal::yAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void yAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    ExceptionState exceptionState(ExceptionState::SetterContext, "y", "SVGPathSegLinetoVerticalAbs", holder, info.GetIsolate());
    SVGPathSegLinetoVerticalAbs* impl = V8SVGPathSegLinetoVerticalAbs::toImpl(holder);
    float cppValue = toRestrictedFloat(info.GetIsolate(), v8Value, exceptionState);
    if (exceptionState.throwIfNeeded())
        return;
    impl->setY(cppValue);
}

static void yAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMSetter");
    SVGPathSegLinetoVerticalAbsV8Internal::yAttributeSetter(v8Value, info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

} // namespace SVGPathSegLinetoVerticalAbsV8Internal

static const V8DOMConfiguration::AccessorConfiguration V8SVGPathSegLinetoVerticalAbsAccessors[] = {
    {"y", SVGPathSegLinetoVerticalAbsV8Internal::yAttributeGetterCallback, SVGPathSegLinetoVerticalAbsV8Internal::yAttributeSetterCallback, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
};

static void installV8SVGPathSegLinetoVerticalAbsTemplate(v8::Local<v8::FunctionTemplate> functionTemplate, v8::Isolate* isolate)
{
    functionTemplate->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    if (!RuntimeEnabledFeatures::svg1DOMEnabled())
        defaultSignature = V8DOMConfiguration::installDOMClassTemplate(isolate, functionTemplate, "SVGPathSegLinetoVerticalAbs", V8SVGPathSeg::domTemplate(isolate), V8SVGPathSegLinetoVerticalAbs::internalFieldCount, 0, 0, 0, 0, 0, 0);
    else
        defaultSignature = V8DOMConfiguration::installDOMClassTemplate(isolate, functionTemplate, "SVGPathSegLinetoVerticalAbs", V8SVGPathSeg::domTemplate(isolate), V8SVGPathSegLinetoVerticalAbs::internalFieldCount,
            0, 0,
            V8SVGPathSegLinetoVerticalAbsAccessors, WTF_ARRAY_LENGTH(V8SVGPathSegLinetoVerticalAbsAccessors),
            0, 0);
    v8::Local<v8::ObjectTemplate> instanceTemplate = functionTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = functionTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);

    // Custom toString template
#if V8_MAJOR_VERSION < 7
    functionTemplate->Set(v8AtomicString(isolate, "toString"), V8PerIsolateData::from(isolate)->toStringTemplate());
#endif
}

v8::Local<v8::FunctionTemplate> V8SVGPathSegLinetoVerticalAbs::domTemplate(v8::Isolate* isolate)
{
    return V8DOMConfiguration::domClassTemplate(isolate, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8SVGPathSegLinetoVerticalAbsTemplate);
}

bool V8SVGPathSegLinetoVerticalAbs::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8SVGPathSegLinetoVerticalAbs::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

SVGPathSegLinetoVerticalAbs* V8SVGPathSegLinetoVerticalAbs::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : 0;
}

void V8SVGPathSegLinetoVerticalAbs::refObject(ScriptWrappable* scriptWrappable)
{
#if !ENABLE(OILPAN)
    scriptWrappable->toImpl<SVGPathSegLinetoVerticalAbs>()->ref();
#endif
}

void V8SVGPathSegLinetoVerticalAbs::derefObject(ScriptWrappable* scriptWrappable)
{
#if !ENABLE(OILPAN)
    scriptWrappable->toImpl<SVGPathSegLinetoVerticalAbs>()->deref();
#endif
}

} // namespace blink
