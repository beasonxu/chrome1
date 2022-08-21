// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/chrome/browser/download/DangerousDownloadDialogBridge

#ifndef org_chromium_chrome_browser_download_DangerousDownloadDialogBridge_JNI
#define org_chromium_chrome_browser_download_DangerousDownloadDialogBridge_JNI

#include <jni.h>

#include "../../../../../../../../base/android/jni_generator/jni_generator_helper.h"


// Step 1: Forward declarations.

JNI_REGISTRATION_EXPORT extern const char
    kClassPath_org_chromium_chrome_browser_download_DangerousDownloadDialogBridge[];
const char kClassPath_org_chromium_chrome_browser_download_DangerousDownloadDialogBridge[] =
    "org/chromium/chrome/browser/download/DangerousDownloadDialogBridge";
// Leaking this jclass as we cannot use LazyInstance from some threads.
JNI_REGISTRATION_EXPORT std::atomic<jclass>
    g_org_chromium_chrome_browser_download_DangerousDownloadDialogBridge_clazz(nullptr);
#ifndef org_chromium_chrome_browser_download_DangerousDownloadDialogBridge_clazz_defined
#define org_chromium_chrome_browser_download_DangerousDownloadDialogBridge_clazz_defined
inline jclass org_chromium_chrome_browser_download_DangerousDownloadDialogBridge_clazz(JNIEnv* env)
    {
  return base::android::LazyGetClass(env,
      kClassPath_org_chromium_chrome_browser_download_DangerousDownloadDialogBridge,
      &g_org_chromium_chrome_browser_download_DangerousDownloadDialogBridge_clazz);
}
#endif


// Step 2: Constants (optional).


// Step 3: Method stubs.
JNI_GENERATOR_EXPORT void Java_J_N_MlxOExzQ(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeDangerousDownloadDialogBridge,
    jstring guid) {
  DangerousDownloadDialogBridge* native =
      reinterpret_cast<DangerousDownloadDialogBridge*>(nativeDangerousDownloadDialogBridge);
  CHECK_NATIVE_PTR(env, jcaller, native, "Accepted");
  return native->Accepted(env, base::android::JavaParamRef<jstring>(env, guid));
}

JNI_GENERATOR_EXPORT void Java_J_N_MQlyjW3H(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeDangerousDownloadDialogBridge,
    jstring guid) {
  DangerousDownloadDialogBridge* native =
      reinterpret_cast<DangerousDownloadDialogBridge*>(nativeDangerousDownloadDialogBridge);
  CHECK_NATIVE_PTR(env, jcaller, native, "Cancelled");
  return native->Cancelled(env, base::android::JavaParamRef<jstring>(env, guid));
}


static std::atomic<jmethodID>
    g_org_chromium_chrome_browser_download_DangerousDownloadDialogBridge_create(nullptr);
static base::android::ScopedJavaLocalRef<jobject> Java_DangerousDownloadDialogBridge_create(JNIEnv*
    env, jlong nativeDialog) {
  jclass clazz = org_chromium_chrome_browser_download_DangerousDownloadDialogBridge_clazz(env);
  CHECK_CLAZZ(env, clazz,
      org_chromium_chrome_browser_download_DangerousDownloadDialogBridge_clazz(env), NULL);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_STATIC>(
          env,
          clazz,
          "create",
          "(J)Lorg/chromium/chrome/browser/download/DangerousDownloadDialogBridge;",
          &g_org_chromium_chrome_browser_download_DangerousDownloadDialogBridge_create);

  jobject ret =
      env->CallStaticObjectMethod(clazz,
          call_context.base.method_id, nativeDialog);
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

static std::atomic<jmethodID>
    g_org_chromium_chrome_browser_download_DangerousDownloadDialogBridge_showDialog(nullptr);
static void Java_DangerousDownloadDialogBridge_showDialog(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, const base::android::JavaRef<jobject>& windowAndroid,
    const base::android::JavaRef<jstring>& guid,
    const base::android::JavaRef<jstring>& fileName,
    jlong totalBytes,
    JniIntWrapper iconId) {
  jclass clazz = org_chromium_chrome_browser_download_DangerousDownloadDialogBridge_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_chrome_browser_download_DangerousDownloadDialogBridge_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "showDialog",
          "(Lorg/chromium/ui/base/WindowAndroid;Ljava/lang/String;Ljava/lang/String;JI)V",
          &g_org_chromium_chrome_browser_download_DangerousDownloadDialogBridge_showDialog);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id, windowAndroid.obj(), guid.obj(), fileName.obj(), totalBytes,
              as_jint(iconId));
}

static std::atomic<jmethodID>
    g_org_chromium_chrome_browser_download_DangerousDownloadDialogBridge_destroy(nullptr);
static void Java_DangerousDownloadDialogBridge_destroy(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  jclass clazz = org_chromium_chrome_browser_download_DangerousDownloadDialogBridge_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_chrome_browser_download_DangerousDownloadDialogBridge_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "destroy",
          "()V",
          &g_org_chromium_chrome_browser_download_DangerousDownloadDialogBridge_destroy);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id);
}

#endif  // org_chromium_chrome_browser_download_DangerousDownloadDialogBridge_JNI
