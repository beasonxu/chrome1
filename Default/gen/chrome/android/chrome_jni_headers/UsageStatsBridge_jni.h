// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/chrome/browser/usage_stats/UsageStatsBridge

#ifndef org_chromium_chrome_browser_usage_stats_UsageStatsBridge_JNI
#define org_chromium_chrome_browser_usage_stats_UsageStatsBridge_JNI

#include <jni.h>

#include "../../../../../../base/android/jni_generator/jni_generator_helper.h"


// Step 1: Forward declarations.

JNI_REGISTRATION_EXPORT extern const char
    kClassPath_org_chromium_chrome_browser_usage_1stats_UsageStatsBridge[];
const char kClassPath_org_chromium_chrome_browser_usage_1stats_UsageStatsBridge[] =
    "org/chromium/chrome/browser/usage_stats/UsageStatsBridge";
// Leaking this jclass as we cannot use LazyInstance from some threads.
JNI_REGISTRATION_EXPORT std::atomic<jclass>
    g_org_chromium_chrome_browser_usage_1stats_UsageStatsBridge_clazz(nullptr);
#ifndef org_chromium_chrome_browser_usage_1stats_UsageStatsBridge_clazz_defined
#define org_chromium_chrome_browser_usage_1stats_UsageStatsBridge_clazz_defined
inline jclass org_chromium_chrome_browser_usage_1stats_UsageStatsBridge_clazz(JNIEnv* env) {
  return base::android::LazyGetClass(env,
      kClassPath_org_chromium_chrome_browser_usage_1stats_UsageStatsBridge,
      &g_org_chromium_chrome_browser_usage_1stats_UsageStatsBridge_clazz);
}
#endif


// Step 2: Constants (optional).


// Step 3: Method stubs.
namespace usage_stats {

static jlong JNI_UsageStatsBridge_Init(JNIEnv* env, const base::android::JavaParamRef<jobject>&
    caller,
    const base::android::JavaParamRef<jobject>& profile);

JNI_GENERATOR_EXPORT jlong Java_J_N_MZTYueAb(
    JNIEnv* env,
    jclass jcaller,
    jobject caller,
    jobject profile) {
  return JNI_UsageStatsBridge_Init(env, base::android::JavaParamRef<jobject>(env, caller),
      base::android::JavaParamRef<jobject>(env, profile));
}

JNI_GENERATOR_EXPORT void Java_J_N_MUrp7nfR(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeUsageStatsBridge,
    jobject caller) {
  UsageStatsBridge* native = reinterpret_cast<UsageStatsBridge*>(nativeUsageStatsBridge);
  CHECK_NATIVE_PTR(env, jcaller, native, "Destroy");
  return native->Destroy(env, base::android::JavaParamRef<jobject>(env, caller));
}

JNI_GENERATOR_EXPORT void Java_J_N_M6Rdk6FF(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeUsageStatsBridge,
    jobject caller,
    jobject callback) {
  UsageStatsBridge* native = reinterpret_cast<UsageStatsBridge*>(nativeUsageStatsBridge);
  CHECK_NATIVE_PTR(env, jcaller, native, "GetAllEvents");
  return native->GetAllEvents(env, base::android::JavaParamRef<jobject>(env, caller),
      base::android::JavaParamRef<jobject>(env, callback));
}

JNI_GENERATOR_EXPORT void Java_J_N_M_1MumILJ(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeUsageStatsBridge,
    jobject caller,
    jlong start,
    jlong end,
    jobject callback) {
  UsageStatsBridge* native = reinterpret_cast<UsageStatsBridge*>(nativeUsageStatsBridge);
  CHECK_NATIVE_PTR(env, jcaller, native, "QueryEventsInRange");
  return native->QueryEventsInRange(env, base::android::JavaParamRef<jobject>(env, caller), start,
      end, base::android::JavaParamRef<jobject>(env, callback));
}

JNI_GENERATOR_EXPORT void Java_J_N_M_000241mbh6c(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeUsageStatsBridge,
    jobject caller,
    jobjectArray events,
    jobject callback) {
  UsageStatsBridge* native = reinterpret_cast<UsageStatsBridge*>(nativeUsageStatsBridge);
  CHECK_NATIVE_PTR(env, jcaller, native, "AddEvents");
  return native->AddEvents(env, base::android::JavaParamRef<jobject>(env, caller),
      base::android::JavaParamRef<jobjectArray>(env, events),
      base::android::JavaParamRef<jobject>(env, callback));
}

JNI_GENERATOR_EXPORT void Java_J_N_Mot8dCyk(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeUsageStatsBridge,
    jobject caller,
    jobject callback) {
  UsageStatsBridge* native = reinterpret_cast<UsageStatsBridge*>(nativeUsageStatsBridge);
  CHECK_NATIVE_PTR(env, jcaller, native, "DeleteAllEvents");
  return native->DeleteAllEvents(env, base::android::JavaParamRef<jobject>(env, caller),
      base::android::JavaParamRef<jobject>(env, callback));
}

JNI_GENERATOR_EXPORT void Java_J_N_Mr1dopkU(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeUsageStatsBridge,
    jobject caller,
    jlong start,
    jlong end,
    jobject callback) {
  UsageStatsBridge* native = reinterpret_cast<UsageStatsBridge*>(nativeUsageStatsBridge);
  CHECK_NATIVE_PTR(env, jcaller, native, "DeleteEventsInRange");
  return native->DeleteEventsInRange(env, base::android::JavaParamRef<jobject>(env, caller), start,
      end, base::android::JavaParamRef<jobject>(env, callback));
}

JNI_GENERATOR_EXPORT void Java_J_N_M67g7Hwt(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeUsageStatsBridge,
    jobject caller,
    jobjectArray domains,
    jobject callback) {
  UsageStatsBridge* native = reinterpret_cast<UsageStatsBridge*>(nativeUsageStatsBridge);
  CHECK_NATIVE_PTR(env, jcaller, native, "DeleteEventsWithMatchingDomains");
  return native->DeleteEventsWithMatchingDomains(env, base::android::JavaParamRef<jobject>(env,
      caller), base::android::JavaParamRef<jobjectArray>(env, domains),
      base::android::JavaParamRef<jobject>(env, callback));
}

JNI_GENERATOR_EXPORT void Java_J_N_MggFWmhE(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeUsageStatsBridge,
    jobject caller,
    jobject callback) {
  UsageStatsBridge* native = reinterpret_cast<UsageStatsBridge*>(nativeUsageStatsBridge);
  CHECK_NATIVE_PTR(env, jcaller, native, "GetAllSuspensions");
  return native->GetAllSuspensions(env, base::android::JavaParamRef<jobject>(env, caller),
      base::android::JavaParamRef<jobject>(env, callback));
}

JNI_GENERATOR_EXPORT void Java_J_N_M2UQ4Zbr(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeUsageStatsBridge,
    jobject caller,
    jobjectArray domains,
    jobject callback) {
  UsageStatsBridge* native = reinterpret_cast<UsageStatsBridge*>(nativeUsageStatsBridge);
  CHECK_NATIVE_PTR(env, jcaller, native, "SetSuspensions");
  return native->SetSuspensions(env, base::android::JavaParamRef<jobject>(env, caller),
      base::android::JavaParamRef<jobjectArray>(env, domains),
      base::android::JavaParamRef<jobject>(env, callback));
}

JNI_GENERATOR_EXPORT void Java_J_N_MiNnjkrf(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeUsageStatsBridge,
    jobject caller,
    jobject callback) {
  UsageStatsBridge* native = reinterpret_cast<UsageStatsBridge*>(nativeUsageStatsBridge);
  CHECK_NATIVE_PTR(env, jcaller, native, "GetAllTokenMappings");
  return native->GetAllTokenMappings(env, base::android::JavaParamRef<jobject>(env, caller),
      base::android::JavaParamRef<jobject>(env, callback));
}

JNI_GENERATOR_EXPORT void Java_J_N_Mz1N0m_00024q(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeUsageStatsBridge,
    jobject caller,
    jobjectArray tokens,
    jobjectArray fqdns,
    jobject callback) {
  UsageStatsBridge* native = reinterpret_cast<UsageStatsBridge*>(nativeUsageStatsBridge);
  CHECK_NATIVE_PTR(env, jcaller, native, "SetTokenMappings");
  return native->SetTokenMappings(env, base::android::JavaParamRef<jobject>(env, caller),
      base::android::JavaParamRef<jobjectArray>(env, tokens),
      base::android::JavaParamRef<jobjectArray>(env, fqdns),
      base::android::JavaParamRef<jobject>(env, callback));
}


static std::atomic<jmethodID>
    g_org_chromium_chrome_browser_usage_1stats_UsageStatsBridge_createMapAndRunCallback(nullptr);
static void Java_UsageStatsBridge_createMapAndRunCallback(JNIEnv* env, const
    base::android::JavaRef<jobjectArray>& keys,
    const base::android::JavaRef<jobjectArray>& values,
    const base::android::JavaRef<jobject>& callback) {
  jclass clazz = org_chromium_chrome_browser_usage_1stats_UsageStatsBridge_clazz(env);
  CHECK_CLAZZ(env, clazz,
      org_chromium_chrome_browser_usage_1stats_UsageStatsBridge_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_STATIC>(
          env,
          clazz,
          "createMapAndRunCallback",
          "([Ljava/lang/String;[Ljava/lang/String;Lorg/chromium/base/Callback;)V",
          &g_org_chromium_chrome_browser_usage_1stats_UsageStatsBridge_createMapAndRunCallback);

     env->CallStaticVoidMethod(clazz,
          call_context.base.method_id, keys.obj(), values.obj(), callback.obj());
}

static std::atomic<jmethodID>
    g_org_chromium_chrome_browser_usage_1stats_UsageStatsBridge_createEventListAndRunCallback(nullptr);
static void Java_UsageStatsBridge_createEventListAndRunCallback(JNIEnv* env, const
    base::android::JavaRef<jobjectArray>& serializedEvents,
    const base::android::JavaRef<jobject>& callback) {
  jclass clazz = org_chromium_chrome_browser_usage_1stats_UsageStatsBridge_clazz(env);
  CHECK_CLAZZ(env, clazz,
      org_chromium_chrome_browser_usage_1stats_UsageStatsBridge_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_STATIC>(
          env,
          clazz,
          "createEventListAndRunCallback",
          "([[BLorg/chromium/base/Callback;)V",
&g_org_chromium_chrome_browser_usage_1stats_UsageStatsBridge_createEventListAndRunCallback);

     env->CallStaticVoidMethod(clazz,
          call_context.base.method_id, serializedEvents.obj(), callback.obj());
}

static std::atomic<jmethodID>
    g_org_chromium_chrome_browser_usage_1stats_UsageStatsBridge_onAllHistoryDeleted(nullptr);
static void Java_UsageStatsBridge_onAllHistoryDeleted(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  jclass clazz = org_chromium_chrome_browser_usage_1stats_UsageStatsBridge_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_chrome_browser_usage_1stats_UsageStatsBridge_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "onAllHistoryDeleted",
          "()V",
          &g_org_chromium_chrome_browser_usage_1stats_UsageStatsBridge_onAllHistoryDeleted);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id);
}

static std::atomic<jmethodID>
    g_org_chromium_chrome_browser_usage_1stats_UsageStatsBridge_onHistoryDeletedInRange(nullptr);
static void Java_UsageStatsBridge_onHistoryDeletedInRange(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, jlong startTimeMs,
    jlong endTimeMs) {
  jclass clazz = org_chromium_chrome_browser_usage_1stats_UsageStatsBridge_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_chrome_browser_usage_1stats_UsageStatsBridge_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "onHistoryDeletedInRange",
          "(JJ)V",
          &g_org_chromium_chrome_browser_usage_1stats_UsageStatsBridge_onHistoryDeletedInRange);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id, startTimeMs, endTimeMs);
}

static std::atomic<jmethodID>
    g_org_chromium_chrome_browser_usage_1stats_UsageStatsBridge_onHistoryDeletedForDomains(nullptr);
static void Java_UsageStatsBridge_onHistoryDeletedForDomains(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, const base::android::JavaRef<jobjectArray>& fqdns) {
  jclass clazz = org_chromium_chrome_browser_usage_1stats_UsageStatsBridge_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_chrome_browser_usage_1stats_UsageStatsBridge_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "onHistoryDeletedForDomains",
          "([Ljava/lang/String;)V",
          &g_org_chromium_chrome_browser_usage_1stats_UsageStatsBridge_onHistoryDeletedForDomains);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id, fqdns.obj());
}

}  // namespace usage_stats

#endif  // org_chromium_chrome_browser_usage_stats_UsageStatsBridge_JNI
