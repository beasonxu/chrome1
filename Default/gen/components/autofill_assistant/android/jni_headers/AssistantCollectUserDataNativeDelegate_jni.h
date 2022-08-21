// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/components/autofill_assistant/user_data/AssistantCollectUserDataNativeDelegate

#ifndef org_chromium_components_autofill_assistant_user_data_AssistantCollectUserDataNativeDelegate_JNI
#define org_chromium_components_autofill_assistant_user_data_AssistantCollectUserDataNativeDelegate_JNI

#include <jni.h>

#include "../../../../../../../base/android/jni_generator/jni_generator_helper.h"


// Step 1: Forward declarations.

JNI_REGISTRATION_EXPORT extern const char
    kClassPath_org_chromium_components_autofill_1assistant_user_1data_AssistantCollectUserDataNativeDelegate[];
const char
    kClassPath_org_chromium_components_autofill_1assistant_user_1data_AssistantCollectUserDataNativeDelegate[]
    = "org/chromium/components/autofill_assistant/user_data/AssistantCollectUserDataNativeDelegate";
// Leaking this jclass as we cannot use LazyInstance from some threads.
JNI_REGISTRATION_EXPORT std::atomic<jclass>
    g_org_chromium_components_autofill_1assistant_user_1data_AssistantCollectUserDataNativeDelegate_clazz(nullptr);
#ifndef org_chromium_components_autofill_1assistant_user_1data_AssistantCollectUserDataNativeDelegate_clazz_defined
#define org_chromium_components_autofill_1assistant_user_1data_AssistantCollectUserDataNativeDelegate_clazz_defined
inline jclass
    org_chromium_components_autofill_1assistant_user_1data_AssistantCollectUserDataNativeDelegate_clazz(JNIEnv*
    env) {
  return base::android::LazyGetClass(env,
      kClassPath_org_chromium_components_autofill_1assistant_user_1data_AssistantCollectUserDataNativeDelegate,
      "autofill_assistant",
      &g_org_chromium_components_autofill_1assistant_user_1data_AssistantCollectUserDataNativeDelegate_clazz);
}
#endif


// Step 2: Constants (optional).


// Step 3: Method stubs.
namespace autofill_assistant {

JNI_GENERATOR_EXPORT void Java_J_N_MeqXmjkn(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeAssistantCollectUserDataDelegate,
    jobject caller,
    jobject contactProfile,
    jint eventType) {
  AssistantCollectUserDataDelegate* native =
      reinterpret_cast<AssistantCollectUserDataDelegate*>(nativeAssistantCollectUserDataDelegate);
  CHECK_NATIVE_PTR(env, jcaller, native, "OnContactInfoChanged");
  return native->OnContactInfoChanged(env, base::android::JavaParamRef<jobject>(env, caller),
      base::android::JavaParamRef<jobject>(env, contactProfile), eventType);
}

JNI_GENERATOR_EXPORT void Java_J_N_MHPd4a6Q(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeAssistantCollectUserDataDelegate,
    jobject caller,
    jobject phoneNumber,
    jint eventType) {
  AssistantCollectUserDataDelegate* native =
      reinterpret_cast<AssistantCollectUserDataDelegate*>(nativeAssistantCollectUserDataDelegate);
  CHECK_NATIVE_PTR(env, jcaller, native, "OnPhoneNumberChanged");
  return native->OnPhoneNumberChanged(env, base::android::JavaParamRef<jobject>(env, caller),
      base::android::JavaParamRef<jobject>(env, phoneNumber), eventType);
}

JNI_GENERATOR_EXPORT void Java_J_N_MKmoapNv(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeAssistantCollectUserDataDelegate,
    jobject caller,
    jobject address,
    jint eventType) {
  AssistantCollectUserDataDelegate* native =
      reinterpret_cast<AssistantCollectUserDataDelegate*>(nativeAssistantCollectUserDataDelegate);
  CHECK_NATIVE_PTR(env, jcaller, native, "OnShippingAddressChanged");
  return native->OnShippingAddressChanged(env, base::android::JavaParamRef<jobject>(env, caller),
      base::android::JavaParamRef<jobject>(env, address), eventType);
}

JNI_GENERATOR_EXPORT void Java_J_N_ML8wNDFz(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeAssistantCollectUserDataDelegate,
    jobject caller,
    jobject card,
    jobject billingProfile,
    jint eventType) {
  AssistantCollectUserDataDelegate* native =
      reinterpret_cast<AssistantCollectUserDataDelegate*>(nativeAssistantCollectUserDataDelegate);
  CHECK_NATIVE_PTR(env, jcaller, native, "OnCreditCardChanged");
  return native->OnCreditCardChanged(env, base::android::JavaParamRef<jobject>(env, caller),
      base::android::JavaParamRef<jobject>(env, card), base::android::JavaParamRef<jobject>(env,
      billingProfile), eventType);
}

JNI_GENERATOR_EXPORT void Java_J_N_MOpHd3dP(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeAssistantCollectUserDataDelegate,
    jobject caller,
    jint state) {
  AssistantCollectUserDataDelegate* native =
      reinterpret_cast<AssistantCollectUserDataDelegate*>(nativeAssistantCollectUserDataDelegate);
  CHECK_NATIVE_PTR(env, jcaller, native, "OnTermsAndConditionsChanged");
  return native->OnTermsAndConditionsChanged(env, base::android::JavaParamRef<jobject>(env, caller),
      state);
}

JNI_GENERATOR_EXPORT void Java_J_N_MYY7Y_14O(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeAssistantCollectUserDataDelegate,
    jobject caller,
    jint link) {
  AssistantCollectUserDataDelegate* native =
      reinterpret_cast<AssistantCollectUserDataDelegate*>(nativeAssistantCollectUserDataDelegate);
  CHECK_NATIVE_PTR(env, jcaller, native, "OnTextLinkClicked");
  return native->OnTextLinkClicked(env, base::android::JavaParamRef<jobject>(env, caller), link);
}

JNI_GENERATOR_EXPORT void Java_J_N_M3p4g35p(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeAssistantCollectUserDataDelegate,
    jobject caller,
    jstring choice,
    jint eventType) {
  AssistantCollectUserDataDelegate* native =
      reinterpret_cast<AssistantCollectUserDataDelegate*>(nativeAssistantCollectUserDataDelegate);
  CHECK_NATIVE_PTR(env, jcaller, native, "OnLoginChoiceChanged");
  return native->OnLoginChoiceChanged(env, base::android::JavaParamRef<jobject>(env, caller),
      base::android::JavaParamRef<jstring>(env, choice), eventType);
}

JNI_GENERATOR_EXPORT void Java_J_N_MRbV1YfS(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeAssistantCollectUserDataDelegate,
    jobject caller,
    jstring key,
    jobject value) {
  AssistantCollectUserDataDelegate* native =
      reinterpret_cast<AssistantCollectUserDataDelegate*>(nativeAssistantCollectUserDataDelegate);
  CHECK_NATIVE_PTR(env, jcaller, native, "OnKeyValueChanged");
  return native->OnKeyValueChanged(env, base::android::JavaParamRef<jobject>(env, caller),
      base::android::JavaParamRef<jstring>(env, key), base::android::JavaParamRef<jobject>(env,
      value));
}

JNI_GENERATOR_EXPORT void Java_J_N_Mr9_00024Uc_00024c(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeAssistantCollectUserDataDelegate,
    jobject caller,
    jboolean isFocused) {
  AssistantCollectUserDataDelegate* native =
      reinterpret_cast<AssistantCollectUserDataDelegate*>(nativeAssistantCollectUserDataDelegate);
  CHECK_NATIVE_PTR(env, jcaller, native, "OnInputTextFocusChanged");
  return native->OnInputTextFocusChanged(env, base::android::JavaParamRef<jobject>(env, caller),
      isFocused);
}


static std::atomic<jmethodID>
    g_org_chromium_components_autofill_1assistant_user_1data_AssistantCollectUserDataNativeDelegate_create(nullptr);
static base::android::ScopedJavaLocalRef<jobject>
    Java_AssistantCollectUserDataNativeDelegate_create(JNIEnv* env, jlong
    nativeAssistantCollectUserDataDelegate) {
  jclass clazz =
      org_chromium_components_autofill_1assistant_user_1data_AssistantCollectUserDataNativeDelegate_clazz(env);
  CHECK_CLAZZ(env, clazz,
org_chromium_components_autofill_1assistant_user_1data_AssistantCollectUserDataNativeDelegate_clazz(env),
          NULL);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_STATIC>(
          env,
          clazz,
          "create",
"(J)Lorg/chromium/components/autofill_assistant/user_data/AssistantCollectUserDataNativeDelegate;",
&g_org_chromium_components_autofill_1assistant_user_1data_AssistantCollectUserDataNativeDelegate_create);

  jobject ret =
      env->CallStaticObjectMethod(clazz,
          call_context.base.method_id, nativeAssistantCollectUserDataDelegate);
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

static std::atomic<jmethodID>
    g_org_chromium_components_autofill_1assistant_user_1data_AssistantCollectUserDataNativeDelegate_clearNativePtr(nullptr);
static void Java_AssistantCollectUserDataNativeDelegate_clearNativePtr(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  jclass clazz =
      org_chromium_components_autofill_1assistant_user_1data_AssistantCollectUserDataNativeDelegate_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
org_chromium_components_autofill_1assistant_user_1data_AssistantCollectUserDataNativeDelegate_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "clearNativePtr",
          "()V",
&g_org_chromium_components_autofill_1assistant_user_1data_AssistantCollectUserDataNativeDelegate_clearNativePtr);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id);
}

}  // namespace autofill_assistant

#endif  // org_chromium_components_autofill_assistant_user_data_AssistantCollectUserDataNativeDelegate_JNI
