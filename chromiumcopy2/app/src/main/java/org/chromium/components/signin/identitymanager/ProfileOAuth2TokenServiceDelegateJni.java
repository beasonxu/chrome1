package org.chromium.components.signin.identitymanager;

import java.lang.Override;
import java.lang.String;
import org.chromium.base.JniStaticTestMocker;
import org.chromium.base.NativeLibraryLoadedStatus;
import org.chromium.base.annotations.CheckDiscard;
import org.chromium.base.natives.GEN_JNI;

@CheckDiscard("crbug.com/993421")
class ProfileOAuth2TokenServiceDelegateJni implements ProfileOAuth2TokenServiceDelegate.Natives {
  private static ProfileOAuth2TokenServiceDelegate.Natives testInstance;

  public static final JniStaticTestMocker<ProfileOAuth2TokenServiceDelegate.Natives> TEST_HOOKS = new org.chromium.base.JniStaticTestMocker<org.chromium.components.signin.identitymanager.ProfileOAuth2TokenServiceDelegate.Natives>() {
    @java.lang.Override
    public void setInstanceForTesting(
        org.chromium.components.signin.identitymanager.ProfileOAuth2TokenServiceDelegate.Natives instance) {
      if (!org.chromium.base.natives.GEN_JNI.TESTING_ENABLED) {
        throw new RuntimeException("Tried to set a JNI mock when mocks aren't enabled!");
      }
      testInstance = instance;
    }
  };

  @Override
  public void onOAuth2TokenFetched(String authToken, long expirationTimeSecs,
      boolean isTransientError, long nativeCallback) {
    GEN_JNI.org_chromium_components_signin_identitymanager_ProfileOAuth2TokenServiceDelegate_onOAuth2TokenFetched(authToken, expirationTimeSecs, isTransientError, nativeCallback);
  }

  @Override
  public void reloadAllAccountsWithPrimaryAccountAfterSeeding(
      long nativeProfileOAuth2TokenServiceDelegateAndroid, String accountId,
      String[] deviceAccountNames) {
    GEN_JNI.org_chromium_components_signin_identitymanager_ProfileOAuth2TokenServiceDelegate_reloadAllAccountsWithPrimaryAccountAfterSeeding(nativeProfileOAuth2TokenServiceDelegateAndroid, accountId, deviceAccountNames);
  }

  public static ProfileOAuth2TokenServiceDelegate.Natives get() {
    if (GEN_JNI.TESTING_ENABLED) {
      if (testInstance != null) {
        return testInstance;
      }
      if (GEN_JNI.REQUIRE_MOCK) {
        throw new UnsupportedOperationException("No mock found for the native implementation for org.chromium.components.signin.identitymanager.ProfileOAuth2TokenServiceDelegate.Natives. The current configuration requires all native implementations to have a mock instance.");
      }
    }
    NativeLibraryLoadedStatus.checkLoaded(false);
    return new ProfileOAuth2TokenServiceDelegateJni();
  }
}
