// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/chrome/browser/share/send_tab_to_self/SendTabToSelfAndroidBridge

#ifndef org_chromium_chrome_browser_share_send_tab_to_self_SendTabToSelfAndroidBridge_JNI
#define org_chromium_chrome_browser_share_send_tab_to_self_SendTabToSelfAndroidBridge_JNI

#include <jni.h>

#include "../../../../../../../../base/android/jni_generator/jni_generator_helper.h"


// Step 1: Forward declarations.


// Step 2: Constants (optional).


// Step 3: Method stubs.
namespace send_tab_to_self {

static jboolean JNI_SendTabToSelfAndroidBridge_AddEntry(JNIEnv* env, const
    base::android::JavaParamRef<jobject>& profile,
    const base::android::JavaParamRef<jstring>& url,
    const base::android::JavaParamRef<jstring>& title,
    const base::android::JavaParamRef<jstring>& targetDeviceSyncCacheGuid);

JNI_GENERATOR_EXPORT jboolean Java_J_N_M_00024fvB7ud(
    JNIEnv* env,
    jclass jcaller,
    jobject profile,
    jstring url,
    jstring title,
    jstring targetDeviceSyncCacheGuid) {
  return JNI_SendTabToSelfAndroidBridge_AddEntry(env, base::android::JavaParamRef<jobject>(env,
      profile), base::android::JavaParamRef<jstring>(env, url),
      base::android::JavaParamRef<jstring>(env, title), base::android::JavaParamRef<jstring>(env,
      targetDeviceSyncCacheGuid));
}

static void JNI_SendTabToSelfAndroidBridge_DeleteEntry(JNIEnv* env, const
    base::android::JavaParamRef<jobject>& profile,
    const base::android::JavaParamRef<jstring>& guid);

JNI_GENERATOR_EXPORT void Java_J_N_MOtCIw4g(
    JNIEnv* env,
    jclass jcaller,
    jobject profile,
    jstring guid) {
  return JNI_SendTabToSelfAndroidBridge_DeleteEntry(env, base::android::JavaParamRef<jobject>(env,
      profile), base::android::JavaParamRef<jstring>(env, guid));
}

static void JNI_SendTabToSelfAndroidBridge_DismissEntry(JNIEnv* env, const
    base::android::JavaParamRef<jobject>& profile,
    const base::android::JavaParamRef<jstring>& guid);

JNI_GENERATOR_EXPORT void Java_J_N_Mewze4cT(
    JNIEnv* env,
    jclass jcaller,
    jobject profile,
    jstring guid) {
  return JNI_SendTabToSelfAndroidBridge_DismissEntry(env, base::android::JavaParamRef<jobject>(env,
      profile), base::android::JavaParamRef<jstring>(env, guid));
}

static base::android::ScopedJavaLocalRef<jobjectArray>
    JNI_SendTabToSelfAndroidBridge_GetAllTargetDeviceInfos(JNIEnv* env, const
    base::android::JavaParamRef<jobject>& profile);

JNI_GENERATOR_EXPORT jobjectArray Java_J_N_MVujpkId(
    JNIEnv* env,
    jclass jcaller,
    jobject profile) {
  return JNI_SendTabToSelfAndroidBridge_GetAllTargetDeviceInfos(env,
      base::android::JavaParamRef<jobject>(env, profile)).Release();
}

static void JNI_SendTabToSelfAndroidBridge_UpdateActiveWebContents(JNIEnv* env, const
    base::android::JavaParamRef<jobject>& webContents);

JNI_GENERATOR_EXPORT void Java_J_N_MGBuAcfs(
    JNIEnv* env,
    jclass jcaller,
    jobject webContents) {
  return JNI_SendTabToSelfAndroidBridge_UpdateActiveWebContents(env,
      base::android::JavaParamRef<jobject>(env, webContents));
}

static base::android::ScopedJavaLocalRef<jobject>
    JNI_SendTabToSelfAndroidBridge_GetEntryPointDisplayReason(JNIEnv* env, const
    base::android::JavaParamRef<jobject>& profile,
    const base::android::JavaParamRef<jstring>& url);

JNI_GENERATOR_EXPORT jobject Java_J_N_MMM3n4FP(
    JNIEnv* env,
    jclass jcaller,
    jobject profile,
    jstring url) {
  return JNI_SendTabToSelfAndroidBridge_GetEntryPointDisplayReason(env,
      base::android::JavaParamRef<jobject>(env, profile), base::android::JavaParamRef<jstring>(env,
      url)).Release();
}


}  // namespace send_tab_to_self

#endif  // org_chromium_chrome_browser_share_send_tab_to_self_SendTabToSelfAndroidBridge_JNI
