// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/device/usb/ChromeUsbDevice

#ifndef org_chromium_device_usb_ChromeUsbDevice_JNI
#define org_chromium_device_usb_ChromeUsbDevice_JNI

#include <jni.h>

#include "../../../../../../../base/android/jni_generator/jni_generator_helper.h"


// Step 1: Forward declarations.

JNI_REGISTRATION_EXPORT extern const char kClassPath_org_chromium_device_usb_ChromeUsbDevice[];
const char kClassPath_org_chromium_device_usb_ChromeUsbDevice[] =
    "org/chromium/device/usb/ChromeUsbDevice";
// Leaking this jclass as we cannot use LazyInstance from some threads.
JNI_REGISTRATION_EXPORT std::atomic<jclass>
    g_org_chromium_device_usb_ChromeUsbDevice_clazz(nullptr);
#ifndef org_chromium_device_usb_ChromeUsbDevice_clazz_defined
#define org_chromium_device_usb_ChromeUsbDevice_clazz_defined
inline jclass org_chromium_device_usb_ChromeUsbDevice_clazz(JNIEnv* env) {
  return base::android::LazyGetClass(env, kClassPath_org_chromium_device_usb_ChromeUsbDevice,
      &g_org_chromium_device_usb_ChromeUsbDevice_clazz);
}
#endif


// Step 2: Constants (optional).


// Step 3: Method stubs.
namespace device {


static std::atomic<jmethodID> g_org_chromium_device_usb_ChromeUsbDevice_create(nullptr);
static base::android::ScopedJavaLocalRef<jobject> Java_ChromeUsbDevice_create(JNIEnv* env, const
    base::android::JavaRef<jobject>& device) {
  jclass clazz = org_chromium_device_usb_ChromeUsbDevice_clazz(env);
  CHECK_CLAZZ(env, clazz,
      org_chromium_device_usb_ChromeUsbDevice_clazz(env), NULL);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_STATIC>(
          env,
          clazz,
          "create",
          "(Landroid/hardware/usb/UsbDevice;)Lorg/chromium/device/usb/ChromeUsbDevice;",
          &g_org_chromium_device_usb_ChromeUsbDevice_create);

  jobject ret =
      env->CallStaticObjectMethod(clazz,
          call_context.base.method_id, device.obj());
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

static std::atomic<jmethodID> g_org_chromium_device_usb_ChromeUsbDevice_getDeviceId(nullptr);
static jint Java_ChromeUsbDevice_getDeviceId(JNIEnv* env, const base::android::JavaRef<jobject>&
    obj) {
  jclass clazz = org_chromium_device_usb_ChromeUsbDevice_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_device_usb_ChromeUsbDevice_clazz(env), 0);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "getDeviceId",
          "()I",
          &g_org_chromium_device_usb_ChromeUsbDevice_getDeviceId);

  jint ret =
      env->CallIntMethod(obj.obj(),
          call_context.base.method_id);
  return ret;
}

static std::atomic<jmethodID> g_org_chromium_device_usb_ChromeUsbDevice_getDeviceClass(nullptr);
static jint Java_ChromeUsbDevice_getDeviceClass(JNIEnv* env, const base::android::JavaRef<jobject>&
    obj) {
  jclass clazz = org_chromium_device_usb_ChromeUsbDevice_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_device_usb_ChromeUsbDevice_clazz(env), 0);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "getDeviceClass",
          "()I",
          &g_org_chromium_device_usb_ChromeUsbDevice_getDeviceClass);

  jint ret =
      env->CallIntMethod(obj.obj(),
          call_context.base.method_id);
  return ret;
}

static std::atomic<jmethodID> g_org_chromium_device_usb_ChromeUsbDevice_getDeviceSubclass(nullptr);
static jint Java_ChromeUsbDevice_getDeviceSubclass(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  jclass clazz = org_chromium_device_usb_ChromeUsbDevice_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_device_usb_ChromeUsbDevice_clazz(env), 0);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "getDeviceSubclass",
          "()I",
          &g_org_chromium_device_usb_ChromeUsbDevice_getDeviceSubclass);

  jint ret =
      env->CallIntMethod(obj.obj(),
          call_context.base.method_id);
  return ret;
}

static std::atomic<jmethodID> g_org_chromium_device_usb_ChromeUsbDevice_getDeviceProtocol(nullptr);
static jint Java_ChromeUsbDevice_getDeviceProtocol(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  jclass clazz = org_chromium_device_usb_ChromeUsbDevice_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_device_usb_ChromeUsbDevice_clazz(env), 0);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "getDeviceProtocol",
          "()I",
          &g_org_chromium_device_usb_ChromeUsbDevice_getDeviceProtocol);

  jint ret =
      env->CallIntMethod(obj.obj(),
          call_context.base.method_id);
  return ret;
}

static std::atomic<jmethodID> g_org_chromium_device_usb_ChromeUsbDevice_getVendorId(nullptr);
static jint Java_ChromeUsbDevice_getVendorId(JNIEnv* env, const base::android::JavaRef<jobject>&
    obj) {
  jclass clazz = org_chromium_device_usb_ChromeUsbDevice_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_device_usb_ChromeUsbDevice_clazz(env), 0);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "getVendorId",
          "()I",
          &g_org_chromium_device_usb_ChromeUsbDevice_getVendorId);

  jint ret =
      env->CallIntMethod(obj.obj(),
          call_context.base.method_id);
  return ret;
}

static std::atomic<jmethodID> g_org_chromium_device_usb_ChromeUsbDevice_getProductId(nullptr);
static jint Java_ChromeUsbDevice_getProductId(JNIEnv* env, const base::android::JavaRef<jobject>&
    obj) {
  jclass clazz = org_chromium_device_usb_ChromeUsbDevice_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_device_usb_ChromeUsbDevice_clazz(env), 0);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "getProductId",
          "()I",
          &g_org_chromium_device_usb_ChromeUsbDevice_getProductId);

  jint ret =
      env->CallIntMethod(obj.obj(),
          call_context.base.method_id);
  return ret;
}

static std::atomic<jmethodID> g_org_chromium_device_usb_ChromeUsbDevice_getDeviceVersion(nullptr);
static jint Java_ChromeUsbDevice_getDeviceVersion(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  jclass clazz = org_chromium_device_usb_ChromeUsbDevice_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_device_usb_ChromeUsbDevice_clazz(env), 0);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "getDeviceVersion",
          "()I",
          &g_org_chromium_device_usb_ChromeUsbDevice_getDeviceVersion);

  jint ret =
      env->CallIntMethod(obj.obj(),
          call_context.base.method_id);
  return ret;
}

static std::atomic<jmethodID>
    g_org_chromium_device_usb_ChromeUsbDevice_getManufacturerName(nullptr);
static base::android::ScopedJavaLocalRef<jstring> Java_ChromeUsbDevice_getManufacturerName(JNIEnv*
    env, const base::android::JavaRef<jobject>& obj) {
  jclass clazz = org_chromium_device_usb_ChromeUsbDevice_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_device_usb_ChromeUsbDevice_clazz(env), NULL);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "getManufacturerName",
          "()Ljava/lang/String;",
          &g_org_chromium_device_usb_ChromeUsbDevice_getManufacturerName);

  jstring ret =
      static_cast<jstring>(env->CallObjectMethod(obj.obj(),
          call_context.base.method_id));
  return base::android::ScopedJavaLocalRef<jstring>(env, ret);
}

static std::atomic<jmethodID> g_org_chromium_device_usb_ChromeUsbDevice_getProductName(nullptr);
static base::android::ScopedJavaLocalRef<jstring> Java_ChromeUsbDevice_getProductName(JNIEnv* env,
    const base::android::JavaRef<jobject>& obj) {
  jclass clazz = org_chromium_device_usb_ChromeUsbDevice_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_device_usb_ChromeUsbDevice_clazz(env), NULL);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "getProductName",
          "()Ljava/lang/String;",
          &g_org_chromium_device_usb_ChromeUsbDevice_getProductName);

  jstring ret =
      static_cast<jstring>(env->CallObjectMethod(obj.obj(),
          call_context.base.method_id));
  return base::android::ScopedJavaLocalRef<jstring>(env, ret);
}

static std::atomic<jmethodID> g_org_chromium_device_usb_ChromeUsbDevice_getSerialNumber(nullptr);
static base::android::ScopedJavaLocalRef<jstring> Java_ChromeUsbDevice_getSerialNumber(JNIEnv* env,
    const base::android::JavaRef<jobject>& obj) {
  jclass clazz = org_chromium_device_usb_ChromeUsbDevice_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_device_usb_ChromeUsbDevice_clazz(env), NULL);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "getSerialNumber",
          "()Ljava/lang/String;",
          &g_org_chromium_device_usb_ChromeUsbDevice_getSerialNumber);

  jstring ret =
      static_cast<jstring>(env->CallObjectMethod(obj.obj(),
          call_context.base.method_id));
  return base::android::ScopedJavaLocalRef<jstring>(env, ret);
}

static std::atomic<jmethodID> g_org_chromium_device_usb_ChromeUsbDevice_getConfigurations(nullptr);
static base::android::ScopedJavaLocalRef<jobjectArray>
    Java_ChromeUsbDevice_getConfigurations(JNIEnv* env, const base::android::JavaRef<jobject>& obj)
    {
  jclass clazz = org_chromium_device_usb_ChromeUsbDevice_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_device_usb_ChromeUsbDevice_clazz(env), NULL);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "getConfigurations",
          "()[Landroid/hardware/usb/UsbConfiguration;",
          &g_org_chromium_device_usb_ChromeUsbDevice_getConfigurations);

  jobjectArray ret =
      static_cast<jobjectArray>(env->CallObjectMethod(obj.obj(),
          call_context.base.method_id));
  return base::android::ScopedJavaLocalRef<jobjectArray>(env, ret);
}

}  // namespace device

#endif  // org_chromium_device_usb_ChromeUsbDevice_JNI
