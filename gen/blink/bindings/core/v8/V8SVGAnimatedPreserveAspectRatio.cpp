// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#include "V8SVGAnimatedPreserveAspectRatio.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "bindings/core/v8/V8SVGElement.h"
#include "bindings/core/v8/V8SVGPreserveAspectRatio.h"
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
const WrapperTypeInfo V8SVGAnimatedPreserveAspectRatio::wrapperTypeInfo = { gin::kEmbedderBlink, V8SVGAnimatedPreserveAspectRatio::domTemplate, V8SVGAnimatedPreserveAspectRatio::refObject, V8SVGAnimatedPreserveAspectRatio::derefObject, V8SVGAnimatedPreserveAspectRatio::trace, 0, V8SVGAnimatedPreserveAspectRatio::visitDOMWrapper, V8SVGAnimatedPreserveAspectRatio::preparePrototypeObject, V8SVGAnimatedPreserveAspectRatio::installConditionallyEnabledProperties, "SVGAnimatedPreserveAspectRatio", 0, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::NotInheritFromEventTarget, WrapperTypeInfo::Dependent, WrapperTypeInfo::WillBeGarbageCollectedObject };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in SVGAnimatedPreserveAspectRatio.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& SVGAnimatedPreserveAspectRatio::s_wrapperTypeInfo = V8SVGAnimatedPreserveAspectRatio::wrapperTypeInfo;

namespace SVGAnimatedPreserveAspectRatioV8Internal {

static void baseValAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    SVGAnimatedPreserveAspectRatio* impl = V8SVGAnimatedPreserveAspectRatio::toImpl(holder);
    v8SetReturnValueFast(info, WTF::getPtr(impl->baseVal()), impl);
}

static void baseValAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    SVGAnimatedPreserveAspectRatioV8Internal::baseValAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void animValAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    SVGAnimatedPreserveAspectRatio* impl = V8SVGAnimatedPreserveAspectRatio::toImpl(holder);
    v8SetReturnValueFast(info, WTF::getPtr(impl->animVal()), impl);
}

static void animValAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    SVGAnimatedPreserveAspectRatioV8Internal::animValAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

} // namespace SVGAnimatedPreserveAspectRatioV8Internal

void V8SVGAnimatedPreserveAspectRatio::visitDOMWrapper(v8::Isolate* isolate, ScriptWrappable* scriptWrappable, const v8::Persistent<v8::Object>& wrapper)
{
    SVGAnimatedPreserveAspectRatio* impl = scriptWrappable->toImpl<SVGAnimatedPreserveAspectRatio>();
    v8::Local<v8::Object> creationContext = v8::Local<v8::Object>::New(isolate, wrapper);
    V8WrapperInstantiationScope scope(creationContext, isolate);
    SVGElement* contextElement = impl->contextElement();
    if (contextElement) {
        if (DOMDataStore::containsWrapper(contextElement, isolate))
            DOMDataStore::setWrapperReference(wrapper, contextElement, isolate);
    }
}

static const V8DOMConfiguration::AccessorConfiguration V8SVGAnimatedPreserveAspectRatioAccessors[] = {
    {"baseVal", SVGAnimatedPreserveAspectRatioV8Internal::baseValAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"animVal", SVGAnimatedPreserveAspectRatioV8Internal::animValAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
};

static void installV8SVGAnimatedPreserveAspectRatioTemplate(v8::Local<v8::FunctionTemplate> functionTemplate, v8::Isolate* isolate)
{
    functionTemplate->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    if (!RuntimeEnabledFeatures::svg1DOMEnabled())
        defaultSignature = V8DOMConfiguration::installDOMClassTemplate(isolate, functionTemplate, "SVGAnimatedPreserveAspectRatio", v8::Local<v8::FunctionTemplate>(), V8SVGAnimatedPreserveAspectRatio::internalFieldCount, 0, 0, 0, 0, 0, 0);
    else
        defaultSignature = V8DOMConfiguration::installDOMClassTemplate(isolate, functionTemplate, "SVGAnimatedPreserveAspectRatio", v8::Local<v8::FunctionTemplate>(), V8SVGAnimatedPreserveAspectRatio::internalFieldCount,
            0, 0,
            V8SVGAnimatedPreserveAspectRatioAccessors, WTF_ARRAY_LENGTH(V8SVGAnimatedPreserveAspectRatioAccessors),
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

v8::Local<v8::FunctionTemplate> V8SVGAnimatedPreserveAspectRatio::domTemplate(v8::Isolate* isolate)
{
    return V8DOMConfiguration::domClassTemplate(isolate, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8SVGAnimatedPreserveAspectRatioTemplate);
}

bool V8SVGAnimatedPreserveAspectRatio::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8SVGAnimatedPreserveAspectRatio::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

SVGAnimatedPreserveAspectRatio* V8SVGAnimatedPreserveAspectRatio::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : 0;
}

void V8SVGAnimatedPreserveAspectRatio::refObject(ScriptWrappable* scriptWrappable)
{
#if !ENABLE(OILPAN)
    scriptWrappable->toImpl<SVGAnimatedPreserveAspectRatio>()->ref();
#endif
}

void V8SVGAnimatedPreserveAspectRatio::derefObject(ScriptWrappable* scriptWrappable)
{
#if !ENABLE(OILPAN)
    scriptWrappable->toImpl<SVGAnimatedPreserveAspectRatio>()->deref();
#endif
}

} // namespace blink
