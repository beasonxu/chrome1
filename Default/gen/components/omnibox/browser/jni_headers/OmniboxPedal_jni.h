// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/components/omnibox/action/OmniboxPedal

#ifndef org_chromium_components_omnibox_action_OmniboxPedal_JNI
#define org_chromium_components_omnibox_action_OmniboxPedal_JNI

#include <jni.h>

#include "../../../../../../../base/android/jni_generator/jni_generator_helper.h"


// Step 1: Forward declarations.

JNI_REGISTRATION_EXPORT extern const char
    kClassPath_org_chromium_components_omnibox_action_OmniboxPedal[];
const char kClassPath_org_chromium_components_omnibox_action_OmniboxPedal[] =
    "org/chromium/components/omnibox/action/OmniboxPedal";
// Leaking this jclass as we cannot use LazyInstance from some threads.
JNI_REGISTRATION_EXPORT std::atomic<jclass>
    g_org_chromium_components_omnibox_action_OmniboxPedal_clazz(nullptr);
#ifndef org_chromium_components_omnibox_action_OmniboxPedal_clazz_defined
#define org_chromium_components_omnibox_action_OmniboxPedal_clazz_defined
inline jclass org_chromium_components_omnibox_action_OmniboxPedal_clazz(JNIEnv* env) {
  return base::android::LazyGetClass(env,
      kClassPath_org_chromium_components_omnibox_action_OmniboxPedal,
      &g_org_chromium_components_omnibox_action_OmniboxPedal_clazz);
}
#endif


// Step 2: Constants (optional).


// Step 3: Method stubs.

static std::atomic<jmethodID> g_org_chromium_components_omnibox_action_OmniboxPedal_build(nullptr);
static base::android::ScopedJavaLocalRef<jobject> Java_OmniboxPedal_build(JNIEnv* env, JniIntWrapper
    id,
    const base::android::JavaRef<jstring>& hint,
    const base::android::JavaRef<jstring>& suggestionContents,
    const base::android::JavaRef<jstring>& accessibilitySuffix,
    const base::android::JavaRef<jstring>& accessibilityHint,
    const base::android::JavaRef<jobject>& url) {
  jclass clazz = org_chromium_components_omnibox_action_OmniboxPedal_clazz(env);
  CHECK_CLAZZ(env, clazz,
      org_chromium_components_omnibox_action_OmniboxPedal_clazz(env), NULL);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_STATIC>(
          env,
          clazz,
          "build",
"(ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lorg/chromium/url/GURL;)Lorg/chromium/components/omnibox/action/OmniboxPedal;",
          &g_org_chromium_components_omnibox_action_OmniboxPedal_build);

  jobject ret =
      env->CallStaticObjectMethod(clazz,
          call_context.base.method_id, as_jint(id), hint.obj(), suggestionContents.obj(),
              accessibilitySuffix.obj(), accessibilityHint.obj(), url.obj());
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

#endif  // org_chromium_components_omnibox_action_OmniboxPedal_JNI
