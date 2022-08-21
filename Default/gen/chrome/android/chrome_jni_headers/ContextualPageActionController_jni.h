// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/chrome/browser/segmentation_platform/ContextualPageActionController

#ifndef org_chromium_chrome_browser_segmentation_platform_ContextualPageActionController_JNI
#define org_chromium_chrome_browser_segmentation_platform_ContextualPageActionController_JNI

#include <jni.h>

#include "../../../../../../base/android/jni_generator/jni_generator_helper.h"


// Step 1: Forward declarations.


// Step 2: Constants (optional).


// Step 3: Method stubs.
static void JNI_ContextualPageActionController_ComputeContextualPageAction(JNIEnv* env, const
    base::android::JavaParamRef<jobject>& profile,
    const base::android::JavaParamRef<jobject>& url,
    const base::android::JavaParamRef<jobject>& callback);

JNI_GENERATOR_EXPORT void Java_J_N_MA2Fpe_1X(
    JNIEnv* env,
    jclass jcaller,
    jobject profile,
    jobject url,
    jobject callback) {
  return JNI_ContextualPageActionController_ComputeContextualPageAction(env,
      base::android::JavaParamRef<jobject>(env, profile), base::android::JavaParamRef<jobject>(env,
      url), base::android::JavaParamRef<jobject>(env, callback));
}


#endif  // org_chromium_chrome_browser_segmentation_platform_ContextualPageActionController_JNI
