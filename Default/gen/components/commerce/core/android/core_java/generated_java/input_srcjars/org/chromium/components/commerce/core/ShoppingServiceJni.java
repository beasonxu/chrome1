package org.chromium.components.commerce.core;

import java.lang.Override;
import org.chromium.base.JniStaticTestMocker;
import org.chromium.base.NativeLibraryLoadedStatus;
import org.chromium.base.annotations.CheckDiscard;
import org.chromium.base.natives.GEN_JNI;
import org.chromium.url.GURL;

@CheckDiscard("crbug.com/993421")
class ShoppingServiceJni implements ShoppingService.Natives {
  private static ShoppingService.Natives testInstance;

  public static final JniStaticTestMocker<ShoppingService.Natives> TEST_HOOKS = new org.chromium.base.JniStaticTestMocker<org.chromium.components.commerce.core.ShoppingService.Natives>() {
    @java.lang.Override
    public void setInstanceForTesting(
        org.chromium.components.commerce.core.ShoppingService.Natives instance) {
      if (!org.chromium.base.natives.GEN_JNI.TESTING_ENABLED) {
        throw new RuntimeException("Tried to set a JNI mock when mocks aren't enabled!");
      }
      testInstance = instance;
    }
  };

  @Override
  public void getProductInfoForUrl(long nativeShoppingServiceAndroid, ShoppingService caller,
      GURL url, ShoppingService.ProductInfoCallback callback) {
    GEN_JNI.org_chromium_components_commerce_core_ShoppingService_getProductInfoForUrl(nativeShoppingServiceAndroid, caller, url, callback);
  }

  @Override
  public ShoppingService.ProductInfo getAvailableProductInfoForUrl(
      long nativeShoppingServiceAndroid, ShoppingService caller, GURL url) {
    return (ShoppingService.ProductInfo)GEN_JNI.org_chromium_components_commerce_core_ShoppingService_getAvailableProductInfoForUrl(nativeShoppingServiceAndroid, caller, url);
  }

  @Override
  public void getMerchantInfoForUrl(long nativeShoppingServiceAndroid, ShoppingService caller,
      GURL url, ShoppingService.MerchantInfoCallback callback) {
    GEN_JNI.org_chromium_components_commerce_core_ShoppingService_getMerchantInfoForUrl(nativeShoppingServiceAndroid, caller, url, callback);
  }

  public static ShoppingService.Natives get() {
    if (GEN_JNI.TESTING_ENABLED) {
      if (testInstance != null) {
        return testInstance;
      }
      if (GEN_JNI.REQUIRE_MOCK) {
        throw new UnsupportedOperationException("No mock found for the native implementation for org.chromium.components.commerce.core.ShoppingService.Natives. The current configuration requires all native implementations to have a mock instance.");
      }
    }
    NativeLibraryLoadedStatus.checkLoaded(false);
    return new ShoppingServiceJni();
  }
}
