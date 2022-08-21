// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/components/autofill_assistant/header/AssistantHeaderModel

#ifndef org_chromium_components_autofill_assistant_header_AssistantHeaderModel_JNI
#define org_chromium_components_autofill_assistant_header_AssistantHeaderModel_JNI

#include <jni.h>

#include "../../../../../../../base/android/jni_generator/jni_generator_helper.h"


// Step 1: Forward declarations.

JNI_REGISTRATION_EXPORT extern const char
    kClassPath_org_chromium_components_autofill_1assistant_header_AssistantHeaderModel[];
const char kClassPath_org_chromium_components_autofill_1assistant_header_AssistantHeaderModel[] =
    "org/chromium/components/autofill_assistant/header/AssistantHeaderModel";
// Leaking this jclass as we cannot use LazyInstance from some threads.
JNI_REGISTRATION_EXPORT std::atomic<jclass>
    g_org_chromium_components_autofill_1assistant_header_AssistantHeaderModel_clazz(nullptr);
#ifndef org_chromium_components_autofill_1assistant_header_AssistantHeaderModel_clazz_defined
#define org_chromium_components_autofill_1assistant_header_AssistantHeaderModel_clazz_defined
inline jclass org_chromium_components_autofill_1assistant_header_AssistantHeaderModel_clazz(JNIEnv*
    env) {
  return base::android::LazyGetClass(env,
      kClassPath_org_chromium_components_autofill_1assistant_header_AssistantHeaderModel,
      "autofill_assistant",
      &g_org_chromium_components_autofill_1assistant_header_AssistantHeaderModel_clazz);
}
#endif


// Step 2: Constants (optional).


// Step 3: Method stubs.
namespace autofill_assistant {


static std::atomic<jmethodID>
    g_org_chromium_components_autofill_1assistant_header_AssistantHeaderModel_setStatusMessage(nullptr);
static void Java_AssistantHeaderModel_setStatusMessage(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, const base::android::JavaRef<jstring>& statusMessage) {
  jclass clazz = org_chromium_components_autofill_1assistant_header_AssistantHeaderModel_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_components_autofill_1assistant_header_AssistantHeaderModel_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "setStatusMessage",
          "(Ljava/lang/String;)V",
&g_org_chromium_components_autofill_1assistant_header_AssistantHeaderModel_setStatusMessage);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id, statusMessage.obj());
}

static std::atomic<jmethodID>
    g_org_chromium_components_autofill_1assistant_header_AssistantHeaderModel_setBubbleMessage(nullptr);
static void Java_AssistantHeaderModel_setBubbleMessage(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, const base::android::JavaRef<jstring>& bubbleMessage) {
  jclass clazz = org_chromium_components_autofill_1assistant_header_AssistantHeaderModel_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_components_autofill_1assistant_header_AssistantHeaderModel_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "setBubbleMessage",
          "(Ljava/lang/String;)V",
&g_org_chromium_components_autofill_1assistant_header_AssistantHeaderModel_setBubbleMessage);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id, bubbleMessage.obj());
}

static std::atomic<jmethodID>
    g_org_chromium_components_autofill_1assistant_header_AssistantHeaderModel_setProfileIconMenuSettingsMessage(nullptr);
static void Java_AssistantHeaderModel_setProfileIconMenuSettingsMessage(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, const base::android::JavaRef<jstring>&
    profileIconMenuSettingsMessage) {
  jclass clazz = org_chromium_components_autofill_1assistant_header_AssistantHeaderModel_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_components_autofill_1assistant_header_AssistantHeaderModel_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "setProfileIconMenuSettingsMessage",
          "(Ljava/lang/String;)V",
&g_org_chromium_components_autofill_1assistant_header_AssistantHeaderModel_setProfileIconMenuSettingsMessage);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id, profileIconMenuSettingsMessage.obj());
}

static std::atomic<jmethodID>
    g_org_chromium_components_autofill_1assistant_header_AssistantHeaderModel_setProfileIconMenuSendFeedbackMessage(nullptr);
static void Java_AssistantHeaderModel_setProfileIconMenuSendFeedbackMessage(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, const base::android::JavaRef<jstring>&
    profileIconMenuSendFeedbackMessage) {
  jclass clazz = org_chromium_components_autofill_1assistant_header_AssistantHeaderModel_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_components_autofill_1assistant_header_AssistantHeaderModel_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "setProfileIconMenuSendFeedbackMessage",
          "(Ljava/lang/String;)V",
&g_org_chromium_components_autofill_1assistant_header_AssistantHeaderModel_setProfileIconMenuSendFeedbackMessage);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id, profileIconMenuSendFeedbackMessage.obj());
}

static std::atomic<jmethodID>
    g_org_chromium_components_autofill_1assistant_header_AssistantHeaderModel_setProgressActiveStep(nullptr);
static void Java_AssistantHeaderModel_setProgressActiveStep(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, JniIntWrapper activeStep) {
  jclass clazz = org_chromium_components_autofill_1assistant_header_AssistantHeaderModel_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_components_autofill_1assistant_header_AssistantHeaderModel_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "setProgressActiveStep",
          "(I)V",
&g_org_chromium_components_autofill_1assistant_header_AssistantHeaderModel_setProgressActiveStep);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id, as_jint(activeStep));
}

static std::atomic<jmethodID>
    g_org_chromium_components_autofill_1assistant_header_AssistantHeaderModel_setProgressBarErrorState(nullptr);
static void Java_AssistantHeaderModel_setProgressBarErrorState(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, jboolean error) {
  jclass clazz = org_chromium_components_autofill_1assistant_header_AssistantHeaderModel_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_components_autofill_1assistant_header_AssistantHeaderModel_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "setProgressBarErrorState",
          "(Z)V",
&g_org_chromium_components_autofill_1assistant_header_AssistantHeaderModel_setProgressBarErrorState);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id, error);
}

static std::atomic<jmethodID>
    g_org_chromium_components_autofill_1assistant_header_AssistantHeaderModel_setProgressVisible(nullptr);
static void Java_AssistantHeaderModel_setProgressVisible(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, jboolean visible) {
  jclass clazz = org_chromium_components_autofill_1assistant_header_AssistantHeaderModel_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_components_autofill_1assistant_header_AssistantHeaderModel_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "setProgressVisible",
          "(Z)V",
&g_org_chromium_components_autofill_1assistant_header_AssistantHeaderModel_setProgressVisible);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id, visible);
}

static std::atomic<jmethodID>
    g_org_chromium_components_autofill_1assistant_header_AssistantHeaderModel_createIconList(nullptr);
static base::android::ScopedJavaLocalRef<jobject> Java_AssistantHeaderModel_createIconList(JNIEnv*
    env) {
  jclass clazz = org_chromium_components_autofill_1assistant_header_AssistantHeaderModel_clazz(env);
  CHECK_CLAZZ(env, clazz,
      org_chromium_components_autofill_1assistant_header_AssistantHeaderModel_clazz(env), NULL);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_STATIC>(
          env,
          clazz,
          "createIconList",
          "()Ljava/util/List;",
&g_org_chromium_components_autofill_1assistant_header_AssistantHeaderModel_createIconList);

  jobject ret =
      env->CallStaticObjectMethod(clazz,
          call_context.base.method_id);
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

static std::atomic<jmethodID>
    g_org_chromium_components_autofill_1assistant_header_AssistantHeaderModel_addStepProgressBarIcon(nullptr);
static void Java_AssistantHeaderModel_addStepProgressBarIcon(JNIEnv* env, const
    base::android::JavaRef<jobject>& icons,
    const base::android::JavaRef<jobject>& icon) {
  jclass clazz = org_chromium_components_autofill_1assistant_header_AssistantHeaderModel_clazz(env);
  CHECK_CLAZZ(env, clazz,
      org_chromium_components_autofill_1assistant_header_AssistantHeaderModel_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_STATIC>(
          env,
          clazz,
          "addStepProgressBarIcon",
"(Ljava/util/List;Lorg/chromium/components/autofill_assistant/generic_ui/AssistantDrawable;)V",
&g_org_chromium_components_autofill_1assistant_header_AssistantHeaderModel_addStepProgressBarIcon);

     env->CallStaticVoidMethod(clazz,
          call_context.base.method_id, icons.obj(), icon.obj());
}

static std::atomic<jmethodID>
    g_org_chromium_components_autofill_1assistant_header_AssistantHeaderModel_setStepProgressBarIcons(nullptr);
static void Java_AssistantHeaderModel_setStepProgressBarIcons(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, const base::android::JavaRef<jobject>& icons) {
  jclass clazz = org_chromium_components_autofill_1assistant_header_AssistantHeaderModel_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_components_autofill_1assistant_header_AssistantHeaderModel_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "setStepProgressBarIcons",
          "(Ljava/util/List;)V",
&g_org_chromium_components_autofill_1assistant_header_AssistantHeaderModel_setStepProgressBarIcons);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id, icons.obj());
}

static std::atomic<jmethodID>
    g_org_chromium_components_autofill_1assistant_header_AssistantHeaderModel_setSpinPoodle(nullptr);
static void Java_AssistantHeaderModel_setSpinPoodle(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, jboolean enabled) {
  jclass clazz = org_chromium_components_autofill_1assistant_header_AssistantHeaderModel_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_components_autofill_1assistant_header_AssistantHeaderModel_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "setSpinPoodle",
          "(Z)V",
          &g_org_chromium_components_autofill_1assistant_header_AssistantHeaderModel_setSpinPoodle);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id, enabled);
}

static std::atomic<jmethodID>
    g_org_chromium_components_autofill_1assistant_header_AssistantHeaderModel_setDelegate(nullptr);
static void Java_AssistantHeaderModel_setDelegate(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, const base::android::JavaRef<jobject>& delegate) {
  jclass clazz = org_chromium_components_autofill_1assistant_header_AssistantHeaderModel_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_components_autofill_1assistant_header_AssistantHeaderModel_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "setDelegate",
          "(Lorg/chromium/components/autofill_assistant/header/AssistantHeaderDelegate;)V",
          &g_org_chromium_components_autofill_1assistant_header_AssistantHeaderModel_setDelegate);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id, delegate.obj());
}

static std::atomic<jmethodID>
    g_org_chromium_components_autofill_1assistant_header_AssistantHeaderModel_setTtsButtonVisible(nullptr);
static void Java_AssistantHeaderModel_setTtsButtonVisible(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, jboolean visible) {
  jclass clazz = org_chromium_components_autofill_1assistant_header_AssistantHeaderModel_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_components_autofill_1assistant_header_AssistantHeaderModel_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "setTtsButtonVisible",
          "(Z)V",
&g_org_chromium_components_autofill_1assistant_header_AssistantHeaderModel_setTtsButtonVisible);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id, visible);
}

static std::atomic<jmethodID>
    g_org_chromium_components_autofill_1assistant_header_AssistantHeaderModel_setTtsButtonState(nullptr);
static void Java_AssistantHeaderModel_setTtsButtonState(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, JniIntWrapper state) {
  jclass clazz = org_chromium_components_autofill_1assistant_header_AssistantHeaderModel_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_components_autofill_1assistant_header_AssistantHeaderModel_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "setTtsButtonState",
          "(I)V",
&g_org_chromium_components_autofill_1assistant_header_AssistantHeaderModel_setTtsButtonState);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id, as_jint(state));
}

static std::atomic<jmethodID>
    g_org_chromium_components_autofill_1assistant_header_AssistantHeaderModel_setDisableAnimations(nullptr);
static void Java_AssistantHeaderModel_setDisableAnimations(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, jboolean disableAnimations) {
  jclass clazz = org_chromium_components_autofill_1assistant_header_AssistantHeaderModel_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_components_autofill_1assistant_header_AssistantHeaderModel_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "setDisableAnimations",
          "(Z)V",
&g_org_chromium_components_autofill_1assistant_header_AssistantHeaderModel_setDisableAnimations);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id, disableAnimations);
}

static std::atomic<jmethodID>
    g_org_chromium_components_autofill_1assistant_header_AssistantHeaderModel_setChips(nullptr);
static void Java_AssistantHeaderModel_setChips(JNIEnv* env, const base::android::JavaRef<jobject>&
    obj, const base::android::JavaRef<jobject>& chips) {
  jclass clazz = org_chromium_components_autofill_1assistant_header_AssistantHeaderModel_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_components_autofill_1assistant_header_AssistantHeaderModel_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "setChips",
          "(Ljava/util/List;)V",
          &g_org_chromium_components_autofill_1assistant_header_AssistantHeaderModel_setChips);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id, chips.obj());
}

}  // namespace autofill_assistant

#endif  // org_chromium_components_autofill_assistant_header_AssistantHeaderModel_JNI
