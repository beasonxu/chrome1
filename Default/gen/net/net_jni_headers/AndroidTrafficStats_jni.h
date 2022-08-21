// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/net/AndroidTrafficStats

#ifndef org_chromium_net_AndroidTrafficStats_JNI
#define org_chromium_net_AndroidTrafficStats_JNI

#include <jni.h>

#include "../../../../../base/android/jni_generator/jni_generator_helper.h"


// Step 1: Forward declarations.

JNI_REGISTRATION_EXPORT extern const char kClassPath_org_chromium_net_AndroidTrafficStats[];
const char kClassPath_org_chromium_net_AndroidTrafficStats[] =
    "org/chromium/net/AndroidTrafficStats";
// Leaking this jclass as we cannot use LazyInstance from some threads.
JNI_REGISTRATION_EXPORT std::atomic<jclass> g_org_chromium_net_AndroidTrafficStats_clazz(nullptr);
#ifndef org_chromium_net_AndroidTrafficStats_clazz_defined
#define org_chromium_net_AndroidTrafficStats_clazz_defined
inline jclass org_chromium_net_AndroidTrafficStats_clazz(JNIEnv* env) {
  return base::android::LazyGetClass(env, kClassPath_org_chromium_net_AndroidTrafficStats,
      &g_org_chromium_net_AndroidTrafficStats_clazz);
}
#endif


// Step 2: Constants (optional).


// Step 3: Method stubs.
namespace net {
namespace android {
namespace traffic_stats {


static std::atomic<jmethodID> g_org_chromium_net_AndroidTrafficStats_getTotalTxBytes(nullptr);
static jlong Java_AndroidTrafficStats_getTotalTxBytes(JNIEnv* env) {
  jclass clazz = org_chromium_net_AndroidTrafficStats_clazz(env);
  CHECK_CLAZZ(env, clazz,
      org_chromium_net_AndroidTrafficStats_clazz(env), 0);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_STATIC>(
          env,
          clazz,
          "getTotalTxBytes",
          "()J",
          &g_org_chromium_net_AndroidTrafficStats_getTotalTxBytes);

  jlong ret =
      env->CallStaticLongMethod(clazz,
          call_context.base.method_id);
  return ret;
}

static std::atomic<jmethodID> g_org_chromium_net_AndroidTrafficStats_getTotalRxBytes(nullptr);
static jlong Java_AndroidTrafficStats_getTotalRxBytes(JNIEnv* env) {
  jclass clazz = org_chromium_net_AndroidTrafficStats_clazz(env);
  CHECK_CLAZZ(env, clazz,
      org_chromium_net_AndroidTrafficStats_clazz(env), 0);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_STATIC>(
          env,
          clazz,
          "getTotalRxBytes",
          "()J",
          &g_org_chromium_net_AndroidTrafficStats_getTotalRxBytes);

  jlong ret =
      env->CallStaticLongMethod(clazz,
          call_context.base.method_id);
  return ret;
}

static std::atomic<jmethodID> g_org_chromium_net_AndroidTrafficStats_getCurrentUidTxBytes(nullptr);
static jlong Java_AndroidTrafficStats_getCurrentUidTxBytes(JNIEnv* env) {
  jclass clazz = org_chromium_net_AndroidTrafficStats_clazz(env);
  CHECK_CLAZZ(env, clazz,
      org_chromium_net_AndroidTrafficStats_clazz(env), 0);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_STATIC>(
          env,
          clazz,
          "getCurrentUidTxBytes",
          "()J",
          &g_org_chromium_net_AndroidTrafficStats_getCurrentUidTxBytes);

  jlong ret =
      env->CallStaticLongMethod(clazz,
          call_context.base.method_id);
  return ret;
}

static std::atomic<jmethodID> g_org_chromium_net_AndroidTrafficStats_getCurrentUidRxBytes(nullptr);
static jlong Java_AndroidTrafficStats_getCurrentUidRxBytes(JNIEnv* env) {
  jclass clazz = org_chromium_net_AndroidTrafficStats_clazz(env);
  CHECK_CLAZZ(env, clazz,
      org_chromium_net_AndroidTrafficStats_clazz(env), 0);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_STATIC>(
          env,
          clazz,
          "getCurrentUidRxBytes",
          "()J",
          &g_org_chromium_net_AndroidTrafficStats_getCurrentUidRxBytes);

  jlong ret =
      env->CallStaticLongMethod(clazz,
          call_context.base.method_id);
  return ret;
}

}  // namespace traffic_stats
}  // namespace android
}  // namespace net

#endif  // org_chromium_net_AndroidTrafficStats_JNI
