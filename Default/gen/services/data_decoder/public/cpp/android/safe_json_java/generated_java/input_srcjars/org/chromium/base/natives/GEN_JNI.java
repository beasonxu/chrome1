package org.chromium.base.natives;

import java.lang.String;

public final class GEN_JNI {
  public static boolean TESTING_ENABLED;

  public static boolean REQUIRE_MOCK;

  /**
   * org.chromium.services.data_decoder.JsonSanitizer.onError
   * @param id (long)
   * @param error (java.lang.String)
   * @return (void)
   */
  public static final native void org_chromium_services_data_1decoder_JsonSanitizer_onError(long id,
      String error);

  /**
   * org.chromium.services.data_decoder.JsonSanitizer.onSuccess
   * @param id (long)
   * @param json (java.lang.String)
   * @return (void)
   */
  public static final native void org_chromium_services_data_1decoder_JsonSanitizer_onSuccess(
      long id, String json);
}
