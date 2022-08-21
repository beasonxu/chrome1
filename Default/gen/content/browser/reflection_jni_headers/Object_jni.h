// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     java/lang/Object

#ifndef java_lang_Object_JNI
#define java_lang_Object_JNI

#include <jni.h>

#include "../../../../../../base/android/jni_generator/jni_generator_helper.h"


// Step 1: Forward declarations.

JNI_REGISTRATION_EXPORT extern const char kClassPath_java_lang_Object[];
const char kClassPath_java_lang_Object[] = "java/lang/Object";
// Leaking this jclass as we cannot use LazyInstance from some threads.
JNI_REGISTRATION_EXPORT std::atomic<jclass> g_java_lang_Object_clazz(nullptr);
#ifndef java_lang_Object_clazz_defined
#define java_lang_Object_clazz_defined
inline jclass java_lang_Object_clazz(JNIEnv* env) {
  return base::android::LazyGetClass(env, kClassPath_java_lang_Object, &g_java_lang_Object_clazz);
}
#endif


// Step 2: Constants (optional).


// Step 3: Method stubs.
namespace JNI_Object {


static std::atomic<jmethodID> g_java_lang_Object_getClass(nullptr);
[[maybe_unused]] static base::android::ScopedJavaLocalRef<jclass> Java_Object_getClass(JNIEnv* env,
    const base::android::JavaRef<jobject>& obj);
static base::android::ScopedJavaLocalRef<jclass> Java_Object_getClass(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  jclass clazz = java_lang_Object_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      java_lang_Object_clazz(env), NULL);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "getClass",
          "()Ljava/lang/Class;",
          &g_java_lang_Object_getClass);

  jclass ret =
      static_cast<jclass>(env->CallObjectMethod(obj.obj(),
          call_context.base.method_id));
  return base::android::ScopedJavaLocalRef<jclass>(env, ret);
}

static std::atomic<jmethodID> g_java_lang_Object_hashCode(nullptr);
[[maybe_unused]] static jint Java_Object_hashCode(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj);
static jint Java_Object_hashCode(JNIEnv* env, const base::android::JavaRef<jobject>& obj) {
  jclass clazz = java_lang_Object_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      java_lang_Object_clazz(env), 0);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "hashCode",
          "()I",
          &g_java_lang_Object_hashCode);

  jint ret =
      env->CallIntMethod(obj.obj(),
          call_context.base.method_id);
  return ret;
}

static std::atomic<jmethodID> g_java_lang_Object_equals(nullptr);
[[maybe_unused]] static jboolean Java_Object_equals(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, const base::android::JavaRef<jobject>& p0);
static jboolean Java_Object_equals(JNIEnv* env, const base::android::JavaRef<jobject>& obj, const
    base::android::JavaRef<jobject>& p0) {
  jclass clazz = java_lang_Object_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      java_lang_Object_clazz(env), false);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "equals",
          "(Ljava/lang/Object;)Z",
          &g_java_lang_Object_equals);

  jboolean ret =
      env->CallBooleanMethod(obj.obj(),
          call_context.base.method_id, p0.obj());
  return ret;
}

static std::atomic<jmethodID> g_java_lang_Object_clone(nullptr);
[[maybe_unused]] static base::android::ScopedJavaLocalRef<jobject> Java_Object_clone(JNIEnv* env,
    const base::android::JavaRef<jobject>& obj);
static base::android::ScopedJavaLocalRef<jobject> Java_Object_clone(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  jclass clazz = java_lang_Object_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      java_lang_Object_clazz(env), NULL);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "clone",
          "()Ljava/lang/Object;",
          &g_java_lang_Object_clone);

  jobject ret =
      env->CallObjectMethod(obj.obj(),
          call_context.base.method_id);
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

static std::atomic<jmethodID> g_java_lang_Object_toString(nullptr);
[[maybe_unused]] static base::android::ScopedJavaLocalRef<jstring> Java_Object_toString(JNIEnv* env,
    const base::android::JavaRef<jobject>& obj);
static base::android::ScopedJavaLocalRef<jstring> Java_Object_toString(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  jclass clazz = java_lang_Object_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      java_lang_Object_clazz(env), NULL);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "toString",
          "()Ljava/lang/String;",
          &g_java_lang_Object_toString);

  jstring ret =
      static_cast<jstring>(env->CallObjectMethod(obj.obj(),
          call_context.base.method_id));
  return base::android::ScopedJavaLocalRef<jstring>(env, ret);
}

static std::atomic<jmethodID> g_java_lang_Object_notify(nullptr);
[[maybe_unused]] static void Java_Object_notify(JNIEnv* env, const base::android::JavaRef<jobject>&
    obj);
static void Java_Object_notify(JNIEnv* env, const base::android::JavaRef<jobject>& obj) {
  jclass clazz = java_lang_Object_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      java_lang_Object_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "notify",
          "()V",
          &g_java_lang_Object_notify);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id);
}

static std::atomic<jmethodID> g_java_lang_Object_notifyAll(nullptr);
[[maybe_unused]] static void Java_Object_notifyAll(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj);
static void Java_Object_notifyAll(JNIEnv* env, const base::android::JavaRef<jobject>& obj) {
  jclass clazz = java_lang_Object_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      java_lang_Object_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "notifyAll",
          "()V",
          &g_java_lang_Object_notifyAll);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id);
}

static std::atomic<jmethodID> g_java_lang_Object_waitV_J(nullptr);
[[maybe_unused]] static void Java_Object_waitV_J(JNIEnv* env, const base::android::JavaRef<jobject>&
    obj, jlong p0);
static void Java_Object_waitV_J(JNIEnv* env, const base::android::JavaRef<jobject>& obj, jlong p0) {
  jclass clazz = java_lang_Object_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      java_lang_Object_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "wait",
          "(J)V",
          &g_java_lang_Object_waitV_J);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id, p0);
}

static std::atomic<jmethodID> g_java_lang_Object_waitV_J_I(nullptr);
[[maybe_unused]] static void Java_Object_waitV_J_I(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, jlong p0,
    JniIntWrapper p1);
static void Java_Object_waitV_J_I(JNIEnv* env, const base::android::JavaRef<jobject>& obj, jlong p0,
    JniIntWrapper p1) {
  jclass clazz = java_lang_Object_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      java_lang_Object_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "wait",
          "(JI)V",
          &g_java_lang_Object_waitV_J_I);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id, p0, as_jint(p1));
}

static std::atomic<jmethodID> g_java_lang_Object_waitV(nullptr);
[[maybe_unused]] static void Java_Object_waitV(JNIEnv* env, const base::android::JavaRef<jobject>&
    obj);
static void Java_Object_waitV(JNIEnv* env, const base::android::JavaRef<jobject>& obj) {
  jclass clazz = java_lang_Object_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      java_lang_Object_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "wait",
          "()V",
          &g_java_lang_Object_waitV);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id);
}

static std::atomic<jmethodID> g_java_lang_Object_finalize(nullptr);
[[maybe_unused]] static void Java_Object_finalize(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj);
static void Java_Object_finalize(JNIEnv* env, const base::android::JavaRef<jobject>& obj) {
  jclass clazz = java_lang_Object_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      java_lang_Object_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "finalize",
          "()V",
          &g_java_lang_Object_finalize);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id);
}

static std::atomic<jmethodID> g_java_lang_Object_Constructor(nullptr);
[[maybe_unused]] static base::android::ScopedJavaLocalRef<jobject> Java_Object_Constructor(JNIEnv*
    env);
static base::android::ScopedJavaLocalRef<jobject> Java_Object_Constructor(JNIEnv* env) {
  jclass clazz = java_lang_Object_clazz(env);
  CHECK_CLAZZ(env, clazz,
      java_lang_Object_clazz(env), NULL);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "<init>",
          "()V",
          &g_java_lang_Object_Constructor);

  jobject ret =
      env->NewObject(clazz,
          call_context.base.method_id);
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

}  // namespace JNI_Object

#endif  // java_lang_Object_JNI
