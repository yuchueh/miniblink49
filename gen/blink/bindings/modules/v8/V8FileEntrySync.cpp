// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#include "V8FileEntrySync.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8File.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "bindings/modules/v8/V8FileWriterSync.h"
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
const WrapperTypeInfo V8FileEntrySync::wrapperTypeInfo = { gin::kEmbedderBlink, V8FileEntrySync::domTemplate, V8FileEntrySync::refObject, V8FileEntrySync::derefObject, V8FileEntrySync::trace, 0, 0, V8FileEntrySync::preparePrototypeObject, V8FileEntrySync::installConditionallyEnabledProperties, "FileEntrySync", &V8EntrySync::wrapperTypeInfo, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::NotInheritFromEventTarget, WrapperTypeInfo::Independent, WrapperTypeInfo::GarbageCollectedObject };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in FileEntrySync.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& FileEntrySync::s_wrapperTypeInfo = V8FileEntrySync::wrapperTypeInfo;

namespace FileEntrySyncV8Internal {

static void fileMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "file", "FileEntrySync", info.Holder(), info.GetIsolate());
    FileEntrySync* impl = V8FileEntrySync::toImpl(info.Holder());
    RawPtr<File> result = impl->file(exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
    v8SetReturnValue(info, result.release());
}

static void fileMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    FileEntrySyncV8Internal::fileMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void createWriterMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "createWriter", "FileEntrySync", info.Holder(), info.GetIsolate());
    FileEntrySync* impl = V8FileEntrySync::toImpl(info.Holder());
    RawPtr<FileWriterSync> result = impl->createWriter(exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
    v8SetReturnValue(info, result.release());
}

static void createWriterMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    FileEntrySyncV8Internal::createWriterMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

} // namespace FileEntrySyncV8Internal

static const V8DOMConfiguration::MethodConfiguration V8FileEntrySyncMethods[] = {
    {"file", FileEntrySyncV8Internal::fileMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts},
    {"createWriter", FileEntrySyncV8Internal::createWriterMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts},
};

static void installV8FileEntrySyncTemplate(v8::Local<v8::FunctionTemplate> functionTemplate, v8::Isolate* isolate)
{
    functionTemplate->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::installDOMClassTemplate(isolate, functionTemplate, "FileEntrySync", V8EntrySync::domTemplate(isolate), V8FileEntrySync::internalFieldCount,
        0, 0,
        0, 0,
        V8FileEntrySyncMethods, WTF_ARRAY_LENGTH(V8FileEntrySyncMethods));
    v8::Local<v8::ObjectTemplate> instanceTemplate = functionTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = functionTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);

    // Custom toString template
#if V8_MAJOR_VERSION < 7
    functionTemplate->Set(v8AtomicString(isolate, "toString"), V8PerIsolateData::from(isolate)->toStringTemplate());
#endif
}

v8::Local<v8::FunctionTemplate> V8FileEntrySync::domTemplate(v8::Isolate* isolate)
{
    return V8DOMConfiguration::domClassTemplate(isolate, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8FileEntrySyncTemplate);
}

bool V8FileEntrySync::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8FileEntrySync::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

FileEntrySync* V8FileEntrySync::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : 0;
}

void V8FileEntrySync::refObject(ScriptWrappable* scriptWrappable)
{
}

void V8FileEntrySync::derefObject(ScriptWrappable* scriptWrappable)
{
}

} // namespace blink
