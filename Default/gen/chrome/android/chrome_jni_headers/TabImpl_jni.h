// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/chrome/browser/tab/TabImpl

#ifndef org_chromium_chrome_browser_tab_TabImpl_JNI
#define org_chromium_chrome_browser_tab_TabImpl_JNI

#include <jni.h>

#include "../../../../../../base/android/jni_generator/jni_generator_helper.h"


// Step 1: Forward declarations.

JNI_REGISTRATION_EXPORT extern const char kClassPath_org_chromium_chrome_browser_tab_TabImpl[];
const char kClassPath_org_chromium_chrome_browser_tab_TabImpl[] =
    "org/chromium/chrome/browser/tab/TabImpl";
// Leaking this jclass as we cannot use LazyInstance from some threads.
JNI_REGISTRATION_EXPORT std::atomic<jclass>
    g_org_chromium_chrome_browser_tab_TabImpl_clazz(nullptr);
#ifndef org_chromium_chrome_browser_tab_TabImpl_clazz_defined
#define org_chromium_chrome_browser_tab_TabImpl_clazz_defined
inline jclass org_chromium_chrome_browser_tab_TabImpl_clazz(JNIEnv* env) {
  return base::android::LazyGetClass(env, kClassPath_org_chromium_chrome_browser_tab_TabImpl,
      &g_org_chromium_chrome_browser_tab_TabImpl_clazz);
}
#endif


// Step 2: Constants (optional).


// Step 3: Method stubs.
static base::android::ScopedJavaLocalRef<jobject> JNI_TabImpl_FromWebContents(JNIEnv* env, const
    base::android::JavaParamRef<jobject>& webContents);

JNI_GENERATOR_EXPORT jobject Java_J_N_MMqeq_00024AW(
    JNIEnv* env,
    jclass jcaller,
    jobject webContents) {
  return JNI_TabImpl_FromWebContents(env, base::android::JavaParamRef<jobject>(env,
      webContents)).Release();
}

static void JNI_TabImpl_Init(JNIEnv* env, const base::android::JavaParamRef<jobject>& caller);

JNI_GENERATOR_EXPORT void Java_J_N_MS_00024o3L11(
    JNIEnv* env,
    jclass jcaller,
    jobject caller) {
  return JNI_TabImpl_Init(env, base::android::JavaParamRef<jobject>(env, caller));
}

JNI_GENERATOR_EXPORT void Java_J_N_M1Fyow7a(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeTabAndroid) {
  TabAndroid* native = reinterpret_cast<TabAndroid*>(nativeTabAndroid);
  CHECK_NATIVE_PTR(env, jcaller, native, "Destroy");
  return native->Destroy(env);
}

JNI_GENERATOR_EXPORT void Java_J_N_MUKSQbrZ(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeTabAndroid,
    jboolean incognito,
    jboolean isBackgroundTab,
    jobject webContents,
    jobject delegate,
    jobject contextMenuPopulatorFactory) {
  TabAndroid* native = reinterpret_cast<TabAndroid*>(nativeTabAndroid);
  CHECK_NATIVE_PTR(env, jcaller, native, "InitWebContents");
  return native->InitWebContents(env, incognito, isBackgroundTab,
      base::android::JavaParamRef<jobject>(env, webContents),
      base::android::JavaParamRef<jobject>(env, delegate), base::android::JavaParamRef<jobject>(env,
      contextMenuPopulatorFactory));
}

JNI_GENERATOR_EXPORT void Java_J_N_M6xWklI_1(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeTabAndroid,
    jobject delegate,
    jobject contextMenuPopulatorFactory) {
  TabAndroid* native = reinterpret_cast<TabAndroid*>(nativeTabAndroid);
  CHECK_NATIVE_PTR(env, jcaller, native, "UpdateDelegates");
  return native->UpdateDelegates(env, base::android::JavaParamRef<jobject>(env, delegate),
      base::android::JavaParamRef<jobject>(env, contextMenuPopulatorFactory));
}

JNI_GENERATOR_EXPORT void Java_J_N_MYIgyGYO(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeTabAndroid) {
  TabAndroid* native = reinterpret_cast<TabAndroid*>(nativeTabAndroid);
  CHECK_NATIVE_PTR(env, jcaller, native, "DestroyWebContents");
  return native->DestroyWebContents(env);
}

JNI_GENERATOR_EXPORT void Java_J_N_MoDA8Gdb(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeTabAndroid) {
  TabAndroid* native = reinterpret_cast<TabAndroid*>(nativeTabAndroid);
  CHECK_NATIVE_PTR(env, jcaller, native, "ReleaseWebContents");
  return native->ReleaseWebContents(env);
}

JNI_GENERATOR_EXPORT void Java_J_N_MzfONDmc(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeTabAndroid,
    jobject webContents,
    jint width,
    jint height) {
  TabAndroid* native = reinterpret_cast<TabAndroid*>(nativeTabAndroid);
  CHECK_NATIVE_PTR(env, jcaller, native, "OnPhysicalBackingSizeChanged");
  return native->OnPhysicalBackingSizeChanged(env, base::android::JavaParamRef<jobject>(env,
      webContents), width, height);
}

JNI_GENERATOR_EXPORT void Java_J_N_MhCci_000240r(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeTabAndroid,
    jstring url,
    jstring title) {
  TabAndroid* native = reinterpret_cast<TabAndroid*>(nativeTabAndroid);
  CHECK_NATIVE_PTR(env, jcaller, native, "SetActiveNavigationEntryTitleForUrl");
  return native->SetActiveNavigationEntryTitleForUrl(env, base::android::JavaParamRef<jstring>(env,
      url), base::android::JavaParamRef<jstring>(env, title));
}

JNI_GENERATOR_EXPORT void Java_J_N_MNS_1JAOn(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeTabAndroid) {
  TabAndroid* native = reinterpret_cast<TabAndroid*>(nativeTabAndroid);
  CHECK_NATIVE_PTR(env, jcaller, native, "LoadOriginalImage");
  return native->LoadOriginalImage(env);
}

static jboolean JNI_TabImpl_HandleNonNavigationAboutURL(JNIEnv* env, const
    base::android::JavaParamRef<jobject>& url);

JNI_GENERATOR_EXPORT jboolean Java_J_N_Magi68_00024J(
    JNIEnv* env,
    jclass jcaller,
    jobject url) {
  return JNI_TabImpl_HandleNonNavigationAboutURL(env, base::android::JavaParamRef<jobject>(env,
      url));
}


static std::atomic<jmethodID> g_org_chromium_chrome_browser_tab_TabImpl_getId(nullptr);
static jint Java_TabImpl_getId(JNIEnv* env, const base::android::JavaRef<jobject>& obj) {
  jclass clazz = org_chromium_chrome_browser_tab_TabImpl_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_chrome_browser_tab_TabImpl_clazz(env), 0);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "getId",
          "()I",
          &g_org_chromium_chrome_browser_tab_TabImpl_getId);

  jint ret =
      env->CallIntMethod(obj.obj(),
          call_context.base.method_id);
  return ret;
}

static std::atomic<jmethodID> g_org_chromium_chrome_browser_tab_TabImpl_getUrl(nullptr);
static base::android::ScopedJavaLocalRef<jobject> Java_TabImpl_getUrl(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  jclass clazz = org_chromium_chrome_browser_tab_TabImpl_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_chrome_browser_tab_TabImpl_clazz(env), NULL);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "getUrl",
          "()Lorg/chromium/url/GURL;",
          &g_org_chromium_chrome_browser_tab_TabImpl_getUrl);

  jobject ret =
      env->CallObjectMethod(obj.obj(),
          call_context.base.method_id);
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

static std::atomic<jmethodID> g_org_chromium_chrome_browser_tab_TabImpl_getTitle(nullptr);
static base::android::ScopedJavaLocalRef<jstring> Java_TabImpl_getTitle(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  jclass clazz = org_chromium_chrome_browser_tab_TabImpl_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_chrome_browser_tab_TabImpl_clazz(env), NULL);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "getTitle",
          "()Ljava/lang/String;",
          &g_org_chromium_chrome_browser_tab_TabImpl_getTitle);

  jstring ret =
      static_cast<jstring>(env->CallObjectMethod(obj.obj(),
          call_context.base.method_id));
  return base::android::ScopedJavaLocalRef<jstring>(env, ret);
}

static std::atomic<jmethodID> g_org_chromium_chrome_browser_tab_TabImpl_isNativePage(nullptr);
static jboolean Java_TabImpl_isNativePage(JNIEnv* env, const base::android::JavaRef<jobject>& obj) {
  jclass clazz = org_chromium_chrome_browser_tab_TabImpl_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_chrome_browser_tab_TabImpl_clazz(env), false);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "isNativePage",
          "()Z",
          &g_org_chromium_chrome_browser_tab_TabImpl_isNativePage);

  jboolean ret =
      env->CallBooleanMethod(obj.obj(),
          call_context.base.method_id);
  return ret;
}

static std::atomic<jmethodID> g_org_chromium_chrome_browser_tab_TabImpl_getLaunchType(nullptr);
static jint Java_TabImpl_getLaunchType(JNIEnv* env, const base::android::JavaRef<jobject>& obj) {
  jclass clazz = org_chromium_chrome_browser_tab_TabImpl_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_chrome_browser_tab_TabImpl_clazz(env), 0);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "getLaunchType",
          "()I",
          &g_org_chromium_chrome_browser_tab_TabImpl_getLaunchType);

  jint ret =
      env->CallIntMethod(obj.obj(),
          call_context.base.method_id);
  return ret;
}

static std::atomic<jmethodID> g_org_chromium_chrome_browser_tab_TabImpl_isIncognito(nullptr);
static jboolean Java_TabImpl_isIncognito(JNIEnv* env, const base::android::JavaRef<jobject>& obj) {
  jclass clazz = org_chromium_chrome_browser_tab_TabImpl_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_chrome_browser_tab_TabImpl_clazz(env), false);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "isIncognito",
          "()Z",
          &g_org_chromium_chrome_browser_tab_TabImpl_isIncognito);

  jboolean ret =
      env->CallBooleanMethod(obj.obj(),
          call_context.base.method_id);
  return ret;
}

static std::atomic<jmethodID> g_org_chromium_chrome_browser_tab_TabImpl_isUserInteractable(nullptr);
static jboolean Java_TabImpl_isUserInteractable(JNIEnv* env, const base::android::JavaRef<jobject>&
    obj) {
  jclass clazz = org_chromium_chrome_browser_tab_TabImpl_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_chrome_browser_tab_TabImpl_clazz(env), false);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "isUserInteractable",
          "()Z",
          &g_org_chromium_chrome_browser_tab_TabImpl_isUserInteractable);

  jboolean ret =
      env->CallBooleanMethod(obj.obj(),
          call_context.base.method_id);
  return ret;
}

static std::atomic<jmethodID> g_org_chromium_chrome_browser_tab_TabImpl_isHidden(nullptr);
static jboolean Java_TabImpl_isHidden(JNIEnv* env, const base::android::JavaRef<jobject>& obj) {
  jclass clazz = org_chromium_chrome_browser_tab_TabImpl_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_chrome_browser_tab_TabImpl_clazz(env), false);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "isHidden",
          "()Z",
          &g_org_chromium_chrome_browser_tab_TabImpl_isHidden);

  jboolean ret =
      env->CallBooleanMethod(obj.obj(),
          call_context.base.method_id);
  return ret;
}

static std::atomic<jmethodID> g_org_chromium_chrome_browser_tab_TabImpl_swapWebContents(nullptr);
static void Java_TabImpl_swapWebContents(JNIEnv* env, const base::android::JavaRef<jobject>& obj,
    const base::android::JavaRef<jobject>& webContents,
    jboolean didStartLoad,
    jboolean didFinishLoad) {
  jclass clazz = org_chromium_chrome_browser_tab_TabImpl_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_chrome_browser_tab_TabImpl_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "swapWebContents",
          "(Lorg/chromium/content_public/browser/WebContents;ZZ)V",
          &g_org_chromium_chrome_browser_tab_TabImpl_swapWebContents);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id, webContents.obj(), didStartLoad, didFinishLoad);
}

static std::atomic<jmethodID> g_org_chromium_chrome_browser_tab_TabImpl_getNativePtr(nullptr);
static jlong Java_TabImpl_getNativePtr(JNIEnv* env, const base::android::JavaRef<jobject>& obj) {
  jclass clazz = org_chromium_chrome_browser_tab_TabImpl_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_chrome_browser_tab_TabImpl_clazz(env), 0);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "getNativePtr",
          "()J",
          &g_org_chromium_chrome_browser_tab_TabImpl_getNativePtr);

  jlong ret =
      env->CallLongMethod(obj.obj(),
          call_context.base.method_id);
  return ret;
}

static std::atomic<jmethodID> g_org_chromium_chrome_browser_tab_TabImpl_clearNativePtr(nullptr);
static void Java_TabImpl_clearNativePtr(JNIEnv* env, const base::android::JavaRef<jobject>& obj) {
  jclass clazz = org_chromium_chrome_browser_tab_TabImpl_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_chrome_browser_tab_TabImpl_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "clearNativePtr",
          "()V",
          &g_org_chromium_chrome_browser_tab_TabImpl_clearNativePtr);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id);
}

static std::atomic<jmethodID> g_org_chromium_chrome_browser_tab_TabImpl_setNativePtr(nullptr);
static void Java_TabImpl_setNativePtr(JNIEnv* env, const base::android::JavaRef<jobject>& obj, jlong
    nativePtr) {
  jclass clazz = org_chromium_chrome_browser_tab_TabImpl_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_chrome_browser_tab_TabImpl_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "setNativePtr",
          "(J)V",
          &g_org_chromium_chrome_browser_tab_TabImpl_setNativePtr);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id, nativePtr);
}

static std::atomic<jmethodID> g_org_chromium_chrome_browser_tab_TabImpl_getAllNativePtrs(nullptr);
static base::android::ScopedJavaLocalRef<jlongArray> Java_TabImpl_getAllNativePtrs(JNIEnv* env,
    const base::android::JavaRef<jobjectArray>& tabsArray) {
  jclass clazz = org_chromium_chrome_browser_tab_TabImpl_clazz(env);
  CHECK_CLAZZ(env, clazz,
      org_chromium_chrome_browser_tab_TabImpl_clazz(env), NULL);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_STATIC>(
          env,
          clazz,
          "getAllNativePtrs",
          "([Lorg/chromium/chrome/browser/tab/Tab;)[J",
          &g_org_chromium_chrome_browser_tab_TabImpl_getAllNativePtrs);

  jlongArray ret =
      static_cast<jlongArray>(env->CallStaticObjectMethod(clazz,
          call_context.base.method_id, tabsArray.obj()));
  return base::android::ScopedJavaLocalRef<jlongArray>(env, ret);
}

static std::atomic<jmethodID> g_org_chromium_chrome_browser_tab_TabImpl_isCustomTab(nullptr);
static jboolean Java_TabImpl_isCustomTab(JNIEnv* env, const base::android::JavaRef<jobject>& obj) {
  jclass clazz = org_chromium_chrome_browser_tab_TabImpl_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_chrome_browser_tab_TabImpl_clazz(env), false);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "isCustomTab",
          "()Z",
          &g_org_chromium_chrome_browser_tab_TabImpl_isCustomTab);

  jboolean ret =
      env->CallBooleanMethod(obj.obj(),
          call_context.base.method_id);
  return ret;
}

static std::atomic<jmethodID>
    g_org_chromium_chrome_browser_tab_TabImpl_deleteNavigationEntriesFromFrozenState(nullptr);
static void Java_TabImpl_deleteNavigationEntriesFromFrozenState(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, jlong predicate) {
  jclass clazz = org_chromium_chrome_browser_tab_TabImpl_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_chrome_browser_tab_TabImpl_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "deleteNavigationEntriesFromFrozenState",
          "(J)V",
          &g_org_chromium_chrome_browser_tab_TabImpl_deleteNavigationEntriesFromFrozenState);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id, predicate);
}

#endif  // org_chromium_chrome_browser_tab_TabImpl_JNI
