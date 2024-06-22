// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#include "V8SVGPathSegCurvetoQuadraticSmoothAbs.h"

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
const WrapperTypeInfo V8SVGPathSegCurvetoQuadraticSmoothAbs::wrapperTypeInfo = { gin::kEmbedderBlink, V8SVGPathSegCurvetoQuadraticSmoothAbs::domTemplate, V8SVGPathSegCurvetoQuadraticSmoothAbs::refObject, V8SVGPathSegCurvetoQuadraticSmoothAbs::derefObject, V8SVGPathSegCurvetoQuadraticSmoothAbs::trace, 0, 0, V8SVGPathSegCurvetoQuadraticSmoothAbs::preparePrototypeObject, V8SVGPathSegCurvetoQuadraticSmoothAbs::installConditionallyEnabledProperties, "SVGPathSegCurvetoQuadraticSmoothAbs", &V8SVGPathSeg::wrapperTypeInfo, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::NotInheritFromEventTarget, WrapperTypeInfo::Dependent, WrapperTypeInfo::WillBeGarbageCollectedObject };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in SVGPathSegCurvetoQuadraticSmoothAbs.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& SVGPathSegCurvetoQuadraticSmoothAbs::s_wrapperTypeInfo = V8SVGPathSegCurvetoQuadraticSmoothAbs::wrapperTypeInfo;

namespace SVGPathSegCurvetoQuadraticSmoothAbsV8Internal {

static void xAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    SVGPathSegCurvetoQuadraticSmoothAbs* impl = V8SVGPathSegCurvetoQuadraticSmoothAbs::toImpl(holder);
    v8SetReturnValue(info, impl->x());
}

static void xAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    SVGPathSegCurvetoQuadraticSmoothAbsV8Internal::xAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void xAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    ExceptionState exceptionState(ExceptionState::SetterContext, "x", "SVGPathSegCurvetoQuadraticSmoothAbs", holder, info.GetIsolate());
    SVGPathSegCurvetoQuadraticSmoothAbs* impl = V8SVGPathSegCurvetoQuadraticSmoothAbs::toImpl(holder);
    float cppValue = toRestrictedFloat(info.GetIsolate(), v8Value, exceptionState);
    if (exceptionState.throwIfNeeded())
        return;
    impl->setX(cppValue);
}

static void xAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMSetter");
    SVGPathSegCurvetoQuadraticSmoothAbsV8Internal::xAttributeSetter(v8Value, info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void yAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    SVGPathSegCurvetoQuadraticSmoothAbs* impl = V8SVGPathSegCurvetoQuadraticSmoothAbs::toImpl(holder);
    v8SetReturnValue(info, impl->y());
}

static void yAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    SVGPathSegCurvetoQuadraticSmoothAbsV8Internal::yAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void yAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    ExceptionState exceptionState(ExceptionState::SetterContext, "y", "SVGPathSegCurvetoQuadraticSmoothAbs", holder, info.GetIsolate());
    SVGPathSegCurvetoQuadraticSmoothAbs* impl = V8SVGPathSegCurvetoQuadraticSmoothAbs::toImpl(holder);
    float cppValue = toRestrictedFloat(info.GetIsolate(), v8Value, exceptionState);
    if (exceptionState.throwIfNeeded())
        return;
    impl->setY(cppValue);
}

static void yAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMSetter");
    SVGPathSegCurvetoQuadraticSmoothAbsV8Internal::yAttributeSetter(v8Value, info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

} // namespace SVGPathSegCurvetoQuadraticSmoothAbsV8Internal

static const V8DOMConfiguration::AccessorConfiguration V8SVGPathSegCurvetoQuadraticSmoothAbsAccessors[] = {
    {"x", SVGPathSegCurvetoQuadraticSmoothAbsV8Internal::xAttributeGetterCallback, SVGPathSegCurvetoQuadraticSmoothAbsV8Internal::xAttributeSetterCallback, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"y", SVGPathSegCurvetoQuadraticSmoothAbsV8Internal::yAttributeGetterCallback, SVGPathSegCurvetoQuadraticSmoothAbsV8Internal::yAttributeSetterCallback, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
};

static void installV8SVGPathSegCurvetoQuadraticSmoothAbsTemplate(v8::Local<v8::FunctionTemplate> functionTemplate, v8::Isolate* isolate)
{
    functionTemplate->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    if (!RuntimeEnabledFeatures::svg1DOMEnabled())
        defaultSignature = V8DOMConfiguration::installDOMClassTemplate(isolate, functionTemplate, "SVGPathSegCurvetoQuadraticSmoothAbs", V8SVGPathSeg::domTemplate(isolate), V8SVGPathSegCurvetoQuadraticSmoothAbs::internalFieldCount, 0, 0, 0, 0, 0, 0);
    else
        defaultSignature = V8DOMConfiguration::installDOMClassTemplate(isolate, functionTemplate, "SVGPathSegCurvetoQuadraticSmoothAbs", V8SVGPathSeg::domTemplate(isolate), V8SVGPathSegCurvetoQuadraticSmoothAbs::internalFieldCount,
            0, 0,
            V8SVGPathSegCurvetoQuadraticSmoothAbsAccessors, WTF_ARRAY_LENGTH(V8SVGPathSegCurvetoQuadraticSmoothAbsAccessors),
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

v8::Local<v8::FunctionTemplate> V8SVGPathSegCurvetoQuadraticSmoothAbs::domTemplate(v8::Isolate* isolate)
{
    return V8DOMConfiguration::domClassTemplate(isolate, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8SVGPathSegCurvetoQuadraticSmoothAbsTemplate);
}

bool V8SVGPathSegCurvetoQuadraticSmoothAbs::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8SVGPathSegCurvetoQuadraticSmoothAbs::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

SVGPathSegCurvetoQuadraticSmoothAbs* V8SVGPathSegCurvetoQuadraticSmoothAbs::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : 0;
}

void V8SVGPathSegCurvetoQuadraticSmoothAbs::refObject(ScriptWrappable* scriptWrappable)
{
#if !ENABLE(OILPAN)
    scriptWrappable->toImpl<SVGPathSegCurvetoQuadraticSmoothAbs>()->ref();
#endif
}

void V8SVGPathSegCurvetoQuadraticSmoothAbs::derefObject(ScriptWrappable* scriptWrappable)
{
#if !ENABLE(OILPAN)
    scriptWrappable->toImpl<SVGPathSegCurvetoQuadraticSmoothAbs>()->deref();
#endif
}

} // namespace blink
