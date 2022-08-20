package org.chromium.base.natives;

import java.lang.Object;

public final class GEN_JNI {
  public static boolean TESTING_ENABLED;

  public static boolean REQUIRE_MOCK;

  /**
   * org.chromium.components.commerce.core.ShoppingService.getAvailableProductInfoForUrl
   * @param nativeShoppingServiceAndroid (long)
   * @param caller (org.chromium.components.commerce.core.ShoppingService)
   * @param url (org.chromium.url.GURL)
   * @return (org.chromium.components.commerce.core.ShoppingService.ProductInfo)
   */
  public static final native Object org_chromium_components_commerce_core_ShoppingService_getAvailableProductInfoForUrl(
      long nativeShoppingServiceAndroid, Object caller, Object url);

  /**
   * org.chromium.components.commerce.core.ShoppingService.getMerchantInfoForUrl
   * @param nativeShoppingServiceAndroid (long)
   * @param caller (org.chromium.components.commerce.core.ShoppingService)
   * @param url (org.chromium.url.GURL)
   * @param callback (org.chromium.components.commerce.core.ShoppingService.MerchantInfoCallback)
   * @return (void)
   */
  public static final native void org_chromium_components_commerce_core_ShoppingService_getMerchantInfoForUrl(
      long nativeShoppingServiceAndroid, Object caller, Object url, Object callback);

  /**
   * org.chromium.components.commerce.core.ShoppingService.getProductInfoForUrl
   * @param nativeShoppingServiceAndroid (long)
   * @param caller (org.chromium.components.commerce.core.ShoppingService)
   * @param url (org.chromium.url.GURL)
   * @param callback (org.chromium.components.commerce.core.ShoppingService.ProductInfoCallback)
   * @return (void)
   */
  public static final native void org_chromium_components_commerce_core_ShoppingService_getProductInfoForUrl(
      long nativeShoppingServiceAndroid, Object caller, Object url, Object callback);
}
