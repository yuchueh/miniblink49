// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#include "V8PeriodicSyncManager.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/ScriptPromise.h"
#include "bindings/core/v8/ScriptState.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "bindings/modules/v8/V8PeriodicSyncRegistrationOptions.h"
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
const WrapperTypeInfo V8PeriodicSyncManager::wrapperTypeInfo = { gin::kEmbedderBlink, V8PeriodicSyncManager::domTemplate, V8PeriodicSyncManager::refObject, V8PeriodicSyncManager::derefObject, V8PeriodicSyncManager::trace, 0, 0, V8PeriodicSyncManager::preparePrototypeObject, V8PeriodicSyncManager::installConditionallyEnabledProperties, "PeriodicSyncManager", 0, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::NotInheritFromEventTarget, WrapperTypeInfo::Independent, WrapperTypeInfo::GarbageCollectedObject };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in PeriodicSyncManager.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& PeriodicSyncManager::s_wrapperTypeInfo = V8PeriodicSyncManager::wrapperTypeInfo;

namespace PeriodicSyncManagerV8Internal {

static void minPossiblePeriodAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    PeriodicSyncManager* impl = V8PeriodicSyncManager::toImpl(holder);
    v8SetReturnValueUnsigned(info, impl->minPossiblePeriod());
}

static void minPossiblePeriodAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    PeriodicSyncManagerV8Internal::minPossiblePeriodAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void registerMethodPromise(const v8::FunctionCallbackInfo<v8::Value>& info, ExceptionState& exceptionState)
{
    PeriodicSyncManager* impl = V8PeriodicSyncManager::toImpl(info.Holder());
    PeriodicSyncRegistrationOptions options;
    {
        if (!isUndefinedOrNull(info[0]) && !info[0]->IsObject()) {
            exceptionState.throwTypeError("parameter 1 ('options') is not an object.");
            return;
        }
        V8PeriodicSyncRegistrationOptions::toImpl(info.GetIsolate(), info[0], options, exceptionState);
        if (exceptionState.hadException())
            return;
    }
    ScriptState* scriptState = ScriptState::current(info.GetIsolate());
    ScriptPromise result = impl->registerFunction(scriptState, options);
    v8SetReturnValue(info, result.v8Value());
}

static void registerMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "register", "PeriodicSyncManager", info.Holder(), info.GetIsolate());
    registerMethodPromise(info, exceptionState);
    if (exceptionState.hadException())
        v8SetReturnValue(info, exceptionState.reject(ScriptState::current(info.GetIsolate())).v8Value());
}

static void registerMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    PeriodicSyncManagerV8Internal::registerMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void getRegistrationMethodPromise(const v8::FunctionCallbackInfo<v8::Value>& info, ExceptionState& exceptionState)
{
    if (UNLIKELY(info.Length() < 1)) {
        setMinimumArityTypeError(exceptionState, 1, info.Length());
        return;
    }
    PeriodicSyncManager* impl = V8PeriodicSyncManager::toImpl(info.Holder());
    V8StringResource<> tag;
    {
        tag = info[0];
        if (!tag.prepare(exceptionState))
            return;
    }
    ScriptState* scriptState = ScriptState::current(info.GetIsolate());
    ScriptPromise result = impl->getRegistration(scriptState, tag);
    v8SetReturnValue(info, result.v8Value());
}

static void getRegistrationMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "getRegistration", "PeriodicSyncManager", info.Holder(), info.GetIsolate());
    getRegistrationMethodPromise(info, exceptionState);
    if (exceptionState.hadException())
        v8SetReturnValue(info, exceptionState.reject(ScriptState::current(info.GetIsolate())).v8Value());
}

static void getRegistrationMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    PeriodicSyncManagerV8Internal::getRegistrationMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void getRegistrationsMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    PeriodicSyncManager* impl = V8PeriodicSyncManager::toImpl(info.Holder());
    ScriptState* scriptState = ScriptState::current(info.GetIsolate());
    ScriptPromise result = impl->getRegistrations(scriptState);
    v8SetReturnValue(info, result.v8Value());
}

static void getRegistrationsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    PeriodicSyncManagerV8Internal::getRegistrationsMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void permissionStateMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    PeriodicSyncManager* impl = V8PeriodicSyncManager::toImpl(info.Holder());
    ScriptState* scriptState = ScriptState::current(info.GetIsolate());
    ScriptPromise result = impl->permissionState(scriptState);
    v8SetReturnValue(info, result.v8Value());
}

static void permissionStateMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    PeriodicSyncManagerV8Internal::permissionStateMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

} // namespace PeriodicSyncManagerV8Internal

static const V8DOMConfiguration::MethodConfiguration V8PeriodicSyncManagerMethods[] = {
    {"register", PeriodicSyncManagerV8Internal::registerMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts},
};

static void installV8PeriodicSyncManagerTemplate(v8::Local<v8::FunctionTemplate> functionTemplate, v8::Isolate* isolate)
{
    functionTemplate->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    if (!RuntimeEnabledFeatures::backgroundSyncEnabled())
        defaultSignature = V8DOMConfiguration::installDOMClassTemplate(isolate, functionTemplate, "PeriodicSyncManager", v8::Local<v8::FunctionTemplate>(), V8PeriodicSyncManager::internalFieldCount, 0, 0, 0, 0, 0, 0);
    else
        defaultSignature = V8DOMConfiguration::installDOMClassTemplate(isolate, functionTemplate, "PeriodicSyncManager", v8::Local<v8::FunctionTemplate>(), V8PeriodicSyncManager::internalFieldCount,
            0, 0,
            0, 0,
            V8PeriodicSyncManagerMethods, WTF_ARRAY_LENGTH(V8PeriodicSyncManagerMethods));
    v8::Local<v8::ObjectTemplate> instanceTemplate = functionTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = functionTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);
    if (RuntimeEnabledFeatures::backgroundSyncV2Enabled()) {
        static const V8DOMConfiguration::AccessorConfiguration accessorConfiguration =\
        {"minPossiblePeriod", PeriodicSyncManagerV8Internal::minPossiblePeriodAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder};
        V8DOMConfiguration::installAccessor(isolate, instanceTemplate, prototypeTemplate, functionTemplate, defaultSignature, accessorConfiguration);
    }
    if (RuntimeEnabledFeatures::backgroundSyncV2Enabled()) {
        const V8DOMConfiguration::MethodConfiguration getRegistrationMethodConfiguration = {
            "getRegistration", PeriodicSyncManagerV8Internal::getRegistrationMethodCallback, 0, 1, V8DOMConfiguration::ExposedToAllScripts,
        };
        V8DOMConfiguration::installMethod(isolate, prototypeTemplate, defaultSignature, v8::None, getRegistrationMethodConfiguration);
    }
    if (RuntimeEnabledFeatures::backgroundSyncV2Enabled()) {
        const V8DOMConfiguration::MethodConfiguration getRegistrationsMethodConfiguration = {
            "getRegistrations", PeriodicSyncManagerV8Internal::getRegistrationsMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts,
        };
        V8DOMConfiguration::installMethod(isolate, prototypeTemplate, defaultSignature, v8::None, getRegistrationsMethodConfiguration);
    }
    if (RuntimeEnabledFeatures::backgroundSyncV2Enabled()) {
        const V8DOMConfiguration::MethodConfiguration permissionStateMethodConfiguration = {
            "permissionState", PeriodicSyncManagerV8Internal::permissionStateMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts,
        };
        V8DOMConfiguration::installMethod(isolate, prototypeTemplate, defaultSignature, v8::None, permissionStateMethodConfiguration);
    }

    // Custom toString template
#if V8_MAJOR_VERSION < 7
    functionTemplate->Set(v8AtomicString(isolate, "toString"), V8PerIsolateData::from(isolate)->toStringTemplate());
#endif
}

v8::Local<v8::FunctionTemplate> V8PeriodicSyncManager::domTemplate(v8::Isolate* isolate)
{
    return V8DOMConfiguration::domClassTemplate(isolate, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8PeriodicSyncManagerTemplate);
}

bool V8PeriodicSyncManager::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8PeriodicSyncManager::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

PeriodicSyncManager* V8PeriodicSyncManager::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : 0;
}

void V8PeriodicSyncManager::refObject(ScriptWrappable* scriptWrappable)
{
}

void V8PeriodicSyncManager::derefObject(ScriptWrappable* scriptWrappable)
{
}

} // namespace blink
