// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/chrome/browser/suggestions/mostvisited/MostVisitedSitesBridge

#ifndef org_chromium_chrome_browser_suggestions_mostvisited_MostVisitedSitesBridge_JNI
#define org_chromium_chrome_browser_suggestions_mostvisited_MostVisitedSitesBridge_JNI

#include <jni.h>

#include "../../../../../../base/android/jni_generator/jni_generator_helper.h"


// Step 1: Forward declarations.

JNI_REGISTRATION_EXPORT extern const char
    kClassPath_org_chromium_chrome_browser_suggestions_mostvisited_MostVisitedSitesBridge[];
const char kClassPath_org_chromium_chrome_browser_suggestions_mostvisited_MostVisitedSitesBridge[] =
    "org/chromium/chrome/browser/suggestions/mostvisited/MostVisitedSitesBridge";
// Leaking this jclass as we cannot use LazyInstance from some threads.
JNI_REGISTRATION_EXPORT std::atomic<jclass>
    g_org_chromium_chrome_browser_suggestions_mostvisited_MostVisitedSitesBridge_clazz(nullptr);
#ifndef org_chromium_chrome_browser_suggestions_mostvisited_MostVisitedSitesBridge_clazz_defined
#define org_chromium_chrome_browser_suggestions_mostvisited_MostVisitedSitesBridge_clazz_defined
inline jclass
    org_chromium_chrome_browser_suggestions_mostvisited_MostVisitedSitesBridge_clazz(JNIEnv* env) {
  return base::android::LazyGetClass(env,
      kClassPath_org_chromium_chrome_browser_suggestions_mostvisited_MostVisitedSitesBridge,
      &g_org_chromium_chrome_browser_suggestions_mostvisited_MostVisitedSitesBridge_clazz);
}
#endif


// Step 2: Constants (optional).


// Step 3: Method stubs.
static jlong JNI_MostVisitedSitesBridge_Init(JNIEnv* env, const
    base::android::JavaParamRef<jobject>& caller,
    const base::android::JavaParamRef<jobject>& profile);

JNI_GENERATOR_EXPORT jlong Java_J_N_M8pqI3Tk(
    JNIEnv* env,
    jclass jcaller,
    jobject caller,
    jobject profile) {
  return JNI_MostVisitedSitesBridge_Init(env, base::android::JavaParamRef<jobject>(env, caller),
      base::android::JavaParamRef<jobject>(env, profile));
}

JNI_GENERATOR_EXPORT void Java_J_N_MdGxo8sV(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeMostVisitedSitesBridge,
    jobject caller) {
  MostVisitedSitesBridge* native =
      reinterpret_cast<MostVisitedSitesBridge*>(nativeMostVisitedSitesBridge);
  CHECK_NATIVE_PTR(env, jcaller, native, "Destroy");
  return native->Destroy(env, base::android::JavaParamRef<jobject>(env, caller));
}

JNI_GENERATOR_EXPORT void Java_J_N_MtaFCH9Q(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeMostVisitedSitesBridge,
    jobject caller) {
  MostVisitedSitesBridge* native =
      reinterpret_cast<MostVisitedSitesBridge*>(nativeMostVisitedSitesBridge);
  CHECK_NATIVE_PTR(env, jcaller, native, "OnHomepageStateChanged");
  return native->OnHomepageStateChanged(env, base::android::JavaParamRef<jobject>(env, caller));
}

JNI_GENERATOR_EXPORT void Java_J_N_M_00024_00024yjxmq(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeMostVisitedSitesBridge,
    jobject caller,
    jobject homePageClient) {
  MostVisitedSitesBridge* native =
      reinterpret_cast<MostVisitedSitesBridge*>(nativeMostVisitedSitesBridge);
  CHECK_NATIVE_PTR(env, jcaller, native, "SetHomepageClient");
  return native->SetHomepageClient(env, base::android::JavaParamRef<jobject>(env, caller),
      base::android::JavaParamRef<jobject>(env, homePageClient));
}

JNI_GENERATOR_EXPORT void Java_J_N_MsZWK0fV(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeMostVisitedSitesBridge,
    jobject caller,
    jobject observer,
    jint numSites) {
  MostVisitedSitesBridge* native =
      reinterpret_cast<MostVisitedSitesBridge*>(nativeMostVisitedSitesBridge);
  CHECK_NATIVE_PTR(env, jcaller, native, "SetObserver");
  return native->SetObserver(env, base::android::JavaParamRef<jobject>(env, caller),
      base::android::JavaParamRef<jobject>(env, observer), numSites);
}

JNI_GENERATOR_EXPORT void Java_J_N_MQm3a0t7(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeMostVisitedSitesBridge,
    jobject caller,
    jobject url,
    jboolean addUrl) {
  MostVisitedSitesBridge* native =
      reinterpret_cast<MostVisitedSitesBridge*>(nativeMostVisitedSitesBridge);
  CHECK_NATIVE_PTR(env, jcaller, native, "AddOrRemoveBlockedUrl");
  return native->AddOrRemoveBlockedUrl(env, base::android::JavaParamRef<jobject>(env, caller),
      base::android::JavaParamRef<jobject>(env, url), addUrl);
}

JNI_GENERATOR_EXPORT void Java_J_N_MtbOuYlk(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeMostVisitedSitesBridge,
    jobject caller,
    jint tilesCount) {
  MostVisitedSitesBridge* native =
      reinterpret_cast<MostVisitedSitesBridge*>(nativeMostVisitedSitesBridge);
  CHECK_NATIVE_PTR(env, jcaller, native, "RecordPageImpression");
  return native->RecordPageImpression(env, base::android::JavaParamRef<jobject>(env, caller),
      tilesCount);
}

JNI_GENERATOR_EXPORT void Java_J_N_MwKG6a15(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeMostVisitedSitesBridge,
    jobject caller,
    jint index,
    jint type,
    jint iconType,
    jint titleSource,
    jint source,
    jobject url) {
  MostVisitedSitesBridge* native =
      reinterpret_cast<MostVisitedSitesBridge*>(nativeMostVisitedSitesBridge);
  CHECK_NATIVE_PTR(env, jcaller, native, "RecordTileImpression");
  return native->RecordTileImpression(env, base::android::JavaParamRef<jobject>(env, caller), index,
      type, iconType, titleSource, source, base::android::JavaParamRef<jobject>(env, url));
}

JNI_GENERATOR_EXPORT void Java_J_N_M6eoyhxR(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeMostVisitedSitesBridge,
    jobject caller,
    jint index,
    jint tileType,
    jint titleSource,
    jint source) {
  MostVisitedSitesBridge* native =
      reinterpret_cast<MostVisitedSitesBridge*>(nativeMostVisitedSitesBridge);
  CHECK_NATIVE_PTR(env, jcaller, native, "RecordOpenedMostVisitedItem");
  return native->RecordOpenedMostVisitedItem(env, base::android::JavaParamRef<jobject>(env, caller),
      index, tileType, titleSource, source);
}


static std::atomic<jmethodID>
    g_org_chromium_chrome_browser_suggestions_mostvisited_MostVisitedSitesBridge_onURLsAvailable(nullptr);
static void Java_MostVisitedSitesBridge_onURLsAvailable(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, const base::android::JavaRef<jobjectArray>& titles,
    const base::android::JavaRef<jobjectArray>& urls,
    const base::android::JavaRef<jintArray>& sections,
    const base::android::JavaRef<jintArray>& titleSources,
    const base::android::JavaRef<jintArray>& sources) {
  jclass clazz =
      org_chromium_chrome_browser_suggestions_mostvisited_MostVisitedSitesBridge_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_chrome_browser_suggestions_mostvisited_MostVisitedSitesBridge_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "onURLsAvailable",
          "([Ljava/lang/String;[Lorg/chromium/url/GURL;[I[I[I)V",
&g_org_chromium_chrome_browser_suggestions_mostvisited_MostVisitedSitesBridge_onURLsAvailable);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id, titles.obj(), urls.obj(), sections.obj(), titleSources.obj(),
              sources.obj());
}

static std::atomic<jmethodID>
    g_org_chromium_chrome_browser_suggestions_mostvisited_MostVisitedSitesBridge_onIconMadeAvailable(nullptr);
static void Java_MostVisitedSitesBridge_onIconMadeAvailable(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, const base::android::JavaRef<jobject>& siteUrl) {
  jclass clazz =
      org_chromium_chrome_browser_suggestions_mostvisited_MostVisitedSitesBridge_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_chrome_browser_suggestions_mostvisited_MostVisitedSitesBridge_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "onIconMadeAvailable",
          "(Lorg/chromium/url/GURL;)V",
&g_org_chromium_chrome_browser_suggestions_mostvisited_MostVisitedSitesBridge_onIconMadeAvailable);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id, siteUrl.obj());
}

#endif  // org_chromium_chrome_browser_suggestions_mostvisited_MostVisitedSitesBridge_JNI
