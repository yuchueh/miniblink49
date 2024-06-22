// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#include "V8SVGGraphicsElement.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "bindings/core/v8/V8SVGAnimatedTransformList.h"
#include "bindings/core/v8/V8SVGElement.h"
#include "bindings/core/v8/V8SVGMatrix.h"
#include "bindings/core/v8/V8SVGRect.h"
#include "bindings/core/v8/V8SVGStringList.h"
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
const WrapperTypeInfo V8SVGGraphicsElement::wrapperTypeInfo = { gin::kEmbedderBlink, V8SVGGraphicsElement::domTemplate, V8SVGGraphicsElement::refObject, V8SVGGraphicsElement::derefObject, V8SVGGraphicsElement::trace, 0, 0, V8SVGGraphicsElement::preparePrototypeObject, V8SVGGraphicsElement::installConditionallyEnabledProperties, "SVGGraphicsElement", &V8SVGElement::wrapperTypeInfo, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::NodeClassId, WrapperTypeInfo::InheritFromEventTarget, WrapperTypeInfo::Dependent, WrapperTypeInfo::WillBeGarbageCollectedObject };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in SVGGraphicsElement.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& SVGGraphicsElement::s_wrapperTypeInfo = V8SVGGraphicsElement::wrapperTypeInfo;

namespace SVGGraphicsElementV8Internal {

static void transformAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    SVGGraphicsElement* impl = V8SVGGraphicsElement::toImpl(holder);
    v8SetReturnValueFast(info, WTF::getPtr(impl->transform()), impl);
}

static void transformAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), callingExecutionContext(info.GetIsolate()), UseCounter::SVG1DOM);
    SVGGraphicsElementV8Internal::transformAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void nearestViewportElementAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    SVGGraphicsElement* impl = V8SVGGraphicsElement::toImpl(holder);
    v8SetReturnValueFast(info, WTF::getPtr(impl->nearestViewportElement()), impl);
}

static void nearestViewportElementAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), callingExecutionContext(info.GetIsolate()), UseCounter::SVGLocatableNearestViewportElement);
    SVGGraphicsElementV8Internal::nearestViewportElementAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void farthestViewportElementAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    SVGGraphicsElement* impl = V8SVGGraphicsElement::toImpl(holder);
    v8SetReturnValueFast(info, WTF::getPtr(impl->farthestViewportElement()), impl);
}

static void farthestViewportElementAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), callingExecutionContext(info.GetIsolate()), UseCounter::SVGLocatableFarthestViewportElement);
    SVGGraphicsElementV8Internal::farthestViewportElementAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void requiredFeaturesAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    SVGGraphicsElement* impl = V8SVGGraphicsElement::toImpl(holder);
    v8SetReturnValueFast(info, WTF::getPtr(impl->requiredFeatures()), impl);
}

static void requiredFeaturesAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), callingExecutionContext(info.GetIsolate()), UseCounter::SVG1DOM);
    SVGGraphicsElementV8Internal::requiredFeaturesAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void requiredExtensionsAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    SVGGraphicsElement* impl = V8SVGGraphicsElement::toImpl(holder);
    v8SetReturnValueFast(info, WTF::getPtr(impl->requiredExtensions()), impl);
}

static void requiredExtensionsAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), callingExecutionContext(info.GetIsolate()), UseCounter::SVG1DOM);
    SVGGraphicsElementV8Internal::requiredExtensionsAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void systemLanguageAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    SVGGraphicsElement* impl = V8SVGGraphicsElement::toImpl(holder);
    v8SetReturnValueFast(info, WTF::getPtr(impl->systemLanguage()), impl);
}

static void systemLanguageAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), callingExecutionContext(info.GetIsolate()), UseCounter::SVG1DOM);
    SVGGraphicsElementV8Internal::systemLanguageAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void getBBoxMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    SVGGraphicsElement* impl = V8SVGGraphicsElement::toImpl(info.Holder());
    v8SetReturnValueFast(info, WTF::getPtr(impl->getBBoxFromJavascript()), impl);
}

static void getBBoxMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    SVGGraphicsElementV8Internal::getBBoxMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void getCTMMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    SVGGraphicsElement* impl = V8SVGGraphicsElement::toImpl(info.Holder());
    v8SetReturnValueFast(info, WTF::getPtr(impl->getCTMFromJavascript()), impl);
}

static void getCTMMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    SVGGraphicsElementV8Internal::getCTMMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void getScreenCTMMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    SVGGraphicsElement* impl = V8SVGGraphicsElement::toImpl(info.Holder());
    v8SetReturnValueFast(info, WTF::getPtr(impl->getScreenCTMFromJavascript()), impl);
}

static void getScreenCTMMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    SVGGraphicsElementV8Internal::getScreenCTMMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void getTransformToElementMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "getTransformToElement", "SVGGraphicsElement", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 1)) {
        setMinimumArityTypeError(exceptionState, 1, info.Length());
        exceptionState.throwIfNeeded();
        return;
    }
    SVGGraphicsElement* impl = V8SVGGraphicsElement::toImpl(info.Holder());
    SVGElement* element;
    {
        element = V8SVGElement::toImplWithTypeCheck(info.GetIsolate(), info[0]);
        if (!element) {
            exceptionState.throwTypeError("parameter 1 is not of type 'SVGElement'.");
            exceptionState.throwIfNeeded();
            return;
        }
    }
    RefPtrWillBeRawPtr<SVGMatrixTearOff> result = impl->getTransformToElement(element, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
    v8SetReturnValueFast(info, WTF::getPtr(result.release()), impl);
}

static void getTransformToElementMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), callingExecutionContext(info.GetIsolate()), UseCounter::SVGGraphicsElementGetTransformToElement);
    SVGGraphicsElementV8Internal::getTransformToElementMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void hasExtensionMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    if (UNLIKELY(info.Length() < 1)) {
        V8ThrowException::throwException(createMinimumArityTypeErrorForMethod(info.GetIsolate(), "hasExtension", "SVGGraphicsElement", 1, info.Length()), info.GetIsolate());
        return;
    }
    SVGGraphicsElement* impl = V8SVGGraphicsElement::toImpl(info.Holder());
    V8StringResource<> extension;
    {
        extension = info[0];
        if (!extension.prepare())
            return;
    }
    v8SetReturnValueBool(info, impl->hasExtension(extension));
}

static void hasExtensionMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), callingExecutionContext(info.GetIsolate()), UseCounter::V8SVGGraphicsElement_HasExtension_Method);
    SVGGraphicsElementV8Internal::hasExtensionMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

} // namespace SVGGraphicsElementV8Internal

static const V8DOMConfiguration::AccessorConfiguration V8SVGGraphicsElementAccessors[] = {
    {"nearestViewportElement", SVGGraphicsElementV8Internal::nearestViewportElementAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"farthestViewportElement", SVGGraphicsElementV8Internal::farthestViewportElementAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
};

static const V8DOMConfiguration::MethodConfiguration V8SVGGraphicsElementMethods[] = {
    {"getBBox", SVGGraphicsElementV8Internal::getBBoxMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts},
    {"getCTM", SVGGraphicsElementV8Internal::getCTMMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts},
    {"getScreenCTM", SVGGraphicsElementV8Internal::getScreenCTMMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts},
    {"getTransformToElement", SVGGraphicsElementV8Internal::getTransformToElementMethodCallback, 0, 1, V8DOMConfiguration::ExposedToAllScripts},
    {"hasExtension", SVGGraphicsElementV8Internal::hasExtensionMethodCallback, 0, 1, V8DOMConfiguration::ExposedToAllScripts},
};

static void installV8SVGGraphicsElementTemplate(v8::Local<v8::FunctionTemplate> functionTemplate, v8::Isolate* isolate)
{
    functionTemplate->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::installDOMClassTemplate(isolate, functionTemplate, "SVGGraphicsElement", V8SVGElement::domTemplate(isolate), V8SVGGraphicsElement::internalFieldCount,
        0, 0,
        V8SVGGraphicsElementAccessors, WTF_ARRAY_LENGTH(V8SVGGraphicsElementAccessors),
        V8SVGGraphicsElementMethods, WTF_ARRAY_LENGTH(V8SVGGraphicsElementMethods));
    v8::Local<v8::ObjectTemplate> instanceTemplate = functionTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = functionTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);
    if (RuntimeEnabledFeatures::svg1DOMEnabled()) {
        static const V8DOMConfiguration::AccessorConfiguration accessorConfiguration =\
        {"transform", SVGGraphicsElementV8Internal::transformAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder};
        V8DOMConfiguration::installAccessor(isolate, instanceTemplate, prototypeTemplate, functionTemplate, defaultSignature, accessorConfiguration);
    }
    if (RuntimeEnabledFeatures::svg1DOMEnabled()) {
        static const V8DOMConfiguration::AccessorConfiguration accessorConfiguration =\
        {"requiredFeatures", SVGGraphicsElementV8Internal::requiredFeaturesAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder};
        V8DOMConfiguration::installAccessor(isolate, instanceTemplate, prototypeTemplate, functionTemplate, defaultSignature, accessorConfiguration);
    }
    if (RuntimeEnabledFeatures::svg1DOMEnabled()) {
        static const V8DOMConfiguration::AccessorConfiguration accessorConfiguration =\
        {"requiredExtensions", SVGGraphicsElementV8Internal::requiredExtensionsAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder};
        V8DOMConfiguration::installAccessor(isolate, instanceTemplate, prototypeTemplate, functionTemplate, defaultSignature, accessorConfiguration);
    }
    if (RuntimeEnabledFeatures::svg1DOMEnabled()) {
        static const V8DOMConfiguration::AccessorConfiguration accessorConfiguration =\
        {"systemLanguage", SVGGraphicsElementV8Internal::systemLanguageAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder};
        V8DOMConfiguration::installAccessor(isolate, instanceTemplate, prototypeTemplate, functionTemplate, defaultSignature, accessorConfiguration);
    }

    // Custom toString template
#if V8_MAJOR_VERSION < 7
    functionTemplate->Set(v8AtomicString(isolate, "toString"), V8PerIsolateData::from(isolate)->toStringTemplate());
#endif
}

v8::Local<v8::FunctionTemplate> V8SVGGraphicsElement::domTemplate(v8::Isolate* isolate)
{
    return V8DOMConfiguration::domClassTemplate(isolate, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8SVGGraphicsElementTemplate);
}

bool V8SVGGraphicsElement::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8SVGGraphicsElement::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

SVGGraphicsElement* V8SVGGraphicsElement::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : 0;
}

void V8SVGGraphicsElement::refObject(ScriptWrappable* scriptWrappable)
{
#if !ENABLE(OILPAN)
    scriptWrappable->toImpl<SVGGraphicsElement>()->ref();
#endif
}

void V8SVGGraphicsElement::derefObject(ScriptWrappable* scriptWrappable)
{
#if !ENABLE(OILPAN)
    scriptWrappable->toImpl<SVGGraphicsElement>()->deref();
#endif
}

} // namespace blink
