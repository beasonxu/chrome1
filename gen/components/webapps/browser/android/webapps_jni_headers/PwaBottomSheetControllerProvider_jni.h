// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/components/webapps/bottomsheet/PwaBottomSheetControllerProvider

#ifndef org_chromium_components_webapps_bottomsheet_PwaBottomSheetControllerProvider_JNI
#define org_chromium_components_webapps_bottomsheet_PwaBottomSheetControllerProvider_JNI

#include <jni.h>

#include "../../../../../../../../base/android/jni_generator/jni_generator_helper.h"


// Step 1: Forward declarations.

JNI_REGISTRATION_EXPORT extern const char
    kClassPath_org_chromium_components_webapps_bottomsheet_PwaBottomSheetControllerProvider[];
const char kClassPath_org_chromium_components_webapps_bottomsheet_PwaBottomSheetControllerProvider[]
    = "org/chromium/components/webapps/bottomsheet/PwaBottomSheetControllerProvider";
// Leaking this jclass as we cannot use LazyInstance from some threads.
JNI_REGISTRATION_EXPORT std::atomic<jclass>
    g_org_chromium_components_webapps_bottomsheet_PwaBottomSheetControllerProvider_clazz(nullptr);
#ifndef org_chromium_components_webapps_bottomsheet_PwaBottomSheetControllerProvider_clazz_defined
#define org_chromium_components_webapps_bottomsheet_PwaBottomSheetControllerProvider_clazz_defined
inline jclass
    org_chromium_components_webapps_bottomsheet_PwaBottomSheetControllerProvider_clazz(JNIEnv* env)
    {
  return base::android::LazyGetClass(env,
      kClassPath_org_chromium_components_webapps_bottomsheet_PwaBottomSheetControllerProvider,
      &g_org_chromium_components_webapps_bottomsheet_PwaBottomSheetControllerProvider_clazz);
}
#endif


// Step 2: Constants (optional).


// Step 3: Method stubs.

static std::atomic<jmethodID>
    g_org_chromium_components_webapps_bottomsheet_PwaBottomSheetControllerProvider_canShowPwaBottomSheetInstaller(nullptr);
static jboolean Java_PwaBottomSheetControllerProvider_canShowPwaBottomSheetInstaller(JNIEnv* env,
    const base::android::JavaRef<jobject>& webContents) {
  jclass clazz =
      org_chromium_components_webapps_bottomsheet_PwaBottomSheetControllerProvider_clazz(env);
  CHECK_CLAZZ(env, clazz,
      org_chromium_components_webapps_bottomsheet_PwaBottomSheetControllerProvider_clazz(env),
          false);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_STATIC>(
          env,
          clazz,
          "canShowPwaBottomSheetInstaller",
          "(Lorg/chromium/content_public/browser/WebContents;)Z",
&g_org_chromium_components_webapps_bottomsheet_PwaBottomSheetControllerProvider_canShowPwaBottomSheetInstaller);

  jboolean ret =
      env->CallStaticBooleanMethod(clazz,
          call_context.base.method_id, webContents.obj());
  return ret;
}

static std::atomic<jmethodID>
    g_org_chromium_components_webapps_bottomsheet_PwaBottomSheetControllerProvider_showPwaBottomSheetInstaller(nullptr);
static void Java_PwaBottomSheetControllerProvider_showPwaBottomSheetInstaller(JNIEnv* env, jlong
    nativePwaBottomSheetController,
    const base::android::JavaRef<jobject>& webContents,
    const base::android::JavaRef<jobject>& icon,
    jboolean isAdaptiveIcon,
    const base::android::JavaRef<jstring>& title,
    const base::android::JavaRef<jstring>& origin,
    const base::android::JavaRef<jstring>& description) {
  jclass clazz =
      org_chromium_components_webapps_bottomsheet_PwaBottomSheetControllerProvider_clazz(env);
  CHECK_CLAZZ(env, clazz,
      org_chromium_components_webapps_bottomsheet_PwaBottomSheetControllerProvider_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_STATIC>(
          env,
          clazz,
          "showPwaBottomSheetInstaller",
"(JLorg/chromium/content_public/browser/WebContents;Landroid/graphics/Bitmap;ZLjava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
&g_org_chromium_components_webapps_bottomsheet_PwaBottomSheetControllerProvider_showPwaBottomSheetInstaller);

     env->CallStaticVoidMethod(clazz,
          call_context.base.method_id, nativePwaBottomSheetController, webContents.obj(),
              icon.obj(), isAdaptiveIcon, title.obj(), origin.obj(), description.obj());
}

static std::atomic<jmethodID>
    g_org_chromium_components_webapps_bottomsheet_PwaBottomSheetControllerProvider_expandPwaBottomSheetInstaller(nullptr);
static void Java_PwaBottomSheetControllerProvider_expandPwaBottomSheetInstaller(JNIEnv* env, const
    base::android::JavaRef<jobject>& webContents) {
  jclass clazz =
      org_chromium_components_webapps_bottomsheet_PwaBottomSheetControllerProvider_clazz(env);
  CHECK_CLAZZ(env, clazz,
      org_chromium_components_webapps_bottomsheet_PwaBottomSheetControllerProvider_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_STATIC>(
          env,
          clazz,
          "expandPwaBottomSheetInstaller",
          "(Lorg/chromium/content_public/browser/WebContents;)V",
&g_org_chromium_components_webapps_bottomsheet_PwaBottomSheetControllerProvider_expandPwaBottomSheetInstaller);

     env->CallStaticVoidMethod(clazz,
          call_context.base.method_id, webContents.obj());
}

static std::atomic<jmethodID>
    g_org_chromium_components_webapps_bottomsheet_PwaBottomSheetControllerProvider_doesBottomSheetExist(nullptr);
static jboolean Java_PwaBottomSheetControllerProvider_doesBottomSheetExist(JNIEnv* env, const
    base::android::JavaRef<jobject>& webContents) {
  jclass clazz =
      org_chromium_components_webapps_bottomsheet_PwaBottomSheetControllerProvider_clazz(env);
  CHECK_CLAZZ(env, clazz,
      org_chromium_components_webapps_bottomsheet_PwaBottomSheetControllerProvider_clazz(env),
          false);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_STATIC>(
          env,
          clazz,
          "doesBottomSheetExist",
          "(Lorg/chromium/content_public/browser/WebContents;)Z",
&g_org_chromium_components_webapps_bottomsheet_PwaBottomSheetControllerProvider_doesBottomSheetExist);

  jboolean ret =
      env->CallStaticBooleanMethod(clazz,
          call_context.base.method_id, webContents.obj());
  return ret;
}

static std::atomic<jmethodID>
    g_org_chromium_components_webapps_bottomsheet_PwaBottomSheetControllerProvider_updateState(nullptr);
static void Java_PwaBottomSheetControllerProvider_updateState(JNIEnv* env, const
    base::android::JavaRef<jobject>& webContents,
    JniIntWrapper installSource,
    jboolean expandSheet) {
  jclass clazz =
      org_chromium_components_webapps_bottomsheet_PwaBottomSheetControllerProvider_clazz(env);
  CHECK_CLAZZ(env, clazz,
      org_chromium_components_webapps_bottomsheet_PwaBottomSheetControllerProvider_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_STATIC>(
          env,
          clazz,
          "updateState",
          "(Lorg/chromium/content_public/browser/WebContents;IZ)V",
&g_org_chromium_components_webapps_bottomsheet_PwaBottomSheetControllerProvider_updateState);

     env->CallStaticVoidMethod(clazz,
          call_context.base.method_id, webContents.obj(), as_jint(installSource), expandSheet);
}

#endif  // org_chromium_components_webapps_bottomsheet_PwaBottomSheetControllerProvider_JNI
