// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#include "V8MutationEvent.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8Node.h"
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
const WrapperTypeInfo V8MutationEvent::wrapperTypeInfo = { gin::kEmbedderBlink, V8MutationEvent::domTemplate, V8MutationEvent::refObject, V8MutationEvent::derefObject, V8MutationEvent::trace, 0, 0, V8MutationEvent::preparePrototypeObject, V8MutationEvent::installConditionallyEnabledProperties, "MutationEvent", &V8Event::wrapperTypeInfo, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::NotInheritFromEventTarget, WrapperTypeInfo::Independent, WrapperTypeInfo::WillBeGarbageCollectedObject };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in MutationEvent.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& MutationEvent::s_wrapperTypeInfo = V8MutationEvent::wrapperTypeInfo;

namespace MutationEventV8Internal {

static void relatedNodeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    MutationEvent* impl = V8MutationEvent::toImpl(holder);
    v8SetReturnValueFast(info, WTF::getPtr(impl->relatedNode()), impl);
}

static void relatedNodeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    MutationEventV8Internal::relatedNodeAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void prevValueAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    MutationEvent* impl = V8MutationEvent::toImpl(holder);
    v8SetReturnValueString(info, impl->prevValue(), info.GetIsolate());
}

static void prevValueAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    MutationEventV8Internal::prevValueAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void newValueAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    MutationEvent* impl = V8MutationEvent::toImpl(holder);
    v8SetReturnValueString(info, impl->newValue(), info.GetIsolate());
}

static void newValueAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    MutationEventV8Internal::newValueAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void attrNameAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    MutationEvent* impl = V8MutationEvent::toImpl(holder);
    v8SetReturnValueString(info, impl->attrName(), info.GetIsolate());
}

static void attrNameAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    MutationEventV8Internal::attrNameAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void attrChangeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    MutationEvent* impl = V8MutationEvent::toImpl(holder);
    v8SetReturnValueUnsigned(info, impl->attrChange());
}

static void attrChangeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    MutationEventV8Internal::attrChangeAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void initMutationEventMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "initMutationEvent", "MutationEvent", info.Holder(), info.GetIsolate());
    MutationEvent* impl = V8MutationEvent::toImpl(info.Holder());
    V8StringResource<> type;
    bool bubbles;
    bool cancelable;
    Node* relatedNode;
    V8StringResource<> prevValue;
    V8StringResource<> newValue;
    V8StringResource<> attrName;
    unsigned attrChange;
    {
        type = info[0];
        if (!type.prepare())
            return;
        bubbles = toBoolean(info.GetIsolate(), info[1], exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
        cancelable = toBoolean(info.GetIsolate(), info[2], exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
        relatedNode = V8Node::toImplWithTypeCheck(info.GetIsolate(), info[3]);
        prevValue = info[4];
        if (!prevValue.prepare())
            return;
        newValue = info[5];
        if (!newValue.prepare())
            return;
        attrName = info[6];
        if (!attrName.prepare())
            return;
        attrChange = toUInt16(info.GetIsolate(), info[7], NormalConversion, exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
    }
    impl->initMutationEvent(type, bubbles, cancelable, relatedNode, prevValue, newValue, attrName, attrChange);
}

static void initMutationEventMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), callingExecutionContext(info.GetIsolate()), UseCounter::V8MutationEvent_InitMutationEvent_Method);
    MutationEventV8Internal::initMutationEventMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

} // namespace MutationEventV8Internal

static const V8DOMConfiguration::AccessorConfiguration V8MutationEventAccessors[] = {
    {"relatedNode", MutationEventV8Internal::relatedNodeAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"prevValue", MutationEventV8Internal::prevValueAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"newValue", MutationEventV8Internal::newValueAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"attrName", MutationEventV8Internal::attrNameAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"attrChange", MutationEventV8Internal::attrChangeAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
};

static const V8DOMConfiguration::MethodConfiguration V8MutationEventMethods[] = {
    {"initMutationEvent", MutationEventV8Internal::initMutationEventMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts},
};

static void installV8MutationEventTemplate(v8::Local<v8::FunctionTemplate> functionTemplate, v8::Isolate* isolate)
{
    functionTemplate->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::installDOMClassTemplate(isolate, functionTemplate, "MutationEvent", V8Event::domTemplate(isolate), V8MutationEvent::internalFieldCount,
        0, 0,
        V8MutationEventAccessors, WTF_ARRAY_LENGTH(V8MutationEventAccessors),
        V8MutationEventMethods, WTF_ARRAY_LENGTH(V8MutationEventMethods));
    v8::Local<v8::ObjectTemplate> instanceTemplate = functionTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = functionTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);
    static const V8DOMConfiguration::ConstantConfiguration V8MutationEventConstants[] = {
        {"MODIFICATION", 1, 0, 0, V8DOMConfiguration::ConstantTypeUnsignedShort},
        {"ADDITION", 2, 0, 0, V8DOMConfiguration::ConstantTypeUnsignedShort},
        {"REMOVAL", 3, 0, 0, V8DOMConfiguration::ConstantTypeUnsignedShort},
    };
    V8DOMConfiguration::installConstants(isolate, functionTemplate, prototypeTemplate, V8MutationEventConstants, WTF_ARRAY_LENGTH(V8MutationEventConstants));
    static_assert(1 == MutationEvent::MODIFICATION, "the value of MutationEvent_MODIFICATION does not match with implementation");
    static_assert(2 == MutationEvent::ADDITION, "the value of MutationEvent_ADDITION does not match with implementation");
    static_assert(3 == MutationEvent::REMOVAL, "the value of MutationEvent_REMOVAL does not match with implementation");

    // Custom toString template
#if V8_MAJOR_VERSION < 7
    functionTemplate->Set(v8AtomicString(isolate, "toString"), V8PerIsolateData::from(isolate)->toStringTemplate());
#endif
}

v8::Local<v8::FunctionTemplate> V8MutationEvent::domTemplate(v8::Isolate* isolate)
{
    return V8DOMConfiguration::domClassTemplate(isolate, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8MutationEventTemplate);
}

bool V8MutationEvent::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8MutationEvent::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

MutationEvent* V8MutationEvent::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : 0;
}

void V8MutationEvent::refObject(ScriptWrappable* scriptWrappable)
{
#if !ENABLE(OILPAN)
    scriptWrappable->toImpl<MutationEvent>()->ref();
#endif
}

void V8MutationEvent::derefObject(ScriptWrappable* scriptWrappable)
{
#if !ENABLE(OILPAN)
    scriptWrappable->toImpl<MutationEvent>()->deref();
#endif
}

} // namespace blink
