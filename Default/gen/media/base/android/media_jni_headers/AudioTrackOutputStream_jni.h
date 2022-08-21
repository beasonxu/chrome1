// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/media/AudioTrackOutputStream

#ifndef org_chromium_media_AudioTrackOutputStream_JNI
#define org_chromium_media_AudioTrackOutputStream_JNI

#include <jni.h>

#include "../../../../../../../base/android/jni_generator/jni_generator_helper.h"


// Step 1: Forward declarations.

JNI_REGISTRATION_EXPORT extern const char kClassPath_org_chromium_media_AudioTrackOutputStream[];
const char kClassPath_org_chromium_media_AudioTrackOutputStream[] =
    "org/chromium/media/AudioTrackOutputStream";
// Leaking this jclass as we cannot use LazyInstance from some threads.
JNI_REGISTRATION_EXPORT std::atomic<jclass>
    g_org_chromium_media_AudioTrackOutputStream_clazz(nullptr);
#ifndef org_chromium_media_AudioTrackOutputStream_clazz_defined
#define org_chromium_media_AudioTrackOutputStream_clazz_defined
inline jclass org_chromium_media_AudioTrackOutputStream_clazz(JNIEnv* env) {
  return base::android::LazyGetClass(env, kClassPath_org_chromium_media_AudioTrackOutputStream,
      &g_org_chromium_media_AudioTrackOutputStream_clazz);
}
#endif


// Step 2: Constants (optional).


// Step 3: Method stubs.
namespace media {

JNI_GENERATOR_EXPORT jobject Java_J_N_MEPH2V3G(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeAudioTrackOutputStream,
    jobject caller,
    jobject audioData,
    jlong delayInFrames) {
  AudioTrackOutputStream* native =
      reinterpret_cast<AudioTrackOutputStream*>(nativeAudioTrackOutputStream);
  CHECK_NATIVE_PTR(env, jcaller, native, "OnMoreData", NULL);
  return native->OnMoreData(env, base::android::JavaParamRef<jobject>(env, caller),
      base::android::JavaParamRef<jobject>(env, audioData), delayInFrames).Release();
}

JNI_GENERATOR_EXPORT void Java_J_N_Mr6_00024Ko2f(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeAudioTrackOutputStream,
    jobject caller) {
  AudioTrackOutputStream* native =
      reinterpret_cast<AudioTrackOutputStream*>(nativeAudioTrackOutputStream);
  CHECK_NATIVE_PTR(env, jcaller, native, "OnError");
  return native->OnError(env, base::android::JavaParamRef<jobject>(env, caller));
}

JNI_GENERATOR_EXPORT jlong Java_J_N_MMQ1O_1vA(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeAudioTrackOutputStream,
    jobject caller,
    jobject byteBuffer) {
  AudioTrackOutputStream* native =
      reinterpret_cast<AudioTrackOutputStream*>(nativeAudioTrackOutputStream);
  CHECK_NATIVE_PTR(env, jcaller, native, "GetAddress", 0);
  return native->GetAddress(env, base::android::JavaParamRef<jobject>(env, caller),
      base::android::JavaParamRef<jobject>(env, byteBuffer));
}


static std::atomic<jmethodID> g_org_chromium_media_AudioTrackOutputStream_create(nullptr);
static base::android::ScopedJavaLocalRef<jobject> Java_AudioTrackOutputStream_create(JNIEnv* env) {
  jclass clazz = org_chromium_media_AudioTrackOutputStream_clazz(env);
  CHECK_CLAZZ(env, clazz,
      org_chromium_media_AudioTrackOutputStream_clazz(env), NULL);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_STATIC>(
          env,
          clazz,
          "create",
          "()Lorg/chromium/media/AudioTrackOutputStream;",
          &g_org_chromium_media_AudioTrackOutputStream_create);

  jobject ret =
      env->CallStaticObjectMethod(clazz,
          call_context.base.method_id);
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

static std::atomic<jmethodID> g_org_chromium_media_AudioTrackOutputStream_open(nullptr);
static jboolean Java_AudioTrackOutputStream_open(JNIEnv* env, const base::android::JavaRef<jobject>&
    obj, JniIntWrapper channelCount,
    JniIntWrapper sampleRate,
    JniIntWrapper sampleFormat) {
  jclass clazz = org_chromium_media_AudioTrackOutputStream_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_media_AudioTrackOutputStream_clazz(env), false);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "open",
          "(III)Z",
          &g_org_chromium_media_AudioTrackOutputStream_open);

  jboolean ret =
      env->CallBooleanMethod(obj.obj(),
          call_context.base.method_id, as_jint(channelCount), as_jint(sampleRate),
              as_jint(sampleFormat));
  return ret;
}

static std::atomic<jmethodID> g_org_chromium_media_AudioTrackOutputStream_start(nullptr);
static void Java_AudioTrackOutputStream_start(JNIEnv* env, const base::android::JavaRef<jobject>&
    obj, jlong nativeAudioTrackOutputStream) {
  jclass clazz = org_chromium_media_AudioTrackOutputStream_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_media_AudioTrackOutputStream_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "start",
          "(J)V",
          &g_org_chromium_media_AudioTrackOutputStream_start);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id, nativeAudioTrackOutputStream);
}

static std::atomic<jmethodID> g_org_chromium_media_AudioTrackOutputStream_stop(nullptr);
static void Java_AudioTrackOutputStream_stop(JNIEnv* env, const base::android::JavaRef<jobject>&
    obj) {
  jclass clazz = org_chromium_media_AudioTrackOutputStream_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_media_AudioTrackOutputStream_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "stop",
          "()V",
          &g_org_chromium_media_AudioTrackOutputStream_stop);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id);
}

static std::atomic<jmethodID> g_org_chromium_media_AudioTrackOutputStream_setVolume(nullptr);
static void Java_AudioTrackOutputStream_setVolume(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, jdouble volume) {
  jclass clazz = org_chromium_media_AudioTrackOutputStream_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_media_AudioTrackOutputStream_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "setVolume",
          "(D)V",
          &g_org_chromium_media_AudioTrackOutputStream_setVolume);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id, volume);
}

static std::atomic<jmethodID> g_org_chromium_media_AudioTrackOutputStream_close(nullptr);
static void Java_AudioTrackOutputStream_close(JNIEnv* env, const base::android::JavaRef<jobject>&
    obj) {
  jclass clazz = org_chromium_media_AudioTrackOutputStream_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_media_AudioTrackOutputStream_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "close",
          "()V",
          &g_org_chromium_media_AudioTrackOutputStream_close);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id);
}

static std::atomic<jmethodID>
    g_org_chromium_media_AudioTrackOutputStream_createAudioBufferInfo(nullptr);
static base::android::ScopedJavaLocalRef<jobject>
    Java_AudioTrackOutputStream_createAudioBufferInfo(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, JniIntWrapper frames,
    JniIntWrapper size) {
  jclass clazz = org_chromium_media_AudioTrackOutputStream_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_media_AudioTrackOutputStream_clazz(env), NULL);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "createAudioBufferInfo",
          "(II)Lorg/chromium/media/AudioTrackOutputStream$AudioBufferInfo;",
          &g_org_chromium_media_AudioTrackOutputStream_createAudioBufferInfo);

  jobject ret =
      env->CallObjectMethod(obj.obj(),
          call_context.base.method_id, as_jint(frames), as_jint(size));
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

}  // namespace media

#endif  // org_chromium_media_AudioTrackOutputStream_JNI
