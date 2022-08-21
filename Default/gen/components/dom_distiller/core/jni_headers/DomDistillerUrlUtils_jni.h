// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/components/dom_distiller/core/DomDistillerUrlUtils

#ifndef org_chromium_components_dom_distiller_core_DomDistillerUrlUtils_JNI
#define org_chromium_components_dom_distiller_core_DomDistillerUrlUtils_JNI

#include <jni.h>

#include "../../../../../../../base/android/jni_generator/jni_generator_helper.h"


// Step 1: Forward declarations.


// Step 2: Constants (optional).


// Step 3: Method stubs.
namespace dom_distiller {
namespace url_utils {
namespace android {

static base::android::ScopedJavaLocalRef<jstring>
    JNI_DomDistillerUrlUtils_GetDistillerViewUrlFromUrl(JNIEnv* env, const
    base::android::JavaParamRef<jstring>& scheme,
    const base::android::JavaParamRef<jstring>& url,
    const base::android::JavaParamRef<jstring>& title);

JNI_GENERATOR_EXPORT jstring Java_J_N_MhGk9eKu(
    JNIEnv* env,
    jclass jcaller,
    jstring scheme,
    jstring url,
    jstring title) {
  return JNI_DomDistillerUrlUtils_GetDistillerViewUrlFromUrl(env,
      base::android::JavaParamRef<jstring>(env, scheme), base::android::JavaParamRef<jstring>(env,
      url), base::android::JavaParamRef<jstring>(env, title)).Release();
}

static base::android::ScopedJavaLocalRef<jobject>
    JNI_DomDistillerUrlUtils_GetOriginalUrlFromDistillerUrl(JNIEnv* env, const
    base::android::JavaParamRef<jstring>& viewerUrl);

JNI_GENERATOR_EXPORT jobject Java_J_N_M1WDPiaY(
    JNIEnv* env,
    jclass jcaller,
    jstring viewerUrl) {
  return JNI_DomDistillerUrlUtils_GetOriginalUrlFromDistillerUrl(env,
      base::android::JavaParamRef<jstring>(env, viewerUrl)).Release();
}

static jboolean JNI_DomDistillerUrlUtils_IsDistilledPage(JNIEnv* env, const
    base::android::JavaParamRef<jstring>& url);

JNI_GENERATOR_EXPORT jboolean Java_J_N_Me1sexxj(
    JNIEnv* env,
    jclass jcaller,
    jstring url) {
  return JNI_DomDistillerUrlUtils_IsDistilledPage(env, base::android::JavaParamRef<jstring>(env,
      url));
}

static base::android::ScopedJavaLocalRef<jstring>
    JNI_DomDistillerUrlUtils_GetValueForKeyInUrl(JNIEnv* env, const
    base::android::JavaParamRef<jstring>& url,
    const base::android::JavaParamRef<jstring>& key);

JNI_GENERATOR_EXPORT jstring Java_J_N_MaYR73PH(
    JNIEnv* env,
    jclass jcaller,
    jstring url,
    jstring key) {
  return JNI_DomDistillerUrlUtils_GetValueForKeyInUrl(env, base::android::JavaParamRef<jstring>(env,
      url), base::android::JavaParamRef<jstring>(env, key)).Release();
}


}  // namespace android
}  // namespace url_utils
}  // namespace dom_distiller

#endif  // org_chromium_components_dom_distiller_core_DomDistillerUrlUtils_JNI
