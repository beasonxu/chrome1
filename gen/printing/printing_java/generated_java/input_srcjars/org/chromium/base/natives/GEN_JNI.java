package org.chromium.base.natives;

import java.lang.Object;

public final class GEN_JNI {
  public static boolean TESTING_ENABLED;

  public static boolean REQUIRE_MOCK;

  /**
   * org.chromium.printing.PrintingContext.askUserForSettingsReply
   * @param nativePrintingContextAndroid (long)
   * @param caller (org.chromium.printing.PrintingContext)
   * @param success (boolean)
   * @return (void)
   */
  public static final native void org_chromium_printing_PrintingContext_askUserForSettingsReply(
      long nativePrintingContextAndroid, Object caller, boolean success);

  /**
   * org.chromium.printing.PrintingContext.showSystemDialogDone
   * @param nativePrintingContextAndroid (long)
   * @param caller (org.chromium.printing.PrintingContext)
   * @return (void)
   */
  public static final native void org_chromium_printing_PrintingContext_showSystemDialogDone(
      long nativePrintingContextAndroid, Object caller);
}
