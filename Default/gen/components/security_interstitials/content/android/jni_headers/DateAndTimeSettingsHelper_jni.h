// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/components/security_interstitials/DateAndTimeSettingsHelper

#ifndef org_chromium_components_security_interstitials_DateAndTimeSettingsHelper_JNI
#define org_chromium_components_security_interstitials_DateAndTimeSettingsHelper_JNI

#include <jni.h>

#include "../../../../../../../../base/android/jni_generator/jni_generator_helper.h"


// Step 1: Forward declarations.

JNI_REGISTRATION_EXPORT extern const char
    kClassPath_org_chromium_components_security_1interstitials_DateAndTimeSettingsHelper[];
const char kClassPath_org_chromium_components_security_1interstitials_DateAndTimeSettingsHelper[] =
    "org/chromium/components/security_interstitials/DateAndTimeSettingsHelper";
// Leaking this jclass as we cannot use LazyInstance from some threads.
JNI_REGISTRATION_EXPORT std::atomic<jclass>
    g_org_chromium_components_security_1interstitials_DateAndTimeSettingsHelper_clazz(nullptr);
#ifndef org_chromium_components_security_1interstitials_DateAndTimeSettingsHelper_clazz_defined
#define org_chromium_components_security_1interstitials_DateAndTimeSettingsHelper_clazz_defined
inline jclass
    org_chromium_components_security_1interstitials_DateAndTimeSettingsHelper_clazz(JNIEnv* env) {
  return base::android::LazyGetClass(env,
      kClassPath_org_chromium_components_security_1interstitials_DateAndTimeSettingsHelper,
      &g_org_chromium_components_security_1interstitials_DateAndTimeSettingsHelper_clazz);
}
#endif


// Step 2: Constants (optional).


// Step 3: Method stubs.
namespace security_interstitials {


static std::atomic<jmethodID>
    g_org_chromium_components_security_1interstitials_DateAndTimeSettingsHelper_openDateAndTimeSettings(nullptr);
static void Java_DateAndTimeSettingsHelper_openDateAndTimeSettings(JNIEnv* env) {
  jclass clazz =
      org_chromium_components_security_1interstitials_DateAndTimeSettingsHelper_clazz(env);
  CHECK_CLAZZ(env, clazz,
      org_chromium_components_security_1interstitials_DateAndTimeSettingsHelper_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_STATIC>(
          env,
          clazz,
          "openDateAndTimeSettings",
          "()V",
&g_org_chromium_components_security_1interstitials_DateAndTimeSettingsHelper_openDateAndTimeSettings);

     env->CallStaticVoidMethod(clazz,
          call_context.base.method_id);
}

}  // namespace security_interstitials

#endif  // org_chromium_components_security_interstitials_DateAndTimeSettingsHelper_JNI
