// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/chrome/browser/device_reauth/ReauthenticatorBridge

#ifndef org_chromium_chrome_browser_device_reauth_ReauthenticatorBridge_JNI
#define org_chromium_chrome_browser_device_reauth_ReauthenticatorBridge_JNI

#include <jni.h>

#include "../../../../../../../../base/android/jni_generator/jni_generator_helper.h"


// Step 1: Forward declarations.

JNI_REGISTRATION_EXPORT extern const char
    kClassPath_org_chromium_chrome_browser_device_1reauth_ReauthenticatorBridge[];
const char kClassPath_org_chromium_chrome_browser_device_1reauth_ReauthenticatorBridge[] =
    "org/chromium/chrome/browser/device_reauth/ReauthenticatorBridge";
// Leaking this jclass as we cannot use LazyInstance from some threads.
JNI_REGISTRATION_EXPORT std::atomic<jclass>
    g_org_chromium_chrome_browser_device_1reauth_ReauthenticatorBridge_clazz(nullptr);
#ifndef org_chromium_chrome_browser_device_1reauth_ReauthenticatorBridge_clazz_defined
#define org_chromium_chrome_browser_device_1reauth_ReauthenticatorBridge_clazz_defined
inline jclass org_chromium_chrome_browser_device_1reauth_ReauthenticatorBridge_clazz(JNIEnv* env) {
  return base::android::LazyGetClass(env,
      kClassPath_org_chromium_chrome_browser_device_1reauth_ReauthenticatorBridge,
      &g_org_chromium_chrome_browser_device_1reauth_ReauthenticatorBridge_clazz);
}
#endif


// Step 2: Constants (optional).


// Step 3: Method stubs.
static jlong JNI_ReauthenticatorBridge_Create(JNIEnv* env, const
    base::android::JavaParamRef<jobject>& reauthenticatorBridge,
    jint requester);

JNI_GENERATOR_EXPORT jlong Java_J_N_MZO11iFf(
    JNIEnv* env,
    jclass jcaller,
    jobject reauthenticatorBridge,
    jint requester) {
  return JNI_ReauthenticatorBridge_Create(env, base::android::JavaParamRef<jobject>(env,
      reauthenticatorBridge), requester);
}

JNI_GENERATOR_EXPORT jboolean Java_J_N_MuzO7zcq(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeReauthenticatorBridge) {
  ReauthenticatorBridge* native =
      reinterpret_cast<ReauthenticatorBridge*>(nativeReauthenticatorBridge);
  CHECK_NATIVE_PTR(env, jcaller, native, "CanUseAuthentication", false);
  return native->CanUseAuthentication(env);
}

JNI_GENERATOR_EXPORT void Java_J_N_Mt502WDx(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeReauthenticatorBridge,
    jboolean useLastValidAuth) {
  ReauthenticatorBridge* native =
      reinterpret_cast<ReauthenticatorBridge*>(nativeReauthenticatorBridge);
  CHECK_NATIVE_PTR(env, jcaller, native, "Reauthenticate");
  return native->Reauthenticate(env, useLastValidAuth);
}


static std::atomic<jmethodID>
    g_org_chromium_chrome_browser_device_1reauth_ReauthenticatorBridge_onReauthenticationCompleted(nullptr);
static void Java_ReauthenticatorBridge_onReauthenticationCompleted(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, jboolean authSuccedeed) {
  jclass clazz = org_chromium_chrome_browser_device_1reauth_ReauthenticatorBridge_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_chrome_browser_device_1reauth_ReauthenticatorBridge_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "onReauthenticationCompleted",
          "(Z)V",
&g_org_chromium_chrome_browser_device_1reauth_ReauthenticatorBridge_onReauthenticationCompleted);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id, authSuccedeed);
}

#endif  // org_chromium_chrome_browser_device_reauth_ReauthenticatorBridge_JNI
