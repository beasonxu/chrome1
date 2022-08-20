package org.chromium.base.natives;

import java.lang.Object;
import java.lang.String;

public final class GEN_JNI {
  public static boolean TESTING_ENABLED;

  public static boolean REQUIRE_MOCK;

  /**
   * org.chromium.components.url_formatter.UrlFormatter.fixupUrl
   * @param url (java.lang.String)
   * @return (org.chromium.url.GURL)
   */
  public static final native Object org_chromium_components_url_1formatter_UrlFormatter_fixupUrl(
      String url);

  /**
   * org.chromium.components.url_formatter.UrlFormatter.formatOriginForSecurityDisplay
   * @param origin (org.chromium.url.Origin)
   * @param schemeDisplay (int)
   * @return (java.lang.String)
   */
  public static final native String org_chromium_components_url_1formatter_UrlFormatter_formatOriginForSecurityDisplay(
      Object origin, int schemeDisplay);

  /**
   * org.chromium.components.url_formatter.UrlFormatter.formatStringUrlForSecurityDisplay
   * @param url (java.lang.String)
   * @param schemeDisplay (int)
   * @return (java.lang.String)
   */
  public static final native String org_chromium_components_url_1formatter_UrlFormatter_formatStringUrlForSecurityDisplay(
      String url, int schemeDisplay);

  /**
   * org.chromium.components.url_formatter.UrlFormatter.formatUrlForCopy
   * @param url (java.lang.String)
   * @return (java.lang.String)
   */
  public static final native String org_chromium_components_url_1formatter_UrlFormatter_formatUrlForCopy(
      String url);

  /**
   * org.chromium.components.url_formatter.UrlFormatter.formatUrlForDisplayOmitHTTPScheme
   * @param url (java.lang.String)
   * @return (java.lang.String)
   */
  public static final native String org_chromium_components_url_1formatter_UrlFormatter_formatUrlForDisplayOmitHTTPScheme(
      String url);

  /**
   * org.chromium.components.url_formatter.UrlFormatter.formatUrlForDisplayOmitScheme
   * @param url (java.lang.String)
   * @return (java.lang.String)
   */
  public static final native String org_chromium_components_url_1formatter_UrlFormatter_formatUrlForDisplayOmitScheme(
      String url);

  /**
   * org.chromium.components.url_formatter.UrlFormatter.formatUrlForDisplayOmitSchemeOmitTrivialSubdomains
   * @param url (java.lang.String)
   * @return (java.lang.String)
   */
  public static final native String org_chromium_components_url_1formatter_UrlFormatter_formatUrlForDisplayOmitSchemeOmitTrivialSubdomains(
      String url);

  /**
   * org.chromium.components.url_formatter.UrlFormatter.formatUrlForDisplayOmitSchemePathAndTrivialSubdomains
   * @param url (org.chromium.url.GURL)
   * @return (java.lang.String)
   */
  public static final native String org_chromium_components_url_1formatter_UrlFormatter_formatUrlForDisplayOmitSchemePathAndTrivialSubdomains(
      Object url);

  /**
   * org.chromium.components.url_formatter.UrlFormatter.formatUrlForDisplayOmitUsernamePassword
   * @param url (java.lang.String)
   * @return (java.lang.String)
   */
  public static final native String org_chromium_components_url_1formatter_UrlFormatter_formatUrlForDisplayOmitUsernamePassword(
      String url);

  /**
   * org.chromium.components.url_formatter.UrlFormatter.formatUrlForSecurityDisplay
   * @param url (org.chromium.url.GURL)
   * @param schemeDisplay (int)
   * @return (java.lang.String)
   */
  public static final native String org_chromium_components_url_1formatter_UrlFormatter_formatUrlForSecurityDisplay(
      Object url, int schemeDisplay);
}
