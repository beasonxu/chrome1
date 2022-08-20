package org.chromium.base.natives;

import java.lang.Object;
import java.lang.String;

public final class GEN_JNI {
  public static boolean TESTING_ENABLED;

  public static boolean REQUIRE_MOCK;

  /**
   * org.chromium.components.javascript_dialogs.JavascriptAppModalDialog.didAcceptAppModalDialog
   * @param nativeAppModalDialogViewAndroid (long)
   * @param caller (org.chromium.components.javascript_dialogs.JavascriptAppModalDialog)
   * @param prompt (java.lang.String)
   * @param suppress (boolean)
   * @return (void)
   */
  public static final native void org_chromium_components_javascript_1dialogs_JavascriptAppModalDialog_didAcceptAppModalDialog(
      long nativeAppModalDialogViewAndroid, Object caller, String prompt, boolean suppress);

  /**
   * org.chromium.components.javascript_dialogs.JavascriptAppModalDialog.didCancelAppModalDialog
   * @param nativeAppModalDialogViewAndroid (long)
   * @param caller (org.chromium.components.javascript_dialogs.JavascriptAppModalDialog)
   * @param suppress (boolean)
   * @return (void)
   */
  public static final native void org_chromium_components_javascript_1dialogs_JavascriptAppModalDialog_didCancelAppModalDialog(
      long nativeAppModalDialogViewAndroid, Object caller, boolean suppress);

  /**
   * org.chromium.components.javascript_dialogs.JavascriptAppModalDialog.getCurrentModalDialog
   * @return (org.chromium.components.javascript_dialogs.JavascriptAppModalDialog)
   */
  public static final native Object org_chromium_components_javascript_1dialogs_JavascriptAppModalDialog_getCurrentModalDialog(
      );

  /**
   * org.chromium.components.javascript_dialogs.JavascriptTabModalDialog.accept
   * @param nativeTabModalDialogViewAndroid (long)
   * @param caller (org.chromium.components.javascript_dialogs.JavascriptTabModalDialog)
   * @param prompt (java.lang.String)
   * @return (void)
   */
  public static final native void org_chromium_components_javascript_1dialogs_JavascriptTabModalDialog_accept(
      long nativeTabModalDialogViewAndroid, Object caller, String prompt);

  /**
   * org.chromium.components.javascript_dialogs.JavascriptTabModalDialog.cancel
   * @param nativeTabModalDialogViewAndroid (long)
   * @param caller (org.chromium.components.javascript_dialogs.JavascriptTabModalDialog)
   * @param buttonClicked (boolean)
   * @return (void)
   */
  public static final native void org_chromium_components_javascript_1dialogs_JavascriptTabModalDialog_cancel(
      long nativeTabModalDialogViewAndroid, Object caller, boolean buttonClicked);
}
