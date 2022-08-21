// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/components/payments/SslValidityChecker

#ifndef org_chromium_components_payments_SslValidityChecker_JNI
#define org_chromium_components_payments_SslValidityChecker_JNI

#include <jni.h>

#include "../../../../../../../../base/android/jni_generator/jni_generator_helper.h"


// Step 1: Forward declarations.


// Step 2: Constants (optional).


// Step 3: Method stubs.
namespace payments {

static base::android::ScopedJavaLocalRef<jstring>
    JNI_SslValidityChecker_GetInvalidSslCertificateErrorMessage(JNIEnv* env, const
    base::android::JavaParamRef<jobject>& webContents);

JNI_GENERATOR_EXPORT jstring Java_J_N_MnWerMBV(
    JNIEnv* env,
    jclass jcaller,
    jobject webContents) {
  return JNI_SslValidityChecker_GetInvalidSslCertificateErrorMessage(env,
      base::android::JavaParamRef<jobject>(env, webContents)).Release();
}

static jboolean JNI_SslValidityChecker_IsValidPageInPaymentHandlerWindow(JNIEnv* env, const
    base::android::JavaParamRef<jobject>& webContents);

JNI_GENERATOR_EXPORT jboolean Java_J_N_Me8yLh8j(
    JNIEnv* env,
    jclass jcaller,
    jobject webContents) {
  return JNI_SslValidityChecker_IsValidPageInPaymentHandlerWindow(env,
      base::android::JavaParamRef<jobject>(env, webContents));
}


}  // namespace payments

#endif  // org_chromium_components_payments_SslValidityChecker_JNI
