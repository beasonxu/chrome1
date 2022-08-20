// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/chrome/browser/feed/FeedReliabilityLoggingBridge

#ifndef org_chromium_chrome_browser_feed_FeedReliabilityLoggingBridge_JNI
#define org_chromium_chrome_browser_feed_FeedReliabilityLoggingBridge_JNI

#include <jni.h>

#include "../../../../../../../../base/android/jni_generator/jni_generator_helper.h"


// Step 1: Forward declarations.

JNI_REGISTRATION_EXPORT extern const char
    kClassPath_org_chromium_chrome_browser_feed_FeedReliabilityLoggingBridge[];
const char kClassPath_org_chromium_chrome_browser_feed_FeedReliabilityLoggingBridge[] =
    "org/chromium/chrome/browser/feed/FeedReliabilityLoggingBridge";
// Leaking this jclass as we cannot use LazyInstance from some threads.
JNI_REGISTRATION_EXPORT std::atomic<jclass>
    g_org_chromium_chrome_browser_feed_FeedReliabilityLoggingBridge_clazz(nullptr);
#ifndef org_chromium_chrome_browser_feed_FeedReliabilityLoggingBridge_clazz_defined
#define org_chromium_chrome_browser_feed_FeedReliabilityLoggingBridge_clazz_defined
inline jclass org_chromium_chrome_browser_feed_FeedReliabilityLoggingBridge_clazz(JNIEnv* env) {
  return base::android::LazyGetClass(env,
      kClassPath_org_chromium_chrome_browser_feed_FeedReliabilityLoggingBridge,
      &g_org_chromium_chrome_browser_feed_FeedReliabilityLoggingBridge_clazz);
}
#endif


// Step 2: Constants (optional).


// Step 3: Method stubs.
namespace feed {
namespace android {

static jlong JNI_FeedReliabilityLoggingBridge_Init(JNIEnv* env, const
    base::android::JavaParamRef<jobject>& thisRef);

JNI_GENERATOR_EXPORT jlong Java_J_N_MaP9vcrt(
    JNIEnv* env,
    jclass jcaller,
    jobject thisRef) {
  return JNI_FeedReliabilityLoggingBridge_Init(env, base::android::JavaParamRef<jobject>(env,
      thisRef));
}

JNI_GENERATOR_EXPORT void Java_J_N_MFvLOb3J(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeFeedReliabilityLoggingBridge) {
  FeedReliabilityLoggingBridge* native =
      reinterpret_cast<FeedReliabilityLoggingBridge*>(nativeFeedReliabilityLoggingBridge);
  CHECK_NATIVE_PTR(env, jcaller, native, "Destroy");
  return native->Destroy(env);
}


static std::atomic<jmethodID>
    g_org_chromium_chrome_browser_feed_FeedReliabilityLoggingBridge_logOtherLaunchStart(nullptr);
static void Java_FeedReliabilityLoggingBridge_logOtherLaunchStart(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, jlong timestamp) {
  jclass clazz = org_chromium_chrome_browser_feed_FeedReliabilityLoggingBridge_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_chrome_browser_feed_FeedReliabilityLoggingBridge_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "logOtherLaunchStart",
          "(J)V",
          &g_org_chromium_chrome_browser_feed_FeedReliabilityLoggingBridge_logOtherLaunchStart);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id, timestamp);
}

static std::atomic<jmethodID>
    g_org_chromium_chrome_browser_feed_FeedReliabilityLoggingBridge_logCacheReadStart(nullptr);
static void Java_FeedReliabilityLoggingBridge_logCacheReadStart(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, jlong timestamp) {
  jclass clazz = org_chromium_chrome_browser_feed_FeedReliabilityLoggingBridge_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_chrome_browser_feed_FeedReliabilityLoggingBridge_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "logCacheReadStart",
          "(J)V",
          &g_org_chromium_chrome_browser_feed_FeedReliabilityLoggingBridge_logCacheReadStart);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id, timestamp);
}

static std::atomic<jmethodID>
    g_org_chromium_chrome_browser_feed_FeedReliabilityLoggingBridge_logCacheReadEnd(nullptr);
static void Java_FeedReliabilityLoggingBridge_logCacheReadEnd(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, jlong timestamp,
    JniIntWrapper cacheReadResult) {
  jclass clazz = org_chromium_chrome_browser_feed_FeedReliabilityLoggingBridge_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_chrome_browser_feed_FeedReliabilityLoggingBridge_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "logCacheReadEnd",
          "(JI)V",
          &g_org_chromium_chrome_browser_feed_FeedReliabilityLoggingBridge_logCacheReadEnd);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id, timestamp, as_jint(cacheReadResult));
}

static std::atomic<jmethodID>
    g_org_chromium_chrome_browser_feed_FeedReliabilityLoggingBridge_logFeedRequestStart(nullptr);
static void Java_FeedReliabilityLoggingBridge_logFeedRequestStart(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, JniIntWrapper requestId,
    jlong timestamp) {
  jclass clazz = org_chromium_chrome_browser_feed_FeedReliabilityLoggingBridge_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_chrome_browser_feed_FeedReliabilityLoggingBridge_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "logFeedRequestStart",
          "(IJ)V",
          &g_org_chromium_chrome_browser_feed_FeedReliabilityLoggingBridge_logFeedRequestStart);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id, as_jint(requestId), timestamp);
}

static std::atomic<jmethodID>
    g_org_chromium_chrome_browser_feed_FeedReliabilityLoggingBridge_logWebFeedRequestStart(nullptr);
static void Java_FeedReliabilityLoggingBridge_logWebFeedRequestStart(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, JniIntWrapper requestId,
    jlong timestamp) {
  jclass clazz = org_chromium_chrome_browser_feed_FeedReliabilityLoggingBridge_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_chrome_browser_feed_FeedReliabilityLoggingBridge_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "logWebFeedRequestStart",
          "(IJ)V",
          &g_org_chromium_chrome_browser_feed_FeedReliabilityLoggingBridge_logWebFeedRequestStart);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id, as_jint(requestId), timestamp);
}

static std::atomic<jmethodID>
    g_org_chromium_chrome_browser_feed_FeedReliabilityLoggingBridge_logActionsUploadRequestStart(nullptr);
static void Java_FeedReliabilityLoggingBridge_logActionsUploadRequestStart(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, JniIntWrapper requestId,
    jlong timestamp) {
  jclass clazz = org_chromium_chrome_browser_feed_FeedReliabilityLoggingBridge_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_chrome_browser_feed_FeedReliabilityLoggingBridge_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "logActionsUploadRequestStart",
          "(IJ)V",
&g_org_chromium_chrome_browser_feed_FeedReliabilityLoggingBridge_logActionsUploadRequestStart);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id, as_jint(requestId), timestamp);
}

static std::atomic<jmethodID>
    g_org_chromium_chrome_browser_feed_FeedReliabilityLoggingBridge_logRequestSent(nullptr);
static void Java_FeedReliabilityLoggingBridge_logRequestSent(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, JniIntWrapper requestId,
    jlong timestamp) {
  jclass clazz = org_chromium_chrome_browser_feed_FeedReliabilityLoggingBridge_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_chrome_browser_feed_FeedReliabilityLoggingBridge_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "logRequestSent",
          "(IJ)V",
          &g_org_chromium_chrome_browser_feed_FeedReliabilityLoggingBridge_logRequestSent);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id, as_jint(requestId), timestamp);
}

static std::atomic<jmethodID>
    g_org_chromium_chrome_browser_feed_FeedReliabilityLoggingBridge_logResponseReceived(nullptr);
static void Java_FeedReliabilityLoggingBridge_logResponseReceived(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, JniIntWrapper requestId,
    jlong serverRecvTimestamp,
    jlong serverSendTimestamp,
    jlong clientRecvTimestamp) {
  jclass clazz = org_chromium_chrome_browser_feed_FeedReliabilityLoggingBridge_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_chrome_browser_feed_FeedReliabilityLoggingBridge_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "logResponseReceived",
          "(IJJJ)V",
          &g_org_chromium_chrome_browser_feed_FeedReliabilityLoggingBridge_logResponseReceived);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id, as_jint(requestId), serverRecvTimestamp, serverSendTimestamp,
              clientRecvTimestamp);
}

static std::atomic<jmethodID>
    g_org_chromium_chrome_browser_feed_FeedReliabilityLoggingBridge_logRequestFinished(nullptr);
static void Java_FeedReliabilityLoggingBridge_logRequestFinished(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, JniIntWrapper requestId,
    jlong timestamp,
    JniIntWrapper canonicalStatus) {
  jclass clazz = org_chromium_chrome_browser_feed_FeedReliabilityLoggingBridge_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_chrome_browser_feed_FeedReliabilityLoggingBridge_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "logRequestFinished",
          "(IJI)V",
          &g_org_chromium_chrome_browser_feed_FeedReliabilityLoggingBridge_logRequestFinished);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id, as_jint(requestId), timestamp, as_jint(canonicalStatus));
}

static std::atomic<jmethodID>
    g_org_chromium_chrome_browser_feed_FeedReliabilityLoggingBridge_logAboveTheFoldRender(nullptr);
static void Java_FeedReliabilityLoggingBridge_logAboveTheFoldRender(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, jlong timestamp,
    JniIntWrapper aboveTheFoldRenderResult) {
  jclass clazz = org_chromium_chrome_browser_feed_FeedReliabilityLoggingBridge_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_chrome_browser_feed_FeedReliabilityLoggingBridge_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "logAboveTheFoldRender",
          "(JI)V",
          &g_org_chromium_chrome_browser_feed_FeedReliabilityLoggingBridge_logAboveTheFoldRender);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id, timestamp, as_jint(aboveTheFoldRenderResult));
}

static std::atomic<jmethodID>
    g_org_chromium_chrome_browser_feed_FeedReliabilityLoggingBridge_logLoadingIndicatorShown(nullptr);
static void Java_FeedReliabilityLoggingBridge_logLoadingIndicatorShown(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, jlong timestamp) {
  jclass clazz = org_chromium_chrome_browser_feed_FeedReliabilityLoggingBridge_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_chrome_browser_feed_FeedReliabilityLoggingBridge_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "logLoadingIndicatorShown",
          "(J)V",
&g_org_chromium_chrome_browser_feed_FeedReliabilityLoggingBridge_logLoadingIndicatorShown);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id, timestamp);
}

static std::atomic<jmethodID>
    g_org_chromium_chrome_browser_feed_FeedReliabilityLoggingBridge_logLaunchFinishedAfterStreamUpdate(nullptr);
static void Java_FeedReliabilityLoggingBridge_logLaunchFinishedAfterStreamUpdate(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, JniIntWrapper discoverLaunchResult) {
  jclass clazz = org_chromium_chrome_browser_feed_FeedReliabilityLoggingBridge_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_chrome_browser_feed_FeedReliabilityLoggingBridge_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "logLaunchFinishedAfterStreamUpdate",
          "(I)V",
&g_org_chromium_chrome_browser_feed_FeedReliabilityLoggingBridge_logLaunchFinishedAfterStreamUpdate);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id, as_jint(discoverLaunchResult));
}

}  // namespace android
}  // namespace feed

#endif  // org_chromium_chrome_browser_feed_FeedReliabilityLoggingBridge_JNI
