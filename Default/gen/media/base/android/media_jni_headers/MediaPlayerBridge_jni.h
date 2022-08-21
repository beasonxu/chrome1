// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/media/MediaPlayerBridge

#ifndef org_chromium_media_MediaPlayerBridge_JNI
#define org_chromium_media_MediaPlayerBridge_JNI

#include <jni.h>

#include "../../../../../../../base/android/jni_generator/jni_generator_helper.h"


// Step 1: Forward declarations.

JNI_REGISTRATION_EXPORT extern const char kClassPath_org_chromium_media_MediaPlayerBridge[];
const char kClassPath_org_chromium_media_MediaPlayerBridge[] =
    "org/chromium/media/MediaPlayerBridge";

JNI_REGISTRATION_EXPORT extern const char
    kClassPath_org_chromium_media_MediaPlayerBridge_00024AllowedOperations[];
const char kClassPath_org_chromium_media_MediaPlayerBridge_00024AllowedOperations[] =
    "org/chromium/media/MediaPlayerBridge$AllowedOperations";
// Leaking this jclass as we cannot use LazyInstance from some threads.
JNI_REGISTRATION_EXPORT std::atomic<jclass> g_org_chromium_media_MediaPlayerBridge_clazz(nullptr);
#ifndef org_chromium_media_MediaPlayerBridge_clazz_defined
#define org_chromium_media_MediaPlayerBridge_clazz_defined
inline jclass org_chromium_media_MediaPlayerBridge_clazz(JNIEnv* env) {
  return base::android::LazyGetClass(env, kClassPath_org_chromium_media_MediaPlayerBridge,
      &g_org_chromium_media_MediaPlayerBridge_clazz);
}
#endif
// Leaking this jclass as we cannot use LazyInstance from some threads.
JNI_REGISTRATION_EXPORT std::atomic<jclass>
    g_org_chromium_media_MediaPlayerBridge_00024AllowedOperations_clazz(nullptr);
#ifndef org_chromium_media_MediaPlayerBridge_00024AllowedOperations_clazz_defined
#define org_chromium_media_MediaPlayerBridge_00024AllowedOperations_clazz_defined
inline jclass org_chromium_media_MediaPlayerBridge_00024AllowedOperations_clazz(JNIEnv* env) {
  return base::android::LazyGetClass(env,
      kClassPath_org_chromium_media_MediaPlayerBridge_00024AllowedOperations,
      &g_org_chromium_media_MediaPlayerBridge_00024AllowedOperations_clazz);
}
#endif


// Step 2: Constants (optional).


// Step 3: Method stubs.
namespace media {

JNI_GENERATOR_EXPORT void Java_J_N_Mo4Rd8TE(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeMediaPlayerBridge,
    jobject caller,
    jboolean success) {
  MediaPlayerBridge* native = reinterpret_cast<MediaPlayerBridge*>(nativeMediaPlayerBridge);
  CHECK_NATIVE_PTR(env, jcaller, native, "OnDidSetDataUriDataSource");
  return native->OnDidSetDataUriDataSource(env, base::android::JavaParamRef<jobject>(env, caller),
      success);
}


static std::atomic<jmethodID> g_org_chromium_media_MediaPlayerBridge_create(nullptr);
static base::android::ScopedJavaLocalRef<jobject> Java_MediaPlayerBridge_create(JNIEnv* env, jlong
    nativeMediaPlayerBridge) {
  jclass clazz = org_chromium_media_MediaPlayerBridge_clazz(env);
  CHECK_CLAZZ(env, clazz,
      org_chromium_media_MediaPlayerBridge_clazz(env), NULL);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_STATIC>(
          env,
          clazz,
          "create",
          "(J)Lorg/chromium/media/MediaPlayerBridge;",
          &g_org_chromium_media_MediaPlayerBridge_create);

  jobject ret =
      env->CallStaticObjectMethod(clazz,
          call_context.base.method_id, nativeMediaPlayerBridge);
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

static std::atomic<jmethodID> g_org_chromium_media_MediaPlayerBridge_destroy(nullptr);
static void Java_MediaPlayerBridge_destroy(JNIEnv* env, const base::android::JavaRef<jobject>& obj)
    {
  jclass clazz = org_chromium_media_MediaPlayerBridge_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_media_MediaPlayerBridge_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "destroy",
          "()V",
          &g_org_chromium_media_MediaPlayerBridge_destroy);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id);
}

static std::atomic<jmethodID> g_org_chromium_media_MediaPlayerBridge_setSurface(nullptr);
static void Java_MediaPlayerBridge_setSurface(JNIEnv* env, const base::android::JavaRef<jobject>&
    obj, const base::android::JavaRef<jobject>& surface) {
  jclass clazz = org_chromium_media_MediaPlayerBridge_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_media_MediaPlayerBridge_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "setSurface",
          "(Landroid/view/Surface;)V",
          &g_org_chromium_media_MediaPlayerBridge_setSurface);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id, surface.obj());
}

static std::atomic<jmethodID> g_org_chromium_media_MediaPlayerBridge_setPlaybackRate(nullptr);
static void Java_MediaPlayerBridge_setPlaybackRate(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, jdouble speed) {
  jclass clazz = org_chromium_media_MediaPlayerBridge_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_media_MediaPlayerBridge_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "setPlaybackRate",
          "(D)V",
          &g_org_chromium_media_MediaPlayerBridge_setPlaybackRate);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id, speed);
}

static std::atomic<jmethodID> g_org_chromium_media_MediaPlayerBridge_prepareAsync(nullptr);
static jboolean Java_MediaPlayerBridge_prepareAsync(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  jclass clazz = org_chromium_media_MediaPlayerBridge_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_media_MediaPlayerBridge_clazz(env), false);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "prepareAsync",
          "()Z",
          &g_org_chromium_media_MediaPlayerBridge_prepareAsync);

  jboolean ret =
      env->CallBooleanMethod(obj.obj(),
          call_context.base.method_id);
  return ret;
}

static std::atomic<jmethodID> g_org_chromium_media_MediaPlayerBridge_isPlaying(nullptr);
static jboolean Java_MediaPlayerBridge_isPlaying(JNIEnv* env, const base::android::JavaRef<jobject>&
    obj) {
  jclass clazz = org_chromium_media_MediaPlayerBridge_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_media_MediaPlayerBridge_clazz(env), false);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "isPlaying",
          "()Z",
          &g_org_chromium_media_MediaPlayerBridge_isPlaying);

  jboolean ret =
      env->CallBooleanMethod(obj.obj(),
          call_context.base.method_id);
  return ret;
}

static std::atomic<jmethodID> g_org_chromium_media_MediaPlayerBridge_getCurrentPosition(nullptr);
static jint Java_MediaPlayerBridge_getCurrentPosition(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  jclass clazz = org_chromium_media_MediaPlayerBridge_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_media_MediaPlayerBridge_clazz(env), 0);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "getCurrentPosition",
          "()I",
          &g_org_chromium_media_MediaPlayerBridge_getCurrentPosition);

  jint ret =
      env->CallIntMethod(obj.obj(),
          call_context.base.method_id);
  return ret;
}

static std::atomic<jmethodID> g_org_chromium_media_MediaPlayerBridge_getDuration(nullptr);
static jint Java_MediaPlayerBridge_getDuration(JNIEnv* env, const base::android::JavaRef<jobject>&
    obj) {
  jclass clazz = org_chromium_media_MediaPlayerBridge_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_media_MediaPlayerBridge_clazz(env), 0);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "getDuration",
          "()I",
          &g_org_chromium_media_MediaPlayerBridge_getDuration);

  jint ret =
      env->CallIntMethod(obj.obj(),
          call_context.base.method_id);
  return ret;
}

static std::atomic<jmethodID> g_org_chromium_media_MediaPlayerBridge_release(nullptr);
static void Java_MediaPlayerBridge_release(JNIEnv* env, const base::android::JavaRef<jobject>& obj)
    {
  jclass clazz = org_chromium_media_MediaPlayerBridge_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_media_MediaPlayerBridge_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "release",
          "()V",
          &g_org_chromium_media_MediaPlayerBridge_release);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id);
}

static std::atomic<jmethodID> g_org_chromium_media_MediaPlayerBridge_setVolume(nullptr);
static void Java_MediaPlayerBridge_setVolume(JNIEnv* env, const base::android::JavaRef<jobject>&
    obj, jdouble volume) {
  jclass clazz = org_chromium_media_MediaPlayerBridge_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_media_MediaPlayerBridge_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "setVolume",
          "(D)V",
          &g_org_chromium_media_MediaPlayerBridge_setVolume);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id, volume);
}

static std::atomic<jmethodID> g_org_chromium_media_MediaPlayerBridge_start(nullptr);
static void Java_MediaPlayerBridge_start(JNIEnv* env, const base::android::JavaRef<jobject>& obj) {
  jclass clazz = org_chromium_media_MediaPlayerBridge_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_media_MediaPlayerBridge_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "start",
          "()V",
          &g_org_chromium_media_MediaPlayerBridge_start);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id);
}

static std::atomic<jmethodID> g_org_chromium_media_MediaPlayerBridge_pause(nullptr);
static void Java_MediaPlayerBridge_pause(JNIEnv* env, const base::android::JavaRef<jobject>& obj) {
  jclass clazz = org_chromium_media_MediaPlayerBridge_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_media_MediaPlayerBridge_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "pause",
          "()V",
          &g_org_chromium_media_MediaPlayerBridge_pause);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id);
}

static std::atomic<jmethodID> g_org_chromium_media_MediaPlayerBridge_seekTo(nullptr);
static void Java_MediaPlayerBridge_seekTo(JNIEnv* env, const base::android::JavaRef<jobject>& obj,
    JniIntWrapper msec) {
  jclass clazz = org_chromium_media_MediaPlayerBridge_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_media_MediaPlayerBridge_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "seekTo",
          "(I)V",
          &g_org_chromium_media_MediaPlayerBridge_seekTo);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id, as_jint(msec));
}

static std::atomic<jmethodID> g_org_chromium_media_MediaPlayerBridge_setDataSource(nullptr);
static jboolean Java_MediaPlayerBridge_setDataSource(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, const base::android::JavaRef<jstring>& url,
    const base::android::JavaRef<jstring>& cookies,
    const base::android::JavaRef<jstring>& userAgent,
    jboolean hideUrlLog) {
  jclass clazz = org_chromium_media_MediaPlayerBridge_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_media_MediaPlayerBridge_clazz(env), false);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "setDataSource",
          "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Z)Z",
          &g_org_chromium_media_MediaPlayerBridge_setDataSource);

  jboolean ret =
      env->CallBooleanMethod(obj.obj(),
          call_context.base.method_id, url.obj(), cookies.obj(), userAgent.obj(), hideUrlLog);
  return ret;
}

static std::atomic<jmethodID> g_org_chromium_media_MediaPlayerBridge_setDataSourceFromFd(nullptr);
static jboolean Java_MediaPlayerBridge_setDataSourceFromFd(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, JniIntWrapper fd,
    jlong offset,
    jlong length) {
  jclass clazz = org_chromium_media_MediaPlayerBridge_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_media_MediaPlayerBridge_clazz(env), false);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "setDataSourceFromFd",
          "(IJJ)Z",
          &g_org_chromium_media_MediaPlayerBridge_setDataSourceFromFd);

  jboolean ret =
      env->CallBooleanMethod(obj.obj(),
          call_context.base.method_id, as_jint(fd), offset, length);
  return ret;
}

static std::atomic<jmethodID> g_org_chromium_media_MediaPlayerBridge_setDataUriDataSource(nullptr);
static jboolean Java_MediaPlayerBridge_setDataUriDataSource(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, const base::android::JavaRef<jstring>& url) {
  jclass clazz = org_chromium_media_MediaPlayerBridge_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_media_MediaPlayerBridge_clazz(env), false);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "setDataUriDataSource",
          "(Ljava/lang/String;)Z",
          &g_org_chromium_media_MediaPlayerBridge_setDataUriDataSource);

  jboolean ret =
      env->CallBooleanMethod(obj.obj(),
          call_context.base.method_id, url.obj());
  return ret;
}

static std::atomic<jmethodID>
    g_org_chromium_media_MediaPlayerBridge_00024AllowedOperations_canSeekForward(nullptr);
static jboolean Java_AllowedOperations_canSeekForward(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  jclass clazz = org_chromium_media_MediaPlayerBridge_00024AllowedOperations_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_media_MediaPlayerBridge_00024AllowedOperations_clazz(env), false);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "canSeekForward",
          "()Z",
          &g_org_chromium_media_MediaPlayerBridge_00024AllowedOperations_canSeekForward);

  jboolean ret =
      env->CallBooleanMethod(obj.obj(),
          call_context.base.method_id);
  return ret;
}

static std::atomic<jmethodID>
    g_org_chromium_media_MediaPlayerBridge_00024AllowedOperations_canSeekBackward(nullptr);
static jboolean Java_AllowedOperations_canSeekBackward(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  jclass clazz = org_chromium_media_MediaPlayerBridge_00024AllowedOperations_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_media_MediaPlayerBridge_00024AllowedOperations_clazz(env), false);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "canSeekBackward",
          "()Z",
          &g_org_chromium_media_MediaPlayerBridge_00024AllowedOperations_canSeekBackward);

  jboolean ret =
      env->CallBooleanMethod(obj.obj(),
          call_context.base.method_id);
  return ret;
}

static std::atomic<jmethodID> g_org_chromium_media_MediaPlayerBridge_getAllowedOperations(nullptr);
static base::android::ScopedJavaLocalRef<jobject>
    Java_MediaPlayerBridge_getAllowedOperations(JNIEnv* env, const base::android::JavaRef<jobject>&
    obj) {
  jclass clazz = org_chromium_media_MediaPlayerBridge_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_media_MediaPlayerBridge_clazz(env), NULL);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "getAllowedOperations",
          "()Lorg/chromium/media/MediaPlayerBridge$AllowedOperations;",
          &g_org_chromium_media_MediaPlayerBridge_getAllowedOperations);

  jobject ret =
      env->CallObjectMethod(obj.obj(),
          call_context.base.method_id);
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

}  // namespace media

#endif  // org_chromium_media_MediaPlayerBridge_JNI
