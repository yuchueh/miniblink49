// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#if ENABLE(WEB_AUDIO)
#include "V8BiquadFilterNode.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8Float32Array.h"
#include "bindings/core/v8/V8HiddenValue.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "bindings/modules/v8/V8AudioParam.h"
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
const WrapperTypeInfo V8BiquadFilterNode::wrapperTypeInfo = { gin::kEmbedderBlink, V8BiquadFilterNode::domTemplate, V8BiquadFilterNode::refObject, V8BiquadFilterNode::derefObject, V8BiquadFilterNode::trace, 0, 0, V8BiquadFilterNode::preparePrototypeObject, V8BiquadFilterNode::installConditionallyEnabledProperties, "BiquadFilterNode", &V8AudioNode::wrapperTypeInfo, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::InheritFromEventTarget, WrapperTypeInfo::Independent, WrapperTypeInfo::GarbageCollectedObject };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in BiquadFilterNode.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& BiquadFilterNode::s_wrapperTypeInfo = V8BiquadFilterNode::wrapperTypeInfo;

namespace BiquadFilterNodeV8Internal {

static void typeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    BiquadFilterNode* impl = V8BiquadFilterNode::toImpl(holder);
    v8SetReturnValueString(info, impl->type(), info.GetIsolate());
}

static void typeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    BiquadFilterNodeV8Internal::typeAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void typeAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    ExceptionState exceptionState(ExceptionState::SetterContext, "type", "BiquadFilterNode", holder, info.GetIsolate());
    BiquadFilterNode* impl = V8BiquadFilterNode::toImpl(holder);
    V8StringResource<> cppValue = v8Value;
    if (!cppValue.prepare())
        return;
    static const char* validValues[] = {
        "lowpass",
        "highpass",
        "bandpass",
        "lowshelf",
        "highshelf",
        "peaking",
        "notch",
        "allpass",
    };
    if (!isValidEnum(cppValue, validValues, WTF_ARRAY_LENGTH(validValues), "BiquadFilterType", exceptionState)) {
        currentExecutionContext(info.GetIsolate())->addConsoleMessage(ConsoleMessage::create(JSMessageSource, WarningMessageLevel, exceptionState.message()));
        return;
    }
    impl->setType(cppValue);
}

static void typeAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMSetter");
    BiquadFilterNodeV8Internal::typeAttributeSetter(v8Value, info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void frequencyAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    BiquadFilterNode* impl = V8BiquadFilterNode::toImpl(holder);
    RawPtr<AudioParam> cppValue(impl->frequency());
    if (cppValue && DOMDataStore::setReturnValue(info.GetReturnValue(), cppValue.get()))
        return;
    v8::Local<v8::Value> v8Value(toV8(cppValue.get(), holder, info.GetIsolate()));
    if (!v8Value.IsEmpty()) {
        V8HiddenValue::setHiddenValue(info.GetIsolate(), holder, v8AtomicString(info.GetIsolate(), "frequency"), v8Value);
        v8SetReturnValue(info, v8Value);
    }
}

static void frequencyAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    BiquadFilterNodeV8Internal::frequencyAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void detuneAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    BiquadFilterNode* impl = V8BiquadFilterNode::toImpl(holder);
    RawPtr<AudioParam> cppValue(impl->detune());
    if (cppValue && DOMDataStore::setReturnValue(info.GetReturnValue(), cppValue.get()))
        return;
    v8::Local<v8::Value> v8Value(toV8(cppValue.get(), holder, info.GetIsolate()));
    if (!v8Value.IsEmpty()) {
        V8HiddenValue::setHiddenValue(info.GetIsolate(), holder, v8AtomicString(info.GetIsolate(), "detune"), v8Value);
        v8SetReturnValue(info, v8Value);
    }
}

static void detuneAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    BiquadFilterNodeV8Internal::detuneAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void QAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    BiquadFilterNode* impl = V8BiquadFilterNode::toImpl(holder);
    RawPtr<AudioParam> cppValue(impl->q());
    if (cppValue && DOMDataStore::setReturnValue(info.GetReturnValue(), cppValue.get()))
        return;
    v8::Local<v8::Value> v8Value(toV8(cppValue.get(), holder, info.GetIsolate()));
    if (!v8Value.IsEmpty()) {
        V8HiddenValue::setHiddenValue(info.GetIsolate(), holder, v8AtomicString(info.GetIsolate(), "Q"), v8Value);
        v8SetReturnValue(info, v8Value);
    }
}

static void QAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    BiquadFilterNodeV8Internal::QAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void gainAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    BiquadFilterNode* impl = V8BiquadFilterNode::toImpl(holder);
    RawPtr<AudioParam> cppValue(impl->gain());
    if (cppValue && DOMDataStore::setReturnValue(info.GetReturnValue(), cppValue.get()))
        return;
    v8::Local<v8::Value> v8Value(toV8(cppValue.get(), holder, info.GetIsolate()));
    if (!v8Value.IsEmpty()) {
        V8HiddenValue::setHiddenValue(info.GetIsolate(), holder, v8AtomicString(info.GetIsolate(), "gain"), v8Value);
        v8SetReturnValue(info, v8Value);
    }
}

static void gainAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    BiquadFilterNodeV8Internal::gainAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void getFrequencyResponseMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    if (UNLIKELY(info.Length() < 3)) {
        V8ThrowException::throwException(createMinimumArityTypeErrorForMethod(info.GetIsolate(), "getFrequencyResponse", "BiquadFilterNode", 3, info.Length()), info.GetIsolate());
        return;
    }
    BiquadFilterNode* impl = V8BiquadFilterNode::toImpl(info.Holder());
    DOMFloat32Array* frequencyHz;
    DOMFloat32Array* magResponse;
    DOMFloat32Array* phaseResponse;
    {
        frequencyHz = info[0]->IsFloat32Array() ? V8Float32Array::toImpl(v8::Local<v8::Float32Array>::Cast(info[0])) : 0;
        magResponse = info[1]->IsFloat32Array() ? V8Float32Array::toImpl(v8::Local<v8::Float32Array>::Cast(info[1])) : 0;
        phaseResponse = info[2]->IsFloat32Array() ? V8Float32Array::toImpl(v8::Local<v8::Float32Array>::Cast(info[2])) : 0;
    }
    impl->getFrequencyResponse(frequencyHz, magResponse, phaseResponse);
}

static void getFrequencyResponseMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    BiquadFilterNodeV8Internal::getFrequencyResponseMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

} // namespace BiquadFilterNodeV8Internal

static const V8DOMConfiguration::AccessorConfiguration V8BiquadFilterNodeAccessors[] = {
    {"type", BiquadFilterNodeV8Internal::typeAttributeGetterCallback, BiquadFilterNodeV8Internal::typeAttributeSetterCallback, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"frequency", BiquadFilterNodeV8Internal::frequencyAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"detune", BiquadFilterNodeV8Internal::detuneAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"Q", BiquadFilterNodeV8Internal::QAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"gain", BiquadFilterNodeV8Internal::gainAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
};

static const V8DOMConfiguration::MethodConfiguration V8BiquadFilterNodeMethods[] = {
    {"getFrequencyResponse", BiquadFilterNodeV8Internal::getFrequencyResponseMethodCallback, 0, 3, V8DOMConfiguration::ExposedToAllScripts},
};

static void installV8BiquadFilterNodeTemplate(v8::Local<v8::FunctionTemplate> functionTemplate, v8::Isolate* isolate)
{
    functionTemplate->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::installDOMClassTemplate(isolate, functionTemplate, "BiquadFilterNode", V8AudioNode::domTemplate(isolate), V8BiquadFilterNode::internalFieldCount,
        0, 0,
        V8BiquadFilterNodeAccessors, WTF_ARRAY_LENGTH(V8BiquadFilterNodeAccessors),
        V8BiquadFilterNodeMethods, WTF_ARRAY_LENGTH(V8BiquadFilterNodeMethods));
    v8::Local<v8::ObjectTemplate> instanceTemplate = functionTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = functionTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);

    // Custom toString template
#if V8_MAJOR_VERSION < 7
    functionTemplate->Set(v8AtomicString(isolate, "toString"), V8PerIsolateData::from(isolate)->toStringTemplate());
#endif
}

v8::Local<v8::FunctionTemplate> V8BiquadFilterNode::domTemplate(v8::Isolate* isolate)
{
    return V8DOMConfiguration::domClassTemplate(isolate, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8BiquadFilterNodeTemplate);
}

bool V8BiquadFilterNode::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8BiquadFilterNode::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

BiquadFilterNode* V8BiquadFilterNode::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : 0;
}

void V8BiquadFilterNode::refObject(ScriptWrappable* scriptWrappable)
{
}

void V8BiquadFilterNode::derefObject(ScriptWrappable* scriptWrappable)
{
}

} // namespace blink
#endif // ENABLE(WEB_AUDIO)
