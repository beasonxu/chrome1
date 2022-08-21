package org.chromium.base.natives;

import java.lang.Object;
import java.lang.String;

public final class GEN_JNI {
  public static boolean TESTING_ENABLED;

  public static boolean REQUIRE_MOCK;

  /**
   * org.chromium.components.payments.CanMakePaymentQuery.canQuery
   * @param webContents (org.chromium.content_public.browser.WebContents)
   * @param topLevelOrigin (java.lang.String)
   * @param frameOrigin (java.lang.String)
   * @param query (java.util.Map<java.lang.String, org.chromium.payments.mojom.PaymentMethodData>)
   * @return (boolean)
   */
  public static final native boolean org_chromium_components_payments_CanMakePaymentQuery_canQuery(
      Object webContents, String topLevelOrigin, String frameOrigin, Object query);

  /**
   * org.chromium.components.payments.CurrencyFormatter.destroy
   * @param nativeCurrencyFormatterAndroid (long)
   * @param caller (org.chromium.components.payments.CurrencyFormatter)
   * @return (void)
   */
  public static final native void org_chromium_components_payments_CurrencyFormatter_destroy(
      long nativeCurrencyFormatterAndroid, Object caller);

  /**
   * org.chromium.components.payments.CurrencyFormatter.format
   * @param nativeCurrencyFormatterAndroid (long)
   * @param caller (org.chromium.components.payments.CurrencyFormatter)
   * @param amountValue (java.lang.String)
   * @return (java.lang.String)
   */
  public static final native String org_chromium_components_payments_CurrencyFormatter_format(
      long nativeCurrencyFormatterAndroid, Object caller, String amountValue);

  /**
   * org.chromium.components.payments.CurrencyFormatter.getFormattedCurrencyCode
   * @param nativeCurrencyFormatterAndroid (long)
   * @param caller (org.chromium.components.payments.CurrencyFormatter)
   * @return (java.lang.String)
   */
  public static final native String org_chromium_components_payments_CurrencyFormatter_getFormattedCurrencyCode(
      long nativeCurrencyFormatterAndroid, Object caller);

  /**
   * org.chromium.components.payments.CurrencyFormatter.initCurrencyFormatterAndroid
   * @param caller (org.chromium.components.payments.CurrencyFormatter)
   * @param currencyCode (java.lang.String)
   * @param localeName (java.lang.String)
   * @return (long)
   */
  public static final native long org_chromium_components_payments_CurrencyFormatter_initCurrencyFormatterAndroid(
      Object caller, String currencyCode, String localeName);

  /**
   * org.chromium.components.payments.CurrencyFormatter.setMaxFractionalDigits
   * @param nativeCurrencyFormatterAndroid (long)
   * @param maxFractionalDigits (int)
   * @return (void)
   */
  public static final native void org_chromium_components_payments_CurrencyFormatter_setMaxFractionalDigits(
      long nativeCurrencyFormatterAndroid, int maxFractionalDigits);

  /**
   * org.chromium.components.payments.ErrorMessageUtil.getNotSupportedErrorMessage
   * @param methods (java.lang.String[])
   * @return (java.lang.String)
   */
  public static final native String org_chromium_components_payments_ErrorMessageUtil_getNotSupportedErrorMessage(
      String[] methods);

  /**
   * org.chromium.components.payments.JniPaymentApp.abortPaymentApp
   * @param nativeJniPaymentApp (long)
   * @param callback (org.chromium.components.payments.JniPaymentApp)
   * @return (void)
   */
  public static final native void org_chromium_components_payments_JniPaymentApp_abortPaymentApp(
      long nativeJniPaymentApp, Object callback);

  /**
   * org.chromium.components.payments.JniPaymentApp.canMakePayment
   * @param nativeJniPaymentApp (long)
   * @return (boolean)
   */
  public static final native boolean org_chromium_components_payments_JniPaymentApp_canMakePayment(
      long nativeJniPaymentApp);

  /**
   * org.chromium.components.payments.JniPaymentApp.canPreselect
   * @param nativeJniPaymentApp (long)
   * @return (boolean)
   */
  public static final native boolean org_chromium_components_payments_JniPaymentApp_canPreselect(
      long nativeJniPaymentApp);

  /**
   * org.chromium.components.payments.JniPaymentApp.freeNativeObject
   * @param nativeJniPaymentApp (long)
   * @return (void)
   */
  public static final native void org_chromium_components_payments_JniPaymentApp_freeNativeObject(
      long nativeJniPaymentApp);

  /**
   * org.chromium.components.payments.JniPaymentApp.getApplicationIdentifierToHide
   * @param nativeJniPaymentApp (long)
   * @return (java.lang.String)
   */
  public static final native String org_chromium_components_payments_JniPaymentApp_getApplicationIdentifierToHide(
      long nativeJniPaymentApp);

  /**
   * org.chromium.components.payments.JniPaymentApp.getApplicationIdentifiersThatHideThisApp
   * @param nativeJniPaymentApp (long)
   * @return (java.lang.String[])
   */
  public static final native String[] org_chromium_components_payments_JniPaymentApp_getApplicationIdentifiersThatHideThisApp(
      long nativeJniPaymentApp);

  /**
   * org.chromium.components.payments.JniPaymentApp.getInstrumentMethodNames
   * @param nativeJniPaymentApp (long)
   * @return (java.lang.String[])
   */
  public static final native String[] org_chromium_components_payments_JniPaymentApp_getInstrumentMethodNames(
      long nativeJniPaymentApp);

  /**
   * org.chromium.components.payments.JniPaymentApp.getUkmSourceId
   * @param nativeJniPaymentApp (long)
   * @return (long)
   */
  public static final native long org_chromium_components_payments_JniPaymentApp_getUkmSourceId(
      long nativeJniPaymentApp);

  /**
   * org.chromium.components.payments.JniPaymentApp.handlesPayerEmail
   * @param nativeJniPaymentApp (long)
   * @return (boolean)
   */
  public static final native boolean org_chromium_components_payments_JniPaymentApp_handlesPayerEmail(
      long nativeJniPaymentApp);

  /**
   * org.chromium.components.payments.JniPaymentApp.handlesPayerName
   * @param nativeJniPaymentApp (long)
   * @return (boolean)
   */
  public static final native boolean org_chromium_components_payments_JniPaymentApp_handlesPayerName(
      long nativeJniPaymentApp);

  /**
   * org.chromium.components.payments.JniPaymentApp.handlesPayerPhone
   * @param nativeJniPaymentApp (long)
   * @return (boolean)
   */
  public static final native boolean org_chromium_components_payments_JniPaymentApp_handlesPayerPhone(
      long nativeJniPaymentApp);

  /**
   * org.chromium.components.payments.JniPaymentApp.handlesShippingAddress
   * @param nativeJniPaymentApp (long)
   * @return (boolean)
   */
  public static final native boolean org_chromium_components_payments_JniPaymentApp_handlesShippingAddress(
      long nativeJniPaymentApp);

  /**
   * org.chromium.components.payments.JniPaymentApp.invokePaymentApp
   * @param nativeJniPaymentApp (long)
   * @param callback (org.chromium.components.payments.JniPaymentApp)
   * @return (void)
   */
  public static final native void org_chromium_components_payments_JniPaymentApp_invokePaymentApp(
      long nativeJniPaymentApp, Object callback);

  /**
   * org.chromium.components.payments.JniPaymentApp.isValidForPaymentMethodData
   * @param nativeJniPaymentApp (long)
   * @param method (java.lang.String)
   * @param dataByteBuffer (java.nio.ByteBuffer)
   * @return (boolean)
   */
  public static final native boolean org_chromium_components_payments_JniPaymentApp_isValidForPaymentMethodData(
      long nativeJniPaymentApp, String method, Object dataByteBuffer);

  /**
   * org.chromium.components.payments.JniPaymentApp.isWaitingForPaymentDetailsUpdate
   * @param nativeJniPaymentApp (long)
   * @return (boolean)
   */
  public static final native boolean org_chromium_components_payments_JniPaymentApp_isWaitingForPaymentDetailsUpdate(
      long nativeJniPaymentApp);

  /**
   * org.chromium.components.payments.JniPaymentApp.onPaymentDetailsNotUpdated
   * @param nativeJniPaymentApp (long)
   * @return (void)
   */
  public static final native void org_chromium_components_payments_JniPaymentApp_onPaymentDetailsNotUpdated(
      long nativeJniPaymentApp);

  /**
   * org.chromium.components.payments.JniPaymentApp.setAppSpecificResponseFields
   * @param nativeJniPaymentApp (long)
   * @param paymentResponse (java.nio.ByteBuffer)
   * @return (byte[])
   */
  public static final native byte[] org_chromium_components_payments_JniPaymentApp_setAppSpecificResponseFields(
      long nativeJniPaymentApp, Object paymentResponse);

  /**
   * org.chromium.components.payments.JniPaymentApp.setPaymentHandlerHost
   * @param nativeJniPaymentApp (long)
   * @param paymentHandlerHost (org.chromium.components.payments.PaymentHandlerHost)
   * @return (void)
   */
  public static final native void org_chromium_components_payments_JniPaymentApp_setPaymentHandlerHost(
      long nativeJniPaymentApp, Object paymentHandlerHost);

  /**
   * org.chromium.components.payments.JniPaymentApp.updateWith
   * @param nativeJniPaymentApp (long)
   * @param responseByteBuffer (java.nio.ByteBuffer)
   * @return (void)
   */
  public static final native void org_chromium_components_payments_JniPaymentApp_updateWith(
      long nativeJniPaymentApp, Object responseByteBuffer);

  /**
   * org.chromium.components.payments.JourneyLogger.destroy
   * @param nativeJourneyLoggerAndroid (long)
   * @param caller (org.chromium.components.payments.JourneyLogger)
   * @return (void)
   */
  public static final native void org_chromium_components_payments_JourneyLogger_destroy(
      long nativeJourneyLoggerAndroid, Object caller);

  /**
   * org.chromium.components.payments.JourneyLogger.initJourneyLoggerAndroid
   * @param caller (org.chromium.components.payments.JourneyLogger)
   * @param isIncognito (boolean)
   * @param webContents (org.chromium.content_public.browser.WebContents)
   * @return (long)
   */
  public static final native long org_chromium_components_payments_JourneyLogger_initJourneyLoggerAndroid(
      Object caller, boolean isIncognito, Object webContents);

  /**
   * org.chromium.components.payments.JourneyLogger.recordCheckoutStep
   * @param nativeJourneyLoggerAndroid (long)
   * @param caller (org.chromium.components.payments.JourneyLogger)
   * @param step (int)
   * @return (void)
   */
  public static final native void org_chromium_components_payments_JourneyLogger_recordCheckoutStep(
      long nativeJourneyLoggerAndroid, Object caller, int step);

  /**
   * org.chromium.components.payments.JourneyLogger.setAborted
   * @param nativeJourneyLoggerAndroid (long)
   * @param caller (org.chromium.components.payments.JourneyLogger)
   * @param reason (int)
   * @return (void)
   */
  public static final native void org_chromium_components_payments_JourneyLogger_setAborted(
      long nativeJourneyLoggerAndroid, Object caller, int reason);

  /**
   * org.chromium.components.payments.JourneyLogger.setAvailableMethod
   * @param nativeJourneyLoggerAndroid (long)
   * @param caller (org.chromium.components.payments.JourneyLogger)
   * @param paymentMethodCategory (int)
   * @return (void)
   */
  public static final native void org_chromium_components_payments_JourneyLogger_setAvailableMethod(
      long nativeJourneyLoggerAndroid, Object caller, int paymentMethodCategory);

  /**
   * org.chromium.components.payments.JourneyLogger.setCanMakePaymentValue
   * @param nativeJourneyLoggerAndroid (long)
   * @param caller (org.chromium.components.payments.JourneyLogger)
   * @param value (boolean)
   * @return (void)
   */
  public static final native void org_chromium_components_payments_JourneyLogger_setCanMakePaymentValue(
      long nativeJourneyLoggerAndroid, Object caller, boolean value);

  /**
   * org.chromium.components.payments.JourneyLogger.setCompleted
   * @param nativeJourneyLoggerAndroid (long)
   * @param caller (org.chromium.components.payments.JourneyLogger)
   * @return (void)
   */
  public static final native void org_chromium_components_payments_JourneyLogger_setCompleted(
      long nativeJourneyLoggerAndroid, Object caller);

  /**
   * org.chromium.components.payments.JourneyLogger.setHasEnrolledInstrumentValue
   * @param nativeJourneyLoggerAndroid (long)
   * @param caller (org.chromium.components.payments.JourneyLogger)
   * @param value (boolean)
   * @return (void)
   */
  public static final native void org_chromium_components_payments_JourneyLogger_setHasEnrolledInstrumentValue(
      long nativeJourneyLoggerAndroid, Object caller, boolean value);

  /**
   * org.chromium.components.payments.JourneyLogger.setNotShown
   * @param nativeJourneyLoggerAndroid (long)
   * @param caller (org.chromium.components.payments.JourneyLogger)
   * @param reason (int)
   * @return (void)
   */
  public static final native void org_chromium_components_payments_JourneyLogger_setNotShown(
      long nativeJourneyLoggerAndroid, Object caller, int reason);

  /**
   * org.chromium.components.payments.JourneyLogger.setNumberOfSuggestionsShown
   * @param nativeJourneyLoggerAndroid (long)
   * @param caller (org.chromium.components.payments.JourneyLogger)
   * @param section (int)
   * @param number (int)
   * @param hasCompleteSuggestion (boolean)
   * @return (void)
   */
  public static final native void org_chromium_components_payments_JourneyLogger_setNumberOfSuggestionsShown(
      long nativeJourneyLoggerAndroid, Object caller, int section, int number,
      boolean hasCompleteSuggestion);

  /**
   * org.chromium.components.payments.JourneyLogger.setPayClicked
   * @param nativeJourneyLoggerAndroid (long)
   * @param caller (org.chromium.components.payments.JourneyLogger)
   * @return (void)
   */
  public static final native void org_chromium_components_payments_JourneyLogger_setPayClicked(
      long nativeJourneyLoggerAndroid, Object caller);

  /**
   * org.chromium.components.payments.JourneyLogger.setPaymentAppUkmSourceId
   * @param nativeJourneyLoggerAndroid (long)
   * @param caller (org.chromium.components.payments.JourneyLogger)
   * @param sourceId (long)
   * @return (void)
   */
  public static final native void org_chromium_components_payments_JourneyLogger_setPaymentAppUkmSourceId(
      long nativeJourneyLoggerAndroid, Object caller, long sourceId);

  /**
   * org.chromium.components.payments.JourneyLogger.setReceivedInstrumentDetails
   * @param nativeJourneyLoggerAndroid (long)
   * @param caller (org.chromium.components.payments.JourneyLogger)
   * @return (void)
   */
  public static final native void org_chromium_components_payments_JourneyLogger_setReceivedInstrumentDetails(
      long nativeJourneyLoggerAndroid, Object caller);

  /**
   * org.chromium.components.payments.JourneyLogger.setRequestedInformation
   * @param nativeJourneyLoggerAndroid (long)
   * @param caller (org.chromium.components.payments.JourneyLogger)
   * @param requestShipping (boolean)
   * @param requestEmail (boolean)
   * @param requestPhone (boolean)
   * @param requestName (boolean)
   * @return (void)
   */
  public static final native void org_chromium_components_payments_JourneyLogger_setRequestedInformation(
      long nativeJourneyLoggerAndroid, Object caller, boolean requestShipping, boolean requestEmail,
      boolean requestPhone, boolean requestName);

  /**
   * org.chromium.components.payments.JourneyLogger.setRequestedPaymentMethods
   * @param nativeJourneyLoggerAndroid (long)
   * @param caller (org.chromium.components.payments.JourneyLogger)
   * @param methodTypes (int[])
   * @return (void)
   */
  public static final native void org_chromium_components_payments_JourneyLogger_setRequestedPaymentMethods(
      long nativeJourneyLoggerAndroid, Object caller, int[] methodTypes);

  /**
   * org.chromium.components.payments.JourneyLogger.setSelectedMethod
   * @param nativeJourneyLoggerAndroid (long)
   * @param caller (org.chromium.components.payments.JourneyLogger)
   * @param paymentMethodCategory (int)
   * @return (void)
   */
  public static final native void org_chromium_components_payments_JourneyLogger_setSelectedMethod(
      long nativeJourneyLoggerAndroid, Object caller, int paymentMethodCategory);

  /**
   * org.chromium.components.payments.JourneyLogger.setShown
   * @param nativeJourneyLoggerAndroid (long)
   * @param caller (org.chromium.components.payments.JourneyLogger)
   * @return (void)
   */
  public static final native void org_chromium_components_payments_JourneyLogger_setShown(
      long nativeJourneyLoggerAndroid, Object caller);

  /**
   * org.chromium.components.payments.JourneyLogger.setSkippedShow
   * @param nativeJourneyLoggerAndroid (long)
   * @param caller (org.chromium.components.payments.JourneyLogger)
   * @return (void)
   */
  public static final native void org_chromium_components_payments_JourneyLogger_setSkippedShow(
      long nativeJourneyLoggerAndroid, Object caller);

  /**
   * org.chromium.components.payments.OriginSecurityChecker.isOriginSecure
   * @param url (org.chromium.url.GURL)
   * @return (boolean)
   */
  public static final native boolean org_chromium_components_payments_OriginSecurityChecker_isOriginSecure(
      Object url);

  /**
   * org.chromium.components.payments.OriginSecurityChecker.isSchemeCryptographic
   * @param url (org.chromium.url.GURL)
   * @return (boolean)
   */
  public static final native boolean org_chromium_components_payments_OriginSecurityChecker_isSchemeCryptographic(
      Object url);

  /**
   * org.chromium.components.payments.PaymentAppServiceBridge.create
   * @param initiatorRenderFrameHost (org.chromium.content_public.browser.RenderFrameHost)
   * @param topOrigin (java.lang.String)
   * @param spec (org.chromium.components.payments.PaymentRequestSpec)
   * @param twaPackageName (java.lang.String)
   * @param mayCrawlForInstallablePaymentApps (boolean)
   * @param isOffTheRecord (boolean)
   * @param callback (org.chromium.components.payments.PaymentAppServiceBridge.PaymentAppServiceCallback)
   * @return (void)
   */
  public static final native void org_chromium_components_payments_PaymentAppServiceBridge_create(
      Object initiatorRenderFrameHost, String topOrigin, Object spec, String twaPackageName,
      boolean mayCrawlForInstallablePaymentApps, boolean isOffTheRecord, Object callback);

  /**
   * org.chromium.components.payments.PaymentHandlerNavigationThrottle.markPaymentHandlerWebContents
   * @param webContents (org.chromium.content_public.browser.WebContents)
   * @return (void)
   */
  public static final native void org_chromium_components_payments_PaymentHandlerNavigationThrottle_markPaymentHandlerWebContents(
      Object webContents);

  /**
   * org.chromium.components.payments.PaymentManifestDownloader.createOpaqueOriginForTest
   * @return (org.chromium.url.Origin)
   */
  public static final native Object org_chromium_components_payments_PaymentManifestDownloader_createOpaqueOriginForTest(
      );

  /**
   * org.chromium.components.payments.PaymentManifestDownloader.destroy
   * @param nativePaymentManifestDownloaderAndroid (long)
   * @param caller (org.chromium.components.payments.PaymentManifestDownloader)
   * @return (void)
   */
  public static final native void org_chromium_components_payments_PaymentManifestDownloader_destroy(
      long nativePaymentManifestDownloaderAndroid, Object caller);

  /**
   * org.chromium.components.payments.PaymentManifestDownloader.downloadPaymentMethodManifest
   * @param nativePaymentManifestDownloaderAndroid (long)
   * @param caller (org.chromium.components.payments.PaymentManifestDownloader)
   * @param merchantOrigin (org.chromium.url.Origin)
   * @param methodName (org.chromium.url.GURL)
   * @param callback (org.chromium.components.payments.PaymentManifestDownloader.ManifestDownloadCallback)
   * @return (void)
   */
  public static final native void org_chromium_components_payments_PaymentManifestDownloader_downloadPaymentMethodManifest(
      long nativePaymentManifestDownloaderAndroid, Object caller, Object merchantOrigin,
      Object methodName, Object callback);

  /**
   * org.chromium.components.payments.PaymentManifestDownloader.downloadWebAppManifest
   * @param nativePaymentManifestDownloaderAndroid (long)
   * @param caller (org.chromium.components.payments.PaymentManifestDownloader)
   * @param paymentMethodManifestOrigin (org.chromium.url.Origin)
   * @param webAppManifestUri (org.chromium.url.GURL)
   * @param callback (org.chromium.components.payments.PaymentManifestDownloader.ManifestDownloadCallback)
   * @return (void)
   */
  public static final native void org_chromium_components_payments_PaymentManifestDownloader_downloadWebAppManifest(
      long nativePaymentManifestDownloaderAndroid, Object caller,
      Object paymentMethodManifestOrigin, Object webAppManifestUri, Object callback);

  /**
   * org.chromium.components.payments.PaymentManifestDownloader.init
   * @param webContents (org.chromium.content_public.browser.WebContents)
   * @return (long)
   */
  public static final native long org_chromium_components_payments_PaymentManifestDownloader_init(
      Object webContents);

  /**
   * org.chromium.components.payments.PaymentManifestParser.createPaymentManifestParserAndroid
   * @param webContents (org.chromium.content_public.browser.WebContents)
   * @return (long)
   */
  public static final native long org_chromium_components_payments_PaymentManifestParser_createPaymentManifestParserAndroid(
      Object webContents);

  /**
   * org.chromium.components.payments.PaymentManifestParser.destroyPaymentManifestParserAndroid
   * @param nativePaymentManifestParserAndroid (long)
   * @return (void)
   */
  public static final native void org_chromium_components_payments_PaymentManifestParser_destroyPaymentManifestParserAndroid(
      long nativePaymentManifestParserAndroid);

  /**
   * org.chromium.components.payments.PaymentManifestParser.parsePaymentMethodManifest
   * @param nativePaymentManifestParserAndroid (long)
   * @param manifestUrl (org.chromium.url.GURL)
   * @param content (java.lang.String)
   * @param callback (org.chromium.components.payments.PaymentManifestParser.ManifestParseCallback)
   * @return (void)
   */
  public static final native void org_chromium_components_payments_PaymentManifestParser_parsePaymentMethodManifest(
      long nativePaymentManifestParserAndroid, Object manifestUrl, String content, Object callback);

  /**
   * org.chromium.components.payments.PaymentManifestParser.parseWebAppManifest
   * @param nativePaymentManifestParserAndroid (long)
   * @param content (java.lang.String)
   * @param callback (org.chromium.components.payments.PaymentManifestParser.ManifestParseCallback)
   * @return (void)
   */
  public static final native void org_chromium_components_payments_PaymentManifestParser_parseWebAppManifest(
      long nativePaymentManifestParserAndroid, String content, Object callback);

  /**
   * org.chromium.components.payments.PaymentManifestWebDataService.addPaymentMethodManifest
   * @param nativePaymentManifestWebDataServiceAndroid (long)
   * @param caller (org.chromium.components.payments.PaymentManifestWebDataService)
   * @param methodName (java.lang.String)
   * @param appPackageNames (java.lang.String[])
   * @return (void)
   */
  public static final native void org_chromium_components_payments_PaymentManifestWebDataService_addPaymentMethodManifest(
      long nativePaymentManifestWebDataServiceAndroid, Object caller, String methodName,
      String[] appPackageNames);

  /**
   * org.chromium.components.payments.PaymentManifestWebDataService.addPaymentWebAppManifest
   * @param nativePaymentManifestWebDataServiceAndroid (long)
   * @param caller (org.chromium.components.payments.PaymentManifestWebDataService)
   * @param manifest (org.chromium.components.payments.WebAppManifestSection[])
   * @return (void)
   */
  public static final native void org_chromium_components_payments_PaymentManifestWebDataService_addPaymentWebAppManifest(
      long nativePaymentManifestWebDataServiceAndroid, Object caller, Object[] manifest);

  /**
   * org.chromium.components.payments.PaymentManifestWebDataService.destroy
   * @param nativePaymentManifestWebDataServiceAndroid (long)
   * @param caller (org.chromium.components.payments.PaymentManifestWebDataService)
   * @return (void)
   */
  public static final native void org_chromium_components_payments_PaymentManifestWebDataService_destroy(
      long nativePaymentManifestWebDataServiceAndroid, Object caller);

  /**
   * org.chromium.components.payments.PaymentManifestWebDataService.getPaymentMethodManifest
   * @param nativePaymentManifestWebDataServiceAndroid (long)
   * @param caller (org.chromium.components.payments.PaymentManifestWebDataService)
   * @param methodName (java.lang.String)
   * @param callback (org.chromium.components.payments.PaymentManifestWebDataService.PaymentManifestWebDataServiceCallback)
   * @return (boolean)
   */
  public static final native boolean org_chromium_components_payments_PaymentManifestWebDataService_getPaymentMethodManifest(
      long nativePaymentManifestWebDataServiceAndroid, Object caller, String methodName,
      Object callback);

  /**
   * org.chromium.components.payments.PaymentManifestWebDataService.getPaymentWebAppManifest
   * @param nativePaymentManifestWebDataServiceAndroid (long)
   * @param caller (org.chromium.components.payments.PaymentManifestWebDataService)
   * @param appPackageName (java.lang.String)
   * @param callback (org.chromium.components.payments.PaymentManifestWebDataService.PaymentManifestWebDataServiceCallback)
   * @return (boolean)
   */
  public static final native boolean org_chromium_components_payments_PaymentManifestWebDataService_getPaymentWebAppManifest(
      long nativePaymentManifestWebDataServiceAndroid, Object caller, String appPackageName,
      Object callback);

  /**
   * org.chromium.components.payments.PaymentManifestWebDataService.init
   * @param caller (org.chromium.components.payments.PaymentManifestWebDataService)
   * @param webContents (org.chromium.content_public.browser.WebContents)
   * @return (long)
   */
  public static final native long org_chromium_components_payments_PaymentManifestWebDataService_init(
      Object caller, Object webContents);

  /**
   * org.chromium.components.payments.PaymentValidator.validatePaymentDetailsAndroid
   * @param buffer (java.nio.ByteBuffer)
   * @return (boolean)
   */
  public static final native boolean org_chromium_components_payments_PaymentValidator_validatePaymentDetailsAndroid(
      Object buffer);

  /**
   * org.chromium.components.payments.PaymentValidator.validatePaymentValidationErrorsAndroid
   * @param buffer (java.nio.ByteBuffer)
   * @return (boolean)
   */
  public static final native boolean org_chromium_components_payments_PaymentValidator_validatePaymentValidationErrorsAndroid(
      Object buffer);

  /**
   * org.chromium.components.payments.SslValidityChecker.getInvalidSslCertificateErrorMessage
   * @param webContents (org.chromium.content_public.browser.WebContents)
   * @return (java.lang.String)
   */
  public static final native String org_chromium_components_payments_SslValidityChecker_getInvalidSslCertificateErrorMessage(
      Object webContents);

  /**
   * org.chromium.components.payments.SslValidityChecker.isValidPageInPaymentHandlerWindow
   * @param webContents (org.chromium.content_public.browser.WebContents)
   * @return (boolean)
   */
  public static final native boolean org_chromium_components_payments_SslValidityChecker_isValidPageInPaymentHandlerWindow(
      Object webContents);

  /**
   * org.chromium.components.payments.UrlUtil.isLocalDevelopmentUrl
   * @param url (org.chromium.url.GURL)
   * @return (boolean)
   */
  public static final native boolean org_chromium_components_payments_UrlUtil_isLocalDevelopmentUrl(
      Object url);

  /**
   * org.chromium.components.payments.UrlUtil.isOriginAllowedToUseWebPaymentApis
   * @param url (org.chromium.url.GURL)
   * @return (boolean)
   */
  public static final native boolean org_chromium_components_payments_UrlUtil_isOriginAllowedToUseWebPaymentApis(
      Object url);

  /**
   * org.chromium.components.payments.UrlUtil.isValidUrlBasedPaymentMethodIdentifier
   * @param url (org.chromium.url.GURL)
   * @return (boolean)
   */
  public static final native boolean org_chromium_components_payments_UrlUtil_isValidUrlBasedPaymentMethodIdentifier(
      Object url);
}
