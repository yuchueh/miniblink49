// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#include "V8HTMLTableSectionElement.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8HTMLCollection.h"
#include "bindings/core/v8/V8HTMLElement.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "core/HTMLNames.h"
#include "core/dom/ClassCollection.h"
#include "core/dom/ContextFeatures.h"
#include "core/dom/Document.h"
#include "core/dom/TagCollection.h"
#include "core/dom/custom/CustomElementProcessingStack.h"
#include "core/html/HTMLCollection.h"
#include "core/html/HTMLDataListOptionsCollection.h"
#include "core/html/HTMLFormControlsCollection.h"
#include "core/html/HTMLTableRowsCollection.h"
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
const WrapperTypeInfo V8HTMLTableSectionElement::wrapperTypeInfo = { gin::kEmbedderBlink, V8HTMLTableSectionElement::domTemplate, V8HTMLTableSectionElement::refObject, V8HTMLTableSectionElement::derefObject, V8HTMLTableSectionElement::trace, 0, 0, V8HTMLTableSectionElement::preparePrototypeObject, V8HTMLTableSectionElement::installConditionallyEnabledProperties, "HTMLTableSectionElement", &V8HTMLElement::wrapperTypeInfo, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::NodeClassId, WrapperTypeInfo::InheritFromEventTarget, WrapperTypeInfo::Dependent, WrapperTypeInfo::WillBeGarbageCollectedObject };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in HTMLTableSectionElement.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& HTMLTableSectionElement::s_wrapperTypeInfo = V8HTMLTableSectionElement::wrapperTypeInfo;

namespace HTMLTableSectionElementV8Internal {

static void rowsAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    HTMLTableSectionElement* impl = V8HTMLTableSectionElement::toImpl(holder);
    v8SetReturnValueFast(info, WTF::getPtr(impl->rows()), impl);
}

static void rowsAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    HTMLTableSectionElementV8Internal::rowsAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void alignAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    Element* impl = V8Element::toImpl(holder);
    v8SetReturnValueString(info, impl->fastGetAttribute(HTMLNames::alignAttr), info.GetIsolate());
}

static void alignAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    HTMLTableSectionElementV8Internal::alignAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void alignAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    Element* impl = V8Element::toImpl(holder);
    V8StringResource<> cppValue = v8Value;
    if (!cppValue.prepare())
        return;
    impl->setAttribute(HTMLNames::alignAttr, cppValue);
}

static void alignAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMSetter");
    CustomElementProcessingStack::CallbackDeliveryScope deliveryScope;
    HTMLTableSectionElementV8Internal::alignAttributeSetter(v8Value, info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void chAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    Element* impl = V8Element::toImpl(holder);
    v8SetReturnValueString(info, impl->fastGetAttribute(HTMLNames::charAttr), info.GetIsolate());
}

static void chAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    HTMLTableSectionElementV8Internal::chAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void chAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    Element* impl = V8Element::toImpl(holder);
    V8StringResource<> cppValue = v8Value;
    if (!cppValue.prepare())
        return;
    impl->setAttribute(HTMLNames::charAttr, cppValue);
}

static void chAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMSetter");
    CustomElementProcessingStack::CallbackDeliveryScope deliveryScope;
    HTMLTableSectionElementV8Internal::chAttributeSetter(v8Value, info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void chOffAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    Element* impl = V8Element::toImpl(holder);
    v8SetReturnValueString(info, impl->fastGetAttribute(HTMLNames::charoffAttr), info.GetIsolate());
}

static void chOffAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    HTMLTableSectionElementV8Internal::chOffAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void chOffAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    Element* impl = V8Element::toImpl(holder);
    V8StringResource<> cppValue = v8Value;
    if (!cppValue.prepare())
        return;
    impl->setAttribute(HTMLNames::charoffAttr, cppValue);
}

static void chOffAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMSetter");
    CustomElementProcessingStack::CallbackDeliveryScope deliveryScope;
    HTMLTableSectionElementV8Internal::chOffAttributeSetter(v8Value, info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void vAlignAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    Element* impl = V8Element::toImpl(holder);
    v8SetReturnValueString(info, impl->fastGetAttribute(HTMLNames::valignAttr), info.GetIsolate());
}

static void vAlignAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    HTMLTableSectionElementV8Internal::vAlignAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void vAlignAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    Element* impl = V8Element::toImpl(holder);
    V8StringResource<> cppValue = v8Value;
    if (!cppValue.prepare())
        return;
    impl->setAttribute(HTMLNames::valignAttr, cppValue);
}

static void vAlignAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMSetter");
    CustomElementProcessingStack::CallbackDeliveryScope deliveryScope;
    HTMLTableSectionElementV8Internal::vAlignAttributeSetter(v8Value, info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void insertRowMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "insertRow", "HTMLTableSectionElement", info.Holder(), info.GetIsolate());
    HTMLTableSectionElement* impl = V8HTMLTableSectionElement::toImpl(info.Holder());
    int index;
    {
        if (!info[0]->IsUndefined()) {
            index = toInt32(info.GetIsolate(), info[0], NormalConversion, exceptionState);
            if (exceptionState.throwIfNeeded())
                return;
        } else {
            index = -1;
        }
    }
    RefPtrWillBeRawPtr<HTMLElement> result = impl->insertRow(index, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
    v8SetReturnValueFast(info, WTF::getPtr(result.release()), impl);
}

static void insertRowMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    HTMLTableSectionElementV8Internal::insertRowMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void deleteRowMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "deleteRow", "HTMLTableSectionElement", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 1)) {
        setMinimumArityTypeError(exceptionState, 1, info.Length());
        exceptionState.throwIfNeeded();
        return;
    }
    HTMLTableSectionElement* impl = V8HTMLTableSectionElement::toImpl(info.Holder());
    int index;
    {
        index = toInt32(info.GetIsolate(), info[0], NormalConversion, exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
    }
    impl->deleteRow(index, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
}

static void deleteRowMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    HTMLTableSectionElementV8Internal::deleteRowMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

} // namespace HTMLTableSectionElementV8Internal

static const V8DOMConfiguration::AccessorConfiguration V8HTMLTableSectionElementAccessors[] = {
    {"rows", HTMLTableSectionElementV8Internal::rowsAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"align", HTMLTableSectionElementV8Internal::alignAttributeGetterCallback, HTMLTableSectionElementV8Internal::alignAttributeSetterCallback, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"ch", HTMLTableSectionElementV8Internal::chAttributeGetterCallback, HTMLTableSectionElementV8Internal::chAttributeSetterCallback, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"chOff", HTMLTableSectionElementV8Internal::chOffAttributeGetterCallback, HTMLTableSectionElementV8Internal::chOffAttributeSetterCallback, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"vAlign", HTMLTableSectionElementV8Internal::vAlignAttributeGetterCallback, HTMLTableSectionElementV8Internal::vAlignAttributeSetterCallback, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
};

static const V8DOMConfiguration::MethodConfiguration V8HTMLTableSectionElementMethods[] = {
    {"insertRow", HTMLTableSectionElementV8Internal::insertRowMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts},
    {"deleteRow", HTMLTableSectionElementV8Internal::deleteRowMethodCallback, 0, 1, V8DOMConfiguration::ExposedToAllScripts},
};

static void installV8HTMLTableSectionElementTemplate(v8::Local<v8::FunctionTemplate> functionTemplate, v8::Isolate* isolate)
{
    functionTemplate->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::installDOMClassTemplate(isolate, functionTemplate, "HTMLTableSectionElement", V8HTMLElement::domTemplate(isolate), V8HTMLTableSectionElement::internalFieldCount,
        0, 0,
        V8HTMLTableSectionElementAccessors, WTF_ARRAY_LENGTH(V8HTMLTableSectionElementAccessors),
        V8HTMLTableSectionElementMethods, WTF_ARRAY_LENGTH(V8HTMLTableSectionElementMethods));
    v8::Local<v8::ObjectTemplate> instanceTemplate = functionTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = functionTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);

    // Custom toString template
#if V8_MAJOR_VERSION < 7
    functionTemplate->Set(v8AtomicString(isolate, "toString"), V8PerIsolateData::from(isolate)->toStringTemplate());
#endif
}

v8::Local<v8::FunctionTemplate> V8HTMLTableSectionElement::domTemplate(v8::Isolate* isolate)
{
    return V8DOMConfiguration::domClassTemplate(isolate, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8HTMLTableSectionElementTemplate);
}

bool V8HTMLTableSectionElement::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8HTMLTableSectionElement::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

HTMLTableSectionElement* V8HTMLTableSectionElement::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : 0;
}

void V8HTMLTableSectionElement::refObject(ScriptWrappable* scriptWrappable)
{
#if !ENABLE(OILPAN)
    scriptWrappable->toImpl<HTMLTableSectionElement>()->ref();
#endif
}

void V8HTMLTableSectionElement::derefObject(ScriptWrappable* scriptWrappable)
{
#if !ENABLE(OILPAN)
    scriptWrappable->toImpl<HTMLTableSectionElement>()->deref();
#endif
}

} // namespace blink
