package org.chromium.base.natives;

import java.lang.Object;

public final class GEN_JNI {
  public static boolean TESTING_ENABLED;

  public static boolean REQUIRE_MOCK;

  /**
   * org.chromium.components.thinwebview.internal.CompositorViewImpl.destroy
   * @param nativeCompositorViewImpl (long)
   * @param caller (org.chromium.components.thinwebview.internal.CompositorViewImpl)
   * @return (void)
   */
  public static final native void org_chromium_components_thinwebview_internal_CompositorViewImpl_destroy(
      long nativeCompositorViewImpl, Object caller);

  /**
   * org.chromium.components.thinwebview.internal.CompositorViewImpl.init
   * @param caller (org.chromium.components.thinwebview.internal.CompositorViewImpl)
   * @param windowAndroid (org.chromium.ui.base.WindowAndroid)
   * @param backgroundColor (int)
   * @return (long)
   */
  public static final native long org_chromium_components_thinwebview_internal_CompositorViewImpl_init(
      Object caller, Object windowAndroid, int backgroundColor);

  /**
   * org.chromium.components.thinwebview.internal.CompositorViewImpl.setNeedsComposite
   * @param nativeCompositorViewImpl (long)
   * @param caller (org.chromium.components.thinwebview.internal.CompositorViewImpl)
   * @return (void)
   */
  public static final native void org_chromium_components_thinwebview_internal_CompositorViewImpl_setNeedsComposite(
      long nativeCompositorViewImpl, Object caller);

  /**
   * org.chromium.components.thinwebview.internal.CompositorViewImpl.surfaceChanged
   * @param nativeCompositorViewImpl (long)
   * @param caller (org.chromium.components.thinwebview.internal.CompositorViewImpl)
   * @param format (int)
   * @param width (int)
   * @param height (int)
   * @param canBeUsedWithSurfaceControl (boolean)
   * @param surface (android.view.Surface)
   * @return (void)
   */
  public static final native void org_chromium_components_thinwebview_internal_CompositorViewImpl_surfaceChanged(
      long nativeCompositorViewImpl, Object caller, int format, int width, int height,
      boolean canBeUsedWithSurfaceControl, Object surface);

  /**
   * org.chromium.components.thinwebview.internal.CompositorViewImpl.surfaceCreated
   * @param nativeCompositorViewImpl (long)
   * @param caller (org.chromium.components.thinwebview.internal.CompositorViewImpl)
   * @return (void)
   */
  public static final native void org_chromium_components_thinwebview_internal_CompositorViewImpl_surfaceCreated(
      long nativeCompositorViewImpl, Object caller);

  /**
   * org.chromium.components.thinwebview.internal.CompositorViewImpl.surfaceDestroyed
   * @param nativeCompositorViewImpl (long)
   * @param caller (org.chromium.components.thinwebview.internal.CompositorViewImpl)
   * @return (void)
   */
  public static final native void org_chromium_components_thinwebview_internal_CompositorViewImpl_surfaceDestroyed(
      long nativeCompositorViewImpl, Object caller);

  /**
   * org.chromium.components.thinwebview.internal.ThinWebViewImpl.destroy
   * @param nativeThinWebView (long)
   * @param caller (org.chromium.components.thinwebview.internal.ThinWebViewImpl)
   * @return (void)
   */
  public static final native void org_chromium_components_thinwebview_internal_ThinWebViewImpl_destroy(
      long nativeThinWebView, Object caller);

  /**
   * org.chromium.components.thinwebview.internal.ThinWebViewImpl.init
   * @param caller (org.chromium.components.thinwebview.internal.ThinWebViewImpl)
   * @param compositorView (org.chromium.components.thinwebview.CompositorView)
   * @param windowAndroid (org.chromium.ui.base.WindowAndroid)
   * @return (long)
   */
  public static final native long org_chromium_components_thinwebview_internal_ThinWebViewImpl_init(
      Object caller, Object compositorView, Object windowAndroid);

  /**
   * org.chromium.components.thinwebview.internal.ThinWebViewImpl.setWebContents
   * @param nativeThinWebView (long)
   * @param caller (org.chromium.components.thinwebview.internal.ThinWebViewImpl)
   * @param webContents (org.chromium.content_public.browser.WebContents)
   * @param delegate (org.chromium.components.embedder_support.delegate.WebContentsDelegateAndroid)
   * @return (void)
   */
  public static final native void org_chromium_components_thinwebview_internal_ThinWebViewImpl_setWebContents(
      long nativeThinWebView, Object caller, Object webContents, Object delegate);

  /**
   * org.chromium.components.thinwebview.internal.ThinWebViewImpl.sizeChanged
   * @param nativeThinWebView (long)
   * @param caller (org.chromium.components.thinwebview.internal.ThinWebViewImpl)
   * @param width (int)
   * @param height (int)
   * @return (void)
   */
  public static final native void org_chromium_components_thinwebview_internal_ThinWebViewImpl_sizeChanged(
      long nativeThinWebView, Object caller, int width, int height);
}
