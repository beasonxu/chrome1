package org.chromium.base.natives;

import java.lang.Object;
import java.lang.String;

public final class GEN_JNI {
  public static boolean TESTING_ENABLED;

  public static boolean REQUIRE_MOCK;

  /**
   * org.chromium.net.impl.CronetBidirectionalStream.createBidirectionalStream
   * @param caller (org.chromium.net.impl.CronetBidirectionalStream)
   * @param urlRequestContextAdapter (long)
   * @param sendRequestHeadersAutomatically (boolean)
   * @param trafficStatsTagSet (boolean)
   * @param trafficStatsTag (int)
   * @param trafficStatsUidSet (boolean)
   * @param trafficStatsUid (int)
   * @param networkHandle (long)
   * @return (long)
   */
  public static final native long org_chromium_net_impl_CronetBidirectionalStream_createBidirectionalStream(
      Object caller, long urlRequestContextAdapter, boolean sendRequestHeadersAutomatically,
      boolean trafficStatsTagSet, int trafficStatsTag, boolean trafficStatsUidSet,
      int trafficStatsUid, long networkHandle);

  /**
   * org.chromium.net.impl.CronetBidirectionalStream.destroy
   * @param nativePtr (long)
   * @param caller (org.chromium.net.impl.CronetBidirectionalStream)
   * @param sendOnCanceled (boolean)
   * @return (void)
   */
  public static final native void org_chromium_net_impl_CronetBidirectionalStream_destroy(
      long nativePtr, Object caller, boolean sendOnCanceled);

  /**
   * org.chromium.net.impl.CronetBidirectionalStream.readData
   * @param nativePtr (long)
   * @param caller (org.chromium.net.impl.CronetBidirectionalStream)
   * @param byteBuffer (java.nio.ByteBuffer)
   * @param position (int)
   * @param limit (int)
   * @return (boolean)
   */
  public static final native boolean org_chromium_net_impl_CronetBidirectionalStream_readData(
      long nativePtr, Object caller, Object byteBuffer, int position, int limit);

  /**
   * org.chromium.net.impl.CronetBidirectionalStream.sendRequestHeaders
   * @param nativePtr (long)
   * @param caller (org.chromium.net.impl.CronetBidirectionalStream)
   * @return (void)
   */
  public static final native void org_chromium_net_impl_CronetBidirectionalStream_sendRequestHeaders(
      long nativePtr, Object caller);

  /**
   * org.chromium.net.impl.CronetBidirectionalStream.start
   * @param nativePtr (long)
   * @param caller (org.chromium.net.impl.CronetBidirectionalStream)
   * @param url (java.lang.String)
   * @param priority (int)
   * @param method (java.lang.String)
   * @param headers (java.lang.String[])
   * @param endOfStream (boolean)
   * @return (int)
   */
  public static final native int org_chromium_net_impl_CronetBidirectionalStream_start(
      long nativePtr, Object caller, String url, int priority, String method, String[] headers,
      boolean endOfStream);

  /**
   * org.chromium.net.impl.CronetBidirectionalStream.writevData
   * @param nativePtr (long)
   * @param caller (org.chromium.net.impl.CronetBidirectionalStream)
   * @param buffers (java.nio.ByteBuffer[])
   * @param positions (int[])
   * @param limits (int[])
   * @param endOfStream (boolean)
   * @return (boolean)
   */
  public static final native boolean org_chromium_net_impl_CronetBidirectionalStream_writevData(
      long nativePtr, Object caller, Object[] buffers, int[] positions, int[] limits,
      boolean endOfStream);

  /**
   * org.chromium.net.impl.CronetLibraryLoader.cronetInitOnInitThread
   * @return (void)
   */
  public static final native void org_chromium_net_impl_CronetLibraryLoader_cronetInitOnInitThread(
      );

  /**
   * org.chromium.net.impl.CronetLibraryLoader.getCronetVersion
   * @return (java.lang.String)
   */
  public static final native String org_chromium_net_impl_CronetLibraryLoader_getCronetVersion();

  /**
   * org.chromium.net.impl.CronetUploadDataStream.attachUploadDataToRequest
   * @param caller (org.chromium.net.impl.CronetUploadDataStream)
   * @param urlRequestAdapter (long)
   * @param length (long)
   * @return (long)
   */
  public static final native long org_chromium_net_impl_CronetUploadDataStream_attachUploadDataToRequest(
      Object caller, long urlRequestAdapter, long length);

  /**
   * org.chromium.net.impl.CronetUploadDataStream.createAdapterForTesting
   * @param caller (org.chromium.net.impl.CronetUploadDataStream)
   * @return (long)
   */
  public static final native long org_chromium_net_impl_CronetUploadDataStream_createAdapterForTesting(
      Object caller);

  /**
   * org.chromium.net.impl.CronetUploadDataStream.createUploadDataStreamForTesting
   * @param caller (org.chromium.net.impl.CronetUploadDataStream)
   * @param length (long)
   * @param adapter (long)
   * @return (long)
   */
  public static final native long org_chromium_net_impl_CronetUploadDataStream_createUploadDataStreamForTesting(
      Object caller, long length, long adapter);

  /**
   * org.chromium.net.impl.CronetUploadDataStream.destroy
   * @param nativePtr (long)
   * @return (void)
   */
  public static final native void org_chromium_net_impl_CronetUploadDataStream_destroy(
      long nativePtr);

  /**
   * org.chromium.net.impl.CronetUploadDataStream.onReadSucceeded
   * @param nativePtr (long)
   * @param caller (org.chromium.net.impl.CronetUploadDataStream)
   * @param bytesRead (int)
   * @param finalChunk (boolean)
   * @return (void)
   */
  public static final native void org_chromium_net_impl_CronetUploadDataStream_onReadSucceeded(
      long nativePtr, Object caller, int bytesRead, boolean finalChunk);

  /**
   * org.chromium.net.impl.CronetUploadDataStream.onRewindSucceeded
   * @param nativePtr (long)
   * @param caller (org.chromium.net.impl.CronetUploadDataStream)
   * @return (void)
   */
  public static final native void org_chromium_net_impl_CronetUploadDataStream_onRewindSucceeded(
      long nativePtr, Object caller);

  /**
   * org.chromium.net.impl.CronetUrlRequest.addRequestHeader
   * @param nativePtr (long)
   * @param caller (org.chromium.net.impl.CronetUrlRequest)
   * @param name (java.lang.String)
   * @param value (java.lang.String)
   * @return (boolean)
   */
  public static final native boolean org_chromium_net_impl_CronetUrlRequest_addRequestHeader(
      long nativePtr, Object caller, String name, String value);

  /**
   * org.chromium.net.impl.CronetUrlRequest.createRequestAdapter
   * @param caller (org.chromium.net.impl.CronetUrlRequest)
   * @param urlRequestContextAdapter (long)
   * @param url (java.lang.String)
   * @param priority (int)
   * @param disableCache (boolean)
   * @param disableConnectionMigration (boolean)
   * @param trafficStatsTagSet (boolean)
   * @param trafficStatsTag (int)
   * @param trafficStatsUidSet (boolean)
   * @param trafficStatsUid (int)
   * @param idempotency (int)
   * @param networkHandle (long)
   * @return (long)
   */
  public static final native long org_chromium_net_impl_CronetUrlRequest_createRequestAdapter(
      Object caller, long urlRequestContextAdapter, String url, int priority, boolean disableCache,
      boolean disableConnectionMigration, boolean trafficStatsTagSet, int trafficStatsTag,
      boolean trafficStatsUidSet, int trafficStatsUid, int idempotency, long networkHandle);

  /**
   * org.chromium.net.impl.CronetUrlRequest.destroy
   * @param nativePtr (long)
   * @param caller (org.chromium.net.impl.CronetUrlRequest)
   * @param sendOnCanceled (boolean)
   * @return (void)
   */
  public static final native void org_chromium_net_impl_CronetUrlRequest_destroy(long nativePtr,
      Object caller, boolean sendOnCanceled);

  /**
   * org.chromium.net.impl.CronetUrlRequest.followDeferredRedirect
   * @param nativePtr (long)
   * @param caller (org.chromium.net.impl.CronetUrlRequest)
   * @return (void)
   */
  public static final native void org_chromium_net_impl_CronetUrlRequest_followDeferredRedirect(
      long nativePtr, Object caller);

  /**
   * org.chromium.net.impl.CronetUrlRequest.getStatus
   * @param nativePtr (long)
   * @param caller (org.chromium.net.impl.CronetUrlRequest)
   * @param listener (org.chromium.net.impl.VersionSafeCallbacks.UrlRequestStatusListener)
   * @return (void)
   */
  public static final native void org_chromium_net_impl_CronetUrlRequest_getStatus(long nativePtr,
      Object caller, Object listener);

  /**
   * org.chromium.net.impl.CronetUrlRequest.readData
   * @param nativePtr (long)
   * @param caller (org.chromium.net.impl.CronetUrlRequest)
   * @param byteBuffer (java.nio.ByteBuffer)
   * @param position (int)
   * @param capacity (int)
   * @return (boolean)
   */
  public static final native boolean org_chromium_net_impl_CronetUrlRequest_readData(long nativePtr,
      Object caller, Object byteBuffer, int position, int capacity);

  /**
   * org.chromium.net.impl.CronetUrlRequest.setHttpMethod
   * @param nativePtr (long)
   * @param caller (org.chromium.net.impl.CronetUrlRequest)
   * @param method (java.lang.String)
   * @return (boolean)
   */
  public static final native boolean org_chromium_net_impl_CronetUrlRequest_setHttpMethod(
      long nativePtr, Object caller, String method);

  /**
   * org.chromium.net.impl.CronetUrlRequest.start
   * @param nativePtr (long)
   * @param caller (org.chromium.net.impl.CronetUrlRequest)
   * @return (void)
   */
  public static final native void org_chromium_net_impl_CronetUrlRequest_start(long nativePtr,
      Object caller);

  /**
   * org.chromium.net.impl.CronetUrlRequestContext.addPkp
   * @param urlRequestContextConfig (long)
   * @param host (java.lang.String)
   * @param hashes (byte[][])
   * @param includeSubdomains (boolean)
   * @param expirationTime (long)
   * @return (void)
   */
  public static final native void org_chromium_net_impl_CronetUrlRequestContext_addPkp(
      long urlRequestContextConfig, String host, byte[][] hashes, boolean includeSubdomains,
      long expirationTime);

  /**
   * org.chromium.net.impl.CronetUrlRequestContext.addQuicHint
   * @param urlRequestContextConfig (long)
   * @param host (java.lang.String)
   * @param port (int)
   * @param alternatePort (int)
   * @return (void)
   */
  public static final native void org_chromium_net_impl_CronetUrlRequestContext_addQuicHint(
      long urlRequestContextConfig, String host, int port, int alternatePort);

  /**
   * org.chromium.net.impl.CronetUrlRequestContext.configureNetworkQualityEstimatorForTesting
   * @param nativePtr (long)
   * @param caller (org.chromium.net.impl.CronetUrlRequestContext)
   * @param useLocalHostRequests (boolean)
   * @param useSmallerResponses (boolean)
   * @param disableOfflineCheck (boolean)
   * @return (void)
   */
  public static final native void org_chromium_net_impl_CronetUrlRequestContext_configureNetworkQualityEstimatorForTesting(
      long nativePtr, Object caller, boolean useLocalHostRequests, boolean useSmallerResponses,
      boolean disableOfflineCheck);

  /**
   * org.chromium.net.impl.CronetUrlRequestContext.createRequestContextAdapter
   * @param urlRequestContextConfig (long)
   * @return (long)
   */
  public static final native long org_chromium_net_impl_CronetUrlRequestContext_createRequestContextAdapter(
      long urlRequestContextConfig);

  /**
   * org.chromium.net.impl.CronetUrlRequestContext.createRequestContextConfig
   * @param userAgent (java.lang.String)
   * @param storagePath (java.lang.String)
   * @param quicEnabled (boolean)
   * @param quicUserAgentId (java.lang.String)
   * @param http2Enabled (boolean)
   * @param brotliEnabled (boolean)
   * @param disableCache (boolean)
   * @param httpCacheMode (int)
   * @param httpCacheMaxSize (long)
   * @param experimentalOptions (java.lang.String)
   * @param mockCertVerifier (long)
   * @param enableNetworkQualityEstimator (boolean)
   * @param bypassPublicKeyPinningForLocalTrustAnchors (boolean)
   * @param networkThreadPriority (int)
   * @return (long)
   */
  public static final native long org_chromium_net_impl_CronetUrlRequestContext_createRequestContextConfig(
      String userAgent, String storagePath, boolean quicEnabled, String quicUserAgentId,
      boolean http2Enabled, boolean brotliEnabled, boolean disableCache, int httpCacheMode,
      long httpCacheMaxSize, String experimentalOptions, long mockCertVerifier,
      boolean enableNetworkQualityEstimator, boolean bypassPublicKeyPinningForLocalTrustAnchors,
      int networkThreadPriority);

  /**
   * org.chromium.net.impl.CronetUrlRequestContext.destroy
   * @param nativePtr (long)
   * @param caller (org.chromium.net.impl.CronetUrlRequestContext)
   * @return (void)
   */
  public static final native void org_chromium_net_impl_CronetUrlRequestContext_destroy(
      long nativePtr, Object caller);

  /**
   * org.chromium.net.impl.CronetUrlRequestContext.getHistogramDeltas
   * @return (byte[])
   */
  public static final native byte[] org_chromium_net_impl_CronetUrlRequestContext_getHistogramDeltas(
      );

  /**
   * org.chromium.net.impl.CronetUrlRequestContext.initRequestContextOnInitThread
   * @param nativePtr (long)
   * @param caller (org.chromium.net.impl.CronetUrlRequestContext)
   * @return (void)
   */
  public static final native void org_chromium_net_impl_CronetUrlRequestContext_initRequestContextOnInitThread(
      long nativePtr, Object caller);

  /**
   * org.chromium.net.impl.CronetUrlRequestContext.provideRTTObservations
   * @param nativePtr (long)
   * @param caller (org.chromium.net.impl.CronetUrlRequestContext)
   * @param should (boolean)
   * @return (void)
   */
  public static final native void org_chromium_net_impl_CronetUrlRequestContext_provideRTTObservations(
      long nativePtr, Object caller, boolean should);

  /**
   * org.chromium.net.impl.CronetUrlRequestContext.provideThroughputObservations
   * @param nativePtr (long)
   * @param caller (org.chromium.net.impl.CronetUrlRequestContext)
   * @param should (boolean)
   * @return (void)
   */
  public static final native void org_chromium_net_impl_CronetUrlRequestContext_provideThroughputObservations(
      long nativePtr, Object caller, boolean should);

  /**
   * org.chromium.net.impl.CronetUrlRequestContext.setMinLogLevel
   * @param loggingLevel (int)
   * @return (int)
   */
  public static final native int org_chromium_net_impl_CronetUrlRequestContext_setMinLogLevel(
      int loggingLevel);

  /**
   * org.chromium.net.impl.CronetUrlRequestContext.skipLogging
   * @param nativePtr (long)
   * @param caller (org.chromium.net.impl.CronetUrlRequestContext)
   * @return (boolean)
   */
  public static final native boolean org_chromium_net_impl_CronetUrlRequestContext_skipLogging(
      long nativePtr, Object caller);

  /**
   * org.chromium.net.impl.CronetUrlRequestContext.startNetLogToDisk
   * @param nativePtr (long)
   * @param caller (org.chromium.net.impl.CronetUrlRequestContext)
   * @param dirPath (java.lang.String)
   * @param logAll (boolean)
   * @param maxSize (int)
   * @return (void)
   */
  public static final native void org_chromium_net_impl_CronetUrlRequestContext_startNetLogToDisk(
      long nativePtr, Object caller, String dirPath, boolean logAll, int maxSize);

  /**
   * org.chromium.net.impl.CronetUrlRequestContext.startNetLogToFile
   * @param nativePtr (long)
   * @param caller (org.chromium.net.impl.CronetUrlRequestContext)
   * @param fileName (java.lang.String)
   * @param logAll (boolean)
   * @return (boolean)
   */
  public static final native boolean org_chromium_net_impl_CronetUrlRequestContext_startNetLogToFile(
      long nativePtr, Object caller, String fileName, boolean logAll);

  /**
   * org.chromium.net.impl.CronetUrlRequestContext.stopNetLog
   * @param nativePtr (long)
   * @param caller (org.chromium.net.impl.CronetUrlRequestContext)
   * @return (void)
   */
  public static final native void org_chromium_net_impl_CronetUrlRequestContext_stopNetLog(
      long nativePtr, Object caller);
}
