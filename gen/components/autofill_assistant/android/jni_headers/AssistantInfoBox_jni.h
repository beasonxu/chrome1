// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/components/autofill_assistant/infobox/AssistantInfoBox

#ifndef org_chromium_components_autofill_assistant_infobox_AssistantInfoBox_JNI
#define org_chromium_components_autofill_assistant_infobox_AssistantInfoBox_JNI

#include <jni.h>

#include "../../../../../../../base/android/jni_generator/jni_generator_helper.h"


// Step 1: Forward declarations.

JNI_REGISTRATION_EXPORT extern const char
    kClassPath_org_chromium_components_autofill_1assistant_infobox_AssistantInfoBox[];
const char kClassPath_org_chromium_components_autofill_1assistant_infobox_AssistantInfoBox[] =
    "org/chromium/components/autofill_assistant/infobox/AssistantInfoBox";
// Leaking this jclass as we cannot use LazyInstance from some threads.
JNI_REGISTRATION_EXPORT std::atomic<jclass>
    g_org_chromium_components_autofill_1assistant_infobox_AssistantInfoBox_clazz(nullptr);
#ifndef org_chromium_components_autofill_1assistant_infobox_AssistantInfoBox_clazz_defined
#define org_chromium_components_autofill_1assistant_infobox_AssistantInfoBox_clazz_defined
inline jclass org_chromium_components_autofill_1assistant_infobox_AssistantInfoBox_clazz(JNIEnv*
    env) {
  return base::android::LazyGetClass(env,
      kClassPath_org_chromium_components_autofill_1assistant_infobox_AssistantInfoBox,
      "autofill_assistant",
      &g_org_chromium_components_autofill_1assistant_infobox_AssistantInfoBox_clazz);
}
#endif


// Step 2: Constants (optional).


// Step 3: Method stubs.
namespace autofill_assistant {


static std::atomic<jmethodID>
    g_org_chromium_components_autofill_1assistant_infobox_AssistantInfoBox_create(nullptr);
static base::android::ScopedJavaLocalRef<jobject> Java_AssistantInfoBox_create(JNIEnv* env, const
    base::android::JavaRef<jobject>& drawable,
    const base::android::JavaRef<jstring>& explanation,
    jboolean useIntrinsicDimensions) {
  jclass clazz = org_chromium_components_autofill_1assistant_infobox_AssistantInfoBox_clazz(env);
  CHECK_CLAZZ(env, clazz,
      org_chromium_components_autofill_1assistant_infobox_AssistantInfoBox_clazz(env), NULL);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_STATIC>(
          env,
          clazz,
          "create",
"(Lorg/chromium/components/autofill_assistant/generic_ui/AssistantDrawable;Ljava/lang/String;Z)Lorg/chromium/components/autofill_assistant/infobox/AssistantInfoBox;",
          &g_org_chromium_components_autofill_1assistant_infobox_AssistantInfoBox_create);

  jobject ret =
      env->CallStaticObjectMethod(clazz,
          call_context.base.method_id, drawable.obj(), explanation.obj(), useIntrinsicDimensions);
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

}  // namespace autofill_assistant

#endif  // org_chromium_components_autofill_assistant_infobox_AssistantInfoBox_JNI
