// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#include "V8ReadableStream.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/ScriptPromise.h"
#include "bindings/core/v8/ScriptState.h"
#include "bindings/core/v8/ScriptValue.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "bindings/core/v8/V8ReadableStreamReader.h"
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
const WrapperTypeInfo V8ReadableStream::wrapperTypeInfo = { gin::kEmbedderBlink, V8ReadableStream::domTemplate, V8ReadableStream::refObject, V8ReadableStream::derefObject, V8ReadableStream::trace, 0, 0, V8ReadableStream::preparePrototypeObject, V8ReadableStream::installConditionallyEnabledProperties, "ReadableStream", 0, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::NotInheritFromEventTarget, WrapperTypeInfo::Independent, WrapperTypeInfo::GarbageCollectedObject };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in ReadableStream.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& ReadableStream::s_wrapperTypeInfo = V8ReadableStream::wrapperTypeInfo;

namespace ReadableStreamV8Internal {

static void getReaderMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "getReader", "ReadableStream", info.Holder(), info.GetIsolate());
    ReadableStream* impl = V8ReadableStream::toImpl(info.Holder());
    ExecutionContext* executionContext = currentExecutionContext(info.GetIsolate());
    RawPtr<ReadableStreamReader> result = impl->getReader(executionContext, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
    v8SetReturnValue(info, result.release());
}

static void getReaderMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    ReadableStreamV8Internal::getReaderMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void cancelMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ReadableStream* impl = V8ReadableStream::toImpl(info.Holder());
    ScriptValue reason;
    {
        if (UNLIKELY(info.Length() <= 0)) {
            ScriptState* scriptState = ScriptState::current(info.GetIsolate());
            ScriptPromise result = impl->cancel(scriptState);
            v8SetReturnValue(info, result.v8Value());
            return;
        }
        reason = ScriptValue(ScriptState::current(info.GetIsolate()), info[0]);
    }
    ScriptState* scriptState = ScriptState::current(info.GetIsolate());
    ScriptPromise result = impl->cancel(scriptState, reason);
    v8SetReturnValue(info, result.v8Value());
}

static void cancelMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    ReadableStreamV8Internal::cancelMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

} // namespace ReadableStreamV8Internal

static const V8DOMConfiguration::MethodConfiguration V8ReadableStreamMethods[] = {
    {"getReader", ReadableStreamV8Internal::getReaderMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts},
    {"cancel", ReadableStreamV8Internal::cancelMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts},
};

static void installV8ReadableStreamTemplate(v8::Local<v8::FunctionTemplate> functionTemplate, v8::Isolate* isolate)
{
    functionTemplate->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::installDOMClassTemplate(isolate, functionTemplate, "ReadableStream", v8::Local<v8::FunctionTemplate>(), V8ReadableStream::internalFieldCount,
        0, 0,
        0, 0,
        V8ReadableStreamMethods, WTF_ARRAY_LENGTH(V8ReadableStreamMethods));
    v8::Local<v8::ObjectTemplate> instanceTemplate = functionTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = functionTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);

    // Custom toString template
#if V8_MAJOR_VERSION < 7
    functionTemplate->Set(v8AtomicString(isolate, "toString"), V8PerIsolateData::from(isolate)->toStringTemplate());
#endif
}

v8::Local<v8::FunctionTemplate> V8ReadableStream::domTemplate(v8::Isolate* isolate)
{
    return V8DOMConfiguration::domClassTemplate(isolate, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8ReadableStreamTemplate);
}

bool V8ReadableStream::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8ReadableStream::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

ReadableStream* V8ReadableStream::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : 0;
}

void V8ReadableStream::refObject(ScriptWrappable* scriptWrappable)
{
}

void V8ReadableStream::derefObject(ScriptWrappable* scriptWrappable)
{
}

} // namespace blink
