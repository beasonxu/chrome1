// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/device/bluetooth/ChromeBluetoothDevice

#ifndef org_chromium_device_bluetooth_ChromeBluetoothDevice_JNI
#define org_chromium_device_bluetooth_ChromeBluetoothDevice_JNI

#include <jni.h>

#include "../../../../../../base/android/jni_generator/jni_generator_helper.h"


// Step 1: Forward declarations.

JNI_REGISTRATION_EXPORT extern const char
    kClassPath_org_chromium_device_bluetooth_ChromeBluetoothDevice[];
const char kClassPath_org_chromium_device_bluetooth_ChromeBluetoothDevice[] =
    "org/chromium/device/bluetooth/ChromeBluetoothDevice";
// Leaking this jclass as we cannot use LazyInstance from some threads.
JNI_REGISTRATION_EXPORT std::atomic<jclass>
    g_org_chromium_device_bluetooth_ChromeBluetoothDevice_clazz(nullptr);
#ifndef org_chromium_device_bluetooth_ChromeBluetoothDevice_clazz_defined
#define org_chromium_device_bluetooth_ChromeBluetoothDevice_clazz_defined
inline jclass org_chromium_device_bluetooth_ChromeBluetoothDevice_clazz(JNIEnv* env) {
  return base::android::LazyGetClass(env,
      kClassPath_org_chromium_device_bluetooth_ChromeBluetoothDevice,
      &g_org_chromium_device_bluetooth_ChromeBluetoothDevice_clazz);
}
#endif


// Step 2: Constants (optional).


// Step 3: Method stubs.
namespace device {

JNI_GENERATOR_EXPORT void Java_J_N_MmnW7gQC(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeBluetoothDeviceAndroid,
    jobject caller,
    jint status,
    jboolean connected) {
  BluetoothDeviceAndroid* native =
      reinterpret_cast<BluetoothDeviceAndroid*>(nativeBluetoothDeviceAndroid);
  CHECK_NATIVE_PTR(env, jcaller, native, "OnConnectionStateChange");
  return native->OnConnectionStateChange(env, base::android::JavaParamRef<jobject>(env, caller),
      status, connected);
}

JNI_GENERATOR_EXPORT void Java_J_N_MAoRk69U(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeBluetoothDeviceAndroid,
    jobject caller,
    jstring instanceId,
    jobject serviceWrapper) {
  BluetoothDeviceAndroid* native =
      reinterpret_cast<BluetoothDeviceAndroid*>(nativeBluetoothDeviceAndroid);
  CHECK_NATIVE_PTR(env, jcaller, native, "CreateGattRemoteService");
  return native->CreateGattRemoteService(env, base::android::JavaParamRef<jobject>(env, caller),
      base::android::JavaParamRef<jstring>(env, instanceId),
      base::android::JavaParamRef<jobject>(env, serviceWrapper));
}

JNI_GENERATOR_EXPORT void Java_J_N_M9HSgyay(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeBluetoothDeviceAndroid,
    jobject caller) {
  BluetoothDeviceAndroid* native =
      reinterpret_cast<BluetoothDeviceAndroid*>(nativeBluetoothDeviceAndroid);
  CHECK_NATIVE_PTR(env, jcaller, native, "OnGattServicesDiscovered");
  return native->OnGattServicesDiscovered(env, base::android::JavaParamRef<jobject>(env, caller));
}


static std::atomic<jmethodID>
    g_org_chromium_device_bluetooth_ChromeBluetoothDevice_onBluetoothDeviceAndroidDestruction(nullptr);
static void Java_ChromeBluetoothDevice_onBluetoothDeviceAndroidDestruction(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  jclass clazz = org_chromium_device_bluetooth_ChromeBluetoothDevice_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_device_bluetooth_ChromeBluetoothDevice_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "onBluetoothDeviceAndroidDestruction",
          "()V",
&g_org_chromium_device_bluetooth_ChromeBluetoothDevice_onBluetoothDeviceAndroidDestruction);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id);
}

static std::atomic<jmethodID> g_org_chromium_device_bluetooth_ChromeBluetoothDevice_create(nullptr);
static base::android::ScopedJavaLocalRef<jobject> Java_ChromeBluetoothDevice_create(JNIEnv* env,
    jlong nativeBluetoothDeviceAndroid,
    const base::android::JavaRef<jobject>& deviceWrapper) {
  jclass clazz = org_chromium_device_bluetooth_ChromeBluetoothDevice_clazz(env);
  CHECK_CLAZZ(env, clazz,
      org_chromium_device_bluetooth_ChromeBluetoothDevice_clazz(env), NULL);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_STATIC>(
          env,
          clazz,
          "create",
"(JLorg/chromium/device/bluetooth/Wrappers$BluetoothDeviceWrapper;)Lorg/chromium/device/bluetooth/ChromeBluetoothDevice;",
          &g_org_chromium_device_bluetooth_ChromeBluetoothDevice_create);

  jobject ret =
      env->CallStaticObjectMethod(clazz,
          call_context.base.method_id, nativeBluetoothDeviceAndroid, deviceWrapper.obj());
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

static std::atomic<jmethodID>
    g_org_chromium_device_bluetooth_ChromeBluetoothDevice_getBluetoothClass(nullptr);
static jint Java_ChromeBluetoothDevice_getBluetoothClass(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  jclass clazz = org_chromium_device_bluetooth_ChromeBluetoothDevice_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_device_bluetooth_ChromeBluetoothDevice_clazz(env), 0);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "getBluetoothClass",
          "()I",
          &g_org_chromium_device_bluetooth_ChromeBluetoothDevice_getBluetoothClass);

  jint ret =
      env->CallIntMethod(obj.obj(),
          call_context.base.method_id);
  return ret;
}

static std::atomic<jmethodID>
    g_org_chromium_device_bluetooth_ChromeBluetoothDevice_getAddress(nullptr);
static base::android::ScopedJavaLocalRef<jstring> Java_ChromeBluetoothDevice_getAddress(JNIEnv* env,
    const base::android::JavaRef<jobject>& obj) {
  jclass clazz = org_chromium_device_bluetooth_ChromeBluetoothDevice_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_device_bluetooth_ChromeBluetoothDevice_clazz(env), NULL);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "getAddress",
          "()Ljava/lang/String;",
          &g_org_chromium_device_bluetooth_ChromeBluetoothDevice_getAddress);

  jstring ret =
      static_cast<jstring>(env->CallObjectMethod(obj.obj(),
          call_context.base.method_id));
  return base::android::ScopedJavaLocalRef<jstring>(env, ret);
}

static std::atomic<jmethodID>
    g_org_chromium_device_bluetooth_ChromeBluetoothDevice_getName(nullptr);
static base::android::ScopedJavaLocalRef<jstring> Java_ChromeBluetoothDevice_getName(JNIEnv* env,
    const base::android::JavaRef<jobject>& obj) {
  jclass clazz = org_chromium_device_bluetooth_ChromeBluetoothDevice_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_device_bluetooth_ChromeBluetoothDevice_clazz(env), NULL);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "getName",
          "()Ljava/lang/String;",
          &g_org_chromium_device_bluetooth_ChromeBluetoothDevice_getName);

  jstring ret =
      static_cast<jstring>(env->CallObjectMethod(obj.obj(),
          call_context.base.method_id));
  return base::android::ScopedJavaLocalRef<jstring>(env, ret);
}

static std::atomic<jmethodID>
    g_org_chromium_device_bluetooth_ChromeBluetoothDevice_isPaired(nullptr);
static jboolean Java_ChromeBluetoothDevice_isPaired(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  jclass clazz = org_chromium_device_bluetooth_ChromeBluetoothDevice_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_device_bluetooth_ChromeBluetoothDevice_clazz(env), false);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "isPaired",
          "()Z",
          &g_org_chromium_device_bluetooth_ChromeBluetoothDevice_isPaired);

  jboolean ret =
      env->CallBooleanMethod(obj.obj(),
          call_context.base.method_id);
  return ret;
}

static std::atomic<jmethodID>
    g_org_chromium_device_bluetooth_ChromeBluetoothDevice_createGattConnectionImpl(nullptr);
static void Java_ChromeBluetoothDevice_createGattConnectionImpl(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  jclass clazz = org_chromium_device_bluetooth_ChromeBluetoothDevice_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_device_bluetooth_ChromeBluetoothDevice_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "createGattConnectionImpl",
          "()V",
          &g_org_chromium_device_bluetooth_ChromeBluetoothDevice_createGattConnectionImpl);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id);
}

static std::atomic<jmethodID>
    g_org_chromium_device_bluetooth_ChromeBluetoothDevice_disconnectGatt(nullptr);
static void Java_ChromeBluetoothDevice_disconnectGatt(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  jclass clazz = org_chromium_device_bluetooth_ChromeBluetoothDevice_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_device_bluetooth_ChromeBluetoothDevice_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "disconnectGatt",
          "()V",
          &g_org_chromium_device_bluetooth_ChromeBluetoothDevice_disconnectGatt);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id);
}

}  // namespace device

#endif  // org_chromium_device_bluetooth_ChromeBluetoothDevice_JNI
