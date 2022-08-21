// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/chrome/browser/infobar/SurveyInfoBar

#ifndef org_chromium_chrome_browser_infobar_SurveyInfoBar_JNI
#define org_chromium_chrome_browser_infobar_SurveyInfoBar_JNI

#include <jni.h>

#include "../../../../../../base/android/jni_generator/jni_generator_helper.h"


// Step 1: Forward declarations.

JNI_REGISTRATION_EXPORT extern const char
    kClassPath_org_chromium_chrome_browser_infobar_SurveyInfoBar[];
const char kClassPath_org_chromium_chrome_browser_infobar_SurveyInfoBar[] =
    "org/chromium/chrome/browser/infobar/SurveyInfoBar";
// Leaking this jclass as we cannot use LazyInstance from some threads.
JNI_REGISTRATION_EXPORT std::atomic<jclass>
    g_org_chromium_chrome_browser_infobar_SurveyInfoBar_clazz(nullptr);
#ifndef org_chromium_chrome_browser_infobar_SurveyInfoBar_clazz_defined
#define org_chromium_chrome_browser_infobar_SurveyInfoBar_clazz_defined
inline jclass org_chromium_chrome_browser_infobar_SurveyInfoBar_clazz(JNIEnv* env) {
  return base::android::LazyGetClass(env,
      kClassPath_org_chromium_chrome_browser_infobar_SurveyInfoBar,
      &g_org_chromium_chrome_browser_infobar_SurveyInfoBar_clazz);
}
#endif


// Step 2: Constants (optional).


// Step 3: Method stubs.
static void JNI_SurveyInfoBar_Create(JNIEnv* env, const base::android::JavaParamRef<jobject>&
    webContents,
    jint displayLogoResId,
    const base::android::JavaParamRef<jobject>& surveyInfoBarDelegate);

JNI_GENERATOR_EXPORT void Java_J_N_MjByxscl(
    JNIEnv* env,
    jclass jcaller,
    jobject webContents,
    jint displayLogoResId,
    jobject surveyInfoBarDelegate) {
  return JNI_SurveyInfoBar_Create(env, base::android::JavaParamRef<jobject>(env, webContents),
      displayLogoResId, base::android::JavaParamRef<jobject>(env, surveyInfoBarDelegate));
}

JNI_GENERATOR_EXPORT jobject Java_J_N_MmjlxAU9(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeSurveyInfoBar,
    jobject caller) {
  SurveyInfoBar* native = reinterpret_cast<SurveyInfoBar*>(nativeSurveyInfoBar);
  CHECK_NATIVE_PTR(env, jcaller, native, "GetTab", NULL);
  return native->GetTab(env, base::android::JavaParamRef<jobject>(env, caller)).Release();
}


static std::atomic<jmethodID> g_org_chromium_chrome_browser_infobar_SurveyInfoBar_create(nullptr);
static base::android::ScopedJavaLocalRef<jobject> Java_SurveyInfoBar_create(JNIEnv* env,
    JniIntWrapper displayLogoResId,
    const base::android::JavaRef<jobject>& surveyInfoBarDelegate) {
  jclass clazz = org_chromium_chrome_browser_infobar_SurveyInfoBar_clazz(env);
  CHECK_CLAZZ(env, clazz,
      org_chromium_chrome_browser_infobar_SurveyInfoBar_clazz(env), NULL);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_STATIC>(
          env,
          clazz,
          "create",
"(ILorg/chromium/chrome/browser/infobar/SurveyInfoBarDelegate;)Lorg/chromium/chrome/browser/infobar/SurveyInfoBar;",
          &g_org_chromium_chrome_browser_infobar_SurveyInfoBar_create);

  jobject ret =
      env->CallStaticObjectMethod(clazz,
          call_context.base.method_id, as_jint(displayLogoResId), surveyInfoBarDelegate.obj());
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

#endif  // org_chromium_chrome_browser_infobar_SurveyInfoBar_JNI
