// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/chrome/browser/autofill/AutofillMessageConfirmFlowBridge

#ifndef org_chromium_chrome_browser_autofill_AutofillMessageConfirmFlowBridge_JNI
#define org_chromium_chrome_browser_autofill_AutofillMessageConfirmFlowBridge_JNI

#include <jni.h>

#include "../../../../../../base/android/jni_generator/jni_generator_helper.h"


// Step 1: Forward declarations.

JNI_REGISTRATION_EXPORT extern const char
    kClassPath_org_chromium_chrome_browser_autofill_AutofillMessageConfirmFlowBridge[];
const char kClassPath_org_chromium_chrome_browser_autofill_AutofillMessageConfirmFlowBridge[] =
    "org/chromium/chrome/browser/autofill/AutofillMessageConfirmFlowBridge";
// Leaking this jclass as we cannot use LazyInstance from some threads.
JNI_REGISTRATION_EXPORT std::atomic<jclass>
    g_org_chromium_chrome_browser_autofill_AutofillMessageConfirmFlowBridge_clazz(nullptr);
#ifndef org_chromium_chrome_browser_autofill_AutofillMessageConfirmFlowBridge_clazz_defined
#define org_chromium_chrome_browser_autofill_AutofillMessageConfirmFlowBridge_clazz_defined
inline jclass org_chromium_chrome_browser_autofill_AutofillMessageConfirmFlowBridge_clazz(JNIEnv*
    env) {
  return base::android::LazyGetClass(env,
      kClassPath_org_chromium_chrome_browser_autofill_AutofillMessageConfirmFlowBridge,
      &g_org_chromium_chrome_browser_autofill_AutofillMessageConfirmFlowBridge_clazz);
}
#endif


// Step 2: Constants (optional).


// Step 3: Method stubs.
namespace autofill {

JNI_GENERATOR_EXPORT void Java_J_N_M_12nL5Q3(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeSaveCardMessageConfirmDelegate,
    jstring month,
    jstring year) {
  SaveCardMessageConfirmDelegate* native =
      reinterpret_cast<SaveCardMessageConfirmDelegate*>(nativeSaveCardMessageConfirmDelegate);
  CHECK_NATIVE_PTR(env, jcaller, native, "OnDateConfirmed");
  return native->OnDateConfirmed(env, base::android::JavaParamRef<jstring>(env, month),
      base::android::JavaParamRef<jstring>(env, year));
}

JNI_GENERATOR_EXPORT void Java_J_N_MJf5_1DPQ(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeSaveCardMessageConfirmDelegate,
    jstring name) {
  SaveCardMessageConfirmDelegate* native =
      reinterpret_cast<SaveCardMessageConfirmDelegate*>(nativeSaveCardMessageConfirmDelegate);
  CHECK_NATIVE_PTR(env, jcaller, native, "OnNameConfirmed");
  return native->OnNameConfirmed(env, base::android::JavaParamRef<jstring>(env, name));
}

JNI_GENERATOR_EXPORT void Java_J_N_MvL6c2l9(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeSaveCardMessageConfirmDelegate) {
  SaveCardMessageConfirmDelegate* native =
      reinterpret_cast<SaveCardMessageConfirmDelegate*>(nativeSaveCardMessageConfirmDelegate);
  CHECK_NATIVE_PTR(env, jcaller, native, "OnSaveCardConfirmed");
  return native->OnSaveCardConfirmed(env);
}

JNI_GENERATOR_EXPORT void Java_J_N_Ml1UCNSp(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeSaveCardMessageConfirmDelegate) {
  SaveCardMessageConfirmDelegate* native =
      reinterpret_cast<SaveCardMessageConfirmDelegate*>(nativeSaveCardMessageConfirmDelegate);
  CHECK_NATIVE_PTR(env, jcaller, native, "OnUserDismiss");
  return native->OnUserDismiss(env);
}

JNI_GENERATOR_EXPORT void Java_J_N_M8yo3Hbh(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeSaveCardMessageConfirmDelegate,
    jstring url) {
  SaveCardMessageConfirmDelegate* native =
      reinterpret_cast<SaveCardMessageConfirmDelegate*>(nativeSaveCardMessageConfirmDelegate);
  CHECK_NATIVE_PTR(env, jcaller, native, "OnLinkClicked");
  return native->OnLinkClicked(env, base::android::JavaParamRef<jstring>(env, url));
}

JNI_GENERATOR_EXPORT void Java_J_N_M25jn5gd(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeSaveCardMessageConfirmDelegate) {
  SaveCardMessageConfirmDelegate* native =
      reinterpret_cast<SaveCardMessageConfirmDelegate*>(nativeSaveCardMessageConfirmDelegate);
  CHECK_NATIVE_PTR(env, jcaller, native, "DialogDismissed");
  return native->DialogDismissed(env);
}


static std::atomic<jmethodID>
    g_org_chromium_chrome_browser_autofill_AutofillMessageConfirmFlowBridge_create(nullptr);
static base::android::ScopedJavaLocalRef<jobject>
    Java_AutofillMessageConfirmFlowBridge_create(JNIEnv* env, jlong
    nativeAutofillMessageConfirmDelegate,
    const base::android::JavaRef<jobject>& windowAndroid) {
  jclass clazz = org_chromium_chrome_browser_autofill_AutofillMessageConfirmFlowBridge_clazz(env);
  CHECK_CLAZZ(env, clazz,
      org_chromium_chrome_browser_autofill_AutofillMessageConfirmFlowBridge_clazz(env), NULL);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_STATIC>(
          env,
          clazz,
          "create",
"(JLorg/chromium/ui/base/WindowAndroid;)Lorg/chromium/chrome/browser/autofill/AutofillMessageConfirmFlowBridge;",
          &g_org_chromium_chrome_browser_autofill_AutofillMessageConfirmFlowBridge_create);

  jobject ret =
      env->CallStaticObjectMethod(clazz,
          call_context.base.method_id, nativeAutofillMessageConfirmDelegate, windowAndroid.obj());
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

static std::atomic<jmethodID>
    g_org_chromium_chrome_browser_autofill_AutofillMessageConfirmFlowBridge_fixDate(nullptr);
static void Java_AutofillMessageConfirmFlowBridge_fixDate(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, const base::android::JavaRef<jstring>& title,
    const base::android::JavaRef<jstring>& cardLabel,
    const base::android::JavaRef<jstring>& cardholderAccount,
    const base::android::JavaRef<jstring>& confirmButtonLabel) {
  jclass clazz = org_chromium_chrome_browser_autofill_AutofillMessageConfirmFlowBridge_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_chrome_browser_autofill_AutofillMessageConfirmFlowBridge_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "fixDate",
          "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
          &g_org_chromium_chrome_browser_autofill_AutofillMessageConfirmFlowBridge_fixDate);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id, title.obj(), cardLabel.obj(), cardholderAccount.obj(),
              confirmButtonLabel.obj());
}

static std::atomic<jmethodID>
    g_org_chromium_chrome_browser_autofill_AutofillMessageConfirmFlowBridge_fixName(nullptr);
static void Java_AutofillMessageConfirmFlowBridge_fixName(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, const base::android::JavaRef<jstring>& title,
    const base::android::JavaRef<jstring>& inferredName,
    const base::android::JavaRef<jstring>& cardLabel,
    const base::android::JavaRef<jstring>& cardholderAccount,
    const base::android::JavaRef<jstring>& confirmButtonLabel) {
  jclass clazz = org_chromium_chrome_browser_autofill_AutofillMessageConfirmFlowBridge_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_chrome_browser_autofill_AutofillMessageConfirmFlowBridge_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "fixName",
"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
          &g_org_chromium_chrome_browser_autofill_AutofillMessageConfirmFlowBridge_fixName);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id, title.obj(), inferredName.obj(), cardLabel.obj(),
              cardholderAccount.obj(), confirmButtonLabel.obj());
}

static std::atomic<jmethodID>
    g_org_chromium_chrome_browser_autofill_AutofillMessageConfirmFlowBridge_confirmSaveCard(nullptr);
static void Java_AutofillMessageConfirmFlowBridge_confirmSaveCard(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, const base::android::JavaRef<jstring>& title,
    const base::android::JavaRef<jstring>& cardLabel,
    const base::android::JavaRef<jstring>& cardholderAccount,
    const base::android::JavaRef<jstring>& confirmButtonLabel) {
  jclass clazz = org_chromium_chrome_browser_autofill_AutofillMessageConfirmFlowBridge_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_chrome_browser_autofill_AutofillMessageConfirmFlowBridge_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "confirmSaveCard",
          "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
          &g_org_chromium_chrome_browser_autofill_AutofillMessageConfirmFlowBridge_confirmSaveCard);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id, title.obj(), cardLabel.obj(), cardholderAccount.obj(),
              confirmButtonLabel.obj());
}

static std::atomic<jmethodID>
    g_org_chromium_chrome_browser_autofill_AutofillMessageConfirmFlowBridge_dismiss(nullptr);
static void Java_AutofillMessageConfirmFlowBridge_dismiss(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  jclass clazz = org_chromium_chrome_browser_autofill_AutofillMessageConfirmFlowBridge_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_chrome_browser_autofill_AutofillMessageConfirmFlowBridge_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "dismiss",
          "()V",
          &g_org_chromium_chrome_browser_autofill_AutofillMessageConfirmFlowBridge_dismiss);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id);
}

static std::atomic<jmethodID>
    g_org_chromium_chrome_browser_autofill_AutofillMessageConfirmFlowBridge_nativeBridgeDestroyed(nullptr);
static void Java_AutofillMessageConfirmFlowBridge_nativeBridgeDestroyed(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  jclass clazz = org_chromium_chrome_browser_autofill_AutofillMessageConfirmFlowBridge_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_chrome_browser_autofill_AutofillMessageConfirmFlowBridge_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "nativeBridgeDestroyed",
          "()V",
&g_org_chromium_chrome_browser_autofill_AutofillMessageConfirmFlowBridge_nativeBridgeDestroyed);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id);
}

static std::atomic<jmethodID>
    g_org_chromium_chrome_browser_autofill_AutofillMessageConfirmFlowBridge_addLegalMessageLine(nullptr);
static void Java_AutofillMessageConfirmFlowBridge_addLegalMessageLine(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, const base::android::JavaRef<jstring>& text) {
  jclass clazz = org_chromium_chrome_browser_autofill_AutofillMessageConfirmFlowBridge_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_chrome_browser_autofill_AutofillMessageConfirmFlowBridge_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "addLegalMessageLine",
          "(Ljava/lang/String;)V",
&g_org_chromium_chrome_browser_autofill_AutofillMessageConfirmFlowBridge_addLegalMessageLine);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id, text.obj());
}

static std::atomic<jmethodID>
    g_org_chromium_chrome_browser_autofill_AutofillMessageConfirmFlowBridge_addLinkToLastLegalMessageLine(nullptr);
static void Java_AutofillMessageConfirmFlowBridge_addLinkToLastLegalMessageLine(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, JniIntWrapper start,
    JniIntWrapper end,
    const base::android::JavaRef<jstring>& url) {
  jclass clazz = org_chromium_chrome_browser_autofill_AutofillMessageConfirmFlowBridge_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_chrome_browser_autofill_AutofillMessageConfirmFlowBridge_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "addLinkToLastLegalMessageLine",
          "(IILjava/lang/String;)V",
&g_org_chromium_chrome_browser_autofill_AutofillMessageConfirmFlowBridge_addLinkToLastLegalMessageLine);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id, as_jint(start), as_jint(end), url.obj());
}

}  // namespace autofill

#endif  // org_chromium_chrome_browser_autofill_AutofillMessageConfirmFlowBridge_JNI
