// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/components/embedder_support/simple_factory_key/SimpleFactoryKeyHandle

#ifndef org_chromium_components_embedder_support_simple_factory_key_SimpleFactoryKeyHandle_JNI
#define org_chromium_components_embedder_support_simple_factory_key_SimpleFactoryKeyHandle_JNI

#include <jni.h>

#include "../../../../../../../base/android/jni_generator/jni_generator_helper.h"


// Step 1: Forward declarations.

JNI_REGISTRATION_EXPORT extern const char
    kClassPath_org_chromium_components_embedder_1support_simple_1factory_1key_SimpleFactoryKeyHandle[];
const char
    kClassPath_org_chromium_components_embedder_1support_simple_1factory_1key_SimpleFactoryKeyHandle[]
    = "org/chromium/components/embedder_support/simple_factory_key/SimpleFactoryKeyHandle";
// Leaking this jclass as we cannot use LazyInstance from some threads.
JNI_REGISTRATION_EXPORT std::atomic<jclass>
    g_org_chromium_components_embedder_1support_simple_1factory_1key_SimpleFactoryKeyHandle_clazz(nullptr);
#ifndef org_chromium_components_embedder_1support_simple_1factory_1key_SimpleFactoryKeyHandle_clazz_defined
#define org_chromium_components_embedder_1support_simple_1factory_1key_SimpleFactoryKeyHandle_clazz_defined
inline jclass
    org_chromium_components_embedder_1support_simple_1factory_1key_SimpleFactoryKeyHandle_clazz(JNIEnv*
    env) {
  return base::android::LazyGetClass(env,
      kClassPath_org_chromium_components_embedder_1support_simple_1factory_1key_SimpleFactoryKeyHandle,
      &g_org_chromium_components_embedder_1support_simple_1factory_1key_SimpleFactoryKeyHandle_clazz);
}
#endif


// Step 2: Constants (optional).


// Step 3: Method stubs.
namespace simple_factory_key {


static std::atomic<jmethodID>
    g_org_chromium_components_embedder_1support_simple_1factory_1key_SimpleFactoryKeyHandle_getNativeSimpleFactoryKeyPointer(nullptr);
static jlong Java_SimpleFactoryKeyHandle_getNativeSimpleFactoryKeyPointer(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  jclass clazz =
      org_chromium_components_embedder_1support_simple_1factory_1key_SimpleFactoryKeyHandle_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
org_chromium_components_embedder_1support_simple_1factory_1key_SimpleFactoryKeyHandle_clazz(env),
          0);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "getNativeSimpleFactoryKeyPointer",
          "()J",
&g_org_chromium_components_embedder_1support_simple_1factory_1key_SimpleFactoryKeyHandle_getNativeSimpleFactoryKeyPointer);

  jlong ret =
      env->CallLongMethod(obj.obj(),
          call_context.base.method_id);
  return ret;
}

}  // namespace simple_factory_key

#endif  // org_chromium_components_embedder_support_simple_factory_key_SimpleFactoryKeyHandle_JNI
