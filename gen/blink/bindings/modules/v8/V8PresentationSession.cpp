// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#include "V8PresentationSession.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/V8AbstractEventListener.h"
#include "bindings/core/v8/V8ArrayBuffer.h"
#include "bindings/core/v8/V8ArrayBufferView.h"
#include "bindings/core/v8/V8Blob.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8EventListenerList.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "core/dom/ContextFeatures.h"
#include "core/dom/Document.h"
#include "core/inspector/ConsoleMessage.h"
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
const WrapperTypeInfo V8PresentationSession::wrapperTypeInfo = { gin::kEmbedderBlink, V8PresentationSession::domTemplate, V8PresentationSession::refObject, V8PresentationSession::derefObject, V8PresentationSession::trace, 0, 0, V8PresentationSession::preparePrototypeObject, V8PresentationSession::installConditionallyEnabledProperties, "PresentationSession", &V8EventTarget::wrapperTypeInfo, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::InheritFromEventTarget, WrapperTypeInfo::Independent, WrapperTypeInfo::GarbageCollectedObject };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in PresentationSession.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& PresentationSession::s_wrapperTypeInfo = V8PresentationSession::wrapperTypeInfo;

namespace PresentationSessionV8Internal {

static void idAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    PresentationSession* impl = V8PresentationSession::toImpl(holder);
    v8SetReturnValueStringOrNull(info, impl->id(), info.GetIsolate());
}

static void idAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    PresentationSessionV8Internal::idAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void stateAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    PresentationSession* impl = V8PresentationSession::toImpl(holder);
    v8SetReturnValueString(info, impl->state(), info.GetIsolate());
}

static void stateAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    PresentationSessionV8Internal::stateAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void onstatechangeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    PresentationSession* impl = V8PresentationSession::toImpl(holder);
    EventListener* cppValue(impl->onstatechange());
    v8SetReturnValue(info, cppValue ? v8::Local<v8::Value>(V8AbstractEventListener::cast(cppValue)->getListenerObject(impl->executionContext())) : v8::Local<v8::Value>(v8::Null(info.GetIsolate())));
}

static void onstatechangeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    PresentationSessionV8Internal::onstatechangeAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void onstatechangeAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    PresentationSession* impl = V8PresentationSession::toImpl(holder);
    moveEventListenerToNewWrapper(info.GetIsolate(), holder, impl->onstatechange(), v8Value, V8PresentationSession::eventListenerCacheIndex);
    impl->setOnstatechange(V8EventListenerList::getEventListener(ScriptState::current(info.GetIsolate()), v8Value, true, ListenerFindOrCreate));
}

static void onstatechangeAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMSetter");
    PresentationSessionV8Internal::onstatechangeAttributeSetter(v8Value, info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void binaryTypeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    PresentationSession* impl = V8PresentationSession::toImpl(holder);
    v8SetReturnValueString(info, impl->binaryType(), info.GetIsolate());
}

static void binaryTypeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    PresentationSessionV8Internal::binaryTypeAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void binaryTypeAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    ExceptionState exceptionState(ExceptionState::SetterContext, "binaryType", "PresentationSession", holder, info.GetIsolate());
    PresentationSession* impl = V8PresentationSession::toImpl(holder);
    V8StringResource<> cppValue = v8Value;
    if (!cppValue.prepare())
        return;
    static const char* validValues[] = {
        "blob",
        "arraybuffer",
    };
    if (!isValidEnum(cppValue, validValues, WTF_ARRAY_LENGTH(validValues), "BinaryType", exceptionState)) {
        currentExecutionContext(info.GetIsolate())->addConsoleMessage(ConsoleMessage::create(JSMessageSource, WarningMessageLevel, exceptionState.message()));
        return;
    }
    impl->setBinaryType(cppValue);
}

static void binaryTypeAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMSetter");
    PresentationSessionV8Internal::binaryTypeAttributeSetter(v8Value, info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void onmessageAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    PresentationSession* impl = V8PresentationSession::toImpl(holder);
    EventListener* cppValue(impl->onmessage());
    v8SetReturnValue(info, cppValue ? v8::Local<v8::Value>(V8AbstractEventListener::cast(cppValue)->getListenerObject(impl->executionContext())) : v8::Local<v8::Value>(v8::Null(info.GetIsolate())));
}

static void onmessageAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    PresentationSessionV8Internal::onmessageAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void onmessageAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    PresentationSession* impl = V8PresentationSession::toImpl(holder);
    moveEventListenerToNewWrapper(info.GetIsolate(), holder, impl->onmessage(), v8Value, V8PresentationSession::eventListenerCacheIndex);
    impl->setOnmessage(V8EventListenerList::getEventListener(ScriptState::current(info.GetIsolate()), v8Value, true, ListenerFindOrCreate));
}

static void onmessageAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMSetter");
    PresentationSessionV8Internal::onmessageAttributeSetter(v8Value, info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void closeMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    PresentationSession* impl = V8PresentationSession::toImpl(info.Holder());
    impl->close();
}

static void closeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    PresentationSessionV8Internal::closeMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void send1Method(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "send", "PresentationSession", info.Holder(), info.GetIsolate());
    PresentationSession* impl = V8PresentationSession::toImpl(info.Holder());
    V8StringResource<> message;
    {
        message = info[0];
        if (!message.prepare())
            return;
    }
    impl->send(message, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
}

static void send2Method(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "send", "PresentationSession", info.Holder(), info.GetIsolate());
    PresentationSession* impl = V8PresentationSession::toImpl(info.Holder());
    Blob* data;
    {
        data = V8Blob::toImplWithTypeCheck(info.GetIsolate(), info[0]);
    }
    impl->send(data, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
}

static void send3Method(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "send", "PresentationSession", info.Holder(), info.GetIsolate());
    PresentationSession* impl = V8PresentationSession::toImpl(info.Holder());
    DOMArrayBuffer* data;
    {
        data = info[0]->IsArrayBuffer() ? V8ArrayBuffer::toImpl(v8::Local<v8::ArrayBuffer>::Cast(info[0])) : 0;
    }
    impl->send(data, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
}

static void send4Method(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "send", "PresentationSession", info.Holder(), info.GetIsolate());
    PresentationSession* impl = V8PresentationSession::toImpl(info.Holder());
    DOMArrayBufferView* data;
    {
        data = info[0]->IsArrayBufferView() ? V8ArrayBufferView::toImpl(v8::Local<v8::ArrayBufferView>::Cast(info[0])) : 0;
    }
    impl->send(data, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
}

static void sendMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "send", "PresentationSession", info.Holder(), info.GetIsolate());
    switch (std::min(1, info.Length())) {
    case 1:
        if (V8Blob::hasInstance(info[0], info.GetIsolate())) {
            send2Method(info);
            return;
        }
        if (V8ArrayBuffer::hasInstance(info[0], info.GetIsolate())) {
            send3Method(info);
            return;
        }
        if (V8ArrayBufferView::hasInstance(info[0], info.GetIsolate())) {
            send4Method(info);
            return;
        }
        if (true) {
            send1Method(info);
            return;
        }
        break;
    default:
        break;
    }
    if (info.Length() < 1) {
        exceptionState.throwTypeError(ExceptionMessages::notEnoughArguments(1, info.Length()));
        exceptionState.throwIfNeeded();
        return;
    }
    exceptionState.throwTypeError("No function was found that matched the signature provided.");
    exceptionState.throwIfNeeded();
    return;
}

static void sendMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    PresentationSessionV8Internal::sendMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

} // namespace PresentationSessionV8Internal

static const V8DOMConfiguration::AccessorConfiguration V8PresentationSessionAccessors[] = {
    {"id", PresentationSessionV8Internal::idAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"state", PresentationSessionV8Internal::stateAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"onstatechange", PresentationSessionV8Internal::onstatechangeAttributeGetterCallback, PresentationSessionV8Internal::onstatechangeAttributeSetterCallback, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"binaryType", PresentationSessionV8Internal::binaryTypeAttributeGetterCallback, PresentationSessionV8Internal::binaryTypeAttributeSetterCallback, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"onmessage", PresentationSessionV8Internal::onmessageAttributeGetterCallback, PresentationSessionV8Internal::onmessageAttributeSetterCallback, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
};

static const V8DOMConfiguration::MethodConfiguration V8PresentationSessionMethods[] = {
    {"close", PresentationSessionV8Internal::closeMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts},
    {"send", PresentationSessionV8Internal::sendMethodCallback, 0, 1, V8DOMConfiguration::ExposedToAllScripts},
};

static void installV8PresentationSessionTemplate(v8::Local<v8::FunctionTemplate> functionTemplate, v8::Isolate* isolate)
{
    functionTemplate->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    if (!RuntimeEnabledFeatures::presentationEnabled())
        defaultSignature = V8DOMConfiguration::installDOMClassTemplate(isolate, functionTemplate, "PresentationSession", V8EventTarget::domTemplate(isolate), V8PresentationSession::internalFieldCount, 0, 0, 0, 0, 0, 0);
    else
        defaultSignature = V8DOMConfiguration::installDOMClassTemplate(isolate, functionTemplate, "PresentationSession", V8EventTarget::domTemplate(isolate), V8PresentationSession::internalFieldCount,
            0, 0,
            V8PresentationSessionAccessors, WTF_ARRAY_LENGTH(V8PresentationSessionAccessors),
            V8PresentationSessionMethods, WTF_ARRAY_LENGTH(V8PresentationSessionMethods));
    v8::Local<v8::ObjectTemplate> instanceTemplate = functionTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = functionTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);

    // Custom toString template
#if V8_MAJOR_VERSION < 7
    functionTemplate->Set(v8AtomicString(isolate, "toString"), V8PerIsolateData::from(isolate)->toStringTemplate());
#endif
}

v8::Local<v8::FunctionTemplate> V8PresentationSession::domTemplate(v8::Isolate* isolate)
{
    return V8DOMConfiguration::domClassTemplate(isolate, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8PresentationSessionTemplate);
}

bool V8PresentationSession::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8PresentationSession::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

PresentationSession* V8PresentationSession::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : 0;
}

void V8PresentationSession::refObject(ScriptWrappable* scriptWrappable)
{
}

void V8PresentationSession::derefObject(ScriptWrappable* scriptWrappable)
{
}

} // namespace blink
