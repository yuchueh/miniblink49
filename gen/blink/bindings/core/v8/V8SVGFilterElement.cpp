// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#include "V8SVGFilterElement.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "bindings/core/v8/V8SVGAnimatedEnumeration.h"
#include "bindings/core/v8/V8SVGAnimatedLength.h"
#include "bindings/core/v8/V8SVGAnimatedString.h"
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
const WrapperTypeInfo V8SVGFilterElement::wrapperTypeInfo = { gin::kEmbedderBlink, V8SVGFilterElement::domTemplate, V8SVGFilterElement::refObject, V8SVGFilterElement::derefObject, V8SVGFilterElement::trace, 0, 0, V8SVGFilterElement::preparePrototypeObject, V8SVGFilterElement::installConditionallyEnabledProperties, "SVGFilterElement", &V8SVGElement::wrapperTypeInfo, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::NodeClassId, WrapperTypeInfo::InheritFromEventTarget, WrapperTypeInfo::Dependent, WrapperTypeInfo::WillBeGarbageCollectedObject };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in SVGFilterElement.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& SVGFilterElement::s_wrapperTypeInfo = V8SVGFilterElement::wrapperTypeInfo;

namespace SVGFilterElementV8Internal {

static void filterUnitsAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    SVGFilterElement* impl = V8SVGFilterElement::toImpl(holder);
    v8SetReturnValueFast(info, WTF::getPtr(impl->filterUnits()), impl);
}

static void filterUnitsAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), callingExecutionContext(info.GetIsolate()), UseCounter::SVG1DOM);
    SVGFilterElementV8Internal::filterUnitsAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void primitiveUnitsAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    SVGFilterElement* impl = V8SVGFilterElement::toImpl(holder);
    v8SetReturnValueFast(info, WTF::getPtr(impl->primitiveUnits()), impl);
}

static void primitiveUnitsAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), callingExecutionContext(info.GetIsolate()), UseCounter::SVG1DOM);
    SVGFilterElementV8Internal::primitiveUnitsAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void xAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    SVGFilterElement* impl = V8SVGFilterElement::toImpl(holder);
    v8SetReturnValueFast(info, WTF::getPtr(impl->x()), impl);
}

static void xAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), callingExecutionContext(info.GetIsolate()), UseCounter::SVG1DOM);
    SVGFilterElementV8Internal::xAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void yAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    SVGFilterElement* impl = V8SVGFilterElement::toImpl(holder);
    v8SetReturnValueFast(info, WTF::getPtr(impl->y()), impl);
}

static void yAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), callingExecutionContext(info.GetIsolate()), UseCounter::SVG1DOM);
    SVGFilterElementV8Internal::yAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void widthAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    SVGFilterElement* impl = V8SVGFilterElement::toImpl(holder);
    v8SetReturnValueFast(info, WTF::getPtr(impl->width()), impl);
}

static void widthAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), callingExecutionContext(info.GetIsolate()), UseCounter::SVG1DOM);
    SVGFilterElementV8Internal::widthAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void heightAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    SVGFilterElement* impl = V8SVGFilterElement::toImpl(holder);
    v8SetReturnValueFast(info, WTF::getPtr(impl->height()), impl);
}

static void heightAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), callingExecutionContext(info.GetIsolate()), UseCounter::SVG1DOM);
    SVGFilterElementV8Internal::heightAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void hrefAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    SVGFilterElement* impl = V8SVGFilterElement::toImpl(holder);
    v8SetReturnValueFast(info, WTF::getPtr(impl->href()), impl);
}

static void hrefAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), callingExecutionContext(info.GetIsolate()), UseCounter::SVG1DOM);
    SVGFilterElementV8Internal::hrefAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

} // namespace SVGFilterElementV8Internal

static void installV8SVGFilterElementTemplate(v8::Local<v8::FunctionTemplate> functionTemplate, v8::Isolate* isolate)
{
    functionTemplate->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::installDOMClassTemplate(isolate, functionTemplate, "SVGFilterElement", V8SVGElement::domTemplate(isolate), V8SVGFilterElement::internalFieldCount,
        0, 0,
        0, 0,
        0, 0);
    v8::Local<v8::ObjectTemplate> instanceTemplate = functionTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = functionTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);
    if (RuntimeEnabledFeatures::svg1DOMEnabled()) {
        static const V8DOMConfiguration::AccessorConfiguration accessorConfiguration =\
        {"filterUnits", SVGFilterElementV8Internal::filterUnitsAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder};
        V8DOMConfiguration::installAccessor(isolate, instanceTemplate, prototypeTemplate, functionTemplate, defaultSignature, accessorConfiguration);
    }
    if (RuntimeEnabledFeatures::svg1DOMEnabled()) {
        static const V8DOMConfiguration::AccessorConfiguration accessorConfiguration =\
        {"primitiveUnits", SVGFilterElementV8Internal::primitiveUnitsAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder};
        V8DOMConfiguration::installAccessor(isolate, instanceTemplate, prototypeTemplate, functionTemplate, defaultSignature, accessorConfiguration);
    }
    if (RuntimeEnabledFeatures::svg1DOMEnabled()) {
        static const V8DOMConfiguration::AccessorConfiguration accessorConfiguration =\
        {"x", SVGFilterElementV8Internal::xAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder};
        V8DOMConfiguration::installAccessor(isolate, instanceTemplate, prototypeTemplate, functionTemplate, defaultSignature, accessorConfiguration);
    }
    if (RuntimeEnabledFeatures::svg1DOMEnabled()) {
        static const V8DOMConfiguration::AccessorConfiguration accessorConfiguration =\
        {"y", SVGFilterElementV8Internal::yAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder};
        V8DOMConfiguration::installAccessor(isolate, instanceTemplate, prototypeTemplate, functionTemplate, defaultSignature, accessorConfiguration);
    }
    if (RuntimeEnabledFeatures::svg1DOMEnabled()) {
        static const V8DOMConfiguration::AccessorConfiguration accessorConfiguration =\
        {"width", SVGFilterElementV8Internal::widthAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder};
        V8DOMConfiguration::installAccessor(isolate, instanceTemplate, prototypeTemplate, functionTemplate, defaultSignature, accessorConfiguration);
    }
    if (RuntimeEnabledFeatures::svg1DOMEnabled()) {
        static const V8DOMConfiguration::AccessorConfiguration accessorConfiguration =\
        {"height", SVGFilterElementV8Internal::heightAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder};
        V8DOMConfiguration::installAccessor(isolate, instanceTemplate, prototypeTemplate, functionTemplate, defaultSignature, accessorConfiguration);
    }
    if (RuntimeEnabledFeatures::svg1DOMEnabled()) {
        static const V8DOMConfiguration::AccessorConfiguration accessorConfiguration =\
        {"href", SVGFilterElementV8Internal::hrefAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder};
        V8DOMConfiguration::installAccessor(isolate, instanceTemplate, prototypeTemplate, functionTemplate, defaultSignature, accessorConfiguration);
    }

    // Custom toString template
#if V8_MAJOR_VERSION < 7
    functionTemplate->Set(v8AtomicString(isolate, "toString"), V8PerIsolateData::from(isolate)->toStringTemplate());
#endif
}

v8::Local<v8::FunctionTemplate> V8SVGFilterElement::domTemplate(v8::Isolate* isolate)
{
    return V8DOMConfiguration::domClassTemplate(isolate, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8SVGFilterElementTemplate);
}

bool V8SVGFilterElement::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8SVGFilterElement::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

SVGFilterElement* V8SVGFilterElement::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : 0;
}

void V8SVGFilterElement::refObject(ScriptWrappable* scriptWrappable)
{
#if !ENABLE(OILPAN)
    scriptWrappable->toImpl<SVGFilterElement>()->ref();
#endif
}

void V8SVGFilterElement::derefObject(ScriptWrappable* scriptWrappable)
{
#if !ENABLE(OILPAN)
    scriptWrappable->toImpl<SVGFilterElement>()->deref();
#endif
}

} // namespace blink
