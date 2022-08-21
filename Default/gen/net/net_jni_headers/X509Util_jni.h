// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/net/X509Util

#ifndef org_chromium_net_X509Util_JNI
#define org_chromium_net_X509Util_JNI

#include <jni.h>

#include "../../../../../base/android/jni_generator/jni_generator_helper.h"


// Step 1: Forward declarations.


// Step 2: Constants (optional).


// Step 3: Method stubs.
namespace net {

static void JNI_X509Util_NotifyKeyChainChanged(JNIEnv* env);

JNI_GENERATOR_EXPORT void Java_J_N_MGVAvp19(
    JNIEnv* env,
    jclass jcaller) {
  return JNI_X509Util_NotifyKeyChainChanged(env);
}


}  // namespace net

#endif  // org_chromium_net_X509Util_JNI
