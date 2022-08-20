package org.chromium.base.natives;

import java.lang.Object;

public final class GEN_JNI {
  public static boolean TESTING_ENABLED;

  public static boolean REQUIRE_MOCK;

  /**
   * org.chromium.components.content_settings.ContentSettingsObserver.destroy
   * @param nativeAndroidObserver (long)
   * @param caller (org.chromium.components.content_settings.ContentSettingsObserver)
   * @return (void)
   */
  public static final native void org_chromium_components_content_1settings_ContentSettingsObserver_destroy(
      long nativeAndroidObserver, Object caller);

  /**
   * org.chromium.components.content_settings.ContentSettingsObserver.init
   * @param caller (org.chromium.components.content_settings.ContentSettingsObserver)
   * @param contextHandle (org.chromium.content_public.browser.BrowserContextHandle)
   * @return (long)
   */
  public static final native long org_chromium_components_content_1settings_ContentSettingsObserver_init(
      Object caller, Object contextHandle);

  /**
   * org.chromium.components.content_settings.CookieControlsBridge.destroy
   * @param nativeCookieControlsBridge (long)
   * @param caller (org.chromium.components.content_settings.CookieControlsBridge)
   * @return (void)
   */
  public static final native void org_chromium_components_content_1settings_CookieControlsBridge_destroy(
      long nativeCookieControlsBridge, Object caller);

  /**
   * org.chromium.components.content_settings.CookieControlsBridge.init
   * @param caller (org.chromium.components.content_settings.CookieControlsBridge)
   * @param webContents (org.chromium.content_public.browser.WebContents)
   * @param originalContextHandle (org.chromium.content_public.browser.BrowserContextHandle)
   * @return (long)
   */
  public static final native long org_chromium_components_content_1settings_CookieControlsBridge_init(
      Object caller, Object webContents, Object originalContextHandle);

  /**
   * org.chromium.components.content_settings.CookieControlsBridge.isCookieControlsEnabled
   * @param browserContextHandle (org.chromium.content_public.browser.BrowserContextHandle)
   * @return (boolean)
   */
  public static final native boolean org_chromium_components_content_1settings_CookieControlsBridge_isCookieControlsEnabled(
      Object browserContextHandle);

  /**
   * org.chromium.components.content_settings.CookieControlsBridge.onUiClosing
   * @param nativeCookieControlsBridge (long)
   * @return (void)
   */
  public static final native void org_chromium_components_content_1settings_CookieControlsBridge_onUiClosing(
      long nativeCookieControlsBridge);

  /**
   * org.chromium.components.content_settings.CookieControlsBridge.setThirdPartyCookieBlockingEnabledForSite
   * @param nativeCookieControlsBridge (long)
   * @param blockCookies (boolean)
   * @return (void)
   */
  public static final native void org_chromium_components_content_1settings_CookieControlsBridge_setThirdPartyCookieBlockingEnabledForSite(
      long nativeCookieControlsBridge, boolean blockCookies);
}
