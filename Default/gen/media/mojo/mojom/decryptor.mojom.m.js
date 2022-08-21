// media/mojo/mojom/decryptor.mojom.m.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2020 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

import {mojo} from '../../../mojo/public/js/bindings.js';

import {
  AudioBuffer as media_mojom_AudioBuffer,
  AudioBufferSpec as media_mojom_AudioBufferSpec,
  AudioDecoderConfig as media_mojom_AudioDecoderConfig,
  AudioDecoderConfigSpec as media_mojom_AudioDecoderConfigSpec,
  DecoderBuffer as media_mojom_DecoderBuffer,
  DecoderBufferSpec as media_mojom_DecoderBufferSpec,
  VideoDecoderConfig as media_mojom_VideoDecoderConfig,
  VideoDecoderConfigSpec as media_mojom_VideoDecoderConfigSpec,
  VideoFrame as media_mojom_VideoFrame,
  VideoFrameSpec as media_mojom_VideoFrameSpec
} from './media_types.mojom.m.js';




/**
 * @implements {mojo.internal.interfaceSupport.PendingReceiver}
 */
export class DecryptorPendingReceiver {
  /**
   * @param {!MojoHandle|!mojo.internal.interfaceSupport.Endpoint} handle
   */
  constructor(handle) {
    /** @public {!mojo.internal.interfaceSupport.Endpoint} */
    this.handle = mojo.internal.interfaceSupport.getEndpointForReceiver(handle);
  }

  /** @param {string=} scope */
  bindInBrowser(scope = 'context') {
    mojo.internal.interfaceSupport.bind(
        this.handle, 'media.mojom.Decryptor', scope);
  }
}

/** @interface */
export class DecryptorInterface {
  
  /**
   * @param { !MojoHandle } audioPipe
   * @param { !MojoHandle } videoPipe
   * @param { !MojoHandle } decryptPipe
   * @param { !MojoHandle } decryptedPipe
   */

  initialize(audioPipe, videoPipe, decryptPipe, decryptedPipe) {}
  
  /**
   * @param { !Decryptor_StreamType } streamType
   * @param { !media_mojom_DecoderBuffer } encrypted
   * @return {!Promise<{
        status: !Decryptor_Status,
        buffer: ?media_mojom_DecoderBuffer,
   *  }>}
   */

  decrypt(streamType, encrypted) {}
  
  /**
   * @param { !Decryptor_StreamType } streamType
   */

  cancelDecrypt(streamType) {}
  
  /**
   * @param { !media_mojom_AudioDecoderConfig } config
   * @return {!Promise<{
        success: !boolean,
   *  }>}
   */

  initializeAudioDecoder(config) {}
  
  /**
   * @param { !media_mojom_VideoDecoderConfig } config
   * @return {!Promise<{
        success: !boolean,
   *  }>}
   */

  initializeVideoDecoder(config) {}
  
  /**
   * @param { !media_mojom_DecoderBuffer } encrypted
   * @return {!Promise<{
        status: !Decryptor_Status,
        audioBuffers: !Array<!media_mojom_AudioBuffer>,
   *  }>}
   */

  decryptAndDecodeAudio(encrypted) {}
  
  /**
   * @param { !media_mojom_DecoderBuffer } encrypted
   * @return {!Promise<{
        status: !Decryptor_Status,
        videoFrame: ?media_mojom_VideoFrame,
        releaser: ?FrameResourceReleaserRemote,
   *  }>}
   */

  decryptAndDecodeVideo(encrypted) {}
  
  /**
   * @param { !Decryptor_StreamType } streamType
   */

  resetDecoder(streamType) {}
  
  /**
   * @param { !Decryptor_StreamType } streamType
   */

  deinitializeDecoder(streamType) {}
}

/**
 * @implements { DecryptorInterface }
 */
export class DecryptorRemote {
  /** @param {MojoHandle|mojo.internal.interfaceSupport.Endpoint=} handle */
  constructor(handle = undefined) {
    /**
     * @private {!mojo.internal.interfaceSupport.InterfaceRemoteBase<!DecryptorPendingReceiver>}
     */
    this.proxy =
        new mojo.internal.interfaceSupport.InterfaceRemoteBase(
          DecryptorPendingReceiver,
          handle);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper<!DecryptorPendingReceiver>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper(this.proxy);

    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.proxy.getConnectionErrorEventRouter();
  }

  
  /**
   * @param { !MojoHandle } audioPipe
   * @param { !MojoHandle } videoPipe
   * @param { !MojoHandle } decryptPipe
   * @param { !MojoHandle } decryptedPipe
   */

  initialize(
      audioPipe,
      videoPipe,
      decryptPipe,
      decryptedPipe) {
    this.proxy.sendMessage(
        0,
        Decryptor_Initialize_ParamsSpec.$,
        null,
        [
          audioPipe,
          videoPipe,
          decryptPipe,
          decryptedPipe
        ]);
  }

  
  /**
   * @param { !Decryptor_StreamType } streamType
   * @param { !media_mojom_DecoderBuffer } encrypted
   * @return {!Promise<{
        status: !Decryptor_Status,
        buffer: ?media_mojom_DecoderBuffer,
   *  }>}
   */

  decrypt(
      streamType,
      encrypted) {
    return this.proxy.sendMessage(
        1,
        Decryptor_Decrypt_ParamsSpec.$,
        Decryptor_Decrypt_ResponseParamsSpec.$,
        [
          streamType,
          encrypted
        ]);
  }

  
  /**
   * @param { !Decryptor_StreamType } streamType
   */

  cancelDecrypt(
      streamType) {
    this.proxy.sendMessage(
        2,
        Decryptor_CancelDecrypt_ParamsSpec.$,
        null,
        [
          streamType
        ]);
  }

  
  /**
   * @param { !media_mojom_AudioDecoderConfig } config
   * @return {!Promise<{
        success: !boolean,
   *  }>}
   */

  initializeAudioDecoder(
      config) {
    return this.proxy.sendMessage(
        3,
        Decryptor_InitializeAudioDecoder_ParamsSpec.$,
        Decryptor_InitializeAudioDecoder_ResponseParamsSpec.$,
        [
          config
        ]);
  }

  
  /**
   * @param { !media_mojom_VideoDecoderConfig } config
   * @return {!Promise<{
        success: !boolean,
   *  }>}
   */

  initializeVideoDecoder(
      config) {
    return this.proxy.sendMessage(
        4,
        Decryptor_InitializeVideoDecoder_ParamsSpec.$,
        Decryptor_InitializeVideoDecoder_ResponseParamsSpec.$,
        [
          config
        ]);
  }

  
  /**
   * @param { !media_mojom_DecoderBuffer } encrypted
   * @return {!Promise<{
        status: !Decryptor_Status,
        audioBuffers: !Array<!media_mojom_AudioBuffer>,
   *  }>}
   */

  decryptAndDecodeAudio(
      encrypted) {
    return this.proxy.sendMessage(
        5,
        Decryptor_DecryptAndDecodeAudio_ParamsSpec.$,
        Decryptor_DecryptAndDecodeAudio_ResponseParamsSpec.$,
        [
          encrypted
        ]);
  }

  
  /**
   * @param { !media_mojom_DecoderBuffer } encrypted
   * @return {!Promise<{
        status: !Decryptor_Status,
        videoFrame: ?media_mojom_VideoFrame,
        releaser: ?FrameResourceReleaserRemote,
   *  }>}
   */

  decryptAndDecodeVideo(
      encrypted) {
    return this.proxy.sendMessage(
        6,
        Decryptor_DecryptAndDecodeVideo_ParamsSpec.$,
        Decryptor_DecryptAndDecodeVideo_ResponseParamsSpec.$,
        [
          encrypted
        ]);
  }

  
  /**
   * @param { !Decryptor_StreamType } streamType
   */

  resetDecoder(
      streamType) {
    this.proxy.sendMessage(
        7,
        Decryptor_ResetDecoder_ParamsSpec.$,
        null,
        [
          streamType
        ]);
  }

  
  /**
   * @param { !Decryptor_StreamType } streamType
   */

  deinitializeDecoder(
      streamType) {
    this.proxy.sendMessage(
        8,
        Decryptor_DeinitializeDecoder_ParamsSpec.$,
        null,
        [
          streamType
        ]);
  }
}

/**
 * An object which receives request messages for the Decryptor
 * mojom interface. Must be constructed over an object which implements that
 * interface.
 */
export class DecryptorReceiver {
  /**
   * @param {!DecryptorInterface } impl
   */
  constructor(impl) {
    /** @private {!mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal<!DecryptorRemote>} */
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
        DecryptorRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!DecryptorRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);


    this.helper_internal_.registerHandler(
        0,
        Decryptor_Initialize_ParamsSpec.$,
        null,
        impl.initialize.bind(impl));
    this.helper_internal_.registerHandler(
        1,
        Decryptor_Decrypt_ParamsSpec.$,
        Decryptor_Decrypt_ResponseParamsSpec.$,
        impl.decrypt.bind(impl));
    this.helper_internal_.registerHandler(
        2,
        Decryptor_CancelDecrypt_ParamsSpec.$,
        null,
        impl.cancelDecrypt.bind(impl));
    this.helper_internal_.registerHandler(
        3,
        Decryptor_InitializeAudioDecoder_ParamsSpec.$,
        Decryptor_InitializeAudioDecoder_ResponseParamsSpec.$,
        impl.initializeAudioDecoder.bind(impl));
    this.helper_internal_.registerHandler(
        4,
        Decryptor_InitializeVideoDecoder_ParamsSpec.$,
        Decryptor_InitializeVideoDecoder_ResponseParamsSpec.$,
        impl.initializeVideoDecoder.bind(impl));
    this.helper_internal_.registerHandler(
        5,
        Decryptor_DecryptAndDecodeAudio_ParamsSpec.$,
        Decryptor_DecryptAndDecodeAudio_ResponseParamsSpec.$,
        impl.decryptAndDecodeAudio.bind(impl));
    this.helper_internal_.registerHandler(
        6,
        Decryptor_DecryptAndDecodeVideo_ParamsSpec.$,
        Decryptor_DecryptAndDecodeVideo_ResponseParamsSpec.$,
        impl.decryptAndDecodeVideo.bind(impl));
    this.helper_internal_.registerHandler(
        7,
        Decryptor_ResetDecoder_ParamsSpec.$,
        null,
        impl.resetDecoder.bind(impl));
    this.helper_internal_.registerHandler(
        8,
        Decryptor_DeinitializeDecoder_ParamsSpec.$,
        null,
        impl.deinitializeDecoder.bind(impl));
    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.helper_internal_.getConnectionErrorEventRouter();
  }
}

export class Decryptor {
  /**
   * @return {!string}
   */
  static get $interfaceName() {
    return "media.mojom.Decryptor";
  }

  /**
   * Returns a remote for this interface which sends messages to the browser.
   * The browser must have an interface request binder registered for this
   * interface and accessible to the calling document's frame.
   *
   * @return {!DecryptorRemote}
   */
  static getRemote() {
    let remote = new DecryptorRemote;
    remote.$.bindNewPipeAndPassReceiver().bindInBrowser();
    return remote;
  }
}

/**
 * @const { {$: !mojo.internal.MojomType} }
 */
export const Decryptor_StatusSpec = { $: mojo.internal.Enum() };

/**
 * @enum {number}
 */
export const Decryptor_Status = {
  
};
/**
 * @const { {$: !mojo.internal.MojomType} }
 */
export const Decryptor_StreamTypeSpec = { $: mojo.internal.Enum() };

/**
 * @enum {number}
 */
export const Decryptor_StreamType = {
  
};

/**
 * An object which receives request messages for the Decryptor
 * mojom interface and dispatches them as callbacks. One callback receiver exists
 * on this object for each message defined in the mojom interface, and each
 * receiver can have any number of listeners added to it.
 */
export class DecryptorCallbackRouter {
  constructor() {
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
      DecryptorRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!DecryptorRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);

    this.router_ = new mojo.internal.interfaceSupport.CallbackRouter;

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.initialize =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        0,
        Decryptor_Initialize_ParamsSpec.$,
        null,
        this.initialize.createReceiverHandler(false /* expectsResponse */));
    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.decrypt =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        1,
        Decryptor_Decrypt_ParamsSpec.$,
        Decryptor_Decrypt_ResponseParamsSpec.$,
        this.decrypt.createReceiverHandler(true /* expectsResponse */));
    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.cancelDecrypt =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        2,
        Decryptor_CancelDecrypt_ParamsSpec.$,
        null,
        this.cancelDecrypt.createReceiverHandler(false /* expectsResponse */));
    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.initializeAudioDecoder =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        3,
        Decryptor_InitializeAudioDecoder_ParamsSpec.$,
        Decryptor_InitializeAudioDecoder_ResponseParamsSpec.$,
        this.initializeAudioDecoder.createReceiverHandler(true /* expectsResponse */));
    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.initializeVideoDecoder =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        4,
        Decryptor_InitializeVideoDecoder_ParamsSpec.$,
        Decryptor_InitializeVideoDecoder_ResponseParamsSpec.$,
        this.initializeVideoDecoder.createReceiverHandler(true /* expectsResponse */));
    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.decryptAndDecodeAudio =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        5,
        Decryptor_DecryptAndDecodeAudio_ParamsSpec.$,
        Decryptor_DecryptAndDecodeAudio_ResponseParamsSpec.$,
        this.decryptAndDecodeAudio.createReceiverHandler(true /* expectsResponse */));
    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.decryptAndDecodeVideo =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        6,
        Decryptor_DecryptAndDecodeVideo_ParamsSpec.$,
        Decryptor_DecryptAndDecodeVideo_ResponseParamsSpec.$,
        this.decryptAndDecodeVideo.createReceiverHandler(true /* expectsResponse */));
    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.resetDecoder =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        7,
        Decryptor_ResetDecoder_ParamsSpec.$,
        null,
        this.resetDecoder.createReceiverHandler(false /* expectsResponse */));
    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.deinitializeDecoder =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        8,
        Decryptor_DeinitializeDecoder_ParamsSpec.$,
        null,
        this.deinitializeDecoder.createReceiverHandler(false /* expectsResponse */));
    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.helper_internal_.getConnectionErrorEventRouter();
  }

  /**
   * @param {number} id An ID returned by a prior call to addListener.
   * @return {boolean} True iff the identified listener was found and removed.
   */
  removeListener(id) {
    return this.router_.removeListener(id);
  }
}


/**
 * @implements {mojo.internal.interfaceSupport.PendingReceiver}
 */
export class FrameResourceReleaserPendingReceiver {
  /**
   * @param {!MojoHandle|!mojo.internal.interfaceSupport.Endpoint} handle
   */
  constructor(handle) {
    /** @public {!mojo.internal.interfaceSupport.Endpoint} */
    this.handle = mojo.internal.interfaceSupport.getEndpointForReceiver(handle);
  }

  /** @param {string=} scope */
  bindInBrowser(scope = 'context') {
    mojo.internal.interfaceSupport.bind(
        this.handle, 'media.mojom.FrameResourceReleaser', scope);
  }
}

/** @interface */
export class FrameResourceReleaserInterface {
}

/**
 * @implements { FrameResourceReleaserInterface }
 */
export class FrameResourceReleaserRemote {
  /** @param {MojoHandle|mojo.internal.interfaceSupport.Endpoint=} handle */
  constructor(handle = undefined) {
    /**
     * @private {!mojo.internal.interfaceSupport.InterfaceRemoteBase<!FrameResourceReleaserPendingReceiver>}
     */
    this.proxy =
        new mojo.internal.interfaceSupport.InterfaceRemoteBase(
          FrameResourceReleaserPendingReceiver,
          handle);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper<!FrameResourceReleaserPendingReceiver>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper(this.proxy);

    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.proxy.getConnectionErrorEventRouter();
  }
}

/**
 * An object which receives request messages for the FrameResourceReleaser
 * mojom interface. Must be constructed over an object which implements that
 * interface.
 */
export class FrameResourceReleaserReceiver {
  /**
   * @param {!FrameResourceReleaserInterface } impl
   */
  constructor(impl) {
    /** @private {!mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal<!FrameResourceReleaserRemote>} */
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
        FrameResourceReleaserRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!FrameResourceReleaserRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);


    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.helper_internal_.getConnectionErrorEventRouter();
  }
}

export class FrameResourceReleaser {
  /**
   * @return {!string}
   */
  static get $interfaceName() {
    return "media.mojom.FrameResourceReleaser";
  }

  /**
   * Returns a remote for this interface which sends messages to the browser.
   * The browser must have an interface request binder registered for this
   * interface and accessible to the calling document's frame.
   *
   * @return {!FrameResourceReleaserRemote}
   */
  static getRemote() {
    let remote = new FrameResourceReleaserRemote;
    remote.$.bindNewPipeAndPassReceiver().bindInBrowser();
    return remote;
  }
}


/**
 * An object which receives request messages for the FrameResourceReleaser
 * mojom interface and dispatches them as callbacks. One callback receiver exists
 * on this object for each message defined in the mojom interface, and each
 * receiver can have any number of listeners added to it.
 */
export class FrameResourceReleaserCallbackRouter {
  constructor() {
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
      FrameResourceReleaserRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!FrameResourceReleaserRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);

    this.router_ = new mojo.internal.interfaceSupport.CallbackRouter;

    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.helper_internal_.getConnectionErrorEventRouter();
  }

  /**
   * @param {number} id An ID returned by a prior call to addListener.
   * @return {boolean} True iff the identified listener was found and removed.
   */
  removeListener(id) {
    return this.router_.removeListener(id);
  }
}

/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const Decryptor_Initialize_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const Decryptor_Decrypt_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const Decryptor_Decrypt_ResponseParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const Decryptor_CancelDecrypt_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const Decryptor_InitializeAudioDecoder_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const Decryptor_InitializeAudioDecoder_ResponseParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const Decryptor_InitializeVideoDecoder_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const Decryptor_InitializeVideoDecoder_ResponseParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const Decryptor_DecryptAndDecodeAudio_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const Decryptor_DecryptAndDecodeAudio_ResponseParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const Decryptor_DecryptAndDecodeVideo_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const Decryptor_DecryptAndDecodeVideo_ResponseParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const Decryptor_ResetDecoder_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const Decryptor_DeinitializeDecoder_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };




mojo.internal.Struct(
    Decryptor_Initialize_ParamsSpec.$,
    'Decryptor_Initialize_Params',
    [
      mojo.internal.StructField(
        'audioPipe', 0,
        0,
        mojo.internal.Handle,
        null,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'videoPipe', 4,
        0,
        mojo.internal.Handle,
        null,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'decryptPipe', 8,
        0,
        mojo.internal.Handle,
        null,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'decryptedPipe', 12,
        0,
        mojo.internal.Handle,
        null,
        false /* nullable */,
        0),
    ],
    [[0, 24],]);



/**
 * @record
 */
export class Decryptor_Initialize_Params {
  constructor() {
    /** @type { !MojoHandle } */
    this.audioPipe;
    /** @type { !MojoHandle } */
    this.videoPipe;
    /** @type { !MojoHandle } */
    this.decryptPipe;
    /** @type { !MojoHandle } */
    this.decryptedPipe;
  }
}



mojo.internal.Struct(
    Decryptor_Decrypt_ParamsSpec.$,
    'Decryptor_Decrypt_Params',
    [
      mojo.internal.StructField(
        'streamType', 0,
        0,
        Decryptor_StreamTypeSpec.$,
        0,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'encrypted', 8,
        0,
        media_mojom_DecoderBufferSpec.$,
        null,
        false /* nullable */,
        0),
    ],
    [[0, 24],]);



/**
 * @record
 */
export class Decryptor_Decrypt_Params {
  constructor() {
    /** @type { !Decryptor_StreamType } */
    this.streamType;
    /** @type { !media_mojom_DecoderBuffer } */
    this.encrypted;
  }
}



mojo.internal.Struct(
    Decryptor_Decrypt_ResponseParamsSpec.$,
    'Decryptor_Decrypt_ResponseParams',
    [
      mojo.internal.StructField(
        'status', 0,
        0,
        Decryptor_StatusSpec.$,
        0,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'buffer', 8,
        0,
        media_mojom_DecoderBufferSpec.$,
        null,
        true /* nullable */,
        0),
    ],
    [[0, 24],]);



/**
 * @record
 */
export class Decryptor_Decrypt_ResponseParams {
  constructor() {
    /** @type { !Decryptor_Status } */
    this.status;
    /** @type { (media_mojom_DecoderBuffer|undefined) } */
    this.buffer;
  }
}



mojo.internal.Struct(
    Decryptor_CancelDecrypt_ParamsSpec.$,
    'Decryptor_CancelDecrypt_Params',
    [
      mojo.internal.StructField(
        'streamType', 0,
        0,
        Decryptor_StreamTypeSpec.$,
        0,
        false /* nullable */,
        0),
    ],
    [[0, 16],]);



/**
 * @record
 */
export class Decryptor_CancelDecrypt_Params {
  constructor() {
    /** @type { !Decryptor_StreamType } */
    this.streamType;
  }
}



mojo.internal.Struct(
    Decryptor_InitializeAudioDecoder_ParamsSpec.$,
    'Decryptor_InitializeAudioDecoder_Params',
    [
      mojo.internal.StructField(
        'config', 0,
        0,
        media_mojom_AudioDecoderConfigSpec.$,
        null,
        false /* nullable */,
        0),
    ],
    [[0, 16],]);



/**
 * @record
 */
export class Decryptor_InitializeAudioDecoder_Params {
  constructor() {
    /** @type { !media_mojom_AudioDecoderConfig } */
    this.config;
  }
}



mojo.internal.Struct(
    Decryptor_InitializeAudioDecoder_ResponseParamsSpec.$,
    'Decryptor_InitializeAudioDecoder_ResponseParams',
    [
      mojo.internal.StructField(
        'success', 0,
        0,
        mojo.internal.Bool,
        false,
        false /* nullable */,
        0),
    ],
    [[0, 16],]);



/**
 * @record
 */
export class Decryptor_InitializeAudioDecoder_ResponseParams {
  constructor() {
    /** @type { !boolean } */
    this.success;
  }
}



mojo.internal.Struct(
    Decryptor_InitializeVideoDecoder_ParamsSpec.$,
    'Decryptor_InitializeVideoDecoder_Params',
    [
      mojo.internal.StructField(
        'config', 0,
        0,
        media_mojom_VideoDecoderConfigSpec.$,
        null,
        false /* nullable */,
        0),
    ],
    [[0, 16],]);



/**
 * @record
 */
export class Decryptor_InitializeVideoDecoder_Params {
  constructor() {
    /** @type { !media_mojom_VideoDecoderConfig } */
    this.config;
  }
}



mojo.internal.Struct(
    Decryptor_InitializeVideoDecoder_ResponseParamsSpec.$,
    'Decryptor_InitializeVideoDecoder_ResponseParams',
    [
      mojo.internal.StructField(
        'success', 0,
        0,
        mojo.internal.Bool,
        false,
        false /* nullable */,
        0),
    ],
    [[0, 16],]);



/**
 * @record
 */
export class Decryptor_InitializeVideoDecoder_ResponseParams {
  constructor() {
    /** @type { !boolean } */
    this.success;
  }
}



mojo.internal.Struct(
    Decryptor_DecryptAndDecodeAudio_ParamsSpec.$,
    'Decryptor_DecryptAndDecodeAudio_Params',
    [
      mojo.internal.StructField(
        'encrypted', 0,
        0,
        media_mojom_DecoderBufferSpec.$,
        null,
        false /* nullable */,
        0),
    ],
    [[0, 16],]);



/**
 * @record
 */
export class Decryptor_DecryptAndDecodeAudio_Params {
  constructor() {
    /** @type { !media_mojom_DecoderBuffer } */
    this.encrypted;
  }
}



mojo.internal.Struct(
    Decryptor_DecryptAndDecodeAudio_ResponseParamsSpec.$,
    'Decryptor_DecryptAndDecodeAudio_ResponseParams',
    [
      mojo.internal.StructField(
        'status', 0,
        0,
        Decryptor_StatusSpec.$,
        0,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'audioBuffers', 8,
        0,
        mojo.internal.Array(media_mojom_AudioBufferSpec.$, false),
        null,
        false /* nullable */,
        0),
    ],
    [[0, 24],]);



/**
 * @record
 */
export class Decryptor_DecryptAndDecodeAudio_ResponseParams {
  constructor() {
    /** @type { !Decryptor_Status } */
    this.status;
    /** @type { !Array<!media_mojom_AudioBuffer> } */
    this.audioBuffers;
  }
}



mojo.internal.Struct(
    Decryptor_DecryptAndDecodeVideo_ParamsSpec.$,
    'Decryptor_DecryptAndDecodeVideo_Params',
    [
      mojo.internal.StructField(
        'encrypted', 0,
        0,
        media_mojom_DecoderBufferSpec.$,
        null,
        false /* nullable */,
        0),
    ],
    [[0, 16],]);



/**
 * @record
 */
export class Decryptor_DecryptAndDecodeVideo_Params {
  constructor() {
    /** @type { !media_mojom_DecoderBuffer } */
    this.encrypted;
  }
}



mojo.internal.Struct(
    Decryptor_DecryptAndDecodeVideo_ResponseParamsSpec.$,
    'Decryptor_DecryptAndDecodeVideo_ResponseParams',
    [
      mojo.internal.StructField(
        'status', 0,
        0,
        Decryptor_StatusSpec.$,
        0,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'videoFrame', 8,
        0,
        media_mojom_VideoFrameSpec.$,
        null,
        true /* nullable */,
        0),
      mojo.internal.StructField(
        'releaser', 16,
        0,
        mojo.internal.InterfaceProxy(FrameResourceReleaserRemote),
        null,
        true /* nullable */,
        0),
    ],
    [[0, 32],]);



/**
 * @record
 */
export class Decryptor_DecryptAndDecodeVideo_ResponseParams {
  constructor() {
    /** @type { !Decryptor_Status } */
    this.status;
    /** @type { (media_mojom_VideoFrame|undefined) } */
    this.videoFrame;
    /** @type { (FrameResourceReleaserRemote|undefined) } */
    this.releaser;
  }
}



mojo.internal.Struct(
    Decryptor_ResetDecoder_ParamsSpec.$,
    'Decryptor_ResetDecoder_Params',
    [
      mojo.internal.StructField(
        'streamType', 0,
        0,
        Decryptor_StreamTypeSpec.$,
        0,
        false /* nullable */,
        0),
    ],
    [[0, 16],]);



/**
 * @record
 */
export class Decryptor_ResetDecoder_Params {
  constructor() {
    /** @type { !Decryptor_StreamType } */
    this.streamType;
  }
}



mojo.internal.Struct(
    Decryptor_DeinitializeDecoder_ParamsSpec.$,
    'Decryptor_DeinitializeDecoder_Params',
    [
      mojo.internal.StructField(
        'streamType', 0,
        0,
        Decryptor_StreamTypeSpec.$,
        0,
        false /* nullable */,
        0),
    ],
    [[0, 16],]);



/**
 * @record
 */
export class Decryptor_DeinitializeDecoder_Params {
  constructor() {
    /** @type { !Decryptor_StreamType } */
    this.streamType;
  }
}

