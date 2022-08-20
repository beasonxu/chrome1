// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/components/payments/PaymentRequestUpdateEventListener

#ifndef org_chromium_components_payments_PaymentRequestUpdateEventListener_JNI
#define org_chromium_components_payments_PaymentRequestUpdateEventListener_JNI

#include <jni.h>

#include "../../../../../../../../base/android/jni_generator/jni_generator_helper.h"


// Step 1: Forward declarations.

JNI_REGISTRATION_EXPORT extern const char
    kClassPath_org_chromium_components_payments_PaymentRequestUpdateEventListener[];
const char kClassPath_org_chromium_components_payments_PaymentRequestUpdateEventListener[] =
    "org/chromium/components/payments/PaymentRequestUpdateEventListener";
// Leaking this jclass as we cannot use LazyInstance from some threads.
JNI_REGISTRATION_EXPORT std::atomic<jclass>
    g_org_chromium_components_payments_PaymentRequestUpdateEventListener_clazz(nullptr);
#ifndef org_chromium_components_payments_PaymentRequestUpdateEventListener_clazz_defined
#define org_chromium_components_payments_PaymentRequestUpdateEventListener_clazz_defined
inline jclass org_chromium_components_payments_PaymentRequestUpdateEventListener_clazz(JNIEnv* env)
    {
  return base::android::LazyGetClass(env,
      kClassPath_org_chromium_components_payments_PaymentRequestUpdateEventListener,
      &g_org_chromium_components_payments_PaymentRequestUpdateEventListener_clazz);
}
#endif


// Step 2: Constants (optional).


// Step 3: Method stubs.
namespace payments {
namespace android {


static std::atomic<jmethodID>
    g_org_chromium_components_payments_PaymentRequestUpdateEventListener_changePaymentMethodFromInvokedApp(nullptr);
static jboolean Java_PaymentRequestUpdateEventListener_changePaymentMethodFromInvokedApp(JNIEnv*
    env, const base::android::JavaRef<jobject>& obj, const base::android::JavaRef<jstring>&
    methodName,
    const base::android::JavaRef<jstring>& stringifiedDetails) {
  jclass clazz = org_chromium_components_payments_PaymentRequestUpdateEventListener_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_components_payments_PaymentRequestUpdateEventListener_clazz(env), false);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "changePaymentMethodFromInvokedApp",
          "(Ljava/lang/String;Ljava/lang/String;)Z",
&g_org_chromium_components_payments_PaymentRequestUpdateEventListener_changePaymentMethodFromInvokedApp);

  jboolean ret =
      env->CallBooleanMethod(obj.obj(),
          call_context.base.method_id, methodName.obj(), stringifiedDetails.obj());
  return ret;
}

static std::atomic<jmethodID>
    g_org_chromium_components_payments_PaymentRequestUpdateEventListener_changeShippingOptionFromInvokedApp(nullptr);
static jboolean Java_PaymentRequestUpdateEventListener_changeShippingOptionFromInvokedApp(JNIEnv*
    env, const base::android::JavaRef<jobject>& obj, const base::android::JavaRef<jstring>&
    shippingOptionId) {
  jclass clazz = org_chromium_components_payments_PaymentRequestUpdateEventListener_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_components_payments_PaymentRequestUpdateEventListener_clazz(env), false);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "changeShippingOptionFromInvokedApp",
          "(Ljava/lang/String;)Z",
&g_org_chromium_components_payments_PaymentRequestUpdateEventListener_changeShippingOptionFromInvokedApp);

  jboolean ret =
      env->CallBooleanMethod(obj.obj(),
          call_context.base.method_id, shippingOptionId.obj());
  return ret;
}

static std::atomic<jmethodID>
    g_org_chromium_components_payments_PaymentRequestUpdateEventListener_changeShippingAddress(nullptr);
static jboolean Java_PaymentRequestUpdateEventListener_changeShippingAddress(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, const base::android::JavaRef<jobject>& shippingAddress) {
  jclass clazz = org_chromium_components_payments_PaymentRequestUpdateEventListener_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_components_payments_PaymentRequestUpdateEventListener_clazz(env), false);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "changeShippingAddress",
          "(Ljava/nio/ByteBuffer;)Z",
&g_org_chromium_components_payments_PaymentRequestUpdateEventListener_changeShippingAddress);

  jboolean ret =
      env->CallBooleanMethod(obj.obj(),
          call_context.base.method_id, shippingAddress.obj());
  return ret;
}

}  // namespace android
}  // namespace payments

#endif  // org_chromium_components_payments_PaymentRequestUpdateEventListener_JNI
