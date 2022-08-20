// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/components/autofill_assistant/details/AssistantPlaceholdersConfiguration

#ifndef org_chromium_components_autofill_assistant_details_AssistantPlaceholdersConfiguration_JNI
#define org_chromium_components_autofill_assistant_details_AssistantPlaceholdersConfiguration_JNI

#include <jni.h>

#include "../../../../../../../base/android/jni_generator/jni_generator_helper.h"


// Step 1: Forward declarations.

JNI_REGISTRATION_EXPORT extern const char
    kClassPath_org_chromium_components_autofill_1assistant_details_AssistantPlaceholdersConfiguration[];
const char
    kClassPath_org_chromium_components_autofill_1assistant_details_AssistantPlaceholdersConfiguration[]
    = "org/chromium/components/autofill_assistant/details/AssistantPlaceholdersConfiguration";
// Leaking this jclass as we cannot use LazyInstance from some threads.
JNI_REGISTRATION_EXPORT std::atomic<jclass>
    g_org_chromium_components_autofill_1assistant_details_AssistantPlaceholdersConfiguration_clazz(nullptr);
#ifndef org_chromium_components_autofill_1assistant_details_AssistantPlaceholdersConfiguration_clazz_defined
#define org_chromium_components_autofill_1assistant_details_AssistantPlaceholdersConfiguration_clazz_defined
inline jclass
    org_chromium_components_autofill_1assistant_details_AssistantPlaceholdersConfiguration_clazz(JNIEnv*
    env) {
  return base::android::LazyGetClass(env,
      kClassPath_org_chromium_components_autofill_1assistant_details_AssistantPlaceholdersConfiguration,
      "autofill_assistant",
      &g_org_chromium_components_autofill_1assistant_details_AssistantPlaceholdersConfiguration_clazz);
}
#endif


// Step 2: Constants (optional).


// Step 3: Method stubs.
namespace autofill_assistant {


static std::atomic<jmethodID>
    g_org_chromium_components_autofill_1assistant_details_AssistantPlaceholdersConfiguration_Constructor(nullptr);
static base::android::ScopedJavaLocalRef<jobject>
    Java_AssistantPlaceholdersConfiguration_Constructor(JNIEnv* env, jboolean showImagePlaceholder,
    jboolean showTitlePlaceholder,
    jboolean showDescriptionLine1Placeholder,
    jboolean showDescriptionLine2Placeholder,
    jboolean showDescriptionLine3Placeholder) {
  jclass clazz =
      org_chromium_components_autofill_1assistant_details_AssistantPlaceholdersConfiguration_clazz(env);
  CHECK_CLAZZ(env, clazz,
org_chromium_components_autofill_1assistant_details_AssistantPlaceholdersConfiguration_clazz(env),
          NULL);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "<init>",
          "(ZZZZZ)V",
&g_org_chromium_components_autofill_1assistant_details_AssistantPlaceholdersConfiguration_Constructor);

  jobject ret =
      env->NewObject(clazz,
          call_context.base.method_id, showImagePlaceholder, showTitlePlaceholder,
              showDescriptionLine1Placeholder, showDescriptionLine2Placeholder,
              showDescriptionLine3Placeholder);
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

}  // namespace autofill_assistant

#endif  // org_chromium_components_autofill_assistant_details_AssistantPlaceholdersConfiguration_JNI
