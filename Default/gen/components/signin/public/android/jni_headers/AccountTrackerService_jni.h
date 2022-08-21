// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/components/signin/identitymanager/AccountTrackerService

#ifndef org_chromium_components_signin_identitymanager_AccountTrackerService_JNI
#define org_chromium_components_signin_identitymanager_AccountTrackerService_JNI

#include <jni.h>

#include "../../../../../../../../base/android/jni_generator/jni_generator_helper.h"


// Step 1: Forward declarations.

JNI_REGISTRATION_EXPORT extern const char
    kClassPath_org_chromium_components_signin_identitymanager_AccountTrackerService[];
const char kClassPath_org_chromium_components_signin_identitymanager_AccountTrackerService[] =
    "org/chromium/components/signin/identitymanager/AccountTrackerService";
// Leaking this jclass as we cannot use LazyInstance from some threads.
JNI_REGISTRATION_EXPORT std::atomic<jclass>
    g_org_chromium_components_signin_identitymanager_AccountTrackerService_clazz(nullptr);
#ifndef org_chromium_components_signin_identitymanager_AccountTrackerService_clazz_defined
#define org_chromium_components_signin_identitymanager_AccountTrackerService_clazz_defined
inline jclass org_chromium_components_signin_identitymanager_AccountTrackerService_clazz(JNIEnv*
    env) {
  return base::android::LazyGetClass(env,
      kClassPath_org_chromium_components_signin_identitymanager_AccountTrackerService,
      &g_org_chromium_components_signin_identitymanager_AccountTrackerService_clazz);
}
#endif


// Step 2: Constants (optional).


// Step 3: Method stubs.
namespace  signin {

JNI_GENERATOR_EXPORT void Java_J_N_MyqrKXjt(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeAccountTrackerService,
    jobjectArray gaiaIds,
    jobjectArray emails) {
  AccountTrackerService* native =
      reinterpret_cast<AccountTrackerService*>(nativeAccountTrackerService);
  CHECK_NATIVE_PTR(env, jcaller, native, "SeedAccountsInfo");
  return native->SeedAccountsInfo(env, base::android::JavaParamRef<jobjectArray>(env, gaiaIds),
      base::android::JavaParamRef<jobjectArray>(env, emails));
}


static std::atomic<jmethodID>
    g_org_chromium_components_signin_identitymanager_AccountTrackerService_Constructor(nullptr);
static base::android::ScopedJavaLocalRef<jobject> Java_AccountTrackerService_Constructor(JNIEnv*
    env, jlong nativeAccountTrackerService) {
  jclass clazz = org_chromium_components_signin_identitymanager_AccountTrackerService_clazz(env);
  CHECK_CLAZZ(env, clazz,
      org_chromium_components_signin_identitymanager_AccountTrackerService_clazz(env), NULL);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "<init>",
          "(J)V",
          &g_org_chromium_components_signin_identitymanager_AccountTrackerService_Constructor);

  jobject ret =
      env->NewObject(clazz,
          call_context.base.method_id, nativeAccountTrackerService);
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

}  // namespace  signin

#endif  // org_chromium_components_signin_identitymanager_AccountTrackerService_JNI
