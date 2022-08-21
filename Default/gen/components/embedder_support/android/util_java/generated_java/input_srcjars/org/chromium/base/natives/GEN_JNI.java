package org.chromium.base.natives;

import java.lang.Object;
import java.lang.String;

public final class GEN_JNI {
  public static boolean TESTING_ENABLED;

  public static boolean REQUIRE_MOCK;

  /**
   * org.chromium.components.embedder_support.util.UrlUtilities.clearPort
   * @param url (org.chromium.url.GURL)
   * @return (org.chromium.url.GURL)
   */
  public static final native Object org_chromium_components_embedder_1support_util_UrlUtilities_clearPort(
      Object url);

  /**
   * org.chromium.components.embedder_support.util.UrlUtilities.escapeQueryParamValue
   * @param url (java.lang.String)
   * @param usePlus (boolean)
   * @return (java.lang.String)
   */
  public static final native String org_chromium_components_embedder_1support_util_UrlUtilities_escapeQueryParamValue(
      String url, boolean usePlus);

  /**
   * org.chromium.components.embedder_support.util.UrlUtilities.getDomainAndRegistry
   * @param url (java.lang.String)
   * @param includePrivateRegistries (boolean)
   * @return (java.lang.String)
   */
  public static final native String org_chromium_components_embedder_1support_util_UrlUtilities_getDomainAndRegistry(
      String url, boolean includePrivateRegistries);

  /**
   * org.chromium.components.embedder_support.util.UrlUtilities.getValueForKeyInQuery
   * @param url (org.chromium.url.GURL)
   * @param key (java.lang.String)
   * @return (java.lang.String)
   */
  public static final native String org_chromium_components_embedder_1support_util_UrlUtilities_getValueForKeyInQuery(
      Object url, String key);

  /**
   * org.chromium.components.embedder_support.util.UrlUtilities.isGoogleDomainUrl
   * @param url (java.lang.String)
   * @param allowNonStandardPort (boolean)
   * @return (boolean)
   */
  public static final native boolean org_chromium_components_embedder_1support_util_UrlUtilities_isGoogleDomainUrl(
      String url, boolean allowNonStandardPort);

  /**
   * org.chromium.components.embedder_support.util.UrlUtilities.isGoogleHomePageUrl
   * @param url (java.lang.String)
   * @return (boolean)
   */
  public static final native boolean org_chromium_components_embedder_1support_util_UrlUtilities_isGoogleHomePageUrl(
      String url);

  /**
   * org.chromium.components.embedder_support.util.UrlUtilities.isGoogleSearchUrl
   * @param url (java.lang.String)
   * @return (boolean)
   */
  public static final native boolean org_chromium_components_embedder_1support_util_UrlUtilities_isGoogleSearchUrl(
      String url);

  /**
   * org.chromium.components.embedder_support.util.UrlUtilities.isGoogleSubDomainUrl
   * @param url (java.lang.String)
   * @return (boolean)
   */
  public static final native boolean org_chromium_components_embedder_1support_util_UrlUtilities_isGoogleSubDomainUrl(
      String url);

  /**
   * org.chromium.components.embedder_support.util.UrlUtilities.isUrlWithinScope
   * @param url (java.lang.String)
   * @param scopeUrl (java.lang.String)
   * @return (boolean)
   */
  public static final native boolean org_chromium_components_embedder_1support_util_UrlUtilities_isUrlWithinScope(
      String url, String scopeUrl);

  /**
   * org.chromium.components.embedder_support.util.UrlUtilities.sameDomainOrHost
   * @param primaryUrl (java.lang.String)
   * @param secondaryUrl (java.lang.String)
   * @param includePrivateRegistries (boolean)
   * @return (boolean)
   */
  public static final native boolean org_chromium_components_embedder_1support_util_UrlUtilities_sameDomainOrHost(
      String primaryUrl, String secondaryUrl, boolean includePrivateRegistries);

  /**
   * org.chromium.components.embedder_support.util.UrlUtilities.urlsFragmentsDiffer
   * @param url (java.lang.String)
   * @param url2 (java.lang.String)
   * @return (boolean)
   */
  public static final native boolean org_chromium_components_embedder_1support_util_UrlUtilities_urlsFragmentsDiffer(
      String url, String url2);

  /**
   * org.chromium.components.embedder_support.util.UrlUtilities.urlsMatchIgnoringFragments
   * @param url (java.lang.String)
   * @param url2 (java.lang.String)
   * @return (boolean)
   */
  public static final native boolean org_chromium_components_embedder_1support_util_UrlUtilities_urlsMatchIgnoringFragments(
      String url, String url2);
}
