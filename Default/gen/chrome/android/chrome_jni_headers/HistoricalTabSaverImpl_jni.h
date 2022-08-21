// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/chrome/browser/tab/tab_restore/HistoricalTabSaverImpl

#ifndef org_chromium_chrome_browser_tab_tab_restore_HistoricalTabSaverImpl_JNI
#define org_chromium_chrome_browser_tab_tab_restore_HistoricalTabSaverImpl_JNI

#include <jni.h>

#include "../../../../../../base/android/jni_generator/jni_generator_helper.h"


// Step 1: Forward declarations.

JNI_REGISTRATION_EXPORT extern const char
    kClassPath_org_chromium_chrome_browser_tab_tab_1restore_HistoricalTabSaverImpl[];
const char kClassPath_org_chromium_chrome_browser_tab_tab_1restore_HistoricalTabSaverImpl[] =
    "org/chromium/chrome/browser/tab/tab_restore/HistoricalTabSaverImpl";
// Leaking this jclass as we cannot use LazyInstance from some threads.
JNI_REGISTRATION_EXPORT std::atomic<jclass>
    g_org_chromium_chrome_browser_tab_tab_1restore_HistoricalTabSaverImpl_clazz(nullptr);
#ifndef org_chromium_chrome_browser_tab_tab_1restore_HistoricalTabSaverImpl_clazz_defined
#define org_chromium_chrome_browser_tab_tab_1restore_HistoricalTabSaverImpl_clazz_defined
inline jclass org_chromium_chrome_browser_tab_tab_1restore_HistoricalTabSaverImpl_clazz(JNIEnv* env)
    {
  return base::android::LazyGetClass(env,
      kClassPath_org_chromium_chrome_browser_tab_tab_1restore_HistoricalTabSaverImpl,
      &g_org_chromium_chrome_browser_tab_tab_1restore_HistoricalTabSaverImpl_clazz);
}
#endif


// Step 2: Constants (optional).


// Step 3: Method stubs.
namespace historical_tab_saver {

static void JNI_HistoricalTabSaverImpl_CreateHistoricalTab(JNIEnv* env, const
    base::android::JavaParamRef<jobject>& tab);

JNI_GENERATOR_EXPORT void Java_J_N_MusxVN12(
    JNIEnv* env,
    jclass jcaller,
    jobject tab) {
  return JNI_HistoricalTabSaverImpl_CreateHistoricalTab(env,
      base::android::JavaParamRef<jobject>(env, tab));
}

static void JNI_HistoricalTabSaverImpl_CreateHistoricalGroup(JNIEnv* env, const
    base::android::JavaParamRef<jobject>& model,
    const base::android::JavaParamRef<jstring>& title,
    const base::android::JavaParamRef<jobjectArray>& tabs);

JNI_GENERATOR_EXPORT void Java_J_N_MTL0tV25(
    JNIEnv* env,
    jclass jcaller,
    jobject model,
    jstring title,
    jobjectArray tabs) {
  return JNI_HistoricalTabSaverImpl_CreateHistoricalGroup(env,
      base::android::JavaParamRef<jobject>(env, model), base::android::JavaParamRef<jstring>(env,
      title), base::android::JavaParamRef<jobjectArray>(env, tabs));
}

static void JNI_HistoricalTabSaverImpl_CreateHistoricalBulkClosure(JNIEnv* env, const
    base::android::JavaParamRef<jobject>& model,
    const base::android::JavaParamRef<jintArray>& groupIds,
    const base::android::JavaParamRef<jobjectArray>& titles,
    const base::android::JavaParamRef<jintArray>& perTabGroupId,
    const base::android::JavaParamRef<jobjectArray>& tabs);

JNI_GENERATOR_EXPORT void Java_J_N_MeHKJ1cw(
    JNIEnv* env,
    jclass jcaller,
    jobject model,
    jintArray groupIds,
    jobjectArray titles,
    jintArray perTabGroupId,
    jobjectArray tabs) {
  return JNI_HistoricalTabSaverImpl_CreateHistoricalBulkClosure(env,
      base::android::JavaParamRef<jobject>(env, model), base::android::JavaParamRef<jintArray>(env,
      groupIds), base::android::JavaParamRef<jobjectArray>(env, titles),
      base::android::JavaParamRef<jintArray>(env, perTabGroupId),
      base::android::JavaParamRef<jobjectArray>(env, tabs));
}


static std::atomic<jmethodID>
    g_org_chromium_chrome_browser_tab_tab_1restore_HistoricalTabSaverImpl_createTemporaryWebContents(nullptr);
static base::android::ScopedJavaLocalRef<jobject>
    Java_HistoricalTabSaverImpl_createTemporaryWebContents(JNIEnv* env, const
    base::android::JavaRef<jobject>& tab) {
  jclass clazz = org_chromium_chrome_browser_tab_tab_1restore_HistoricalTabSaverImpl_clazz(env);
  CHECK_CLAZZ(env, clazz,
      org_chromium_chrome_browser_tab_tab_1restore_HistoricalTabSaverImpl_clazz(env), NULL);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_STATIC>(
          env,
          clazz,
          "createTemporaryWebContents",
"(Lorg/chromium/chrome/browser/tab/Tab;)Lorg/chromium/content_public/browser/WebContents;",
&g_org_chromium_chrome_browser_tab_tab_1restore_HistoricalTabSaverImpl_createTemporaryWebContents);

  jobject ret =
      env->CallStaticObjectMethod(clazz,
          call_context.base.method_id, tab.obj());
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

static std::atomic<jmethodID>
    g_org_chromium_chrome_browser_tab_tab_1restore_HistoricalTabSaverImpl_destroyTemporaryWebContents(nullptr);
static void Java_HistoricalTabSaverImpl_destroyTemporaryWebContents(JNIEnv* env, const
    base::android::JavaRef<jobject>& webContents) {
  jclass clazz = org_chromium_chrome_browser_tab_tab_1restore_HistoricalTabSaverImpl_clazz(env);
  CHECK_CLAZZ(env, clazz,
      org_chromium_chrome_browser_tab_tab_1restore_HistoricalTabSaverImpl_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_STATIC>(
          env,
          clazz,
          "destroyTemporaryWebContents",
          "(Lorg/chromium/content_public/browser/WebContents;)V",
&g_org_chromium_chrome_browser_tab_tab_1restore_HistoricalTabSaverImpl_destroyTemporaryWebContents);

     env->CallStaticVoidMethod(clazz,
          call_context.base.method_id, webContents.obj());
}

}  // namespace historical_tab_saver

#endif  // org_chromium_chrome_browser_tab_tab_restore_HistoricalTabSaverImpl_JNI
