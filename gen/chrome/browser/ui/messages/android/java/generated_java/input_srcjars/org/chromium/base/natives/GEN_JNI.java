package org.chromium.base.natives;

import java.lang.Object;
import java.lang.String;

public final class GEN_JNI {
  public static boolean TESTING_ENABLED;

  public static boolean REQUIRE_MOCK;

  /**
   * org.chromium.chrome.browser.ui.messages.infobar.SimpleConfirmInfoBarBuilder.create
   * @param webContents (org.chromium.content_public.browser.WebContents)
   * @param infobarTypeIdentifier (int)
   * @param drawable (android.graphics.Bitmap)
   * @param message (java.lang.String)
   * @param primaryText (java.lang.String)
   * @param secondaryText (java.lang.String)
   * @param linkText (java.lang.String)
   * @param autoExpire (boolean)
   * @param listener (java.lang.Object)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_ui_messages_infobar_SimpleConfirmInfoBarBuilder_create(
      Object webContents, int infobarTypeIdentifier, Object drawable, String message,
      String primaryText, String secondaryText, String linkText, boolean autoExpire,
      Object listener);
}
