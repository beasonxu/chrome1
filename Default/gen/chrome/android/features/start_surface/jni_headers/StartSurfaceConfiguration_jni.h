// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/chrome/features/start_surface/StartSurfaceConfiguration

#ifndef org_chromium_chrome_features_start_surface_StartSurfaceConfiguration_JNI
#define org_chromium_chrome_features_start_surface_StartSurfaceConfiguration_JNI

#include <jni.h>

#include "../../../../../../../../base/android/jni_generator/jni_generator_helper.h"


// Step 1: Forward declarations.

JNI_REGISTRATION_EXPORT extern const char
    kClassPath_org_chromium_chrome_features_start_1surface_StartSurfaceConfiguration[];
const char kClassPath_org_chromium_chrome_features_start_1surface_StartSurfaceConfiguration[] =
    "org/chromium/chrome/features/start_surface/StartSurfaceConfiguration";
// Leaking this jclass as we cannot use LazyInstance from some threads.
JNI_REGISTRATION_EXPORT std::atomic<jclass>
    g_org_chromium_chrome_features_start_1surface_StartSurfaceConfiguration_clazz(nullptr);
#ifndef org_chromium_chrome_features_start_1surface_StartSurfaceConfiguration_clazz_defined
#define org_chromium_chrome_features_start_1surface_StartSurfaceConfiguration_clazz_defined
inline jclass org_chromium_chrome_features_start_1surface_StartSurfaceConfiguration_clazz(JNIEnv*
    env) {
  return base::android::LazyGetClass(env,
      kClassPath_org_chromium_chrome_features_start_1surface_StartSurfaceConfiguration,
      &g_org_chromium_chrome_features_start_1surface_StartSurfaceConfiguration_clazz);
}
#endif


// Step 2: Constants (optional).


// Step 3: Method stubs.
static void JNI_StartSurfaceConfiguration_WarmupRenderer(JNIEnv* env, const
    base::android::JavaParamRef<jobject>& profile);

JNI_GENERATOR_EXPORT void Java_J_N_Mo5fW0wM(
    JNIEnv* env,
    jclass jcaller,
    jobject profile) {
  return JNI_StartSurfaceConfiguration_WarmupRenderer(env, base::android::JavaParamRef<jobject>(env,
      profile));
}


static std::atomic<jmethodID>
    g_org_chromium_chrome_features_start_1surface_StartSurfaceConfiguration_isBehaviouralTargetingEnabled(nullptr);
static jboolean Java_StartSurfaceConfiguration_isBehaviouralTargetingEnabled(JNIEnv* env) {
  jclass clazz = org_chromium_chrome_features_start_1surface_StartSurfaceConfiguration_clazz(env);
  CHECK_CLAZZ(env, clazz,
      org_chromium_chrome_features_start_1surface_StartSurfaceConfiguration_clazz(env), false);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_STATIC>(
          env,
          clazz,
          "isBehaviouralTargetingEnabled",
          "()Z",
&g_org_chromium_chrome_features_start_1surface_StartSurfaceConfiguration_isBehaviouralTargetingEnabled);

  jboolean ret =
      env->CallStaticBooleanMethod(clazz,
          call_context.base.method_id);
  return ret;
}

#endif  // org_chromium_chrome_features_start_surface_StartSurfaceConfiguration_JNI
