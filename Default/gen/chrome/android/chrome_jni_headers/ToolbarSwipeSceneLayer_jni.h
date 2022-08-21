// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/chrome/browser/compositor/scene_layer/ToolbarSwipeSceneLayer

#ifndef org_chromium_chrome_browser_compositor_scene_layer_ToolbarSwipeSceneLayer_JNI
#define org_chromium_chrome_browser_compositor_scene_layer_ToolbarSwipeSceneLayer_JNI

#include <jni.h>

#include "../../../../../../base/android/jni_generator/jni_generator_helper.h"


// Step 1: Forward declarations.


// Step 2: Constants (optional).


// Step 3: Method stubs.
namespace android {

static jlong JNI_ToolbarSwipeSceneLayer_Init(JNIEnv* env, const
    base::android::JavaParamRef<jobject>& caller);

JNI_GENERATOR_EXPORT jlong Java_J_N_MRop2ASy(
    JNIEnv* env,
    jclass jcaller,
    jobject caller) {
  return JNI_ToolbarSwipeSceneLayer_Init(env, base::android::JavaParamRef<jobject>(env, caller));
}

JNI_GENERATOR_EXPORT void Java_J_N_Mdsem_00024C6(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeToolbarSwipeSceneLayer,
    jobject caller,
    jobject tabContentManager) {
  ToolbarSwipeSceneLayer* native =
      reinterpret_cast<ToolbarSwipeSceneLayer*>(nativeToolbarSwipeSceneLayer);
  CHECK_NATIVE_PTR(env, jcaller, native, "SetTabContentManager");
  return native->SetTabContentManager(env, base::android::JavaParamRef<jobject>(env, caller),
      base::android::JavaParamRef<jobject>(env, tabContentManager));
}

JNI_GENERATOR_EXPORT void Java_J_N_M_14pjYxH(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeToolbarSwipeSceneLayer,
    jobject caller,
    jint id,
    jboolean leftTab,
    jboolean canUseLiveLayer,
    jint defaultBackgroundColor,
    jfloat x,
    jfloat y) {
  ToolbarSwipeSceneLayer* native =
      reinterpret_cast<ToolbarSwipeSceneLayer*>(nativeToolbarSwipeSceneLayer);
  CHECK_NATIVE_PTR(env, jcaller, native, "UpdateLayer");
  return native->UpdateLayer(env, base::android::JavaParamRef<jobject>(env, caller), id, leftTab,
      canUseLiveLayer, defaultBackgroundColor, x, y);
}


}  // namespace android

#endif  // org_chromium_chrome_browser_compositor_scene_layer_ToolbarSwipeSceneLayer_JNI
