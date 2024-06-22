// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#include "V8FileError.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
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
const WrapperTypeInfo V8FileError::wrapperTypeInfo = { gin::kEmbedderBlink, V8FileError::domTemplate, V8FileError::refObject, V8FileError::derefObject, V8FileError::trace, 0, 0, V8FileError::preparePrototypeObject, V8FileError::installConditionallyEnabledProperties, "FileError", &V8DOMError::wrapperTypeInfo, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::NotInheritFromEventTarget, WrapperTypeInfo::Independent, WrapperTypeInfo::GarbageCollectedObject };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in FileError.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& FileError::s_wrapperTypeInfo = V8FileError::wrapperTypeInfo;

namespace FileErrorV8Internal {

static void codeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    FileError* impl = V8FileError::toImpl(holder);
    v8SetReturnValueUnsigned(info, impl->code());
}

static void codeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    UseCounter::countDeprecationIfNotPrivateScript(info.GetIsolate(), callingExecutionContext(info.GetIsolate()), UseCounter::FileError);
    FileErrorV8Internal::codeAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

} // namespace FileErrorV8Internal

static const V8DOMConfiguration::AccessorConfiguration V8FileErrorAccessors[] = {
    {"code", FileErrorV8Internal::codeAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
};

static void installV8FileErrorTemplate(v8::Local<v8::FunctionTemplate> functionTemplate, v8::Isolate* isolate)
{
    functionTemplate->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::installDOMClassTemplate(isolate, functionTemplate, "FileError", V8DOMError::domTemplate(isolate), V8FileError::internalFieldCount,
        0, 0,
        V8FileErrorAccessors, WTF_ARRAY_LENGTH(V8FileErrorAccessors),
        0, 0);
    v8::Local<v8::ObjectTemplate> instanceTemplate = functionTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = functionTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);
    static const V8DOMConfiguration::ConstantConfiguration V8FileErrorConstants[] = {
        {"NOT_FOUND_ERR", 1, 0, 0, V8DOMConfiguration::ConstantTypeUnsignedShort},
        {"SECURITY_ERR", 2, 0, 0, V8DOMConfiguration::ConstantTypeUnsignedShort},
        {"ABORT_ERR", 3, 0, 0, V8DOMConfiguration::ConstantTypeUnsignedShort},
        {"NOT_READABLE_ERR", 4, 0, 0, V8DOMConfiguration::ConstantTypeUnsignedShort},
        {"ENCODING_ERR", 5, 0, 0, V8DOMConfiguration::ConstantTypeUnsignedShort},
        {"NO_MODIFICATION_ALLOWED_ERR", 6, 0, 0, V8DOMConfiguration::ConstantTypeUnsignedShort},
        {"INVALID_STATE_ERR", 7, 0, 0, V8DOMConfiguration::ConstantTypeUnsignedShort},
        {"SYNTAX_ERR", 8, 0, 0, V8DOMConfiguration::ConstantTypeUnsignedShort},
        {"INVALID_MODIFICATION_ERR", 9, 0, 0, V8DOMConfiguration::ConstantTypeUnsignedShort},
        {"QUOTA_EXCEEDED_ERR", 10, 0, 0, V8DOMConfiguration::ConstantTypeUnsignedShort},
        {"TYPE_MISMATCH_ERR", 11, 0, 0, V8DOMConfiguration::ConstantTypeUnsignedShort},
        {"PATH_EXISTS_ERR", 12, 0, 0, V8DOMConfiguration::ConstantTypeUnsignedShort},
    };
    V8DOMConfiguration::installConstants(isolate, functionTemplate, prototypeTemplate, V8FileErrorConstants, WTF_ARRAY_LENGTH(V8FileErrorConstants));
    static_assert(1 == FileError::NOT_FOUND_ERR, "the value of FileError_NOT_FOUND_ERR does not match with implementation");
    static_assert(2 == FileError::SECURITY_ERR, "the value of FileError_SECURITY_ERR does not match with implementation");
    static_assert(3 == FileError::ABORT_ERR, "the value of FileError_ABORT_ERR does not match with implementation");
    static_assert(4 == FileError::NOT_READABLE_ERR, "the value of FileError_NOT_READABLE_ERR does not match with implementation");
    static_assert(5 == FileError::ENCODING_ERR, "the value of FileError_ENCODING_ERR does not match with implementation");
    static_assert(6 == FileError::NO_MODIFICATION_ALLOWED_ERR, "the value of FileError_NO_MODIFICATION_ALLOWED_ERR does not match with implementation");
    static_assert(7 == FileError::INVALID_STATE_ERR, "the value of FileError_INVALID_STATE_ERR does not match with implementation");
    static_assert(8 == FileError::SYNTAX_ERR, "the value of FileError_SYNTAX_ERR does not match with implementation");
    static_assert(9 == FileError::INVALID_MODIFICATION_ERR, "the value of FileError_INVALID_MODIFICATION_ERR does not match with implementation");
    static_assert(10 == FileError::QUOTA_EXCEEDED_ERR, "the value of FileError_QUOTA_EXCEEDED_ERR does not match with implementation");
    static_assert(11 == FileError::TYPE_MISMATCH_ERR, "the value of FileError_TYPE_MISMATCH_ERR does not match with implementation");
    static_assert(12 == FileError::PATH_EXISTS_ERR, "the value of FileError_PATH_EXISTS_ERR does not match with implementation");

    // Custom toString template
#if V8_MAJOR_VERSION < 7
    functionTemplate->Set(v8AtomicString(isolate, "toString"), V8PerIsolateData::from(isolate)->toStringTemplate());
#endif
}

v8::Local<v8::FunctionTemplate> V8FileError::domTemplate(v8::Isolate* isolate)
{
    return V8DOMConfiguration::domClassTemplate(isolate, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8FileErrorTemplate);
}

bool V8FileError::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8FileError::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

FileError* V8FileError::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : 0;
}

void V8FileError::refObject(ScriptWrappable* scriptWrappable)
{
}

void V8FileError::derefObject(ScriptWrappable* scriptWrappable)
{
}

} // namespace blink
