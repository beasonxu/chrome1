// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/content/browser/webcontents/WebContentsObserverProxy

#ifndef org_chromium_content_browser_webcontents_WebContentsObserverProxy_JNI
#define org_chromium_content_browser_webcontents_WebContentsObserverProxy_JNI

#include <jni.h>

#include "../../../../../../../base/android/jni_generator/jni_generator_helper.h"


// Step 1: Forward declarations.

JNI_REGISTRATION_EXPORT extern const char
    kClassPath_org_chromium_content_browser_webcontents_WebContentsObserverProxy[];
const char kClassPath_org_chromium_content_browser_webcontents_WebContentsObserverProxy[] =
    "org/chromium/content/browser/webcontents/WebContentsObserverProxy";
// Leaking this jclass as we cannot use LazyInstance from some threads.
JNI_REGISTRATION_EXPORT std::atomic<jclass>
    g_org_chromium_content_browser_webcontents_WebContentsObserverProxy_clazz(nullptr);
#ifndef org_chromium_content_browser_webcontents_WebContentsObserverProxy_clazz_defined
#define org_chromium_content_browser_webcontents_WebContentsObserverProxy_clazz_defined
inline jclass org_chromium_content_browser_webcontents_WebContentsObserverProxy_clazz(JNIEnv* env) {
  return base::android::LazyGetClass(env,
      kClassPath_org_chromium_content_browser_webcontents_WebContentsObserverProxy,
      &g_org_chromium_content_browser_webcontents_WebContentsObserverProxy_clazz);
}
#endif


// Step 2: Constants (optional).


// Step 3: Method stubs.
namespace content {

static jlong JNI_WebContentsObserverProxy_Init(JNIEnv* env, const
    base::android::JavaParamRef<jobject>& caller,
    const base::android::JavaParamRef<jobject>& webContents);

JNI_GENERATOR_EXPORT jlong Java_J_N_MTpUzW91(
    JNIEnv* env,
    jclass jcaller,
    jobject caller,
    jobject webContents) {
  return JNI_WebContentsObserverProxy_Init(env, base::android::JavaParamRef<jobject>(env, caller),
      base::android::JavaParamRef<jobject>(env, webContents));
}

JNI_GENERATOR_EXPORT void Java_J_N_M7giG0Ri(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeWebContentsObserverProxy,
    jobject caller) {
  WebContentsObserverProxy* native =
      reinterpret_cast<WebContentsObserverProxy*>(nativeWebContentsObserverProxy);
  CHECK_NATIVE_PTR(env, jcaller, native, "Destroy");
  return native->Destroy(env, base::android::JavaParamRef<jobject>(env, caller));
}


static std::atomic<jmethodID>
    g_org_chromium_content_browser_webcontents_WebContentsObserverProxy_renderFrameCreated(nullptr);
static void Java_WebContentsObserverProxy_renderFrameCreated(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, JniIntWrapper renderProcessId,
    JniIntWrapper renderFrameId) {
  jclass clazz = org_chromium_content_browser_webcontents_WebContentsObserverProxy_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_content_browser_webcontents_WebContentsObserverProxy_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "renderFrameCreated",
          "(II)V",
          &g_org_chromium_content_browser_webcontents_WebContentsObserverProxy_renderFrameCreated);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id, as_jint(renderProcessId), as_jint(renderFrameId));
}

static std::atomic<jmethodID>
    g_org_chromium_content_browser_webcontents_WebContentsObserverProxy_renderFrameDeleted(nullptr);
static void Java_WebContentsObserverProxy_renderFrameDeleted(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, JniIntWrapper renderProcessId,
    JniIntWrapper renderFrameId) {
  jclass clazz = org_chromium_content_browser_webcontents_WebContentsObserverProxy_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_content_browser_webcontents_WebContentsObserverProxy_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "renderFrameDeleted",
          "(II)V",
          &g_org_chromium_content_browser_webcontents_WebContentsObserverProxy_renderFrameDeleted);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id, as_jint(renderProcessId), as_jint(renderFrameId));
}

static std::atomic<jmethodID>
    g_org_chromium_content_browser_webcontents_WebContentsObserverProxy_renderProcessGone(nullptr);
static void Java_WebContentsObserverProxy_renderProcessGone(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  jclass clazz = org_chromium_content_browser_webcontents_WebContentsObserverProxy_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_content_browser_webcontents_WebContentsObserverProxy_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "renderProcessGone",
          "()V",
          &g_org_chromium_content_browser_webcontents_WebContentsObserverProxy_renderProcessGone);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id);
}

static std::atomic<jmethodID>
    g_org_chromium_content_browser_webcontents_WebContentsObserverProxy_didStartNavigationInPrimaryMainFrame(nullptr);
static void Java_WebContentsObserverProxy_didStartNavigationInPrimaryMainFrame(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, const base::android::JavaRef<jobject>& navigation) {
  jclass clazz = org_chromium_content_browser_webcontents_WebContentsObserverProxy_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_content_browser_webcontents_WebContentsObserverProxy_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "didStartNavigationInPrimaryMainFrame",
          "(Lorg/chromium/content_public/browser/NavigationHandle;)V",
&g_org_chromium_content_browser_webcontents_WebContentsObserverProxy_didStartNavigationInPrimaryMainFrame);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id, navigation.obj());
}

static std::atomic<jmethodID>
    g_org_chromium_content_browser_webcontents_WebContentsObserverProxy_didStartNavigationNoop(nullptr);
static void Java_WebContentsObserverProxy_didStartNavigationNoop(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, const base::android::JavaRef<jobject>& navigation) {
  jclass clazz = org_chromium_content_browser_webcontents_WebContentsObserverProxy_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_content_browser_webcontents_WebContentsObserverProxy_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "didStartNavigationNoop",
          "(Lorg/chromium/content_public/browser/NavigationHandle;)V",
&g_org_chromium_content_browser_webcontents_WebContentsObserverProxy_didStartNavigationNoop);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id, navigation.obj());
}

static std::atomic<jmethodID>
    g_org_chromium_content_browser_webcontents_WebContentsObserverProxy_didRedirectNavigation(nullptr);
static void Java_WebContentsObserverProxy_didRedirectNavigation(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, const base::android::JavaRef<jobject>& navigation) {
  jclass clazz = org_chromium_content_browser_webcontents_WebContentsObserverProxy_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_content_browser_webcontents_WebContentsObserverProxy_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "didRedirectNavigation",
          "(Lorg/chromium/content_public/browser/NavigationHandle;)V",
&g_org_chromium_content_browser_webcontents_WebContentsObserverProxy_didRedirectNavigation);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id, navigation.obj());
}

static std::atomic<jmethodID>
    g_org_chromium_content_browser_webcontents_WebContentsObserverProxy_didFinishNavigation(nullptr);
static void Java_WebContentsObserverProxy_didFinishNavigation(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, const base::android::JavaRef<jobject>& navigation) {
  jclass clazz = org_chromium_content_browser_webcontents_WebContentsObserverProxy_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_content_browser_webcontents_WebContentsObserverProxy_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "didFinishNavigation",
          "(Lorg/chromium/content_public/browser/NavigationHandle;)V",
          &g_org_chromium_content_browser_webcontents_WebContentsObserverProxy_didFinishNavigation);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id, navigation.obj());
}

static std::atomic<jmethodID>
    g_org_chromium_content_browser_webcontents_WebContentsObserverProxy_didStartLoading(nullptr);
static void Java_WebContentsObserverProxy_didStartLoading(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, const base::android::JavaRef<jobject>& url) {
  jclass clazz = org_chromium_content_browser_webcontents_WebContentsObserverProxy_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_content_browser_webcontents_WebContentsObserverProxy_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "didStartLoading",
          "(Lorg/chromium/url/GURL;)V",
          &g_org_chromium_content_browser_webcontents_WebContentsObserverProxy_didStartLoading);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id, url.obj());
}

static std::atomic<jmethodID>
    g_org_chromium_content_browser_webcontents_WebContentsObserverProxy_didStopLoading(nullptr);
static void Java_WebContentsObserverProxy_didStopLoading(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, const base::android::JavaRef<jobject>& url,
    jboolean isKnownValid) {
  jclass clazz = org_chromium_content_browser_webcontents_WebContentsObserverProxy_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_content_browser_webcontents_WebContentsObserverProxy_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "didStopLoading",
          "(Lorg/chromium/url/GURL;Z)V",
          &g_org_chromium_content_browser_webcontents_WebContentsObserverProxy_didStopLoading);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id, url.obj(), isKnownValid);
}

static std::atomic<jmethodID>
    g_org_chromium_content_browser_webcontents_WebContentsObserverProxy_loadProgressChanged(nullptr);
static void Java_WebContentsObserverProxy_loadProgressChanged(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, jfloat progress) {
  jclass clazz = org_chromium_content_browser_webcontents_WebContentsObserverProxy_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_content_browser_webcontents_WebContentsObserverProxy_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "loadProgressChanged",
          "(F)V",
          &g_org_chromium_content_browser_webcontents_WebContentsObserverProxy_loadProgressChanged);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id, progress);
}

static std::atomic<jmethodID>
    g_org_chromium_content_browser_webcontents_WebContentsObserverProxy_didChangeVisibleSecurityState(nullptr);
static void Java_WebContentsObserverProxy_didChangeVisibleSecurityState(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  jclass clazz = org_chromium_content_browser_webcontents_WebContentsObserverProxy_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_content_browser_webcontents_WebContentsObserverProxy_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "didChangeVisibleSecurityState",
          "()V",
&g_org_chromium_content_browser_webcontents_WebContentsObserverProxy_didChangeVisibleSecurityState);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id);
}

static std::atomic<jmethodID>
    g_org_chromium_content_browser_webcontents_WebContentsObserverProxy_didFailLoad(nullptr);
static void Java_WebContentsObserverProxy_didFailLoad(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, jboolean isInPrimaryMainFrame,
    JniIntWrapper errorCode,
    const base::android::JavaRef<jobject>& failingUrl,
    JniIntWrapper frameLifecycleState) {
  jclass clazz = org_chromium_content_browser_webcontents_WebContentsObserverProxy_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_content_browser_webcontents_WebContentsObserverProxy_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "didFailLoad",
          "(ZILorg/chromium/url/GURL;I)V",
          &g_org_chromium_content_browser_webcontents_WebContentsObserverProxy_didFailLoad);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id, isInPrimaryMainFrame, as_jint(errorCode), failingUrl.obj(),
              as_jint(frameLifecycleState));
}

static std::atomic<jmethodID>
    g_org_chromium_content_browser_webcontents_WebContentsObserverProxy_didFirstVisuallyNonEmptyPaint(nullptr);
static void Java_WebContentsObserverProxy_didFirstVisuallyNonEmptyPaint(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  jclass clazz = org_chromium_content_browser_webcontents_WebContentsObserverProxy_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_content_browser_webcontents_WebContentsObserverProxy_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "didFirstVisuallyNonEmptyPaint",
          "()V",
&g_org_chromium_content_browser_webcontents_WebContentsObserverProxy_didFirstVisuallyNonEmptyPaint);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id);
}

static std::atomic<jmethodID>
    g_org_chromium_content_browser_webcontents_WebContentsObserverProxy_wasShown(nullptr);
static void Java_WebContentsObserverProxy_wasShown(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  jclass clazz = org_chromium_content_browser_webcontents_WebContentsObserverProxy_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_content_browser_webcontents_WebContentsObserverProxy_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "wasShown",
          "()V",
          &g_org_chromium_content_browser_webcontents_WebContentsObserverProxy_wasShown);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id);
}

static std::atomic<jmethodID>
    g_org_chromium_content_browser_webcontents_WebContentsObserverProxy_wasHidden(nullptr);
static void Java_WebContentsObserverProxy_wasHidden(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  jclass clazz = org_chromium_content_browser_webcontents_WebContentsObserverProxy_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_content_browser_webcontents_WebContentsObserverProxy_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "wasHidden",
          "()V",
          &g_org_chromium_content_browser_webcontents_WebContentsObserverProxy_wasHidden);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id);
}

static std::atomic<jmethodID>
    g_org_chromium_content_browser_webcontents_WebContentsObserverProxy_titleWasSet(nullptr);
static void Java_WebContentsObserverProxy_titleWasSet(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, const base::android::JavaRef<jstring>& title) {
  jclass clazz = org_chromium_content_browser_webcontents_WebContentsObserverProxy_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_content_browser_webcontents_WebContentsObserverProxy_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "titleWasSet",
          "(Ljava/lang/String;)V",
          &g_org_chromium_content_browser_webcontents_WebContentsObserverProxy_titleWasSet);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id, title.obj());
}

static std::atomic<jmethodID>
    g_org_chromium_content_browser_webcontents_WebContentsObserverProxy_primaryMainDocumentElementAvailable(nullptr);
static void Java_WebContentsObserverProxy_primaryMainDocumentElementAvailable(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  jclass clazz = org_chromium_content_browser_webcontents_WebContentsObserverProxy_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_content_browser_webcontents_WebContentsObserverProxy_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "primaryMainDocumentElementAvailable",
          "()V",
&g_org_chromium_content_browser_webcontents_WebContentsObserverProxy_primaryMainDocumentElementAvailable);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id);
}

static std::atomic<jmethodID>
    g_org_chromium_content_browser_webcontents_WebContentsObserverProxy_didFinishLoad(nullptr);
static void Java_WebContentsObserverProxy_didFinishLoad(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, JniIntWrapper renderProcessId,
    JniIntWrapper renderFrameId,
    const base::android::JavaRef<jobject>& url,
    jboolean isKnownValid,
    jboolean isInPrimaryMainFrame,
    JniIntWrapper frameLifecycleState) {
  jclass clazz = org_chromium_content_browser_webcontents_WebContentsObserverProxy_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_content_browser_webcontents_WebContentsObserverProxy_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "didFinishLoad",
          "(IILorg/chromium/url/GURL;ZZI)V",
          &g_org_chromium_content_browser_webcontents_WebContentsObserverProxy_didFinishLoad);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id, as_jint(renderProcessId), as_jint(renderFrameId), url.obj(),
              isKnownValid, isInPrimaryMainFrame, as_jint(frameLifecycleState));
}

static std::atomic<jmethodID>
    g_org_chromium_content_browser_webcontents_WebContentsObserverProxy_documentLoadedInFrame(nullptr);
static void Java_WebContentsObserverProxy_documentLoadedInFrame(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, JniIntWrapper renderProcessId,
    JniIntWrapper renderFrameId,
    jboolean isInPrimaryMainFrame,
    JniIntWrapper rfhLifecycleState) {
  jclass clazz = org_chromium_content_browser_webcontents_WebContentsObserverProxy_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_content_browser_webcontents_WebContentsObserverProxy_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "documentLoadedInFrame",
          "(IIZI)V",
&g_org_chromium_content_browser_webcontents_WebContentsObserverProxy_documentLoadedInFrame);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id, as_jint(renderProcessId), as_jint(renderFrameId),
              isInPrimaryMainFrame, as_jint(rfhLifecycleState));
}

static std::atomic<jmethodID>
    g_org_chromium_content_browser_webcontents_WebContentsObserverProxy_navigationEntryCommitted(nullptr);
static void Java_WebContentsObserverProxy_navigationEntryCommitted(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, const base::android::JavaRef<jobject>& details) {
  jclass clazz = org_chromium_content_browser_webcontents_WebContentsObserverProxy_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_content_browser_webcontents_WebContentsObserverProxy_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "navigationEntryCommitted",
          "(Lorg/chromium/content_public/browser/LoadCommittedDetails;)V",
&g_org_chromium_content_browser_webcontents_WebContentsObserverProxy_navigationEntryCommitted);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id, details.obj());
}

static std::atomic<jmethodID>
    g_org_chromium_content_browser_webcontents_WebContentsObserverProxy_navigationEntriesDeleted(nullptr);
static void Java_WebContentsObserverProxy_navigationEntriesDeleted(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  jclass clazz = org_chromium_content_browser_webcontents_WebContentsObserverProxy_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_content_browser_webcontents_WebContentsObserverProxy_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "navigationEntriesDeleted",
          "()V",
&g_org_chromium_content_browser_webcontents_WebContentsObserverProxy_navigationEntriesDeleted);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id);
}

static std::atomic<jmethodID>
    g_org_chromium_content_browser_webcontents_WebContentsObserverProxy_navigationEntriesChanged(nullptr);
static void Java_WebContentsObserverProxy_navigationEntriesChanged(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  jclass clazz = org_chromium_content_browser_webcontents_WebContentsObserverProxy_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_content_browser_webcontents_WebContentsObserverProxy_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "navigationEntriesChanged",
          "()V",
&g_org_chromium_content_browser_webcontents_WebContentsObserverProxy_navigationEntriesChanged);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id);
}

static std::atomic<jmethodID>
    g_org_chromium_content_browser_webcontents_WebContentsObserverProxy_frameReceivedUserActivation(nullptr);
static void Java_WebContentsObserverProxy_frameReceivedUserActivation(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  jclass clazz = org_chromium_content_browser_webcontents_WebContentsObserverProxy_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_content_browser_webcontents_WebContentsObserverProxy_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "frameReceivedUserActivation",
          "()V",
&g_org_chromium_content_browser_webcontents_WebContentsObserverProxy_frameReceivedUserActivation);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id);
}

static std::atomic<jmethodID>
    g_org_chromium_content_browser_webcontents_WebContentsObserverProxy_didChangeThemeColor(nullptr);
static void Java_WebContentsObserverProxy_didChangeThemeColor(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  jclass clazz = org_chromium_content_browser_webcontents_WebContentsObserverProxy_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_content_browser_webcontents_WebContentsObserverProxy_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "didChangeThemeColor",
          "()V",
          &g_org_chromium_content_browser_webcontents_WebContentsObserverProxy_didChangeThemeColor);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id);
}

static std::atomic<jmethodID>
    g_org_chromium_content_browser_webcontents_WebContentsObserverProxy_mediaStartedPlaying(nullptr);
static void Java_WebContentsObserverProxy_mediaStartedPlaying(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  jclass clazz = org_chromium_content_browser_webcontents_WebContentsObserverProxy_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_content_browser_webcontents_WebContentsObserverProxy_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "mediaStartedPlaying",
          "()V",
          &g_org_chromium_content_browser_webcontents_WebContentsObserverProxy_mediaStartedPlaying);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id);
}

static std::atomic<jmethodID>
    g_org_chromium_content_browser_webcontents_WebContentsObserverProxy_mediaStoppedPlaying(nullptr);
static void Java_WebContentsObserverProxy_mediaStoppedPlaying(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  jclass clazz = org_chromium_content_browser_webcontents_WebContentsObserverProxy_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_content_browser_webcontents_WebContentsObserverProxy_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "mediaStoppedPlaying",
          "()V",
          &g_org_chromium_content_browser_webcontents_WebContentsObserverProxy_mediaStoppedPlaying);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id);
}

static std::atomic<jmethodID>
    g_org_chromium_content_browser_webcontents_WebContentsObserverProxy_hasEffectivelyFullscreenVideoChange(nullptr);
static void Java_WebContentsObserverProxy_hasEffectivelyFullscreenVideoChange(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, jboolean isFullscreen) {
  jclass clazz = org_chromium_content_browser_webcontents_WebContentsObserverProxy_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_content_browser_webcontents_WebContentsObserverProxy_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "hasEffectivelyFullscreenVideoChange",
          "(Z)V",
&g_org_chromium_content_browser_webcontents_WebContentsObserverProxy_hasEffectivelyFullscreenVideoChange);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id, isFullscreen);
}

static std::atomic<jmethodID>
    g_org_chromium_content_browser_webcontents_WebContentsObserverProxy_didToggleFullscreenModeForTab(nullptr);
static void Java_WebContentsObserverProxy_didToggleFullscreenModeForTab(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, jboolean enteredFullscreen,
    jboolean willCauseResize) {
  jclass clazz = org_chromium_content_browser_webcontents_WebContentsObserverProxy_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_content_browser_webcontents_WebContentsObserverProxy_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "didToggleFullscreenModeForTab",
          "(ZZ)V",
&g_org_chromium_content_browser_webcontents_WebContentsObserverProxy_didToggleFullscreenModeForTab);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id, enteredFullscreen, willCauseResize);
}

static std::atomic<jmethodID>
    g_org_chromium_content_browser_webcontents_WebContentsObserverProxy_viewportFitChanged(nullptr);
static void Java_WebContentsObserverProxy_viewportFitChanged(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, JniIntWrapper value) {
  jclass clazz = org_chromium_content_browser_webcontents_WebContentsObserverProxy_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_content_browser_webcontents_WebContentsObserverProxy_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "viewportFitChanged",
          "(I)V",
          &g_org_chromium_content_browser_webcontents_WebContentsObserverProxy_viewportFitChanged);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id, as_jint(value));
}

static std::atomic<jmethodID>
    g_org_chromium_content_browser_webcontents_WebContentsObserverProxy_onWebContentsFocused(nullptr);
static void Java_WebContentsObserverProxy_onWebContentsFocused(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  jclass clazz = org_chromium_content_browser_webcontents_WebContentsObserverProxy_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_content_browser_webcontents_WebContentsObserverProxy_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "onWebContentsFocused",
          "()V",
&g_org_chromium_content_browser_webcontents_WebContentsObserverProxy_onWebContentsFocused);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id);
}

static std::atomic<jmethodID>
    g_org_chromium_content_browser_webcontents_WebContentsObserverProxy_onWebContentsLostFocus(nullptr);
static void Java_WebContentsObserverProxy_onWebContentsLostFocus(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  jclass clazz = org_chromium_content_browser_webcontents_WebContentsObserverProxy_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_content_browser_webcontents_WebContentsObserverProxy_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "onWebContentsLostFocus",
          "()V",
&g_org_chromium_content_browser_webcontents_WebContentsObserverProxy_onWebContentsLostFocus);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id);
}

static std::atomic<jmethodID>
    g_org_chromium_content_browser_webcontents_WebContentsObserverProxy_destroy(nullptr);
static void Java_WebContentsObserverProxy_destroy(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  jclass clazz = org_chromium_content_browser_webcontents_WebContentsObserverProxy_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_content_browser_webcontents_WebContentsObserverProxy_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "destroy",
          "()V",
          &g_org_chromium_content_browser_webcontents_WebContentsObserverProxy_destroy);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id);
}

}  // namespace content

#endif  // org_chromium_content_browser_webcontents_WebContentsObserverProxy_JNI
