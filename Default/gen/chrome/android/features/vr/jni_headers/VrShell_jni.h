// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/chrome/browser/vr/VrShell

#ifndef org_chromium_chrome_browser_vr_VrShell_JNI
#define org_chromium_chrome_browser_vr_VrShell_JNI

#include <jni.h>

#include "../../../../../../../../base/android/jni_generator/jni_generator_helper.h"


// Step 1: Forward declarations.

JNI_REGISTRATION_EXPORT extern const char kClassPath_org_chromium_chrome_browser_vr_VrShell[];
const char kClassPath_org_chromium_chrome_browser_vr_VrShell[] =
    "org/chromium/chrome/browser/vr/VrShell";
// Leaking this jclass as we cannot use LazyInstance from some threads.
JNI_REGISTRATION_EXPORT std::atomic<jclass> g_org_chromium_chrome_browser_vr_VrShell_clazz(nullptr);
#ifndef org_chromium_chrome_browser_vr_VrShell_clazz_defined
#define org_chromium_chrome_browser_vr_VrShell_clazz_defined
inline jclass org_chromium_chrome_browser_vr_VrShell_clazz(JNIEnv* env) {
  return base::android::LazyGetClass(env, kClassPath_org_chromium_chrome_browser_vr_VrShell, "vr",
      &g_org_chromium_chrome_browser_vr_VrShell_clazz);
}
#endif


// Step 2: Constants (optional).


// Step 3: Method stubs.
namespace vr {

static jlong JNI_VrShell_Init(JNIEnv* env, const base::android::JavaParamRef<jobject>& caller,
    const base::android::JavaParamRef<jobject>& delegate,
    jboolean forWebVR,
    jboolean browsingDisabled,
    jboolean hasOrCanRequestRecordAudioPermission,
    jlong gvrApi,
    jboolean reprojectedRendering,
    jfloat displayWidthMeters,
    jfloat displayHeightMeters,
    jint displayWidthPixels,
    jint displayHeightPixels,
    jboolean pauseContent,
    jboolean lowDensity,
    jboolean isStandaloneVrDevice);

JNI_GENERATOR_EXPORT jlong Java_J_N_MKRQ_00024loE(
    JNIEnv* env,
    jclass jcaller,
    jobject caller,
    jobject delegate,
    jboolean forWebVR,
    jboolean browsingDisabled,
    jboolean hasOrCanRequestRecordAudioPermission,
    jlong gvrApi,
    jboolean reprojectedRendering,
    jfloat displayWidthMeters,
    jfloat displayHeightMeters,
    jint displayWidthPixels,
    jint displayHeightPixels,
    jboolean pauseContent,
    jboolean lowDensity,
    jboolean isStandaloneVrDevice) {
  return JNI_VrShell_Init(env, base::android::JavaParamRef<jobject>(env, caller),
      base::android::JavaParamRef<jobject>(env, delegate), forWebVR, browsingDisabled,
      hasOrCanRequestRecordAudioPermission, gvrApi, reprojectedRendering, displayWidthMeters,
      displayHeightMeters, displayWidthPixels, displayHeightPixels, pauseContent, lowDensity,
      isStandaloneVrDevice);
}

JNI_GENERATOR_EXPORT jboolean Java_J_N_MV_00024qqU_1t(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeVrShell,
    jobject caller) {
  VrShell* native = reinterpret_cast<VrShell*>(nativeVrShell);
  CHECK_NATIVE_PTR(env, jcaller, native, "HasUiFinishedLoading", false);
  return native->HasUiFinishedLoading(env, base::android::JavaParamRef<jobject>(env, caller));
}

JNI_GENERATOR_EXPORT void Java_J_N_MtYUo17r(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeVrShell,
    jobject caller,
    jobject surface) {
  VrShell* native = reinterpret_cast<VrShell*>(nativeVrShell);
  CHECK_NATIVE_PTR(env, jcaller, native, "SetSurface");
  return native->SetSurface(env, base::android::JavaParamRef<jobject>(env, caller),
      base::android::JavaParamRef<jobject>(env, surface));
}

JNI_GENERATOR_EXPORT void Java_J_N_Mt_00024XV3Tu(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeVrShell,
    jobject caller,
    jobject tab) {
  VrShell* native = reinterpret_cast<VrShell*>(nativeVrShell);
  CHECK_NATIVE_PTR(env, jcaller, native, "SwapContents");
  return native->SwapContents(env, base::android::JavaParamRef<jobject>(env, caller),
      base::android::JavaParamRef<jobject>(env, tab));
}

JNI_GENERATOR_EXPORT void Java_J_N_MuRNYnAv(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeVrShell,
    jobject caller,
    jobject androidUiGestureTarget) {
  VrShell* native = reinterpret_cast<VrShell*>(nativeVrShell);
  CHECK_NATIVE_PTR(env, jcaller, native, "SetAndroidGestureTarget");
  return native->SetAndroidGestureTarget(env, base::android::JavaParamRef<jobject>(env, caller),
      base::android::JavaParamRef<jobject>(env, androidUiGestureTarget));
}

JNI_GENERATOR_EXPORT void Java_J_N_M_000247KPysW(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeVrShell,
    jobject caller,
    jobject dialogGestureTarget) {
  VrShell* native = reinterpret_cast<VrShell*>(nativeVrShell);
  CHECK_NATIVE_PTR(env, jcaller, native, "SetDialogGestureTarget");
  return native->SetDialogGestureTarget(env, base::android::JavaParamRef<jobject>(env, caller),
      base::android::JavaParamRef<jobject>(env, dialogGestureTarget));
}

JNI_GENERATOR_EXPORT void Java_J_N_MdhFBNv9(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeVrShell,
    jobject caller) {
  VrShell* native = reinterpret_cast<VrShell*>(nativeVrShell);
  CHECK_NATIVE_PTR(env, jcaller, native, "Destroy");
  return native->Destroy(env, base::android::JavaParamRef<jobject>(env, caller));
}

JNI_GENERATOR_EXPORT void Java_J_N_Mx9gLrf_00024(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeVrShell,
    jobject caller,
    jboolean touched) {
  VrShell* native = reinterpret_cast<VrShell*>(nativeVrShell);
  CHECK_NATIVE_PTR(env, jcaller, native, "OnTriggerEvent");
  return native->OnTriggerEvent(env, base::android::JavaParamRef<jobject>(env, caller), touched);
}

JNI_GENERATOR_EXPORT void Java_J_N_M23xBBeG(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeVrShell,
    jobject caller) {
  VrShell* native = reinterpret_cast<VrShell*>(nativeVrShell);
  CHECK_NATIVE_PTR(env, jcaller, native, "OnPause");
  return native->OnPause(env, base::android::JavaParamRef<jobject>(env, caller));
}

JNI_GENERATOR_EXPORT void Java_J_N_M8DYidpe(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeVrShell,
    jobject caller) {
  VrShell* native = reinterpret_cast<VrShell*>(nativeVrShell);
  CHECK_NATIVE_PTR(env, jcaller, native, "OnResume");
  return native->OnResume(env, base::android::JavaParamRef<jobject>(env, caller));
}

JNI_GENERATOR_EXPORT void Java_J_N_M1COYGAS(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeVrShell,
    jobject caller,
    jdouble progress) {
  VrShell* native = reinterpret_cast<VrShell*>(nativeVrShell);
  CHECK_NATIVE_PTR(env, jcaller, native, "OnLoadProgressChanged");
  return native->OnLoadProgressChanged(env, base::android::JavaParamRef<jobject>(env, caller),
      progress);
}

JNI_GENERATOR_EXPORT void Java_J_N_MRgUIjz7(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeVrShell,
    jobject caller,
    jint contentWidth,
    jint contentHeight,
    jint overlayWidth,
    jint overlayHeight) {
  VrShell* native = reinterpret_cast<VrShell*>(nativeVrShell);
  CHECK_NATIVE_PTR(env, jcaller, native, "BufferBoundsChanged");
  return native->BufferBoundsChanged(env, base::android::JavaParamRef<jobject>(env, caller),
      contentWidth, contentHeight, overlayWidth, overlayHeight);
}

JNI_GENERATOR_EXPORT void Java_J_N_M4qYdSMc(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeVrShell,
    jobject caller,
    jboolean enabled) {
  VrShell* native = reinterpret_cast<VrShell*>(nativeVrShell);
  CHECK_NATIVE_PTR(env, jcaller, native, "SetWebVrMode");
  return native->SetWebVrMode(env, base::android::JavaParamRef<jobject>(env, caller), enabled);
}

JNI_GENERATOR_EXPORT jboolean Java_J_N_M_00024X22ueI(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeVrShell,
    jobject caller) {
  VrShell* native = reinterpret_cast<VrShell*>(nativeVrShell);
  CHECK_NATIVE_PTR(env, jcaller, native, "GetWebVrMode", false);
  return native->GetWebVrMode(env, base::android::JavaParamRef<jobject>(env, caller));
}

JNI_GENERATOR_EXPORT jboolean Java_J_N_M9qTh_12e_1ForTesting(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeVrShell,
    jobject caller) {
  VrShell* native = reinterpret_cast<VrShell*>(nativeVrShell);
  CHECK_NATIVE_PTR(env, jcaller, native, "IsDisplayingUrlForTesting", false);
  return native->IsDisplayingUrlForTesting(env, base::android::JavaParamRef<jobject>(env, caller));
}

JNI_GENERATOR_EXPORT void Java_J_N_MtZ_10X8f(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeVrShell,
    jobject caller,
    jobjectArray mainTabs,
    jobjectArray incognitoTabs) {
  VrShell* native = reinterpret_cast<VrShell*>(nativeVrShell);
  CHECK_NATIVE_PTR(env, jcaller, native, "OnTabListCreated");
  return native->OnTabListCreated(env, base::android::JavaParamRef<jobject>(env, caller),
      base::android::JavaParamRef<jobjectArray>(env, mainTabs),
      base::android::JavaParamRef<jobjectArray>(env, incognitoTabs));
}

JNI_GENERATOR_EXPORT void Java_J_N_MT175_1UO(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeVrShell,
    jobject caller,
    jboolean incognito,
    jint id,
    jstring title) {
  VrShell* native = reinterpret_cast<VrShell*>(nativeVrShell);
  CHECK_NATIVE_PTR(env, jcaller, native, "OnTabUpdated");
  return native->OnTabUpdated(env, base::android::JavaParamRef<jobject>(env, caller), incognito, id,
      base::android::JavaParamRef<jstring>(env, title));
}

JNI_GENERATOR_EXPORT void Java_J_N_M3mI95le(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeVrShell,
    jobject caller,
    jboolean incognito,
    jint id) {
  VrShell* native = reinterpret_cast<VrShell*>(nativeVrShell);
  CHECK_NATIVE_PTR(env, jcaller, native, "OnTabRemoved");
  return native->OnTabRemoved(env, base::android::JavaParamRef<jobject>(env, caller), incognito,
      id);
}

JNI_GENERATOR_EXPORT void Java_J_N_MN_1BMvRJ(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeVrShell,
    jobject caller) {
  VrShell* native = reinterpret_cast<VrShell*>(nativeVrShell);
  CHECK_NATIVE_PTR(env, jcaller, native, "CloseAlertDialog");
  return native->CloseAlertDialog(env, base::android::JavaParamRef<jobject>(env, caller));
}

JNI_GENERATOR_EXPORT void Java_J_N_M4jRizzc(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeVrShell,
    jobject caller,
    jfloat width,
    jfloat height) {
  VrShell* native = reinterpret_cast<VrShell*>(nativeVrShell);
  CHECK_NATIVE_PTR(env, jcaller, native, "SetAlertDialog");
  return native->SetAlertDialog(env, base::android::JavaParamRef<jobject>(env, caller), width,
      height);
}

JNI_GENERATOR_EXPORT void Java_J_N_MBxhpfBq(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeVrShell,
    jobject caller,
    jint width,
    jint height) {
  VrShell* native = reinterpret_cast<VrShell*>(nativeVrShell);
  CHECK_NATIVE_PTR(env, jcaller, native, "SetDialogBufferSize");
  return native->SetDialogBufferSize(env, base::android::JavaParamRef<jobject>(env, caller), width,
      height);
}

JNI_GENERATOR_EXPORT void Java_J_N_M8SZtGP4(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeVrShell,
    jobject caller,
    jfloat width,
    jfloat height) {
  VrShell* native = reinterpret_cast<VrShell*>(nativeVrShell);
  CHECK_NATIVE_PTR(env, jcaller, native, "SetAlertDialogSize");
  return native->SetAlertDialogSize(env, base::android::JavaParamRef<jobject>(env, caller), width,
      height);
}

JNI_GENERATOR_EXPORT void Java_J_N_Mf7LrKcp(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeVrShell,
    jobject caller,
    jfloat x,
    jfloat y) {
  VrShell* native = reinterpret_cast<VrShell*>(nativeVrShell);
  CHECK_NATIVE_PTR(env, jcaller, native, "SetDialogLocation");
  return native->SetDialogLocation(env, base::android::JavaParamRef<jobject>(env, caller), x, y);
}

JNI_GENERATOR_EXPORT void Java_J_N_MC_00024C6Gne(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeVrShell,
    jobject caller,
    jboolean floating) {
  VrShell* native = reinterpret_cast<VrShell*>(nativeVrShell);
  CHECK_NATIVE_PTR(env, jcaller, native, "SetDialogFloating");
  return native->SetDialogFloating(env, base::android::JavaParamRef<jobject>(env, caller),
      floating);
}

JNI_GENERATOR_EXPORT void Java_J_N_MzlSkL_1b(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeVrShell,
    jobject caller,
    jstring text) {
  VrShell* native = reinterpret_cast<VrShell*>(nativeVrShell);
  CHECK_NATIVE_PTR(env, jcaller, native, "ShowToast");
  return native->ShowToast(env, base::android::JavaParamRef<jobject>(env, caller),
      base::android::JavaParamRef<jstring>(env, text));
}

JNI_GENERATOR_EXPORT void Java_J_N_MfyEiF1q(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeVrShell,
    jobject caller) {
  VrShell* native = reinterpret_cast<VrShell*>(nativeVrShell);
  CHECK_NATIVE_PTR(env, jcaller, native, "CancelToast");
  return native->CancelToast(env, base::android::JavaParamRef<jobject>(env, caller));
}

JNI_GENERATOR_EXPORT void Java_J_N_MBzmMfnQ(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeVrShell,
    jobject caller,
    jboolean canGoBack,
    jboolean canGoForward) {
  VrShell* native = reinterpret_cast<VrShell*>(nativeVrShell);
  CHECK_NATIVE_PTR(env, jcaller, native, "SetHistoryButtonsEnabled");
  return native->SetHistoryButtonsEnabled(env, base::android::JavaParamRef<jobject>(env, caller),
      canGoBack, canGoForward);
}

JNI_GENERATOR_EXPORT void Java_J_N_M9a3AJig(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeVrShell,
    jobject caller,
    jint reason) {
  VrShell* native = reinterpret_cast<VrShell*>(nativeVrShell);
  CHECK_NATIVE_PTR(env, jcaller, native, "RequestToExitVr");
  return native->RequestToExitVr(env, base::android::JavaParamRef<jobject>(env, caller), reason);
}

JNI_GENERATOR_EXPORT void Java_J_N_MYCeEYIp(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeVrShell,
    jobject caller,
    jboolean show) {
  VrShell* native = reinterpret_cast<VrShell*>(nativeVrShell);
  CHECK_NATIVE_PTR(env, jcaller, native, "ShowSoftInput");
  return native->ShowSoftInput(env, base::android::JavaParamRef<jobject>(env, caller), show);
}

JNI_GENERATOR_EXPORT void Java_J_N_MP893CNH(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeVrShell,
    jobject caller,
    jint selectionStart,
    jint selectionEnd,
    jint compositionStart,
    jint compositionEnd) {
  VrShell* native = reinterpret_cast<VrShell*>(nativeVrShell);
  CHECK_NATIVE_PTR(env, jcaller, native, "UpdateWebInputIndices");
  return native->UpdateWebInputIndices(env, base::android::JavaParamRef<jobject>(env, caller),
      selectionStart, selectionEnd, compositionStart, compositionEnd);
}

JNI_GENERATOR_EXPORT jobject Java_J_N_Mg4u7EPv_1ForTesting(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeVrShell,
    jobject caller) {
  VrShell* native = reinterpret_cast<VrShell*>(nativeVrShell);
  CHECK_NATIVE_PTR(env, jcaller, native, "GetVrInputConnectionForTesting", NULL);
  return native->GetVrInputConnectionForTesting(env, base::android::JavaParamRef<jobject>(env,
      caller)).Release();
}

JNI_GENERATOR_EXPORT void Java_J_N_MDZwr8o4_1ForTesting(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeVrShell,
    jobject caller) {
  VrShell* native = reinterpret_cast<VrShell*>(nativeVrShell);
  CHECK_NATIVE_PTR(env, jcaller, native, "AcceptDoffPromptForTesting");
  return native->AcceptDoffPromptForTesting(env, base::android::JavaParamRef<jobject>(env, caller));
}

JNI_GENERATOR_EXPORT void Java_J_N_MCERNNrq_1ForTesting(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeVrShell,
    jobject caller,
    jint elementName,
    jint actionType,
    jfloat x,
    jfloat y) {
  VrShell* native = reinterpret_cast<VrShell*>(nativeVrShell);
  CHECK_NATIVE_PTR(env, jcaller, native, "PerformControllerActionForTesting");
  return native->PerformControllerActionForTesting(env, base::android::JavaParamRef<jobject>(env,
      caller), elementName, actionType, x, y);
}

JNI_GENERATOR_EXPORT void Java_J_N_MCHOzL7B_1ForTesting(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeVrShell,
    jobject caller,
    jint inputType,
    jstring inputString) {
  VrShell* native = reinterpret_cast<VrShell*>(nativeVrShell);
  CHECK_NATIVE_PTR(env, jcaller, native, "PerformKeyboardInputForTesting");
  return native->PerformKeyboardInputForTesting(env, base::android::JavaParamRef<jobject>(env,
      caller), inputType, base::android::JavaParamRef<jstring>(env, inputString));
}

JNI_GENERATOR_EXPORT void Java_J_N_M9rElSdC_1ForTesting(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeVrShell,
    jobject caller,
    jint quiescenceTimeoutMs) {
  VrShell* native = reinterpret_cast<VrShell*>(nativeVrShell);
  CHECK_NATIVE_PTR(env, jcaller, native, "SetUiExpectingActivityForTesting");
  return native->SetUiExpectingActivityForTesting(env, base::android::JavaParamRef<jobject>(env,
      caller), quiescenceTimeoutMs);
}

JNI_GENERATOR_EXPORT void Java_J_N_MK6NIHTq_1ForTesting(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeVrShell,
    jobject caller,
    jstring filepathBase) {
  VrShell* native = reinterpret_cast<VrShell*>(nativeVrShell);
  CHECK_NATIVE_PTR(env, jcaller, native, "SaveNextFrameBufferToDiskForTesting");
  return native->SaveNextFrameBufferToDiskForTesting(env, base::android::JavaParamRef<jobject>(env,
      caller), base::android::JavaParamRef<jstring>(env, filepathBase));
}

JNI_GENERATOR_EXPORT void Java_J_N_MrYdajLQ_1ForTesting(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeVrShell,
    jobject caller,
    jint elementName,
    jint timeoutMs,
    jboolean visibility) {
  VrShell* native = reinterpret_cast<VrShell*>(nativeVrShell);
  CHECK_NATIVE_PTR(env, jcaller, native, "WatchElementForVisibilityStatusForTesting");
  return native->WatchElementForVisibilityStatusForTesting(env,
      base::android::JavaParamRef<jobject>(env, caller), elementName, timeoutMs, visibility);
}

JNI_GENERATOR_EXPORT void Java_J_N_MPaO1wu2(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeVrShell,
    jobject caller) {
  VrShell* native = reinterpret_cast<VrShell*>(nativeVrShell);
  CHECK_NATIVE_PTR(env, jcaller, native, "ResumeContentRendering");
  return native->ResumeContentRendering(env, base::android::JavaParamRef<jobject>(env, caller));
}

JNI_GENERATOR_EXPORT void Java_J_N_M64karSd(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeVrShell,
    jobject caller,
    jboolean empty) {
  VrShell* native = reinterpret_cast<VrShell*>(nativeVrShell);
  CHECK_NATIVE_PTR(env, jcaller, native, "OnOverlayTextureEmptyChanged");
  return native->OnOverlayTextureEmptyChanged(env, base::android::JavaParamRef<jobject>(env,
      caller), empty);
}

JNI_GENERATOR_EXPORT void Java_J_N_MfjYy43V(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeVrShell,
    jobject caller,
    jboolean canRecordAudio) {
  VrShell* native = reinterpret_cast<VrShell*>(nativeVrShell);
  CHECK_NATIVE_PTR(env, jcaller, native, "RequestRecordAudioPermissionResult");
  return native->RequestRecordAudioPermissionResult(env, base::android::JavaParamRef<jobject>(env,
      caller), canRecordAudio);
}


static std::atomic<jmethodID>
    g_org_chromium_chrome_browser_vr_VrShell_hasRecordAudioPermission(nullptr);
static jboolean Java_VrShell_hasRecordAudioPermission(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  jclass clazz = org_chromium_chrome_browser_vr_VrShell_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_chrome_browser_vr_VrShell_clazz(env), false);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "hasRecordAudioPermission",
          "()Z",
          &g_org_chromium_chrome_browser_vr_VrShell_hasRecordAudioPermission);

  jboolean ret =
      env->CallBooleanMethod(obj.obj(),
          call_context.base.method_id);
  return ret;
}

static std::atomic<jmethodID>
    g_org_chromium_chrome_browser_vr_VrShell_canRequestRecordAudioPermission(nullptr);
static jboolean Java_VrShell_canRequestRecordAudioPermission(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  jclass clazz = org_chromium_chrome_browser_vr_VrShell_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_chrome_browser_vr_VrShell_clazz(env), false);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "canRequestRecordAudioPermission",
          "()Z",
          &g_org_chromium_chrome_browser_vr_VrShell_canRequestRecordAudioPermission);

  jboolean ret =
      env->CallBooleanMethod(obj.obj(),
          call_context.base.method_id);
  return ret;
}

static std::atomic<jmethodID> g_org_chromium_chrome_browser_vr_VrShell_forceExitVr(nullptr);
static void Java_VrShell_forceExitVr(JNIEnv* env, const base::android::JavaRef<jobject>& obj) {
  jclass clazz = org_chromium_chrome_browser_vr_VrShell_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_chrome_browser_vr_VrShell_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "forceExitVr",
          "()V",
          &g_org_chromium_chrome_browser_vr_VrShell_forceExitVr);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id);
}

static std::atomic<jmethodID> g_org_chromium_chrome_browser_vr_VrShell_showPageInfo(nullptr);
static void Java_VrShell_showPageInfo(JNIEnv* env, const base::android::JavaRef<jobject>& obj) {
  jclass clazz = org_chromium_chrome_browser_vr_VrShell_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_chrome_browser_vr_VrShell_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "showPageInfo",
          "()V",
          &g_org_chromium_chrome_browser_vr_VrShell_showPageInfo);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id);
}

static std::atomic<jmethodID>
    g_org_chromium_chrome_browser_vr_VrShell_onUnhandledPermissionPrompt(nullptr);
static void Java_VrShell_onUnhandledPermissionPrompt(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  jclass clazz = org_chromium_chrome_browser_vr_VrShell_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_chrome_browser_vr_VrShell_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "onUnhandledPermissionPrompt",
          "()V",
          &g_org_chromium_chrome_browser_vr_VrShell_onUnhandledPermissionPrompt);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id);
}

static std::atomic<jmethodID>
    g_org_chromium_chrome_browser_vr_VrShell_onNeedsKeyboardUpdate(nullptr);
static void Java_VrShell_onNeedsKeyboardUpdate(JNIEnv* env, const base::android::JavaRef<jobject>&
    obj) {
  jclass clazz = org_chromium_chrome_browser_vr_VrShell_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_chrome_browser_vr_VrShell_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "onNeedsKeyboardUpdate",
          "()V",
          &g_org_chromium_chrome_browser_vr_VrShell_onNeedsKeyboardUpdate);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id);
}

static std::atomic<jmethodID> g_org_chromium_chrome_browser_vr_VrShell_closeCurrentDialog(nullptr);
static void Java_VrShell_closeCurrentDialog(JNIEnv* env, const base::android::JavaRef<jobject>& obj)
    {
  jclass clazz = org_chromium_chrome_browser_vr_VrShell_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_chrome_browser_vr_VrShell_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "closeCurrentDialog",
          "()V",
          &g_org_chromium_chrome_browser_vr_VrShell_closeCurrentDialog);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id);
}

static std::atomic<jmethodID> g_org_chromium_chrome_browser_vr_VrShell_setContentCssSize(nullptr);
static void Java_VrShell_setContentCssSize(JNIEnv* env, const base::android::JavaRef<jobject>& obj,
    jfloat width,
    jfloat height,
    jfloat dpr) {
  jclass clazz = org_chromium_chrome_browser_vr_VrShell_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_chrome_browser_vr_VrShell_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "setContentCssSize",
          "(FFF)V",
          &g_org_chromium_chrome_browser_vr_VrShell_setContentCssSize);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id, width, height, dpr);
}

static std::atomic<jmethodID>
    g_org_chromium_chrome_browser_vr_VrShell_contentSurfaceCreated(nullptr);
static void Java_VrShell_contentSurfaceCreated(JNIEnv* env, const base::android::JavaRef<jobject>&
    obj, const base::android::JavaRef<jobject>& surface) {
  jclass clazz = org_chromium_chrome_browser_vr_VrShell_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_chrome_browser_vr_VrShell_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "contentSurfaceCreated",
          "(Landroid/view/Surface;)V",
          &g_org_chromium_chrome_browser_vr_VrShell_contentSurfaceCreated);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id, surface.obj());
}

static std::atomic<jmethodID>
    g_org_chromium_chrome_browser_vr_VrShell_contentOverlaySurfaceCreated(nullptr);
static void Java_VrShell_contentOverlaySurfaceCreated(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, const base::android::JavaRef<jobject>& surface) {
  jclass clazz = org_chromium_chrome_browser_vr_VrShell_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_chrome_browser_vr_VrShell_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "contentOverlaySurfaceCreated",
          "(Landroid/view/Surface;)V",
          &g_org_chromium_chrome_browser_vr_VrShell_contentOverlaySurfaceCreated);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id, surface.obj());
}

static std::atomic<jmethodID>
    g_org_chromium_chrome_browser_vr_VrShell_dialogSurfaceCreated(nullptr);
static void Java_VrShell_dialogSurfaceCreated(JNIEnv* env, const base::android::JavaRef<jobject>&
    obj, const base::android::JavaRef<jobject>& surface) {
  jclass clazz = org_chromium_chrome_browser_vr_VrShell_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_chrome_browser_vr_VrShell_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "dialogSurfaceCreated",
          "(Landroid/view/Surface;)V",
          &g_org_chromium_chrome_browser_vr_VrShell_dialogSurfaceCreated);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id, surface.obj());
}

static std::atomic<jmethodID> g_org_chromium_chrome_browser_vr_VrShell_hasDaydreamSupport(nullptr);
static jboolean Java_VrShell_hasDaydreamSupport(JNIEnv* env, const base::android::JavaRef<jobject>&
    obj) {
  jclass clazz = org_chromium_chrome_browser_vr_VrShell_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_chrome_browser_vr_VrShell_clazz(env), false);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "hasDaydreamSupport",
          "()Z",
          &g_org_chromium_chrome_browser_vr_VrShell_hasDaydreamSupport);

  jboolean ret =
      env->CallBooleanMethod(obj.obj(),
          call_context.base.method_id);
  return ret;
}

static std::atomic<jmethodID>
    g_org_chromium_chrome_browser_vr_VrShell_onExitVrRequestResult(nullptr);
static void Java_VrShell_onExitVrRequestResult(JNIEnv* env, const base::android::JavaRef<jobject>&
    obj, jboolean shouldExit) {
  jclass clazz = org_chromium_chrome_browser_vr_VrShell_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_chrome_browser_vr_VrShell_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "onExitVrRequestResult",
          "(Z)V",
          &g_org_chromium_chrome_browser_vr_VrShell_onExitVrRequestResult);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id, shouldExit);
}

static std::atomic<jmethodID> g_org_chromium_chrome_browser_vr_VrShell_loadUrl(nullptr);
static void Java_VrShell_loadUrl(JNIEnv* env, const base::android::JavaRef<jobject>& obj, const
    base::android::JavaRef<jstring>& url) {
  jclass clazz = org_chromium_chrome_browser_vr_VrShell_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_chrome_browser_vr_VrShell_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "loadUrl",
          "(Ljava/lang/String;)V",
          &g_org_chromium_chrome_browser_vr_VrShell_loadUrl);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id, url.obj());
}

static std::atomic<jmethodID> g_org_chromium_chrome_browser_vr_VrShell_navigateForward(nullptr);
static void Java_VrShell_navigateForward(JNIEnv* env, const base::android::JavaRef<jobject>& obj) {
  jclass clazz = org_chromium_chrome_browser_vr_VrShell_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_chrome_browser_vr_VrShell_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "navigateForward",
          "()V",
          &g_org_chromium_chrome_browser_vr_VrShell_navigateForward);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id);
}

static std::atomic<jmethodID> g_org_chromium_chrome_browser_vr_VrShell_navigateBack(nullptr);
static void Java_VrShell_navigateBack(JNIEnv* env, const base::android::JavaRef<jobject>& obj) {
  jclass clazz = org_chromium_chrome_browser_vr_VrShell_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_chrome_browser_vr_VrShell_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "navigateBack",
          "()V",
          &g_org_chromium_chrome_browser_vr_VrShell_navigateBack);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id);
}

static std::atomic<jmethodID> g_org_chromium_chrome_browser_vr_VrShell_reloadTab(nullptr);
static void Java_VrShell_reloadTab(JNIEnv* env, const base::android::JavaRef<jobject>& obj) {
  jclass clazz = org_chromium_chrome_browser_vr_VrShell_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_chrome_browser_vr_VrShell_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "reloadTab",
          "()V",
          &g_org_chromium_chrome_browser_vr_VrShell_reloadTab);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id);
}

static std::atomic<jmethodID> g_org_chromium_chrome_browser_vr_VrShell_openNewTab(nullptr);
static void Java_VrShell_openNewTab(JNIEnv* env, const base::android::JavaRef<jobject>& obj,
    jboolean incognito) {
  jclass clazz = org_chromium_chrome_browser_vr_VrShell_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_chrome_browser_vr_VrShell_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "openNewTab",
          "(Z)V",
          &g_org_chromium_chrome_browser_vr_VrShell_openNewTab);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id, incognito);
}

static std::atomic<jmethodID> g_org_chromium_chrome_browser_vr_VrShell_openBookmarks(nullptr);
static void Java_VrShell_openBookmarks(JNIEnv* env, const base::android::JavaRef<jobject>& obj) {
  jclass clazz = org_chromium_chrome_browser_vr_VrShell_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_chrome_browser_vr_VrShell_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "openBookmarks",
          "()V",
          &g_org_chromium_chrome_browser_vr_VrShell_openBookmarks);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id);
}

static std::atomic<jmethodID> g_org_chromium_chrome_browser_vr_VrShell_openRecentTabs(nullptr);
static void Java_VrShell_openRecentTabs(JNIEnv* env, const base::android::JavaRef<jobject>& obj) {
  jclass clazz = org_chromium_chrome_browser_vr_VrShell_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_chrome_browser_vr_VrShell_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "openRecentTabs",
          "()V",
          &g_org_chromium_chrome_browser_vr_VrShell_openRecentTabs);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id);
}

static std::atomic<jmethodID> g_org_chromium_chrome_browser_vr_VrShell_openHistory(nullptr);
static void Java_VrShell_openHistory(JNIEnv* env, const base::android::JavaRef<jobject>& obj) {
  jclass clazz = org_chromium_chrome_browser_vr_VrShell_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_chrome_browser_vr_VrShell_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "openHistory",
          "()V",
          &g_org_chromium_chrome_browser_vr_VrShell_openHistory);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id);
}

static std::atomic<jmethodID> g_org_chromium_chrome_browser_vr_VrShell_openDownloads(nullptr);
static void Java_VrShell_openDownloads(JNIEnv* env, const base::android::JavaRef<jobject>& obj) {
  jclass clazz = org_chromium_chrome_browser_vr_VrShell_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_chrome_browser_vr_VrShell_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "openDownloads",
          "()V",
          &g_org_chromium_chrome_browser_vr_VrShell_openDownloads);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id);
}

static std::atomic<jmethodID> g_org_chromium_chrome_browser_vr_VrShell_openShare(nullptr);
static void Java_VrShell_openShare(JNIEnv* env, const base::android::JavaRef<jobject>& obj) {
  jclass clazz = org_chromium_chrome_browser_vr_VrShell_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_chrome_browser_vr_VrShell_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "openShare",
          "()V",
          &g_org_chromium_chrome_browser_vr_VrShell_openShare);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id);
}

static std::atomic<jmethodID> g_org_chromium_chrome_browser_vr_VrShell_openSettings(nullptr);
static void Java_VrShell_openSettings(JNIEnv* env, const base::android::JavaRef<jobject>& obj) {
  jclass clazz = org_chromium_chrome_browser_vr_VrShell_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_chrome_browser_vr_VrShell_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "openSettings",
          "()V",
          &g_org_chromium_chrome_browser_vr_VrShell_openSettings);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id);
}

static std::atomic<jmethodID>
    g_org_chromium_chrome_browser_vr_VrShell_closeAllIncognitoTabs(nullptr);
static void Java_VrShell_closeAllIncognitoTabs(JNIEnv* env, const base::android::JavaRef<jobject>&
    obj) {
  jclass clazz = org_chromium_chrome_browser_vr_VrShell_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_chrome_browser_vr_VrShell_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "closeAllIncognitoTabs",
          "()V",
          &g_org_chromium_chrome_browser_vr_VrShell_closeAllIncognitoTabs);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id);
}

static std::atomic<jmethodID> g_org_chromium_chrome_browser_vr_VrShell_openFeedback(nullptr);
static void Java_VrShell_openFeedback(JNIEnv* env, const base::android::JavaRef<jobject>& obj) {
  jclass clazz = org_chromium_chrome_browser_vr_VrShell_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_chrome_browser_vr_VrShell_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "openFeedback",
          "()V",
          &g_org_chromium_chrome_browser_vr_VrShell_openFeedback);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id);
}

static std::atomic<jmethodID>
    g_org_chromium_chrome_browser_vr_VrShell_reportUiOperationResultForTesting(nullptr);
static void Java_VrShell_reportUiOperationResultForTesting(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, JniIntWrapper actionType,
    JniIntWrapper result) {
  jclass clazz = org_chromium_chrome_browser_vr_VrShell_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_chrome_browser_vr_VrShell_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "reportUiOperationResultForTesting",
          "(II)V",
          &g_org_chromium_chrome_browser_vr_VrShell_reportUiOperationResultForTesting);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id, as_jint(actionType), as_jint(result));
}

}  // namespace vr

#endif  // org_chromium_chrome_browser_vr_VrShell_JNI
