// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#include "V8DataTransferItem.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/V8Blob.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "bindings/core/v8/V8StringCallback.h"
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
WrapperTypeInfo V8DataTransferItem::wrapperTypeInfo = { gin::kEmbedderBlink, V8DataTransferItem::domTemplate, V8DataTransferItem::refObject, V8DataTransferItem::derefObject, V8DataTransferItem::trace, 0, 0, V8DataTransferItem::preparePrototypeObject, V8DataTransferItem::installConditionallyEnabledProperties, "DataTransferItem", 0, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::NotInheritFromEventTarget, WrapperTypeInfo::Independent, WrapperTypeInfo::GarbageCollectedObject };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in DataTransferItem.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& DataTransferItem::s_wrapperTypeInfo = V8DataTransferItem::wrapperTypeInfo;

namespace DataTransferItemV8Internal {

static void kindAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    DataTransferItem* impl = V8DataTransferItem::toImpl(holder);
    v8SetReturnValueString(info, impl->kind(), info.GetIsolate());
}

static void kindAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    DataTransferItemV8Internal::kindAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void typeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    DataTransferItem* impl = V8DataTransferItem::toImpl(holder);
    v8SetReturnValueString(info, impl->type(), info.GetIsolate());
}

static void typeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    DataTransferItemV8Internal::typeAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void getAsStringMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    if (UNLIKELY(info.Length() < 1)) {
        V8ThrowException::throwException(createMinimumArityTypeErrorForMethod(info.GetIsolate(), "getAsString", "DataTransferItem", 1, info.Length()), info.GetIsolate());
        return;
    }
    DataTransferItem* impl = V8DataTransferItem::toImpl(info.Holder());
    StringCallback* callback;
    {
        if (info.Length() <= 0 || !(info[0]->IsFunction() || info[0]->IsNull())) {
            V8ThrowException::throwTypeError(info.GetIsolate(), ExceptionMessages::failedToExecute("getAsString", "DataTransferItem", "The callback provided as parameter 1 is not a function."));
            return;
        }
        callback = info[0]->IsNull() ? nullptr : V8StringCallback::create(v8::Local<v8::Function>::Cast(info[0]), ScriptState::current(info.GetIsolate()));
    }
    ExecutionContext* executionContext = currentExecutionContext(info.GetIsolate());
    impl->getAsString(executionContext, callback);
}

static void getAsStringMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    DataTransferItemV8Internal::getAsStringMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void getAsFileMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    DataTransferItem* impl = V8DataTransferItem::toImpl(info.Holder());
    v8SetReturnValue(info, impl->getAsFile());
}

static void getAsFileMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    DataTransferItemV8Internal::getAsFileMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

} // namespace DataTransferItemV8Internal

static const V8DOMConfiguration::AccessorConfiguration V8DataTransferItemAccessors[] = {
    {"kind", DataTransferItemV8Internal::kindAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"type", DataTransferItemV8Internal::typeAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
};

static const V8DOMConfiguration::MethodConfiguration V8DataTransferItemMethods[] = {
    {"getAsString", DataTransferItemV8Internal::getAsStringMethodCallback, 0, 1, V8DOMConfiguration::ExposedToAllScripts},
    {"getAsFile", DataTransferItemV8Internal::getAsFileMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts},
};

void V8DataTransferItem::installV8DataTransferItemTemplate(v8::Local<v8::FunctionTemplate> functionTemplate, v8::Isolate* isolate)
{
    functionTemplate->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::installDOMClassTemplate(isolate, functionTemplate, "DataTransferItem", v8::Local<v8::FunctionTemplate>(), V8DataTransferItem::internalFieldCount,
        0, 0,
        V8DataTransferItemAccessors, WTF_ARRAY_LENGTH(V8DataTransferItemAccessors),
        V8DataTransferItemMethods, WTF_ARRAY_LENGTH(V8DataTransferItemMethods));
    v8::Local<v8::ObjectTemplate> instanceTemplate = functionTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = functionTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);

    // Custom toString template
#if V8_MAJOR_VERSION < 7
    functionTemplate->Set(v8AtomicString(isolate, "toString"), V8PerIsolateData::from(isolate)->toStringTemplate());
#endif
}

v8::Local<v8::FunctionTemplate> V8DataTransferItem::domTemplate(v8::Isolate* isolate)
{
    ASSERT(V8DataTransferItem::installV8DataTransferItemTemplateFunction != V8DataTransferItem::installV8DataTransferItemTemplate);
    return V8DOMConfiguration::domClassTemplate(isolate, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), V8DataTransferItem::installV8DataTransferItemTemplateFunction);
}

bool V8DataTransferItem::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8DataTransferItem::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

DataTransferItem* V8DataTransferItem::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : 0;
}

void V8DataTransferItem::refObject(ScriptWrappable* scriptWrappable)
{
}

void V8DataTransferItem::derefObject(ScriptWrappable* scriptWrappable)
{
}

InstallTemplateFunction V8DataTransferItem::installV8DataTransferItemTemplateFunction = (InstallTemplateFunction)&V8DataTransferItem::installV8DataTransferItemTemplate;

void V8DataTransferItem::updateWrapperTypeInfo(InstallTemplateFunction installTemplateFunction, PreparePrototypeObjectFunction preparePrototypeObjectFunction)
{
    V8DataTransferItem::installV8DataTransferItemTemplateFunction = installTemplateFunction;
    if (preparePrototypeObjectFunction)
        V8DataTransferItem::wrapperTypeInfo.preparePrototypeObjectFunction = preparePrototypeObjectFunction;
}

} // namespace blink
