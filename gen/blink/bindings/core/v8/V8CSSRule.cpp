// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#include "V8CSSRule.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/V8CSSRule.h"
#include "bindings/core/v8/V8CSSStyleSheet.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8HiddenValue.h"
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
const WrapperTypeInfo V8CSSRule::wrapperTypeInfo = { gin::kEmbedderBlink, V8CSSRule::domTemplate, V8CSSRule::refObject, V8CSSRule::derefObject, V8CSSRule::trace, 0, 0, V8CSSRule::preparePrototypeObject, V8CSSRule::installConditionallyEnabledProperties, "CSSRule", 0, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::NotInheritFromEventTarget, WrapperTypeInfo::Dependent, WrapperTypeInfo::WillBeGarbageCollectedObject };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in CSSRule.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& CSSRule::s_wrapperTypeInfo = V8CSSRule::wrapperTypeInfo;

namespace CSSRuleV8Internal {

static void typeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    CSSRule* impl = V8CSSRule::toImpl(holder);
    v8SetReturnValueUnsigned(info, impl->type());
}

static void typeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    CSSRuleV8Internal::typeAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void cssTextAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    CSSRule* impl = V8CSSRule::toImpl(holder);
    v8SetReturnValueString(info, impl->cssText(), info.GetIsolate());
}

static void cssTextAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    CSSRuleV8Internal::cssTextAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void cssTextAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    CSSRule* impl = V8CSSRule::toImpl(holder);
    V8StringResource<> cppValue = v8Value;
    if (!cppValue.prepare())
        return;
    impl->setCSSText(cppValue);
}

static void cssTextAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMSetter");
    CSSRuleV8Internal::cssTextAttributeSetter(v8Value, info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void parentRuleAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    CSSRule* impl = V8CSSRule::toImpl(holder);
    RefPtrWillBeRawPtr<CSSRule> cppValue(impl->parentRule());
    if (cppValue && DOMDataStore::setReturnValue(info.GetReturnValue(), cppValue.get()))
        return;
    v8::Local<v8::Value> v8Value(toV8(cppValue.get(), holder, info.GetIsolate()));
    if (!v8Value.IsEmpty()) {
        V8HiddenValue::setHiddenValue(info.GetIsolate(), holder, v8AtomicString(info.GetIsolate(), "parentRule"), v8Value);
        v8SetReturnValue(info, v8Value);
    }
}

static void parentRuleAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    CSSRuleV8Internal::parentRuleAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void parentStyleSheetAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    CSSRule* impl = V8CSSRule::toImpl(holder);
    RefPtrWillBeRawPtr<CSSStyleSheet> cppValue(impl->parentStyleSheet());
    if (cppValue && DOMDataStore::setReturnValue(info.GetReturnValue(), cppValue.get()))
        return;
    v8::Local<v8::Value> v8Value(toV8(cppValue.get(), holder, info.GetIsolate()));
    if (!v8Value.IsEmpty()) {
        V8HiddenValue::setHiddenValue(info.GetIsolate(), holder, v8AtomicString(info.GetIsolate(), "parentStyleSheet"), v8Value);
        v8SetReturnValue(info, v8Value);
    }
}

static void parentStyleSheetAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    CSSRuleV8Internal::parentStyleSheetAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

} // namespace CSSRuleV8Internal

static const V8DOMConfiguration::AccessorConfiguration V8CSSRuleAccessors[] = {
    {"type", CSSRuleV8Internal::typeAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"cssText", CSSRuleV8Internal::cssTextAttributeGetterCallback, CSSRuleV8Internal::cssTextAttributeSetterCallback, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"parentRule", CSSRuleV8Internal::parentRuleAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"parentStyleSheet", CSSRuleV8Internal::parentStyleSheetAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
};

static void installV8CSSRuleTemplate(v8::Local<v8::FunctionTemplate> functionTemplate, v8::Isolate* isolate)
{
    functionTemplate->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::installDOMClassTemplate(isolate, functionTemplate, "CSSRule", v8::Local<v8::FunctionTemplate>(), V8CSSRule::internalFieldCount,
        0, 0,
        V8CSSRuleAccessors, WTF_ARRAY_LENGTH(V8CSSRuleAccessors),
        0, 0);
    v8::Local<v8::ObjectTemplate> instanceTemplate = functionTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = functionTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);
    static const V8DOMConfiguration::ConstantConfiguration V8CSSRuleConstants[] = {
        {"STYLE_RULE", 1, 0, 0, V8DOMConfiguration::ConstantTypeUnsignedShort},
        {"CHARSET_RULE", 2, 0, 0, V8DOMConfiguration::ConstantTypeUnsignedShort},
        {"IMPORT_RULE", 3, 0, 0, V8DOMConfiguration::ConstantTypeUnsignedShort},
        {"MEDIA_RULE", 4, 0, 0, V8DOMConfiguration::ConstantTypeUnsignedShort},
        {"FONT_FACE_RULE", 5, 0, 0, V8DOMConfiguration::ConstantTypeUnsignedShort},
        {"PAGE_RULE", 6, 0, 0, V8DOMConfiguration::ConstantTypeUnsignedShort},
        {"KEYFRAMES_RULE", 7, 0, 0, V8DOMConfiguration::ConstantTypeUnsignedShort},
        {"KEYFRAME_RULE", 8, 0, 0, V8DOMConfiguration::ConstantTypeUnsignedShort},
        {"SUPPORTS_RULE", 12, 0, 0, V8DOMConfiguration::ConstantTypeUnsignedShort},
        {"WEBKIT_KEYFRAMES_RULE", 7, 0, 0, V8DOMConfiguration::ConstantTypeUnsignedShort},
        {"WEBKIT_KEYFRAME_RULE", 8, 0, 0, V8DOMConfiguration::ConstantTypeUnsignedShort},
    };
    V8DOMConfiguration::installConstants(isolate, functionTemplate, prototypeTemplate, V8CSSRuleConstants, WTF_ARRAY_LENGTH(V8CSSRuleConstants));
    if (RuntimeEnabledFeatures::cssViewportEnabled()) {
        static const V8DOMConfiguration::ConstantConfiguration constantConfiguration = {"VIEWPORT_RULE", 15, 0, 0, V8DOMConfiguration::ConstantTypeUnsignedShort};
        V8DOMConfiguration::installConstant(isolate, functionTemplate, prototypeTemplate, constantConfiguration);
    }
    static_assert(1 == CSSRule::STYLE_RULE, "the value of CSSRule_STYLE_RULE does not match with implementation");
    static_assert(2 == CSSRule::CHARSET_RULE, "the value of CSSRule_CHARSET_RULE does not match with implementation");
    static_assert(3 == CSSRule::IMPORT_RULE, "the value of CSSRule_IMPORT_RULE does not match with implementation");
    static_assert(4 == CSSRule::MEDIA_RULE, "the value of CSSRule_MEDIA_RULE does not match with implementation");
    static_assert(5 == CSSRule::FONT_FACE_RULE, "the value of CSSRule_FONT_FACE_RULE does not match with implementation");
    static_assert(6 == CSSRule::PAGE_RULE, "the value of CSSRule_PAGE_RULE does not match with implementation");
    static_assert(7 == CSSRule::KEYFRAMES_RULE, "the value of CSSRule_KEYFRAMES_RULE does not match with implementation");
    static_assert(8 == CSSRule::KEYFRAME_RULE, "the value of CSSRule_KEYFRAME_RULE does not match with implementation");
    static_assert(12 == CSSRule::SUPPORTS_RULE, "the value of CSSRule_SUPPORTS_RULE does not match with implementation");
    static_assert(15 == CSSRule::VIEWPORT_RULE, "the value of CSSRule_VIEWPORT_RULE does not match with implementation");
    static_assert(7 == CSSRule::WEBKIT_KEYFRAMES_RULE, "the value of CSSRule_WEBKIT_KEYFRAMES_RULE does not match with implementation");
    static_assert(8 == CSSRule::WEBKIT_KEYFRAME_RULE, "the value of CSSRule_WEBKIT_KEYFRAME_RULE does not match with implementation");

    // Custom toString template
#if V8_MAJOR_VERSION < 7
    functionTemplate->Set(v8AtomicString(isolate, "toString"), V8PerIsolateData::from(isolate)->toStringTemplate());
#endif
}

v8::Local<v8::FunctionTemplate> V8CSSRule::domTemplate(v8::Isolate* isolate)
{
    return V8DOMConfiguration::domClassTemplate(isolate, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8CSSRuleTemplate);
}

bool V8CSSRule::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8CSSRule::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

CSSRule* V8CSSRule::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : 0;
}

void V8CSSRule::refObject(ScriptWrappable* scriptWrappable)
{
#if !ENABLE(OILPAN)
    scriptWrappable->toImpl<CSSRule>()->ref();
#endif
}

void V8CSSRule::derefObject(ScriptWrappable* scriptWrappable)
{
#if !ENABLE(OILPAN)
    scriptWrappable->toImpl<CSSRule>()->deref();
#endif
}

} // namespace blink
