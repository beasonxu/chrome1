package org.chromium.base.natives;

import java.lang.Object;
import java.lang.String;

public final class GEN_JNI {
  public static boolean TESTING_ENABLED;

  public static boolean REQUIRE_MOCK;

  /**
   * org.chromium.chrome.browser.cookies.CookiesFetcher.persistCookies
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_cookies_CookiesFetcher_persistCookies(
      );

  /**
   * org.chromium.chrome.browser.cookies.CookiesFetcher.restoreCookies
   * @param name (java.lang.String)
   * @param value (java.lang.String)
   * @param domain (java.lang.String)
   * @param path (java.lang.String)
   * @param creation (long)
   * @param expiration (long)
   * @param lastAccess (long)
   * @param lastUpdate (long)
   * @param secure (boolean)
   * @param httpOnly (boolean)
   * @param sameSite (int)
   * @param priority (int)
   * @param sameParty (boolean)
   * @param partitionKey (java.lang.String)
   * @param sourceScheme (int)
   * @param sourcePort (int)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_cookies_CookiesFetcher_restoreCookies(
      String name, String value, String domain, String path, long creation, long expiration,
      long lastAccess, long lastUpdate, boolean secure, boolean httpOnly, int sameSite,
      int priority, boolean sameParty, String partitionKey, int sourceScheme, int sourcePort);

  /**
   * org.chromium.chrome.browser.profiles.OTRProfileID.createUniqueOTRProfileID
   * @param profileIDPrefix (java.lang.String)
   * @return (org.chromium.chrome.browser.profiles.OTRProfileID)
   */
  public static final native Object org_chromium_chrome_browser_profiles_OTRProfileID_createUniqueOTRProfileID(
      String profileIDPrefix);

  /**
   * org.chromium.chrome.browser.profiles.OTRProfileID.getPrimaryID
   * @return (org.chromium.chrome.browser.profiles.OTRProfileID)
   */
  public static final native Object org_chromium_chrome_browser_profiles_OTRProfileID_getPrimaryID(
      );

  /**
   * org.chromium.chrome.browser.profiles.Profile.destroyWhenAppropriate
   * @param nativeProfileAndroid (long)
   * @param caller (org.chromium.chrome.browser.profiles.Profile)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_profiles_Profile_destroyWhenAppropriate(
      long nativeProfileAndroid, Object caller);

  /**
   * org.chromium.chrome.browser.profiles.Profile.fromWebContents
   * @param webContents (org.chromium.content_public.browser.WebContents)
   * @return (java.lang.Object)
   */
  public static final native Object org_chromium_chrome_browser_profiles_Profile_fromWebContents(
      Object webContents);

  /**
   * org.chromium.chrome.browser.profiles.Profile.getBrowserContextPointer
   * @param nativeProfileAndroid (long)
   * @return (long)
   */
  public static final native long org_chromium_chrome_browser_profiles_Profile_getBrowserContextPointer(
      long nativeProfileAndroid);

  /**
   * org.chromium.chrome.browser.profiles.Profile.getLastUsedRegularProfile
   * @return (java.lang.Object)
   */
  public static final native Object org_chromium_chrome_browser_profiles_Profile_getLastUsedRegularProfile(
      );

  /**
   * org.chromium.chrome.browser.profiles.Profile.getOTRProfileID
   * @param nativeProfileAndroid (long)
   * @param caller (org.chromium.chrome.browser.profiles.Profile)
   * @return (org.chromium.chrome.browser.profiles.OTRProfileID)
   */
  public static final native Object org_chromium_chrome_browser_profiles_Profile_getOTRProfileID(
      long nativeProfileAndroid, Object caller);

  /**
   * org.chromium.chrome.browser.profiles.Profile.getOffTheRecordProfile
   * @param nativeProfileAndroid (long)
   * @param caller (org.chromium.chrome.browser.profiles.Profile)
   * @param otrProfileID (org.chromium.chrome.browser.profiles.OTRProfileID)
   * @param createIfNeeded (boolean)
   * @return (java.lang.Object)
   */
  public static final native Object org_chromium_chrome_browser_profiles_Profile_getOffTheRecordProfile(
      long nativeProfileAndroid, Object caller, Object otrProfileID, boolean createIfNeeded);

  /**
   * org.chromium.chrome.browser.profiles.Profile.getOriginalProfile
   * @param nativeProfileAndroid (long)
   * @param caller (org.chromium.chrome.browser.profiles.Profile)
   * @return (java.lang.Object)
   */
  public static final native Object org_chromium_chrome_browser_profiles_Profile_getOriginalProfile(
      long nativeProfileAndroid, Object caller);

  /**
   * org.chromium.chrome.browser.profiles.Profile.getPrimaryOTRProfile
   * @param nativeProfileAndroid (long)
   * @param caller (org.chromium.chrome.browser.profiles.Profile)
   * @param createIfNeeded (boolean)
   * @return (java.lang.Object)
   */
  public static final native Object org_chromium_chrome_browser_profiles_Profile_getPrimaryOTRProfile(
      long nativeProfileAndroid, Object caller, boolean createIfNeeded);

  /**
   * org.chromium.chrome.browser.profiles.Profile.getProfileKey
   * @param nativeProfileAndroid (long)
   * @param caller (org.chromium.chrome.browser.profiles.Profile)
   * @return (java.lang.Object)
   */
  public static final native Object org_chromium_chrome_browser_profiles_Profile_getProfileKey(
      long nativeProfileAndroid, Object caller);

  /**
   * org.chromium.chrome.browser.profiles.Profile.hasOffTheRecordProfile
   * @param nativeProfileAndroid (long)
   * @param caller (org.chromium.chrome.browser.profiles.Profile)
   * @param otrProfileID (org.chromium.chrome.browser.profiles.OTRProfileID)
   * @return (boolean)
   */
  public static final native boolean org_chromium_chrome_browser_profiles_Profile_hasOffTheRecordProfile(
      long nativeProfileAndroid, Object caller, Object otrProfileID);

  /**
   * org.chromium.chrome.browser.profiles.Profile.hasPrimaryOTRProfile
   * @param nativeProfileAndroid (long)
   * @param caller (org.chromium.chrome.browser.profiles.Profile)
   * @return (boolean)
   */
  public static final native boolean org_chromium_chrome_browser_profiles_Profile_hasPrimaryOTRProfile(
      long nativeProfileAndroid, Object caller);

  /**
   * org.chromium.chrome.browser.profiles.Profile.isChild
   * @param nativeProfileAndroid (long)
   * @param caller (org.chromium.chrome.browser.profiles.Profile)
   * @return (boolean)
   */
  public static final native boolean org_chromium_chrome_browser_profiles_Profile_isChild(
      long nativeProfileAndroid, Object caller);

  /**
   * org.chromium.chrome.browser.profiles.Profile.isOffTheRecord
   * @param nativeProfileAndroid (long)
   * @param caller (org.chromium.chrome.browser.profiles.Profile)
   * @return (boolean)
   */
  public static final native boolean org_chromium_chrome_browser_profiles_Profile_isOffTheRecord(
      long nativeProfileAndroid, Object caller);

  /**
   * org.chromium.chrome.browser.profiles.Profile.isPrimaryOTRProfile
   * @param nativeProfileAndroid (long)
   * @param caller (org.chromium.chrome.browser.profiles.Profile)
   * @return (boolean)
   */
  public static final native boolean org_chromium_chrome_browser_profiles_Profile_isPrimaryOTRProfile(
      long nativeProfileAndroid, Object caller);

  /**
   * org.chromium.chrome.browser.profiles.Profile.wipe
   * @param nativeProfileAndroid (long)
   * @param caller (org.chromium.chrome.browser.profiles.Profile)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_profiles_Profile_wipe(
      long nativeProfileAndroid, Object caller);

  /**
   * org.chromium.chrome.browser.profiles.ProfileKey.getLastUsedRegularProfileKey
   * @return (org.chromium.chrome.browser.profiles.ProfileKey)
   */
  public static final native Object org_chromium_chrome_browser_profiles_ProfileKey_getLastUsedRegularProfileKey(
      );

  /**
   * org.chromium.chrome.browser.profiles.ProfileKey.getOriginalKey
   * @param nativeProfileKeyAndroid (long)
   * @return (org.chromium.chrome.browser.profiles.ProfileKey)
   */
  public static final native Object org_chromium_chrome_browser_profiles_ProfileKey_getOriginalKey(
      long nativeProfileKeyAndroid);

  /**
   * org.chromium.chrome.browser.profiles.ProfileKey.getSimpleFactoryKeyPointer
   * @param nativeProfileKeyAndroid (long)
   * @return (long)
   */
  public static final native long org_chromium_chrome_browser_profiles_ProfileKey_getSimpleFactoryKeyPointer(
      long nativeProfileKeyAndroid);

  /**
   * org.chromium.chrome.browser.profiles.ProfileKey.isOffTheRecord
   * @param nativeProfileKeyAndroid (long)
   * @return (boolean)
   */
  public static final native boolean org_chromium_chrome_browser_profiles_ProfileKey_isOffTheRecord(
      long nativeProfileKeyAndroid);

  /**
   * org.chromium.chrome.browser.profiles.ProfileManagerUtils.flushPersistentDataForAllProfiles
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_profiles_ProfileManagerUtils_flushPersistentDataForAllProfiles(
      );

  /**
   * org.chromium.chrome.browser.profiles.ProfileManagerUtils.removeSessionCookiesForAllProfiles
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_profiles_ProfileManagerUtils_removeSessionCookiesForAllProfiles(
      );

  /**
   * org.chromium.chrome.browser.profiles.ProfileResolver.resolveProfile
   * @param token (java.lang.String)
   * @param callback (org.chromium.base.Callback<org.chromium.chrome.browser.profiles.Profile>)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_profiles_ProfileResolver_resolveProfile(
      String token, Object callback);

  /**
   * org.chromium.chrome.browser.profiles.ProfileResolver.resolveProfileKey
   * @param token (java.lang.String)
   * @param callback (org.chromium.base.Callback<org.chromium.chrome.browser.profiles.ProfileKey>)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_profiles_ProfileResolver_resolveProfileKey(
      String token, Object callback);

  /**
   * org.chromium.chrome.browser.profiles.ProfileResolver.tokenizeProfile
   * @param profile (org.chromium.chrome.browser.profiles.Profile)
   * @return (java.lang.String)
   */
  public static final native String org_chromium_chrome_browser_profiles_ProfileResolver_tokenizeProfile(
      Object profile);

  /**
   * org.chromium.chrome.browser.profiles.ProfileResolver.tokenizeProfileKey
   * @param profileKey (org.chromium.chrome.browser.profiles.ProfileKey)
   * @return (java.lang.String)
   */
  public static final native String org_chromium_chrome_browser_profiles_ProfileResolver_tokenizeProfileKey(
      Object profileKey);
}
