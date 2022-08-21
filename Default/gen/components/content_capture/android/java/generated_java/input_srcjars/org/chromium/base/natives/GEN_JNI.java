package org.chromium.base.natives;

import java.lang.Object;

public final class GEN_JNI {
  public static boolean TESTING_ENABLED;

  public static boolean REQUIRE_MOCK;

  /**
   * org.chromium.components.content_capture.ContentCaptureFeatures.isEnabled
   * @return (boolean)
   */
  public static final native boolean org_chromium_components_content_1capture_ContentCaptureFeatures_isEnabled(
      );

  /**
   * org.chromium.components.content_capture.ContentCaptureFeatures.shouldTriggerContentCaptureForExperiment
   * @return (boolean)
   */
  public static final native boolean org_chromium_components_content_1capture_ContentCaptureFeatures_shouldTriggerContentCaptureForExperiment(
      );

  /**
   * org.chromium.components.content_capture.OnscreenContentProvider.destroy
   * @param nativeOnscreenContentProviderAndroid (long)
   * @return (void)
   */
  public static final native void org_chromium_components_content_1capture_OnscreenContentProvider_destroy(
      long nativeOnscreenContentProviderAndroid);

  /**
   * org.chromium.components.content_capture.OnscreenContentProvider.init
   * @param caller (org.chromium.components.content_capture.OnscreenContentProvider)
   * @param webContents (org.chromium.content_public.browser.WebContents)
   * @return (long)
   */
  public static final native long org_chromium_components_content_1capture_OnscreenContentProvider_init(
      Object caller, Object webContents);

  /**
   * org.chromium.components.content_capture.OnscreenContentProvider.onWebContentsChanged
   * @param nativeOnscreenContentProviderAndroid (long)
   * @param webContents (org.chromium.content_public.browser.WebContents)
   * @return (void)
   */
  public static final native void org_chromium_components_content_1capture_OnscreenContentProvider_onWebContentsChanged(
      long nativeOnscreenContentProviderAndroid, Object webContents);
}
