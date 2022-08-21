// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/net/HttpUtil

#ifndef org_chromium_net_HttpUtil_JNI
#define org_chromium_net_HttpUtil_JNI

#include <jni.h>

#include "../../../../../base/android/jni_generator/jni_generator_helper.h"


// Step 1: Forward declarations.


// Step 2: Constants (optional).


// Step 3: Method stubs.
namespace net {

static jboolean JNI_HttpUtil_IsAllowedHeader(JNIEnv* env, const
    base::android::JavaParamRef<jstring>& headerName,
    const base::android::JavaParamRef<jstring>& headerValue);

JNI_GENERATOR_EXPORT jboolean Java_J_N_MorcXgQd(
    JNIEnv* env,
    jclass jcaller,
    jstring headerName,
    jstring headerValue) {
  return JNI_HttpUtil_IsAllowedHeader(env, base::android::JavaParamRef<jstring>(env, headerName),
      base::android::JavaParamRef<jstring>(env, headerValue));
}


}  // namespace net

#endif  // org_chromium_net_HttpUtil_JNI
