package org.chromium.base.natives;

import java.lang.Object;
import java.lang.String;

public final class GEN_JNI {
  public static boolean TESTING_ENABLED;

  public static boolean REQUIRE_MOCK;

  /**
   * org.chromium.components.page_info.CertificateChainHelper.getCertificateChain
   * @param webContents (org.chromium.content_public.browser.WebContents)
   * @return (byte[][])
   */
  public static final native byte[][] org_chromium_components_page_1info_CertificateChainHelper_getCertificateChain(
      Object webContents);

  /**
   * org.chromium.components.page_info.CertificateViewer.getCertExpiresOnText
   * @return (java.lang.String)
   */
  public static final native String org_chromium_components_page_1info_CertificateViewer_getCertExpiresOnText(
      );

  /**
   * org.chromium.components.page_info.CertificateViewer.getCertExtensionText
   * @return (java.lang.String)
   */
  public static final native String org_chromium_components_page_1info_CertificateViewer_getCertExtensionText(
      );

  /**
   * org.chromium.components.page_info.CertificateViewer.getCertFingerprintsText
   * @return (java.lang.String)
   */
  public static final native String org_chromium_components_page_1info_CertificateViewer_getCertFingerprintsText(
      );

  /**
   * org.chromium.components.page_info.CertificateViewer.getCertInfoCommonNameText
   * @return (java.lang.String)
   */
  public static final native String org_chromium_components_page_1info_CertificateViewer_getCertInfoCommonNameText(
      );

  /**
   * org.chromium.components.page_info.CertificateViewer.getCertInfoOrganizationText
   * @return (java.lang.String)
   */
  public static final native String org_chromium_components_page_1info_CertificateViewer_getCertInfoOrganizationText(
      );

  /**
   * org.chromium.components.page_info.CertificateViewer.getCertInfoOrganizationUnitText
   * @return (java.lang.String)
   */
  public static final native String org_chromium_components_page_1info_CertificateViewer_getCertInfoOrganizationUnitText(
      );

  /**
   * org.chromium.components.page_info.CertificateViewer.getCertInfoSerialNumberText
   * @return (java.lang.String)
   */
  public static final native String org_chromium_components_page_1info_CertificateViewer_getCertInfoSerialNumberText(
      );

  /**
   * org.chromium.components.page_info.CertificateViewer.getCertIssuedByText
   * @return (java.lang.String)
   */
  public static final native String org_chromium_components_page_1info_CertificateViewer_getCertIssuedByText(
      );

  /**
   * org.chromium.components.page_info.CertificateViewer.getCertIssuedOnText
   * @return (java.lang.String)
   */
  public static final native String org_chromium_components_page_1info_CertificateViewer_getCertIssuedOnText(
      );

  /**
   * org.chromium.components.page_info.CertificateViewer.getCertIssuedToText
   * @return (java.lang.String)
   */
  public static final native String org_chromium_components_page_1info_CertificateViewer_getCertIssuedToText(
      );

  /**
   * org.chromium.components.page_info.CertificateViewer.getCertSANText
   * @return (java.lang.String)
   */
  public static final native String org_chromium_components_page_1info_CertificateViewer_getCertSANText(
      );

  /**
   * org.chromium.components.page_info.CertificateViewer.getCertSHA1FingerprintText
   * @return (java.lang.String)
   */
  public static final native String org_chromium_components_page_1info_CertificateViewer_getCertSHA1FingerprintText(
      );

  /**
   * org.chromium.components.page_info.CertificateViewer.getCertSHA256FingerprintText
   * @return (java.lang.String)
   */
  public static final native String org_chromium_components_page_1info_CertificateViewer_getCertSHA256FingerprintText(
      );

  /**
   * org.chromium.components.page_info.CertificateViewer.getCertValidityText
   * @return (java.lang.String)
   */
  public static final native String org_chromium_components_page_1info_CertificateViewer_getCertValidityText(
      );

  /**
   * org.chromium.components.page_info.ConnectionInfoView.destroy
   * @param nativeConnectionInfoViewAndroid (long)
   * @param caller (org.chromium.components.page_info.ConnectionInfoView)
   * @return (void)
   */
  public static final native void org_chromium_components_page_1info_ConnectionInfoView_destroy(
      long nativeConnectionInfoViewAndroid, Object caller);

  /**
   * org.chromium.components.page_info.ConnectionInfoView.init
   * @param popup (org.chromium.components.page_info.ConnectionInfoView)
   * @param webContents (org.chromium.content_public.browser.WebContents)
   * @return (long)
   */
  public static final native long org_chromium_components_page_1info_ConnectionInfoView_init(
      Object popup, Object webContents);

  /**
   * org.chromium.components.page_info.ConnectionInfoView.resetCertDecisions
   * @param nativeConnectionInfoViewAndroid (long)
   * @param caller (org.chromium.components.page_info.ConnectionInfoView)
   * @param webContents (org.chromium.content_public.browser.WebContents)
   * @return (void)
   */
  public static final native void org_chromium_components_page_1info_ConnectionInfoView_resetCertDecisions(
      long nativeConnectionInfoViewAndroid, Object caller, Object webContents);

  /**
   * org.chromium.components.page_info.PageInfoController.destroy
   * @param nativePageInfoControllerAndroid (long)
   * @param caller (org.chromium.components.page_info.PageInfoController)
   * @return (void)
   */
  public static final native void org_chromium_components_page_1info_PageInfoController_destroy(
      long nativePageInfoControllerAndroid, Object caller);

  /**
   * org.chromium.components.page_info.PageInfoController.init
   * @param controller (org.chromium.components.page_info.PageInfoController)
   * @param webContents (org.chromium.content_public.browser.WebContents)
   * @return (long)
   */
  public static final native long org_chromium_components_page_1info_PageInfoController_init(
      Object controller, Object webContents);

  /**
   * org.chromium.components.page_info.PageInfoController.recordPageInfoAction
   * @param nativePageInfoControllerAndroid (long)
   * @param caller (org.chromium.components.page_info.PageInfoController)
   * @param action (int)
   * @return (void)
   */
  public static final native void org_chromium_components_page_1info_PageInfoController_recordPageInfoAction(
      long nativePageInfoControllerAndroid, Object caller, int action);

  /**
   * org.chromium.components.page_info.PageInfoController.setAboutThisSiteShown
   * @param nativePageInfoControllerAndroid (long)
   * @param caller (org.chromium.components.page_info.PageInfoController)
   * @param wasAboutThisSiteShown (boolean)
   * @return (void)
   */
  public static final native void org_chromium_components_page_1info_PageInfoController_setAboutThisSiteShown(
      long nativePageInfoControllerAndroid, Object caller, boolean wasAboutThisSiteShown);

  /**
   * org.chromium.components.page_info.PageInfoController.updatePermissions
   * @param nativePageInfoControllerAndroid (long)
   * @param caller (org.chromium.components.page_info.PageInfoController)
   * @return (void)
   */
  public static final native void org_chromium_components_page_1info_PageInfoController_updatePermissions(
      long nativePageInfoControllerAndroid, Object caller);

  /**
   * org.chromium.components.page_info.PageInfoFeatures.getFeature
   * @param ordinal (int)
   * @return (long)
   */
  public static final native long org_chromium_components_page_1info_PageInfoFeatures_getFeature(
      int ordinal);
}
