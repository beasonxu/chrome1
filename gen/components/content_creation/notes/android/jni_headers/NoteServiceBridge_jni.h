// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/components/content_creation/notes/bridges/NoteServiceBridge

#ifndef org_chromium_components_content_creation_notes_bridges_NoteServiceBridge_JNI
#define org_chromium_components_content_creation_notes_bridges_NoteServiceBridge_JNI

#include <jni.h>

#include "../../../../../../../../base/android/jni_generator/jni_generator_helper.h"


// Step 1: Forward declarations.

JNI_REGISTRATION_EXPORT extern const char
    kClassPath_org_chromium_components_content_1creation_notes_bridges_NoteServiceBridge[];
const char kClassPath_org_chromium_components_content_1creation_notes_bridges_NoteServiceBridge[] =
    "org/chromium/components/content_creation/notes/bridges/NoteServiceBridge";
// Leaking this jclass as we cannot use LazyInstance from some threads.
JNI_REGISTRATION_EXPORT std::atomic<jclass>
    g_org_chromium_components_content_1creation_notes_bridges_NoteServiceBridge_clazz(nullptr);
#ifndef org_chromium_components_content_1creation_notes_bridges_NoteServiceBridge_clazz_defined
#define org_chromium_components_content_1creation_notes_bridges_NoteServiceBridge_clazz_defined
inline jclass
    org_chromium_components_content_1creation_notes_bridges_NoteServiceBridge_clazz(JNIEnv* env) {
  return base::android::LazyGetClass(env,
      kClassPath_org_chromium_components_content_1creation_notes_bridges_NoteServiceBridge,
      &g_org_chromium_components_content_1creation_notes_bridges_NoteServiceBridge_clazz);
}
#endif


// Step 2: Constants (optional).


// Step 3: Method stubs.
namespace content_creation {

JNI_GENERATOR_EXPORT void Java_J_N_M9J_1OLxe(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeNoteServiceBridge,
    jobject caller,
    jobject callback) {
  NoteServiceBridge* native = reinterpret_cast<NoteServiceBridge*>(nativeNoteServiceBridge);
  CHECK_NATIVE_PTR(env, jcaller, native, "GetTemplates");
  return native->GetTemplates(env, base::android::JavaParamRef<jobject>(env, caller),
      base::android::JavaParamRef<jobject>(env, callback));
}

JNI_GENERATOR_EXPORT jboolean Java_J_N_MzmQA0Xo(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeNoteServiceBridge,
    jobject caller) {
  NoteServiceBridge* native = reinterpret_cast<NoteServiceBridge*>(nativeNoteServiceBridge);
  CHECK_NATIVE_PTR(env, jcaller, native, "IsPublishAvailable", false);
  return native->IsPublishAvailable(env, base::android::JavaParamRef<jobject>(env, caller));
}

JNI_GENERATOR_EXPORT void Java_J_N_MUr_00024U1LW(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeNoteServiceBridge,
    jobject caller,
    jstring selectedText,
    jstring shareUrl,
    jobject callback) {
  NoteServiceBridge* native = reinterpret_cast<NoteServiceBridge*>(nativeNoteServiceBridge);
  CHECK_NATIVE_PTR(env, jcaller, native, "PublishNote");
  return native->PublishNote(env, base::android::JavaParamRef<jobject>(env, caller),
      base::android::JavaParamRef<jstring>(env, selectedText),
      base::android::JavaParamRef<jstring>(env, shareUrl), base::android::JavaParamRef<jobject>(env,
      callback));
}


static std::atomic<jmethodID>
    g_org_chromium_components_content_1creation_notes_bridges_NoteServiceBridge_create(nullptr);
static base::android::ScopedJavaLocalRef<jobject> Java_NoteServiceBridge_create(JNIEnv* env, jlong
    nativePtr) {
  jclass clazz =
      org_chromium_components_content_1creation_notes_bridges_NoteServiceBridge_clazz(env);
  CHECK_CLAZZ(env, clazz,
      org_chromium_components_content_1creation_notes_bridges_NoteServiceBridge_clazz(env), NULL);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_STATIC>(
          env,
          clazz,
          "create",
          "(J)Lorg/chromium/components/content_creation/notes/bridges/NoteServiceBridge;",
          &g_org_chromium_components_content_1creation_notes_bridges_NoteServiceBridge_create);

  jobject ret =
      env->CallStaticObjectMethod(clazz,
          call_context.base.method_id, nativePtr);
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

static std::atomic<jmethodID>
    g_org_chromium_components_content_1creation_notes_bridges_NoteServiceBridge_clearNativePtr(nullptr);
static void Java_NoteServiceBridge_clearNativePtr(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  jclass clazz =
      org_chromium_components_content_1creation_notes_bridges_NoteServiceBridge_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_components_content_1creation_notes_bridges_NoteServiceBridge_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "clearNativePtr",
          "()V",
&g_org_chromium_components_content_1creation_notes_bridges_NoteServiceBridge_clearNativePtr);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id);
}

}  // namespace content_creation

#endif  // org_chromium_components_content_creation_notes_bridges_NoteServiceBridge_JNI
