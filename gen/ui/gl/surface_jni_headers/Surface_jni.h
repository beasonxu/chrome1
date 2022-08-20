// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     android/view/Surface

#ifndef android_view_Surface_JNI
#define android_view_Surface_JNI

#include <jni.h>

#include "../../../../../../base/android/jni_generator/jni_generator_helper.h"


// Step 1: Forward declarations.

JNI_REGISTRATION_EXPORT extern const char kClassPath_android_view_Surface[];
const char kClassPath_android_view_Surface[] = "android/view/Surface";
// Leaking this jclass as we cannot use LazyInstance from some threads.
JNI_REGISTRATION_EXPORT std::atomic<jclass> g_android_view_Surface_clazz(nullptr);
#ifndef android_view_Surface_clazz_defined
#define android_view_Surface_clazz_defined
inline jclass android_view_Surface_clazz(JNIEnv* env) {
  return base::android::LazyGetClass(env, kClassPath_android_view_Surface,
      &g_android_view_Surface_clazz);
}
#endif


// Step 2: Constants (optional).

namespace JNI_Surface {

enum Java_Surface_constant_fields {
  CHANGE_FRAME_RATE_ALWAYS = 1,
  CHANGE_FRAME_RATE_ONLY_IF_SEAMLESS = 0,
  FRAME_RATE_COMPATIBILITY_DEFAULT = 0,
  FRAME_RATE_COMPATIBILITY_FIXED_SOURCE = 1,
  ROTATION_0 = 0,
  ROTATION_180 = 2,
  ROTATION_270 = 3,
  ROTATION_90 = 1,
};


}  // namespace JNI_Surface
// Step 3: Method stubs.
namespace JNI_Surface {


static std::atomic<jmethodID> g_android_view_Surface_finalizeV(nullptr);
[[maybe_unused]] static void Java_Surface_finalizeV(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj);
static void Java_Surface_finalizeV(JNIEnv* env, const base::android::JavaRef<jobject>& obj) {
  jclass clazz = android_view_Surface_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      android_view_Surface_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "finalize",
          "()V",
          &g_android_view_Surface_finalizeV);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id);
}

static std::atomic<jmethodID> g_android_view_Surface_releaseV(nullptr);
[[maybe_unused]] static void Java_Surface_releaseV(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj);
static void Java_Surface_releaseV(JNIEnv* env, const base::android::JavaRef<jobject>& obj) {
  jclass clazz = android_view_Surface_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      android_view_Surface_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "release",
          "()V",
          &g_android_view_Surface_releaseV);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id);
}

static std::atomic<jmethodID> g_android_view_Surface_isValidZ(nullptr);
[[maybe_unused]] static jboolean Java_Surface_isValidZ(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj);
static jboolean Java_Surface_isValidZ(JNIEnv* env, const base::android::JavaRef<jobject>& obj) {
  jclass clazz = android_view_Surface_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      android_view_Surface_clazz(env), false);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "isValid",
          "()Z",
          &g_android_view_Surface_isValidZ);

  jboolean ret =
      env->CallBooleanMethod(obj.obj(),
          call_context.base.method_id);
  return ret;
}

static std::atomic<jmethodID> g_android_view_Surface_lockCanvasAGC_AGR(nullptr);
[[maybe_unused]] static base::android::ScopedJavaLocalRef<jobject>
    Java_Surface_lockCanvasAGC_AGR(JNIEnv* env, const base::android::JavaRef<jobject>& obj, const
    base::android::JavaRef<jobject>& p0);
static base::android::ScopedJavaLocalRef<jobject> Java_Surface_lockCanvasAGC_AGR(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, const base::android::JavaRef<jobject>& p0) {
  jclass clazz = android_view_Surface_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      android_view_Surface_clazz(env), NULL);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "lockCanvas",
          "(Landroid/graphics/Rect;)Landroid/graphics/Canvas;",
          &g_android_view_Surface_lockCanvasAGC_AGR);

  jobject ret =
      env->CallObjectMethod(obj.obj(),
          call_context.base.method_id, p0.obj());
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

static std::atomic<jmethodID> g_android_view_Surface_unlockCanvasAndPostV_AGC(nullptr);
[[maybe_unused]] static void Java_Surface_unlockCanvasAndPostV_AGC(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, const base::android::JavaRef<jobject>& p0);
static void Java_Surface_unlockCanvasAndPostV_AGC(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, const base::android::JavaRef<jobject>& p0) {
  jclass clazz = android_view_Surface_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      android_view_Surface_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "unlockCanvasAndPost",
          "(Landroid/graphics/Canvas;)V",
          &g_android_view_Surface_unlockCanvasAndPostV_AGC);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id, p0.obj());
}

static std::atomic<jmethodID> g_android_view_Surface_lockHardwareCanvasAGC(nullptr);
[[maybe_unused]] static base::android::ScopedJavaLocalRef<jobject>
    Java_Surface_lockHardwareCanvasAGC(JNIEnv* env, const base::android::JavaRef<jobject>& obj);
static base::android::ScopedJavaLocalRef<jobject> Java_Surface_lockHardwareCanvasAGC(JNIEnv* env,
    const base::android::JavaRef<jobject>& obj) {
  jclass clazz = android_view_Surface_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      android_view_Surface_clazz(env), NULL);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "lockHardwareCanvas",
          "()Landroid/graphics/Canvas;",
          &g_android_view_Surface_lockHardwareCanvasAGC);

  jobject ret =
      env->CallObjectMethod(obj.obj(),
          call_context.base.method_id);
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

static std::atomic<jmethodID> g_android_view_Surface_unlockCanvasV_AGC(nullptr);
[[maybe_unused]] static void Java_Surface_unlockCanvasV_AGC(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, const base::android::JavaRef<jobject>& p0);
static void Java_Surface_unlockCanvasV_AGC(JNIEnv* env, const base::android::JavaRef<jobject>& obj,
    const base::android::JavaRef<jobject>& p0) {
  jclass clazz = android_view_Surface_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      android_view_Surface_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "unlockCanvas",
          "(Landroid/graphics/Canvas;)V",
          &g_android_view_Surface_unlockCanvasV_AGC);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id, p0.obj());
}

static std::atomic<jmethodID> g_android_view_Surface_describeContentsI(nullptr);
[[maybe_unused]] static jint Java_Surface_describeContentsI(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj);
static jint Java_Surface_describeContentsI(JNIEnv* env, const base::android::JavaRef<jobject>& obj)
    {
  jclass clazz = android_view_Surface_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      android_view_Surface_clazz(env), 0);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "describeContents",
          "()I",
          &g_android_view_Surface_describeContentsI);

  jint ret =
      env->CallIntMethod(obj.obj(),
          call_context.base.method_id);
  return ret;
}

static std::atomic<jmethodID> g_android_view_Surface_readFromParcelV_AOP(nullptr);
[[maybe_unused]] static void Java_Surface_readFromParcelV_AOP(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, const base::android::JavaRef<jobject>& p0);
static void Java_Surface_readFromParcelV_AOP(JNIEnv* env, const base::android::JavaRef<jobject>&
    obj, const base::android::JavaRef<jobject>& p0) {
  jclass clazz = android_view_Surface_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      android_view_Surface_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "readFromParcel",
          "(Landroid/os/Parcel;)V",
          &g_android_view_Surface_readFromParcelV_AOP);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id, p0.obj());
}

static std::atomic<jmethodID> g_android_view_Surface_writeToParcelV_AOP_I(nullptr);
[[maybe_unused]] static void Java_Surface_writeToParcelV_AOP_I(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, const base::android::JavaRef<jobject>& p0,
    JniIntWrapper p1);
static void Java_Surface_writeToParcelV_AOP_I(JNIEnv* env, const base::android::JavaRef<jobject>&
    obj, const base::android::JavaRef<jobject>& p0,
    JniIntWrapper p1) {
  jclass clazz = android_view_Surface_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      android_view_Surface_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "writeToParcel",
          "(Landroid/os/Parcel;I)V",
          &g_android_view_Surface_writeToParcelV_AOP_I);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id, p0.obj(), as_jint(p1));
}

static std::atomic<jmethodID> g_android_view_Surface_toStringJLS(nullptr);
[[maybe_unused]] static base::android::ScopedJavaLocalRef<jstring> Java_Surface_toStringJLS(JNIEnv*
    env, const base::android::JavaRef<jobject>& obj);
static base::android::ScopedJavaLocalRef<jstring> Java_Surface_toStringJLS(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  jclass clazz = android_view_Surface_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      android_view_Surface_clazz(env), NULL);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "toString",
          "()Ljava/lang/String;",
          &g_android_view_Surface_toStringJLS);

  jstring ret =
      static_cast<jstring>(env->CallObjectMethod(obj.obj(),
          call_context.base.method_id));
  return base::android::ScopedJavaLocalRef<jstring>(env, ret);
}

static std::atomic<jmethodID> g_android_view_Surface_setFrameRateV_F_I_I(nullptr);
[[maybe_unused]] static void Java_Surface_setFrameRateV_F_I_I(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, jfloat p0,
    JniIntWrapper p1,
    JniIntWrapper p2);
static void Java_Surface_setFrameRateV_F_I_I(JNIEnv* env, const base::android::JavaRef<jobject>&
    obj, jfloat p0,
    JniIntWrapper p1,
    JniIntWrapper p2) {
  jclass clazz = android_view_Surface_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      android_view_Surface_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "setFrameRate",
          "(FII)V",
          &g_android_view_Surface_setFrameRateV_F_I_I);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id, p0, as_jint(p1), as_jint(p2));
}

static std::atomic<jmethodID> g_android_view_Surface_setFrameRateV_F_I(nullptr);
[[maybe_unused]] static void Java_Surface_setFrameRateV_F_I(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, jfloat p0,
    JniIntWrapper p1);
static void Java_Surface_setFrameRateV_F_I(JNIEnv* env, const base::android::JavaRef<jobject>& obj,
    jfloat p0,
    JniIntWrapper p1) {
  jclass clazz = android_view_Surface_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      android_view_Surface_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "setFrameRate",
          "(FI)V",
          &g_android_view_Surface_setFrameRateV_F_I);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id, p0, as_jint(p1));
}

static std::atomic<jmethodID> g_android_view_Surface_ConstructorAVS_AVSC(nullptr);
[[maybe_unused]] static base::android::ScopedJavaLocalRef<jobject>
    Java_Surface_ConstructorAVS_AVSC(JNIEnv* env, const base::android::JavaRef<jobject>& p0);
static base::android::ScopedJavaLocalRef<jobject> Java_Surface_ConstructorAVS_AVSC(JNIEnv* env,
    const base::android::JavaRef<jobject>& p0) {
  jclass clazz = android_view_Surface_clazz(env);
  CHECK_CLAZZ(env, clazz,
      android_view_Surface_clazz(env), NULL);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "<init>",
          "(Landroid/view/SurfaceControl;)V",
          &g_android_view_Surface_ConstructorAVS_AVSC);

  jobject ret =
      env->NewObject(clazz,
          call_context.base.method_id, p0.obj());
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

static std::atomic<jmethodID> g_android_view_Surface_ConstructorAVS_AGST(nullptr);
[[maybe_unused]] static base::android::ScopedJavaLocalRef<jobject>
    Java_Surface_ConstructorAVS_AGST(JNIEnv* env, const base::android::JavaRef<jobject>& p0);
static base::android::ScopedJavaLocalRef<jobject> Java_Surface_ConstructorAVS_AGST(JNIEnv* env,
    const base::android::JavaRef<jobject>& p0) {
  jclass clazz = android_view_Surface_clazz(env);
  CHECK_CLAZZ(env, clazz,
      android_view_Surface_clazz(env), NULL);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "<init>",
          "(Landroid/graphics/SurfaceTexture;)V",
          &g_android_view_Surface_ConstructorAVS_AGST);

  jobject ret =
      env->NewObject(clazz,
          call_context.base.method_id, p0.obj());
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

}  // namespace JNI_Surface

#endif  // android_view_Surface_JNI
