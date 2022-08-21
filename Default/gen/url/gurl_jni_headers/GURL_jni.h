// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/url/GURL

#ifndef org_chromium_url_GURL_JNI
#define org_chromium_url_GURL_JNI

#include <jni.h>

#include "../../../../../base/android/jni_generator/jni_generator_helper.h"


// Step 1: Forward declarations.

JNI_REGISTRATION_EXPORT extern const char kClassPath_org_chromium_url_GURL[];
const char kClassPath_org_chromium_url_GURL[] = "org/chromium/url/GURL";
// Leaking this jclass as we cannot use LazyInstance from some threads.
JNI_REGISTRATION_EXPORT std::atomic<jclass> g_org_chromium_url_GURL_clazz(nullptr);
#ifndef org_chromium_url_GURL_clazz_defined
#define org_chromium_url_GURL_clazz_defined
inline jclass org_chromium_url_GURL_clazz(JNIEnv* env) {
  return base::android::LazyGetClass(env, kClassPath_org_chromium_url_GURL,
      &g_org_chromium_url_GURL_clazz);
}
#endif


// Step 2: Constants (optional).


// Step 3: Method stubs.
namespace url {

static void JNI_GURL_Init(JNIEnv* env, const base::android::JavaParamRef<jstring>& uri,
    const base::android::JavaParamRef<jobject>& target);

JNI_GENERATOR_EXPORT void Java_J_N_MWBVWQ0I(
    JNIEnv* env,
    jclass jcaller,
    jstring uri,
    jobject target) {
  return JNI_GURL_Init(env, base::android::JavaParamRef<jstring>(env, uri),
      base::android::JavaParamRef<jobject>(env, target));
}

static void JNI_GURL_GetOrigin(JNIEnv* env, const base::android::JavaParamRef<jstring>& spec,
    jboolean isValid,
    jlong nativeParsed,
    const base::android::JavaParamRef<jobject>& target);

JNI_GENERATOR_EXPORT void Java_J_N_MNBd3mFA(
    JNIEnv* env,
    jclass jcaller,
    jstring spec,
    jboolean isValid,
    jlong nativeParsed,
    jobject target) {
  return JNI_GURL_GetOrigin(env, base::android::JavaParamRef<jstring>(env, spec), isValid,
      nativeParsed, base::android::JavaParamRef<jobject>(env, target));
}

static jboolean JNI_GURL_DomainIs(JNIEnv* env, const base::android::JavaParamRef<jstring>& spec,
    jboolean isValid,
    jlong nativeParsed,
    const base::android::JavaParamRef<jstring>& domain);

JNI_GENERATOR_EXPORT jboolean Java_J_N_MstQ1QcZ(
    JNIEnv* env,
    jclass jcaller,
    jstring spec,
    jboolean isValid,
    jlong nativeParsed,
    jstring domain) {
  return JNI_GURL_DomainIs(env, base::android::JavaParamRef<jstring>(env, spec), isValid,
      nativeParsed, base::android::JavaParamRef<jstring>(env, domain));
}

static jlong JNI_GURL_CreateNative(JNIEnv* env, const base::android::JavaParamRef<jstring>& spec,
    jboolean isValid,
    jlong nativeParsed);

JNI_GENERATOR_EXPORT jlong Java_J_N_MnPIH_00024_000241(
    JNIEnv* env,
    jclass jcaller,
    jstring spec,
    jboolean isValid,
    jlong nativeParsed) {
  return JNI_GURL_CreateNative(env, base::android::JavaParamRef<jstring>(env, spec), isValid,
      nativeParsed);
}


static std::atomic<jmethodID> g_org_chromium_url_GURL_emptyGURL(nullptr);
static base::android::ScopedJavaLocalRef<jobject> Java_GURL_emptyGURL(JNIEnv* env) {
  jclass clazz = org_chromium_url_GURL_clazz(env);
  CHECK_CLAZZ(env, clazz,
      org_chromium_url_GURL_clazz(env), NULL);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_STATIC>(
          env,
          clazz,
          "emptyGURL",
          "()Lorg/chromium/url/GURL;",
          &g_org_chromium_url_GURL_emptyGURL);

  jobject ret =
      env->CallStaticObjectMethod(clazz,
          call_context.base.method_id);
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

static std::atomic<jmethodID> g_org_chromium_url_GURL_Constructor(nullptr);
static base::android::ScopedJavaLocalRef<jobject> Java_GURL_Constructor(JNIEnv* env) {
  jclass clazz = org_chromium_url_GURL_clazz(env);
  CHECK_CLAZZ(env, clazz,
      org_chromium_url_GURL_clazz(env), NULL);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "<init>",
          "()V",
          &g_org_chromium_url_GURL_Constructor);

  jobject ret =
      env->NewObject(clazz,
          call_context.base.method_id);
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

static std::atomic<jmethodID> g_org_chromium_url_GURL_init(nullptr);
static void Java_GURL_init(JNIEnv* env, const base::android::JavaRef<jobject>& obj, const
    base::android::JavaRef<jstring>& spec,
    jboolean isValid,
    const base::android::JavaRef<jobject>& parsed) {
  jclass clazz = org_chromium_url_GURL_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_url_GURL_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "init",
          "(Ljava/lang/String;ZLorg/chromium/url/Parsed;)V",
          &g_org_chromium_url_GURL_init);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id, spec.obj(), isValid, parsed.obj());
}

static std::atomic<jmethodID> g_org_chromium_url_GURL_toNativeGURL(nullptr);
static jlong Java_GURL_toNativeGURL(JNIEnv* env, const base::android::JavaRef<jobject>& obj) {
  jclass clazz = org_chromium_url_GURL_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_url_GURL_clazz(env), 0);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "toNativeGURL",
          "()J",
          &g_org_chromium_url_GURL_toNativeGURL);

  jlong ret =
      env->CallLongMethod(obj.obj(),
          call_context.base.method_id);
  return ret;
}

}  // namespace url

#endif  // org_chromium_url_GURL_JNI
