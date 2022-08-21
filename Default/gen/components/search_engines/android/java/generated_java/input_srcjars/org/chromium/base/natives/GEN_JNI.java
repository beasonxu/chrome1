package org.chromium.base.natives;

import java.lang.Object;
import java.lang.String;

public final class GEN_JNI {
  public static boolean TESTING_ENABLED;

  public static boolean REQUIRE_MOCK;

  /**
   * org.chromium.components.search_engines.TemplateUrl.getKeyword
   * @param templateUrlPtr (long)
   * @return (java.lang.String)
   */
  public static final native String org_chromium_components_search_1engines_TemplateUrl_getKeyword(
      long templateUrlPtr);

  /**
   * org.chromium.components.search_engines.TemplateUrl.getLastVisitedTime
   * @param templateUrlPtr (long)
   * @return (long)
   */
  public static final native long org_chromium_components_search_1engines_TemplateUrl_getLastVisitedTime(
      long templateUrlPtr);

  /**
   * org.chromium.components.search_engines.TemplateUrl.getPrepopulatedId
   * @param templateUrlPtr (long)
   * @return (int)
   */
  public static final native int org_chromium_components_search_1engines_TemplateUrl_getPrepopulatedId(
      long templateUrlPtr);

  /**
   * org.chromium.components.search_engines.TemplateUrl.getShortName
   * @param templateUrlPtr (long)
   * @return (java.lang.String)
   */
  public static final native String org_chromium_components_search_1engines_TemplateUrl_getShortName(
      long templateUrlPtr);

  /**
   * org.chromium.components.search_engines.TemplateUrl.getURL
   * @param templateUrlPtr (long)
   * @return (java.lang.String)
   */
  public static final native String org_chromium_components_search_1engines_TemplateUrl_getURL(
      long templateUrlPtr);

  /**
   * org.chromium.components.search_engines.TemplateUrl.isPrepopulatedOrCreatedByPolicy
   * @param templateUrlPtr (long)
   * @return (boolean)
   */
  public static final native boolean org_chromium_components_search_1engines_TemplateUrl_isPrepopulatedOrCreatedByPolicy(
      long templateUrlPtr);

  /**
   * org.chromium.components.search_engines.TemplateUrlService.addSearchEngineForTesting
   * @param nativeTemplateUrlServiceAndroid (long)
   * @param caller (org.chromium.components.search_engines.TemplateUrlService)
   * @param keyword (java.lang.String)
   * @param offset (int)
   * @return (java.lang.String)
   */
  public static final native String org_chromium_components_search_1engines_TemplateUrlService_addSearchEngineForTesting(
      long nativeTemplateUrlServiceAndroid, Object caller, String keyword, int offset);

  /**
   * org.chromium.components.search_engines.TemplateUrlService.doesDefaultSearchEngineHaveLogo
   * @param nativeTemplateUrlServiceAndroid (long)
   * @param caller (org.chromium.components.search_engines.TemplateUrlService)
   * @return (boolean)
   */
  public static final native boolean org_chromium_components_search_1engines_TemplateUrlService_doesDefaultSearchEngineHaveLogo(
      long nativeTemplateUrlServiceAndroid, Object caller);

  /**
   * org.chromium.components.search_engines.TemplateUrlService.getDefaultSearchEngine
   * @param nativeTemplateUrlServiceAndroid (long)
   * @param caller (org.chromium.components.search_engines.TemplateUrlService)
   * @return (org.chromium.components.search_engines.TemplateUrl)
   */
  public static final native Object org_chromium_components_search_1engines_TemplateUrlService_getDefaultSearchEngine(
      long nativeTemplateUrlServiceAndroid, Object caller);

  /**
   * org.chromium.components.search_engines.TemplateUrlService.getSearchEngineTypeFromTemplateUrl
   * @param nativeTemplateUrlServiceAndroid (long)
   * @param caller (org.chromium.components.search_engines.TemplateUrlService)
   * @param keyword (java.lang.String)
   * @return (int)
   */
  public static final native int org_chromium_components_search_1engines_TemplateUrlService_getSearchEngineTypeFromTemplateUrl(
      long nativeTemplateUrlServiceAndroid, Object caller, String keyword);

  /**
   * org.chromium.components.search_engines.TemplateUrlService.getSearchEngineUrlFromTemplateUrl
   * @param nativeTemplateUrlServiceAndroid (long)
   * @param caller (org.chromium.components.search_engines.TemplateUrlService)
   * @param keyword (java.lang.String)
   * @return (java.lang.String)
   */
  public static final native String org_chromium_components_search_1engines_TemplateUrlService_getSearchEngineUrlFromTemplateUrl(
      long nativeTemplateUrlServiceAndroid, Object caller, String keyword);

  /**
   * org.chromium.components.search_engines.TemplateUrlService.getSearchQueryForUrl
   * @param nativeTemplateUrlServiceAndroid (long)
   * @param caller (org.chromium.components.search_engines.TemplateUrlService)
   * @param url (org.chromium.url.GURL)
   * @return (java.lang.String)
   */
  public static final native String org_chromium_components_search_1engines_TemplateUrlService_getSearchQueryForUrl(
      long nativeTemplateUrlServiceAndroid, Object caller, Object url);

  /**
   * org.chromium.components.search_engines.TemplateUrlService.getTemplateUrls
   * @param nativeTemplateUrlServiceAndroid (long)
   * @param caller (org.chromium.components.search_engines.TemplateUrlService)
   * @param templateUrls (java.util.List<org.chromium.components.search_engines.TemplateUrl>)
   * @return (void)
   */
  public static final native void org_chromium_components_search_1engines_TemplateUrlService_getTemplateUrls(
      long nativeTemplateUrlServiceAndroid, Object caller, Object templateUrls);

  /**
   * org.chromium.components.search_engines.TemplateUrlService.getUrlForContextualSearchQuery
   * @param nativeTemplateUrlServiceAndroid (long)
   * @param caller (org.chromium.components.search_engines.TemplateUrlService)
   * @param query (java.lang.String)
   * @param alternateTerm (java.lang.String)
   * @param shouldPrefetch (boolean)
   * @param protocolVersion (java.lang.String)
   * @return (org.chromium.url.GURL)
   */
  public static final native Object org_chromium_components_search_1engines_TemplateUrlService_getUrlForContextualSearchQuery(
      long nativeTemplateUrlServiceAndroid, Object caller, String query, String alternateTerm,
      boolean shouldPrefetch, String protocolVersion);

  /**
   * org.chromium.components.search_engines.TemplateUrlService.getUrlForSearchQuery
   * @param nativeTemplateUrlServiceAndroid (long)
   * @param caller (org.chromium.components.search_engines.TemplateUrlService)
   * @param query (java.lang.String)
   * @param searchParams (java.lang.String[])
   * @return (java.lang.String)
   */
  public static final native String org_chromium_components_search_1engines_TemplateUrlService_getUrlForSearchQuery(
      long nativeTemplateUrlServiceAndroid, Object caller, String query, String[] searchParams);

  /**
   * org.chromium.components.search_engines.TemplateUrlService.getUrlForVoiceSearchQuery
   * @param nativeTemplateUrlServiceAndroid (long)
   * @param caller (org.chromium.components.search_engines.TemplateUrlService)
   * @param query (java.lang.String)
   * @return (org.chromium.url.GURL)
   */
  public static final native Object org_chromium_components_search_1engines_TemplateUrlService_getUrlForVoiceSearchQuery(
      long nativeTemplateUrlServiceAndroid, Object caller, String query);

  /**
   * org.chromium.components.search_engines.TemplateUrlService.isDefaultSearchEngineGoogle
   * @param nativeTemplateUrlServiceAndroid (long)
   * @param caller (org.chromium.components.search_engines.TemplateUrlService)
   * @return (boolean)
   */
  public static final native boolean org_chromium_components_search_1engines_TemplateUrlService_isDefaultSearchEngineGoogle(
      long nativeTemplateUrlServiceAndroid, Object caller);

  /**
   * org.chromium.components.search_engines.TemplateUrlService.isDefaultSearchManaged
   * @param nativeTemplateUrlServiceAndroid (long)
   * @param caller (org.chromium.components.search_engines.TemplateUrlService)
   * @return (boolean)
   */
  public static final native boolean org_chromium_components_search_1engines_TemplateUrlService_isDefaultSearchManaged(
      long nativeTemplateUrlServiceAndroid, Object caller);

  /**
   * org.chromium.components.search_engines.TemplateUrlService.isLoaded
   * @param nativeTemplateUrlServiceAndroid (long)
   * @param caller (org.chromium.components.search_engines.TemplateUrlService)
   * @return (boolean)
   */
  public static final native boolean org_chromium_components_search_1engines_TemplateUrlService_isLoaded(
      long nativeTemplateUrlServiceAndroid, Object caller);

  /**
   * org.chromium.components.search_engines.TemplateUrlService.isSearchByImageAvailable
   * @param nativeTemplateUrlServiceAndroid (long)
   * @param caller (org.chromium.components.search_engines.TemplateUrlService)
   * @return (boolean)
   */
  public static final native boolean org_chromium_components_search_1engines_TemplateUrlService_isSearchByImageAvailable(
      long nativeTemplateUrlServiceAndroid, Object caller);

  /**
   * org.chromium.components.search_engines.TemplateUrlService.isSearchResultsPageFromDefaultSearchProvider
   * @param nativeTemplateUrlServiceAndroid (long)
   * @param caller (org.chromium.components.search_engines.TemplateUrlService)
   * @param url (org.chromium.url.GURL)
   * @return (boolean)
   */
  public static final native boolean org_chromium_components_search_1engines_TemplateUrlService_isSearchResultsPageFromDefaultSearchProvider(
      long nativeTemplateUrlServiceAndroid, Object caller, Object url);

  /**
   * org.chromium.components.search_engines.TemplateUrlService.load
   * @param nativeTemplateUrlServiceAndroid (long)
   * @param caller (org.chromium.components.search_engines.TemplateUrlService)
   * @return (void)
   */
  public static final native void org_chromium_components_search_1engines_TemplateUrlService_load(
      long nativeTemplateUrlServiceAndroid, Object caller);

  /**
   * org.chromium.components.search_engines.TemplateUrlService.setPlayAPISearchEngine
   * @param nativeTemplateUrlServiceAndroid (long)
   * @param caller (org.chromium.components.search_engines.TemplateUrlService)
   * @param name (java.lang.String)
   * @param keyword (java.lang.String)
   * @param searchUrl (java.lang.String)
   * @param suggestUrl (java.lang.String)
   * @param faviconUrl (java.lang.String)
   * @param setAsDefault (boolean)
   * @return (boolean)
   */
  public static final native boolean org_chromium_components_search_1engines_TemplateUrlService_setPlayAPISearchEngine(
      long nativeTemplateUrlServiceAndroid, Object caller, String name, String keyword,
      String searchUrl, String suggestUrl, String faviconUrl, boolean setAsDefault);

  /**
   * org.chromium.components.search_engines.TemplateUrlService.setUserSelectedDefaultSearchProvider
   * @param nativeTemplateUrlServiceAndroid (long)
   * @param caller (org.chromium.components.search_engines.TemplateUrlService)
   * @param selectedKeyword (java.lang.String)
   * @return (void)
   */
  public static final native void org_chromium_components_search_1engines_TemplateUrlService_setUserSelectedDefaultSearchProvider(
      long nativeTemplateUrlServiceAndroid, Object caller, String selectedKeyword);
}
