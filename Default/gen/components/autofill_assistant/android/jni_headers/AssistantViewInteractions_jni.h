// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/components/autofill_assistant/generic_ui/AssistantViewInteractions

#ifndef org_chromium_components_autofill_assistant_generic_ui_AssistantViewInteractions_JNI
#define org_chromium_components_autofill_assistant_generic_ui_AssistantViewInteractions_JNI

#include <jni.h>

#include "../../../../../../../base/android/jni_generator/jni_generator_helper.h"


// Step 1: Forward declarations.

JNI_REGISTRATION_EXPORT extern const char
    kClassPath_org_chromium_components_autofill_1assistant_generic_1ui_AssistantViewInteractions[];
const char
    kClassPath_org_chromium_components_autofill_1assistant_generic_1ui_AssistantViewInteractions[] =
    "org/chromium/components/autofill_assistant/generic_ui/AssistantViewInteractions";
// Leaking this jclass as we cannot use LazyInstance from some threads.
JNI_REGISTRATION_EXPORT std::atomic<jclass>
    g_org_chromium_components_autofill_1assistant_generic_1ui_AssistantViewInteractions_clazz(nullptr);
#ifndef org_chromium_components_autofill_1assistant_generic_1ui_AssistantViewInteractions_clazz_defined
#define org_chromium_components_autofill_1assistant_generic_1ui_AssistantViewInteractions_clazz_defined
inline jclass
    org_chromium_components_autofill_1assistant_generic_1ui_AssistantViewInteractions_clazz(JNIEnv*
    env) {
  return base::android::LazyGetClass(env,
      kClassPath_org_chromium_components_autofill_1assistant_generic_1ui_AssistantViewInteractions,
      "autofill_assistant",
      &g_org_chromium_components_autofill_1assistant_generic_1ui_AssistantViewInteractions_clazz);
}
#endif


// Step 2: Constants (optional).


// Step 3: Method stubs.
namespace autofill_assistant {


static std::atomic<jmethodID>
    g_org_chromium_components_autofill_1assistant_generic_1ui_AssistantViewInteractions_showListPopup(nullptr);
static void Java_AssistantViewInteractions_showListPopup(JNIEnv* env, const
    base::android::JavaRef<jobject>& context,
    const base::android::JavaRef<jobjectArray>& itemNames,
    const base::android::JavaRef<jintArray>& itemTypes,
    const base::android::JavaRef<jintArray>& selectedItems,
    jboolean multiple,
    const base::android::JavaRef<jstring>& selectedIndicesIdentifier,
    const base::android::JavaRef<jstring>& selectedNamesIdentifier,
    const base::android::JavaRef<jobject>& delegate) {
  jclass clazz =
      org_chromium_components_autofill_1assistant_generic_1ui_AssistantViewInteractions_clazz(env);
  CHECK_CLAZZ(env, clazz,
      org_chromium_components_autofill_1assistant_generic_1ui_AssistantViewInteractions_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_STATIC>(
          env,
          clazz,
          "showListPopup",
"(Landroid/content/Context;[Ljava/lang/String;[I[IZLjava/lang/String;Ljava/lang/String;Lorg/chromium/components/autofill_assistant/generic_ui/AssistantGenericUiDelegate;)V",
&g_org_chromium_components_autofill_1assistant_generic_1ui_AssistantViewInteractions_showListPopup);

     env->CallStaticVoidMethod(clazz,
          call_context.base.method_id, context.obj(), itemNames.obj(), itemTypes.obj(),
              selectedItems.obj(), multiple, selectedIndicesIdentifier.obj(),
              selectedNamesIdentifier.obj(), delegate.obj());
}

static std::atomic<jmethodID>
    g_org_chromium_components_autofill_1assistant_generic_1ui_AssistantViewInteractions_showCalendarPopup(nullptr);
static jboolean Java_AssistantViewInteractions_showCalendarPopup(JNIEnv* env, const
    base::android::JavaRef<jobject>& context,
    const base::android::JavaRef<jobject>& initialDate,
    const base::android::JavaRef<jobject>& minDate,
    const base::android::JavaRef<jobject>& maxDate,
    const base::android::JavaRef<jstring>& outputIdentifier,
    const base::android::JavaRef<jobject>& delegate) {
  jclass clazz =
      org_chromium_components_autofill_1assistant_generic_1ui_AssistantViewInteractions_clazz(env);
  CHECK_CLAZZ(env, clazz,
      org_chromium_components_autofill_1assistant_generic_1ui_AssistantViewInteractions_clazz(env),
          false);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_STATIC>(
          env,
          clazz,
          "showCalendarPopup",
"(Landroid/content/Context;Lorg/chromium/components/autofill_assistant/generic_ui/AssistantValue;Lorg/chromium/components/autofill_assistant/generic_ui/AssistantValue;Lorg/chromium/components/autofill_assistant/generic_ui/AssistantValue;Ljava/lang/String;Lorg/chromium/components/autofill_assistant/generic_ui/AssistantGenericUiDelegate;)Z",
&g_org_chromium_components_autofill_1assistant_generic_1ui_AssistantViewInteractions_showCalendarPopup);

  jboolean ret =
      env->CallStaticBooleanMethod(clazz,
          call_context.base.method_id, context.obj(), initialDate.obj(), minDate.obj(),
              maxDate.obj(), outputIdentifier.obj(), delegate.obj());
  return ret;
}

static std::atomic<jmethodID>
    g_org_chromium_components_autofill_1assistant_generic_1ui_AssistantViewInteractions_setViewText(nullptr);
static jboolean Java_AssistantViewInteractions_setViewText(JNIEnv* env, const
    base::android::JavaRef<jobject>& view,
    const base::android::JavaRef<jstring>& text,
    const base::android::JavaRef<jobject>& delegate) {
  jclass clazz =
      org_chromium_components_autofill_1assistant_generic_1ui_AssistantViewInteractions_clazz(env);
  CHECK_CLAZZ(env, clazz,
      org_chromium_components_autofill_1assistant_generic_1ui_AssistantViewInteractions_clazz(env),
          false);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_STATIC>(
          env,
          clazz,
          "setViewText",
"(Landroid/view/View;Ljava/lang/String;Lorg/chromium/components/autofill_assistant/generic_ui/AssistantGenericUiDelegate;)Z",
&g_org_chromium_components_autofill_1assistant_generic_1ui_AssistantViewInteractions_setViewText);

  jboolean ret =
      env->CallStaticBooleanMethod(clazz,
          call_context.base.method_id, view.obj(), text.obj(), delegate.obj());
  return ret;
}

static std::atomic<jmethodID>
    g_org_chromium_components_autofill_1assistant_generic_1ui_AssistantViewInteractions_setViewVisibility(nullptr);
static void Java_AssistantViewInteractions_setViewVisibility(JNIEnv* env, const
    base::android::JavaRef<jobject>& view,
    const base::android::JavaRef<jobject>& visible) {
  jclass clazz =
      org_chromium_components_autofill_1assistant_generic_1ui_AssistantViewInteractions_clazz(env);
  CHECK_CLAZZ(env, clazz,
      org_chromium_components_autofill_1assistant_generic_1ui_AssistantViewInteractions_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_STATIC>(
          env,
          clazz,
          "setViewVisibility",
"(Landroid/view/View;Lorg/chromium/components/autofill_assistant/generic_ui/AssistantValue;)V",
&g_org_chromium_components_autofill_1assistant_generic_1ui_AssistantViewInteractions_setViewVisibility);

     env->CallStaticVoidMethod(clazz,
          call_context.base.method_id, view.obj(), visible.obj());
}

static std::atomic<jmethodID>
    g_org_chromium_components_autofill_1assistant_generic_1ui_AssistantViewInteractions_setViewEnabled(nullptr);
static void Java_AssistantViewInteractions_setViewEnabled(JNIEnv* env, const
    base::android::JavaRef<jobject>& view,
    const base::android::JavaRef<jobject>& enabled) {
  jclass clazz =
      org_chromium_components_autofill_1assistant_generic_1ui_AssistantViewInteractions_clazz(env);
  CHECK_CLAZZ(env, clazz,
      org_chromium_components_autofill_1assistant_generic_1ui_AssistantViewInteractions_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_STATIC>(
          env,
          clazz,
          "setViewEnabled",
"(Landroid/view/View;Lorg/chromium/components/autofill_assistant/generic_ui/AssistantValue;)V",
&g_org_chromium_components_autofill_1assistant_generic_1ui_AssistantViewInteractions_setViewEnabled);

     env->CallStaticVoidMethod(clazz,
          call_context.base.method_id, view.obj(), enabled.obj());
}

static std::atomic<jmethodID>
    g_org_chromium_components_autofill_1assistant_generic_1ui_AssistantViewInteractions_setToggleButtonChecked(nullptr);
static jboolean Java_AssistantViewInteractions_setToggleButtonChecked(JNIEnv* env, const
    base::android::JavaRef<jobject>& view,
    const base::android::JavaRef<jobject>& checked) {
  jclass clazz =
      org_chromium_components_autofill_1assistant_generic_1ui_AssistantViewInteractions_clazz(env);
  CHECK_CLAZZ(env, clazz,
      org_chromium_components_autofill_1assistant_generic_1ui_AssistantViewInteractions_clazz(env),
          false);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_STATIC>(
          env,
          clazz,
          "setToggleButtonChecked",
"(Landroid/view/View;Lorg/chromium/components/autofill_assistant/generic_ui/AssistantValue;)Z",
&g_org_chromium_components_autofill_1assistant_generic_1ui_AssistantViewInteractions_setToggleButtonChecked);

  jboolean ret =
      env->CallStaticBooleanMethod(clazz,
          call_context.base.method_id, view.obj(), checked.obj());
  return ret;
}

static std::atomic<jmethodID>
    g_org_chromium_components_autofill_1assistant_generic_1ui_AssistantViewInteractions_showGenericPopup(nullptr);
static void Java_AssistantViewInteractions_showGenericPopup(JNIEnv* env, const
    base::android::JavaRef<jobject>& contentView,
    const base::android::JavaRef<jobject>& context,
    const base::android::JavaRef<jobject>& delegate,
    const base::android::JavaRef<jstring>& popupIdentifier) {
  jclass clazz =
      org_chromium_components_autofill_1assistant_generic_1ui_AssistantViewInteractions_clazz(env);
  CHECK_CLAZZ(env, clazz,
      org_chromium_components_autofill_1assistant_generic_1ui_AssistantViewInteractions_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_STATIC>(
          env,
          clazz,
          "showGenericPopup",
"(Landroid/view/View;Landroid/content/Context;Lorg/chromium/components/autofill_assistant/generic_ui/AssistantGenericUiDelegate;Ljava/lang/String;)V",
&g_org_chromium_components_autofill_1assistant_generic_1ui_AssistantViewInteractions_showGenericPopup);

     env->CallStaticVoidMethod(clazz,
          call_context.base.method_id, contentView.obj(), context.obj(), delegate.obj(),
              popupIdentifier.obj());
}

static std::atomic<jmethodID>
    g_org_chromium_components_autofill_1assistant_generic_1ui_AssistantViewInteractions_clearViewContainer(nullptr);
static jboolean Java_AssistantViewInteractions_clearViewContainer(JNIEnv* env, const
    base::android::JavaRef<jobject>& container,
    const base::android::JavaRef<jstring>& viewIdentifier,
    const base::android::JavaRef<jobject>& delegate) {
  jclass clazz =
      org_chromium_components_autofill_1assistant_generic_1ui_AssistantViewInteractions_clazz(env);
  CHECK_CLAZZ(env, clazz,
      org_chromium_components_autofill_1assistant_generic_1ui_AssistantViewInteractions_clazz(env),
          false);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_STATIC>(
          env,
          clazz,
          "clearViewContainer",
"(Landroid/view/View;Ljava/lang/String;Lorg/chromium/components/autofill_assistant/generic_ui/AssistantGenericUiDelegate;)Z",
&g_org_chromium_components_autofill_1assistant_generic_1ui_AssistantViewInteractions_clearViewContainer);

  jboolean ret =
      env->CallStaticBooleanMethod(clazz,
          call_context.base.method_id, container.obj(), viewIdentifier.obj(), delegate.obj());
  return ret;
}

static std::atomic<jmethodID>
    g_org_chromium_components_autofill_1assistant_generic_1ui_AssistantViewInteractions_attachViewToParent(nullptr);
static jboolean Java_AssistantViewInteractions_attachViewToParent(JNIEnv* env, const
    base::android::JavaRef<jobject>& parent,
    const base::android::JavaRef<jobject>& view) {
  jclass clazz =
      org_chromium_components_autofill_1assistant_generic_1ui_AssistantViewInteractions_clazz(env);
  CHECK_CLAZZ(env, clazz,
      org_chromium_components_autofill_1assistant_generic_1ui_AssistantViewInteractions_clazz(env),
          false);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_STATIC>(
          env,
          clazz,
          "attachViewToParent",
          "(Landroid/view/View;Landroid/view/View;)Z",
&g_org_chromium_components_autofill_1assistant_generic_1ui_AssistantViewInteractions_attachViewToParent);

  jboolean ret =
      env->CallStaticBooleanMethod(clazz,
          call_context.base.method_id, parent.obj(), view.obj());
  return ret;
}

}  // namespace autofill_assistant

#endif  // org_chromium_components_autofill_assistant_generic_ui_AssistantViewInteractions_JNI
