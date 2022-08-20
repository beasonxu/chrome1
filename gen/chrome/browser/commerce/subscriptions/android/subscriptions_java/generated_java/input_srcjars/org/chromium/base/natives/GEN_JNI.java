package org.chromium.base.natives;

import java.lang.Object;
import java.lang.String;

public final class GEN_JNI {
  public static boolean TESTING_ENABLED;

  public static boolean REQUIRE_MOCK;

  /**
   * org.chromium.chrome.browser.subscriptions.CommerceSubscriptionsStorage.delete
   * @param nativeCommerceSubscriptionDB (long)
   * @param key (java.lang.String)
   * @param onComplete (java.lang.Runnable)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_subscriptions_CommerceSubscriptionsStorage_delete(
      long nativeCommerceSubscriptionDB, String key, Object onComplete);

  /**
   * org.chromium.chrome.browser.subscriptions.CommerceSubscriptionsStorage.deleteAll
   * @param nativeCommerceSubscriptionDB (long)
   * @param onComplete (java.lang.Runnable)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_subscriptions_CommerceSubscriptionsStorage_deleteAll(
      long nativeCommerceSubscriptionDB, Object onComplete);

  /**
   * org.chromium.chrome.browser.subscriptions.CommerceSubscriptionsStorage.destroy
   * @param nativeCommerceSubscriptionDB (long)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_subscriptions_CommerceSubscriptionsStorage_destroy(
      long nativeCommerceSubscriptionDB);

  /**
   * org.chromium.chrome.browser.subscriptions.CommerceSubscriptionsStorage.init
   * @param caller (org.chromium.chrome.browser.subscriptions.CommerceSubscriptionsStorage)
   * @param handle (org.chromium.content_public.browser.BrowserContextHandle)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_subscriptions_CommerceSubscriptionsStorage_init(
      Object caller, Object handle);

  /**
   * org.chromium.chrome.browser.subscriptions.CommerceSubscriptionsStorage.load
   * @param nativeCommerceSubscriptionDB (long)
   * @param key (java.lang.String)
   * @param callback (org.chromium.base.Callback<org.chromium.chrome.browser.subscriptions.CommerceSubscription>)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_subscriptions_CommerceSubscriptionsStorage_load(
      long nativeCommerceSubscriptionDB, String key, Object callback);

  /**
   * org.chromium.chrome.browser.subscriptions.CommerceSubscriptionsStorage.loadWithPrefix
   * @param nativeCommerceSubscriptionDB (long)
   * @param key (java.lang.String)
   * @param callback (org.chromium.base.Callback<java.util.List<org.chromium.chrome.browser.subscriptions.CommerceSubscription>>)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_subscriptions_CommerceSubscriptionsStorage_loadWithPrefix(
      long nativeCommerceSubscriptionDB, String key, Object callback);

  /**
   * org.chromium.chrome.browser.subscriptions.CommerceSubscriptionsStorage.save
   * @param nativeCommerceSubscriptionDB (long)
   * @param key (java.lang.String)
   * @param type (java.lang.String)
   * @param trackingId (java.lang.String)
   * @param managementType (java.lang.String)
   * @param trackingIdType (java.lang.String)
   * @param timestamp (long)
   * @param onComplete (java.lang.Runnable)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_subscriptions_CommerceSubscriptionsStorage_save(
      long nativeCommerceSubscriptionDB, String key, String type, String trackingId,
      String managementType, String trackingIdType, long timestamp, Object onComplete);
}
