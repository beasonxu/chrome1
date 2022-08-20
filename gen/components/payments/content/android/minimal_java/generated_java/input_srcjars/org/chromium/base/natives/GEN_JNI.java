package org.chromium.base.natives;

import java.lang.Object;
import java.lang.String;

public final class GEN_JNI {
  public static boolean TESTING_ENABLED;

  public static boolean REQUIRE_MOCK;

  /**
   * org.chromium.components.payments.PaymentHandlerHost.destroy
   * @param nativePaymentHandlerHost (long)
   * @return (void)
   */
  public static final native void org_chromium_components_payments_PaymentHandlerHost_destroy(
      long nativePaymentHandlerHost);

  /**
   * org.chromium.components.payments.PaymentHandlerHost.init
   * @param webContents (org.chromium.content_public.browser.WebContents)
   * @param listener (org.chromium.components.payments.PaymentRequestUpdateEventListener)
   * @return (long)
   */
  public static final native long org_chromium_components_payments_PaymentHandlerHost_init(
      Object webContents, Object listener);

  /**
   * org.chromium.components.payments.PaymentHandlerHost.isWaitingForPaymentDetailsUpdate
   * @param nativePaymentHandlerHost (long)
   * @return (boolean)
   */
  public static final native boolean org_chromium_components_payments_PaymentHandlerHost_isWaitingForPaymentDetailsUpdate(
      long nativePaymentHandlerHost);

  /**
   * org.chromium.components.payments.PaymentHandlerHost.onPaymentDetailsNotUpdated
   * @param nativePaymentHandlerHost (long)
   * @return (void)
   */
  public static final native void org_chromium_components_payments_PaymentHandlerHost_onPaymentDetailsNotUpdated(
      long nativePaymentHandlerHost);

  /**
   * org.chromium.components.payments.PaymentHandlerHost.updateWith
   * @param nativePaymentHandlerHost (long)
   * @param responseBuffer (java.nio.ByteBuffer)
   * @return (void)
   */
  public static final native void org_chromium_components_payments_PaymentHandlerHost_updateWith(
      long nativePaymentHandlerHost, Object responseBuffer);

  /**
   * org.chromium.components.payments.PaymentRequestSpec.create
   * @param optionsByteBuffer (java.nio.ByteBuffer)
   * @param detailsByteBuffer (java.nio.ByteBuffer)
   * @param methodDataByteBuffers (java.nio.ByteBuffer[])
   * @param appLocale (java.lang.String)
   * @return (long)
   */
  public static final native long org_chromium_components_payments_PaymentRequestSpec_create(
      Object optionsByteBuffer, Object detailsByteBuffer, Object[] methodDataByteBuffers,
      String appLocale);

  /**
   * org.chromium.components.payments.PaymentRequestSpec.destroy
   * @param nativePaymentRequestSpec (long)
   * @return (void)
   */
  public static final native void org_chromium_components_payments_PaymentRequestSpec_destroy(
      long nativePaymentRequestSpec);

  /**
   * org.chromium.components.payments.PaymentRequestSpec.getMethodData
   * @param nativePaymentRequestSpec (long)
   * @return (byte[][])
   */
  public static final native byte[][] org_chromium_components_payments_PaymentRequestSpec_getMethodData(
      long nativePaymentRequestSpec);

  /**
   * org.chromium.components.payments.PaymentRequestSpec.getPaymentDetails
   * @param nativePaymentRequestSpec (long)
   * @return (byte[])
   */
  public static final native byte[] org_chromium_components_payments_PaymentRequestSpec_getPaymentDetails(
      long nativePaymentRequestSpec);

  /**
   * org.chromium.components.payments.PaymentRequestSpec.getPaymentOptions
   * @param nativePaymentRequestSpec (long)
   * @return (byte[])
   */
  public static final native byte[] org_chromium_components_payments_PaymentRequestSpec_getPaymentOptions(
      long nativePaymentRequestSpec);

  /**
   * org.chromium.components.payments.PaymentRequestSpec.isSecurePaymentConfirmationRequested
   * @param nativePaymentRequestSpec (long)
   * @return (boolean)
   */
  public static final native boolean org_chromium_components_payments_PaymentRequestSpec_isSecurePaymentConfirmationRequested(
      long nativePaymentRequestSpec);

  /**
   * org.chromium.components.payments.PaymentRequestSpec.recomputeSpecForDetails
   * @param nativePaymentRequestSpec (long)
   * @return (void)
   */
  public static final native void org_chromium_components_payments_PaymentRequestSpec_recomputeSpecForDetails(
      long nativePaymentRequestSpec);

  /**
   * org.chromium.components.payments.PaymentRequestSpec.retry
   * @param nativePaymentRequestSpec (long)
   * @param validationErrorsByteBuffer (java.nio.ByteBuffer)
   * @return (void)
   */
  public static final native void org_chromium_components_payments_PaymentRequestSpec_retry(
      long nativePaymentRequestSpec, Object validationErrorsByteBuffer);

  /**
   * org.chromium.components.payments.PaymentRequestSpec.selectedShippingOptionError
   * @param nativePaymentRequestSpec (long)
   * @return (java.lang.String)
   */
  public static final native String org_chromium_components_payments_PaymentRequestSpec_selectedShippingOptionError(
      long nativePaymentRequestSpec);

  /**
   * org.chromium.components.payments.PaymentRequestSpec.updateWith
   * @param nativePaymentRequestSpec (long)
   * @param detailsByteBuffer (java.nio.ByteBuffer)
   * @return (void)
   */
  public static final native void org_chromium_components_payments_PaymentRequestSpec_updateWith(
      long nativePaymentRequestSpec, Object detailsByteBuffer);
}
