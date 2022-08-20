package org.chromium.base.natives;

import java.lang.Object;

public final class GEN_JNI {
  public static boolean TESTING_ENABLED;

  public static boolean REQUIRE_MOCK;

  /**
   * org.chromium.chrome.browser.contextmenu.ContextMenuNativeDelegateImpl.init
   * @param webContents (org.chromium.content_public.browser.WebContents)
   * @param contextMenuParams (org.chromium.components.embedder_support.contextmenu.ContextMenuParams)
   * @return (long)
   */
  public static final native long org_chromium_chrome_browser_contextmenu_ContextMenuNativeDelegateImpl_init(
      Object webContents, Object contextMenuParams);

  /**
   * org.chromium.chrome.browser.contextmenu.ContextMenuNativeDelegateImpl.retrieveImageForContextMenu
   * @param nativeContextMenuNativeDelegateImpl (long)
   * @param caller (org.chromium.chrome.browser.contextmenu.ContextMenuNativeDelegateImpl)
   * @param renderFrameHost (org.chromium.content_public.browser.RenderFrameHost)
   * @param callback (org.chromium.base.Callback<android.graphics.Bitmap>)
   * @param maxWidthPx (int)
   * @param maxHeightPx (int)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_contextmenu_ContextMenuNativeDelegateImpl_retrieveImageForContextMenu(
      long nativeContextMenuNativeDelegateImpl, Object caller, Object renderFrameHost,
      Object callback, int maxWidthPx, int maxHeightPx);

  /**
   * org.chromium.chrome.browser.contextmenu.ContextMenuNativeDelegateImpl.retrieveImageForShare
   * @param nativeContextMenuNativeDelegateImpl (long)
   * @param caller (org.chromium.chrome.browser.contextmenu.ContextMenuNativeDelegateImpl)
   * @param renderFrameHost (org.chromium.content_public.browser.RenderFrameHost)
   * @param callback (org.chromium.base.Callback<org.chromium.chrome.browser.contextmenu.ContextMenuNativeDelegateImpl.ImageCallbackResult>)
   * @param maxWidthPx (int)
   * @param maxHeightPx (int)
   * @param imageFormat (int)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_contextmenu_ContextMenuNativeDelegateImpl_retrieveImageForShare(
      long nativeContextMenuNativeDelegateImpl, Object caller, Object renderFrameHost,
      Object callback, int maxWidthPx, int maxHeightPx, int imageFormat);

  /**
   * org.chromium.chrome.browser.contextmenu.ContextMenuNativeDelegateImpl.searchForImage
   * @param nativeContextMenuNativeDelegateImpl (long)
   * @param caller (org.chromium.chrome.browser.contextmenu.ContextMenuNativeDelegateImpl)
   * @param renderFrameHost (org.chromium.content_public.browser.RenderFrameHost)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_contextmenu_ContextMenuNativeDelegateImpl_searchForImage(
      long nativeContextMenuNativeDelegateImpl, Object caller, Object renderFrameHost);

  /**
   * org.chromium.chrome.browser.contextmenu.ContextMenuNativeDelegateImpl.startDownload
   * @param nativeContextMenuNativeDelegateImpl (long)
   * @param caller (org.chromium.chrome.browser.contextmenu.ContextMenuNativeDelegateImpl)
   * @param isLink (boolean)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_contextmenu_ContextMenuNativeDelegateImpl_startDownload(
      long nativeContextMenuNativeDelegateImpl, Object caller, boolean isLink);
}
