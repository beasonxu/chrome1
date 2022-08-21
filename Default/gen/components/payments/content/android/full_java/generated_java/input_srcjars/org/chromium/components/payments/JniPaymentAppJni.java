package org.chromium.components.payments;

import java.lang.Override;
import java.lang.String;
import java.nio.ByteBuffer;
import org.chromium.base.JniStaticTestMocker;
import org.chromium.base.NativeLibraryLoadedStatus;
import org.chromium.base.annotations.CheckDiscard;
import org.chromium.base.natives.GEN_JNI;

@CheckDiscard("crbug.com/993421")
class JniPaymentAppJni implements JniPaymentApp.Natives {
  private static JniPaymentApp.Natives testInstance;

  public static final JniStaticTestMocker<JniPaymentApp.Natives> TEST_HOOKS = new org.chromium.base.JniStaticTestMocker<org.chromium.components.payments.JniPaymentApp.Natives>() {
    @java.lang.Override
    public void setInstanceForTesting(
        org.chromium.components.payments.JniPaymentApp.Natives instance) {
      if (!org.chromium.base.natives.GEN_JNI.TESTING_ENABLED) {
        throw new RuntimeException("Tried to set a JNI mock when mocks aren't enabled!");
      }
      testInstance = instance;
    }
  };

  @Override
  public String[] getInstrumentMethodNames(long nativeJniPaymentApp) {
    return (String[])GEN_JNI.org_chromium_components_payments_JniPaymentApp_getInstrumentMethodNames(nativeJniPaymentApp);
  }

  @Override
  public boolean isValidForPaymentMethodData(long nativeJniPaymentApp, String method,
      ByteBuffer dataByteBuffer) {
    return (boolean)GEN_JNI.org_chromium_components_payments_JniPaymentApp_isValidForPaymentMethodData(nativeJniPaymentApp, method, dataByteBuffer);
  }

  @Override
  public boolean handlesShippingAddress(long nativeJniPaymentApp) {
    return (boolean)GEN_JNI.org_chromium_components_payments_JniPaymentApp_handlesShippingAddress(nativeJniPaymentApp);
  }

  @Override
  public boolean handlesPayerName(long nativeJniPaymentApp) {
    return (boolean)GEN_JNI.org_chromium_components_payments_JniPaymentApp_handlesPayerName(nativeJniPaymentApp);
  }

  @Override
  public boolean handlesPayerEmail(long nativeJniPaymentApp) {
    return (boolean)GEN_JNI.org_chromium_components_payments_JniPaymentApp_handlesPayerEmail(nativeJniPaymentApp);
  }

  @Override
  public boolean handlesPayerPhone(long nativeJniPaymentApp) {
    return (boolean)GEN_JNI.org_chromium_components_payments_JniPaymentApp_handlesPayerPhone(nativeJniPaymentApp);
  }

  @Override
  public boolean canMakePayment(long nativeJniPaymentApp) {
    return (boolean)GEN_JNI.org_chromium_components_payments_JniPaymentApp_canMakePayment(nativeJniPaymentApp);
  }

  @Override
  public boolean canPreselect(long nativeJniPaymentApp) {
    return (boolean)GEN_JNI.org_chromium_components_payments_JniPaymentApp_canPreselect(nativeJniPaymentApp);
  }

  @Override
  public void invokePaymentApp(long nativeJniPaymentApp, JniPaymentApp callback) {
    GEN_JNI.org_chromium_components_payments_JniPaymentApp_invokePaymentApp(nativeJniPaymentApp, callback);
  }

  @Override
  public void updateWith(long nativeJniPaymentApp, ByteBuffer responseByteBuffer) {
    GEN_JNI.org_chromium_components_payments_JniPaymentApp_updateWith(nativeJniPaymentApp, responseByteBuffer);
  }

  @Override
  public void onPaymentDetailsNotUpdated(long nativeJniPaymentApp) {
    GEN_JNI.org_chromium_components_payments_JniPaymentApp_onPaymentDetailsNotUpdated(nativeJniPaymentApp);
  }

  @Override
  public boolean isWaitingForPaymentDetailsUpdate(long nativeJniPaymentApp) {
    return (boolean)GEN_JNI.org_chromium_components_payments_JniPaymentApp_isWaitingForPaymentDetailsUpdate(nativeJniPaymentApp);
  }

  @Override
  public void abortPaymentApp(long nativeJniPaymentApp, JniPaymentApp callback) {
    GEN_JNI.org_chromium_components_payments_JniPaymentApp_abortPaymentApp(nativeJniPaymentApp, callback);
  }

  @Override
  public String getApplicationIdentifierToHide(long nativeJniPaymentApp) {
    return (String)GEN_JNI.org_chromium_components_payments_JniPaymentApp_getApplicationIdentifierToHide(nativeJniPaymentApp);
  }

  @Override
  public String[] getApplicationIdentifiersThatHideThisApp(long nativeJniPaymentApp) {
    return (String[])GEN_JNI.org_chromium_components_payments_JniPaymentApp_getApplicationIdentifiersThatHideThisApp(nativeJniPaymentApp);
  }

  @Override
  public long getUkmSourceId(long nativeJniPaymentApp) {
    return (long)GEN_JNI.org_chromium_components_payments_JniPaymentApp_getUkmSourceId(nativeJniPaymentApp);
  }

  @Override
  public void setPaymentHandlerHost(long nativeJniPaymentApp,
      PaymentHandlerHost paymentHandlerHost) {
    GEN_JNI.org_chromium_components_payments_JniPaymentApp_setPaymentHandlerHost(nativeJniPaymentApp, paymentHandlerHost);
  }

  @Override
  public void freeNativeObject(long nativeJniPaymentApp) {
    GEN_JNI.org_chromium_components_payments_JniPaymentApp_freeNativeObject(nativeJniPaymentApp);
  }

  @Override
  public byte[] setAppSpecificResponseFields(long nativeJniPaymentApp, ByteBuffer paymentResponse) {
    return (byte[])GEN_JNI.org_chromium_components_payments_JniPaymentApp_setAppSpecificResponseFields(nativeJniPaymentApp, paymentResponse);
  }

  public static JniPaymentApp.Natives get() {
    if (GEN_JNI.TESTING_ENABLED) {
      if (testInstance != null) {
        return testInstance;
      }
      if (GEN_JNI.REQUIRE_MOCK) {
        throw new UnsupportedOperationException("No mock found for the native implementation for org.chromium.components.payments.JniPaymentApp.Natives. The current configuration requires all native implementations to have a mock instance.");
      }
    }
    NativeLibraryLoadedStatus.checkLoaded(false);
    return new JniPaymentAppJni();
  }
}
