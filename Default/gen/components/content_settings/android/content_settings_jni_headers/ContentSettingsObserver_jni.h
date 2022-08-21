// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/components/content_settings/ContentSettingsObserver

#ifndef org_chromium_components_content_settings_ContentSettingsObserver_JNI
#define org_chromium_components_content_settings_ContentSettingsObserver_JNI

#include <jni.h>

#include "../../../../../../../base/android/jni_generator/jni_generator_helper.h"


// Step 1: Forward declarations.

JNI_REGISTRATION_EXPORT extern const char
    kClassPath_org_chromium_components_content_1settings_ContentSettingsObserver[];
const char kClassPath_org_chromium_components_content_1settings_ContentSettingsObserver[] =
    "org/chromium/components/content_settings/ContentSettingsObserver";
// Leaking this jclass as we cannot use LazyInstance from some threads.
JNI_REGISTRATION_EXPORT std::atomic<jclass>
    g_org_chromium_components_content_1settings_ContentSettingsObserver_clazz(nullptr);
#ifndef org_chromium_components_content_1settings_ContentSettingsObserver_clazz_defined
#define org_chromium_components_content_1settings_ContentSettingsObserver_clazz_defined
inline jclass org_chromium_components_content_1settings_ContentSettingsObserver_clazz(JNIEnv* env) {
  return base::android::LazyGetClass(env,
      kClassPath_org_chromium_components_content_1settings_ContentSettingsObserver,
      &g_org_chromium_components_content_1settings_ContentSettingsObserver_clazz);
}
#endif


// Step 2: Constants (optional).


// Step 3: Method stubs.
namespace content_settings {

static jlong JNI_ContentSettingsObserver_Init(JNIEnv* env, const
    base::android::JavaParamRef<jobject>& caller,
    const base::android::JavaParamRef<jobject>& contextHandle);

JNI_GENERATOR_EXPORT jlong Java_J_N_MhZ_1FOKn(
    JNIEnv* env,
    jclass jcaller,
    jobject caller,
    jobject contextHandle) {
  return JNI_ContentSettingsObserver_Init(env, base::android::JavaParamRef<jobject>(env, caller),
      base::android::JavaParamRef<jobject>(env, contextHandle));
}

JNI_GENERATOR_EXPORT void Java_J_N_MNkT3gPL(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeAndroidObserver,
    jobject caller) {
  AndroidObserver* native = reinterpret_cast<AndroidObserver*>(nativeAndroidObserver);
  CHECK_NATIVE_PTR(env, jcaller, native, "Destroy");
  return native->Destroy(env, base::android::JavaParamRef<jobject>(env, caller));
}


static std::atomic<jmethodID>
    g_org_chromium_components_content_1settings_ContentSettingsObserver_onContentSettingChanged(nullptr);
static void Java_ContentSettingsObserver_onContentSettingChanged(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, const base::android::JavaRef<jstring>& primaryPattern,
    const base::android::JavaRef<jstring>& secondaryPattern,
    JniIntWrapper contentSettingsType) {
  jclass clazz = org_chromium_components_content_1settings_ContentSettingsObserver_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_components_content_1settings_ContentSettingsObserver_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "onContentSettingChanged",
          "(Ljava/lang/String;Ljava/lang/String;I)V",
&g_org_chromium_components_content_1settings_ContentSettingsObserver_onContentSettingChanged);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id, primaryPattern.obj(), secondaryPattern.obj(),
              as_jint(contentSettingsType));
}

}  // namespace content_settings

#endif  // org_chromium_components_content_settings_ContentSettingsObserver_JNI
