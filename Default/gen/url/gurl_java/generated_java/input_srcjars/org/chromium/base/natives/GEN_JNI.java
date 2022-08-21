package org.chromium.base.natives;

import java.lang.Object;
import java.lang.String;

public final class GEN_JNI {
  public static boolean TESTING_ENABLED;

  public static boolean REQUIRE_MOCK;

  /**
   * org.chromium.url.GURL.createNative
   * @param spec (java.lang.String)
   * @param isValid (boolean)
   * @param nativeParsed (long)
   * @return (long)
   */
  public static final native long org_chromium_url_GURL_createNative(String spec, boolean isValid,
      long nativeParsed);

  /**
   * org.chromium.url.GURL.domainIs
   * @param spec (java.lang.String)
   * @param isValid (boolean)
   * @param nativeParsed (long)
   * @param domain (java.lang.String)
   * @return (boolean)
   */
  public static final native boolean org_chromium_url_GURL_domainIs(String spec, boolean isValid,
      long nativeParsed, String domain);

  /**
   * org.chromium.url.GURL.getOrigin
   * @param spec (java.lang.String)
   * @param isValid (boolean)
   * @param nativeParsed (long)
   * @param target (org.chromium.url.GURL)
   * @return (void)
   */
  public static final native void org_chromium_url_GURL_getOrigin(String spec, boolean isValid,
      long nativeParsed, Object target);

  /**
   * org.chromium.url.GURL.init
   * @param uri (java.lang.String)
   * @param target (org.chromium.url.GURL)
   * @return (void)
   */
  public static final native void org_chromium_url_GURL_init(String uri, Object target);

  /**
   * org.chromium.url.Parsed.createNative
   * @param schemeBegin (int)
   * @param schemeLength (int)
   * @param usernameBegin (int)
   * @param usernameLength (int)
   * @param passwordBegin (int)
   * @param passwordLength (int)
   * @param hostBegin (int)
   * @param hostLength (int)
   * @param portBegin (int)
   * @param portLength (int)
   * @param pathBegin (int)
   * @param pathLength (int)
   * @param queryBegin (int)
   * @param queryLength (int)
   * @param refBegin (int)
   * @param refLength (int)
   * @param potentiallyDanglingMarkup (boolean)
   * @param innerUrl (long)
   * @return (long)
   */
  public static final native long org_chromium_url_Parsed_createNative(int schemeBegin,
      int schemeLength, int usernameBegin, int usernameLength, int passwordBegin,
      int passwordLength, int hostBegin, int hostLength, int portBegin, int portLength,
      int pathBegin, int pathLength, int queryBegin, int queryLength, int refBegin, int refLength,
      boolean potentiallyDanglingMarkup, long innerUrl);
}
