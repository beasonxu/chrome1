// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/chrome/browser/password_manager/PasswordScriptsFetcherBridge

#ifndef org_chromium_chrome_browser_password_manager_PasswordScriptsFetcherBridge_JNI
#define org_chromium_chrome_browser_password_manager_PasswordScriptsFetcherBridge_JNI

#include <jni.h>

#include "../../../../../../../../base/android/jni_generator/jni_generator_helper.h"


// Step 1: Forward declarations.


// Step 2: Constants (optional).


// Step 3: Method stubs.
namespace password_manager {

static void JNI_PasswordScriptsFetcherBridge_PrewarmCache(JNIEnv* env);

JNI_GENERATOR_EXPORT void Java_J_N_MVksKGki(
    JNIEnv* env,
    jclass jcaller) {
  return JNI_PasswordScriptsFetcherBridge_PrewarmCache(env);
}


}  // namespace password_manager

#endif  // org_chromium_chrome_browser_password_manager_PasswordScriptsFetcherBridge_JNI
