// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/chrome/browser/autofill_assistant/AssistantStaticDependenciesChrome

#ifndef org_chromium_chrome_browser_autofill_assistant_AssistantStaticDependenciesChrome_JNI
#define org_chromium_chrome_browser_autofill_assistant_AssistantStaticDependenciesChrome_JNI

#include <jni.h>

#include "../../../../../../../../base/android/jni_generator/jni_generator_helper.h"


// Step 1: Forward declarations.


// Step 2: Constants (optional).


// Step 3: Method stubs.
namespace autofill_assistant {

static jlong JNI_AssistantStaticDependenciesChrome_Init(JNIEnv* env, const
    base::android::JavaParamRef<jobject>& staticDependencies);

JNI_GENERATOR_EXPORT jlong Java_J_N_MjsKP5B8(
    JNIEnv* env,
    jclass jcaller,
    jobject staticDependencies) {
  return JNI_AssistantStaticDependenciesChrome_Init(env, base::android::JavaParamRef<jobject>(env,
      staticDependencies));
}


}  // namespace autofill_assistant

#endif  // org_chromium_chrome_browser_autofill_assistant_AssistantStaticDependenciesChrome_JNI
