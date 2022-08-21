// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/content/browser/androidoverlay/DialogOverlayImpl

#ifndef org_chromium_content_browser_androidoverlay_DialogOverlayImpl_JNI
#define org_chromium_content_browser_androidoverlay_DialogOverlayImpl_JNI

#include <jni.h>

#include "../../../../../../../base/android/jni_generator/jni_generator_helper.h"


// Step 1: Forward declarations.

JNI_REGISTRATION_EXPORT extern const char
    kClassPath_org_chromium_content_browser_androidoverlay_DialogOverlayImpl[];
const char kClassPath_org_chromium_content_browser_androidoverlay_DialogOverlayImpl[] =
    "org/chromium/content/browser/androidoverlay/DialogOverlayImpl";
// Leaking this jclass as we cannot use LazyInstance from some threads.
JNI_REGISTRATION_EXPORT std::atomic<jclass>
    g_org_chromium_content_browser_androidoverlay_DialogOverlayImpl_clazz(nullptr);
#ifndef org_chromium_content_browser_androidoverlay_DialogOverlayImpl_clazz_defined
#define org_chromium_content_browser_androidoverlay_DialogOverlayImpl_clazz_defined
inline jclass org_chromium_content_browser_androidoverlay_DialogOverlayImpl_clazz(JNIEnv* env) {
  return base::android::LazyGetClass(env,
      kClassPath_org_chromium_content_browser_androidoverlay_DialogOverlayImpl,
      &g_org_chromium_content_browser_androidoverlay_DialogOverlayImpl_clazz);
}
#endif


// Step 2: Constants (optional).


// Step 3: Method stubs.
namespace content {

static jlong JNI_DialogOverlayImpl_Init(JNIEnv* env, const base::android::JavaParamRef<jobject>&
    caller,
    jlong high,
    jlong low,
    jboolean isPowerEfficient);

JNI_GENERATOR_EXPORT jlong Java_J_N_MqPi0d6D(
    JNIEnv* env,
    jclass jcaller,
    jobject caller,
    jlong high,
    jlong low,
    jboolean isPowerEfficient) {
  return JNI_DialogOverlayImpl_Init(env, base::android::JavaParamRef<jobject>(env, caller), high,
      low, isPowerEfficient);
}

JNI_GENERATOR_EXPORT void Java_J_N_MQAm7B7f(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeDialogOverlayImpl,
    jobject caller) {
  DialogOverlayImpl* native = reinterpret_cast<DialogOverlayImpl*>(nativeDialogOverlayImpl);
  CHECK_NATIVE_PTR(env, jcaller, native, "CompleteInit");
  return native->CompleteInit(env, base::android::JavaParamRef<jobject>(env, caller));
}

JNI_GENERATOR_EXPORT void Java_J_N_MJj9v_1ba(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeDialogOverlayImpl,
    jobject caller) {
  DialogOverlayImpl* native = reinterpret_cast<DialogOverlayImpl*>(nativeDialogOverlayImpl);
  CHECK_NATIVE_PTR(env, jcaller, native, "Destroy");
  return native->Destroy(env, base::android::JavaParamRef<jobject>(env, caller));
}

JNI_GENERATOR_EXPORT void Java_J_N_MAd6qeVr(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeDialogOverlayImpl,
    jobject caller,
    jobject rect) {
  DialogOverlayImpl* native = reinterpret_cast<DialogOverlayImpl*>(nativeDialogOverlayImpl);
  CHECK_NATIVE_PTR(env, jcaller, native, "GetCompositorOffset");
  return native->GetCompositorOffset(env, base::android::JavaParamRef<jobject>(env, caller),
      base::android::JavaParamRef<jobject>(env, rect));
}

static jint JNI_DialogOverlayImpl_RegisterSurface(JNIEnv* env, const
    base::android::JavaParamRef<jobject>& surface);

JNI_GENERATOR_EXPORT jint Java_J_N_MpcpmTlm(
    JNIEnv* env,
    jclass jcaller,
    jobject surface) {
  return JNI_DialogOverlayImpl_RegisterSurface(env, base::android::JavaParamRef<jobject>(env,
      surface));
}

static void JNI_DialogOverlayImpl_UnregisterSurface(JNIEnv* env, jint surfaceId);

JNI_GENERATOR_EXPORT void Java_J_N_M1e4GdYZ(
    JNIEnv* env,
    jclass jcaller,
    jint surfaceId) {
  return JNI_DialogOverlayImpl_UnregisterSurface(env, surfaceId);
}

static base::android::ScopedJavaLocalRef<jobject>
    JNI_DialogOverlayImpl_LookupSurfaceForTesting(JNIEnv* env, jint surfaceId);

JNI_GENERATOR_EXPORT jobject Java_J_N_MzUgOpRk_1ForTesting(
    JNIEnv* env,
    jclass jcaller,
    jint surfaceId) {
  return JNI_DialogOverlayImpl_LookupSurfaceForTesting(env, surfaceId).Release();
}

static void JNI_DialogOverlayImpl_NotifyDestroyedSynchronously(JNIEnv* env, jlong
    messagePipeHandle);

JNI_GENERATOR_EXPORT void Java_J_N_MFq0hOYg(
    JNIEnv* env,
    jclass jcaller,
    jlong messagePipeHandle) {
  return JNI_DialogOverlayImpl_NotifyDestroyedSynchronously(env, messagePipeHandle);
}


static std::atomic<jmethodID>
    g_org_chromium_content_browser_androidoverlay_DialogOverlayImpl_receiveCompositorOffset(nullptr);
static void Java_DialogOverlayImpl_receiveCompositorOffset(JNIEnv* env, const
    base::android::JavaRef<jobject>& rect,
    JniIntWrapper x,
    JniIntWrapper y) {
  jclass clazz = org_chromium_content_browser_androidoverlay_DialogOverlayImpl_clazz(env);
  CHECK_CLAZZ(env, clazz,
      org_chromium_content_browser_androidoverlay_DialogOverlayImpl_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_STATIC>(
          env,
          clazz,
          "receiveCompositorOffset",
          "(Lorg/chromium/gfx/mojom/Rect;II)V",
          &g_org_chromium_content_browser_androidoverlay_DialogOverlayImpl_receiveCompositorOffset);

     env->CallStaticVoidMethod(clazz,
          call_context.base.method_id, rect.obj(), as_jint(x), as_jint(y));
}

static std::atomic<jmethodID>
    g_org_chromium_content_browser_androidoverlay_DialogOverlayImpl_onWindowAndroid(nullptr);
static void Java_DialogOverlayImpl_onWindowAndroid(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, const base::android::JavaRef<jobject>& window) {
  jclass clazz = org_chromium_content_browser_androidoverlay_DialogOverlayImpl_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_content_browser_androidoverlay_DialogOverlayImpl_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "onWindowAndroid",
          "(Lorg/chromium/ui/base/WindowAndroid;)V",
          &g_org_chromium_content_browser_androidoverlay_DialogOverlayImpl_onWindowAndroid);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id, window.obj());
}

static std::atomic<jmethodID>
    g_org_chromium_content_browser_androidoverlay_DialogOverlayImpl_observeContainerView(nullptr);
static void Java_DialogOverlayImpl_observeContainerView(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, const base::android::JavaRef<jobject>& containerView) {
  jclass clazz = org_chromium_content_browser_androidoverlay_DialogOverlayImpl_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_content_browser_androidoverlay_DialogOverlayImpl_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "observeContainerView",
          "(Landroid/view/View;)V",
          &g_org_chromium_content_browser_androidoverlay_DialogOverlayImpl_observeContainerView);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id, containerView.obj());
}

static std::atomic<jmethodID>
    g_org_chromium_content_browser_androidoverlay_DialogOverlayImpl_onDismissed(nullptr);
static void Java_DialogOverlayImpl_onDismissed(JNIEnv* env, const base::android::JavaRef<jobject>&
    obj) {
  jclass clazz = org_chromium_content_browser_androidoverlay_DialogOverlayImpl_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_content_browser_androidoverlay_DialogOverlayImpl_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "onDismissed",
          "()V",
          &g_org_chromium_content_browser_androidoverlay_DialogOverlayImpl_onDismissed);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id);
}

static std::atomic<jmethodID>
    g_org_chromium_content_browser_androidoverlay_DialogOverlayImpl_onPowerEfficientState(nullptr);
static void Java_DialogOverlayImpl_onPowerEfficientState(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, jboolean isPowerEfficient) {
  jclass clazz = org_chromium_content_browser_androidoverlay_DialogOverlayImpl_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_content_browser_androidoverlay_DialogOverlayImpl_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "onPowerEfficientState",
          "(Z)V",
          &g_org_chromium_content_browser_androidoverlay_DialogOverlayImpl_onPowerEfficientState);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id, isPowerEfficient);
}

}  // namespace content

#endif  // org_chromium_content_browser_androidoverlay_DialogOverlayImpl_JNI
