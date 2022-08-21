// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/chrome/browser/sharing/click_to_call/ClickToCallMessageHandler

#ifndef org_chromium_chrome_browser_sharing_click_to_call_ClickToCallMessageHandler_JNI
#define org_chromium_chrome_browser_sharing_click_to_call_ClickToCallMessageHandler_JNI

#include <jni.h>

#include "../../../../../../base/android/jni_generator/jni_generator_helper.h"


// Step 1: Forward declarations.

JNI_REGISTRATION_EXPORT extern const char
    kClassPath_org_chromium_chrome_browser_sharing_click_1to_1call_ClickToCallMessageHandler[];
const char
    kClassPath_org_chromium_chrome_browser_sharing_click_1to_1call_ClickToCallMessageHandler[] =
    "org/chromium/chrome/browser/sharing/click_to_call/ClickToCallMessageHandler";
// Leaking this jclass as we cannot use LazyInstance from some threads.
JNI_REGISTRATION_EXPORT std::atomic<jclass>
    g_org_chromium_chrome_browser_sharing_click_1to_1call_ClickToCallMessageHandler_clazz(nullptr);
#ifndef org_chromium_chrome_browser_sharing_click_1to_1call_ClickToCallMessageHandler_clazz_defined
#define org_chromium_chrome_browser_sharing_click_1to_1call_ClickToCallMessageHandler_clazz_defined
inline jclass
    org_chromium_chrome_browser_sharing_click_1to_1call_ClickToCallMessageHandler_clazz(JNIEnv* env)
    {
  return base::android::LazyGetClass(env,
      kClassPath_org_chromium_chrome_browser_sharing_click_1to_1call_ClickToCallMessageHandler,
      &g_org_chromium_chrome_browser_sharing_click_1to_1call_ClickToCallMessageHandler_clazz);
}
#endif


// Step 2: Constants (optional).


// Step 3: Method stubs.

static std::atomic<jmethodID>
    g_org_chromium_chrome_browser_sharing_click_1to_1call_ClickToCallMessageHandler_handleMessage(nullptr);
static void Java_ClickToCallMessageHandler_handleMessage(JNIEnv* env, const
    base::android::JavaRef<jstring>& phoneNumber) {
  jclass clazz =
      org_chromium_chrome_browser_sharing_click_1to_1call_ClickToCallMessageHandler_clazz(env);
  CHECK_CLAZZ(env, clazz,
      org_chromium_chrome_browser_sharing_click_1to_1call_ClickToCallMessageHandler_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_STATIC>(
          env,
          clazz,
          "handleMessage",
          "(Ljava/lang/String;)V",
&g_org_chromium_chrome_browser_sharing_click_1to_1call_ClickToCallMessageHandler_handleMessage);

     env->CallStaticVoidMethod(clazz,
          call_context.base.method_id, phoneNumber.obj());
}

#endif  // org_chromium_chrome_browser_sharing_click_to_call_ClickToCallMessageHandler_JNI
