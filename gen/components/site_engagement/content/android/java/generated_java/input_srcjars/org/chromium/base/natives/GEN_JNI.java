package org.chromium.base.natives;

import java.lang.Object;
import java.lang.String;

public final class GEN_JNI {
  public static boolean TESTING_ENABLED;

  public static boolean REQUIRE_MOCK;

  /**
   * org.chromium.components.site_engagement.SiteEngagementService.getScore
   * @param nativeSiteEngagementServiceAndroid (long)
   * @param caller (org.chromium.components.site_engagement.SiteEngagementService)
   * @param url (java.lang.String)
   * @return (double)
   */
  public static final native double org_chromium_components_site_1engagement_SiteEngagementService_getScore(
      long nativeSiteEngagementServiceAndroid, Object caller, String url);

  /**
   * org.chromium.components.site_engagement.SiteEngagementService.resetBaseScoreForURL
   * @param nativeSiteEngagementServiceAndroid (long)
   * @param caller (org.chromium.components.site_engagement.SiteEngagementService)
   * @param url (java.lang.String)
   * @param score (double)
   * @return (void)
   */
  public static final native void org_chromium_components_site_1engagement_SiteEngagementService_resetBaseScoreForURL(
      long nativeSiteEngagementServiceAndroid, Object caller, String url, double score);

  /**
   * org.chromium.components.site_engagement.SiteEngagementService.setParamValuesForTesting
   * @return (void)
   */
  public static final native void org_chromium_components_site_1engagement_SiteEngagementService_setParamValuesForTesting(
      );

  /**
   * org.chromium.components.site_engagement.SiteEngagementService.siteEngagementServiceForBrowserContext
   * @param browserContext (org.chromium.content_public.browser.BrowserContextHandle)
   * @return (org.chromium.components.site_engagement.SiteEngagementService)
   */
  public static final native Object org_chromium_components_site_1engagement_SiteEngagementService_siteEngagementServiceForBrowserContext(
      Object browserContext);
}
