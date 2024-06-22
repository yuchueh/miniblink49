// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#if ENABLE(WEB_AUDIO)
#include "V8OfflineAudioContext.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/ScriptPromise.h"
#include "bindings/core/v8/ScriptState.h"
#include "bindings/core/v8/V8AbstractEventListener.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8EventListenerList.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "core/dom/ContextFeatures.h"
#include "core/dom/Document.h"
#include "core/frame/LocalDOMWindow.h"
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
const WrapperTypeInfo V8OfflineAudioContext::wrapperTypeInfo = { gin::kEmbedderBlink, V8OfflineAudioContext::domTemplate, V8OfflineAudioContext::refObject, V8OfflineAudioContext::derefObject, V8OfflineAudioContext::trace, V8OfflineAudioContext::toActiveDOMObject, 0, V8OfflineAudioContext::preparePrototypeObject, V8OfflineAudioContext::installConditionallyEnabledProperties, "OfflineAudioContext", &V8AudioContext::wrapperTypeInfo, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::InheritFromEventTarget, WrapperTypeInfo::Dependent, WrapperTypeInfo::GarbageCollectedObject };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in OfflineAudioContext.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& OfflineAudioContext::s_wrapperTypeInfo = V8OfflineAudioContext::wrapperTypeInfo;

namespace OfflineAudioContextV8Internal {

static void oncompleteAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    OfflineAudioContext* impl = V8OfflineAudioContext::toImpl(holder);
    EventListener* cppValue(impl->oncomplete());
    v8SetReturnValue(info, cppValue ? v8::Local<v8::Value>(V8AbstractEventListener::cast(cppValue)->getListenerObject(impl->executionContext())) : v8::Local<v8::Value>(v8::Null(info.GetIsolate())));
}

static void oncompleteAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    OfflineAudioContextV8Internal::oncompleteAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void oncompleteAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    OfflineAudioContext* impl = V8OfflineAudioContext::toImpl(holder);
    moveEventListenerToNewWrapper(info.GetIsolate(), holder, impl->oncomplete(), v8Value, V8OfflineAudioContext::eventListenerCacheIndex);
    impl->setOncomplete(V8EventListenerList::getEventListener(ScriptState::current(info.GetIsolate()), v8Value, true, ListenerFindOrCreate));
}

static void oncompleteAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMSetter");
    OfflineAudioContextV8Internal::oncompleteAttributeSetter(v8Value, info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void startRenderingMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    OfflineAudioContext* impl = V8OfflineAudioContext::toImpl(info.Holder());
    ScriptState* scriptState = ScriptState::current(info.GetIsolate());
    ScriptPromise result = impl->startOfflineRendering(scriptState);
    v8SetReturnValue(info, result.v8Value());
}

static void startRenderingMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    OfflineAudioContextV8Internal::startRenderingMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void constructor(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ConstructionContext, "OfflineAudioContext", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 3)) {
        setMinimumArityTypeError(exceptionState, 3, info.Length());
        exceptionState.throwIfNeeded();
        return;
    }
    unsigned numberOfChannels;
    unsigned numberOfFrames;
    float sampleRate;
    {
        numberOfChannels = toUInt32(info.GetIsolate(), info[0], NormalConversion, exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
        numberOfFrames = toUInt32(info.GetIsolate(), info[1], NormalConversion, exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
        sampleRate = toRestrictedFloat(info.GetIsolate(), info[2], exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
    }
    ExecutionContext* executionContext = currentExecutionContext(info.GetIsolate());
    RawPtr<OfflineAudioContext> impl = OfflineAudioContext::create(executionContext, numberOfChannels, numberOfFrames, sampleRate, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
    v8::Local<v8::Object> wrapper = info.Holder();
    wrapper = impl->associateWithWrapper(info.GetIsolate(), &V8OfflineAudioContext::wrapperTypeInfo, wrapper);
    v8SetReturnValue(info, wrapper);
}

} // namespace OfflineAudioContextV8Internal

static const V8DOMConfiguration::AccessorConfiguration V8OfflineAudioContextAccessors[] = {
    {"oncomplete", OfflineAudioContextV8Internal::oncompleteAttributeGetterCallback, OfflineAudioContextV8Internal::oncompleteAttributeSetterCallback, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
};

static const V8DOMConfiguration::MethodConfiguration V8OfflineAudioContextMethods[] = {
    {"startRendering", OfflineAudioContextV8Internal::startRenderingMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts},
};

void V8OfflineAudioContext::constructorCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SCOPED_SAMPLING_STATE("blink", "DOMConstructor");
    if (!info.IsConstructCall()) {
        V8ThrowException::throwTypeError(info.GetIsolate(), ExceptionMessages::constructorNotCallableAsFunction("OfflineAudioContext"));
        return;
    }

    if (ConstructorMode::current(info.GetIsolate()) == ConstructorMode::WrapExistingObject) {
        v8SetReturnValue(info, info.Holder());
        return;
    }

    OfflineAudioContextV8Internal::constructor(info);
}

static void installV8OfflineAudioContextTemplate(v8::Local<v8::FunctionTemplate> functionTemplate, v8::Isolate* isolate)
{
    functionTemplate->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::installDOMClassTemplate(isolate, functionTemplate, "OfflineAudioContext", V8AudioContext::domTemplate(isolate), V8OfflineAudioContext::internalFieldCount,
        0, 0,
        V8OfflineAudioContextAccessors, WTF_ARRAY_LENGTH(V8OfflineAudioContextAccessors),
        V8OfflineAudioContextMethods, WTF_ARRAY_LENGTH(V8OfflineAudioContextMethods));
    functionTemplate->SetCallHandler(V8OfflineAudioContext::constructorCallback);
    functionTemplate->SetLength(3);
    v8::Local<v8::ObjectTemplate> instanceTemplate = functionTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = functionTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);

    // Custom toString template
#if V8_MAJOR_VERSION < 7
    functionTemplate->Set(v8AtomicString(isolate, "toString"), V8PerIsolateData::from(isolate)->toStringTemplate());
#endif
}

v8::Local<v8::FunctionTemplate> V8OfflineAudioContext::domTemplate(v8::Isolate* isolate)
{
    return V8DOMConfiguration::domClassTemplate(isolate, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8OfflineAudioContextTemplate);
}

bool V8OfflineAudioContext::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8OfflineAudioContext::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

OfflineAudioContext* V8OfflineAudioContext::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : 0;
}

ActiveDOMObject* V8OfflineAudioContext::toActiveDOMObject(v8::Local<v8::Object> wrapper)
{
    return toImpl(wrapper);
}

void V8OfflineAudioContext::refObject(ScriptWrappable* scriptWrappable)
{
}

void V8OfflineAudioContext::derefObject(ScriptWrappable* scriptWrappable)
{
}

} // namespace blink
#endif // ENABLE(WEB_AUDIO)
