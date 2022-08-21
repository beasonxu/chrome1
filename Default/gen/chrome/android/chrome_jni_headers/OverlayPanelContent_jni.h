// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/chrome/browser/compositor/bottombar/OverlayPanelContent

#ifndef org_chromium_chrome_browser_compositor_bottombar_OverlayPanelContent_JNI
#define org_chromium_chrome_browser_compositor_bottombar_OverlayPanelContent_JNI

#include <jni.h>

#include "../../../../../../base/android/jni_generator/jni_generator_helper.h"


// Step 1: Forward declarations.

JNI_REGISTRATION_EXPORT extern const char
    kClassPath_org_chromium_chrome_browser_compositor_bottombar_OverlayPanelContent[];
const char kClassPath_org_chromium_chrome_browser_compositor_bottombar_OverlayPanelContent[] =
    "org/chromium/chrome/browser/compositor/bottombar/OverlayPanelContent";
// Leaking this jclass as we cannot use LazyInstance from some threads.
JNI_REGISTRATION_EXPORT std::atomic<jclass>
    g_org_chromium_chrome_browser_compositor_bottombar_OverlayPanelContent_clazz(nullptr);
#ifndef org_chromium_chrome_browser_compositor_bottombar_OverlayPanelContent_clazz_defined
#define org_chromium_chrome_browser_compositor_bottombar_OverlayPanelContent_clazz_defined
inline jclass org_chromium_chrome_browser_compositor_bottombar_OverlayPanelContent_clazz(JNIEnv*
    env) {
  return base::android::LazyGetClass(env,
      kClassPath_org_chromium_chrome_browser_compositor_bottombar_OverlayPanelContent,
      &g_org_chromium_chrome_browser_compositor_bottombar_OverlayPanelContent_clazz);
}
#endif


// Step 2: Constants (optional).


// Step 3: Method stubs.
static jlong JNI_OverlayPanelContent_Init(JNIEnv* env, const base::android::JavaParamRef<jobject>&
    caller);

JNI_GENERATOR_EXPORT jlong Java_J_N_MIJaVtKT(
    JNIEnv* env,
    jclass jcaller,
    jobject caller) {
  return JNI_OverlayPanelContent_Init(env, base::android::JavaParamRef<jobject>(env, caller));
}

JNI_GENERATOR_EXPORT void Java_J_N_MUq5ITc4(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeOverlayPanelContent,
    jobject caller) {
  OverlayPanelContent* native = reinterpret_cast<OverlayPanelContent*>(nativeOverlayPanelContent);
  CHECK_NATIVE_PTR(env, jcaller, native, "Destroy");
  return native->Destroy(env, base::android::JavaParamRef<jobject>(env, caller));
}

JNI_GENERATOR_EXPORT void Java_J_N_Me5Orzs5(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeOverlayPanelContent,
    jobject caller,
    jstring historyUrl,
    jlong urlTimeMs) {
  OverlayPanelContent* native = reinterpret_cast<OverlayPanelContent*>(nativeOverlayPanelContent);
  CHECK_NATIVE_PTR(env, jcaller, native, "RemoveLastHistoryEntry");
  return native->RemoveLastHistoryEntry(env, base::android::JavaParamRef<jobject>(env, caller),
      base::android::JavaParamRef<jstring>(env, historyUrl), urlTimeMs);
}

JNI_GENERATOR_EXPORT void Java_J_N_M7MukokD(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeOverlayPanelContent,
    jobject caller,
    jobject webContents,
    jint width,
    jint height) {
  OverlayPanelContent* native = reinterpret_cast<OverlayPanelContent*>(nativeOverlayPanelContent);
  CHECK_NATIVE_PTR(env, jcaller, native, "OnPhysicalBackingSizeChanged");
  return native->OnPhysicalBackingSizeChanged(env, base::android::JavaParamRef<jobject>(env,
      caller), base::android::JavaParamRef<jobject>(env, webContents), width, height);
}

JNI_GENERATOR_EXPORT void Java_J_N_MzHfGFwX(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeOverlayPanelContent,
    jobject caller,
    jobject webContents,
    jobject delegate) {
  OverlayPanelContent* native = reinterpret_cast<OverlayPanelContent*>(nativeOverlayPanelContent);
  CHECK_NATIVE_PTR(env, jcaller, native, "SetWebContents");
  return native->SetWebContents(env, base::android::JavaParamRef<jobject>(env, caller),
      base::android::JavaParamRef<jobject>(env, webContents),
      base::android::JavaParamRef<jobject>(env, delegate));
}

JNI_GENERATOR_EXPORT void Java_J_N_Mgx0E3X8(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeOverlayPanelContent,
    jobject caller) {
  OverlayPanelContent* native = reinterpret_cast<OverlayPanelContent*>(nativeOverlayPanelContent);
  CHECK_NATIVE_PTR(env, jcaller, native, "DestroyWebContents");
  return native->DestroyWebContents(env, base::android::JavaParamRef<jobject>(env, caller));
}

JNI_GENERATOR_EXPORT void Java_J_N_MhbyyKle(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeOverlayPanelContent,
    jobject caller,
    jobject delegate,
    jobject webContents) {
  OverlayPanelContent* native = reinterpret_cast<OverlayPanelContent*>(nativeOverlayPanelContent);
  CHECK_NATIVE_PTR(env, jcaller, native, "SetInterceptNavigationDelegate");
  return native->SetInterceptNavigationDelegate(env, base::android::JavaParamRef<jobject>(env,
      caller), base::android::JavaParamRef<jobject>(env, delegate),
      base::android::JavaParamRef<jobject>(env, webContents));
}

JNI_GENERATOR_EXPORT void Java_J_N_Msf6mgl3(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeOverlayPanelContent,
    jobject caller,
    jboolean areControlsHidden) {
  OverlayPanelContent* native = reinterpret_cast<OverlayPanelContent*>(nativeOverlayPanelContent);
  CHECK_NATIVE_PTR(env, jcaller, native, "UpdateBrowserControlsState");
  return native->UpdateBrowserControlsState(env, base::android::JavaParamRef<jobject>(env, caller),
      areControlsHidden);
}


static std::atomic<jmethodID>
    g_org_chromium_chrome_browser_compositor_bottombar_OverlayPanelContent_clearNativePanelContentPtr(nullptr);
static void Java_OverlayPanelContent_clearNativePanelContentPtr(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  jclass clazz = org_chromium_chrome_browser_compositor_bottombar_OverlayPanelContent_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_chrome_browser_compositor_bottombar_OverlayPanelContent_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "clearNativePanelContentPtr",
          "()V",
&g_org_chromium_chrome_browser_compositor_bottombar_OverlayPanelContent_clearNativePanelContentPtr);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id);
}

#endif  // org_chromium_chrome_browser_compositor_bottombar_OverlayPanelContent_JNI
