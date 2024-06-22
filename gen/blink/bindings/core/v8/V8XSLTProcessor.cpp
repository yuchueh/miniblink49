// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#include "V8XSLTProcessor.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8Document.h"
#include "bindings/core/v8/V8DocumentFragment.h"
#include "bindings/core/v8/V8Node.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "core/dom/ContextFeatures.h"
#include "core/dom/Document.h"
#include "core/dom/custom/CustomElementProcessingStack.h"
#include "core/frame/LocalDOMWindow.h"
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
const WrapperTypeInfo V8XSLTProcessor::wrapperTypeInfo = { gin::kEmbedderBlink, V8XSLTProcessor::domTemplate, V8XSLTProcessor::refObject, V8XSLTProcessor::derefObject, V8XSLTProcessor::trace, 0, 0, V8XSLTProcessor::preparePrototypeObject, V8XSLTProcessor::installConditionallyEnabledProperties, "XSLTProcessor", 0, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::NotInheritFromEventTarget, WrapperTypeInfo::Independent, WrapperTypeInfo::GarbageCollectedObject };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in XSLTProcessor.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& XSLTProcessor::s_wrapperTypeInfo = V8XSLTProcessor::wrapperTypeInfo;

namespace XSLTProcessorV8Internal {

static void importStylesheetMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    if (UNLIKELY(info.Length() < 1)) {
        V8ThrowException::throwException(createMinimumArityTypeErrorForMethod(info.GetIsolate(), "importStylesheet", "XSLTProcessor", 1, info.Length()), info.GetIsolate());
        return;
    }
    XSLTProcessor* impl = V8XSLTProcessor::toImpl(info.Holder());
    Node* style;
    {
        style = V8Node::toImplWithTypeCheck(info.GetIsolate(), info[0]);
        if (!style) {
            V8ThrowException::throwTypeError(info.GetIsolate(), ExceptionMessages::failedToExecute("importStylesheet", "XSLTProcessor", "parameter 1 is not of type 'Node'."));
            return;
        }
    }
    impl->importStylesheet(style);
}

static void importStylesheetMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    XSLTProcessorV8Internal::importStylesheetMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void transformToFragmentMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    if (UNLIKELY(info.Length() < 2)) {
        V8ThrowException::throwException(createMinimumArityTypeErrorForMethod(info.GetIsolate(), "transformToFragment", "XSLTProcessor", 2, info.Length()), info.GetIsolate());
        return;
    }
    XSLTProcessor* impl = V8XSLTProcessor::toImpl(info.Holder());
    CustomElementProcessingStack::CallbackDeliveryScope deliveryScope;
    Node* source;
    Document* output;
    {
        source = V8Node::toImplWithTypeCheck(info.GetIsolate(), info[0]);
        if (!source) {
            V8ThrowException::throwTypeError(info.GetIsolate(), ExceptionMessages::failedToExecute("transformToFragment", "XSLTProcessor", "parameter 1 is not of type 'Node'."));
            return;
        }
        output = V8Document::toImplWithTypeCheck(info.GetIsolate(), info[1]);
        if (!output) {
            V8ThrowException::throwTypeError(info.GetIsolate(), ExceptionMessages::failedToExecute("transformToFragment", "XSLTProcessor", "parameter 2 is not of type 'Document'."));
            return;
        }
    }
    v8SetReturnValue(info, impl->transformToFragment(source, output));
}

static void transformToFragmentMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    XSLTProcessorV8Internal::transformToFragmentMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void transformToDocumentMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    if (UNLIKELY(info.Length() < 1)) {
        V8ThrowException::throwException(createMinimumArityTypeErrorForMethod(info.GetIsolate(), "transformToDocument", "XSLTProcessor", 1, info.Length()), info.GetIsolate());
        return;
    }
    XSLTProcessor* impl = V8XSLTProcessor::toImpl(info.Holder());
    CustomElementProcessingStack::CallbackDeliveryScope deliveryScope;
    Node* source;
    {
        source = V8Node::toImplWithTypeCheck(info.GetIsolate(), info[0]);
        if (!source) {
            V8ThrowException::throwTypeError(info.GetIsolate(), ExceptionMessages::failedToExecute("transformToDocument", "XSLTProcessor", "parameter 1 is not of type 'Node'."));
            return;
        }
    }
    v8SetReturnValue(info, impl->transformToDocument(source));
}

static void transformToDocumentMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    XSLTProcessorV8Internal::transformToDocumentMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void setParameterMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    if (UNLIKELY(info.Length() < 3)) {
        V8ThrowException::throwException(createMinimumArityTypeErrorForMethod(info.GetIsolate(), "setParameter", "XSLTProcessor", 3, info.Length()), info.GetIsolate());
        return;
    }
    XSLTProcessor* impl = V8XSLTProcessor::toImpl(info.Holder());
    V8StringResource<TreatNullAsNullString> namespaceURI;
    V8StringResource<> localName;
    V8StringResource<> value;
    {
        namespaceURI = info[0];
        if (!namespaceURI.prepare())
            return;
        localName = info[1];
        if (!localName.prepare())
            return;
        value = info[2];
        if (!value.prepare())
            return;
    }
    impl->setParameter(namespaceURI, localName, value);
}

static void setParameterMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    XSLTProcessorV8Internal::setParameterMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void getParameterMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    if (UNLIKELY(info.Length() < 2)) {
        V8ThrowException::throwException(createMinimumArityTypeErrorForMethod(info.GetIsolate(), "getParameter", "XSLTProcessor", 2, info.Length()), info.GetIsolate());
        return;
    }
    XSLTProcessor* impl = V8XSLTProcessor::toImpl(info.Holder());
    V8StringResource<TreatNullAsNullString> namespaceURI;
    V8StringResource<> localName;
    {
        namespaceURI = info[0];
        if (!namespaceURI.prepare())
            return;
        localName = info[1];
        if (!localName.prepare())
            return;
    }
    v8SetReturnValueStringOrNull(info, impl->getParameter(namespaceURI, localName), info.GetIsolate());
}

static void getParameterMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    XSLTProcessorV8Internal::getParameterMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void removeParameterMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    if (UNLIKELY(info.Length() < 2)) {
        V8ThrowException::throwException(createMinimumArityTypeErrorForMethod(info.GetIsolate(), "removeParameter", "XSLTProcessor", 2, info.Length()), info.GetIsolate());
        return;
    }
    XSLTProcessor* impl = V8XSLTProcessor::toImpl(info.Holder());
    V8StringResource<TreatNullAsNullString> namespaceURI;
    V8StringResource<> localName;
    {
        namespaceURI = info[0];
        if (!namespaceURI.prepare())
            return;
        localName = info[1];
        if (!localName.prepare())
            return;
    }
    impl->removeParameter(namespaceURI, localName);
}

static void removeParameterMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    XSLTProcessorV8Internal::removeParameterMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void clearParametersMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    XSLTProcessor* impl = V8XSLTProcessor::toImpl(info.Holder());
    impl->clearParameters();
}

static void clearParametersMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    XSLTProcessorV8Internal::clearParametersMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void resetMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    XSLTProcessor* impl = V8XSLTProcessor::toImpl(info.Holder());
    impl->reset();
}

static void resetMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    XSLTProcessorV8Internal::resetMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void constructor(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    Document& document = *toDocument(currentExecutionContext(info.GetIsolate()));
    RawPtr<XSLTProcessor> impl = XSLTProcessor::create(document);
    v8::Local<v8::Object> wrapper = info.Holder();
    wrapper = impl->associateWithWrapper(info.GetIsolate(), &V8XSLTProcessor::wrapperTypeInfo, wrapper);
    v8SetReturnValue(info, wrapper);
}

} // namespace XSLTProcessorV8Internal

static const V8DOMConfiguration::MethodConfiguration V8XSLTProcessorMethods[] = {
    {"importStylesheet", XSLTProcessorV8Internal::importStylesheetMethodCallback, 0, 1, V8DOMConfiguration::ExposedToAllScripts},
    {"transformToFragment", XSLTProcessorV8Internal::transformToFragmentMethodCallback, 0, 2, V8DOMConfiguration::ExposedToAllScripts},
    {"transformToDocument", XSLTProcessorV8Internal::transformToDocumentMethodCallback, 0, 1, V8DOMConfiguration::ExposedToAllScripts},
    {"setParameter", XSLTProcessorV8Internal::setParameterMethodCallback, 0, 3, V8DOMConfiguration::ExposedToAllScripts},
    {"getParameter", XSLTProcessorV8Internal::getParameterMethodCallback, 0, 2, V8DOMConfiguration::ExposedToAllScripts},
    {"removeParameter", XSLTProcessorV8Internal::removeParameterMethodCallback, 0, 2, V8DOMConfiguration::ExposedToAllScripts},
    {"clearParameters", XSLTProcessorV8Internal::clearParametersMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts},
    {"reset", XSLTProcessorV8Internal::resetMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts},
};

void V8XSLTProcessor::constructorCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SCOPED_SAMPLING_STATE("blink", "DOMConstructor");
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), callingExecutionContext(info.GetIsolate()), UseCounter::XSLTProcessor);
    if (!info.IsConstructCall()) {
        V8ThrowException::throwTypeError(info.GetIsolate(), ExceptionMessages::constructorNotCallableAsFunction("XSLTProcessor"));
        return;
    }

    if (ConstructorMode::current(info.GetIsolate()) == ConstructorMode::WrapExistingObject) {
        v8SetReturnValue(info, info.Holder());
        return;
    }

    XSLTProcessorV8Internal::constructor(info);
}

static void installV8XSLTProcessorTemplate(v8::Local<v8::FunctionTemplate> functionTemplate, v8::Isolate* isolate)
{
    functionTemplate->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    if (!RuntimeEnabledFeatures::xsltEnabled())
        defaultSignature = V8DOMConfiguration::installDOMClassTemplate(isolate, functionTemplate, "XSLTProcessor", v8::Local<v8::FunctionTemplate>(), V8XSLTProcessor::internalFieldCount, 0, 0, 0, 0, 0, 0);
    else
        defaultSignature = V8DOMConfiguration::installDOMClassTemplate(isolate, functionTemplate, "XSLTProcessor", v8::Local<v8::FunctionTemplate>(), V8XSLTProcessor::internalFieldCount,
            0, 0,
            0, 0,
            V8XSLTProcessorMethods, WTF_ARRAY_LENGTH(V8XSLTProcessorMethods));
    functionTemplate->SetCallHandler(V8XSLTProcessor::constructorCallback);
    functionTemplate->SetLength(0);
    v8::Local<v8::ObjectTemplate> instanceTemplate = functionTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = functionTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);

    // Custom toString template
#if V8_MAJOR_VERSION < 7
    functionTemplate->Set(v8AtomicString(isolate, "toString"), V8PerIsolateData::from(isolate)->toStringTemplate());
#endif
}

v8::Local<v8::FunctionTemplate> V8XSLTProcessor::domTemplate(v8::Isolate* isolate)
{
    return V8DOMConfiguration::domClassTemplate(isolate, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8XSLTProcessorTemplate);
}

bool V8XSLTProcessor::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8XSLTProcessor::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

XSLTProcessor* V8XSLTProcessor::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : 0;
}

void V8XSLTProcessor::refObject(ScriptWrappable* scriptWrappable)
{
}

void V8XSLTProcessor::derefObject(ScriptWrappable* scriptWrappable)
{
}

} // namespace blink
