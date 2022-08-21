// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/content/browser/input/TextSuggestionHost

#ifndef org_chromium_content_browser_input_TextSuggestionHost_JNI
#define org_chromium_content_browser_input_TextSuggestionHost_JNI

#include <jni.h>

#include "../../../../../../../base/android/jni_generator/jni_generator_helper.h"


// Step 1: Forward declarations.

JNI_REGISTRATION_EXPORT extern const char
    kClassPath_org_chromium_content_browser_input_TextSuggestionHost[];
const char kClassPath_org_chromium_content_browser_input_TextSuggestionHost[] =
    "org/chromium/content/browser/input/TextSuggestionHost";
// Leaking this jclass as we cannot use LazyInstance from some threads.
JNI_REGISTRATION_EXPORT std::atomic<jclass>
    g_org_chromium_content_browser_input_TextSuggestionHost_clazz(nullptr);
#ifndef org_chromium_content_browser_input_TextSuggestionHost_clazz_defined
#define org_chromium_content_browser_input_TextSuggestionHost_clazz_defined
inline jclass org_chromium_content_browser_input_TextSuggestionHost_clazz(JNIEnv* env) {
  return base::android::LazyGetClass(env,
      kClassPath_org_chromium_content_browser_input_TextSuggestionHost,
      &g_org_chromium_content_browser_input_TextSuggestionHost_clazz);
}
#endif


// Step 2: Constants (optional).


// Step 3: Method stubs.
namespace content {

JNI_GENERATOR_EXPORT void Java_J_N_M7RnYR2r(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeTextSuggestionHostAndroid,
    jobject caller,
    jstring suggestion) {
  TextSuggestionHostAndroid* native =
      reinterpret_cast<TextSuggestionHostAndroid*>(nativeTextSuggestionHostAndroid);
  CHECK_NATIVE_PTR(env, jcaller, native, "ApplySpellCheckSuggestion");
  return native->ApplySpellCheckSuggestion(env, base::android::JavaParamRef<jobject>(env, caller),
      base::android::JavaParamRef<jstring>(env, suggestion));
}

JNI_GENERATOR_EXPORT void Java_J_N_MIADbBhq(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeTextSuggestionHostAndroid,
    jobject caller,
    jint markerTag,
    jint suggestionIndex) {
  TextSuggestionHostAndroid* native =
      reinterpret_cast<TextSuggestionHostAndroid*>(nativeTextSuggestionHostAndroid);
  CHECK_NATIVE_PTR(env, jcaller, native, "ApplyTextSuggestion");
  return native->ApplyTextSuggestion(env, base::android::JavaParamRef<jobject>(env, caller),
      markerTag, suggestionIndex);
}

JNI_GENERATOR_EXPORT void Java_J_N_MCBTtv2g(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeTextSuggestionHostAndroid,
    jobject caller) {
  TextSuggestionHostAndroid* native =
      reinterpret_cast<TextSuggestionHostAndroid*>(nativeTextSuggestionHostAndroid);
  CHECK_NATIVE_PTR(env, jcaller, native, "DeleteActiveSuggestionRange");
  return native->DeleteActiveSuggestionRange(env, base::android::JavaParamRef<jobject>(env,
      caller));
}

JNI_GENERATOR_EXPORT void Java_J_N_MpJ8AQhr(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeTextSuggestionHostAndroid,
    jobject caller,
    jstring word) {
  TextSuggestionHostAndroid* native =
      reinterpret_cast<TextSuggestionHostAndroid*>(nativeTextSuggestionHostAndroid);
  CHECK_NATIVE_PTR(env, jcaller, native, "OnNewWordAddedToDictionary");
  return native->OnNewWordAddedToDictionary(env, base::android::JavaParamRef<jobject>(env, caller),
      base::android::JavaParamRef<jstring>(env, word));
}

JNI_GENERATOR_EXPORT void Java_J_N_MnvYa0QF(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeTextSuggestionHostAndroid,
    jobject caller) {
  TextSuggestionHostAndroid* native =
      reinterpret_cast<TextSuggestionHostAndroid*>(nativeTextSuggestionHostAndroid);
  CHECK_NATIVE_PTR(env, jcaller, native, "OnSuggestionMenuClosed");
  return native->OnSuggestionMenuClosed(env, base::android::JavaParamRef<jobject>(env, caller));
}


static std::atomic<jmethodID>
    g_org_chromium_content_browser_input_TextSuggestionHost_create(nullptr);
static base::android::ScopedJavaLocalRef<jobject> Java_TextSuggestionHost_create(JNIEnv* env, const
    base::android::JavaRef<jobject>& webContents,
    jlong nativePtr) {
  jclass clazz = org_chromium_content_browser_input_TextSuggestionHost_clazz(env);
  CHECK_CLAZZ(env, clazz,
      org_chromium_content_browser_input_TextSuggestionHost_clazz(env), NULL);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_STATIC>(
          env,
          clazz,
          "create",
"(Lorg/chromium/content_public/browser/WebContents;J)Lorg/chromium/content/browser/input/TextSuggestionHost;",
          &g_org_chromium_content_browser_input_TextSuggestionHost_create);

  jobject ret =
      env->CallStaticObjectMethod(clazz,
          call_context.base.method_id, webContents.obj(), nativePtr);
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

static std::atomic<jmethodID>
    g_org_chromium_content_browser_input_TextSuggestionHost_showSpellCheckSuggestionMenu(nullptr);
static void Java_TextSuggestionHost_showSpellCheckSuggestionMenu(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, jdouble caretXPx,
    jdouble caretYPx,
    const base::android::JavaRef<jstring>& markedText,
    const base::android::JavaRef<jobjectArray>& suggestions) {
  jclass clazz = org_chromium_content_browser_input_TextSuggestionHost_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_content_browser_input_TextSuggestionHost_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "showSpellCheckSuggestionMenu",
          "(DDLjava/lang/String;[Ljava/lang/String;)V",
          &g_org_chromium_content_browser_input_TextSuggestionHost_showSpellCheckSuggestionMenu);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id, caretXPx, caretYPx, markedText.obj(), suggestions.obj());
}

static std::atomic<jmethodID>
    g_org_chromium_content_browser_input_TextSuggestionHost_showTextSuggestionMenu(nullptr);
static void Java_TextSuggestionHost_showTextSuggestionMenu(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, jdouble caretXPx,
    jdouble caretYPx,
    const base::android::JavaRef<jstring>& markedText,
    const base::android::JavaRef<jobjectArray>& suggestions) {
  jclass clazz = org_chromium_content_browser_input_TextSuggestionHost_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_content_browser_input_TextSuggestionHost_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "showTextSuggestionMenu",
          "(DDLjava/lang/String;[Lorg/chromium/content/browser/input/SuggestionInfo;)V",
          &g_org_chromium_content_browser_input_TextSuggestionHost_showTextSuggestionMenu);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id, caretXPx, caretYPx, markedText.obj(), suggestions.obj());
}

static std::atomic<jmethodID>
    g_org_chromium_content_browser_input_TextSuggestionHost_hidePopups(nullptr);
static void Java_TextSuggestionHost_hidePopups(JNIEnv* env, const base::android::JavaRef<jobject>&
    obj) {
  jclass clazz = org_chromium_content_browser_input_TextSuggestionHost_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_content_browser_input_TextSuggestionHost_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "hidePopups",
          "()V",
          &g_org_chromium_content_browser_input_TextSuggestionHost_hidePopups);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id);
}

static std::atomic<jmethodID>
    g_org_chromium_content_browser_input_TextSuggestionHost_onNativeDestroyed(nullptr);
static void Java_TextSuggestionHost_onNativeDestroyed(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  jclass clazz = org_chromium_content_browser_input_TextSuggestionHost_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_content_browser_input_TextSuggestionHost_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "onNativeDestroyed",
          "()V",
          &g_org_chromium_content_browser_input_TextSuggestionHost_onNativeDestroyed);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id);
}

}  // namespace content

#endif  // org_chromium_content_browser_input_TextSuggestionHost_JNI
