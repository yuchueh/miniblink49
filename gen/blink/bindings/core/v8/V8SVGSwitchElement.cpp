// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#include "V8SVGSwitchElement.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
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
const WrapperTypeInfo V8SVGSwitchElement::wrapperTypeInfo = { gin::kEmbedderBlink, V8SVGSwitchElement::domTemplate, V8SVGSwitchElement::refObject, V8SVGSwitchElement::derefObject, V8SVGSwitchElement::trace, 0, 0, V8SVGSwitchElement::preparePrototypeObject, V8SVGSwitchElement::installConditionallyEnabledProperties, "SVGSwitchElement", &V8SVGGraphicsElement::wrapperTypeInfo, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::NodeClassId, WrapperTypeInfo::InheritFromEventTarget, WrapperTypeInfo::Dependent, WrapperTypeInfo::WillBeGarbageCollectedObject };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in SVGSwitchElement.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& SVGSwitchElement::s_wrapperTypeInfo = V8SVGSwitchElement::wrapperTypeInfo;

namespace SVGSwitchElementV8Internal {

} // namespace SVGSwitchElementV8Internal

static void installV8SVGSwitchElementTemplate(v8::Local<v8::FunctionTemplate> functionTemplate, v8::Isolate* isolate)
{
    functionTemplate->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::installDOMClassTemplate(isolate, functionTemplate, "SVGSwitchElement", V8SVGGraphicsElement::domTemplate(isolate), V8SVGSwitchElement::internalFieldCount,
        0, 0,
        0, 0,
        0, 0);
    v8::Local<v8::ObjectTemplate> instanceTemplate = functionTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = functionTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);

    // Custom toString template
#if V8_MAJOR_VERSION < 7
    functionTemplate->Set(v8AtomicString(isolate, "toString"), V8PerIsolateData::from(isolate)->toStringTemplate());
#endif
}

v8::Local<v8::FunctionTemplate> V8SVGSwitchElement::domTemplate(v8::Isolate* isolate)
{
    return V8DOMConfiguration::domClassTemplate(isolate, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8SVGSwitchElementTemplate);
}

bool V8SVGSwitchElement::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8SVGSwitchElement::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

SVGSwitchElement* V8SVGSwitchElement::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : 0;
}

void V8SVGSwitchElement::refObject(ScriptWrappable* scriptWrappable)
{
#if !ENABLE(OILPAN)
    scriptWrappable->toImpl<SVGSwitchElement>()->ref();
#endif
}

void V8SVGSwitchElement::derefObject(ScriptWrappable* scriptWrappable)
{
#if !ENABLE(OILPAN)
    scriptWrappable->toImpl<SVGSwitchElement>()->deref();
#endif
}

} // namespace blink
