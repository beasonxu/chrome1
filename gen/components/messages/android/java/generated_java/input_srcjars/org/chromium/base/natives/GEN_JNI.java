package org.chromium.base.natives;

public final class GEN_JNI {
  public static boolean TESTING_ENABLED;

  public static boolean REQUIRE_MOCK;

  /**
   * org.chromium.components.messages.MessageWrapper.handleActionClick
   * @param nativeMessageWrapper (long)
   * @return (void)
   */
  public static final native void org_chromium_components_messages_MessageWrapper_handleActionClick(
      long nativeMessageWrapper);

  /**
   * org.chromium.components.messages.MessageWrapper.handleDismissCallback
   * @param nativeMessageWrapper (long)
   * @param dismissReason (int)
   * @return (void)
   */
  public static final native void org_chromium_components_messages_MessageWrapper_handleDismissCallback(
      long nativeMessageWrapper, int dismissReason);

  /**
   * org.chromium.components.messages.MessageWrapper.handleSecondaryActionClick
   * @param nativeMessageWrapper (long)
   * @return (void)
   */
  public static final native void org_chromium_components_messages_MessageWrapper_handleSecondaryActionClick(
      long nativeMessageWrapper);

  /**
   * org.chromium.components.messages.MessageWrapper.handleSecondaryMenuItemSelected
   * @param nativeMessageWrapper (long)
   * @param itemId (int)
   * @return (void)
   */
  public static final native void org_chromium_components_messages_MessageWrapper_handleSecondaryMenuItemSelected(
      long nativeMessageWrapper, int itemId);
}
