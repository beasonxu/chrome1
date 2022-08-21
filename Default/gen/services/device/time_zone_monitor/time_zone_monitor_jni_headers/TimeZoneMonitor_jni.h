// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/device/time_zone_monitor/TimeZoneMonitor

#ifndef org_chromium_device_time_zone_monitor_TimeZoneMonitor_JNI
#define org_chromium_device_time_zone_monitor_TimeZoneMonitor_JNI

#include <jni.h>

#include "../../../../../../../base/android/jni_generator/jni_generator_helper.h"


// Step 1: Forward declarations.

JNI_REGISTRATION_EXPORT extern const char
    kClassPath_org_chromium_device_time_1zone_1monitor_TimeZoneMonitor[];
const char kClassPath_org_chromium_device_time_1zone_1monitor_TimeZoneMonitor[] =
    "org/chromium/device/time_zone_monitor/TimeZoneMonitor";
// Leaking this jclass as we cannot use LazyInstance from some threads.
JNI_REGISTRATION_EXPORT std::atomic<jclass>
    g_org_chromium_device_time_1zone_1monitor_TimeZoneMonitor_clazz(nullptr);
#ifndef org_chromium_device_time_1zone_1monitor_TimeZoneMonitor_clazz_defined
#define org_chromium_device_time_1zone_1monitor_TimeZoneMonitor_clazz_defined
inline jclass org_chromium_device_time_1zone_1monitor_TimeZoneMonitor_clazz(JNIEnv* env) {
  return base::android::LazyGetClass(env,
      kClassPath_org_chromium_device_time_1zone_1monitor_TimeZoneMonitor,
      &g_org_chromium_device_time_1zone_1monitor_TimeZoneMonitor_clazz);
}
#endif


// Step 2: Constants (optional).


// Step 3: Method stubs.
namespace device {

JNI_GENERATOR_EXPORT void Java_J_N_MjxIGcDd(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeTimeZoneMonitorAndroid,
    jobject caller) {
  TimeZoneMonitorAndroid* native =
      reinterpret_cast<TimeZoneMonitorAndroid*>(nativeTimeZoneMonitorAndroid);
  CHECK_NATIVE_PTR(env, jcaller, native, "TimeZoneChangedFromJava");
  return native->TimeZoneChangedFromJava(env, base::android::JavaParamRef<jobject>(env, caller));
}


static std::atomic<jmethodID>
    g_org_chromium_device_time_1zone_1monitor_TimeZoneMonitor_getInstance(nullptr);
static base::android::ScopedJavaLocalRef<jobject> Java_TimeZoneMonitor_getInstance(JNIEnv* env,
    jlong nativePtr) {
  jclass clazz = org_chromium_device_time_1zone_1monitor_TimeZoneMonitor_clazz(env);
  CHECK_CLAZZ(env, clazz,
      org_chromium_device_time_1zone_1monitor_TimeZoneMonitor_clazz(env), NULL);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_STATIC>(
          env,
          clazz,
          "getInstance",
          "(J)Lorg/chromium/device/time_zone_monitor/TimeZoneMonitor;",
          &g_org_chromium_device_time_1zone_1monitor_TimeZoneMonitor_getInstance);

  jobject ret =
      env->CallStaticObjectMethod(clazz,
          call_context.base.method_id, nativePtr);
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

static std::atomic<jmethodID>
    g_org_chromium_device_time_1zone_1monitor_TimeZoneMonitor_stop(nullptr);
static void Java_TimeZoneMonitor_stop(JNIEnv* env, const base::android::JavaRef<jobject>& obj) {
  jclass clazz = org_chromium_device_time_1zone_1monitor_TimeZoneMonitor_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_device_time_1zone_1monitor_TimeZoneMonitor_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "stop",
          "()V",
          &g_org_chromium_device_time_1zone_1monitor_TimeZoneMonitor_stop);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id);
}

}  // namespace device

#endif  // org_chromium_device_time_zone_monitor_TimeZoneMonitor_JNI
