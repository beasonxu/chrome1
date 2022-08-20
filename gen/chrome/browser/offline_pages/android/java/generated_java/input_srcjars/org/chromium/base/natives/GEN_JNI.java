package org.chromium.base.natives;

import java.lang.Object;

public final class GEN_JNI {
  public static boolean TESTING_ENABLED;

  public static boolean REQUIRE_MOCK;

  /**
   * org.chromium.chrome.browser.offlinepages.prefetch.PrefetchConfiguration.isEnabledByServer
   * @param key (org.chromium.chrome.browser.profiles.ProfileKey)
   * @return (boolean)
   */
  public static final native boolean org_chromium_chrome_browser_offlinepages_prefetch_PrefetchConfiguration_isEnabledByServer(
      Object key);

  /**
   * org.chromium.chrome.browser.offlinepages.prefetch.PrefetchConfiguration.isEnabledByServerUnknown
   * @param key (org.chromium.chrome.browser.profiles.ProfileKey)
   * @return (boolean)
   */
  public static final native boolean org_chromium_chrome_browser_offlinepages_prefetch_PrefetchConfiguration_isEnabledByServerUnknown(
      Object key);

  /**
   * org.chromium.chrome.browser.offlinepages.prefetch.PrefetchConfiguration.isForbiddenCheckDue
   * @param key (org.chromium.chrome.browser.profiles.ProfileKey)
   * @return (boolean)
   */
  public static final native boolean org_chromium_chrome_browser_offlinepages_prefetch_PrefetchConfiguration_isForbiddenCheckDue(
      Object key);

  /**
   * org.chromium.chrome.browser.offlinepages.prefetch.PrefetchConfiguration.isPrefetchingEnabled
   * @param key (org.chromium.chrome.browser.profiles.ProfileKey)
   * @return (boolean)
   */
  public static final native boolean org_chromium_chrome_browser_offlinepages_prefetch_PrefetchConfiguration_isPrefetchingEnabled(
      Object key);

  /**
   * org.chromium.chrome.browser.offlinepages.prefetch.PrefetchConfiguration.isPrefetchingEnabledInSettings
   * @param key (org.chromium.chrome.browser.profiles.ProfileKey)
   * @return (boolean)
   */
  public static final native boolean org_chromium_chrome_browser_offlinepages_prefetch_PrefetchConfiguration_isPrefetchingEnabledInSettings(
      Object key);

  /**
   * org.chromium.chrome.browser.offlinepages.prefetch.PrefetchConfiguration.setPrefetchingEnabledInSettings
   * @param key (org.chromium.chrome.browser.profiles.ProfileKey)
   * @param enabled (boolean)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_offlinepages_prefetch_PrefetchConfiguration_setPrefetchingEnabledInSettings(
      Object key, boolean enabled);
}
