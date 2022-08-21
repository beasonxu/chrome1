// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/components/javascript_dialogs/JavascriptTabModalDialog

#ifndef org_chromium_components_javascript_dialogs_JavascriptTabModalDialog_JNI
#define org_chromium_components_javascript_dialogs_JavascriptTabModalDialog_JNI

#include <jni.h>

#include "../../../../../../../base/android/jni_generator/jni_generator_helper.h"


// Step 1: Forward declarations.

JNI_REGISTRATION_EXPORT extern const char
    kClassPath_org_chromium_components_javascript_1dialogs_JavascriptTabModalDialog[];
const char kClassPath_org_chromium_components_javascript_1dialogs_JavascriptTabModalDialog[] =
    "org/chromium/components/javascript_dialogs/JavascriptTabModalDialog";
// Leaking this jclass as we cannot use LazyInstance from some threads.
JNI_REGISTRATION_EXPORT std::atomic<jclass>
    g_org_chromium_components_javascript_1dialogs_JavascriptTabModalDialog_clazz(nullptr);
#ifndef org_chromium_components_javascript_1dialogs_JavascriptTabModalDialog_clazz_defined
#define org_chromium_components_javascript_1dialogs_JavascriptTabModalDialog_clazz_defined
inline jclass org_chromium_components_javascript_1dialogs_JavascriptTabModalDialog_clazz(JNIEnv*
    env) {
  return base::android::LazyGetClass(env,
      kClassPath_org_chromium_components_javascript_1dialogs_JavascriptTabModalDialog,
      &g_org_chromium_components_javascript_1dialogs_JavascriptTabModalDialog_clazz);
}
#endif


// Step 2: Constants (optional).


// Step 3: Method stubs.
namespace javascript_dialogs {

JNI_GENERATOR_EXPORT void Java_J_N_M9yPJzg8(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeTabModalDialogViewAndroid,
    jobject caller,
    jstring prompt) {
  TabModalDialogViewAndroid* native =
      reinterpret_cast<TabModalDialogViewAndroid*>(nativeTabModalDialogViewAndroid);
  CHECK_NATIVE_PTR(env, jcaller, native, "Accept");
  return native->Accept(env, base::android::JavaParamRef<jobject>(env, caller),
      base::android::JavaParamRef<jstring>(env, prompt));
}

JNI_GENERATOR_EXPORT void Java_J_N_M0YaeICP(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeTabModalDialogViewAndroid,
    jobject caller,
    jboolean buttonClicked) {
  TabModalDialogViewAndroid* native =
      reinterpret_cast<TabModalDialogViewAndroid*>(nativeTabModalDialogViewAndroid);
  CHECK_NATIVE_PTR(env, jcaller, native, "Cancel");
  return native->Cancel(env, base::android::JavaParamRef<jobject>(env, caller), buttonClicked);
}


static std::atomic<jmethodID>
    g_org_chromium_components_javascript_1dialogs_JavascriptTabModalDialog_createAlertDialog(nullptr);
static base::android::ScopedJavaLocalRef<jobject>
    Java_JavascriptTabModalDialog_createAlertDialog(JNIEnv* env, const
    base::android::JavaRef<jstring>& title,
    const base::android::JavaRef<jstring>& message) {
  jclass clazz = org_chromium_components_javascript_1dialogs_JavascriptTabModalDialog_clazz(env);
  CHECK_CLAZZ(env, clazz,
      org_chromium_components_javascript_1dialogs_JavascriptTabModalDialog_clazz(env), NULL);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_STATIC>(
          env,
          clazz,
          "createAlertDialog",
"(Ljava/lang/String;Ljava/lang/String;)Lorg/chromium/components/javascript_dialogs/JavascriptTabModalDialog;",
&g_org_chromium_components_javascript_1dialogs_JavascriptTabModalDialog_createAlertDialog);

  jobject ret =
      env->CallStaticObjectMethod(clazz,
          call_context.base.method_id, title.obj(), message.obj());
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

static std::atomic<jmethodID>
    g_org_chromium_components_javascript_1dialogs_JavascriptTabModalDialog_createConfirmDialog(nullptr);
static base::android::ScopedJavaLocalRef<jobject>
    Java_JavascriptTabModalDialog_createConfirmDialog(JNIEnv* env, const
    base::android::JavaRef<jstring>& title,
    const base::android::JavaRef<jstring>& message) {
  jclass clazz = org_chromium_components_javascript_1dialogs_JavascriptTabModalDialog_clazz(env);
  CHECK_CLAZZ(env, clazz,
      org_chromium_components_javascript_1dialogs_JavascriptTabModalDialog_clazz(env), NULL);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_STATIC>(
          env,
          clazz,
          "createConfirmDialog",
"(Ljava/lang/String;Ljava/lang/String;)Lorg/chromium/components/javascript_dialogs/JavascriptTabModalDialog;",
&g_org_chromium_components_javascript_1dialogs_JavascriptTabModalDialog_createConfirmDialog);

  jobject ret =
      env->CallStaticObjectMethod(clazz,
          call_context.base.method_id, title.obj(), message.obj());
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

static std::atomic<jmethodID>
    g_org_chromium_components_javascript_1dialogs_JavascriptTabModalDialog_createPromptDialog(nullptr);
static base::android::ScopedJavaLocalRef<jobject>
    Java_JavascriptTabModalDialog_createPromptDialog(JNIEnv* env, const
    base::android::JavaRef<jstring>& title,
    const base::android::JavaRef<jstring>& message,
    const base::android::JavaRef<jstring>& defaultPromptText) {
  jclass clazz = org_chromium_components_javascript_1dialogs_JavascriptTabModalDialog_clazz(env);
  CHECK_CLAZZ(env, clazz,
      org_chromium_components_javascript_1dialogs_JavascriptTabModalDialog_clazz(env), NULL);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_STATIC>(
          env,
          clazz,
          "createPromptDialog",
"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lorg/chromium/components/javascript_dialogs/JavascriptTabModalDialog;",
&g_org_chromium_components_javascript_1dialogs_JavascriptTabModalDialog_createPromptDialog);

  jobject ret =
      env->CallStaticObjectMethod(clazz,
          call_context.base.method_id, title.obj(), message.obj(), defaultPromptText.obj());
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

static std::atomic<jmethodID>
    g_org_chromium_components_javascript_1dialogs_JavascriptTabModalDialog_showDialog(nullptr);
static void Java_JavascriptTabModalDialog_showDialog(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, const base::android::JavaRef<jobject>& window,
    jlong nativeDialogPointer) {
  jclass clazz = org_chromium_components_javascript_1dialogs_JavascriptTabModalDialog_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_components_javascript_1dialogs_JavascriptTabModalDialog_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "showDialog",
          "(Lorg/chromium/ui/base/WindowAndroid;J)V",
          &g_org_chromium_components_javascript_1dialogs_JavascriptTabModalDialog_showDialog);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id, window.obj(), nativeDialogPointer);
}

static std::atomic<jmethodID>
    g_org_chromium_components_javascript_1dialogs_JavascriptTabModalDialog_getUserInput(nullptr);
static base::android::ScopedJavaLocalRef<jstring> Java_JavascriptTabModalDialog_getUserInput(JNIEnv*
    env, const base::android::JavaRef<jobject>& obj) {
  jclass clazz = org_chromium_components_javascript_1dialogs_JavascriptTabModalDialog_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_components_javascript_1dialogs_JavascriptTabModalDialog_clazz(env), NULL);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "getUserInput",
          "()Ljava/lang/String;",
          &g_org_chromium_components_javascript_1dialogs_JavascriptTabModalDialog_getUserInput);

  jstring ret =
      static_cast<jstring>(env->CallObjectMethod(obj.obj(),
          call_context.base.method_id));
  return base::android::ScopedJavaLocalRef<jstring>(env, ret);
}

static std::atomic<jmethodID>
    g_org_chromium_components_javascript_1dialogs_JavascriptTabModalDialog_dismiss(nullptr);
static void Java_JavascriptTabModalDialog_dismiss(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  jclass clazz = org_chromium_components_javascript_1dialogs_JavascriptTabModalDialog_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_components_javascript_1dialogs_JavascriptTabModalDialog_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "dismiss",
          "()V",
          &g_org_chromium_components_javascript_1dialogs_JavascriptTabModalDialog_dismiss);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id);
}

}  // namespace javascript_dialogs

#endif  // org_chromium_components_javascript_dialogs_JavascriptTabModalDialog_JNI
