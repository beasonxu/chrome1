// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/chrome/browser/dom_distiller/DomDistillerTabUtils

#ifndef org_chromium_chrome_browser_dom_distiller_DomDistillerTabUtils_JNI
#define org_chromium_chrome_browser_dom_distiller_DomDistillerTabUtils_JNI

#include <jni.h>

#include "../../../../../../base/android/jni_generator/jni_generator_helper.h"


// Step 1: Forward declarations.


// Step 2: Constants (optional).


// Step 3: Method stubs.
namespace android {

static void JNI_DomDistillerTabUtils_DistillCurrentPageAndView(JNIEnv* env, const
    base::android::JavaParamRef<jobject>& webContents);

JNI_GENERATOR_EXPORT void Java_J_N_MAJeztUL(
    JNIEnv* env,
    jclass jcaller,
    jobject webContents) {
  return JNI_DomDistillerTabUtils_DistillCurrentPageAndView(env,
      base::android::JavaParamRef<jobject>(env, webContents));
}

static void JNI_DomDistillerTabUtils_DistillCurrentPage(JNIEnv* env, const
    base::android::JavaParamRef<jobject>& webContents);

JNI_GENERATOR_EXPORT void Java_J_N_M2whIOZH(
    JNIEnv* env,
    jclass jcaller,
    jobject webContents) {
  return JNI_DomDistillerTabUtils_DistillCurrentPage(env, base::android::JavaParamRef<jobject>(env,
      webContents));
}

static void JNI_DomDistillerTabUtils_DistillAndView(JNIEnv* env, const
    base::android::JavaParamRef<jobject>& sourceWebContents,
    const base::android::JavaParamRef<jobject>& destinationWebContents);

JNI_GENERATOR_EXPORT void Java_J_N_MwpZ4nY4(
    JNIEnv* env,
    jclass jcaller,
    jobject sourceWebContents,
    jobject destinationWebContents) {
  return JNI_DomDistillerTabUtils_DistillAndView(env, base::android::JavaParamRef<jobject>(env,
      sourceWebContents), base::android::JavaParamRef<jobject>(env, destinationWebContents));
}

static base::android::ScopedJavaLocalRef<jstring>
    JNI_DomDistillerTabUtils_GetFormattedUrlFromOriginalDistillerUrl(JNIEnv* env, const
    base::android::JavaParamRef<jobject>& url);

JNI_GENERATOR_EXPORT jstring Java_J_N_M5yzUycr(
    JNIEnv* env,
    jclass jcaller,
    jobject url) {
  return JNI_DomDistillerTabUtils_GetFormattedUrlFromOriginalDistillerUrl(env,
      base::android::JavaParamRef<jobject>(env, url)).Release();
}

static jint JNI_DomDistillerTabUtils_GetDistillerHeuristics(JNIEnv* env);

JNI_GENERATOR_EXPORT jint Java_J_N_MWpdTnYb(
    JNIEnv* env,
    jclass jcaller) {
  return JNI_DomDistillerTabUtils_GetDistillerHeuristics(env);
}

static void JNI_DomDistillerTabUtils_SetInterceptNavigationDelegate(JNIEnv* env, const
    base::android::JavaParamRef<jobject>& delegate,
    const base::android::JavaParamRef<jobject>& webContents);

JNI_GENERATOR_EXPORT void Java_J_N_MEwGhN3r(
    JNIEnv* env,
    jclass jcaller,
    jobject delegate,
    jobject webContents) {
  return JNI_DomDistillerTabUtils_SetInterceptNavigationDelegate(env,
      base::android::JavaParamRef<jobject>(env, delegate), base::android::JavaParamRef<jobject>(env,
      webContents));
}


}  // namespace android

#endif  // org_chromium_chrome_browser_dom_distiller_DomDistillerTabUtils_JNI
