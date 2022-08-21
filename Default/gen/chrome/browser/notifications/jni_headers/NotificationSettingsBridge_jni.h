// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/chrome/browser/notifications/NotificationSettingsBridge

#ifndef org_chromium_chrome_browser_notifications_NotificationSettingsBridge_JNI
#define org_chromium_chrome_browser_notifications_NotificationSettingsBridge_JNI

#include <jni.h>

#include "../../../../../../../base/android/jni_generator/jni_generator_helper.h"


// Step 1: Forward declarations.

JNI_REGISTRATION_EXPORT extern const char
    kClassPath_org_chromium_chrome_browser_notifications_NotificationSettingsBridge[];
const char kClassPath_org_chromium_chrome_browser_notifications_NotificationSettingsBridge[] =
    "org/chromium/chrome/browser/notifications/NotificationSettingsBridge";

JNI_REGISTRATION_EXPORT extern const char
    kClassPath_org_chromium_chrome_browser_notifications_NotificationSettingsBridge_00024SiteChannel[];
const char
    kClassPath_org_chromium_chrome_browser_notifications_NotificationSettingsBridge_00024SiteChannel[]
    = "org/chromium/chrome/browser/notifications/NotificationSettingsBridge$SiteChannel";
// Leaking this jclass as we cannot use LazyInstance from some threads.
JNI_REGISTRATION_EXPORT std::atomic<jclass>
    g_org_chromium_chrome_browser_notifications_NotificationSettingsBridge_clazz(nullptr);
#ifndef org_chromium_chrome_browser_notifications_NotificationSettingsBridge_clazz_defined
#define org_chromium_chrome_browser_notifications_NotificationSettingsBridge_clazz_defined
inline jclass org_chromium_chrome_browser_notifications_NotificationSettingsBridge_clazz(JNIEnv*
    env) {
  return base::android::LazyGetClass(env,
      kClassPath_org_chromium_chrome_browser_notifications_NotificationSettingsBridge,
      &g_org_chromium_chrome_browser_notifications_NotificationSettingsBridge_clazz);
}
#endif
// Leaking this jclass as we cannot use LazyInstance from some threads.
JNI_REGISTRATION_EXPORT std::atomic<jclass>
    g_org_chromium_chrome_browser_notifications_NotificationSettingsBridge_00024SiteChannel_clazz(nullptr);
#ifndef org_chromium_chrome_browser_notifications_NotificationSettingsBridge_00024SiteChannel_clazz_defined
#define org_chromium_chrome_browser_notifications_NotificationSettingsBridge_00024SiteChannel_clazz_defined
inline jclass
    org_chromium_chrome_browser_notifications_NotificationSettingsBridge_00024SiteChannel_clazz(JNIEnv*
    env) {
  return base::android::LazyGetClass(env,
      kClassPath_org_chromium_chrome_browser_notifications_NotificationSettingsBridge_00024SiteChannel,
      &g_org_chromium_chrome_browser_notifications_NotificationSettingsBridge_00024SiteChannel_clazz);
}
#endif


// Step 2: Constants (optional).


// Step 3: Method stubs.

static std::atomic<jmethodID>
    g_org_chromium_chrome_browser_notifications_NotificationSettingsBridge_createChannel(nullptr);
static base::android::ScopedJavaLocalRef<jobject>
    Java_NotificationSettingsBridge_createChannel(JNIEnv* env, const
    base::android::JavaRef<jstring>& origin,
    jlong creationTime,
    jboolean enabled) {
  jclass clazz = org_chromium_chrome_browser_notifications_NotificationSettingsBridge_clazz(env);
  CHECK_CLAZZ(env, clazz,
      org_chromium_chrome_browser_notifications_NotificationSettingsBridge_clazz(env), NULL);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_STATIC>(
          env,
          clazz,
          "createChannel",
"(Ljava/lang/String;JZ)Lorg/chromium/chrome/browser/notifications/NotificationSettingsBridge$SiteChannel;",
          &g_org_chromium_chrome_browser_notifications_NotificationSettingsBridge_createChannel);

  jobject ret =
      env->CallStaticObjectMethod(clazz,
          call_context.base.method_id, origin.obj(), creationTime, enabled);
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

static std::atomic<jmethodID>
    g_org_chromium_chrome_browser_notifications_NotificationSettingsBridge_getChannelStatus(nullptr);
static jint Java_NotificationSettingsBridge_getChannelStatus(JNIEnv* env, const
    base::android::JavaRef<jstring>& channelId) {
  jclass clazz = org_chromium_chrome_browser_notifications_NotificationSettingsBridge_clazz(env);
  CHECK_CLAZZ(env, clazz,
      org_chromium_chrome_browser_notifications_NotificationSettingsBridge_clazz(env), 0);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_STATIC>(
          env,
          clazz,
          "getChannelStatus",
          "(Ljava/lang/String;)I",
          &g_org_chromium_chrome_browser_notifications_NotificationSettingsBridge_getChannelStatus);

  jint ret =
      env->CallStaticIntMethod(clazz,
          call_context.base.method_id, channelId.obj());
  return ret;
}

static std::atomic<jmethodID>
    g_org_chromium_chrome_browser_notifications_NotificationSettingsBridge_getSiteChannels(nullptr);
static base::android::ScopedJavaLocalRef<jobjectArray>
    Java_NotificationSettingsBridge_getSiteChannels(JNIEnv* env) {
  jclass clazz = org_chromium_chrome_browser_notifications_NotificationSettingsBridge_clazz(env);
  CHECK_CLAZZ(env, clazz,
      org_chromium_chrome_browser_notifications_NotificationSettingsBridge_clazz(env), NULL);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_STATIC>(
          env,
          clazz,
          "getSiteChannels",
          "()[Lorg/chromium/chrome/browser/notifications/NotificationSettingsBridge$SiteChannel;",
          &g_org_chromium_chrome_browser_notifications_NotificationSettingsBridge_getSiteChannels);

  jobjectArray ret =
      static_cast<jobjectArray>(env->CallStaticObjectMethod(clazz,
          call_context.base.method_id));
  return base::android::ScopedJavaLocalRef<jobjectArray>(env, ret);
}

static std::atomic<jmethodID>
    g_org_chromium_chrome_browser_notifications_NotificationSettingsBridge_deleteChannel(nullptr);
static void Java_NotificationSettingsBridge_deleteChannel(JNIEnv* env, const
    base::android::JavaRef<jstring>& channelId) {
  jclass clazz = org_chromium_chrome_browser_notifications_NotificationSettingsBridge_clazz(env);
  CHECK_CLAZZ(env, clazz,
      org_chromium_chrome_browser_notifications_NotificationSettingsBridge_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_STATIC>(
          env,
          clazz,
          "deleteChannel",
          "(Ljava/lang/String;)V",
          &g_org_chromium_chrome_browser_notifications_NotificationSettingsBridge_deleteChannel);

     env->CallStaticVoidMethod(clazz,
          call_context.base.method_id, channelId.obj());
}

static std::atomic<jmethodID>
    g_org_chromium_chrome_browser_notifications_NotificationSettingsBridge_00024SiteChannel_getTimestamp(nullptr);
static jlong Java_SiteChannel_getTimestamp(JNIEnv* env, const base::android::JavaRef<jobject>& obj)
    {
  jclass clazz =
      org_chromium_chrome_browser_notifications_NotificationSettingsBridge_00024SiteChannel_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
org_chromium_chrome_browser_notifications_NotificationSettingsBridge_00024SiteChannel_clazz(env),
          0);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "getTimestamp",
          "()J",
&g_org_chromium_chrome_browser_notifications_NotificationSettingsBridge_00024SiteChannel_getTimestamp);

  jlong ret =
      env->CallLongMethod(obj.obj(),
          call_context.base.method_id);
  return ret;
}

static std::atomic<jmethodID>
    g_org_chromium_chrome_browser_notifications_NotificationSettingsBridge_00024SiteChannel_getOrigin(nullptr);
static base::android::ScopedJavaLocalRef<jstring> Java_SiteChannel_getOrigin(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  jclass clazz =
      org_chromium_chrome_browser_notifications_NotificationSettingsBridge_00024SiteChannel_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
org_chromium_chrome_browser_notifications_NotificationSettingsBridge_00024SiteChannel_clazz(env),
          NULL);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "getOrigin",
          "()Ljava/lang/String;",
&g_org_chromium_chrome_browser_notifications_NotificationSettingsBridge_00024SiteChannel_getOrigin);

  jstring ret =
      static_cast<jstring>(env->CallObjectMethod(obj.obj(),
          call_context.base.method_id));
  return base::android::ScopedJavaLocalRef<jstring>(env, ret);
}

static std::atomic<jmethodID>
    g_org_chromium_chrome_browser_notifications_NotificationSettingsBridge_00024SiteChannel_getStatus(nullptr);
static jint Java_SiteChannel_getStatus(JNIEnv* env, const base::android::JavaRef<jobject>& obj) {
  jclass clazz =
      org_chromium_chrome_browser_notifications_NotificationSettingsBridge_00024SiteChannel_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
org_chromium_chrome_browser_notifications_NotificationSettingsBridge_00024SiteChannel_clazz(env),
          0);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "getStatus",
          "()I",
&g_org_chromium_chrome_browser_notifications_NotificationSettingsBridge_00024SiteChannel_getStatus);

  jint ret =
      env->CallIntMethod(obj.obj(),
          call_context.base.method_id);
  return ret;
}

static std::atomic<jmethodID>
    g_org_chromium_chrome_browser_notifications_NotificationSettingsBridge_00024SiteChannel_getId(nullptr);
static base::android::ScopedJavaLocalRef<jstring> Java_SiteChannel_getId(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  jclass clazz =
      org_chromium_chrome_browser_notifications_NotificationSettingsBridge_00024SiteChannel_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
org_chromium_chrome_browser_notifications_NotificationSettingsBridge_00024SiteChannel_clazz(env),
          NULL);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "getId",
          "()Ljava/lang/String;",
&g_org_chromium_chrome_browser_notifications_NotificationSettingsBridge_00024SiteChannel_getId);

  jstring ret =
      static_cast<jstring>(env->CallObjectMethod(obj.obj(),
          call_context.base.method_id));
  return base::android::ScopedJavaLocalRef<jstring>(env, ret);
}

#endif  // org_chromium_chrome_browser_notifications_NotificationSettingsBridge_JNI
