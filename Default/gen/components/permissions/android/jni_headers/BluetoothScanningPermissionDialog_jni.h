// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/components/permissions/BluetoothScanningPermissionDialog

#ifndef org_chromium_components_permissions_BluetoothScanningPermissionDialog_JNI
#define org_chromium_components_permissions_BluetoothScanningPermissionDialog_JNI

#include <jni.h>

#include "../../../../../../../base/android/jni_generator/jni_generator_helper.h"


// Step 1: Forward declarations.

JNI_REGISTRATION_EXPORT extern const char
    kClassPath_org_chromium_components_permissions_BluetoothScanningPermissionDialog[];
const char kClassPath_org_chromium_components_permissions_BluetoothScanningPermissionDialog[] =
    "org/chromium/components/permissions/BluetoothScanningPermissionDialog";
// Leaking this jclass as we cannot use LazyInstance from some threads.
JNI_REGISTRATION_EXPORT std::atomic<jclass>
    g_org_chromium_components_permissions_BluetoothScanningPermissionDialog_clazz(nullptr);
#ifndef org_chromium_components_permissions_BluetoothScanningPermissionDialog_clazz_defined
#define org_chromium_components_permissions_BluetoothScanningPermissionDialog_clazz_defined
inline jclass org_chromium_components_permissions_BluetoothScanningPermissionDialog_clazz(JNIEnv*
    env) {
  return base::android::LazyGetClass(env,
      kClassPath_org_chromium_components_permissions_BluetoothScanningPermissionDialog,
      &g_org_chromium_components_permissions_BluetoothScanningPermissionDialog_clazz);
}
#endif


// Step 2: Constants (optional).


// Step 3: Method stubs.
namespace permissions {

JNI_GENERATOR_EXPORT void Java_J_N_MdX25cA2(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeBluetoothScanningPromptAndroid,
    jint eventType) {
  BluetoothScanningPromptAndroid* native =
      reinterpret_cast<BluetoothScanningPromptAndroid*>(nativeBluetoothScanningPromptAndroid);
  CHECK_NATIVE_PTR(env, jcaller, native, "OnDialogFinished");
  return native->OnDialogFinished(env, eventType);
}


static std::atomic<jmethodID>
    g_org_chromium_components_permissions_BluetoothScanningPermissionDialog_create(nullptr);
static base::android::ScopedJavaLocalRef<jobject>
    Java_BluetoothScanningPermissionDialog_create(JNIEnv* env, const
    base::android::JavaRef<jobject>& windowAndroid,
    const base::android::JavaRef<jstring>& origin,
    JniIntWrapper securityLevel,
    const base::android::JavaRef<jobject>& delegate,
    jlong nativeBluetoothScanningPermissionDialogPtr) {
  jclass clazz = org_chromium_components_permissions_BluetoothScanningPermissionDialog_clazz(env);
  CHECK_CLAZZ(env, clazz,
      org_chromium_components_permissions_BluetoothScanningPermissionDialog_clazz(env), NULL);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_STATIC>(
          env,
          clazz,
          "create",
"(Lorg/chromium/ui/base/WindowAndroid;Ljava/lang/String;ILorg/chromium/components/permissions/BluetoothScanningPromptAndroidDelegate;J)Lorg/chromium/components/permissions/BluetoothScanningPermissionDialog;",
          &g_org_chromium_components_permissions_BluetoothScanningPermissionDialog_create);

  jobject ret =
      env->CallStaticObjectMethod(clazz,
          call_context.base.method_id, windowAndroid.obj(), origin.obj(), as_jint(securityLevel),
              delegate.obj(), nativeBluetoothScanningPermissionDialogPtr);
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

static std::atomic<jmethodID>
    g_org_chromium_components_permissions_BluetoothScanningPermissionDialog_addOrUpdateDevice(nullptr);
static void Java_BluetoothScanningPermissionDialog_addOrUpdateDevice(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, const base::android::JavaRef<jstring>& deviceId,
    const base::android::JavaRef<jstring>& deviceName) {
  jclass clazz = org_chromium_components_permissions_BluetoothScanningPermissionDialog_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_components_permissions_BluetoothScanningPermissionDialog_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "addOrUpdateDevice",
          "(Ljava/lang/String;Ljava/lang/String;)V",
&g_org_chromium_components_permissions_BluetoothScanningPermissionDialog_addOrUpdateDevice);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id, deviceId.obj(), deviceName.obj());
}

static std::atomic<jmethodID>
    g_org_chromium_components_permissions_BluetoothScanningPermissionDialog_closeDialog(nullptr);
static void Java_BluetoothScanningPermissionDialog_closeDialog(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  jclass clazz = org_chromium_components_permissions_BluetoothScanningPermissionDialog_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_components_permissions_BluetoothScanningPermissionDialog_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "closeDialog",
          "()V",
          &g_org_chromium_components_permissions_BluetoothScanningPermissionDialog_closeDialog);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id);
}

}  // namespace permissions

#endif  // org_chromium_components_permissions_BluetoothScanningPermissionDialog_JNI
