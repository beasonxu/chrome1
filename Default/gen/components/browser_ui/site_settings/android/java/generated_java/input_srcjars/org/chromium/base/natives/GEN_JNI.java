package org.chromium.base.natives;

import java.lang.Object;
import java.lang.String;

public final class GEN_JNI {
  public static boolean TESTING_ENABLED;

  public static boolean REQUIRE_MOCK;

  /**
   * org.chromium.components.browser_ui.site_settings.SiteSettingsFeatureList.isEnabled
   * @param featureName (java.lang.String)
   * @return (boolean)
   */
  public static final native boolean org_chromium_components_browser_1ui_site_1settings_SiteSettingsFeatureList_isEnabled(
      String featureName);

  /**
   * org.chromium.components.browser_ui.site_settings.WebsitePreferenceBridge.clearBannerData
   * @param browserContextHandle (org.chromium.content_public.browser.BrowserContextHandle)
   * @param origin (java.lang.String)
   * @return (void)
   */
  public static final native void org_chromium_components_browser_1ui_site_1settings_WebsitePreferenceBridge_clearBannerData(
      Object browserContextHandle, String origin);

  /**
   * org.chromium.components.browser_ui.site_settings.WebsitePreferenceBridge.clearCookieData
   * @param browserContextHandle (org.chromium.content_public.browser.BrowserContextHandle)
   * @param path (java.lang.String)
   * @return (void)
   */
  public static final native void org_chromium_components_browser_1ui_site_1settings_WebsitePreferenceBridge_clearCookieData(
      Object browserContextHandle, String path);

  /**
   * org.chromium.components.browser_ui.site_settings.WebsitePreferenceBridge.clearLocalStorageData
   * @param browserContextHandle (org.chromium.content_public.browser.BrowserContextHandle)
   * @param path (java.lang.String)
   * @param callback (java.lang.Object)
   * @return (void)
   */
  public static final native void org_chromium_components_browser_1ui_site_1settings_WebsitePreferenceBridge_clearLocalStorageData(
      Object browserContextHandle, String path, Object callback);

  /**
   * org.chromium.components.browser_ui.site_settings.WebsitePreferenceBridge.clearMediaLicenses
   * @param browserContextHandle (org.chromium.content_public.browser.BrowserContextHandle)
   * @param origin (java.lang.String)
   * @return (void)
   */
  public static final native void org_chromium_components_browser_1ui_site_1settings_WebsitePreferenceBridge_clearMediaLicenses(
      Object browserContextHandle, String origin);

  /**
   * org.chromium.components.browser_ui.site_settings.WebsitePreferenceBridge.clearStorageData
   * @param browserContextHandle (org.chromium.content_public.browser.BrowserContextHandle)
   * @param origin (java.lang.String)
   * @param type (int)
   * @param callback (java.lang.Object)
   * @return (void)
   */
  public static final native void org_chromium_components_browser_1ui_site_1settings_WebsitePreferenceBridge_clearStorageData(
      Object browserContextHandle, String origin, int type, Object callback);

  /**
   * org.chromium.components.browser_ui.site_settings.WebsitePreferenceBridge.fetchLocalStorageInfo
   * @param browserContextHandle (org.chromium.content_public.browser.BrowserContextHandle)
   * @param callback (java.lang.Object)
   * @param includeImportant (boolean)
   * @return (void)
   */
  public static final native void org_chromium_components_browser_1ui_site_1settings_WebsitePreferenceBridge_fetchLocalStorageInfo(
      Object browserContextHandle, Object callback, boolean includeImportant);

  /**
   * org.chromium.components.browser_ui.site_settings.WebsitePreferenceBridge.fetchStorageInfo
   * @param browserContextHandle (org.chromium.content_public.browser.BrowserContextHandle)
   * @param callback (java.lang.Object)
   * @return (void)
   */
  public static final native void org_chromium_components_browser_1ui_site_1settings_WebsitePreferenceBridge_fetchStorageInfo(
      Object browserContextHandle, Object callback);

  /**
   * org.chromium.components.browser_ui.site_settings.WebsitePreferenceBridge.getAdBlockingActivated
   * @param browserContextHandle (org.chromium.content_public.browser.BrowserContextHandle)
   * @param origin (java.lang.String)
   * @return (boolean)
   */
  public static final native boolean org_chromium_components_browser_1ui_site_1settings_WebsitePreferenceBridge_getAdBlockingActivated(
      Object browserContextHandle, String origin);

  /**
   * org.chromium.components.browser_ui.site_settings.WebsitePreferenceBridge.getChosenObjects
   * @param browserContextHandle (org.chromium.content_public.browser.BrowserContextHandle)
   * @param type (int)
   * @param list (java.lang.Object)
   * @return (void)
   */
  public static final native void org_chromium_components_browser_1ui_site_1settings_WebsitePreferenceBridge_getChosenObjects(
      Object browserContextHandle, int type, Object list);

  /**
   * org.chromium.components.browser_ui.site_settings.WebsitePreferenceBridge.getContentSetting
   * @param browserContextHandle (org.chromium.content_public.browser.BrowserContextHandle)
   * @param contentSettingType (int)
   * @param primaryUrl (org.chromium.url.GURL)
   * @param secondaryUrl (org.chromium.url.GURL)
   * @return (int)
   */
  public static final native int org_chromium_components_browser_1ui_site_1settings_WebsitePreferenceBridge_getContentSetting(
      Object browserContextHandle, int contentSettingType, Object primaryUrl, Object secondaryUrl);

  /**
   * org.chromium.components.browser_ui.site_settings.WebsitePreferenceBridge.getContentSettingsExceptions
   * @param browserContextHandle (org.chromium.content_public.browser.BrowserContextHandle)
   * @param contentSettingsType (int)
   * @param list (java.util.List<org.chromium.components.browser_ui.site_settings.ContentSettingException>)
   * @return (void)
   */
  public static final native void org_chromium_components_browser_1ui_site_1settings_WebsitePreferenceBridge_getContentSettingsExceptions(
      Object browserContextHandle, int contentSettingsType, Object list);

  /**
   * org.chromium.components.browser_ui.site_settings.WebsitePreferenceBridge.getDefaultContentSetting
   * @param browserContextHandle (org.chromium.content_public.browser.BrowserContextHandle)
   * @param contentSettingType (int)
   * @return (int)
   */
  public static final native int org_chromium_components_browser_1ui_site_1settings_WebsitePreferenceBridge_getDefaultContentSetting(
      Object browserContextHandle, int contentSettingType);

  /**
   * org.chromium.components.browser_ui.site_settings.WebsitePreferenceBridge.getLocationAllowedByPolicy
   * @param browserContextHandle (org.chromium.content_public.browser.BrowserContextHandle)
   * @return (boolean)
   */
  public static final native boolean org_chromium_components_browser_1ui_site_1settings_WebsitePreferenceBridge_getLocationAllowedByPolicy(
      Object browserContextHandle);

  /**
   * org.chromium.components.browser_ui.site_settings.WebsitePreferenceBridge.getOriginsForPermission
   * @param browserContextHandle (org.chromium.content_public.browser.BrowserContextHandle)
   * @param contentSettingsType (int)
   * @param list (java.lang.Object)
   * @param managedOnly (boolean)
   * @return (void)
   */
  public static final native void org_chromium_components_browser_1ui_site_1settings_WebsitePreferenceBridge_getOriginsForPermission(
      Object browserContextHandle, int contentSettingsType, Object list, boolean managedOnly);

  /**
   * org.chromium.components.browser_ui.site_settings.WebsitePreferenceBridge.getPermissionSettingForOrigin
   * @param browserContextHandle (org.chromium.content_public.browser.BrowserContextHandle)
   * @param contentSettingsType (int)
   * @param origin (java.lang.String)
   * @param embedder (java.lang.String)
   * @return (int)
   */
  public static final native int org_chromium_components_browser_1ui_site_1settings_WebsitePreferenceBridge_getPermissionSettingForOrigin(
      Object browserContextHandle, int contentSettingsType, String origin, String embedder);

  /**
   * org.chromium.components.browser_ui.site_settings.WebsitePreferenceBridge.isContentSettingEnabled
   * @param browserContextHandle (org.chromium.content_public.browser.BrowserContextHandle)
   * @param contentSettingType (int)
   * @return (boolean)
   */
  public static final native boolean org_chromium_components_browser_1ui_site_1settings_WebsitePreferenceBridge_isContentSettingEnabled(
      Object browserContextHandle, int contentSettingType);

  /**
   * org.chromium.components.browser_ui.site_settings.WebsitePreferenceBridge.isContentSettingManaged
   * @param browserContextHandle (org.chromium.content_public.browser.BrowserContextHandle)
   * @param contentSettingType (int)
   * @return (boolean)
   */
  public static final native boolean org_chromium_components_browser_1ui_site_1settings_WebsitePreferenceBridge_isContentSettingManaged(
      Object browserContextHandle, int contentSettingType);

  /**
   * org.chromium.components.browser_ui.site_settings.WebsitePreferenceBridge.isContentSettingManagedByCustodian
   * @param browserContextHandle (org.chromium.content_public.browser.BrowserContextHandle)
   * @param contentSettingType (int)
   * @return (boolean)
   */
  public static final native boolean org_chromium_components_browser_1ui_site_1settings_WebsitePreferenceBridge_isContentSettingManagedByCustodian(
      Object browserContextHandle, int contentSettingType);

  /**
   * org.chromium.components.browser_ui.site_settings.WebsitePreferenceBridge.isContentSettingUserModifiable
   * @param browserContextHandle (org.chromium.content_public.browser.BrowserContextHandle)
   * @param contentSettingType (int)
   * @return (boolean)
   */
  public static final native boolean org_chromium_components_browser_1ui_site_1settings_WebsitePreferenceBridge_isContentSettingUserModifiable(
      Object browserContextHandle, int contentSettingType);

  /**
   * org.chromium.components.browser_ui.site_settings.WebsitePreferenceBridge.isContentSettingsPatternValid
   * @param pattern (java.lang.String)
   * @return (boolean)
   */
  public static final native boolean org_chromium_components_browser_1ui_site_1settings_WebsitePreferenceBridge_isContentSettingsPatternValid(
      String pattern);

  /**
   * org.chromium.components.browser_ui.site_settings.WebsitePreferenceBridge.isCookieDeletionDisabled
   * @param browserContextHandle (org.chromium.content_public.browser.BrowserContextHandle)
   * @param origin (java.lang.String)
   * @return (boolean)
   */
  public static final native boolean org_chromium_components_browser_1ui_site_1settings_WebsitePreferenceBridge_isCookieDeletionDisabled(
      Object browserContextHandle, String origin);

  /**
   * org.chromium.components.browser_ui.site_settings.WebsitePreferenceBridge.isDSEOrigin
   * @param browserContextHandle (org.chromium.content_public.browser.BrowserContextHandle)
   * @param origin (java.lang.String)
   * @return (boolean)
   */
  public static final native boolean org_chromium_components_browser_1ui_site_1settings_WebsitePreferenceBridge_isDSEOrigin(
      Object browserContextHandle, String origin);

  /**
   * org.chromium.components.browser_ui.site_settings.WebsitePreferenceBridge.isNotificationEmbargoedForOrigin
   * @param browserContextHandle (org.chromium.content_public.browser.BrowserContextHandle)
   * @param origin (java.lang.String)
   * @return (boolean)
   */
  public static final native boolean org_chromium_components_browser_1ui_site_1settings_WebsitePreferenceBridge_isNotificationEmbargoedForOrigin(
      Object browserContextHandle, String origin);

  /**
   * org.chromium.components.browser_ui.site_settings.WebsitePreferenceBridge.reportNotificationRevokedForOrigin
   * @param browserContextHandle (org.chromium.content_public.browser.BrowserContextHandle)
   * @param origin (java.lang.String)
   * @param newSettingValue (int)
   * @return (void)
   */
  public static final native void org_chromium_components_browser_1ui_site_1settings_WebsitePreferenceBridge_reportNotificationRevokedForOrigin(
      Object browserContextHandle, String origin, int newSettingValue);

  /**
   * org.chromium.components.browser_ui.site_settings.WebsitePreferenceBridge.resetNotificationsSettingsForTest
   * @param browserContextHandle (org.chromium.content_public.browser.BrowserContextHandle)
   * @return (void)
   */
  public static final native void org_chromium_components_browser_1ui_site_1settings_WebsitePreferenceBridge_resetNotificationsSettingsForTest(
      Object browserContextHandle);

  /**
   * org.chromium.components.browser_ui.site_settings.WebsitePreferenceBridge.revokeObjectPermission
   * @param browserContextHandle (org.chromium.content_public.browser.BrowserContextHandle)
   * @param type (int)
   * @param origin (java.lang.String)
   * @param object (java.lang.String)
   * @return (void)
   */
  public static final native void org_chromium_components_browser_1ui_site_1settings_WebsitePreferenceBridge_revokeObjectPermission(
      Object browserContextHandle, int type, String origin, String object);

  /**
   * org.chromium.components.browser_ui.site_settings.WebsitePreferenceBridge.setContentSettingCustomScope
   * @param browserContextHandle (org.chromium.content_public.browser.BrowserContextHandle)
   * @param contentSettingType (int)
   * @param primaryPattern (java.lang.String)
   * @param secondaryPattern (java.lang.String)
   * @param setting (int)
   * @return (void)
   */
  public static final native void org_chromium_components_browser_1ui_site_1settings_WebsitePreferenceBridge_setContentSettingCustomScope(
      Object browserContextHandle, int contentSettingType, String primaryPattern,
      String secondaryPattern, int setting);

  /**
   * org.chromium.components.browser_ui.site_settings.WebsitePreferenceBridge.setContentSettingDefaultScope
   * @param browserContextHandle (org.chromium.content_public.browser.BrowserContextHandle)
   * @param contentSettingType (int)
   * @param primaryUrl (org.chromium.url.GURL)
   * @param secondaryUrl (org.chromium.url.GURL)
   * @param setting (int)
   * @return (void)
   */
  public static final native void org_chromium_components_browser_1ui_site_1settings_WebsitePreferenceBridge_setContentSettingDefaultScope(
      Object browserContextHandle, int contentSettingType, Object primaryUrl, Object secondaryUrl,
      int setting);

  /**
   * org.chromium.components.browser_ui.site_settings.WebsitePreferenceBridge.setContentSettingEnabled
   * @param browserContextHandle (org.chromium.content_public.browser.BrowserContextHandle)
   * @param contentSettingType (int)
   * @param allow (boolean)
   * @return (void)
   */
  public static final native void org_chromium_components_browser_1ui_site_1settings_WebsitePreferenceBridge_setContentSettingEnabled(
      Object browserContextHandle, int contentSettingType, boolean allow);

  /**
   * org.chromium.components.browser_ui.site_settings.WebsitePreferenceBridge.setDefaultContentSetting
   * @param browserContextHandle (org.chromium.content_public.browser.BrowserContextHandle)
   * @param contentSettingType (int)
   * @param setting (int)
   * @return (void)
   */
  public static final native void org_chromium_components_browser_1ui_site_1settings_WebsitePreferenceBridge_setDefaultContentSetting(
      Object browserContextHandle, int contentSettingType, int setting);

  /**
   * org.chromium.components.browser_ui.site_settings.WebsitePreferenceBridge.setPermissionSettingForOrigin
   * @param browserContextHandle (org.chromium.content_public.browser.BrowserContextHandle)
   * @param contentSettingsType (int)
   * @param origin (java.lang.String)
   * @param embedder (java.lang.String)
   * @param value (int)
   * @return (void)
   */
  public static final native void org_chromium_components_browser_1ui_site_1settings_WebsitePreferenceBridge_setPermissionSettingForOrigin(
      Object browserContextHandle, int contentSettingsType, String origin, String embedder,
      int value);

  /**
   * org.chromium.components.browser_ui.site_settings.WebsitePreferenceBridge.urlMatchesContentSettingsPattern
   * @param url (java.lang.String)
   * @param pattern (java.lang.String)
   * @return (boolean)
   */
  public static final native boolean org_chromium_components_browser_1ui_site_1settings_WebsitePreferenceBridge_urlMatchesContentSettingsPattern(
      String url, String pattern);
}
