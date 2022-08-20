// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/components/segmentation_platform/SegmentationPlatformConversionBridge

#ifndef org_chromium_components_segmentation_platform_SegmentationPlatformConversionBridge_JNI
#define org_chromium_components_segmentation_platform_SegmentationPlatformConversionBridge_JNI

#include <jni.h>

#include "../../../../../../../base/android/jni_generator/jni_generator_helper.h"


// Step 1: Forward declarations.

JNI_REGISTRATION_EXPORT extern const char
    kClassPath_org_chromium_components_segmentation_1platform_SegmentationPlatformConversionBridge[];
const char
    kClassPath_org_chromium_components_segmentation_1platform_SegmentationPlatformConversionBridge[]
    = "org/chromium/components/segmentation_platform/SegmentationPlatformConversionBridge";
// Leaking this jclass as we cannot use LazyInstance from some threads.
JNI_REGISTRATION_EXPORT std::atomic<jclass>
    g_org_chromium_components_segmentation_1platform_SegmentationPlatformConversionBridge_clazz(nullptr);
#ifndef org_chromium_components_segmentation_1platform_SegmentationPlatformConversionBridge_clazz_defined
#define org_chromium_components_segmentation_1platform_SegmentationPlatformConversionBridge_clazz_defined
inline jclass
    org_chromium_components_segmentation_1platform_SegmentationPlatformConversionBridge_clazz(JNIEnv*
    env) {
  return base::android::LazyGetClass(env,
      kClassPath_org_chromium_components_segmentation_1platform_SegmentationPlatformConversionBridge,
      &g_org_chromium_components_segmentation_1platform_SegmentationPlatformConversionBridge_clazz);
}
#endif


// Step 2: Constants (optional).


// Step 3: Method stubs.
namespace segmentation_platform {


static std::atomic<jmethodID>
    g_org_chromium_components_segmentation_1platform_SegmentationPlatformConversionBridge_createSegmentSelectionResult(nullptr);
static base::android::ScopedJavaLocalRef<jobject>
    Java_SegmentationPlatformConversionBridge_createSegmentSelectionResult(JNIEnv* env, jboolean
    isReady,
    JniIntWrapper selectedSegment) {
  jclass clazz =
      org_chromium_components_segmentation_1platform_SegmentationPlatformConversionBridge_clazz(env);
  CHECK_CLAZZ(env, clazz,
org_chromium_components_segmentation_1platform_SegmentationPlatformConversionBridge_clazz(env),
          NULL);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_STATIC>(
          env,
          clazz,
          "createSegmentSelectionResult",
          "(ZI)Lorg/chromium/components/segmentation_platform/SegmentSelectionResult;",
&g_org_chromium_components_segmentation_1platform_SegmentationPlatformConversionBridge_createSegmentSelectionResult);

  jobject ret =
      env->CallStaticObjectMethod(clazz,
          call_context.base.method_id, isReady, as_jint(selectedSegment));
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

static std::atomic<jmethodID>
    g_org_chromium_components_segmentation_1platform_SegmentationPlatformConversionBridge_createOnDemandSegmentSelectionResult(nullptr);
static base::android::ScopedJavaLocalRef<jobject>
    Java_SegmentationPlatformConversionBridge_createOnDemandSegmentSelectionResult(JNIEnv* env,
    const base::android::JavaRef<jobject>& selectedSegment,
    const base::android::JavaRef<jobject>& triggerContext) {
  jclass clazz =
      org_chromium_components_segmentation_1platform_SegmentationPlatformConversionBridge_clazz(env);
  CHECK_CLAZZ(env, clazz,
org_chromium_components_segmentation_1platform_SegmentationPlatformConversionBridge_clazz(env),
          NULL);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_STATIC>(
          env,
          clazz,
          "createOnDemandSegmentSelectionResult",
"(Lorg/chromium/components/segmentation_platform/SegmentSelectionResult;Lorg/chromium/components/segmentation_platform/TriggerContext;)Lorg/chromium/components/segmentation_platform/OnDemandSegmentSelectionResult;",
&g_org_chromium_components_segmentation_1platform_SegmentationPlatformConversionBridge_createOnDemandSegmentSelectionResult);

  jobject ret =
      env->CallStaticObjectMethod(clazz,
          call_context.base.method_id, selectedSegment.obj(), triggerContext.obj());
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

}  // namespace segmentation_platform

#endif  // org_chromium_components_segmentation_platform_SegmentationPlatformConversionBridge_JNI
