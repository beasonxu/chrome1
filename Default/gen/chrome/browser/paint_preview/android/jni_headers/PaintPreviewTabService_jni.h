// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/chrome/browser/paint_preview/services/PaintPreviewTabService

#ifndef org_chromium_chrome_browser_paint_preview_services_PaintPreviewTabService_JNI
#define org_chromium_chrome_browser_paint_preview_services_PaintPreviewTabService_JNI

#include <jni.h>

#include "../../../../../../../../base/android/jni_generator/jni_generator_helper.h"


// Step 1: Forward declarations.

JNI_REGISTRATION_EXPORT extern const char
    kClassPath_org_chromium_chrome_browser_paint_1preview_services_PaintPreviewTabService[];
const char kClassPath_org_chromium_chrome_browser_paint_1preview_services_PaintPreviewTabService[] =
    "org/chromium/chrome/browser/paint_preview/services/PaintPreviewTabService";
// Leaking this jclass as we cannot use LazyInstance from some threads.
JNI_REGISTRATION_EXPORT std::atomic<jclass>
    g_org_chromium_chrome_browser_paint_1preview_services_PaintPreviewTabService_clazz(nullptr);
#ifndef org_chromium_chrome_browser_paint_1preview_services_PaintPreviewTabService_clazz_defined
#define org_chromium_chrome_browser_paint_1preview_services_PaintPreviewTabService_clazz_defined
inline jclass
    org_chromium_chrome_browser_paint_1preview_services_PaintPreviewTabService_clazz(JNIEnv* env) {
  return base::android::LazyGetClass(env,
      kClassPath_org_chromium_chrome_browser_paint_1preview_services_PaintPreviewTabService,
      &g_org_chromium_chrome_browser_paint_1preview_services_PaintPreviewTabService_clazz);
}
#endif


// Step 2: Constants (optional).


// Step 3: Method stubs.
namespace paint_preview {

JNI_GENERATOR_EXPORT void Java_J_N_MV_00024XyJvN(
    JNIEnv* env,
    jclass jcaller,
    jlong nativePaintPreviewTabService,
    jint tabId,
    jobject webContents,
    jboolean accessibilityEnabled,
    jfloat pageScaleFactor,
    jint scrollOffsetX,
    jint scrollOffsetY,
    jobject successCallback) {
  PaintPreviewTabService* native =
      reinterpret_cast<PaintPreviewTabService*>(nativePaintPreviewTabService);
  CHECK_NATIVE_PTR(env, jcaller, native, "CaptureTabAndroid");
  return native->CaptureTabAndroid(env, tabId, base::android::JavaParamRef<jobject>(env,
      webContents), accessibilityEnabled, pageScaleFactor, scrollOffsetX, scrollOffsetY,
      base::android::JavaParamRef<jobject>(env, successCallback));
}

JNI_GENERATOR_EXPORT void Java_J_N_MO7GqHLu(
    JNIEnv* env,
    jclass jcaller,
    jlong nativePaintPreviewTabService,
    jint tabId) {
  PaintPreviewTabService* native =
      reinterpret_cast<PaintPreviewTabService*>(nativePaintPreviewTabService);
  CHECK_NATIVE_PTR(env, jcaller, native, "TabClosedAndroid");
  return native->TabClosedAndroid(env, tabId);
}

JNI_GENERATOR_EXPORT jboolean Java_J_N_MYa8QxsY(
    JNIEnv* env,
    jclass jcaller,
    jlong nativePaintPreviewTabService,
    jint tabId) {
  PaintPreviewTabService* native =
      reinterpret_cast<PaintPreviewTabService*>(nativePaintPreviewTabService);
  CHECK_NATIVE_PTR(env, jcaller, native, "HasCaptureForTabAndroid", false);
  return native->HasCaptureForTabAndroid(env, tabId);
}

JNI_GENERATOR_EXPORT void Java_J_N_MTE3rHmH(
    JNIEnv* env,
    jclass jcaller,
    jlong nativePaintPreviewTabService,
    jintArray activeTabIds) {
  PaintPreviewTabService* native =
      reinterpret_cast<PaintPreviewTabService*>(nativePaintPreviewTabService);
  CHECK_NATIVE_PTR(env, jcaller, native, "AuditArtifactsAndroid");
  return native->AuditArtifactsAndroid(env, base::android::JavaParamRef<jintArray>(env,
      activeTabIds));
}

JNI_GENERATOR_EXPORT jboolean Java_J_N_MWP3QaBv(
    JNIEnv* env,
    jclass jcaller,
    jlong nativePaintPreviewTabService) {
  PaintPreviewTabService* native =
      reinterpret_cast<PaintPreviewTabService*>(nativePaintPreviewTabService);
  CHECK_NATIVE_PTR(env, jcaller, native, "IsCacheInitializedAndroid", false);
  return native->IsCacheInitializedAndroid(env);
}

JNI_GENERATOR_EXPORT jstring Java_J_N_MPozT7P0(
    JNIEnv* env,
    jclass jcaller,
    jlong nativePaintPreviewTabService) {
  PaintPreviewTabService* native =
      reinterpret_cast<PaintPreviewTabService*>(nativePaintPreviewTabService);
  CHECK_NATIVE_PTR(env, jcaller, native, "GetPathAndroid", NULL);
  return native->GetPathAndroid(env).Release();
}


static std::atomic<jmethodID>
    g_org_chromium_chrome_browser_paint_1preview_services_PaintPreviewTabService_Constructor(nullptr);
static base::android::ScopedJavaLocalRef<jobject> Java_PaintPreviewTabService_Constructor(JNIEnv*
    env, jlong nativePaintPreviewTabService,
    jlong nativePaintPreviewBaseService) {
  jclass clazz =
      org_chromium_chrome_browser_paint_1preview_services_PaintPreviewTabService_clazz(env);
  CHECK_CLAZZ(env, clazz,
      org_chromium_chrome_browser_paint_1preview_services_PaintPreviewTabService_clazz(env), NULL);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "<init>",
          "(JJ)V",
&g_org_chromium_chrome_browser_paint_1preview_services_PaintPreviewTabService_Constructor);

  jobject ret =
      env->NewObject(clazz,
          call_context.base.method_id, nativePaintPreviewTabService, nativePaintPreviewBaseService);
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

static std::atomic<jmethodID>
    g_org_chromium_chrome_browser_paint_1preview_services_PaintPreviewTabService_onNativeDestroyed(nullptr);
static void Java_PaintPreviewTabService_onNativeDestroyed(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  jclass clazz =
      org_chromium_chrome_browser_paint_1preview_services_PaintPreviewTabService_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_chrome_browser_paint_1preview_services_PaintPreviewTabService_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "onNativeDestroyed",
          "()V",
&g_org_chromium_chrome_browser_paint_1preview_services_PaintPreviewTabService_onNativeDestroyed);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id);
}

}  // namespace paint_preview

#endif  // org_chromium_chrome_browser_paint_preview_services_PaintPreviewTabService_JNI
