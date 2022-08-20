package org.chromium.base.natives;

import java.lang.Object;
import java.lang.String;

public final class GEN_JNI {
  public static boolean TESTING_ENABLED;

  public static boolean REQUIRE_MOCK;

  /**
   * org.chromium.chrome.browser.share.ShareHistoryBridge.addShareEntry
   * @param profile (org.chromium.chrome.browser.profiles.Profile)
   * @param string (java.lang.String)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_share_ShareHistoryBridge_addShareEntry(
      Object profile, String string);

  /**
   * org.chromium.chrome.browser.share.ShareHistoryBridge.clear
   * @param profile (org.chromium.chrome.browser.profiles.Profile)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_share_ShareHistoryBridge_clear(
      Object profile);

  /**
   * org.chromium.chrome.browser.share.ShareRankingBridge.rank
   * @param profile (org.chromium.chrome.browser.profiles.Profile)
   * @param type (java.lang.String)
   * @param available (java.lang.Object[])
   * @param fold (int)
   * @param length (int)
   * @param persist (boolean)
   * @param onDone (org.chromium.base.Callback<java.lang.String[]>)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_share_ShareRankingBridge_rank(
      Object profile, String type, Object[] available, int fold, int length, boolean persist,
      Object onDone);
}
