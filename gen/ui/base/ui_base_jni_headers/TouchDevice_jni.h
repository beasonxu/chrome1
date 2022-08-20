// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/ui/base/TouchDevice

#ifndef org_chromium_ui_base_TouchDevice_JNI
#define org_chromium_ui_base_TouchDevice_JNI

#include <jni.h>

#include "../../../../../../base/android/jni_generator/jni_generator_helper.h"


// Step 1: Forward declarations.

JNI_REGISTRATION_EXPORT extern const char kClassPath_org_chromium_ui_base_TouchDevice[];
const char kClassPath_org_chromium_ui_base_TouchDevice[] = "org/chromium/ui/base/TouchDevice";
// Leaking this jclass as we cannot use LazyInstance from some threads.
JNI_REGISTRATION_EXPORT std::atomic<jclass> g_org_chromium_ui_base_TouchDevice_clazz(nullptr);
#ifndef org_chromium_ui_base_TouchDevice_clazz_defined
#define org_chromium_ui_base_TouchDevice_clazz_defined
inline jclass org_chromium_ui_base_TouchDevice_clazz(JNIEnv* env) {
  return base::android::LazyGetClass(env, kClassPath_org_chromium_ui_base_TouchDevice,
      &g_org_chromium_ui_base_TouchDevice_clazz);
}
#endif


// Step 2: Constants (optional).


// Step 3: Method stubs.
namespace ui {


static std::atomic<jmethodID> g_org_chromium_ui_base_TouchDevice_maxTouchPoints(nullptr);
static jint Java_TouchDevice_maxTouchPoints(JNIEnv* env) {
  jclass clazz = org_chromium_ui_base_TouchDevice_clazz(env);
  CHECK_CLAZZ(env, clazz,
      org_chromium_ui_base_TouchDevice_clazz(env), 0);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_STATIC>(
          env,
          clazz,
          "maxTouchPoints",
          "()I",
          &g_org_chromium_ui_base_TouchDevice_maxTouchPoints);

  jint ret =
      env->CallStaticIntMethod(clazz,
          call_context.base.method_id);
  return ret;
}

static std::atomic<jmethodID>
    g_org_chromium_ui_base_TouchDevice_availablePointerAndHoverTypes(nullptr);
static base::android::ScopedJavaLocalRef<jintArray>
    Java_TouchDevice_availablePointerAndHoverTypes(JNIEnv* env) {
  jclass clazz = org_chromium_ui_base_TouchDevice_clazz(env);
  CHECK_CLAZZ(env, clazz,
      org_chromium_ui_base_TouchDevice_clazz(env), NULL);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_STATIC>(
          env,
          clazz,
          "availablePointerAndHoverTypes",
          "()[I",
          &g_org_chromium_ui_base_TouchDevice_availablePointerAndHoverTypes);

  jintArray ret =
      static_cast<jintArray>(env->CallStaticObjectMethod(clazz,
          call_context.base.method_id));
  return base::android::ScopedJavaLocalRef<jintArray>(env, ret);
}

}  // namespace ui

#endif  // org_chromium_ui_base_TouchDevice_JNI
