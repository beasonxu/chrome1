package org.chromium.base.natives;

import java.lang.Object;
import java.lang.String;

public final class GEN_JNI {
  public static boolean TESTING_ENABLED;

  public static boolean REQUIRE_MOCK;

  /**
   * org.chromium.chrome.browser.tab.TrustedCdn.init
   * @param caller (org.chromium.chrome.browser.tab.TrustedCdn)
   * @return (long)
   */
  public static final native long org_chromium_chrome_browser_tab_TrustedCdn_init(Object caller);

  /**
   * org.chromium.chrome.browser.tab.TrustedCdn.onDestroyed
   * @param nativeTrustedCdn (long)
   * @param caller (org.chromium.chrome.browser.tab.TrustedCdn)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_tab_TrustedCdn_onDestroyed(
      long nativeTrustedCdn, Object caller);

  /**
   * org.chromium.chrome.browser.tab.TrustedCdn.resetWebContents
   * @param nativeTrustedCdn (long)
   * @param caller (org.chromium.chrome.browser.tab.TrustedCdn)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_tab_TrustedCdn_resetWebContents(
      long nativeTrustedCdn, Object caller);

  /**
   * org.chromium.chrome.browser.tab.TrustedCdn.setWebContents
   * @param nativeTrustedCdn (long)
   * @param caller (org.chromium.chrome.browser.tab.TrustedCdn)
   * @param webContents (org.chromium.content_public.browser.WebContents)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_tab_TrustedCdn_setWebContents(
      long nativeTrustedCdn, Object caller, Object webContents);

  /**
   * org.chromium.chrome.browser.tab.WebContentsStateBridge.createSingleNavigationStateAsByteBuffer
   * @param url (java.lang.String)
   * @param referrerUrl (java.lang.String)
   * @param referrerPolicy (int)
   * @param initiatorOrigin (org.chromium.url.Origin)
   * @param isIncognito (boolean)
   * @return (java.nio.ByteBuffer)
   */
  public static final native Object org_chromium_chrome_browser_tab_WebContentsStateBridge_createSingleNavigationStateAsByteBuffer(
      String url, String referrerUrl, int referrerPolicy, Object initiatorOrigin,
      boolean isIncognito);

  /**
   * org.chromium.chrome.browser.tab.WebContentsStateBridge.deleteNavigationEntries
   * @param state (java.nio.ByteBuffer)
   * @param saveStateVersion (int)
   * @param predicate (long)
   * @return (java.nio.ByteBuffer)
   */
  public static final native Object org_chromium_chrome_browser_tab_WebContentsStateBridge_deleteNavigationEntries(
      Object state, int saveStateVersion, long predicate);

  /**
   * org.chromium.chrome.browser.tab.WebContentsStateBridge.getContentsStateAsByteBuffer
   * @param webcontents (org.chromium.content_public.browser.WebContents)
   * @return (java.nio.ByteBuffer)
   */
  public static final native Object org_chromium_chrome_browser_tab_WebContentsStateBridge_getContentsStateAsByteBuffer(
      Object webcontents);

  /**
   * org.chromium.chrome.browser.tab.WebContentsStateBridge.getDisplayTitleFromByteBuffer
   * @param state (java.nio.ByteBuffer)
   * @param savedStateVersion (int)
   * @return (java.lang.String)
   */
  public static final native String org_chromium_chrome_browser_tab_WebContentsStateBridge_getDisplayTitleFromByteBuffer(
      Object state, int savedStateVersion);

  /**
   * org.chromium.chrome.browser.tab.WebContentsStateBridge.getVirtualUrlFromByteBuffer
   * @param state (java.nio.ByteBuffer)
   * @param savedStateVersion (int)
   * @return (java.lang.String)
   */
  public static final native String org_chromium_chrome_browser_tab_WebContentsStateBridge_getVirtualUrlFromByteBuffer(
      Object state, int savedStateVersion);

  /**
   * org.chromium.chrome.browser.tab.WebContentsStateBridge.restoreContentsFromByteBuffer
   * @param buffer (java.nio.ByteBuffer)
   * @param savedStateVersion (int)
   * @param initiallyHidden (boolean)
   * @param noRenderer (boolean)
   * @return (org.chromium.content_public.browser.WebContents)
   */
  public static final native Object org_chromium_chrome_browser_tab_WebContentsStateBridge_restoreContentsFromByteBuffer(
      Object buffer, int savedStateVersion, boolean initiallyHidden, boolean noRenderer);

  /**
   * org.chromium.chrome.browser.tab.state.LevelDBPersistedDataStorage.delete
   * @param nativePersistedStateDB (long)
   * @param key (java.lang.String)
   * @param onComplete (java.lang.Runnable)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_tab_state_LevelDBPersistedDataStorage_delete(
      long nativePersistedStateDB, String key, Object onComplete);

  /**
   * org.chromium.chrome.browser.tab.state.LevelDBPersistedDataStorage.destroy
   * @param nativePersistedStateDB (long)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_tab_state_LevelDBPersistedDataStorage_destroy(
      long nativePersistedStateDB);

  /**
   * org.chromium.chrome.browser.tab.state.LevelDBPersistedDataStorage.init
   * @param caller (org.chromium.chrome.browser.tab.state.LevelDBPersistedDataStorage)
   * @param handle (org.chromium.content_public.browser.BrowserContextHandle)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_tab_state_LevelDBPersistedDataStorage_init(
      Object caller, Object handle);

  /**
   * org.chromium.chrome.browser.tab.state.LevelDBPersistedDataStorage.load
   * @param nativePersistedStateDB (long)
   * @param key (java.lang.String)
   * @param callback (org.chromium.base.Callback<byte[]>)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_tab_state_LevelDBPersistedDataStorage_load(
      long nativePersistedStateDB, String key, Object callback);

  /**
   * org.chromium.chrome.browser.tab.state.LevelDBPersistedDataStorage.performMaintenance
   * @param nativePersistedStateDB (long)
   * @param keysToKeep (java.lang.String[])
   * @param dataId (java.lang.String)
   * @param onComplete (java.lang.Runnable)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_tab_state_LevelDBPersistedDataStorage_performMaintenance(
      long nativePersistedStateDB, String[] keysToKeep, String dataId, Object onComplete);

  /**
   * org.chromium.chrome.browser.tab.state.LevelDBPersistedDataStorage.save
   * @param nativePersistedStateDB (long)
   * @param key (java.lang.String)
   * @param data (byte[])
   * @param onComplete (java.lang.Runnable)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_tab_state_LevelDBPersistedDataStorage_save(
      long nativePersistedStateDB, String key, byte[] data, Object onComplete);
}
