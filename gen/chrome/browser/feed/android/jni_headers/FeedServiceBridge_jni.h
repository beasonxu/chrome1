// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/chrome/browser/feed/FeedServiceBridge

#ifndef org_chromium_chrome_browser_feed_FeedServiceBridge_JNI
#define org_chromium_chrome_browser_feed_FeedServiceBridge_JNI

#include <jni.h>

#include "../../../../../../../../base/android/jni_generator/jni_generator_helper.h"


// Step 1: Forward declarations.

JNI_REGISTRATION_EXPORT extern const char
    kClassPath_org_chromium_chrome_browser_feed_FeedServiceBridge[];
const char kClassPath_org_chromium_chrome_browser_feed_FeedServiceBridge[] =
    "org/chromium/chrome/browser/feed/FeedServiceBridge";

JNI_REGISTRATION_EXPORT extern const char
    kClassPath_org_chromium_chrome_browser_feed_FeedServiceBridge_00024UnreadContentObserver[];
const char
    kClassPath_org_chromium_chrome_browser_feed_FeedServiceBridge_00024UnreadContentObserver[] =
    "org/chromium/chrome/browser/feed/FeedServiceBridge$UnreadContentObserver";
// Leaking this jclass as we cannot use LazyInstance from some threads.
JNI_REGISTRATION_EXPORT std::atomic<jclass>
    g_org_chromium_chrome_browser_feed_FeedServiceBridge_clazz(nullptr);
#ifndef org_chromium_chrome_browser_feed_FeedServiceBridge_clazz_defined
#define org_chromium_chrome_browser_feed_FeedServiceBridge_clazz_defined
inline jclass org_chromium_chrome_browser_feed_FeedServiceBridge_clazz(JNIEnv* env) {
  return base::android::LazyGetClass(env,
      kClassPath_org_chromium_chrome_browser_feed_FeedServiceBridge,
      &g_org_chromium_chrome_browser_feed_FeedServiceBridge_clazz);
}
#endif
// Leaking this jclass as we cannot use LazyInstance from some threads.
JNI_REGISTRATION_EXPORT std::atomic<jclass>
    g_org_chromium_chrome_browser_feed_FeedServiceBridge_00024UnreadContentObserver_clazz(nullptr);
#ifndef org_chromium_chrome_browser_feed_FeedServiceBridge_00024UnreadContentObserver_clazz_defined
#define org_chromium_chrome_browser_feed_FeedServiceBridge_00024UnreadContentObserver_clazz_defined
inline jclass
    org_chromium_chrome_browser_feed_FeedServiceBridge_00024UnreadContentObserver_clazz(JNIEnv* env)
    {
  return base::android::LazyGetClass(env,
      kClassPath_org_chromium_chrome_browser_feed_FeedServiceBridge_00024UnreadContentObserver,
      &g_org_chromium_chrome_browser_feed_FeedServiceBridge_00024UnreadContentObserver_clazz);
}
#endif


// Step 2: Constants (optional).


// Step 3: Method stubs.
namespace feed {

static jboolean JNI_FeedServiceBridge_IsEnabled(JNIEnv* env);

JNI_GENERATOR_EXPORT jboolean Java_J_N_MpwNAobK(
    JNIEnv* env,
    jclass jcaller) {
  return JNI_FeedServiceBridge_IsEnabled(env);
}

static void JNI_FeedServiceBridge_Startup(JNIEnv* env);

JNI_GENERATOR_EXPORT void Java_J_N_MEQNDUUr(
    JNIEnv* env,
    jclass jcaller) {
  return JNI_FeedServiceBridge_Startup(env);
}

static jint JNI_FeedServiceBridge_GetLoadMoreTriggerLookahead(JNIEnv* env);

JNI_GENERATOR_EXPORT jint Java_J_N_M4qKtJTt(
    JNIEnv* env,
    jclass jcaller) {
  return JNI_FeedServiceBridge_GetLoadMoreTriggerLookahead(env);
}

static jint JNI_FeedServiceBridge_GetLoadMoreTriggerScrollDistanceDp(JNIEnv* env);

JNI_GENERATOR_EXPORT jint Java_J_N_M6BYCIpb(
    JNIEnv* env,
    jclass jcaller) {
  return JNI_FeedServiceBridge_GetLoadMoreTriggerScrollDistanceDp(env);
}

static void JNI_FeedServiceBridge_ReportOpenVisitComplete(JNIEnv* env, jlong visitTimeMs);

JNI_GENERATOR_EXPORT void Java_J_N_MXctRyHn(
    JNIEnv* env,
    jclass jcaller,
    jlong visitTimeMs) {
  return JNI_FeedServiceBridge_ReportOpenVisitComplete(env, visitTimeMs);
}

static jint JNI_FeedServiceBridge_GetVideoPreviewsTypePreference(JNIEnv* env);

JNI_GENERATOR_EXPORT jint Java_J_N_MC3MPpYa(
    JNIEnv* env,
    jclass jcaller) {
  return JNI_FeedServiceBridge_GetVideoPreviewsTypePreference(env);
}

static void JNI_FeedServiceBridge_SetVideoPreviewsTypePreference(JNIEnv* env, jint
    videoPreviewsType);

JNI_GENERATOR_EXPORT void Java_J_N_MEA3kwB5(
    JNIEnv* env,
    jclass jcaller,
    jint videoPreviewsType) {
  return JNI_FeedServiceBridge_SetVideoPreviewsTypePreference(env, videoPreviewsType);
}

static jlong JNI_FeedServiceBridge_GetReliabilityLoggingId(JNIEnv* env);

JNI_GENERATOR_EXPORT jlong Java_J_N_M3iQL3Dd(
    JNIEnv* env,
    jclass jcaller) {
  return JNI_FeedServiceBridge_GetReliabilityLoggingId(env);
}

static jboolean JNI_FeedServiceBridge_IsAutoplayEnabled(JNIEnv* env);

JNI_GENERATOR_EXPORT jboolean Java_J_N_MqhKj56k(
    JNIEnv* env,
    jclass jcaller) {
  return JNI_FeedServiceBridge_IsAutoplayEnabled(env);
}

static void JNI_FeedServiceBridge_ReportOtherUserAction(JNIEnv* env, jint streamKind,
    jint userAction);

JNI_GENERATOR_EXPORT void Java_J_N_MxULk9PS(
    JNIEnv* env,
    jclass jcaller,
    jint streamKind,
    jint userAction) {
  return JNI_FeedServiceBridge_ReportOtherUserAction(env, streamKind, userAction);
}

static jint JNI_FeedServiceBridge_GetContentOrderForWebFeed(JNIEnv* env);

JNI_GENERATOR_EXPORT jint Java_J_N_M3tcgrxA(
    JNIEnv* env,
    jclass jcaller) {
  return JNI_FeedServiceBridge_GetContentOrderForWebFeed(env);
}

static void JNI_FeedServiceBridge_SetContentOrderForWebFeed(JNIEnv* env, jint contentOrder);

JNI_GENERATOR_EXPORT void Java_J_N_Mn5_000242mvw(
    JNIEnv* env,
    jclass jcaller,
    jint contentOrder) {
  return JNI_FeedServiceBridge_SetContentOrderForWebFeed(env, contentOrder);
}

static jlong JNI_FeedServiceBridge_AddUnreadContentObserver(JNIEnv* env, const
    base::android::JavaParamRef<jobject>& object,
    jboolean isWebFeed);

JNI_GENERATOR_EXPORT jlong Java_J_N_MrqoIpvG(
    JNIEnv* env,
    jclass jcaller,
    jobject object,
    jboolean isWebFeed) {
  return JNI_FeedServiceBridge_AddUnreadContentObserver(env,
      base::android::JavaParamRef<jobject>(env, object), isWebFeed);
}

JNI_GENERATOR_EXPORT void Java_J_N_MVfuS_10P(
    JNIEnv* env,
    jclass jcaller,
    jlong nativePtr) {
  feed::JavaUnreadContentObserver* native =
      reinterpret_cast<feed::JavaUnreadContentObserver*>(nativePtr);
  CHECK_NATIVE_PTR(env, jcaller, native, "Destroy");
  return native->Destroy(env);
}


static std::atomic<jmethodID>
    g_org_chromium_chrome_browser_feed_FeedServiceBridge_getLanguageTag(nullptr);
static base::android::ScopedJavaLocalRef<jstring> Java_FeedServiceBridge_getLanguageTag(JNIEnv* env)
    {
  jclass clazz = org_chromium_chrome_browser_feed_FeedServiceBridge_clazz(env);
  CHECK_CLAZZ(env, clazz,
      org_chromium_chrome_browser_feed_FeedServiceBridge_clazz(env), NULL);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_STATIC>(
          env,
          clazz,
          "getLanguageTag",
          "()Ljava/lang/String;",
          &g_org_chromium_chrome_browser_feed_FeedServiceBridge_getLanguageTag);

  jstring ret =
      static_cast<jstring>(env->CallStaticObjectMethod(clazz,
          call_context.base.method_id));
  return base::android::ScopedJavaLocalRef<jstring>(env, ret);
}

static std::atomic<jmethodID>
    g_org_chromium_chrome_browser_feed_FeedServiceBridge_getDisplayMetrics(nullptr);
static base::android::ScopedJavaLocalRef<jdoubleArray>
    Java_FeedServiceBridge_getDisplayMetrics(JNIEnv* env) {
  jclass clazz = org_chromium_chrome_browser_feed_FeedServiceBridge_clazz(env);
  CHECK_CLAZZ(env, clazz,
      org_chromium_chrome_browser_feed_FeedServiceBridge_clazz(env), NULL);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_STATIC>(
          env,
          clazz,
          "getDisplayMetrics",
          "()[D",
          &g_org_chromium_chrome_browser_feed_FeedServiceBridge_getDisplayMetrics);

  jdoubleArray ret =
      static_cast<jdoubleArray>(env->CallStaticObjectMethod(clazz,
          call_context.base.method_id));
  return base::android::ScopedJavaLocalRef<jdoubleArray>(env, ret);
}

static std::atomic<jmethodID>
    g_org_chromium_chrome_browser_feed_FeedServiceBridge_clearAll(nullptr);
static void Java_FeedServiceBridge_clearAll(JNIEnv* env) {
  jclass clazz = org_chromium_chrome_browser_feed_FeedServiceBridge_clazz(env);
  CHECK_CLAZZ(env, clazz,
      org_chromium_chrome_browser_feed_FeedServiceBridge_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_STATIC>(
          env,
          clazz,
          "clearAll",
          "()V",
          &g_org_chromium_chrome_browser_feed_FeedServiceBridge_clearAll);

     env->CallStaticVoidMethod(clazz,
          call_context.base.method_id);
}

static std::atomic<jmethodID>
    g_org_chromium_chrome_browser_feed_FeedServiceBridge_prefetchImage(nullptr);
static void Java_FeedServiceBridge_prefetchImage(JNIEnv* env, const base::android::JavaRef<jstring>&
    url) {
  jclass clazz = org_chromium_chrome_browser_feed_FeedServiceBridge_clazz(env);
  CHECK_CLAZZ(env, clazz,
      org_chromium_chrome_browser_feed_FeedServiceBridge_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_STATIC>(
          env,
          clazz,
          "prefetchImage",
          "(Ljava/lang/String;)V",
          &g_org_chromium_chrome_browser_feed_FeedServiceBridge_prefetchImage);

     env->CallStaticVoidMethod(clazz,
          call_context.base.method_id, url.obj());
}

static std::atomic<jmethodID>
    g_org_chromium_chrome_browser_feed_FeedServiceBridge_getTabGroupEnabledState(nullptr);
static jint Java_FeedServiceBridge_getTabGroupEnabledState(JNIEnv* env) {
  jclass clazz = org_chromium_chrome_browser_feed_FeedServiceBridge_clazz(env);
  CHECK_CLAZZ(env, clazz,
      org_chromium_chrome_browser_feed_FeedServiceBridge_clazz(env), 0);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_STATIC>(
          env,
          clazz,
          "getTabGroupEnabledState",
          "()I",
          &g_org_chromium_chrome_browser_feed_FeedServiceBridge_getTabGroupEnabledState);

  jint ret =
      env->CallStaticIntMethod(clazz,
          call_context.base.method_id);
  return ret;
}

static std::atomic<jmethodID>
    g_org_chromium_chrome_browser_feed_FeedServiceBridge_00024UnreadContentObserver_hasUnreadContentChanged(nullptr);
static void Java_UnreadContentObserver_hasUnreadContentChanged(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, jboolean hasUnreadContent) {
  jclass clazz =
      org_chromium_chrome_browser_feed_FeedServiceBridge_00024UnreadContentObserver_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_chrome_browser_feed_FeedServiceBridge_00024UnreadContentObserver_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "hasUnreadContentChanged",
          "(Z)V",
&g_org_chromium_chrome_browser_feed_FeedServiceBridge_00024UnreadContentObserver_hasUnreadContentChanged);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id, hasUnreadContent);
}

}  // namespace feed

#endif  // org_chromium_chrome_browser_feed_FeedServiceBridge_JNI
