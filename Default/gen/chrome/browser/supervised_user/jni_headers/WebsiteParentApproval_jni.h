// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/chrome/browser/supervised_user/WebsiteParentApproval

#ifndef org_chromium_chrome_browser_supervised_user_WebsiteParentApproval_JNI
#define org_chromium_chrome_browser_supervised_user_WebsiteParentApproval_JNI

#include <jni.h>

#include "../../../../../../../base/android/jni_generator/jni_generator_helper.h"


// Step 1: Forward declarations.

JNI_REGISTRATION_EXPORT extern const char
    kClassPath_org_chromium_chrome_browser_supervised_1user_WebsiteParentApproval[];
const char kClassPath_org_chromium_chrome_browser_supervised_1user_WebsiteParentApproval[] =
    "org/chromium/chrome/browser/supervised_user/WebsiteParentApproval";
// Leaking this jclass as we cannot use LazyInstance from some threads.
JNI_REGISTRATION_EXPORT std::atomic<jclass>
    g_org_chromium_chrome_browser_supervised_1user_WebsiteParentApproval_clazz(nullptr);
#ifndef org_chromium_chrome_browser_supervised_1user_WebsiteParentApproval_clazz_defined
#define org_chromium_chrome_browser_supervised_1user_WebsiteParentApproval_clazz_defined
inline jclass org_chromium_chrome_browser_supervised_1user_WebsiteParentApproval_clazz(JNIEnv* env)
    {
  return base::android::LazyGetClass(env,
      kClassPath_org_chromium_chrome_browser_supervised_1user_WebsiteParentApproval,
      &g_org_chromium_chrome_browser_supervised_1user_WebsiteParentApproval_clazz);
}
#endif


// Step 2: Constants (optional).


// Step 3: Method stubs.
static void JNI_WebsiteParentApproval_OnCompletion(JNIEnv* env, jboolean success);

JNI_GENERATOR_EXPORT void Java_J_N_MEedSkgE(
    JNIEnv* env,
    jclass jcaller,
    jboolean success) {
  return JNI_WebsiteParentApproval_OnCompletion(env, success);
}


static std::atomic<jmethodID>
    g_org_chromium_chrome_browser_supervised_1user_WebsiteParentApproval_isLocalApprovalSupported(nullptr);
static jboolean Java_WebsiteParentApproval_isLocalApprovalSupported(JNIEnv* env) {
  jclass clazz = org_chromium_chrome_browser_supervised_1user_WebsiteParentApproval_clazz(env);
  CHECK_CLAZZ(env, clazz,
      org_chromium_chrome_browser_supervised_1user_WebsiteParentApproval_clazz(env), false);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_STATIC>(
          env,
          clazz,
          "isLocalApprovalSupported",
          "()Z",
&g_org_chromium_chrome_browser_supervised_1user_WebsiteParentApproval_isLocalApprovalSupported);

  jboolean ret =
      env->CallStaticBooleanMethod(clazz,
          call_context.base.method_id);
  return ret;
}

static std::atomic<jmethodID>
    g_org_chromium_chrome_browser_supervised_1user_WebsiteParentApproval_requestLocalApproval(nullptr);
static void Java_WebsiteParentApproval_requestLocalApproval(JNIEnv* env, const
    base::android::JavaRef<jobject>& windowAndroid,
    const base::android::JavaRef<jobject>& url) {
  jclass clazz = org_chromium_chrome_browser_supervised_1user_WebsiteParentApproval_clazz(env);
  CHECK_CLAZZ(env, clazz,
      org_chromium_chrome_browser_supervised_1user_WebsiteParentApproval_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_STATIC>(
          env,
          clazz,
          "requestLocalApproval",
          "(Lorg/chromium/ui/base/WindowAndroid;Lorg/chromium/url/GURL;)V",
&g_org_chromium_chrome_browser_supervised_1user_WebsiteParentApproval_requestLocalApproval);

     env->CallStaticVoidMethod(clazz,
          call_context.base.method_id, windowAndroid.obj(), url.obj());
}

#endif  // org_chromium_chrome_browser_supervised_user_WebsiteParentApproval_JNI
