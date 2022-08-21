// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/components/external_intents/ExternalIntentsFeatures

#ifndef org_chromium_components_external_intents_ExternalIntentsFeatures_JNI
#define org_chromium_components_external_intents_ExternalIntentsFeatures_JNI

#include <jni.h>

#include "../../../../../../../base/android/jni_generator/jni_generator_helper.h"


// Step 1: Forward declarations.


// Step 2: Constants (optional).


// Step 3: Method stubs.
namespace external_intents {

static jlong JNI_ExternalIntentsFeatures_GetFeature(JNIEnv* env, jint ordinal);

JNI_GENERATOR_EXPORT jlong Java_J_N_MWCIEpVs(
    JNIEnv* env,
    jclass jcaller,
    jint ordinal) {
  return JNI_ExternalIntentsFeatures_GetFeature(env, ordinal);
}


}  // namespace external_intents

#endif  // org_chromium_components_external_intents_ExternalIntentsFeatures_JNI
