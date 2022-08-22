package org.chromium.content.browser;

import java.lang.Override;
import org.chromium.base.JniStaticTestMocker;
import org.chromium.base.NativeLibraryLoadedStatus;
import org.chromium.base.annotations.CheckDiscard;
import org.chromium.base.natives.GEN_JNI;
import org.chromium.content_public.browser.BrowserContextHandle;
import org.chromium.content_public.browser.WebContents;

@CheckDiscard("crbug.com/993421")
public class HostZoomMapImplJni implements HostZoomMapImpl.Natives {
  private static HostZoomMapImpl.Natives testInstance;

  public static final JniStaticTestMocker<HostZoomMapImpl.Natives> TEST_HOOKS = new org.chromium.base.JniStaticTestMocker<org.chromium.content.browser.HostZoomMapImpl.Natives>() {
    @java.lang.Override
    public void setInstanceForTesting(org.chromium.content.browser.HostZoomMapImpl.Natives instance) {
      if (!org.chromium.base.natives.GEN_JNI.TESTING_ENABLED) {
        throw new RuntimeException("Tried to set a JNI mock when mocks aren't enabled!");
      }
      testInstance = instance;
    }
  };

  @Override
  public void setZoomLevel(WebContents webContents, double newZoomLevel, double adjustedZoomLevel) {
    GEN_JNI.org_chromium_content_browser_HostZoomMapImpl_setZoomLevel(webContents, newZoomLevel, adjustedZoomLevel);
  }

  @Override
  public double getZoomLevel(WebContents webContents) {
    return (double)GEN_JNI.org_chromium_content_browser_HostZoomMapImpl_getZoomLevel(webContents);
  }

  @Override
  public void setDefaultZoomLevel(BrowserContextHandle context, double newDefaultZoomLevel) {
    GEN_JNI.org_chromium_content_browser_HostZoomMapImpl_setDefaultZoomLevel(context, newDefaultZoomLevel);
  }

  @Override
  public double getDefaultZoomLevel(BrowserContextHandle context) {
    return (double)GEN_JNI.org_chromium_content_browser_HostZoomMapImpl_getDefaultZoomLevel(context);
  }

  public static HostZoomMapImpl.Natives get() {
    if (GEN_JNI.TESTING_ENABLED) {
      if (testInstance != null) {
        return testInstance;
      }
      if (GEN_JNI.REQUIRE_MOCK) {
        throw new UnsupportedOperationException("No mock found for the native implementation for org.chromium.content.browser.HostZoomMapImpl.Natives. The current configuration requires all native implementations to have a mock instance.");
      }
    }
    NativeLibraryLoadedStatus.checkLoaded(false);
    return new HostZoomMapImplJni();
  }
}
