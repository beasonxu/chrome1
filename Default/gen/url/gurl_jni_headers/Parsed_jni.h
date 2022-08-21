// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/url/Parsed

#ifndef org_chromium_url_Parsed_JNI
#define org_chromium_url_Parsed_JNI

#include <jni.h>

#include "../../../../../base/android/jni_generator/jni_generator_helper.h"


// Step 1: Forward declarations.

JNI_REGISTRATION_EXPORT extern const char kClassPath_org_chromium_url_Parsed[];
const char kClassPath_org_chromium_url_Parsed[] = "org/chromium/url/Parsed";
// Leaking this jclass as we cannot use LazyInstance from some threads.
JNI_REGISTRATION_EXPORT std::atomic<jclass> g_org_chromium_url_Parsed_clazz(nullptr);
#ifndef org_chromium_url_Parsed_clazz_defined
#define org_chromium_url_Parsed_clazz_defined
inline jclass org_chromium_url_Parsed_clazz(JNIEnv* env) {
  return base::android::LazyGetClass(env, kClassPath_org_chromium_url_Parsed,
      &g_org_chromium_url_Parsed_clazz);
}
#endif


// Step 2: Constants (optional).


// Step 3: Method stubs.
namespace url {

static jlong JNI_Parsed_CreateNative(JNIEnv* env, jint schemeBegin,
    jint schemeLength,
    jint usernameBegin,
    jint usernameLength,
    jint passwordBegin,
    jint passwordLength,
    jint hostBegin,
    jint hostLength,
    jint portBegin,
    jint portLength,
    jint pathBegin,
    jint pathLength,
    jint queryBegin,
    jint queryLength,
    jint refBegin,
    jint refLength,
    jboolean potentiallyDanglingMarkup,
    jlong innerUrl);

JNI_GENERATOR_EXPORT jlong Java_J_N_MsTyiXfW(
    JNIEnv* env,
    jclass jcaller,
    jint schemeBegin,
    jint schemeLength,
    jint usernameBegin,
    jint usernameLength,
    jint passwordBegin,
    jint passwordLength,
    jint hostBegin,
    jint hostLength,
    jint portBegin,
    jint portLength,
    jint pathBegin,
    jint pathLength,
    jint queryBegin,
    jint queryLength,
    jint refBegin,
    jint refLength,
    jboolean potentiallyDanglingMarkup,
    jlong innerUrl) {
  return JNI_Parsed_CreateNative(env, schemeBegin, schemeLength, usernameBegin, usernameLength,
      passwordBegin, passwordLength, hostBegin, hostLength, portBegin, portLength, pathBegin,
      pathLength, queryBegin, queryLength, refBegin, refLength, potentiallyDanglingMarkup,
      innerUrl);
}


static std::atomic<jmethodID> g_org_chromium_url_Parsed_Constructor(nullptr);
static base::android::ScopedJavaLocalRef<jobject> Java_Parsed_Constructor(JNIEnv* env, JniIntWrapper
    schemeBegin,
    JniIntWrapper schemeLength,
    JniIntWrapper usernameBegin,
    JniIntWrapper usernameLength,
    JniIntWrapper passwordBegin,
    JniIntWrapper passwordLength,
    JniIntWrapper hostBegin,
    JniIntWrapper hostLength,
    JniIntWrapper portBegin,
    JniIntWrapper portLength,
    JniIntWrapper pathBegin,
    JniIntWrapper pathLength,
    JniIntWrapper queryBegin,
    JniIntWrapper queryLength,
    JniIntWrapper refBegin,
    JniIntWrapper refLength,
    jboolean potentiallyDanglingMarkup,
    const base::android::JavaRef<jobject>& innerUrl) {
  jclass clazz = org_chromium_url_Parsed_clazz(env);
  CHECK_CLAZZ(env, clazz,
      org_chromium_url_Parsed_clazz(env), NULL);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "<init>",
          "(IIIIIIIIIIIIIIIIZLorg/chromium/url/Parsed;)V",
          &g_org_chromium_url_Parsed_Constructor);

  jobject ret =
      env->NewObject(clazz,
          call_context.base.method_id, as_jint(schemeBegin), as_jint(schemeLength),
              as_jint(usernameBegin), as_jint(usernameLength), as_jint(passwordBegin),
              as_jint(passwordLength), as_jint(hostBegin), as_jint(hostLength), as_jint(portBegin),
              as_jint(portLength), as_jint(pathBegin), as_jint(pathLength), as_jint(queryBegin),
              as_jint(queryLength), as_jint(refBegin), as_jint(refLength),
              potentiallyDanglingMarkup, innerUrl.obj());
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

}  // namespace url

#endif  // org_chromium_url_Parsed_JNI
