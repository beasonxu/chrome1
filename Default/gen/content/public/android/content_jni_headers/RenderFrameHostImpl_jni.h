// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/content/browser/framehost/RenderFrameHostImpl

#ifndef org_chromium_content_browser_framehost_RenderFrameHostImpl_JNI
#define org_chromium_content_browser_framehost_RenderFrameHostImpl_JNI

#include <jni.h>

#include "../../../../../../../base/android/jni_generator/jni_generator_helper.h"


// Step 1: Forward declarations.

JNI_REGISTRATION_EXPORT extern const char
    kClassPath_org_chromium_content_browser_framehost_RenderFrameHostImpl[];
const char kClassPath_org_chromium_content_browser_framehost_RenderFrameHostImpl[] =
    "org/chromium/content/browser/framehost/RenderFrameHostImpl";
// Leaking this jclass as we cannot use LazyInstance from some threads.
JNI_REGISTRATION_EXPORT std::atomic<jclass>
    g_org_chromium_content_browser_framehost_RenderFrameHostImpl_clazz(nullptr);
#ifndef org_chromium_content_browser_framehost_RenderFrameHostImpl_clazz_defined
#define org_chromium_content_browser_framehost_RenderFrameHostImpl_clazz_defined
inline jclass org_chromium_content_browser_framehost_RenderFrameHostImpl_clazz(JNIEnv* env) {
  return base::android::LazyGetClass(env,
      kClassPath_org_chromium_content_browser_framehost_RenderFrameHostImpl,
      &g_org_chromium_content_browser_framehost_RenderFrameHostImpl_clazz);
}
#endif


// Step 2: Constants (optional).


// Step 3: Method stubs.
namespace content {

JNI_GENERATOR_EXPORT jobject Java_J_N_MBg_00024jIAu(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeRenderFrameHostAndroid,
    jobject caller) {
  RenderFrameHostAndroid* native =
      reinterpret_cast<RenderFrameHostAndroid*>(nativeRenderFrameHostAndroid);
  CHECK_NATIVE_PTR(env, jcaller, native, "GetLastCommittedURL", NULL);
  return native->GetLastCommittedURL(env, base::android::JavaParamRef<jobject>(env,
      caller)).Release();
}

JNI_GENERATOR_EXPORT jobject Java_J_N_Mcdslkop(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeRenderFrameHostAndroid,
    jobject caller) {
  RenderFrameHostAndroid* native =
      reinterpret_cast<RenderFrameHostAndroid*>(nativeRenderFrameHostAndroid);
  CHECK_NATIVE_PTR(env, jcaller, native, "GetLastCommittedOrigin", NULL);
  return native->GetLastCommittedOrigin(env, base::android::JavaParamRef<jobject>(env,
      caller)).Release();
}

JNI_GENERATOR_EXPORT void Java_J_N_MUV0o0vB(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeRenderFrameHostAndroid,
    jobject caller,
    jobject callback) {
  RenderFrameHostAndroid* native =
      reinterpret_cast<RenderFrameHostAndroid*>(nativeRenderFrameHostAndroid);
  CHECK_NATIVE_PTR(env, jcaller, native, "GetCanonicalUrlForSharing");
  return native->GetCanonicalUrlForSharing(env, base::android::JavaParamRef<jobject>(env, caller),
      base::android::JavaParamRef<jobject>(env, callback));
}

JNI_GENERATOR_EXPORT jobjectArray Java_J_N_MhlVMQ2e(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeRenderFrameHostAndroid,
    jobject caller) {
  RenderFrameHostAndroid* native =
      reinterpret_cast<RenderFrameHostAndroid*>(nativeRenderFrameHostAndroid);
  CHECK_NATIVE_PTR(env, jcaller, native, "GetAllRenderFrameHosts", NULL);
  return native->GetAllRenderFrameHosts(env, base::android::JavaParamRef<jobject>(env,
      caller)).Release();
}

JNI_GENERATOR_EXPORT jboolean Java_J_N_MqDsGZSU(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeRenderFrameHostAndroid,
    jobject caller,
    jint feature) {
  RenderFrameHostAndroid* native =
      reinterpret_cast<RenderFrameHostAndroid*>(nativeRenderFrameHostAndroid);
  CHECK_NATIVE_PTR(env, jcaller, native, "IsFeatureEnabled", false);
  return native->IsFeatureEnabled(env, base::android::JavaParamRef<jobject>(env, caller), feature);
}

JNI_GENERATOR_EXPORT jobject Java_J_N_MJDViTxW(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeRenderFrameHostAndroid,
    jobject caller) {
  RenderFrameHostAndroid* native =
      reinterpret_cast<RenderFrameHostAndroid*>(nativeRenderFrameHostAndroid);
  CHECK_NATIVE_PTR(env, jcaller, native, "GetAndroidOverlayRoutingToken", NULL);
  return native->GetAndroidOverlayRoutingToken(env, base::android::JavaParamRef<jobject>(env,
      caller)).Release();
}

JNI_GENERATOR_EXPORT void Java_J_N_M_00024j92GA1(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeRenderFrameHostAndroid,
    jobject caller) {
  RenderFrameHostAndroid* native =
      reinterpret_cast<RenderFrameHostAndroid*>(nativeRenderFrameHostAndroid);
  CHECK_NATIVE_PTR(env, jcaller, native, "NotifyUserActivation");
  return native->NotifyUserActivation(env, base::android::JavaParamRef<jobject>(env, caller));
}

JNI_GENERATOR_EXPORT jboolean Java_J_N_MdnzZzjw(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeRenderFrameHostAndroid,
    jobject caller) {
  RenderFrameHostAndroid* native =
      reinterpret_cast<RenderFrameHostAndroid*>(nativeRenderFrameHostAndroid);
  CHECK_NATIVE_PTR(env, jcaller, native, "SignalCloseWatcherIfActive", false);
  return native->SignalCloseWatcherIfActive(env, base::android::JavaParamRef<jobject>(env, caller));
}

JNI_GENERATOR_EXPORT jboolean Java_J_N_MtA0PSG_00024(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeRenderFrameHostAndroid,
    jobject caller) {
  RenderFrameHostAndroid* native =
      reinterpret_cast<RenderFrameHostAndroid*>(nativeRenderFrameHostAndroid);
  CHECK_NATIVE_PTR(env, jcaller, native, "IsRenderFrameLive", false);
  return native->IsRenderFrameLive(env, base::android::JavaParamRef<jobject>(env, caller));
}

JNI_GENERATOR_EXPORT void Java_J_N_MXQk8pKb(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeRenderFrameHostAndroid,
    jobject caller,
    jstring interfacename,
    jlong messagePipeRawHandle) {
  RenderFrameHostAndroid* native =
      reinterpret_cast<RenderFrameHostAndroid*>(nativeRenderFrameHostAndroid);
  CHECK_NATIVE_PTR(env, jcaller, native, "GetInterfaceToRendererFrame");
  return native->GetInterfaceToRendererFrame(env, base::android::JavaParamRef<jobject>(env, caller),
      base::android::JavaParamRef<jstring>(env, interfacename), messagePipeRawHandle);
}

JNI_GENERATOR_EXPORT void Java_J_N_MnlCu9CQ(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeRenderFrameHostAndroid,
    jobject caller,
    jint reason) {
  RenderFrameHostAndroid* native =
      reinterpret_cast<RenderFrameHostAndroid*>(nativeRenderFrameHostAndroid);
  CHECK_NATIVE_PTR(env, jcaller, native, "TerminateRendererDueToBadMessage");
  return native->TerminateRendererDueToBadMessage(env, base::android::JavaParamRef<jobject>(env,
      caller), reason);
}

JNI_GENERATOR_EXPORT jboolean Java_J_N_M6cbowZq(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeRenderFrameHostAndroid,
    jobject caller) {
  RenderFrameHostAndroid* native =
      reinterpret_cast<RenderFrameHostAndroid*>(nativeRenderFrameHostAndroid);
  CHECK_NATIVE_PTR(env, jcaller, native, "IsProcessBlocked", false);
  return native->IsProcessBlocked(env, base::android::JavaParamRef<jobject>(env, caller));
}

JNI_GENERATOR_EXPORT jobject Java_J_N_M5dgGNo_00024(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeRenderFrameHostAndroid,
    jobject caller,
    jstring relyingPartyId,
    jobject effectiveOrigin,
    jboolean isPaymentCredentialGetAssertion) {
  RenderFrameHostAndroid* native =
      reinterpret_cast<RenderFrameHostAndroid*>(nativeRenderFrameHostAndroid);
  CHECK_NATIVE_PTR(env, jcaller, native, "PerformGetAssertionWebAuthSecurityChecks", NULL);
  return native->PerformGetAssertionWebAuthSecurityChecks(env,
      base::android::JavaParamRef<jobject>(env, caller), base::android::JavaParamRef<jstring>(env,
      relyingPartyId), base::android::JavaParamRef<jobject>(env, effectiveOrigin),
      isPaymentCredentialGetAssertion).Release();
}

JNI_GENERATOR_EXPORT jint Java_J_N_M2ouq_1qG(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeRenderFrameHostAndroid,
    jobject caller,
    jstring relyingPartyId,
    jobject effectiveOrigin,
    jboolean isPaymentCredentialCreation) {
  RenderFrameHostAndroid* native =
      reinterpret_cast<RenderFrameHostAndroid*>(nativeRenderFrameHostAndroid);
  CHECK_NATIVE_PTR(env, jcaller, native, "PerformMakeCredentialWebAuthSecurityChecks", 0);
  return native->PerformMakeCredentialWebAuthSecurityChecks(env,
      base::android::JavaParamRef<jobject>(env, caller), base::android::JavaParamRef<jstring>(env,
      relyingPartyId), base::android::JavaParamRef<jobject>(env, effectiveOrigin),
      isPaymentCredentialCreation);
}

JNI_GENERATOR_EXPORT jint Java_J_N_MhJEceAt(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeRenderFrameHostAndroid,
    jobject caller) {
  RenderFrameHostAndroid* native =
      reinterpret_cast<RenderFrameHostAndroid*>(nativeRenderFrameHostAndroid);
  CHECK_NATIVE_PTR(env, jcaller, native, "GetLifecycleState", 0);
  return native->GetLifecycleState(env, base::android::JavaParamRef<jobject>(env, caller));
}


static std::atomic<jmethodID>
    g_org_chromium_content_browser_framehost_RenderFrameHostImpl_create(nullptr);
static base::android::ScopedJavaLocalRef<jobject> Java_RenderFrameHostImpl_create(JNIEnv* env, jlong
    nativeRenderFrameHostAndroid,
    const base::android::JavaRef<jobject>& delegate,
    jboolean isIncognito,
    JniIntWrapper renderProcessId,
    JniIntWrapper renderFrameId) {
  jclass clazz = org_chromium_content_browser_framehost_RenderFrameHostImpl_clazz(env);
  CHECK_CLAZZ(env, clazz,
      org_chromium_content_browser_framehost_RenderFrameHostImpl_clazz(env), NULL);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_STATIC>(
          env,
          clazz,
          "create",
"(JLorg/chromium/content/browser/framehost/RenderFrameHostDelegate;ZII)Lorg/chromium/content/browser/framehost/RenderFrameHostImpl;",
          &g_org_chromium_content_browser_framehost_RenderFrameHostImpl_create);

  jobject ret =
      env->CallStaticObjectMethod(clazz,
          call_context.base.method_id, nativeRenderFrameHostAndroid, delegate.obj(), isIncognito,
              as_jint(renderProcessId), as_jint(renderFrameId));
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

static std::atomic<jmethodID>
    g_org_chromium_content_browser_framehost_RenderFrameHostImpl_clearNativePtr(nullptr);
static void Java_RenderFrameHostImpl_clearNativePtr(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  jclass clazz = org_chromium_content_browser_framehost_RenderFrameHostImpl_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_content_browser_framehost_RenderFrameHostImpl_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "clearNativePtr",
          "()V",
          &g_org_chromium_content_browser_framehost_RenderFrameHostImpl_clearNativePtr);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id);
}

static std::atomic<jmethodID>
    g_org_chromium_content_browser_framehost_RenderFrameHostImpl_getNativePointer(nullptr);
static jlong Java_RenderFrameHostImpl_getNativePointer(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  jclass clazz = org_chromium_content_browser_framehost_RenderFrameHostImpl_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_content_browser_framehost_RenderFrameHostImpl_clazz(env), 0);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "getNativePointer",
          "()J",
          &g_org_chromium_content_browser_framehost_RenderFrameHostImpl_getNativePointer);

  jlong ret =
      env->CallLongMethod(obj.obj(),
          call_context.base.method_id);
  return ret;
}

static std::atomic<jmethodID>
    g_org_chromium_content_browser_framehost_RenderFrameHostImpl_createWebAuthSecurityChecksResults(nullptr);
static base::android::ScopedJavaLocalRef<jobject>
    Java_RenderFrameHostImpl_createWebAuthSecurityChecksResults(JNIEnv* env, JniIntWrapper
    securityCheckResult,
    jboolean isCrossOrigin) {
  jclass clazz = org_chromium_content_browser_framehost_RenderFrameHostImpl_clazz(env);
  CHECK_CLAZZ(env, clazz,
      org_chromium_content_browser_framehost_RenderFrameHostImpl_clazz(env), NULL);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_STATIC>(
          env,
          clazz,
          "createWebAuthSecurityChecksResults",
          "(IZ)Lorg/chromium/content_public/browser/RenderFrameHost$WebAuthSecurityChecksResults;",
&g_org_chromium_content_browser_framehost_RenderFrameHostImpl_createWebAuthSecurityChecksResults);

  jobject ret =
      env->CallStaticObjectMethod(clazz,
          call_context.base.method_id, as_jint(securityCheckResult), isCrossOrigin);
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

}  // namespace content

#endif  // org_chromium_content_browser_framehost_RenderFrameHostImpl_JNI
