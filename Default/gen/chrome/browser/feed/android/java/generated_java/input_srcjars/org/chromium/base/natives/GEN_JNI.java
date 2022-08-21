package org.chromium.base.natives;

import java.lang.Object;
import java.lang.String;

public final class GEN_JNI {
  public static boolean TESTING_ENABLED;

  public static boolean REQUIRE_MOCK;

  /**
   * org.chromium.chrome.browser.feed.FeedImageFetchClient.cancel
   * @param requestId (int)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_feed_FeedImageFetchClient_cancel(
      int requestId);

  /**
   * org.chromium.chrome.browser.feed.FeedImageFetchClient.sendRequest
   * @param url (java.lang.String)
   * @param responseConsumer (org.chromium.chrome.browser.xsurface.ImageFetchClient.HttpResponseConsumer)
   * @return (int)
   */
  public static final native int org_chromium_chrome_browser_feed_FeedImageFetchClient_sendRequest(
      String url, Object responseConsumer);

  /**
   * org.chromium.chrome.browser.feed.FeedPersistentKeyValueCache.evict
   * @param key (byte[])
   * @param onComplete (java.lang.Runnable)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_feed_FeedPersistentKeyValueCache_evict(
      byte[] key, Object onComplete);

  /**
   * org.chromium.chrome.browser.feed.FeedPersistentKeyValueCache.lookup
   * @param key (byte[])
   * @param consumer (java.lang.Object)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_feed_FeedPersistentKeyValueCache_lookup(
      byte[] key, Object consumer);

  /**
   * org.chromium.chrome.browser.feed.FeedPersistentKeyValueCache.put
   * @param key (byte[])
   * @param value (byte[])
   * @param onComplete (java.lang.Runnable)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_feed_FeedPersistentKeyValueCache_put(
      byte[] key, byte[] value, Object onComplete);

  /**
   * org.chromium.chrome.browser.feed.FeedProcessScopeDependencyProvider.getExperimentIds
   * @return (int[])
   */
  public static final native int[] org_chromium_chrome_browser_feed_FeedProcessScopeDependencyProvider_getExperimentIds(
      );

  /**
   * org.chromium.chrome.browser.feed.FeedProcessScopeDependencyProvider.getSessionId
   * @return (java.lang.String)
   */
  public static final native String org_chromium_chrome_browser_feed_FeedProcessScopeDependencyProvider_getSessionId(
      );

  /**
   * org.chromium.chrome.browser.feed.FeedProcessScopeDependencyProvider.processViewAction
   * @param actionData (byte[])
   * @param loggingParameters (byte[])
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_feed_FeedProcessScopeDependencyProvider_processViewAction(
      byte[] actionData, byte[] loggingParameters);

  /**
   * org.chromium.chrome.browser.feed.FeedReliabilityLoggingBridge.destroy
   * @param nativeFeedReliabilityLoggingBridge (long)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_feed_FeedReliabilityLoggingBridge_destroy(
      long nativeFeedReliabilityLoggingBridge);

  /**
   * org.chromium.chrome.browser.feed.FeedReliabilityLoggingBridge.init
   * @param thisRef (org.chromium.chrome.browser.feed.FeedReliabilityLoggingBridge)
   * @return (long)
   */
  public static final native long org_chromium_chrome_browser_feed_FeedReliabilityLoggingBridge_init(
      Object thisRef);

  /**
   * org.chromium.chrome.browser.feed.FeedServiceBridge.addUnreadContentObserver
   * @param object (java.lang.Object)
   * @param isWebFeed (boolean)
   * @return (long)
   */
  public static final native long org_chromium_chrome_browser_feed_FeedServiceBridge_addUnreadContentObserver(
      Object object, boolean isWebFeed);

  /**
   * org.chromium.chrome.browser.feed.FeedServiceBridge.destroy
   * @param nativePtr (long)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_feed_FeedServiceBridge_destroy(
      long nativePtr);

  /**
   * org.chromium.chrome.browser.feed.FeedServiceBridge.getContentOrderForWebFeed
   * @return (int)
   */
  public static final native int org_chromium_chrome_browser_feed_FeedServiceBridge_getContentOrderForWebFeed(
      );

  /**
   * org.chromium.chrome.browser.feed.FeedServiceBridge.getLoadMoreTriggerLookahead
   * @return (int)
   */
  public static final native int org_chromium_chrome_browser_feed_FeedServiceBridge_getLoadMoreTriggerLookahead(
      );

  /**
   * org.chromium.chrome.browser.feed.FeedServiceBridge.getLoadMoreTriggerScrollDistanceDp
   * @return (int)
   */
  public static final native int org_chromium_chrome_browser_feed_FeedServiceBridge_getLoadMoreTriggerScrollDistanceDp(
      );

  /**
   * org.chromium.chrome.browser.feed.FeedServiceBridge.getReliabilityLoggingId
   * @return (long)
   */
  public static final native long org_chromium_chrome_browser_feed_FeedServiceBridge_getReliabilityLoggingId(
      );

  /**
   * org.chromium.chrome.browser.feed.FeedServiceBridge.getVideoPreviewsTypePreference
   * @return (int)
   */
  public static final native int org_chromium_chrome_browser_feed_FeedServiceBridge_getVideoPreviewsTypePreference(
      );

  /**
   * org.chromium.chrome.browser.feed.FeedServiceBridge.isAutoplayEnabled
   * @return (boolean)
   */
  public static final native boolean org_chromium_chrome_browser_feed_FeedServiceBridge_isAutoplayEnabled(
      );

  /**
   * org.chromium.chrome.browser.feed.FeedServiceBridge.isEnabled
   * @return (boolean)
   */
  public static final native boolean org_chromium_chrome_browser_feed_FeedServiceBridge_isEnabled();

  /**
   * org.chromium.chrome.browser.feed.FeedServiceBridge.reportOpenVisitComplete
   * @param visitTimeMs (long)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_feed_FeedServiceBridge_reportOpenVisitComplete(
      long visitTimeMs);

  /**
   * org.chromium.chrome.browser.feed.FeedServiceBridge.reportOtherUserAction
   * @param streamKind (int)
   * @param userAction (int)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_feed_FeedServiceBridge_reportOtherUserAction(
      int streamKind, int userAction);

  /**
   * org.chromium.chrome.browser.feed.FeedServiceBridge.setContentOrderForWebFeed
   * @param contentOrder (int)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_feed_FeedServiceBridge_setContentOrderForWebFeed(
      int contentOrder);

  /**
   * org.chromium.chrome.browser.feed.FeedServiceBridge.setVideoPreviewsTypePreference
   * @param videoPreviewsType (int)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_feed_FeedServiceBridge_setVideoPreviewsTypePreference(
      int videoPreviewsType);

  /**
   * org.chromium.chrome.browser.feed.FeedServiceBridge.startup
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_feed_FeedServiceBridge_startup();

  /**
   * org.chromium.chrome.browser.feed.FeedStream.commitEphemeralChange
   * @param nativeFeedStream (long)
   * @param caller (org.chromium.chrome.browser.feed.FeedStream)
   * @param changeId (int)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_feed_FeedStream_commitEphemeralChange(
      long nativeFeedStream, Object caller, int changeId);

  /**
   * org.chromium.chrome.browser.feed.FeedStream.discardEphemeralChange
   * @param nativeFeedStream (long)
   * @param caller (org.chromium.chrome.browser.feed.FeedStream)
   * @param changeId (int)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_feed_FeedStream_discardEphemeralChange(
      long nativeFeedStream, Object caller, int changeId);

  /**
   * org.chromium.chrome.browser.feed.FeedStream.executeEphemeralChange
   * @param nativeFeedStream (long)
   * @param caller (org.chromium.chrome.browser.feed.FeedStream)
   * @param data (byte[])
   * @return (int)
   */
  public static final native int org_chromium_chrome_browser_feed_FeedStream_executeEphemeralChange(
      long nativeFeedStream, Object caller, byte[] data);

  /**
   * org.chromium.chrome.browser.feed.FeedStream.getLastFetchTimeMs
   * @param nativeFeedStream (long)
   * @param caller (org.chromium.chrome.browser.feed.FeedStream)
   * @return (long)
   */
  public static final native long org_chromium_chrome_browser_feed_FeedStream_getLastFetchTimeMs(
      long nativeFeedStream, Object caller);

  /**
   * org.chromium.chrome.browser.feed.FeedStream.getSurfaceId
   * @param nativeFeedStream (long)
   * @param caller (org.chromium.chrome.browser.feed.FeedStream)
   * @return (int)
   */
  public static final native int org_chromium_chrome_browser_feed_FeedStream_getSurfaceId(
      long nativeFeedStream, Object caller);

  /**
   * org.chromium.chrome.browser.feed.FeedStream.init
   * @param caller (org.chromium.chrome.browser.feed.FeedStream)
   * @param streamKind (int)
   * @param nativeFeedReliabilityLoggingBridge (long)
   * @return (long)
   */
  public static final native long org_chromium_chrome_browser_feed_FeedStream_init(Object caller,
      int streamKind, long nativeFeedReliabilityLoggingBridge);

  /**
   * org.chromium.chrome.browser.feed.FeedStream.invalidateContentCacheFor
   * @param nativeFeedStream (long)
   * @param caller (org.chromium.chrome.browser.feed.FeedStream)
   * @param feedToInvalidate (int)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_feed_FeedStream_invalidateContentCacheFor(
      long nativeFeedStream, Object caller, int feedToInvalidate);

  /**
   * org.chromium.chrome.browser.feed.FeedStream.loadMore
   * @param nativeFeedStream (long)
   * @param caller (org.chromium.chrome.browser.feed.FeedStream)
   * @param callback (org.chromium.base.Callback<java.lang.Boolean>)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_feed_FeedStream_loadMore(
      long nativeFeedStream, Object caller, Object callback);

  /**
   * org.chromium.chrome.browser.feed.FeedStream.manualRefresh
   * @param nativeFeedStream (long)
   * @param caller (org.chromium.chrome.browser.feed.FeedStream)
   * @param callback (org.chromium.base.Callback<java.lang.Boolean>)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_feed_FeedStream_manualRefresh(
      long nativeFeedStream, Object caller, Object callback);

  /**
   * org.chromium.chrome.browser.feed.FeedStream.processThereAndBackAgain
   * @param nativeFeedStream (long)
   * @param caller (org.chromium.chrome.browser.feed.FeedStream)
   * @param data (byte[])
   * @param loggingParameters (byte[])
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_feed_FeedStream_processThereAndBackAgain(
      long nativeFeedStream, Object caller, byte[] data, byte[] loggingParameters);

  /**
   * org.chromium.chrome.browser.feed.FeedStream.reportFeedViewed
   * @param nativeFeedStream (long)
   * @param caller (org.chromium.chrome.browser.feed.FeedStream)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_feed_FeedStream_reportFeedViewed(
      long nativeFeedStream, Object caller);

  /**
   * org.chromium.chrome.browser.feed.FeedStream.reportInfoCardClicked
   * @param nativeFeedStream (long)
   * @param caller (org.chromium.chrome.browser.feed.FeedStream)
   * @param type (int)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_feed_FeedStream_reportInfoCardClicked(
      long nativeFeedStream, Object caller, int type);

  /**
   * org.chromium.chrome.browser.feed.FeedStream.reportInfoCardDismissedExplicitly
   * @param nativeFeedStream (long)
   * @param caller (org.chromium.chrome.browser.feed.FeedStream)
   * @param type (int)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_feed_FeedStream_reportInfoCardDismissedExplicitly(
      long nativeFeedStream, Object caller, int type);

  /**
   * org.chromium.chrome.browser.feed.FeedStream.reportInfoCardTrackViewStarted
   * @param nativeFeedStream (long)
   * @param caller (org.chromium.chrome.browser.feed.FeedStream)
   * @param type (int)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_feed_FeedStream_reportInfoCardTrackViewStarted(
      long nativeFeedStream, Object caller, int type);

  /**
   * org.chromium.chrome.browser.feed.FeedStream.reportInfoCardViewed
   * @param nativeFeedStream (long)
   * @param caller (org.chromium.chrome.browser.feed.FeedStream)
   * @param type (int)
   * @param minimumViewIntervalSeconds (int)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_feed_FeedStream_reportInfoCardViewed(
      long nativeFeedStream, Object caller, int type, int minimumViewIntervalSeconds);

  /**
   * org.chromium.chrome.browser.feed.FeedStream.reportOpenAction
   * @param nativeFeedStream (long)
   * @param caller (org.chromium.chrome.browser.feed.FeedStream)
   * @param url (org.chromium.url.GURL)
   * @param sliceId (java.lang.String)
   * @param openActionType (int)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_feed_FeedStream_reportOpenAction(
      long nativeFeedStream, Object caller, Object url, String sliceId, int openActionType);

  /**
   * org.chromium.chrome.browser.feed.FeedStream.reportOtherUserAction
   * @param nativeFeedStream (long)
   * @param caller (org.chromium.chrome.browser.feed.FeedStream)
   * @param userAction (int)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_feed_FeedStream_reportOtherUserAction(
      long nativeFeedStream, Object caller, int userAction);

  /**
   * org.chromium.chrome.browser.feed.FeedStream.reportPageLoaded
   * @param nativeFeedStream (long)
   * @param caller (org.chromium.chrome.browser.feed.FeedStream)
   * @param inNewTab (boolean)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_feed_FeedStream_reportPageLoaded(
      long nativeFeedStream, Object caller, boolean inNewTab);

  /**
   * org.chromium.chrome.browser.feed.FeedStream.reportSliceViewed
   * @param nativeFeedStream (long)
   * @param caller (org.chromium.chrome.browser.feed.FeedStream)
   * @param sliceId (java.lang.String)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_feed_FeedStream_reportSliceViewed(
      long nativeFeedStream, Object caller, String sliceId);

  /**
   * org.chromium.chrome.browser.feed.FeedStream.reportStreamScrollStart
   * @param nativeFeedStream (long)
   * @param caller (org.chromium.chrome.browser.feed.FeedStream)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_feed_FeedStream_reportStreamScrollStart(
      long nativeFeedStream, Object caller);

  /**
   * org.chromium.chrome.browser.feed.FeedStream.reportStreamScrolled
   * @param nativeFeedStream (long)
   * @param caller (org.chromium.chrome.browser.feed.FeedStream)
   * @param distanceDp (int)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_feed_FeedStream_reportStreamScrolled(
      long nativeFeedStream, Object caller, int distanceDp);

  /**
   * org.chromium.chrome.browser.feed.FeedStream.resetInfoCardStates
   * @param nativeFeedStream (long)
   * @param caller (org.chromium.chrome.browser.feed.FeedStream)
   * @param type (int)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_feed_FeedStream_resetInfoCardStates(
      long nativeFeedStream, Object caller, int type);

  /**
   * org.chromium.chrome.browser.feed.FeedStream.surfaceClosed
   * @param nativeFeedStream (long)
   * @param caller (org.chromium.chrome.browser.feed.FeedStream)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_feed_FeedStream_surfaceClosed(
      long nativeFeedStream, Object caller);

  /**
   * org.chromium.chrome.browser.feed.FeedStream.surfaceOpened
   * @param nativeFeedStream (long)
   * @param caller (org.chromium.chrome.browser.feed.FeedStream)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_feed_FeedStream_surfaceOpened(
      long nativeFeedStream, Object caller);

  /**
   * org.chromium.chrome.browser.feed.FeedStream.updateUserProfileOnLinkClick
   * @param nativeFeedStream (long)
   * @param url (org.chromium.url.GURL)
   * @param mids (long[])
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_feed_FeedStream_updateUserProfileOnLinkClick(
      long nativeFeedStream, Object url, long[] mids);

  /**
   * org.chromium.chrome.browser.feed.webfeed.WebFeedBridge.findWebFeedInfoForPage
   * @param pageInfo (org.chromium.chrome.browser.feed.webfeed.WebFeedBridge.WebFeedPageInformation)
   * @param reason (int)
   * @param callback (org.chromium.base.Callback<org.chromium.chrome.browser.feed.webfeed.WebFeedBridge.WebFeedMetadata>)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_feed_webfeed_WebFeedBridge_findWebFeedInfoForPage(
      Object pageInfo, int reason, Object callback);

  /**
   * org.chromium.chrome.browser.feed.webfeed.WebFeedBridge.findWebFeedInfoForWebFeedId
   * @param webFeedId (byte[])
   * @param callback (org.chromium.base.Callback<org.chromium.chrome.browser.feed.webfeed.WebFeedBridge.WebFeedMetadata>)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_feed_webfeed_WebFeedBridge_findWebFeedInfoForWebFeedId(
      byte[] webFeedId, Object callback);

  /**
   * org.chromium.chrome.browser.feed.webfeed.WebFeedBridge.followWebFeed
   * @param pageInfo (org.chromium.chrome.browser.feed.webfeed.WebFeedBridge.WebFeedPageInformation)
   * @param webFeedChangeReason (int)
   * @param callback (org.chromium.base.Callback<org.chromium.chrome.browser.feed.webfeed.WebFeedBridge.FollowResults>)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_feed_webfeed_WebFeedBridge_followWebFeed(
      Object pageInfo, int webFeedChangeReason, Object callback);

  /**
   * org.chromium.chrome.browser.feed.webfeed.WebFeedBridge.followWebFeedById
   * @param webFeedId (byte[])
   * @param isDurable (boolean)
   * @param webFeedChangeReason (int)
   * @param callback (org.chromium.base.Callback<org.chromium.chrome.browser.feed.webfeed.WebFeedBridge.FollowResults>)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_feed_webfeed_WebFeedBridge_followWebFeedById(
      byte[] webFeedId, boolean isDurable, int webFeedChangeReason, Object callback);

  /**
   * org.chromium.chrome.browser.feed.webfeed.WebFeedBridge.getAllSubscriptions
   * @param callback (org.chromium.base.Callback<java.lang.Object[]>)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_feed_webfeed_WebFeedBridge_getAllSubscriptions(
      Object callback);

  /**
   * org.chromium.chrome.browser.feed.webfeed.WebFeedBridge.getRecentVisitCountsToHost
   * @param url (org.chromium.url.GURL)
   * @param callback (org.chromium.base.Callback<int[]>)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_feed_webfeed_WebFeedBridge_getRecentVisitCountsToHost(
      Object url, Object callback);

  /**
   * org.chromium.chrome.browser.feed.webfeed.WebFeedBridge.incrementFollowedFromWebPageMenuCount
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_feed_webfeed_WebFeedBridge_incrementFollowedFromWebPageMenuCount(
      );

  /**
   * org.chromium.chrome.browser.feed.webfeed.WebFeedBridge.refreshRecommendedFeeds
   * @param callback (org.chromium.base.Callback<java.lang.Boolean>)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_feed_webfeed_WebFeedBridge_refreshRecommendedFeeds(
      Object callback);

  /**
   * org.chromium.chrome.browser.feed.webfeed.WebFeedBridge.refreshSubscriptions
   * @param callback (org.chromium.base.Callback<java.lang.Boolean>)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_feed_webfeed_WebFeedBridge_refreshSubscriptions(
      Object callback);

  /**
   * org.chromium.chrome.browser.feed.webfeed.WebFeedBridge.unfollowWebFeed
   * @param webFeedId (byte[])
   * @param isDurable (boolean)
   * @param webFeedChangeReason (int)
   * @param callback (org.chromium.base.Callback<org.chromium.chrome.browser.feed.webfeed.WebFeedBridge.UnfollowResults>)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_feed_webfeed_WebFeedBridge_unfollowWebFeed(
      byte[] webFeedId, boolean isDurable, int webFeedChangeReason, Object callback);
}
