// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/chrome/browser/price_tracking/PriceTrackingNotificationBridge

#ifndef org_chromium_chrome_browser_price_tracking_PriceTrackingNotificationBridge_JNI
#define org_chromium_chrome_browser_price_tracking_PriceTrackingNotificationBridge_JNI

#include <jni.h>

#include "../../../../../../../../../base/android/jni_generator/jni_generator_helper.h"


// Step 1: Forward declarations.

JNI_REGISTRATION_EXPORT extern const char
    kClassPath_org_chromium_chrome_browser_price_1tracking_PriceTrackingNotificationBridge[];
const char kClassPath_org_chromium_chrome_browser_price_1tracking_PriceTrackingNotificationBridge[]
    = "org/chromium/chrome/browser/price_tracking/PriceTrackingNotificationBridge";
// Leaking this jclass as we cannot use LazyInstance from some threads.
JNI_REGISTRATION_EXPORT std::atomic<jclass>
    g_org_chromium_chrome_browser_price_1tracking_PriceTrackingNotificationBridge_clazz(nullptr);
#ifndef org_chromium_chrome_browser_price_1tracking_PriceTrackingNotificationBridge_clazz_defined
#define org_chromium_chrome_browser_price_1tracking_PriceTrackingNotificationBridge_clazz_defined
inline jclass
    org_chromium_chrome_browser_price_1tracking_PriceTrackingNotificationBridge_clazz(JNIEnv* env) {
  return base::android::LazyGetClass(env,
      kClassPath_org_chromium_chrome_browser_price_1tracking_PriceTrackingNotificationBridge,
      &g_org_chromium_chrome_browser_price_1tracking_PriceTrackingNotificationBridge_clazz);
}
#endif


// Step 2: Constants (optional).


// Step 3: Method stubs.

static std::atomic<jmethodID>
    g_org_chromium_chrome_browser_price_1tracking_PriceTrackingNotificationBridge_create(nullptr);
static base::android::ScopedJavaLocalRef<jobject>
    Java_PriceTrackingNotificationBridge_create(JNIEnv* env, jlong
    nativePriceTrackingNotificationBridge) {
  jclass clazz =
      org_chromium_chrome_browser_price_1tracking_PriceTrackingNotificationBridge_clazz(env);
  CHECK_CLAZZ(env, clazz,
      org_chromium_chrome_browser_price_1tracking_PriceTrackingNotificationBridge_clazz(env), NULL);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_STATIC>(
          env,
          clazz,
          "create",
          "(J)Lorg/chromium/chrome/browser/price_tracking/PriceTrackingNotificationBridge;",
          &g_org_chromium_chrome_browser_price_1tracking_PriceTrackingNotificationBridge_create);

  jobject ret =
      env->CallStaticObjectMethod(clazz,
          call_context.base.method_id, nativePriceTrackingNotificationBridge);
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

static std::atomic<jmethodID>
    g_org_chromium_chrome_browser_price_1tracking_PriceTrackingNotificationBridge_showNotification(nullptr);
static void Java_PriceTrackingNotificationBridge_showNotification(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, const base::android::JavaRef<jbyteArray>& payload) {
  jclass clazz =
      org_chromium_chrome_browser_price_1tracking_PriceTrackingNotificationBridge_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_chrome_browser_price_1tracking_PriceTrackingNotificationBridge_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "showNotification",
          "([B)V",
&g_org_chromium_chrome_browser_price_1tracking_PriceTrackingNotificationBridge_showNotification);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id, payload.obj());
}

#endif  // org_chromium_chrome_browser_price_tracking_PriceTrackingNotificationBridge_JNI
