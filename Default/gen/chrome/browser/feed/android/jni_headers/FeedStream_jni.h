// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/chrome/browser/feed/FeedStream

#ifndef org_chromium_chrome_browser_feed_FeedStream_JNI
#define org_chromium_chrome_browser_feed_FeedStream_JNI

#include <jni.h>

#include "../../../../../../../../base/android/jni_generator/jni_generator_helper.h"


// Step 1: Forward declarations.

JNI_REGISTRATION_EXPORT extern const char kClassPath_org_chromium_chrome_browser_feed_FeedStream[];
const char kClassPath_org_chromium_chrome_browser_feed_FeedStream[] =
    "org/chromium/chrome/browser/feed/FeedStream";
// Leaking this jclass as we cannot use LazyInstance from some threads.
JNI_REGISTRATION_EXPORT std::atomic<jclass>
    g_org_chromium_chrome_browser_feed_FeedStream_clazz(nullptr);
#ifndef org_chromium_chrome_browser_feed_FeedStream_clazz_defined
#define org_chromium_chrome_browser_feed_FeedStream_clazz_defined
inline jclass org_chromium_chrome_browser_feed_FeedStream_clazz(JNIEnv* env) {
  return base::android::LazyGetClass(env, kClassPath_org_chromium_chrome_browser_feed_FeedStream,
      &g_org_chromium_chrome_browser_feed_FeedStream_clazz);
}
#endif


// Step 2: Constants (optional).


// Step 3: Method stubs.
namespace feed {
namespace android {

static jlong JNI_FeedStream_Init(JNIEnv* env, const base::android::JavaParamRef<jobject>& caller,
    jint streamKind,
    jlong nativeFeedReliabilityLoggingBridge);

JNI_GENERATOR_EXPORT jlong Java_J_N_MIFFwCrU(
    JNIEnv* env,
    jclass jcaller,
    jobject caller,
    jint streamKind,
    jlong nativeFeedReliabilityLoggingBridge) {
  return JNI_FeedStream_Init(env, base::android::JavaParamRef<jobject>(env, caller), streamKind,
      nativeFeedReliabilityLoggingBridge);
}

JNI_GENERATOR_EXPORT void Java_J_N_MSbKfLjT(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeFeedStream,
    jobject caller) {
  FeedStream* native = reinterpret_cast<FeedStream*>(nativeFeedStream);
  CHECK_NATIVE_PTR(env, jcaller, native, "ReportFeedViewed");
  return native->ReportFeedViewed(env, base::android::JavaParamRef<jobject>(env, caller));
}

JNI_GENERATOR_EXPORT void Java_J_N_MziuA46j(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeFeedStream,
    jobject caller,
    jstring sliceId) {
  FeedStream* native = reinterpret_cast<FeedStream*>(nativeFeedStream);
  CHECK_NATIVE_PTR(env, jcaller, native, "ReportSliceViewed");
  return native->ReportSliceViewed(env, base::android::JavaParamRef<jobject>(env, caller),
      base::android::JavaParamRef<jstring>(env, sliceId));
}

JNI_GENERATOR_EXPORT void Java_J_N_M6FEpeaw(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeFeedStream,
    jobject caller,
    jboolean inNewTab) {
  FeedStream* native = reinterpret_cast<FeedStream*>(nativeFeedStream);
  CHECK_NATIVE_PTR(env, jcaller, native, "ReportPageLoaded");
  return native->ReportPageLoaded(env, base::android::JavaParamRef<jobject>(env, caller), inNewTab);
}

JNI_GENERATOR_EXPORT void Java_J_N_MAzH_1k9s(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeFeedStream,
    jobject caller,
    jobject url,
    jstring sliceId,
    jint openActionType) {
  FeedStream* native = reinterpret_cast<FeedStream*>(nativeFeedStream);
  CHECK_NATIVE_PTR(env, jcaller, native, "ReportOpenAction");
  return native->ReportOpenAction(env, base::android::JavaParamRef<jobject>(env, caller),
      base::android::JavaParamRef<jobject>(env, url), base::android::JavaParamRef<jstring>(env,
      sliceId), openActionType);
}

JNI_GENERATOR_EXPORT void Java_J_N_MakGUIs_1(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeFeedStream,
    jobject caller,
    jint userAction) {
  FeedStream* native = reinterpret_cast<FeedStream*>(nativeFeedStream);
  CHECK_NATIVE_PTR(env, jcaller, native, "ReportOtherUserAction");
  return native->ReportOtherUserAction(env, base::android::JavaParamRef<jobject>(env, caller),
      userAction);
}

JNI_GENERATOR_EXPORT void Java_J_N_M9DpFDeH(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeFeedStream,
    jobject caller,
    jint distanceDp) {
  FeedStream* native = reinterpret_cast<FeedStream*>(nativeFeedStream);
  CHECK_NATIVE_PTR(env, jcaller, native, "ReportStreamScrolled");
  return native->ReportStreamScrolled(env, base::android::JavaParamRef<jobject>(env, caller),
      distanceDp);
}

JNI_GENERATOR_EXPORT void Java_J_N_MI0NT3kQ(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeFeedStream,
    jobject caller) {
  FeedStream* native = reinterpret_cast<FeedStream*>(nativeFeedStream);
  CHECK_NATIVE_PTR(env, jcaller, native, "ReportStreamScrollStart");
  return native->ReportStreamScrollStart(env, base::android::JavaParamRef<jobject>(env, caller));
}

JNI_GENERATOR_EXPORT void Java_J_N_MlM7BJQG(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeFeedStream,
    jobject url,
    jlongArray mids) {
  FeedStream* native = reinterpret_cast<FeedStream*>(nativeFeedStream);
  CHECK_NATIVE_PTR(env, jcaller, native, "UpdateUserProfileOnLinkClick");
  return native->UpdateUserProfileOnLinkClick(env, base::android::JavaParamRef<jobject>(env, url),
      base::android::JavaParamRef<jlongArray>(env, mids));
}

JNI_GENERATOR_EXPORT void Java_J_N_MOl5J0Or(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeFeedStream,
    jobject caller,
    jobject callback) {
  FeedStream* native = reinterpret_cast<FeedStream*>(nativeFeedStream);
  CHECK_NATIVE_PTR(env, jcaller, native, "LoadMore");
  return native->LoadMore(env, base::android::JavaParamRef<jobject>(env, caller),
      base::android::JavaParamRef<jobject>(env, callback));
}

JNI_GENERATOR_EXPORT void Java_J_N_MVSbRkAk(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeFeedStream,
    jobject caller,
    jobject callback) {
  FeedStream* native = reinterpret_cast<FeedStream*>(nativeFeedStream);
  CHECK_NATIVE_PTR(env, jcaller, native, "ManualRefresh");
  return native->ManualRefresh(env, base::android::JavaParamRef<jobject>(env, caller),
      base::android::JavaParamRef<jobject>(env, callback));
}

JNI_GENERATOR_EXPORT void Java_J_N_MqUxQ31h(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeFeedStream,
    jobject caller,
    jbyteArray data,
    jbyteArray loggingParameters) {
  FeedStream* native = reinterpret_cast<FeedStream*>(nativeFeedStream);
  CHECK_NATIVE_PTR(env, jcaller, native, "ProcessThereAndBackAgain");
  return native->ProcessThereAndBackAgain(env, base::android::JavaParamRef<jobject>(env, caller),
      base::android::JavaParamRef<jbyteArray>(env, data),
      base::android::JavaParamRef<jbyteArray>(env, loggingParameters));
}

JNI_GENERATOR_EXPORT jint Java_J_N_MPd9Dl_00024c(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeFeedStream,
    jobject caller,
    jbyteArray data) {
  FeedStream* native = reinterpret_cast<FeedStream*>(nativeFeedStream);
  CHECK_NATIVE_PTR(env, jcaller, native, "ExecuteEphemeralChange", 0);
  return native->ExecuteEphemeralChange(env, base::android::JavaParamRef<jobject>(env, caller),
      base::android::JavaParamRef<jbyteArray>(env, data));
}

JNI_GENERATOR_EXPORT void Java_J_N_MN4bxfHM(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeFeedStream,
    jobject caller,
    jint changeId) {
  FeedStream* native = reinterpret_cast<FeedStream*>(nativeFeedStream);
  CHECK_NATIVE_PTR(env, jcaller, native, "CommitEphemeralChange");
  return native->CommitEphemeralChange(env, base::android::JavaParamRef<jobject>(env, caller),
      changeId);
}

JNI_GENERATOR_EXPORT void Java_J_N_MndmRGin(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeFeedStream,
    jobject caller,
    jint changeId) {
  FeedStream* native = reinterpret_cast<FeedStream*>(nativeFeedStream);
  CHECK_NATIVE_PTR(env, jcaller, native, "DiscardEphemeralChange");
  return native->DiscardEphemeralChange(env, base::android::JavaParamRef<jobject>(env, caller),
      changeId);
}

JNI_GENERATOR_EXPORT void Java_J_N_M5EFM3b8(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeFeedStream,
    jobject caller) {
  FeedStream* native = reinterpret_cast<FeedStream*>(nativeFeedStream);
  CHECK_NATIVE_PTR(env, jcaller, native, "SurfaceOpened");
  return native->SurfaceOpened(env, base::android::JavaParamRef<jobject>(env, caller));
}

JNI_GENERATOR_EXPORT void Java_J_N_Mbe8Jcnk(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeFeedStream,
    jobject caller) {
  FeedStream* native = reinterpret_cast<FeedStream*>(nativeFeedStream);
  CHECK_NATIVE_PTR(env, jcaller, native, "SurfaceClosed");
  return native->SurfaceClosed(env, base::android::JavaParamRef<jobject>(env, caller));
}

JNI_GENERATOR_EXPORT jint Java_J_N_MI3u_00024s7A(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeFeedStream,
    jobject caller) {
  FeedStream* native = reinterpret_cast<FeedStream*>(nativeFeedStream);
  CHECK_NATIVE_PTR(env, jcaller, native, "GetSurfaceId", 0);
  return native->GetSurfaceId(env, base::android::JavaParamRef<jobject>(env, caller));
}

JNI_GENERATOR_EXPORT jlong Java_J_N_Mo7yKNFf(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeFeedStream,
    jobject caller) {
  FeedStream* native = reinterpret_cast<FeedStream*>(nativeFeedStream);
  CHECK_NATIVE_PTR(env, jcaller, native, "GetLastFetchTimeMs", 0);
  return native->GetLastFetchTimeMs(env, base::android::JavaParamRef<jobject>(env, caller));
}

JNI_GENERATOR_EXPORT void Java_J_N_MdeRaZqh(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeFeedStream,
    jobject caller,
    jint type) {
  FeedStream* native = reinterpret_cast<FeedStream*>(nativeFeedStream);
  CHECK_NATIVE_PTR(env, jcaller, native, "ReportInfoCardTrackViewStarted");
  return native->ReportInfoCardTrackViewStarted(env, base::android::JavaParamRef<jobject>(env,
      caller), type);
}

JNI_GENERATOR_EXPORT void Java_J_N_MP1gHvWn(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeFeedStream,
    jobject caller,
    jint type,
    jint minimumViewIntervalSeconds) {
  FeedStream* native = reinterpret_cast<FeedStream*>(nativeFeedStream);
  CHECK_NATIVE_PTR(env, jcaller, native, "ReportInfoCardViewed");
  return native->ReportInfoCardViewed(env, base::android::JavaParamRef<jobject>(env, caller), type,
      minimumViewIntervalSeconds);
}

JNI_GENERATOR_EXPORT void Java_J_N_MK59FOHj(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeFeedStream,
    jobject caller,
    jint type) {
  FeedStream* native = reinterpret_cast<FeedStream*>(nativeFeedStream);
  CHECK_NATIVE_PTR(env, jcaller, native, "ReportInfoCardClicked");
  return native->ReportInfoCardClicked(env, base::android::JavaParamRef<jobject>(env, caller),
      type);
}

JNI_GENERATOR_EXPORT void Java_J_N_MtFh8a9I(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeFeedStream,
    jobject caller,
    jint type) {
  FeedStream* native = reinterpret_cast<FeedStream*>(nativeFeedStream);
  CHECK_NATIVE_PTR(env, jcaller, native, "ReportInfoCardDismissedExplicitly");
  return native->ReportInfoCardDismissedExplicitly(env, base::android::JavaParamRef<jobject>(env,
      caller), type);
}

JNI_GENERATOR_EXPORT void Java_J_N_MemZevsN(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeFeedStream,
    jobject caller,
    jint type) {
  FeedStream* native = reinterpret_cast<FeedStream*>(nativeFeedStream);
  CHECK_NATIVE_PTR(env, jcaller, native, "ResetInfoCardStates");
  return native->ResetInfoCardStates(env, base::android::JavaParamRef<jobject>(env, caller), type);
}

JNI_GENERATOR_EXPORT void Java_J_N_Mh3BEDT_1(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeFeedStream,
    jobject caller,
    jint feedToInvalidate) {
  FeedStream* native = reinterpret_cast<FeedStream*>(nativeFeedStream);
  CHECK_NATIVE_PTR(env, jcaller, native, "InvalidateContentCacheFor");
  return native->InvalidateContentCacheFor(env, base::android::JavaParamRef<jobject>(env, caller),
      feedToInvalidate);
}


static std::atomic<jmethodID>
    g_org_chromium_chrome_browser_feed_FeedStream_replaceDataStoreEntry(nullptr);
static void Java_FeedStream_replaceDataStoreEntry(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, const base::android::JavaRef<jstring>& key,
    const base::android::JavaRef<jbyteArray>& data) {
  jclass clazz = org_chromium_chrome_browser_feed_FeedStream_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_chrome_browser_feed_FeedStream_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "replaceDataStoreEntry",
          "(Ljava/lang/String;[B)V",
          &g_org_chromium_chrome_browser_feed_FeedStream_replaceDataStoreEntry);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id, key.obj(), data.obj());
}

static std::atomic<jmethodID>
    g_org_chromium_chrome_browser_feed_FeedStream_removeDataStoreEntry(nullptr);
static void Java_FeedStream_removeDataStoreEntry(JNIEnv* env, const base::android::JavaRef<jobject>&
    obj, const base::android::JavaRef<jstring>& key) {
  jclass clazz = org_chromium_chrome_browser_feed_FeedStream_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_chrome_browser_feed_FeedStream_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "removeDataStoreEntry",
          "(Ljava/lang/String;)V",
          &g_org_chromium_chrome_browser_feed_FeedStream_removeDataStoreEntry);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id, key.obj());
}

static std::atomic<jmethodID>
    g_org_chromium_chrome_browser_feed_FeedStream_onStreamUpdated(nullptr);
static void Java_FeedStream_onStreamUpdated(JNIEnv* env, const base::android::JavaRef<jobject>& obj,
    const base::android::JavaRef<jbyteArray>& data) {
  jclass clazz = org_chromium_chrome_browser_feed_FeedStream_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_chrome_browser_feed_FeedStream_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "onStreamUpdated",
          "([B)V",
          &g_org_chromium_chrome_browser_feed_FeedStream_onStreamUpdated);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id, data.obj());
}

}  // namespace android
}  // namespace feed

#endif  // org_chromium_chrome_browser_feed_FeedStream_JNI
