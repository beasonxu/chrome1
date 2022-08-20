// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/components/component_updater/UpdateScheduler

#ifndef org_chromium_components_component_updater_UpdateScheduler_JNI
#define org_chromium_components_component_updater_UpdateScheduler_JNI

#include <jni.h>

#include "../../../../../../../base/android/jni_generator/jni_generator_helper.h"


// Step 1: Forward declarations.

JNI_REGISTRATION_EXPORT extern const char
    kClassPath_org_chromium_components_component_1updater_UpdateScheduler[];
const char kClassPath_org_chromium_components_component_1updater_UpdateScheduler[] =
    "org/chromium/components/component_updater/UpdateScheduler";
// Leaking this jclass as we cannot use LazyInstance from some threads.
JNI_REGISTRATION_EXPORT std::atomic<jclass>
    g_org_chromium_components_component_1updater_UpdateScheduler_clazz(nullptr);
#ifndef org_chromium_components_component_1updater_UpdateScheduler_clazz_defined
#define org_chromium_components_component_1updater_UpdateScheduler_clazz_defined
inline jclass org_chromium_components_component_1updater_UpdateScheduler_clazz(JNIEnv* env) {
  return base::android::LazyGetClass(env,
      kClassPath_org_chromium_components_component_1updater_UpdateScheduler,
      &g_org_chromium_components_component_1updater_UpdateScheduler_clazz);
}
#endif


// Step 2: Constants (optional).


// Step 3: Method stubs.
namespace component_updater {

JNI_GENERATOR_EXPORT void Java_J_N_MILubAN7(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeBackgroundTaskUpdateScheduler,
    jobject caller) {
  BackgroundTaskUpdateScheduler* native =
      reinterpret_cast<BackgroundTaskUpdateScheduler*>(nativeBackgroundTaskUpdateScheduler);
  CHECK_NATIVE_PTR(env, jcaller, native, "OnStartTask");
  return native->OnStartTask(env, base::android::JavaParamRef<jobject>(env, caller));
}

JNI_GENERATOR_EXPORT void Java_J_N_MfjHVxSB(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeBackgroundTaskUpdateScheduler,
    jobject caller) {
  BackgroundTaskUpdateScheduler* native =
      reinterpret_cast<BackgroundTaskUpdateScheduler*>(nativeBackgroundTaskUpdateScheduler);
  CHECK_NATIVE_PTR(env, jcaller, native, "OnStopTask");
  return native->OnStopTask(env, base::android::JavaParamRef<jobject>(env, caller));
}


static std::atomic<jmethodID>
    g_org_chromium_components_component_1updater_UpdateScheduler_getInstance(nullptr);
static base::android::ScopedJavaLocalRef<jobject> Java_UpdateScheduler_getInstance(JNIEnv* env) {
  jclass clazz = org_chromium_components_component_1updater_UpdateScheduler_clazz(env);
  CHECK_CLAZZ(env, clazz,
      org_chromium_components_component_1updater_UpdateScheduler_clazz(env), NULL);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_STATIC>(
          env,
          clazz,
          "getInstance",
          "()Lorg/chromium/components/component_updater/UpdateScheduler;",
          &g_org_chromium_components_component_1updater_UpdateScheduler_getInstance);

  jobject ret =
      env->CallStaticObjectMethod(clazz,
          call_context.base.method_id);
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

static std::atomic<jmethodID>
    g_org_chromium_components_component_1updater_UpdateScheduler_isAvailable(nullptr);
static jboolean Java_UpdateScheduler_isAvailable(JNIEnv* env) {
  jclass clazz = org_chromium_components_component_1updater_UpdateScheduler_clazz(env);
  CHECK_CLAZZ(env, clazz,
      org_chromium_components_component_1updater_UpdateScheduler_clazz(env), false);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_STATIC>(
          env,
          clazz,
          "isAvailable",
          "()Z",
          &g_org_chromium_components_component_1updater_UpdateScheduler_isAvailable);

  jboolean ret =
      env->CallStaticBooleanMethod(clazz,
          call_context.base.method_id);
  return ret;
}

static std::atomic<jmethodID>
    g_org_chromium_components_component_1updater_UpdateScheduler_schedule(nullptr);
static void Java_UpdateScheduler_schedule(JNIEnv* env, const base::android::JavaRef<jobject>& obj,
    jlong initialDelayMs,
    jlong delayMs) {
  jclass clazz = org_chromium_components_component_1updater_UpdateScheduler_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_components_component_1updater_UpdateScheduler_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "schedule",
          "(JJ)V",
          &g_org_chromium_components_component_1updater_UpdateScheduler_schedule);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id, initialDelayMs, delayMs);
}

static std::atomic<jmethodID>
    g_org_chromium_components_component_1updater_UpdateScheduler_finishTask(nullptr);
static void Java_UpdateScheduler_finishTask(JNIEnv* env, const base::android::JavaRef<jobject>& obj,
    jboolean reschedule) {
  jclass clazz = org_chromium_components_component_1updater_UpdateScheduler_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_components_component_1updater_UpdateScheduler_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "finishTask",
          "(Z)V",
          &g_org_chromium_components_component_1updater_UpdateScheduler_finishTask);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id, reschedule);
}

static std::atomic<jmethodID>
    g_org_chromium_components_component_1updater_UpdateScheduler_setNativeScheduler(nullptr);
static void Java_UpdateScheduler_setNativeScheduler(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, jlong nativeScheduler) {
  jclass clazz = org_chromium_components_component_1updater_UpdateScheduler_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_components_component_1updater_UpdateScheduler_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "setNativeScheduler",
          "(J)V",
          &g_org_chromium_components_component_1updater_UpdateScheduler_setNativeScheduler);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id, nativeScheduler);
}

static std::atomic<jmethodID>
    g_org_chromium_components_component_1updater_UpdateScheduler_cancelTask(nullptr);
static void Java_UpdateScheduler_cancelTask(JNIEnv* env, const base::android::JavaRef<jobject>& obj)
    {
  jclass clazz = org_chromium_components_component_1updater_UpdateScheduler_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_components_component_1updater_UpdateScheduler_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "cancelTask",
          "()V",
          &g_org_chromium_components_component_1updater_UpdateScheduler_cancelTask);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id);
}

}  // namespace component_updater

#endif  // org_chromium_components_component_updater_UpdateScheduler_JNI
