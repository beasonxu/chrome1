// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/content_public/browser/LoadUrlParams

#ifndef org_chromium_content_public_browser_LoadUrlParams_JNI
#define org_chromium_content_public_browser_LoadUrlParams_JNI

#include <jni.h>

#include "../../../../../../../base/android/jni_generator/jni_generator_helper.h"


// Step 1: Forward declarations.


// Step 2: Constants (optional).


// Step 3: Method stubs.
namespace content {

static jboolean JNI_LoadUrlParams_IsDataScheme(JNIEnv* env, const
    base::android::JavaParamRef<jstring>& url);

JNI_GENERATOR_EXPORT jboolean Java_J_N_MWH2gOYe(
    JNIEnv* env,
    jclass jcaller,
    jstring url) {
  return JNI_LoadUrlParams_IsDataScheme(env, base::android::JavaParamRef<jstring>(env, url));
}


}  // namespace content

#endif  // org_chromium_content_public_browser_LoadUrlParams_JNI
