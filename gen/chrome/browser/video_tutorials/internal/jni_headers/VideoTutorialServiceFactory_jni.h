// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/chrome/browser/video_tutorials/VideoTutorialServiceFactory

#ifndef org_chromium_chrome_browser_video_tutorials_VideoTutorialServiceFactory_JNI
#define org_chromium_chrome_browser_video_tutorials_VideoTutorialServiceFactory_JNI

#include <jni.h>

#include "../../../../../../../../base/android/jni_generator/jni_generator_helper.h"


// Step 1: Forward declarations.


// Step 2: Constants (optional).


// Step 3: Method stubs.
static base::android::ScopedJavaLocalRef<jobject>
    JNI_VideoTutorialServiceFactory_GetForProfile(JNIEnv* env, const
    base::android::JavaParamRef<jobject>& profile);

JNI_GENERATOR_EXPORT jobject Java_J_N_MBuXqyoS(
    JNIEnv* env,
    jclass jcaller,
    jobject profile) {
  return JNI_VideoTutorialServiceFactory_GetForProfile(env,
      base::android::JavaParamRef<jobject>(env, profile)).Release();
}


#endif  // org_chromium_chrome_browser_video_tutorials_VideoTutorialServiceFactory_JNI
