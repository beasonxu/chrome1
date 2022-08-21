package org.chromium.base.natives;

import java.lang.Object;

public final class GEN_JNI {
  public static boolean TESTING_ENABLED;

  public static boolean REQUIRE_MOCK;

  /**
   * org.chromium.components.webauthn.Fido2Api.parseAttestationObject
   * @param attestationObject (byte[])
   * @param result (org.chromium.components.webauthn.Fido2Api.AttestationObjectParts)
   * @return (boolean)
   */
  public static final native boolean org_chromium_components_webauthn_Fido2Api_parseAttestationObject(
      byte[] attestationObject, Object result);

  /**
   * org.chromium.components.webauthn.InternalAuthenticator.invokeGetAssertionResponse
   * @param nativeInternalAuthenticatorAndroid (long)
   * @param status (int)
   * @param byteBuffer (java.nio.ByteBuffer)
   * @return (void)
   */
  public static final native void org_chromium_components_webauthn_InternalAuthenticator_invokeGetAssertionResponse(
      long nativeInternalAuthenticatorAndroid, int status, Object byteBuffer);

  /**
   * org.chromium.components.webauthn.InternalAuthenticator.invokeIsUserVerifyingPlatformAuthenticatorAvailableResponse
   * @param nativeInternalAuthenticatorAndroid (long)
   * @param isUVPAA (boolean)
   * @return (void)
   */
  public static final native void org_chromium_components_webauthn_InternalAuthenticator_invokeIsUserVerifyingPlatformAuthenticatorAvailableResponse(
      long nativeInternalAuthenticatorAndroid, boolean isUVPAA);

  /**
   * org.chromium.components.webauthn.InternalAuthenticator.invokeMakeCredentialResponse
   * @param nativeInternalAuthenticatorAndroid (long)
   * @param status (int)
   * @param byteBuffer (java.nio.ByteBuffer)
   * @return (void)
   */
  public static final native void org_chromium_components_webauthn_InternalAuthenticator_invokeMakeCredentialResponse(
      long nativeInternalAuthenticatorAndroid, int status, Object byteBuffer);

  /**
   * org.chromium.components.webauthn.WebAuthnBrowserBridge.createNativeWebAuthnBrowserBridge
   * @param caller (org.chromium.components.webauthn.WebAuthnBrowserBridge)
   * @return (long)
   */
  public static final native long org_chromium_components_webauthn_WebAuthnBrowserBridge_createNativeWebAuthnBrowserBridge(
      Object caller);

  /**
   * org.chromium.components.webauthn.WebAuthnBrowserBridge.onCredentialsDetailsListReceived
   * @param nativeWebAuthnBrowserBridge (long)
   * @param caller (org.chromium.components.webauthn.WebAuthnBrowserBridge)
   * @param credentialList (org.chromium.components.webauthn.WebAuthnCredentialDetails[])
   * @param frameHost (org.chromium.content_public.browser.RenderFrameHost)
   * @param callback (org.chromium.base.Callback<byte[]>)
   * @return (void)
   */
  public static final native void org_chromium_components_webauthn_WebAuthnBrowserBridge_onCredentialsDetailsListReceived(
      long nativeWebAuthnBrowserBridge, Object caller, Object[] credentialList, Object frameHost,
      Object callback);
}
