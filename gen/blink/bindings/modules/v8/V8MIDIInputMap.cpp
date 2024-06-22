// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#include "V8MIDIInputMap.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/ScriptState.h"
#include "bindings/core/v8/ScriptValue.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8Iterator.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "core/dom/ContextFeatures.h"
#include "core/dom/Document.h"
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
const WrapperTypeInfo V8MIDIInputMap::wrapperTypeInfo = { gin::kEmbedderBlink, V8MIDIInputMap::domTemplate, V8MIDIInputMap::refObject, V8MIDIInputMap::derefObject, V8MIDIInputMap::trace, 0, 0, V8MIDIInputMap::preparePrototypeObject, V8MIDIInputMap::installConditionallyEnabledProperties, "MIDIInputMap", 0, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::NotInheritFromEventTarget, WrapperTypeInfo::Independent, WrapperTypeInfo::GarbageCollectedObject };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in MIDIInputMap.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& MIDIInputMap::s_wrapperTypeInfo = V8MIDIInputMap::wrapperTypeInfo;

namespace MIDIInputMapV8Internal {

static void sizeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    MIDIInputMap* impl = V8MIDIInputMap::toImpl(holder);
    v8SetReturnValueUnsigned(info, impl->size());
}

static void sizeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    MIDIInputMapV8Internal::sizeAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void keysMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "keys", "MIDIInputMap", info.Holder(), info.GetIsolate());
    MIDIInputMap* impl = V8MIDIInputMap::toImpl(info.Holder());
    ScriptState* scriptState = ScriptState::current(info.GetIsolate());
    RawPtr<Iterator> result = impl->keysForBinding(scriptState, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
    v8SetReturnValue(info, result.release());
}

static void keysMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    MIDIInputMapV8Internal::keysMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void valuesMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "values", "MIDIInputMap", info.Holder(), info.GetIsolate());
    MIDIInputMap* impl = V8MIDIInputMap::toImpl(info.Holder());
    ScriptState* scriptState = ScriptState::current(info.GetIsolate());
    RawPtr<Iterator> result = impl->valuesForBinding(scriptState, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
    v8SetReturnValue(info, result.release());
}

static void valuesMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    MIDIInputMapV8Internal::valuesMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void entriesMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "entries", "MIDIInputMap", info.Holder(), info.GetIsolate());
    MIDIInputMap* impl = V8MIDIInputMap::toImpl(info.Holder());
    ScriptState* scriptState = ScriptState::current(info.GetIsolate());
    RawPtr<Iterator> result = impl->entriesForBinding(scriptState, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
    v8SetReturnValue(info, result.release());
}

static void entriesMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    MIDIInputMapV8Internal::entriesMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void forEachMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "forEach", "MIDIInputMap", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 1)) {
        setMinimumArityTypeError(exceptionState, 1, info.Length());
        exceptionState.throwIfNeeded();
        return;
    }
    MIDIInputMap* impl = V8MIDIInputMap::toImpl(info.Holder());
    ScriptValue callback;
    ScriptValue thisArg;
    {
        if (!info[0]->IsFunction()) {
            exceptionState.throwTypeError("The callback provided as parameter 1 is not a function.");
            exceptionState.throwIfNeeded();
            return;
        }
        callback = ScriptValue(ScriptState::current(info.GetIsolate()), info[0]);
        thisArg = ScriptValue(ScriptState::current(info.GetIsolate()), info[1]);
    }
    ScriptState* scriptState = ScriptState::current(info.GetIsolate());
    impl->forEachForBinding(scriptState, ScriptValue(scriptState, info.This()), callback, thisArg, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
}

static void forEachMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    MIDIInputMapV8Internal::forEachMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void hasMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "has", "MIDIInputMap", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 1)) {
        setMinimumArityTypeError(exceptionState, 1, info.Length());
        exceptionState.throwIfNeeded();
        return;
    }
    MIDIInputMap* impl = V8MIDIInputMap::toImpl(info.Holder());
    V8StringResource<> key;
    {
        key = info[0];
        if (!key.prepare())
            return;
    }
    ScriptState* scriptState = ScriptState::current(info.GetIsolate());
    bool result = impl->hasForBinding(scriptState, key, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
    v8SetReturnValueBool(info, result);
}

static void hasMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    MIDIInputMapV8Internal::hasMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void getMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "get", "MIDIInputMap", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 1)) {
        setMinimumArityTypeError(exceptionState, 1, info.Length());
        exceptionState.throwIfNeeded();
        return;
    }
    MIDIInputMap* impl = V8MIDIInputMap::toImpl(info.Holder());
    V8StringResource<> key;
    {
        key = info[0];
        if (!key.prepare())
            return;
    }
    ScriptState* scriptState = ScriptState::current(info.GetIsolate());
    ScriptValue result = impl->getForBinding(scriptState, key, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
    v8SetReturnValue(info, result.v8Value());
}

static void getMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    MIDIInputMapV8Internal::getMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void iteratorMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "iterator", "MIDIInputMap", info.Holder(), info.GetIsolate());
    MIDIInputMap* impl = V8MIDIInputMap::toImpl(info.Holder());
    ScriptState* scriptState = ScriptState::current(info.GetIsolate());
    RawPtr<Iterator> result = impl->iterator(scriptState, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
    v8SetReturnValue(info, result.release());
}

static void iteratorMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    MIDIInputMapV8Internal::iteratorMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

} // namespace MIDIInputMapV8Internal

static const V8DOMConfiguration::AccessorConfiguration V8MIDIInputMapAccessors[] = {
    {"size", MIDIInputMapV8Internal::sizeAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
};

static const V8DOMConfiguration::MethodConfiguration V8MIDIInputMapMethods[] = {
    {"keys", MIDIInputMapV8Internal::keysMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts},
    {"values", MIDIInputMapV8Internal::valuesMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts},
    {"entries", MIDIInputMapV8Internal::entriesMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts},
    {"forEach", MIDIInputMapV8Internal::forEachMethodCallback, 0, 1, V8DOMConfiguration::ExposedToAllScripts},
    {"has", MIDIInputMapV8Internal::hasMethodCallback, 0, 1, V8DOMConfiguration::ExposedToAllScripts},
    {"get", MIDIInputMapV8Internal::getMethodCallback, 0, 1, V8DOMConfiguration::ExposedToAllScripts},
};

static void installV8MIDIInputMapTemplate(v8::Local<v8::FunctionTemplate> functionTemplate, v8::Isolate* isolate)
{
    functionTemplate->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::installDOMClassTemplate(isolate, functionTemplate, "MIDIInputMap", v8::Local<v8::FunctionTemplate>(), V8MIDIInputMap::internalFieldCount,
        0, 0,
        V8MIDIInputMapAccessors, WTF_ARRAY_LENGTH(V8MIDIInputMapAccessors),
        V8MIDIInputMapMethods, WTF_ARRAY_LENGTH(V8MIDIInputMapMethods));
    v8::Local<v8::ObjectTemplate> instanceTemplate = functionTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = functionTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);
    static const V8DOMConfiguration::SymbolKeyedMethodConfiguration symbolKeyedIteratorConfiguration = { v8::Symbol::GetIterator, MIDIInputMapV8Internal::iteratorMethodCallback, 0, V8DOMConfiguration::ExposedToAllScripts };
    V8DOMConfiguration::installMethod(isolate, prototypeTemplate, defaultSignature, v8::DontDelete, symbolKeyedIteratorConfiguration);

    // Custom toString template
#if V8_MAJOR_VERSION < 7
    functionTemplate->Set(v8AtomicString(isolate, "toString"), V8PerIsolateData::from(isolate)->toStringTemplate());
#endif
}

v8::Local<v8::FunctionTemplate> V8MIDIInputMap::domTemplate(v8::Isolate* isolate)
{
    return V8DOMConfiguration::domClassTemplate(isolate, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8MIDIInputMapTemplate);
}

bool V8MIDIInputMap::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8MIDIInputMap::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

MIDIInputMap* V8MIDIInputMap::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : 0;
}

void V8MIDIInputMap::refObject(ScriptWrappable* scriptWrappable)
{
}

void V8MIDIInputMap::derefObject(ScriptWrappable* scriptWrappable)
{
}

} // namespace blink
