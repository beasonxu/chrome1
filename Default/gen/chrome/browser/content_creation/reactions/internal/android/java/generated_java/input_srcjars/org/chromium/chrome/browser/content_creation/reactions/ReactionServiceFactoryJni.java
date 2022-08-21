package org.chromium.chrome.browser.content_creation.reactions;

import java.lang.Override;
import org.chromium.base.JniStaticTestMocker;
import org.chromium.base.NativeLibraryLoadedStatus;
import org.chromium.base.annotations.CheckDiscard;
import org.chromium.base.natives.GEN_JNI;
import org.chromium.chrome.browser.profiles.Profile;
import org.chromium.components.content_creation.reactions.ReactionService;

@CheckDiscard("crbug.com/993421")
class ReactionServiceFactoryJni implements ReactionServiceFactory.Natives {
  private static ReactionServiceFactory.Natives testInstance;

  public static final JniStaticTestMocker<ReactionServiceFactory.Natives> TEST_HOOKS = new org.chromium.base.JniStaticTestMocker<org.chromium.chrome.browser.content_creation.reactions.ReactionServiceFactory.Natives>() {
    @java.lang.Override
    public void setInstanceForTesting(
        org.chromium.chrome.browser.content_creation.reactions.ReactionServiceFactory.Natives instance) {
      if (!org.chromium.base.natives.GEN_JNI.TESTING_ENABLED) {
        throw new RuntimeException("Tried to set a JNI mock when mocks aren't enabled!");
      }
      testInstance = instance;
    }
  };

  @Override
  public ReactionService getForProfile(Profile profile) {
    return (ReactionService)GEN_JNI.org_chromium_chrome_browser_content_1creation_reactions_ReactionServiceFactory_getForProfile(profile);
  }

  public static ReactionServiceFactory.Natives get() {
    if (GEN_JNI.TESTING_ENABLED) {
      if (testInstance != null) {
        return testInstance;
      }
      if (GEN_JNI.REQUIRE_MOCK) {
        throw new UnsupportedOperationException("No mock found for the native implementation for org.chromium.chrome.browser.content_creation.reactions.ReactionServiceFactory.Natives. The current configuration requires all native implementations to have a mock instance.");
      }
    }
    NativeLibraryLoadedStatus.checkLoaded(false);
    return new ReactionServiceFactoryJni();
  }
}
