// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/chrome/browser/autofill/VirtualCardEnrollmentDelegate

#ifndef org_chromium_chrome_browser_autofill_VirtualCardEnrollmentDelegate_JNI
#define org_chromium_chrome_browser_autofill_VirtualCardEnrollmentDelegate_JNI

#include <jni.h>

#include "../../../../../../base/android/jni_generator/jni_generator_helper.h"


// Step 1: Forward declarations.

JNI_REGISTRATION_EXPORT extern const char
    kClassPath_org_chromium_chrome_browser_autofill_VirtualCardEnrollmentDelegate[];
const char kClassPath_org_chromium_chrome_browser_autofill_VirtualCardEnrollmentDelegate[] =
    "org/chromium/chrome/browser/autofill/VirtualCardEnrollmentDelegate";
// Leaking this jclass as we cannot use LazyInstance from some threads.
JNI_REGISTRATION_EXPORT std::atomic<jclass>
    g_org_chromium_chrome_browser_autofill_VirtualCardEnrollmentDelegate_clazz(nullptr);
#ifndef org_chromium_chrome_browser_autofill_VirtualCardEnrollmentDelegate_clazz_defined
#define org_chromium_chrome_browser_autofill_VirtualCardEnrollmentDelegate_clazz_defined
inline jclass org_chromium_chrome_browser_autofill_VirtualCardEnrollmentDelegate_clazz(JNIEnv* env)
    {
  return base::android::LazyGetClass(env,
      kClassPath_org_chromium_chrome_browser_autofill_VirtualCardEnrollmentDelegate,
      &g_org_chromium_chrome_browser_autofill_VirtualCardEnrollmentDelegate_clazz);
}
#endif


// Step 2: Constants (optional).


// Step 3: Method stubs.
namespace autofill {

JNI_GENERATOR_EXPORT void Java_J_N_MPydP90q(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeVirtualCardEnrollBubbleControllerImpl) {
  VirtualCardEnrollBubbleControllerImpl* native =
      reinterpret_cast<VirtualCardEnrollBubbleControllerImpl*>(nativeVirtualCardEnrollBubbleControllerImpl);
  CHECK_NATIVE_PTR(env, jcaller, native, "OnAccepted");
  return native->OnAccepted(env);
}

JNI_GENERATOR_EXPORT void Java_J_N_MBzRm4sq(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeVirtualCardEnrollBubbleControllerImpl) {
  VirtualCardEnrollBubbleControllerImpl* native =
      reinterpret_cast<VirtualCardEnrollBubbleControllerImpl*>(nativeVirtualCardEnrollBubbleControllerImpl);
  CHECK_NATIVE_PTR(env, jcaller, native, "OnDeclined");
  return native->OnDeclined(env);
}

JNI_GENERATOR_EXPORT void Java_J_N_MbA3iL6k(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeVirtualCardEnrollBubbleControllerImpl) {
  VirtualCardEnrollBubbleControllerImpl* native =
      reinterpret_cast<VirtualCardEnrollBubbleControllerImpl*>(nativeVirtualCardEnrollBubbleControllerImpl);
  CHECK_NATIVE_PTR(env, jcaller, native, "OnDismissed");
  return native->OnDismissed(env);
}

JNI_GENERATOR_EXPORT void Java_J_N_MDUWoeID(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeVirtualCardEnrollBubbleControllerImpl,
    jstring url,
    jint virtualCardEnrollmentLinkType) {
  VirtualCardEnrollBubbleControllerImpl* native =
      reinterpret_cast<VirtualCardEnrollBubbleControllerImpl*>(nativeVirtualCardEnrollBubbleControllerImpl);
  CHECK_NATIVE_PTR(env, jcaller, native, "OnLinkClicked");
  return native->OnLinkClicked(env, base::android::JavaParamRef<jstring>(env, url),
      virtualCardEnrollmentLinkType);
}


static std::atomic<jmethodID>
    g_org_chromium_chrome_browser_autofill_VirtualCardEnrollmentDelegate_create(nullptr);
static base::android::ScopedJavaLocalRef<jobject> Java_VirtualCardEnrollmentDelegate_create(JNIEnv*
    env, jlong nativeVirtualCardEnrollBubbleControllerImpl) {
  jclass clazz = org_chromium_chrome_browser_autofill_VirtualCardEnrollmentDelegate_clazz(env);
  CHECK_CLAZZ(env, clazz,
      org_chromium_chrome_browser_autofill_VirtualCardEnrollmentDelegate_clazz(env), NULL);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_STATIC>(
          env,
          clazz,
          "create",
          "(J)Lorg/chromium/chrome/browser/autofill/VirtualCardEnrollmentDelegate;",
          &g_org_chromium_chrome_browser_autofill_VirtualCardEnrollmentDelegate_create);

  jobject ret =
      env->CallStaticObjectMethod(clazz,
          call_context.base.method_id, nativeVirtualCardEnrollBubbleControllerImpl);
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

static std::atomic<jmethodID>
    g_org_chromium_chrome_browser_autofill_VirtualCardEnrollmentDelegate_onNativeDestroyed(nullptr);
static void Java_VirtualCardEnrollmentDelegate_onNativeDestroyed(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  jclass clazz = org_chromium_chrome_browser_autofill_VirtualCardEnrollmentDelegate_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_chrome_browser_autofill_VirtualCardEnrollmentDelegate_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "onNativeDestroyed",
          "()V",
          &g_org_chromium_chrome_browser_autofill_VirtualCardEnrollmentDelegate_onNativeDestroyed);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id);
}

}  // namespace autofill

#endif  // org_chromium_chrome_browser_autofill_VirtualCardEnrollmentDelegate_JNI
