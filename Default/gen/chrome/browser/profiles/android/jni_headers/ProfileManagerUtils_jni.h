// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/chrome/browser/profiles/ProfileManagerUtils

#ifndef org_chromium_chrome_browser_profiles_ProfileManagerUtils_JNI
#define org_chromium_chrome_browser_profiles_ProfileManagerUtils_JNI

#include <jni.h>

#include "../../../../../../../../base/android/jni_generator/jni_generator_helper.h"


// Step 1: Forward declarations.


// Step 2: Constants (optional).


// Step 3: Method stubs.
static void JNI_ProfileManagerUtils_FlushPersistentDataForAllProfiles(JNIEnv* env);

JNI_GENERATOR_EXPORT void Java_J_N_MPpDwRXN(
    JNIEnv* env,
    jclass jcaller) {
  return JNI_ProfileManagerUtils_FlushPersistentDataForAllProfiles(env);
}

static void JNI_ProfileManagerUtils_RemoveSessionCookiesForAllProfiles(JNIEnv* env);

JNI_GENERATOR_EXPORT void Java_J_N_M4n4n4_1y(
    JNIEnv* env,
    jclass jcaller) {
  return JNI_ProfileManagerUtils_RemoveSessionCookiesForAllProfiles(env);
}


#endif  // org_chromium_chrome_browser_profiles_ProfileManagerUtils_JNI
