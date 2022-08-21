// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/chrome/browser/offlinepages/PublishPageCallback

#ifndef org_chromium_chrome_browser_offlinepages_PublishPageCallback_JNI
#define org_chromium_chrome_browser_offlinepages_PublishPageCallback_JNI

#include <jni.h>

#include "../../../../../../base/android/jni_generator/jni_generator_helper.h"


// Step 1: Forward declarations.

JNI_REGISTRATION_EXPORT extern const char
    kClassPath_org_chromium_chrome_browser_offlinepages_PublishPageCallback[];
const char kClassPath_org_chromium_chrome_browser_offlinepages_PublishPageCallback[] =
    "org/chromium/chrome/browser/offlinepages/PublishPageCallback";
// Leaking this jclass as we cannot use LazyInstance from some threads.
JNI_REGISTRATION_EXPORT std::atomic<jclass>
    g_org_chromium_chrome_browser_offlinepages_PublishPageCallback_clazz(nullptr);
#ifndef org_chromium_chrome_browser_offlinepages_PublishPageCallback_clazz_defined
#define org_chromium_chrome_browser_offlinepages_PublishPageCallback_clazz_defined
inline jclass org_chromium_chrome_browser_offlinepages_PublishPageCallback_clazz(JNIEnv* env) {
  return base::android::LazyGetClass(env,
      kClassPath_org_chromium_chrome_browser_offlinepages_PublishPageCallback,
      &g_org_chromium_chrome_browser_offlinepages_PublishPageCallback_clazz);
}
#endif


// Step 2: Constants (optional).


// Step 3: Method stubs.

static std::atomic<jmethodID>
    g_org_chromium_chrome_browser_offlinepages_PublishPageCallback_onResult(nullptr);
static void Java_PublishPageCallback_onResult(JNIEnv* env, const base::android::JavaRef<jobject>&
    obj, const base::android::JavaRef<jstring>& newFilePath) {
  jclass clazz = org_chromium_chrome_browser_offlinepages_PublishPageCallback_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_chrome_browser_offlinepages_PublishPageCallback_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "onResult",
          "(Ljava/lang/String;)V",
          &g_org_chromium_chrome_browser_offlinepages_PublishPageCallback_onResult);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id, newFilePath.obj());
}

#endif  // org_chromium_chrome_browser_offlinepages_PublishPageCallback_JNI
