package org.chromium.base.natives;

import java.lang.Object;

public final class GEN_JNI {
  public static boolean TESTING_ENABLED;

  public static boolean REQUIRE_MOCK;

  /**
   * org.chromium.components.infobars.InfoBar.getInfoBarIdentifier
   * @param nativeInfoBarAndroid (long)
   * @param caller (org.chromium.components.infobars.InfoBar)
   * @return (int)
   */
  public static final native int org_chromium_components_infobars_InfoBar_getInfoBarIdentifier(
      long nativeInfoBarAndroid, Object caller);

  /**
   * org.chromium.components.infobars.InfoBar.onButtonClicked
   * @param nativeInfoBarAndroid (long)
   * @param caller (org.chromium.components.infobars.InfoBar)
   * @param action (int)
   * @return (void)
   */
  public static final native void org_chromium_components_infobars_InfoBar_onButtonClicked(
      long nativeInfoBarAndroid, Object caller, int action);

  /**
   * org.chromium.components.infobars.InfoBar.onCloseButtonClicked
   * @param nativeInfoBarAndroid (long)
   * @param caller (org.chromium.components.infobars.InfoBar)
   * @return (void)
   */
  public static final native void org_chromium_components_infobars_InfoBar_onCloseButtonClicked(
      long nativeInfoBarAndroid, Object caller);

  /**
   * org.chromium.components.infobars.InfoBar.onLinkClicked
   * @param nativeInfoBarAndroid (long)
   * @param caller (org.chromium.components.infobars.InfoBar)
   * @return (void)
   */
  public static final native void org_chromium_components_infobars_InfoBar_onLinkClicked(
      long nativeInfoBarAndroid, Object caller);
}
