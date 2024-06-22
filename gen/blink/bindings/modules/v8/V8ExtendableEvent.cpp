// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#include "V8ExtendableEvent.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/ScriptState.h"
#include "bindings/core/v8/ScriptValue.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "bindings/modules/v8/V8ExtendableEventInit.h"
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
const WrapperTypeInfo V8ExtendableEvent::wrapperTypeInfo = { gin::kEmbedderBlink, V8ExtendableEvent::domTemplate, V8ExtendableEvent::refObject, V8ExtendableEvent::derefObject, V8ExtendableEvent::trace, 0, 0, V8ExtendableEvent::preparePrototypeObject, V8ExtendableEvent::installConditionallyEnabledProperties, "ExtendableEvent", &V8Event::wrapperTypeInfo, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::NotInheritFromEventTarget, WrapperTypeInfo::Independent, WrapperTypeInfo::WillBeGarbageCollectedObject };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in ExtendableEvent.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& ExtendableEvent::s_wrapperTypeInfo = V8ExtendableEvent::wrapperTypeInfo;

namespace ExtendableEventV8Internal {

static void waitUntilMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "waitUntil", "ExtendableEvent", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 1)) {
        setMinimumArityTypeError(exceptionState, 1, info.Length());
        exceptionState.throwIfNeeded();
        return;
    }
    ExtendableEvent* impl = V8ExtendableEvent::toImpl(info.Holder());
    ScriptValue value;
    {
        value = ScriptValue(ScriptState::current(info.GetIsolate()), info[0]);
    }
    ScriptState* scriptState = ScriptState::current(info.GetIsolate());
    impl->waitUntil(scriptState, value, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
}

static void waitUntilMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    ExtendableEventV8Internal::waitUntilMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void constructor(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ConstructionContext, "ExtendableEvent", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 1)) {
        setMinimumArityTypeError(exceptionState, 1, info.Length());
        exceptionState.throwIfNeeded();
        return;
    }
    V8StringResource<> type;
    ExtendableEventInit eventInitDict;
    {
        type = info[0];
        if (!type.prepare())
            return;
        if (!isUndefinedOrNull(info[1]) && !info[1]->IsObject()) {
            exceptionState.throwTypeError("parameter 2 ('eventInitDict') is not an object.");
            exceptionState.throwIfNeeded();
            return;
        }
        V8ExtendableEventInit::toImpl(info.GetIsolate(), info[1], eventInitDict, exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
    }
    RefPtrWillBeRawPtr<ExtendableEvent> impl = ExtendableEvent::create(type, eventInitDict);
    v8::Local<v8::Object> wrapper = info.Holder();
    wrapper = impl->associateWithWrapper(info.GetIsolate(), &V8ExtendableEvent::wrapperTypeInfo, wrapper);
    v8SetReturnValue(info, wrapper);
}

} // namespace ExtendableEventV8Internal

static const V8DOMConfiguration::MethodConfiguration V8ExtendableEventMethods[] = {
    {"waitUntil", ExtendableEventV8Internal::waitUntilMethodCallback, 0, 1, V8DOMConfiguration::ExposedToAllScripts},
};

void V8ExtendableEvent::constructorCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SCOPED_SAMPLING_STATE("blink", "DOMConstructor");
    if (!info.IsConstructCall()) {
        V8ThrowException::throwTypeError(info.GetIsolate(), ExceptionMessages::constructorNotCallableAsFunction("ExtendableEvent"));
        return;
    }

    if (ConstructorMode::current(info.GetIsolate()) == ConstructorMode::WrapExistingObject) {
        v8SetReturnValue(info, info.Holder());
        return;
    }

    ExtendableEventV8Internal::constructor(info);
}

static void installV8ExtendableEventTemplate(v8::Local<v8::FunctionTemplate> functionTemplate, v8::Isolate* isolate)
{
    functionTemplate->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::installDOMClassTemplate(isolate, functionTemplate, "ExtendableEvent", V8Event::domTemplate(isolate), V8ExtendableEvent::internalFieldCount,
        0, 0,
        0, 0,
        V8ExtendableEventMethods, WTF_ARRAY_LENGTH(V8ExtendableEventMethods));
    functionTemplate->SetCallHandler(V8ExtendableEvent::constructorCallback);
    functionTemplate->SetLength(1);
    v8::Local<v8::ObjectTemplate> instanceTemplate = functionTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = functionTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);

    // Custom toString template
#if V8_MAJOR_VERSION < 7
    functionTemplate->Set(v8AtomicString(isolate, "toString"), V8PerIsolateData::from(isolate)->toStringTemplate());
#endif
}

v8::Local<v8::FunctionTemplate> V8ExtendableEvent::domTemplate(v8::Isolate* isolate)
{
    return V8DOMConfiguration::domClassTemplate(isolate, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8ExtendableEventTemplate);
}

bool V8ExtendableEvent::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8ExtendableEvent::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

ExtendableEvent* V8ExtendableEvent::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : 0;
}

void V8ExtendableEvent::refObject(ScriptWrappable* scriptWrappable)
{
#if !ENABLE(OILPAN)
    scriptWrappable->toImpl<ExtendableEvent>()->ref();
#endif
}

void V8ExtendableEvent::derefObject(ScriptWrappable* scriptWrappable)
{
#if !ENABLE(OILPAN)
    scriptWrappable->toImpl<ExtendableEvent>()->deref();
#endif
}

} // namespace blink
