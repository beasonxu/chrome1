// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/device/usb/ChromeUsbConnection

#ifndef org_chromium_device_usb_ChromeUsbConnection_JNI
#define org_chromium_device_usb_ChromeUsbConnection_JNI

#include <jni.h>

#include "../../../../../../../base/android/jni_generator/jni_generator_helper.h"


// Step 1: Forward declarations.

JNI_REGISTRATION_EXPORT extern const char kClassPath_org_chromium_device_usb_ChromeUsbConnection[];
const char kClassPath_org_chromium_device_usb_ChromeUsbConnection[] =
    "org/chromium/device/usb/ChromeUsbConnection";
// Leaking this jclass as we cannot use LazyInstance from some threads.
JNI_REGISTRATION_EXPORT std::atomic<jclass>
    g_org_chromium_device_usb_ChromeUsbConnection_clazz(nullptr);
#ifndef org_chromium_device_usb_ChromeUsbConnection_clazz_defined
#define org_chromium_device_usb_ChromeUsbConnection_clazz_defined
inline jclass org_chromium_device_usb_ChromeUsbConnection_clazz(JNIEnv* env) {
  return base::android::LazyGetClass(env, kClassPath_org_chromium_device_usb_ChromeUsbConnection,
      &g_org_chromium_device_usb_ChromeUsbConnection_clazz);
}
#endif


// Step 2: Constants (optional).


// Step 3: Method stubs.
namespace device {


static std::atomic<jmethodID> g_org_chromium_device_usb_ChromeUsbConnection_create(nullptr);
static base::android::ScopedJavaLocalRef<jobject> Java_ChromeUsbConnection_create(JNIEnv* env, const
    base::android::JavaRef<jobject>& connection) {
  jclass clazz = org_chromium_device_usb_ChromeUsbConnection_clazz(env);
  CHECK_CLAZZ(env, clazz,
      org_chromium_device_usb_ChromeUsbConnection_clazz(env), NULL);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_STATIC>(
          env,
          clazz,
          "create",
"(Landroid/hardware/usb/UsbDeviceConnection;)Lorg/chromium/device/usb/ChromeUsbConnection;",
          &g_org_chromium_device_usb_ChromeUsbConnection_create);

  jobject ret =
      env->CallStaticObjectMethod(clazz,
          call_context.base.method_id, connection.obj());
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

static std::atomic<jmethodID>
    g_org_chromium_device_usb_ChromeUsbConnection_getFileDescriptor(nullptr);
static jint Java_ChromeUsbConnection_getFileDescriptor(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  jclass clazz = org_chromium_device_usb_ChromeUsbConnection_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_device_usb_ChromeUsbConnection_clazz(env), 0);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "getFileDescriptor",
          "()I",
          &g_org_chromium_device_usb_ChromeUsbConnection_getFileDescriptor);

  jint ret =
      env->CallIntMethod(obj.obj(),
          call_context.base.method_id);
  return ret;
}

static std::atomic<jmethodID> g_org_chromium_device_usb_ChromeUsbConnection_close(nullptr);
static void Java_ChromeUsbConnection_close(JNIEnv* env, const base::android::JavaRef<jobject>& obj)
    {
  jclass clazz = org_chromium_device_usb_ChromeUsbConnection_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_device_usb_ChromeUsbConnection_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "close",
          "()V",
          &g_org_chromium_device_usb_ChromeUsbConnection_close);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id);
}

}  // namespace device

#endif  // org_chromium_device_usb_ChromeUsbConnection_JNI
