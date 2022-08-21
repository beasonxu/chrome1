// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/components/autofill_assistant/header/AssistantHeaderDelegate

#ifndef org_chromium_components_autofill_assistant_header_AssistantHeaderDelegate_JNI
#define org_chromium_components_autofill_assistant_header_AssistantHeaderDelegate_JNI

#include <jni.h>

#include "../../../../../../../base/android/jni_generator/jni_generator_helper.h"


// Step 1: Forward declarations.

JNI_REGISTRATION_EXPORT extern const char
    kClassPath_org_chromium_components_autofill_1assistant_header_AssistantHeaderDelegate[];
const char kClassPath_org_chromium_components_autofill_1assistant_header_AssistantHeaderDelegate[] =
    "org/chromium/components/autofill_assistant/header/AssistantHeaderDelegate";
// Leaking this jclass as we cannot use LazyInstance from some threads.
JNI_REGISTRATION_EXPORT std::atomic<jclass>
    g_org_chromium_components_autofill_1assistant_header_AssistantHeaderDelegate_clazz(nullptr);
#ifndef org_chromium_components_autofill_1assistant_header_AssistantHeaderDelegate_clazz_defined
#define org_chromium_components_autofill_1assistant_header_AssistantHeaderDelegate_clazz_defined
inline jclass
    org_chromium_components_autofill_1assistant_header_AssistantHeaderDelegate_clazz(JNIEnv* env) {
  return base::android::LazyGetClass(env,
      kClassPath_org_chromium_components_autofill_1assistant_header_AssistantHeaderDelegate,
      "autofill_assistant",
      &g_org_chromium_components_autofill_1assistant_header_AssistantHeaderDelegate_clazz);
}
#endif


// Step 2: Constants (optional).


// Step 3: Method stubs.
namespace autofill_assistant {

JNI_GENERATOR_EXPORT void Java_J_N_MyElUOC5(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeAssistantHeaderDelegate,
    jobject caller) {
  AssistantHeaderDelegate* native =
      reinterpret_cast<AssistantHeaderDelegate*>(nativeAssistantHeaderDelegate);
  CHECK_NATIVE_PTR(env, jcaller, native, "OnFeedbackButtonClicked");
  return native->OnFeedbackButtonClicked(env, base::android::JavaParamRef<jobject>(env, caller));
}

JNI_GENERATOR_EXPORT void Java_J_N_MMp6NdXR(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeAssistantHeaderDelegate,
    jobject caller) {
  AssistantHeaderDelegate* native =
      reinterpret_cast<AssistantHeaderDelegate*>(nativeAssistantHeaderDelegate);
  CHECK_NATIVE_PTR(env, jcaller, native, "OnTtsButtonClicked");
  return native->OnTtsButtonClicked(env, base::android::JavaParamRef<jobject>(env, caller));
}


static std::atomic<jmethodID>
    g_org_chromium_components_autofill_1assistant_header_AssistantHeaderDelegate_create(nullptr);
static base::android::ScopedJavaLocalRef<jobject> Java_AssistantHeaderDelegate_create(JNIEnv* env,
    jlong nativeAssistantHeaderDelegate) {
  jclass clazz =
      org_chromium_components_autofill_1assistant_header_AssistantHeaderDelegate_clazz(env);
  CHECK_CLAZZ(env, clazz,
      org_chromium_components_autofill_1assistant_header_AssistantHeaderDelegate_clazz(env), NULL);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_STATIC>(
          env,
          clazz,
          "create",
          "(J)Lorg/chromium/components/autofill_assistant/header/AssistantHeaderDelegate;",
          &g_org_chromium_components_autofill_1assistant_header_AssistantHeaderDelegate_create);

  jobject ret =
      env->CallStaticObjectMethod(clazz,
          call_context.base.method_id, nativeAssistantHeaderDelegate);
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

static std::atomic<jmethodID>
    g_org_chromium_components_autofill_1assistant_header_AssistantHeaderDelegate_clearNativePtr(nullptr);
static void Java_AssistantHeaderDelegate_clearNativePtr(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  jclass clazz =
      org_chromium_components_autofill_1assistant_header_AssistantHeaderDelegate_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_components_autofill_1assistant_header_AssistantHeaderDelegate_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "clearNativePtr",
          "()V",
&g_org_chromium_components_autofill_1assistant_header_AssistantHeaderDelegate_clearNativePtr);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id);
}

}  // namespace autofill_assistant

#endif  // org_chromium_components_autofill_assistant_header_AssistantHeaderDelegate_JNI
