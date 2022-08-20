package org.chromium.base.natives;

import java.lang.Object;
import java.lang.String;

public final class GEN_JNI {
  public static boolean TESTING_ENABLED;

  public static boolean REQUIRE_MOCK;

  /**
   * org.chromium.media.AudioManagerAndroid.setMute
   * @param nativeAudioManagerAndroid (long)
   * @param caller (org.chromium.media.AudioManagerAndroid)
   * @param muted (boolean)
   * @return (void)
   */
  public static final native void org_chromium_media_AudioManagerAndroid_setMute(
      long nativeAudioManagerAndroid, Object caller, boolean muted);

  /**
   * org.chromium.media.AudioTrackOutputStream.getAddress
   * @param nativeAudioTrackOutputStream (long)
   * @param caller (org.chromium.media.AudioTrackOutputStream)
   * @param byteBuffer (java.nio.ByteBuffer)
   * @return (long)
   */
  public static final native long org_chromium_media_AudioTrackOutputStream_getAddress(
      long nativeAudioTrackOutputStream, Object caller, Object byteBuffer);

  /**
   * org.chromium.media.AudioTrackOutputStream.onError
   * @param nativeAudioTrackOutputStream (long)
   * @param caller (org.chromium.media.AudioTrackOutputStream)
   * @return (void)
   */
  public static final native void org_chromium_media_AudioTrackOutputStream_onError(
      long nativeAudioTrackOutputStream, Object caller);

  /**
   * org.chromium.media.AudioTrackOutputStream.onMoreData
   * @param nativeAudioTrackOutputStream (long)
   * @param caller (org.chromium.media.AudioTrackOutputStream)
   * @param audioData (java.nio.ByteBuffer)
   * @param delayInFrames (long)
   * @return (org.chromium.media.AudioTrackOutputStream.AudioBufferInfo)
   */
  public static final native Object org_chromium_media_AudioTrackOutputStream_onMoreData(
      long nativeAudioTrackOutputStream, Object caller, Object audioData, long delayInFrames);

  /**
   * org.chromium.media.HdrMetadata.colorTransfer
   * @param nativeJniHdrMetadata (long)
   * @param caller (org.chromium.media.HdrMetadata)
   * @return (int)
   */
  public static final native int org_chromium_media_HdrMetadata_colorTransfer(
      long nativeJniHdrMetadata, Object caller);

  /**
   * org.chromium.media.HdrMetadata.maxColorVolumeLuminance
   * @param nativeJniHdrMetadata (long)
   * @param caller (org.chromium.media.HdrMetadata)
   * @return (float)
   */
  public static final native float org_chromium_media_HdrMetadata_maxColorVolumeLuminance(
      long nativeJniHdrMetadata, Object caller);

  /**
   * org.chromium.media.HdrMetadata.maxContentLuminance
   * @param nativeJniHdrMetadata (long)
   * @param caller (org.chromium.media.HdrMetadata)
   * @return (int)
   */
  public static final native int org_chromium_media_HdrMetadata_maxContentLuminance(
      long nativeJniHdrMetadata, Object caller);

  /**
   * org.chromium.media.HdrMetadata.maxFrameAverageLuminance
   * @param nativeJniHdrMetadata (long)
   * @param caller (org.chromium.media.HdrMetadata)
   * @return (int)
   */
  public static final native int org_chromium_media_HdrMetadata_maxFrameAverageLuminance(
      long nativeJniHdrMetadata, Object caller);

  /**
   * org.chromium.media.HdrMetadata.minColorVolumeLuminance
   * @param nativeJniHdrMetadata (long)
   * @param caller (org.chromium.media.HdrMetadata)
   * @return (float)
   */
  public static final native float org_chromium_media_HdrMetadata_minColorVolumeLuminance(
      long nativeJniHdrMetadata, Object caller);

  /**
   * org.chromium.media.HdrMetadata.primaries
   * @param nativeJniHdrMetadata (long)
   * @param caller (org.chromium.media.HdrMetadata)
   * @return (int)
   */
  public static final native int org_chromium_media_HdrMetadata_primaries(long nativeJniHdrMetadata,
      Object caller);

  /**
   * org.chromium.media.HdrMetadata.primaryBChromaticityX
   * @param nativeJniHdrMetadata (long)
   * @param caller (org.chromium.media.HdrMetadata)
   * @return (float)
   */
  public static final native float org_chromium_media_HdrMetadata_primaryBChromaticityX(
      long nativeJniHdrMetadata, Object caller);

  /**
   * org.chromium.media.HdrMetadata.primaryBChromaticityY
   * @param nativeJniHdrMetadata (long)
   * @param caller (org.chromium.media.HdrMetadata)
   * @return (float)
   */
  public static final native float org_chromium_media_HdrMetadata_primaryBChromaticityY(
      long nativeJniHdrMetadata, Object caller);

  /**
   * org.chromium.media.HdrMetadata.primaryGChromaticityX
   * @param nativeJniHdrMetadata (long)
   * @param caller (org.chromium.media.HdrMetadata)
   * @return (float)
   */
  public static final native float org_chromium_media_HdrMetadata_primaryGChromaticityX(
      long nativeJniHdrMetadata, Object caller);

  /**
   * org.chromium.media.HdrMetadata.primaryGChromaticityY
   * @param nativeJniHdrMetadata (long)
   * @param caller (org.chromium.media.HdrMetadata)
   * @return (float)
   */
  public static final native float org_chromium_media_HdrMetadata_primaryGChromaticityY(
      long nativeJniHdrMetadata, Object caller);

  /**
   * org.chromium.media.HdrMetadata.primaryRChromaticityX
   * @param nativeJniHdrMetadata (long)
   * @param caller (org.chromium.media.HdrMetadata)
   * @return (float)
   */
  public static final native float org_chromium_media_HdrMetadata_primaryRChromaticityX(
      long nativeJniHdrMetadata, Object caller);

  /**
   * org.chromium.media.HdrMetadata.primaryRChromaticityY
   * @param nativeJniHdrMetadata (long)
   * @param caller (org.chromium.media.HdrMetadata)
   * @return (float)
   */
  public static final native float org_chromium_media_HdrMetadata_primaryRChromaticityY(
      long nativeJniHdrMetadata, Object caller);

  /**
   * org.chromium.media.HdrMetadata.range
   * @param nativeJniHdrMetadata (long)
   * @param caller (org.chromium.media.HdrMetadata)
   * @return (int)
   */
  public static final native int org_chromium_media_HdrMetadata_range(long nativeJniHdrMetadata,
      Object caller);

  /**
   * org.chromium.media.HdrMetadata.whitePointChromaticityX
   * @param nativeJniHdrMetadata (long)
   * @param caller (org.chromium.media.HdrMetadata)
   * @return (float)
   */
  public static final native float org_chromium_media_HdrMetadata_whitePointChromaticityX(
      long nativeJniHdrMetadata, Object caller);

  /**
   * org.chromium.media.HdrMetadata.whitePointChromaticityY
   * @param nativeJniHdrMetadata (long)
   * @param caller (org.chromium.media.HdrMetadata)
   * @return (float)
   */
  public static final native float org_chromium_media_HdrMetadata_whitePointChromaticityY(
      long nativeJniHdrMetadata, Object caller);

  /**
   * org.chromium.media.MediaCodecBridge.onBuffersAvailable
   * @param nativeMediaCodecBridge (long)
   * @param caller (org.chromium.media.MediaCodecBridge)
   * @return (void)
   */
  public static final native void org_chromium_media_MediaCodecBridge_onBuffersAvailable(
      long nativeMediaCodecBridge, Object caller);

  /**
   * org.chromium.media.MediaDrmBridge.onMediaCryptoReady
   * @param nativeMediaDrmBridge (long)
   * @param caller (org.chromium.media.MediaDrmBridge)
   * @param mediaCrypto (android.media.MediaCrypto)
   * @return (void)
   */
  public static final native void org_chromium_media_MediaDrmBridge_onMediaCryptoReady(
      long nativeMediaDrmBridge, Object caller, Object mediaCrypto);

  /**
   * org.chromium.media.MediaDrmBridge.onPromiseRejected
   * @param nativeMediaDrmBridge (long)
   * @param caller (org.chromium.media.MediaDrmBridge)
   * @param promiseId (long)
   * @param errorMessage (java.lang.String)
   * @return (void)
   */
  public static final native void org_chromium_media_MediaDrmBridge_onPromiseRejected(
      long nativeMediaDrmBridge, Object caller, long promiseId, String errorMessage);

  /**
   * org.chromium.media.MediaDrmBridge.onPromiseResolved
   * @param nativeMediaDrmBridge (long)
   * @param caller (org.chromium.media.MediaDrmBridge)
   * @param promiseId (long)
   * @return (void)
   */
  public static final native void org_chromium_media_MediaDrmBridge_onPromiseResolved(
      long nativeMediaDrmBridge, Object caller, long promiseId);

  /**
   * org.chromium.media.MediaDrmBridge.onPromiseResolvedWithSession
   * @param nativeMediaDrmBridge (long)
   * @param caller (org.chromium.media.MediaDrmBridge)
   * @param promiseId (long)
   * @param emeSessionId (byte[])
   * @return (void)
   */
  public static final native void org_chromium_media_MediaDrmBridge_onPromiseResolvedWithSession(
      long nativeMediaDrmBridge, Object caller, long promiseId, byte[] emeSessionId);

  /**
   * org.chromium.media.MediaDrmBridge.onProvisionRequest
   * @param nativeMediaDrmBridge (long)
   * @param caller (org.chromium.media.MediaDrmBridge)
   * @param defaultUrl (java.lang.String)
   * @param requestData (byte[])
   * @return (void)
   */
  public static final native void org_chromium_media_MediaDrmBridge_onProvisionRequest(
      long nativeMediaDrmBridge, Object caller, String defaultUrl, byte[] requestData);

  /**
   * org.chromium.media.MediaDrmBridge.onProvisioningComplete
   * @param nativeMediaDrmBridge (long)
   * @param caller (org.chromium.media.MediaDrmBridge)
   * @param success (boolean)
   * @return (void)
   */
  public static final native void org_chromium_media_MediaDrmBridge_onProvisioningComplete(
      long nativeMediaDrmBridge, Object caller, boolean success);

  /**
   * org.chromium.media.MediaDrmBridge.onSessionClosed
   * @param nativeMediaDrmBridge (long)
   * @param caller (org.chromium.media.MediaDrmBridge)
   * @param emeSessionId (byte[])
   * @return (void)
   */
  public static final native void org_chromium_media_MediaDrmBridge_onSessionClosed(
      long nativeMediaDrmBridge, Object caller, byte[] emeSessionId);

  /**
   * org.chromium.media.MediaDrmBridge.onSessionExpirationUpdate
   * @param nativeMediaDrmBridge (long)
   * @param caller (org.chromium.media.MediaDrmBridge)
   * @param emeSessionId (byte[])
   * @param expirationTime (long)
   * @return (void)
   */
  public static final native void org_chromium_media_MediaDrmBridge_onSessionExpirationUpdate(
      long nativeMediaDrmBridge, Object caller, byte[] emeSessionId, long expirationTime);

  /**
   * org.chromium.media.MediaDrmBridge.onSessionKeysChange
   * @param nativeMediaDrmBridge (long)
   * @param caller (org.chromium.media.MediaDrmBridge)
   * @param emeSessionId (byte[])
   * @param keysInfo (java.lang.Object[])
   * @param hasAdditionalUsableKey (boolean)
   * @param isKeyRelease (boolean)
   * @return (void)
   */
  public static final native void org_chromium_media_MediaDrmBridge_onSessionKeysChange(
      long nativeMediaDrmBridge, Object caller, byte[] emeSessionId, Object[] keysInfo,
      boolean hasAdditionalUsableKey, boolean isKeyRelease);

  /**
   * org.chromium.media.MediaDrmBridge.onSessionMessage
   * @param nativeMediaDrmBridge (long)
   * @param caller (org.chromium.media.MediaDrmBridge)
   * @param emeSessionId (byte[])
   * @param requestType (int)
   * @param message (byte[])
   * @return (void)
   */
  public static final native void org_chromium_media_MediaDrmBridge_onSessionMessage(
      long nativeMediaDrmBridge, Object caller, byte[] emeSessionId, int requestType,
      byte[] message);

  /**
   * org.chromium.media.MediaDrmStorageBridge.onClearInfo
   * @param nativeMediaDrmStorageBridge (long)
   * @param caller (org.chromium.media.MediaDrmStorageBridge)
   * @param sessionId (byte[])
   * @param cb (org.chromium.base.Callback<java.lang.Boolean>)
   * @return (void)
   */
  public static final native void org_chromium_media_MediaDrmStorageBridge_onClearInfo(
      long nativeMediaDrmStorageBridge, Object caller, byte[] sessionId, Object cb);

  /**
   * org.chromium.media.MediaDrmStorageBridge.onLoadInfo
   * @param nativeMediaDrmStorageBridge (long)
   * @param caller (org.chromium.media.MediaDrmStorageBridge)
   * @param sessionId (byte[])
   * @param cb (org.chromium.base.Callback<org.chromium.media.MediaDrmStorageBridge.PersistentInfo>)
   * @return (void)
   */
  public static final native void org_chromium_media_MediaDrmStorageBridge_onLoadInfo(
      long nativeMediaDrmStorageBridge, Object caller, byte[] sessionId, Object cb);

  /**
   * org.chromium.media.MediaDrmStorageBridge.onProvisioned
   * @param nativeMediaDrmStorageBridge (long)
   * @param caller (org.chromium.media.MediaDrmStorageBridge)
   * @param cb (org.chromium.base.Callback<java.lang.Boolean>)
   * @return (void)
   */
  public static final native void org_chromium_media_MediaDrmStorageBridge_onProvisioned(
      long nativeMediaDrmStorageBridge, Object caller, Object cb);

  /**
   * org.chromium.media.MediaDrmStorageBridge.onSaveInfo
   * @param nativeMediaDrmStorageBridge (long)
   * @param caller (org.chromium.media.MediaDrmStorageBridge)
   * @param info (org.chromium.media.MediaDrmStorageBridge.PersistentInfo)
   * @param cb (org.chromium.base.Callback<java.lang.Boolean>)
   * @return (void)
   */
  public static final native void org_chromium_media_MediaDrmStorageBridge_onSaveInfo(
      long nativeMediaDrmStorageBridge, Object caller, Object info, Object cb);

  /**
   * org.chromium.media.MediaPlayerBridge.onDidSetDataUriDataSource
   * @param nativeMediaPlayerBridge (long)
   * @param caller (org.chromium.media.MediaPlayerBridge)
   * @param success (boolean)
   * @return (void)
   */
  public static final native void org_chromium_media_MediaPlayerBridge_onDidSetDataUriDataSource(
      long nativeMediaPlayerBridge, Object caller, boolean success);

  /**
   * org.chromium.media.MediaPlayerListener.onMediaError
   * @param nativeMediaPlayerListener (long)
   * @param caller (org.chromium.media.MediaPlayerListener)
   * @param errorType (int)
   * @return (void)
   */
  public static final native void org_chromium_media_MediaPlayerListener_onMediaError(
      long nativeMediaPlayerListener, Object caller, int errorType);

  /**
   * org.chromium.media.MediaPlayerListener.onMediaPrepared
   * @param nativeMediaPlayerListener (long)
   * @param caller (org.chromium.media.MediaPlayerListener)
   * @return (void)
   */
  public static final native void org_chromium_media_MediaPlayerListener_onMediaPrepared(
      long nativeMediaPlayerListener, Object caller);

  /**
   * org.chromium.media.MediaPlayerListener.onPlaybackComplete
   * @param nativeMediaPlayerListener (long)
   * @param caller (org.chromium.media.MediaPlayerListener)
   * @return (void)
   */
  public static final native void org_chromium_media_MediaPlayerListener_onPlaybackComplete(
      long nativeMediaPlayerListener, Object caller);

  /**
   * org.chromium.media.MediaPlayerListener.onVideoSizeChanged
   * @param nativeMediaPlayerListener (long)
   * @param caller (org.chromium.media.MediaPlayerListener)
   * @param width (int)
   * @param height (int)
   * @return (void)
   */
  public static final native void org_chromium_media_MediaPlayerListener_onVideoSizeChanged(
      long nativeMediaPlayerListener, Object caller, int width, int height);

  /**
   * org.chromium.media.MediaServerCrashListener.onMediaServerCrashDetected
   * @param nativeMediaServerCrashListener (long)
   * @param caller (org.chromium.media.MediaServerCrashListener)
   * @param watchdogNeedsRelease (boolean)
   * @return (void)
   */
  public static final native void org_chromium_media_MediaServerCrashListener_onMediaServerCrashDetected(
      long nativeMediaServerCrashListener, Object caller, boolean watchdogNeedsRelease);
}
