// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/chrome/browser/touch_to_fill/data/WebAuthnCredential

#ifndef org_chromium_chrome_browser_touch_to_fill_data_WebAuthnCredential_JNI
#define org_chromium_chrome_browser_touch_to_fill_data_WebAuthnCredential_JNI

#include <jni.h>

#include "../../../../../../../../base/android/jni_generator/jni_generator_helper.h"


// Step 1: Forward declarations.

JNI_REGISTRATION_EXPORT extern const char
    kClassPath_org_chromium_chrome_browser_touch_1to_1fill_data_WebAuthnCredential[];
const char kClassPath_org_chromium_chrome_browser_touch_1to_1fill_data_WebAuthnCredential[] =
    "org/chromium/chrome/browser/touch_to_fill/data/WebAuthnCredential";
// Leaking this jclass as we cannot use LazyInstance from some threads.
JNI_REGISTRATION_EXPORT std::atomic<jclass>
    g_org_chromium_chrome_browser_touch_1to_1fill_data_WebAuthnCredential_clazz(nullptr);
#ifndef org_chromium_chrome_browser_touch_1to_1fill_data_WebAuthnCredential_clazz_defined
#define org_chromium_chrome_browser_touch_1to_1fill_data_WebAuthnCredential_clazz_defined
inline jclass org_chromium_chrome_browser_touch_1to_1fill_data_WebAuthnCredential_clazz(JNIEnv* env)
    {
  return base::android::LazyGetClass(env,
      kClassPath_org_chromium_chrome_browser_touch_1to_1fill_data_WebAuthnCredential,
      &g_org_chromium_chrome_browser_touch_1to_1fill_data_WebAuthnCredential_clazz);
}
#endif


// Step 2: Constants (optional).


// Step 3: Method stubs.

static std::atomic<jmethodID>
    g_org_chromium_chrome_browser_touch_1to_1fill_data_WebAuthnCredential_getUsername(nullptr);
static base::android::ScopedJavaLocalRef<jstring> Java_WebAuthnCredential_getUsername(JNIEnv* env,
    const base::android::JavaRef<jobject>& obj) {
  jclass clazz = org_chromium_chrome_browser_touch_1to_1fill_data_WebAuthnCredential_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_chrome_browser_touch_1to_1fill_data_WebAuthnCredential_clazz(env), NULL);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "getUsername",
          "()Ljava/lang/String;",
          &g_org_chromium_chrome_browser_touch_1to_1fill_data_WebAuthnCredential_getUsername);

  jstring ret =
      static_cast<jstring>(env->CallObjectMethod(obj.obj(),
          call_context.base.method_id));
  return base::android::ScopedJavaLocalRef<jstring>(env, ret);
}

static std::atomic<jmethodID>
    g_org_chromium_chrome_browser_touch_1to_1fill_data_WebAuthnCredential_getDisplayName(nullptr);
static base::android::ScopedJavaLocalRef<jstring> Java_WebAuthnCredential_getDisplayName(JNIEnv*
    env, const base::android::JavaRef<jobject>& obj) {
  jclass clazz = org_chromium_chrome_browser_touch_1to_1fill_data_WebAuthnCredential_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_chrome_browser_touch_1to_1fill_data_WebAuthnCredential_clazz(env), NULL);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "getDisplayName",
          "()Ljava/lang/String;",
          &g_org_chromium_chrome_browser_touch_1to_1fill_data_WebAuthnCredential_getDisplayName);

  jstring ret =
      static_cast<jstring>(env->CallObjectMethod(obj.obj(),
          call_context.base.method_id));
  return base::android::ScopedJavaLocalRef<jstring>(env, ret);
}

static std::atomic<jmethodID>
    g_org_chromium_chrome_browser_touch_1to_1fill_data_WebAuthnCredential_getId(nullptr);
static base::android::ScopedJavaLocalRef<jstring> Java_WebAuthnCredential_getId(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  jclass clazz = org_chromium_chrome_browser_touch_1to_1fill_data_WebAuthnCredential_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_chrome_browser_touch_1to_1fill_data_WebAuthnCredential_clazz(env), NULL);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "getId",
          "()Ljava/lang/String;",
          &g_org_chromium_chrome_browser_touch_1to_1fill_data_WebAuthnCredential_getId);

  jstring ret =
      static_cast<jstring>(env->CallObjectMethod(obj.obj(),
          call_context.base.method_id));
  return base::android::ScopedJavaLocalRef<jstring>(env, ret);
}

#endif  // org_chromium_chrome_browser_touch_to_fill_data_WebAuthnCredential_JNI
