// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/media/MediaCodecBridgeBuilder

#ifndef org_chromium_media_MediaCodecBridgeBuilder_JNI
#define org_chromium_media_MediaCodecBridgeBuilder_JNI

#include <jni.h>

#include "../../../../../../../base/android/jni_generator/jni_generator_helper.h"


// Step 1: Forward declarations.

JNI_REGISTRATION_EXPORT extern const char kClassPath_org_chromium_media_MediaCodecBridgeBuilder[];
const char kClassPath_org_chromium_media_MediaCodecBridgeBuilder[] =
    "org/chromium/media/MediaCodecBridgeBuilder";
// Leaking this jclass as we cannot use LazyInstance from some threads.
JNI_REGISTRATION_EXPORT std::atomic<jclass>
    g_org_chromium_media_MediaCodecBridgeBuilder_clazz(nullptr);
#ifndef org_chromium_media_MediaCodecBridgeBuilder_clazz_defined
#define org_chromium_media_MediaCodecBridgeBuilder_clazz_defined
inline jclass org_chromium_media_MediaCodecBridgeBuilder_clazz(JNIEnv* env) {
  return base::android::LazyGetClass(env, kClassPath_org_chromium_media_MediaCodecBridgeBuilder,
      &g_org_chromium_media_MediaCodecBridgeBuilder_clazz);
}
#endif


// Step 2: Constants (optional).


// Step 3: Method stubs.
namespace media {


static std::atomic<jmethodID>
    g_org_chromium_media_MediaCodecBridgeBuilder_createVideoDecoder(nullptr);
static base::android::ScopedJavaLocalRef<jobject>
    Java_MediaCodecBridgeBuilder_createVideoDecoder(JNIEnv* env, const
    base::android::JavaRef<jstring>& mime,
    JniIntWrapper codecType,
    const base::android::JavaRef<jobject>& mediaCrypto,
    JniIntWrapper width,
    JniIntWrapper height,
    const base::android::JavaRef<jobject>& surface,
    const base::android::JavaRef<jbyteArray>& csd0,
    const base::android::JavaRef<jbyteArray>& csd1,
    const base::android::JavaRef<jobject>& hdrMetadata,
    jboolean allowAdaptivePlayback,
    jboolean useAsyncApi) {
  jclass clazz = org_chromium_media_MediaCodecBridgeBuilder_clazz(env);
  CHECK_CLAZZ(env, clazz,
      org_chromium_media_MediaCodecBridgeBuilder_clazz(env), NULL);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_STATIC>(
          env,
          clazz,
          "createVideoDecoder",
"(Ljava/lang/String;ILandroid/media/MediaCrypto;IILandroid/view/Surface;[B[BLorg/chromium/media/HdrMetadata;ZZ)Lorg/chromium/media/MediaCodecBridge;",
          &g_org_chromium_media_MediaCodecBridgeBuilder_createVideoDecoder);

  jobject ret =
      env->CallStaticObjectMethod(clazz,
          call_context.base.method_id, mime.obj(), as_jint(codecType), mediaCrypto.obj(),
              as_jint(width), as_jint(height), surface.obj(), csd0.obj(), csd1.obj(),
              hdrMetadata.obj(), allowAdaptivePlayback, useAsyncApi);
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

static std::atomic<jmethodID>
    g_org_chromium_media_MediaCodecBridgeBuilder_createVideoEncoder(nullptr);
static base::android::ScopedJavaLocalRef<jobject>
    Java_MediaCodecBridgeBuilder_createVideoEncoder(JNIEnv* env, const
    base::android::JavaRef<jstring>& mime,
    JniIntWrapper width,
    JniIntWrapper height,
    JniIntWrapper bitrateMode,
    JniIntWrapper bitRate,
    JniIntWrapper frameRate,
    JniIntWrapper iFrameInterval,
    JniIntWrapper colorFormat) {
  jclass clazz = org_chromium_media_MediaCodecBridgeBuilder_clazz(env);
  CHECK_CLAZZ(env, clazz,
      org_chromium_media_MediaCodecBridgeBuilder_clazz(env), NULL);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_STATIC>(
          env,
          clazz,
          "createVideoEncoder",
          "(Ljava/lang/String;IIIIIII)Lorg/chromium/media/MediaCodecBridge;",
          &g_org_chromium_media_MediaCodecBridgeBuilder_createVideoEncoder);

  jobject ret =
      env->CallStaticObjectMethod(clazz,
          call_context.base.method_id, mime.obj(), as_jint(width), as_jint(height),
              as_jint(bitrateMode), as_jint(bitRate), as_jint(frameRate), as_jint(iFrameInterval),
              as_jint(colorFormat));
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

static std::atomic<jmethodID>
    g_org_chromium_media_MediaCodecBridgeBuilder_createAudioDecoder(nullptr);
static base::android::ScopedJavaLocalRef<jobject>
    Java_MediaCodecBridgeBuilder_createAudioDecoder(JNIEnv* env, const
    base::android::JavaRef<jstring>& mime,
    const base::android::JavaRef<jobject>& mediaCrypto,
    JniIntWrapper sampleRate,
    JniIntWrapper channelCount,
    const base::android::JavaRef<jbyteArray>& csd0,
    const base::android::JavaRef<jbyteArray>& csd1,
    const base::android::JavaRef<jbyteArray>& csd2,
    jboolean frameHasAdtsHeader,
    jboolean useAsyncApi) {
  jclass clazz = org_chromium_media_MediaCodecBridgeBuilder_clazz(env);
  CHECK_CLAZZ(env, clazz,
      org_chromium_media_MediaCodecBridgeBuilder_clazz(env), NULL);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_STATIC>(
          env,
          clazz,
          "createAudioDecoder",
"(Ljava/lang/String;Landroid/media/MediaCrypto;II[B[B[BZZ)Lorg/chromium/media/MediaCodecBridge;",
          &g_org_chromium_media_MediaCodecBridgeBuilder_createAudioDecoder);

  jobject ret =
      env->CallStaticObjectMethod(clazz,
          call_context.base.method_id, mime.obj(), mediaCrypto.obj(), as_jint(sampleRate),
              as_jint(channelCount), csd0.obj(), csd1.obj(), csd2.obj(), frameHasAdtsHeader,
              useAsyncApi);
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

}  // namespace media

#endif  // org_chromium_media_MediaCodecBridgeBuilder_JNI
