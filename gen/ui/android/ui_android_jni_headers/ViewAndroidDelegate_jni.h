// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/ui/base/ViewAndroidDelegate

#ifndef org_chromium_ui_base_ViewAndroidDelegate_JNI
#define org_chromium_ui_base_ViewAndroidDelegate_JNI

#include <jni.h>

#include "../../../../../../base/android/jni_generator/jni_generator_helper.h"


// Step 1: Forward declarations.

JNI_REGISTRATION_EXPORT extern const char kClassPath_org_chromium_ui_base_ViewAndroidDelegate[];
const char kClassPath_org_chromium_ui_base_ViewAndroidDelegate[] =
    "org/chromium/ui/base/ViewAndroidDelegate";
// Leaking this jclass as we cannot use LazyInstance from some threads.
JNI_REGISTRATION_EXPORT std::atomic<jclass>
    g_org_chromium_ui_base_ViewAndroidDelegate_clazz(nullptr);
#ifndef org_chromium_ui_base_ViewAndroidDelegate_clazz_defined
#define org_chromium_ui_base_ViewAndroidDelegate_clazz_defined
inline jclass org_chromium_ui_base_ViewAndroidDelegate_clazz(JNIEnv* env) {
  return base::android::LazyGetClass(env, kClassPath_org_chromium_ui_base_ViewAndroidDelegate,
      &g_org_chromium_ui_base_ViewAndroidDelegate_clazz);
}
#endif


// Step 2: Constants (optional).


// Step 3: Method stubs.
namespace ui {


static std::atomic<jmethodID> g_org_chromium_ui_base_ViewAndroidDelegate_acquireView(nullptr);
static base::android::ScopedJavaLocalRef<jobject> Java_ViewAndroidDelegate_acquireView(JNIEnv* env,
    const base::android::JavaRef<jobject>& obj) {
  jclass clazz = org_chromium_ui_base_ViewAndroidDelegate_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_ui_base_ViewAndroidDelegate_clazz(env), NULL);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "acquireView",
          "()Landroid/view/View;",
          &g_org_chromium_ui_base_ViewAndroidDelegate_acquireView);

  jobject ret =
      env->CallObjectMethod(obj.obj(),
          call_context.base.method_id);
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

static std::atomic<jmethodID> g_org_chromium_ui_base_ViewAndroidDelegate_removeView(nullptr);
static void Java_ViewAndroidDelegate_removeView(JNIEnv* env, const base::android::JavaRef<jobject>&
    obj, const base::android::JavaRef<jobject>& anchorView) {
  jclass clazz = org_chromium_ui_base_ViewAndroidDelegate_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_ui_base_ViewAndroidDelegate_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "removeView",
          "(Landroid/view/View;)V",
          &g_org_chromium_ui_base_ViewAndroidDelegate_removeView);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id, anchorView.obj());
}

static std::atomic<jmethodID> g_org_chromium_ui_base_ViewAndroidDelegate_setViewPosition(nullptr);
static void Java_ViewAndroidDelegate_setViewPosition(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, const base::android::JavaRef<jobject>& anchorView,
    jfloat x,
    jfloat y,
    jfloat width,
    jfloat height,
    JniIntWrapper leftMargin,
    JniIntWrapper topMargin) {
  jclass clazz = org_chromium_ui_base_ViewAndroidDelegate_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_ui_base_ViewAndroidDelegate_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "setViewPosition",
          "(Landroid/view/View;FFFFII)V",
          &g_org_chromium_ui_base_ViewAndroidDelegate_setViewPosition);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id, anchorView.obj(), x, y, width, height, as_jint(leftMargin),
              as_jint(topMargin));
}

static std::atomic<jmethodID> g_org_chromium_ui_base_ViewAndroidDelegate_startDragAndDrop(nullptr);
static jboolean Java_ViewAndroidDelegate_startDragAndDrop(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, const base::android::JavaRef<jobject>& shadowImage,
    const base::android::JavaRef<jobject>& dropData) {
  jclass clazz = org_chromium_ui_base_ViewAndroidDelegate_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_ui_base_ViewAndroidDelegate_clazz(env), false);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "startDragAndDrop",
          "(Landroid/graphics/Bitmap;Lorg/chromium/ui/dragdrop/DropDataAndroid;)Z",
          &g_org_chromium_ui_base_ViewAndroidDelegate_startDragAndDrop);

  jboolean ret =
      env->CallBooleanMethod(obj.obj(),
          call_context.base.method_id, shadowImage.obj(), dropData.obj());
  return ret;
}

static std::atomic<jmethodID>
    g_org_chromium_ui_base_ViewAndroidDelegate_onCursorChangedToCustom(nullptr);
static void Java_ViewAndroidDelegate_onCursorChangedToCustom(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, const base::android::JavaRef<jobject>& customCursorBitmap,
    JniIntWrapper hotspotX,
    JniIntWrapper hotspotY) {
  jclass clazz = org_chromium_ui_base_ViewAndroidDelegate_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_ui_base_ViewAndroidDelegate_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "onCursorChangedToCustom",
          "(Landroid/graphics/Bitmap;II)V",
          &g_org_chromium_ui_base_ViewAndroidDelegate_onCursorChangedToCustom);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id, customCursorBitmap.obj(), as_jint(hotspotX),
              as_jint(hotspotY));
}

static std::atomic<jmethodID> g_org_chromium_ui_base_ViewAndroidDelegate_onCursorChanged(nullptr);
static void Java_ViewAndroidDelegate_onCursorChanged(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, JniIntWrapper cursorType) {
  jclass clazz = org_chromium_ui_base_ViewAndroidDelegate_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_ui_base_ViewAndroidDelegate_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "onCursorChanged",
          "(I)V",
          &g_org_chromium_ui_base_ViewAndroidDelegate_onCursorChanged);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id, as_jint(cursorType));
}

static std::atomic<jmethodID>
    g_org_chromium_ui_base_ViewAndroidDelegate_setHoverActionStylusWritable(nullptr);
static void Java_ViewAndroidDelegate_setHoverActionStylusWritable(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, jboolean stylusWritable) {
  jclass clazz = org_chromium_ui_base_ViewAndroidDelegate_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_ui_base_ViewAndroidDelegate_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "setHoverActionStylusWritable",
          "(Z)V",
          &g_org_chromium_ui_base_ViewAndroidDelegate_setHoverActionStylusWritable);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id, stylusWritable);
}

static std::atomic<jmethodID>
    g_org_chromium_ui_base_ViewAndroidDelegate_onBackgroundColorChanged(nullptr);
static void Java_ViewAndroidDelegate_onBackgroundColorChanged(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, JniIntWrapper color) {
  jclass clazz = org_chromium_ui_base_ViewAndroidDelegate_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_ui_base_ViewAndroidDelegate_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "onBackgroundColorChanged",
          "(I)V",
          &g_org_chromium_ui_base_ViewAndroidDelegate_onBackgroundColorChanged);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id, as_jint(color));
}

static std::atomic<jmethodID>
    g_org_chromium_ui_base_ViewAndroidDelegate_onTopControlsChanged(nullptr);
static void Java_ViewAndroidDelegate_onTopControlsChanged(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, JniIntWrapper topControlsOffsetY,
    JniIntWrapper topContentOffsetY,
    JniIntWrapper topControlsMinHeightOffsetY) {
  jclass clazz = org_chromium_ui_base_ViewAndroidDelegate_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_ui_base_ViewAndroidDelegate_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "onTopControlsChanged",
          "(III)V",
          &g_org_chromium_ui_base_ViewAndroidDelegate_onTopControlsChanged);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id, as_jint(topControlsOffsetY), as_jint(topContentOffsetY),
              as_jint(topControlsMinHeightOffsetY));
}

static std::atomic<jmethodID>
    g_org_chromium_ui_base_ViewAndroidDelegate_onBottomControlsChanged(nullptr);
static void Java_ViewAndroidDelegate_onBottomControlsChanged(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, JniIntWrapper bottomControlsOffsetY,
    JniIntWrapper bottomControlsMinHeightOffsetY) {
  jclass clazz = org_chromium_ui_base_ViewAndroidDelegate_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_ui_base_ViewAndroidDelegate_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "onBottomControlsChanged",
          "(II)V",
          &g_org_chromium_ui_base_ViewAndroidDelegate_onBottomControlsChanged);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id, as_jint(bottomControlsOffsetY),
              as_jint(bottomControlsMinHeightOffsetY));
}

static std::atomic<jmethodID>
    g_org_chromium_ui_base_ViewAndroidDelegate_getViewportInsetBottom(nullptr);
static jint Java_ViewAndroidDelegate_getViewportInsetBottom(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  jclass clazz = org_chromium_ui_base_ViewAndroidDelegate_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_ui_base_ViewAndroidDelegate_clazz(env), 0);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "getViewportInsetBottom",
          "()I",
          &g_org_chromium_ui_base_ViewAndroidDelegate_getViewportInsetBottom);

  jint ret =
      env->CallIntMethod(obj.obj(),
          call_context.base.method_id);
  return ret;
}

static std::atomic<jmethodID>
    g_org_chromium_ui_base_ViewAndroidDelegate_onVerticalScrollDirectionChanged(nullptr);
static void Java_ViewAndroidDelegate_onVerticalScrollDirectionChanged(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, jboolean directionUp,
    jfloat currentScrollRatio) {
  jclass clazz = org_chromium_ui_base_ViewAndroidDelegate_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_ui_base_ViewAndroidDelegate_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "onVerticalScrollDirectionChanged",
          "(ZF)V",
          &g_org_chromium_ui_base_ViewAndroidDelegate_onVerticalScrollDirectionChanged);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id, directionUp, currentScrollRatio);
}

static std::atomic<jmethodID> g_org_chromium_ui_base_ViewAndroidDelegate_getContainerView(nullptr);
static base::android::ScopedJavaLocalRef<jobject> Java_ViewAndroidDelegate_getContainerView(JNIEnv*
    env, const base::android::JavaRef<jobject>& obj) {
  jclass clazz = org_chromium_ui_base_ViewAndroidDelegate_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_ui_base_ViewAndroidDelegate_clazz(env), NULL);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "getContainerView",
          "()Landroid/view/View;",
          &g_org_chromium_ui_base_ViewAndroidDelegate_getContainerView);

  jobject ret =
      env->CallObjectMethod(obj.obj(),
          call_context.base.method_id);
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

static std::atomic<jmethodID>
    g_org_chromium_ui_base_ViewAndroidDelegate_getXLocationOfContainerViewInWindow(nullptr);
static jint Java_ViewAndroidDelegate_getXLocationOfContainerViewInWindow(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  jclass clazz = org_chromium_ui_base_ViewAndroidDelegate_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_ui_base_ViewAndroidDelegate_clazz(env), 0);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "getXLocationOfContainerViewInWindow",
          "()I",
          &g_org_chromium_ui_base_ViewAndroidDelegate_getXLocationOfContainerViewInWindow);

  jint ret =
      env->CallIntMethod(obj.obj(),
          call_context.base.method_id);
  return ret;
}

static std::atomic<jmethodID>
    g_org_chromium_ui_base_ViewAndroidDelegate_getYLocationOfContainerViewInWindow(nullptr);
static jint Java_ViewAndroidDelegate_getYLocationOfContainerViewInWindow(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  jclass clazz = org_chromium_ui_base_ViewAndroidDelegate_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_ui_base_ViewAndroidDelegate_clazz(env), 0);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "getYLocationOfContainerViewInWindow",
          "()I",
          &g_org_chromium_ui_base_ViewAndroidDelegate_getYLocationOfContainerViewInWindow);

  jint ret =
      env->CallIntMethod(obj.obj(),
          call_context.base.method_id);
  return ret;
}

static std::atomic<jmethodID>
    g_org_chromium_ui_base_ViewAndroidDelegate_getXLocationOnScreen(nullptr);
static jint Java_ViewAndroidDelegate_getXLocationOnScreen(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  jclass clazz = org_chromium_ui_base_ViewAndroidDelegate_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_ui_base_ViewAndroidDelegate_clazz(env), 0);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "getXLocationOnScreen",
          "()I",
          &g_org_chromium_ui_base_ViewAndroidDelegate_getXLocationOnScreen);

  jint ret =
      env->CallIntMethod(obj.obj(),
          call_context.base.method_id);
  return ret;
}

static std::atomic<jmethodID>
    g_org_chromium_ui_base_ViewAndroidDelegate_getYLocationOnScreen(nullptr);
static jint Java_ViewAndroidDelegate_getYLocationOnScreen(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  jclass clazz = org_chromium_ui_base_ViewAndroidDelegate_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_ui_base_ViewAndroidDelegate_clazz(env), 0);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "getYLocationOnScreen",
          "()I",
          &g_org_chromium_ui_base_ViewAndroidDelegate_getYLocationOnScreen);

  jint ret =
      env->CallIntMethod(obj.obj(),
          call_context.base.method_id);
  return ret;
}

static std::atomic<jmethodID>
    g_org_chromium_ui_base_ViewAndroidDelegate_requestDisallowInterceptTouchEvent(nullptr);
static void Java_ViewAndroidDelegate_requestDisallowInterceptTouchEvent(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  jclass clazz = org_chromium_ui_base_ViewAndroidDelegate_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_ui_base_ViewAndroidDelegate_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "requestDisallowInterceptTouchEvent",
          "()V",
          &g_org_chromium_ui_base_ViewAndroidDelegate_requestDisallowInterceptTouchEvent);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id);
}

static std::atomic<jmethodID>
    g_org_chromium_ui_base_ViewAndroidDelegate_requestUnbufferedDispatch(nullptr);
static void Java_ViewAndroidDelegate_requestUnbufferedDispatch(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, const base::android::JavaRef<jobject>& event) {
  jclass clazz = org_chromium_ui_base_ViewAndroidDelegate_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_ui_base_ViewAndroidDelegate_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "requestUnbufferedDispatch",
          "(Landroid/view/MotionEvent;)V",
          &g_org_chromium_ui_base_ViewAndroidDelegate_requestUnbufferedDispatch);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id, event.obj());
}

static std::atomic<jmethodID> g_org_chromium_ui_base_ViewAndroidDelegate_hasFocus(nullptr);
static jboolean Java_ViewAndroidDelegate_hasFocus(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  jclass clazz = org_chromium_ui_base_ViewAndroidDelegate_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_ui_base_ViewAndroidDelegate_clazz(env), false);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "hasFocus",
          "()Z",
          &g_org_chromium_ui_base_ViewAndroidDelegate_hasFocus);

  jboolean ret =
      env->CallBooleanMethod(obj.obj(),
          call_context.base.method_id);
  return ret;
}

static std::atomic<jmethodID> g_org_chromium_ui_base_ViewAndroidDelegate_requestFocus(nullptr);
static void Java_ViewAndroidDelegate_requestFocus(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  jclass clazz = org_chromium_ui_base_ViewAndroidDelegate_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_ui_base_ViewAndroidDelegate_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "requestFocus",
          "()V",
          &g_org_chromium_ui_base_ViewAndroidDelegate_requestFocus);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id);
}

static std::atomic<jmethodID> g_org_chromium_ui_base_ViewAndroidDelegate_getDisplayFeature(nullptr);
static base::android::ScopedJavaLocalRef<jintArray>
    Java_ViewAndroidDelegate_getDisplayFeature(JNIEnv* env, const base::android::JavaRef<jobject>&
    obj) {
  jclass clazz = org_chromium_ui_base_ViewAndroidDelegate_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_ui_base_ViewAndroidDelegate_clazz(env), NULL);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "getDisplayFeature",
          "()[I",
          &g_org_chromium_ui_base_ViewAndroidDelegate_getDisplayFeature);

  jintArray ret =
      static_cast<jintArray>(env->CallObjectMethod(obj.obj(),
          call_context.base.method_id));
  return base::android::ScopedJavaLocalRef<jintArray>(env, ret);
}

}  // namespace ui

#endif  // org_chromium_ui_base_ViewAndroidDelegate_JNI
