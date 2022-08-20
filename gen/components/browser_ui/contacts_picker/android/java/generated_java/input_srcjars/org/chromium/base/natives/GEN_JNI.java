package org.chromium.base.natives;

import java.lang.String;

public final class GEN_JNI {
  public static boolean TESTING_ENABLED;

  public static boolean REQUIRE_MOCK;

  /**
   * org.chromium.components.browser_ui.contacts_picker.ContactsPickerFeatureList.isEnabled
   * @param featureName (java.lang.String)
   * @return (boolean)
   */
  public static final native boolean org_chromium_components_browser_1ui_contacts_1picker_ContactsPickerFeatureList_isEnabled(
      String featureName);
}
