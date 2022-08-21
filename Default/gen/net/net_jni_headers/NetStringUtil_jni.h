// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/net/NetStringUtil

#ifndef org_chromium_net_NetStringUtil_JNI
#define org_chromium_net_NetStringUtil_JNI

#include <jni.h>

#include "../../../../../base/android/jni_generator/jni_generator_helper.h"


// Step 1: Forward declarations.

JNI_REGISTRATION_EXPORT extern const char kClassPath_org_chromium_net_NetStringUtil[];
const char kClassPath_org_chromium_net_NetStringUtil[] = "org/chromium/net/NetStringUtil";
// Leaking this jclass as we cannot use LazyInstance from some threads.
JNI_REGISTRATION_EXPORT std::atomic<jclass> g_org_chromium_net_NetStringUtil_clazz(nullptr);
#ifndef org_chromium_net_NetStringUtil_clazz_defined
#define org_chromium_net_NetStringUtil_clazz_defined
inline jclass org_chromium_net_NetStringUtil_clazz(JNIEnv* env) {
  return base::android::LazyGetClass(env, kClassPath_org_chromium_net_NetStringUtil,
      &g_org_chromium_net_NetStringUtil_clazz);
}
#endif


// Step 2: Constants (optional).


// Step 3: Method stubs.
namespace net {
namespace android {


static std::atomic<jmethodID> g_org_chromium_net_NetStringUtil_convertToUnicode(nullptr);
static base::android::ScopedJavaLocalRef<jstring> Java_NetStringUtil_convertToUnicode(JNIEnv* env,
    const base::android::JavaRef<jobject>& text,
    const base::android::JavaRef<jstring>& charsetName) {
  jclass clazz = org_chromium_net_NetStringUtil_clazz(env);
  CHECK_CLAZZ(env, clazz,
      org_chromium_net_NetStringUtil_clazz(env), NULL);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_STATIC>(
          env,
          clazz,
          "convertToUnicode",
          "(Ljava/nio/ByteBuffer;Ljava/lang/String;)Ljava/lang/String;",
          &g_org_chromium_net_NetStringUtil_convertToUnicode);

  jstring ret =
      static_cast<jstring>(env->CallStaticObjectMethod(clazz,
          call_context.base.method_id, text.obj(), charsetName.obj()));
  return base::android::ScopedJavaLocalRef<jstring>(env, ret);
}

static std::atomic<jmethodID>
    g_org_chromium_net_NetStringUtil_convertToUnicodeAndNormalize(nullptr);
static base::android::ScopedJavaLocalRef<jstring>
    Java_NetStringUtil_convertToUnicodeAndNormalize(JNIEnv* env, const
    base::android::JavaRef<jobject>& text,
    const base::android::JavaRef<jstring>& charsetName) {
  jclass clazz = org_chromium_net_NetStringUtil_clazz(env);
  CHECK_CLAZZ(env, clazz,
      org_chromium_net_NetStringUtil_clazz(env), NULL);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_STATIC>(
          env,
          clazz,
          "convertToUnicodeAndNormalize",
          "(Ljava/nio/ByteBuffer;Ljava/lang/String;)Ljava/lang/String;",
          &g_org_chromium_net_NetStringUtil_convertToUnicodeAndNormalize);

  jstring ret =
      static_cast<jstring>(env->CallStaticObjectMethod(clazz,
          call_context.base.method_id, text.obj(), charsetName.obj()));
  return base::android::ScopedJavaLocalRef<jstring>(env, ret);
}

static std::atomic<jmethodID>
    g_org_chromium_net_NetStringUtil_convertToUnicodeWithSubstitutions(nullptr);
static base::android::ScopedJavaLocalRef<jstring>
    Java_NetStringUtil_convertToUnicodeWithSubstitutions(JNIEnv* env, const
    base::android::JavaRef<jobject>& text,
    const base::android::JavaRef<jstring>& charsetName) {
  jclass clazz = org_chromium_net_NetStringUtil_clazz(env);
  CHECK_CLAZZ(env, clazz,
      org_chromium_net_NetStringUtil_clazz(env), NULL);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_STATIC>(
          env,
          clazz,
          "convertToUnicodeWithSubstitutions",
          "(Ljava/nio/ByteBuffer;Ljava/lang/String;)Ljava/lang/String;",
          &g_org_chromium_net_NetStringUtil_convertToUnicodeWithSubstitutions);

  jstring ret =
      static_cast<jstring>(env->CallStaticObjectMethod(clazz,
          call_context.base.method_id, text.obj(), charsetName.obj()));
  return base::android::ScopedJavaLocalRef<jstring>(env, ret);
}

static std::atomic<jmethodID> g_org_chromium_net_NetStringUtil_toUpperCase(nullptr);
static base::android::ScopedJavaLocalRef<jstring> Java_NetStringUtil_toUpperCase(JNIEnv* env, const
    base::android::JavaRef<jstring>& str) {
  jclass clazz = org_chromium_net_NetStringUtil_clazz(env);
  CHECK_CLAZZ(env, clazz,
      org_chromium_net_NetStringUtil_clazz(env), NULL);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_STATIC>(
          env,
          clazz,
          "toUpperCase",
          "(Ljava/lang/String;)Ljava/lang/String;",
          &g_org_chromium_net_NetStringUtil_toUpperCase);

  jstring ret =
      static_cast<jstring>(env->CallStaticObjectMethod(clazz,
          call_context.base.method_id, str.obj()));
  return base::android::ScopedJavaLocalRef<jstring>(env, ret);
}

}  // namespace android
}  // namespace net

#endif  // org_chromium_net_NetStringUtil_JNI
