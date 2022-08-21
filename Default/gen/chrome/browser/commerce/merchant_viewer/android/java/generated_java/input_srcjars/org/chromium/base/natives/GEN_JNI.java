package org.chromium.base.natives;

import java.lang.Object;
import java.lang.String;

public final class GEN_JNI {
  public static boolean TESTING_ENABLED;

  public static boolean REQUIRE_MOCK;

  /**
   * org.chromium.chrome.browser.merchant_viewer.MerchantTrustSignalsEventStorage.delete
   * @param nativeMerchantSignalDB (long)
   * @param key (java.lang.String)
   * @param onComplete (java.lang.Runnable)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_merchant_1viewer_MerchantTrustSignalsEventStorage_delete(
      long nativeMerchantSignalDB, String key, Object onComplete);

  /**
   * org.chromium.chrome.browser.merchant_viewer.MerchantTrustSignalsEventStorage.deleteAll
   * @param nativeMerchantSignalDB (long)
   * @param onComplete (java.lang.Runnable)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_merchant_1viewer_MerchantTrustSignalsEventStorage_deleteAll(
      long nativeMerchantSignalDB, Object onComplete);

  /**
   * org.chromium.chrome.browser.merchant_viewer.MerchantTrustSignalsEventStorage.init
   * @param caller (org.chromium.chrome.browser.merchant_viewer.MerchantTrustSignalsEventStorage)
   * @param handle (org.chromium.content_public.browser.BrowserContextHandle)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_merchant_1viewer_MerchantTrustSignalsEventStorage_init(
      Object caller, Object handle);

  /**
   * org.chromium.chrome.browser.merchant_viewer.MerchantTrustSignalsEventStorage.load
   * @param nativeMerchantSignalDB (long)
   * @param key (java.lang.String)
   * @param callback (org.chromium.base.Callback<org.chromium.chrome.browser.merchant_viewer.MerchantTrustSignalsEvent>)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_merchant_1viewer_MerchantTrustSignalsEventStorage_load(
      long nativeMerchantSignalDB, String key, Object callback);

  /**
   * org.chromium.chrome.browser.merchant_viewer.MerchantTrustSignalsEventStorage.loadWithPrefix
   * @param nativeMerchantSignalDB (long)
   * @param prefix (java.lang.String)
   * @param callback (org.chromium.base.Callback<java.util.List<org.chromium.chrome.browser.merchant_viewer.MerchantTrustSignalsEvent>>)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_merchant_1viewer_MerchantTrustSignalsEventStorage_loadWithPrefix(
      long nativeMerchantSignalDB, String prefix, Object callback);

  /**
   * org.chromium.chrome.browser.merchant_viewer.MerchantTrustSignalsEventStorage.save
   * @param nativeMerchantSignalDB (long)
   * @param key (java.lang.String)
   * @param timestamp (long)
   * @param onComplete (java.lang.Runnable)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_merchant_1viewer_MerchantTrustSignalsEventStorage_save(
      long nativeMerchantSignalDB, String key, long timestamp, Object onComplete);

  /**
   * org.chromium.chrome.browser.merchant_viewer.WebContentsHelpers.createWebContents
   * @param profile (org.chromium.chrome.browser.profiles.Profile)
   * @param initiallyHidden (boolean)
   * @param initializeRenderer (boolean)
   * @return (org.chromium.content_public.browser.WebContents)
   */
  public static final native Object org_chromium_chrome_browser_merchant_1viewer_WebContentsHelpers_createWebContents(
      Object profile, boolean initiallyHidden, boolean initializeRenderer);

  /**
   * org.chromium.chrome.browser.merchant_viewer.WebContentsHelpers.setUserAgentOverride
   * @param webContents (org.chromium.content_public.browser.WebContents)
   * @param overrideInNewTabs (boolean)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_merchant_1viewer_WebContentsHelpers_setUserAgentOverride(
      Object webContents, boolean overrideInNewTabs);
}
