// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/content/browser/GpuProcessCallback

#ifndef org_chromium_content_browser_GpuProcessCallback_JNI
#define org_chromium_content_browser_GpuProcessCallback_JNI

#include <jni.h>

#include "../../../../../../../base/android/jni_generator/jni_generator_helper.h"


// Step 1: Forward declarations.


// Step 2: Constants (optional).


// Step 3: Method stubs.
namespace content {

static void JNI_GpuProcessCallback_CompleteScopedSurfaceRequest(JNIEnv* env, const
    base::android::JavaParamRef<jobject>& requestToken,
    const base::android::JavaParamRef<jobject>& surface);

JNI_GENERATOR_EXPORT void Java_J_N_M_00024O7xE3y(
    JNIEnv* env,
    jclass jcaller,
    jobject requestToken,
    jobject surface) {
  return JNI_GpuProcessCallback_CompleteScopedSurfaceRequest(env,
      base::android::JavaParamRef<jobject>(env, requestToken),
      base::android::JavaParamRef<jobject>(env, surface));
}

static base::android::ScopedJavaLocalRef<jobject> JNI_GpuProcessCallback_GetViewSurface(JNIEnv* env,
    jint surfaceId);

JNI_GENERATOR_EXPORT jobject Java_J_N_Mm9rCM0m(
    JNIEnv* env,
    jclass jcaller,
    jint surfaceId) {
  return JNI_GpuProcessCallback_GetViewSurface(env, surfaceId).Release();
}


}  // namespace content

#endif  // org_chromium_content_browser_GpuProcessCallback_JNI
