// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/base/EventLog

#ifndef org_chromium_base_EventLog_JNI
#define org_chromium_base_EventLog_JNI

#include <jni.h>

#include "../../../../../base/android/jni_generator/jni_generator_helper.h"


// Step 1: Forward declarations.

JNI_REGISTRATION_EXPORT extern const char kClassPath_org_chromium_base_EventLog[];
const char kClassPath_org_chromium_base_EventLog[] = "org/chromium/base/EventLog";
// Leaking this jclass as we cannot use LazyInstance from some threads.
JNI_REGISTRATION_EXPORT std::atomic<jclass> g_org_chromium_base_EventLog_clazz(nullptr);
#ifndef org_chromium_base_EventLog_clazz_defined
#define org_chromium_base_EventLog_clazz_defined
inline jclass org_chromium_base_EventLog_clazz(JNIEnv* env) {
  return base::android::LazyGetClass(env, kClassPath_org_chromium_base_EventLog,
      &g_org_chromium_base_EventLog_clazz);
}
#endif


// Step 2: Constants (optional).


// Step 3: Method stubs.
namespace base {
namespace android {


static std::atomic<jmethodID> g_org_chromium_base_EventLog_writeEvent(nullptr);
static void Java_EventLog_writeEvent(JNIEnv* env, JniIntWrapper tag,
    JniIntWrapper value) {
  jclass clazz = org_chromium_base_EventLog_clazz(env);
  CHECK_CLAZZ(env, clazz,
      org_chromium_base_EventLog_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_STATIC>(
          env,
          clazz,
          "writeEvent",
          "(II)V",
          &g_org_chromium_base_EventLog_writeEvent);

     env->CallStaticVoidMethod(clazz,
          call_context.base.method_id, as_jint(tag), as_jint(value));
}

}  // namespace android
}  // namespace base

#endif  // org_chromium_base_EventLog_JNI
