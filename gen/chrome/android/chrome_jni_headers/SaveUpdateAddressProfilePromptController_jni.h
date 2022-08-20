// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/chrome/browser/autofill/SaveUpdateAddressProfilePromptController

#ifndef org_chromium_chrome_browser_autofill_SaveUpdateAddressProfilePromptController_JNI
#define org_chromium_chrome_browser_autofill_SaveUpdateAddressProfilePromptController_JNI

#include <jni.h>

#include "../../../../../../base/android/jni_generator/jni_generator_helper.h"


// Step 1: Forward declarations.

JNI_REGISTRATION_EXPORT extern const char
    kClassPath_org_chromium_chrome_browser_autofill_SaveUpdateAddressProfilePromptController[];
const char
    kClassPath_org_chromium_chrome_browser_autofill_SaveUpdateAddressProfilePromptController[] =
    "org/chromium/chrome/browser/autofill/SaveUpdateAddressProfilePromptController";
// Leaking this jclass as we cannot use LazyInstance from some threads.
JNI_REGISTRATION_EXPORT std::atomic<jclass>
    g_org_chromium_chrome_browser_autofill_SaveUpdateAddressProfilePromptController_clazz(nullptr);
#ifndef org_chromium_chrome_browser_autofill_SaveUpdateAddressProfilePromptController_clazz_defined
#define org_chromium_chrome_browser_autofill_SaveUpdateAddressProfilePromptController_clazz_defined
inline jclass
    org_chromium_chrome_browser_autofill_SaveUpdateAddressProfilePromptController_clazz(JNIEnv* env)
    {
  return base::android::LazyGetClass(env,
      kClassPath_org_chromium_chrome_browser_autofill_SaveUpdateAddressProfilePromptController,
      &g_org_chromium_chrome_browser_autofill_SaveUpdateAddressProfilePromptController_clazz);
}
#endif


// Step 2: Constants (optional).


// Step 3: Method stubs.
namespace autofill {

JNI_GENERATOR_EXPORT void Java_J_N_M1OELO83(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeSaveUpdateAddressProfilePromptController,
    jobject caller) {
  SaveUpdateAddressProfilePromptController* native =
      reinterpret_cast<SaveUpdateAddressProfilePromptController*>(nativeSaveUpdateAddressProfilePromptController);
  CHECK_NATIVE_PTR(env, jcaller, native, "OnPromptDismissed");
  return native->OnPromptDismissed(env, base::android::JavaParamRef<jobject>(env, caller));
}

JNI_GENERATOR_EXPORT void Java_J_N_MDecxVDS(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeSaveUpdateAddressProfilePromptController,
    jobject caller) {
  SaveUpdateAddressProfilePromptController* native =
      reinterpret_cast<SaveUpdateAddressProfilePromptController*>(nativeSaveUpdateAddressProfilePromptController);
  CHECK_NATIVE_PTR(env, jcaller, native, "OnUserAccepted");
  return native->OnUserAccepted(env, base::android::JavaParamRef<jobject>(env, caller));
}

JNI_GENERATOR_EXPORT void Java_J_N_MnY8YSzO(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeSaveUpdateAddressProfilePromptController,
    jobject caller) {
  SaveUpdateAddressProfilePromptController* native =
      reinterpret_cast<SaveUpdateAddressProfilePromptController*>(nativeSaveUpdateAddressProfilePromptController);
  CHECK_NATIVE_PTR(env, jcaller, native, "OnUserDeclined");
  return native->OnUserDeclined(env, base::android::JavaParamRef<jobject>(env, caller));
}

JNI_GENERATOR_EXPORT void Java_J_N_MvmusX4r(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeSaveUpdateAddressProfilePromptController,
    jobject caller,
    jobject profile) {
  SaveUpdateAddressProfilePromptController* native =
      reinterpret_cast<SaveUpdateAddressProfilePromptController*>(nativeSaveUpdateAddressProfilePromptController);
  CHECK_NATIVE_PTR(env, jcaller, native, "OnUserEdited");
  return native->OnUserEdited(env, base::android::JavaParamRef<jobject>(env, caller),
      base::android::JavaParamRef<jobject>(env, profile));
}


static std::atomic<jmethodID>
    g_org_chromium_chrome_browser_autofill_SaveUpdateAddressProfilePromptController_create(nullptr);
static base::android::ScopedJavaLocalRef<jobject>
    Java_SaveUpdateAddressProfilePromptController_create(JNIEnv* env, jlong
    nativeSaveUpdateAddressProfilePromptController) {
  jclass clazz =
      org_chromium_chrome_browser_autofill_SaveUpdateAddressProfilePromptController_clazz(env);
  CHECK_CLAZZ(env, clazz,
      org_chromium_chrome_browser_autofill_SaveUpdateAddressProfilePromptController_clazz(env),
          NULL);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_STATIC>(
          env,
          clazz,
          "create",
          "(J)Lorg/chromium/chrome/browser/autofill/SaveUpdateAddressProfilePromptController;",
          &g_org_chromium_chrome_browser_autofill_SaveUpdateAddressProfilePromptController_create);

  jobject ret =
      env->CallStaticObjectMethod(clazz,
          call_context.base.method_id, nativeSaveUpdateAddressProfilePromptController);
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

static std::atomic<jmethodID>
    g_org_chromium_chrome_browser_autofill_SaveUpdateAddressProfilePromptController_onNativeDestroyed(nullptr);
static void Java_SaveUpdateAddressProfilePromptController_onNativeDestroyed(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  jclass clazz =
      org_chromium_chrome_browser_autofill_SaveUpdateAddressProfilePromptController_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_chrome_browser_autofill_SaveUpdateAddressProfilePromptController_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "onNativeDestroyed",
          "()V",
&g_org_chromium_chrome_browser_autofill_SaveUpdateAddressProfilePromptController_onNativeDestroyed);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id);
}

}  // namespace autofill

#endif  // org_chromium_chrome_browser_autofill_SaveUpdateAddressProfilePromptController_JNI
