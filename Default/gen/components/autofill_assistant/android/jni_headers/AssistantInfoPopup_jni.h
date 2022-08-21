// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/components/autofill_assistant/AssistantInfoPopup

#ifndef org_chromium_components_autofill_assistant_AssistantInfoPopup_JNI
#define org_chromium_components_autofill_assistant_AssistantInfoPopup_JNI

#include <jni.h>

#include "../../../../../../../base/android/jni_generator/jni_generator_helper.h"


// Step 1: Forward declarations.

JNI_REGISTRATION_EXPORT extern const char
    kClassPath_org_chromium_components_autofill_1assistant_AssistantInfoPopup[];
const char kClassPath_org_chromium_components_autofill_1assistant_AssistantInfoPopup[] =
    "org/chromium/components/autofill_assistant/AssistantInfoPopup";
// Leaking this jclass as we cannot use LazyInstance from some threads.
JNI_REGISTRATION_EXPORT std::atomic<jclass>
    g_org_chromium_components_autofill_1assistant_AssistantInfoPopup_clazz(nullptr);
#ifndef org_chromium_components_autofill_1assistant_AssistantInfoPopup_clazz_defined
#define org_chromium_components_autofill_1assistant_AssistantInfoPopup_clazz_defined
inline jclass org_chromium_components_autofill_1assistant_AssistantInfoPopup_clazz(JNIEnv* env) {
  return base::android::LazyGetClass(env,
      kClassPath_org_chromium_components_autofill_1assistant_AssistantInfoPopup,
      "autofill_assistant",
      &g_org_chromium_components_autofill_1assistant_AssistantInfoPopup_clazz);
}
#endif


// Step 2: Constants (optional).


// Step 3: Method stubs.
namespace autofill_assistant {


static std::atomic<jmethodID>
    g_org_chromium_components_autofill_1assistant_AssistantInfoPopup_Constructor(nullptr);
static base::android::ScopedJavaLocalRef<jobject> Java_AssistantInfoPopup_Constructor(JNIEnv* env,
    const base::android::JavaRef<jstring>& title,
    const base::android::JavaRef<jstring>& text,
    const base::android::JavaRef<jobject>& positiveButton,
    const base::android::JavaRef<jobject>& negativeButton,
    const base::android::JavaRef<jobject>& neutralButton) {
  jclass clazz = org_chromium_components_autofill_1assistant_AssistantInfoPopup_clazz(env);
  CHECK_CLAZZ(env, clazz,
      org_chromium_components_autofill_1assistant_AssistantInfoPopup_clazz(env), NULL);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "<init>",
"(Ljava/lang/String;Ljava/lang/String;Lorg/chromium/components/autofill_assistant/AssistantDialogButton;Lorg/chromium/components/autofill_assistant/AssistantDialogButton;Lorg/chromium/components/autofill_assistant/AssistantDialogButton;)V",
          &g_org_chromium_components_autofill_1assistant_AssistantInfoPopup_Constructor);

  jobject ret =
      env->NewObject(clazz,
          call_context.base.method_id, title.obj(), text.obj(), positiveButton.obj(),
              negativeButton.obj(), neutralButton.obj());
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

static std::atomic<jmethodID>
    g_org_chromium_components_autofill_1assistant_AssistantInfoPopup_show(nullptr);
static void Java_AssistantInfoPopup_show(JNIEnv* env, const base::android::JavaRef<jobject>& obj,
    const base::android::JavaRef<jobject>& context) {
  jclass clazz = org_chromium_components_autofill_1assistant_AssistantInfoPopup_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_components_autofill_1assistant_AssistantInfoPopup_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "show",
          "(Landroid/content/Context;)V",
          &g_org_chromium_components_autofill_1assistant_AssistantInfoPopup_show);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id, context.obj());
}

}  // namespace autofill_assistant

#endif  // org_chromium_components_autofill_assistant_AssistantInfoPopup_JNI
