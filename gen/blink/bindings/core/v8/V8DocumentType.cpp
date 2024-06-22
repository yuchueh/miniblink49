// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#include "V8DocumentType.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/UnionTypesCore.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8Node.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "core/dom/ChildNode.h"
#include "core/dom/ContextFeatures.h"
#include "core/dom/Document.h"
#include "core/dom/custom/CustomElementProcessingStack.h"
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
const WrapperTypeInfo V8DocumentType::wrapperTypeInfo = { gin::kEmbedderBlink, V8DocumentType::domTemplate, V8DocumentType::refObject, V8DocumentType::derefObject, V8DocumentType::trace, 0, 0, V8DocumentType::preparePrototypeObject, V8DocumentType::installConditionallyEnabledProperties, "DocumentType", &V8Node::wrapperTypeInfo, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::NodeClassId, WrapperTypeInfo::InheritFromEventTarget, WrapperTypeInfo::Dependent, WrapperTypeInfo::WillBeGarbageCollectedObject };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in DocumentType.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& DocumentType::s_wrapperTypeInfo = V8DocumentType::wrapperTypeInfo;

namespace DocumentTypeV8Internal {

static void nameAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    DocumentType* impl = V8DocumentType::toImpl(holder);
    v8SetReturnValueString(info, impl->name(), info.GetIsolate());
}

static void nameAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    DocumentTypeV8Internal::nameAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void publicIdAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    DocumentType* impl = V8DocumentType::toImpl(holder);
    v8SetReturnValueString(info, impl->publicId(), info.GetIsolate());
}

static void publicIdAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    DocumentTypeV8Internal::publicIdAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void systemIdAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    DocumentType* impl = V8DocumentType::toImpl(holder);
    v8SetReturnValueString(info, impl->systemId(), info.GetIsolate());
}

static void systemIdAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    DocumentTypeV8Internal::systemIdAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void beforeMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "before", "DocumentType", info.Holder(), info.GetIsolate());
    DocumentType* impl = V8DocumentType::toImpl(info.Holder());
    CustomElementProcessingStack::CallbackDeliveryScope deliveryScope;
    HeapVector<NodeOrString> nodes;
    {
        nodes = toImplArguments<HeapVector<NodeOrString>>(info, 0, exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
    }
    ChildNode::before(*impl, nodes, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
}

static void beforeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    DocumentTypeV8Internal::beforeMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void afterMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "after", "DocumentType", info.Holder(), info.GetIsolate());
    DocumentType* impl = V8DocumentType::toImpl(info.Holder());
    CustomElementProcessingStack::CallbackDeliveryScope deliveryScope;
    HeapVector<NodeOrString> nodes;
    {
        nodes = toImplArguments<HeapVector<NodeOrString>>(info, 0, exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
    }
    ChildNode::after(*impl, nodes, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
}

static void afterMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    DocumentTypeV8Internal::afterMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void replaceWithMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "replaceWith", "DocumentType", info.Holder(), info.GetIsolate());
    DocumentType* impl = V8DocumentType::toImpl(info.Holder());
    CustomElementProcessingStack::CallbackDeliveryScope deliveryScope;
    HeapVector<NodeOrString> nodes;
    {
        nodes = toImplArguments<HeapVector<NodeOrString>>(info, 0, exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
    }
    ChildNode::replaceWith(*impl, nodes, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
}

static void replaceWithMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    DocumentTypeV8Internal::replaceWithMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void removeMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "remove", "DocumentType", info.Holder(), info.GetIsolate());
    DocumentType* impl = V8DocumentType::toImpl(info.Holder());
    CustomElementProcessingStack::CallbackDeliveryScope deliveryScope;
    ChildNode::remove(*impl, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
}

static void removeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    DocumentTypeV8Internal::removeMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

} // namespace DocumentTypeV8Internal

static const V8DOMConfiguration::AccessorConfiguration V8DocumentTypeAccessors[] = {
    {"name", DocumentTypeV8Internal::nameAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"publicId", DocumentTypeV8Internal::publicIdAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"systemId", DocumentTypeV8Internal::systemIdAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
};

static const V8DOMConfiguration::MethodConfiguration V8DocumentTypeMethods[] = {
    {"remove", DocumentTypeV8Internal::removeMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts},
};

static void installV8DocumentTypeTemplate(v8::Local<v8::FunctionTemplate> functionTemplate, v8::Isolate* isolate)
{
    functionTemplate->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::installDOMClassTemplate(isolate, functionTemplate, "DocumentType", V8Node::domTemplate(isolate), V8DocumentType::internalFieldCount,
        0, 0,
        V8DocumentTypeAccessors, WTF_ARRAY_LENGTH(V8DocumentTypeAccessors),
        V8DocumentTypeMethods, WTF_ARRAY_LENGTH(V8DocumentTypeMethods));
    v8::Local<v8::ObjectTemplate> instanceTemplate = functionTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = functionTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);
    if (RuntimeEnabledFeatures::dOMConvenienceAPIEnabled()) {
        const V8DOMConfiguration::MethodConfiguration beforeMethodConfiguration = {
            "before", DocumentTypeV8Internal::beforeMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts,
        };
        V8DOMConfiguration::installMethod(isolate, prototypeTemplate, defaultSignature, v8::None, beforeMethodConfiguration);
    }
    if (RuntimeEnabledFeatures::dOMConvenienceAPIEnabled()) {
        const V8DOMConfiguration::MethodConfiguration afterMethodConfiguration = {
            "after", DocumentTypeV8Internal::afterMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts,
        };
        V8DOMConfiguration::installMethod(isolate, prototypeTemplate, defaultSignature, v8::None, afterMethodConfiguration);
    }
    if (RuntimeEnabledFeatures::dOMConvenienceAPIEnabled()) {
        const V8DOMConfiguration::MethodConfiguration replaceWithMethodConfiguration = {
            "replaceWith", DocumentTypeV8Internal::replaceWithMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts,
        };
        V8DOMConfiguration::installMethod(isolate, prototypeTemplate, defaultSignature, v8::None, replaceWithMethodConfiguration);
    }

    // Custom toString template
#if V8_MAJOR_VERSION < 7
    functionTemplate->Set(v8AtomicString(isolate, "toString"), V8PerIsolateData::from(isolate)->toStringTemplate());
#endif
}

v8::Local<v8::FunctionTemplate> V8DocumentType::domTemplate(v8::Isolate* isolate)
{
    return V8DOMConfiguration::domClassTemplate(isolate, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8DocumentTypeTemplate);
}

bool V8DocumentType::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8DocumentType::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

DocumentType* V8DocumentType::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : 0;
}

void V8DocumentType::preparePrototypeObject(v8::Isolate* isolate, v8::Local<v8::Object> prototypeObject, v8::Local<v8::FunctionTemplate> interfaceTemplate)
{
    v8::Local<v8::Context> v8Context(prototypeObject->CreationContext());
    v8::Local<v8::Name> unscopablesSymbol(v8::Symbol::GetUnscopables(isolate));
    v8::Local<v8::Object> unscopeables;
    if (v8CallBoolean(prototypeObject->HasOwnProperty(v8Context, unscopablesSymbol)))
        unscopeables = prototypeObject->Get(v8Context, unscopablesSymbol).ToLocalChecked().As<v8::Object>();
    else
        unscopeables = v8::Object::New(isolate);
    if (RuntimeEnabledFeatures::dOMConvenienceAPIEnabled()) {
        unscopeables->CreateDataProperty(v8Context, v8AtomicString(isolate, "after"), v8::True(isolate)).FromJust();
    }
    if (RuntimeEnabledFeatures::dOMConvenienceAPIEnabled()) {
        unscopeables->CreateDataProperty(v8Context, v8AtomicString(isolate, "before"), v8::True(isolate)).FromJust();
    }
    unscopeables->CreateDataProperty(v8Context, v8AtomicString(isolate, "remove"), v8::True(isolate)).FromJust();
    if (RuntimeEnabledFeatures::dOMConvenienceAPIEnabled()) {
        unscopeables->CreateDataProperty(v8Context, v8AtomicString(isolate, "replaceWith"), v8::True(isolate)).FromJust();
    }
    prototypeObject->CreateDataProperty(v8Context, unscopablesSymbol, unscopeables).FromJust();
}

void V8DocumentType::refObject(ScriptWrappable* scriptWrappable)
{
#if !ENABLE(OILPAN)
    scriptWrappable->toImpl<DocumentType>()->ref();
#endif
}

void V8DocumentType::derefObject(ScriptWrappable* scriptWrappable)
{
#if !ENABLE(OILPAN)
    scriptWrappable->toImpl<DocumentType>()->deref();
#endif
}

} // namespace blink
