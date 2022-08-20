// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/chrome/browser/document/DocumentWebContentsDelegate

#ifndef org_chromium_chrome_browser_document_DocumentWebContentsDelegate_JNI
#define org_chromium_chrome_browser_document_DocumentWebContentsDelegate_JNI

#include <jni.h>

#include "../../../../../../base/android/jni_generator/jni_generator_helper.h"


// Step 1: Forward declarations.


// Step 2: Constants (optional).


// Step 3: Method stubs.
static jlong JNI_DocumentWebContentsDelegate_Initialize(JNIEnv* env, const
    base::android::JavaParamRef<jobject>& caller);

JNI_GENERATOR_EXPORT jlong Java_J_N_M69NflN_1(
    JNIEnv* env,
    jclass jcaller,
    jobject caller) {
  return JNI_DocumentWebContentsDelegate_Initialize(env, base::android::JavaParamRef<jobject>(env,
      caller));
}

JNI_GENERATOR_EXPORT void Java_J_N_MY20dsUd(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeDocumentWebContentsDelegate,
    jobject caller,
    jobject webContents) {
  DocumentWebContentsDelegate* native =
      reinterpret_cast<DocumentWebContentsDelegate*>(nativeDocumentWebContentsDelegate);
  CHECK_NATIVE_PTR(env, jcaller, native, "AttachContents");
  return native->AttachContents(env, base::android::JavaParamRef<jobject>(env, caller),
      base::android::JavaParamRef<jobject>(env, webContents));
}


#endif  // org_chromium_chrome_browser_document_DocumentWebContentsDelegate_JNI
