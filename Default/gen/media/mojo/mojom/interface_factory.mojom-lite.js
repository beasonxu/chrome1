// media/mojo/mojom/interface_factory.mojom-lite.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
'use strict';


mojo.internal.exportModule('media.mojom');








/**
 * @implements {mojo.internal.interfaceSupport.PendingReceiver}
 * @export
 */
media.mojom.InterfaceFactoryPendingReceiver = class {
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
        this.handle,
        media.mojom.InterfaceFactory.$interfaceName,
        scope);
  }
};



/**
 * @export
 * @implements { media.mojom.InterfaceFactoryInterface }
 */
media.mojom.InterfaceFactoryRemote = class {
  /** @param {MojoHandle|mojo.internal.interfaceSupport.Endpoint=} handle */
  constructor(handle = undefined) {
    /**
     * @private {!mojo.internal.interfaceSupport.InterfaceRemoteBase<!media.mojom.InterfaceFactoryPendingReceiver>}
     */
    this.proxy =
        new mojo.internal.interfaceSupport.InterfaceRemoteBase(
          media.mojom.InterfaceFactoryPendingReceiver,
          handle);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper<!media.mojom.InterfaceFactoryPendingReceiver>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper(this.proxy);

    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.proxy.getConnectionErrorEventRouter();
  }

  
  /**
   * @param { !media.mojom.AudioDecoderPendingReceiver } audioDecoder
   */

  createAudioDecoder(
      audioDecoder) {
    this.proxy.sendMessage(
        0,
        media.mojom.InterfaceFactory_CreateAudioDecoder_ParamsSpec.$,
        null,
        [
          audioDecoder
        ]);
  }

  
  /**
   * @param { !media.mojom.VideoDecoderPendingReceiver } videoDecoder
   * @param { ?media.stable.mojom.StableVideoDecoderRemote } dstVideoDecoder
   */

  createVideoDecoder(
      videoDecoder,
      dstVideoDecoder) {
    this.proxy.sendMessage(
        1,
        media.mojom.InterfaceFactory_CreateVideoDecoder_ParamsSpec.$,
        null,
        [
          videoDecoder,
          dstVideoDecoder
        ]);
  }

  
  /**
   * @param { !media.mojom.AudioEncoderPendingReceiver } audioEncoder
   */

  createAudioEncoder(
      audioEncoder) {
    this.proxy.sendMessage(
        2,
        media.mojom.InterfaceFactory_CreateAudioEncoder_ParamsSpec.$,
        null,
        [
          audioEncoder
        ]);
  }

  
  /**
   * @param { !string } audioDeviceId
   * @param { !media.mojom.RendererPendingReceiver } renderer
   */

  createDefaultRenderer(
      audioDeviceId,
      renderer) {
    this.proxy.sendMessage(
        3,
        media.mojom.InterfaceFactory_CreateDefaultRenderer_ParamsSpec.$,
        null,
        [
          audioDeviceId,
          renderer
        ]);
  }

  
  /**
   * @param { !media.mojom.MediaPlayerRendererClientExtensionRemote } clientExtension
   * @param { !media.mojom.RendererPendingReceiver } renderer
   * @param { !media.mojom.MediaPlayerRendererExtensionPendingReceiver } rendererExtension
   */

  createMediaPlayerRenderer(
      clientExtension,
      renderer,
      rendererExtension) {
    this.proxy.sendMessage(
        4,
        media.mojom.InterfaceFactory_CreateMediaPlayerRenderer_ParamsSpec.$,
        null,
        [
          clientExtension,
          renderer,
          rendererExtension
        ]);
  }

  
  /**
   * @param { !string } presentationId
   * @param { !media.mojom.FlingingRendererClientExtensionRemote } clientExtension
   * @param { !media.mojom.RendererPendingReceiver } renderer
   */

  createFlingingRenderer(
      presentationId,
      clientExtension,
      renderer) {
    this.proxy.sendMessage(
        5,
        media.mojom.InterfaceFactory_CreateFlingingRenderer_ParamsSpec.$,
        null,
        [
          presentationId,
          clientExtension,
          renderer
        ]);
  }

  
  /**
   * @param { !media.mojom.CdmConfig } cdmConfig
   * @return {!Promise<{
        cdm: ?media.mojom.ContentDecryptionModuleRemote,
        cdmContext: ?media.mojom.CdmContext,
        errorMessage: !string,
   *  }>}
   */

  createCdm(
      cdmConfig) {
    return this.proxy.sendMessage(
        6,
        media.mojom.InterfaceFactory_CreateCdm_ParamsSpec.$,
        media.mojom.InterfaceFactory_CreateCdm_ResponseParamsSpec.$,
        [
          cdmConfig
        ]);
  }
};

/**
 * An object which receives request messages for the InterfaceFactory
 * mojom interface. Must be constructed over an object which implements that
 * interface.
 *
 * @export
 */
media.mojom.InterfaceFactoryReceiver = class {
  /**
   * @param {!media.mojom.InterfaceFactoryInterface } impl
   */
  constructor(impl) {
    /** @private {!mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal<!media.mojom.InterfaceFactoryRemote>} */
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
        media.mojom.InterfaceFactoryRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!media.mojom.InterfaceFactoryRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);


    this.helper_internal_.registerHandler(
        0,
        media.mojom.InterfaceFactory_CreateAudioDecoder_ParamsSpec.$,
        null,
        impl.createAudioDecoder.bind(impl));
    this.helper_internal_.registerHandler(
        1,
        media.mojom.InterfaceFactory_CreateVideoDecoder_ParamsSpec.$,
        null,
        impl.createVideoDecoder.bind(impl));
    this.helper_internal_.registerHandler(
        2,
        media.mojom.InterfaceFactory_CreateAudioEncoder_ParamsSpec.$,
        null,
        impl.createAudioEncoder.bind(impl));
    this.helper_internal_.registerHandler(
        3,
        media.mojom.InterfaceFactory_CreateDefaultRenderer_ParamsSpec.$,
        null,
        impl.createDefaultRenderer.bind(impl));
    this.helper_internal_.registerHandler(
        4,
        media.mojom.InterfaceFactory_CreateMediaPlayerRenderer_ParamsSpec.$,
        null,
        impl.createMediaPlayerRenderer.bind(impl));
    this.helper_internal_.registerHandler(
        5,
        media.mojom.InterfaceFactory_CreateFlingingRenderer_ParamsSpec.$,
        null,
        impl.createFlingingRenderer.bind(impl));
    this.helper_internal_.registerHandler(
        6,
        media.mojom.InterfaceFactory_CreateCdm_ParamsSpec.$,
        media.mojom.InterfaceFactory_CreateCdm_ResponseParamsSpec.$,
        impl.createCdm.bind(impl));
    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.helper_internal_.getConnectionErrorEventRouter();
  }
};

/**
 *  @export
 */
media.mojom.InterfaceFactory = class {
  /**
   * @return {!string}
   */
  static get $interfaceName() {
    return "media.mojom.InterfaceFactory";
  }

  /**
   * Returns a remote for this interface which sends messages to the browser.
   * The browser must have an interface request binder registered for this
   * interface and accessible to the calling document's frame.
   *
   * @return {!media.mojom.InterfaceFactoryRemote}
   * @export
   */
  static getRemote() {
    let remote = new media.mojom.InterfaceFactoryRemote;
    remote.$.bindNewPipeAndPassReceiver().bindInBrowser();
    return remote;
  }
};


/**
 * An object which receives request messages for the InterfaceFactory
 * mojom interface and dispatches them as callbacks. One callback receiver exists
 * on this object for each message defined in the mojom interface, and each
 * receiver can have any number of listeners added to it.
 *
 * @export
 */
media.mojom.InterfaceFactoryCallbackRouter = class {
  constructor() {
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
      media.mojom.InterfaceFactoryRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!media.mojom.InterfaceFactoryRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);

    this.router_ = new mojo.internal.interfaceSupport.CallbackRouter;

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.createAudioDecoder =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        0,
        media.mojom.InterfaceFactory_CreateAudioDecoder_ParamsSpec.$,
        null,
        this.createAudioDecoder.createReceiverHandler(false /* expectsResponse */));
    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.createVideoDecoder =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        1,
        media.mojom.InterfaceFactory_CreateVideoDecoder_ParamsSpec.$,
        null,
        this.createVideoDecoder.createReceiverHandler(false /* expectsResponse */));
    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.createAudioEncoder =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        2,
        media.mojom.InterfaceFactory_CreateAudioEncoder_ParamsSpec.$,
        null,
        this.createAudioEncoder.createReceiverHandler(false /* expectsResponse */));
    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.createDefaultRenderer =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        3,
        media.mojom.InterfaceFactory_CreateDefaultRenderer_ParamsSpec.$,
        null,
        this.createDefaultRenderer.createReceiverHandler(false /* expectsResponse */));
    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.createMediaPlayerRenderer =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        4,
        media.mojom.InterfaceFactory_CreateMediaPlayerRenderer_ParamsSpec.$,
        null,
        this.createMediaPlayerRenderer.createReceiverHandler(false /* expectsResponse */));
    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.createFlingingRenderer =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        5,
        media.mojom.InterfaceFactory_CreateFlingingRenderer_ParamsSpec.$,
        null,
        this.createFlingingRenderer.createReceiverHandler(false /* expectsResponse */));
    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.createCdm =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        6,
        media.mojom.InterfaceFactory_CreateCdm_ParamsSpec.$,
        media.mojom.InterfaceFactory_CreateCdm_ResponseParamsSpec.$,
        this.createCdm.createReceiverHandler(true /* expectsResponse */));
    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.helper_internal_.getConnectionErrorEventRouter();
  }

  /**
   * @param {number} id An ID returned by a prior call to addListener.
   * @return {boolean} True iff the identified listener was found and removed.
   * @export
   */
  removeListener(id) {
    return this.router_.removeListener(id);
  }
};



/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
media.mojom.InterfaceFactory_CreateAudioDecoder_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
media.mojom.InterfaceFactory_CreateVideoDecoder_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
media.mojom.InterfaceFactory_CreateAudioEncoder_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
media.mojom.InterfaceFactory_CreateDefaultRenderer_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
media.mojom.InterfaceFactory_CreateMediaPlayerRenderer_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
media.mojom.InterfaceFactory_CreateFlingingRenderer_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
media.mojom.InterfaceFactory_CreateCdm_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
media.mojom.InterfaceFactory_CreateCdm_ResponseParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };




mojo.internal.Struct(
    media.mojom.InterfaceFactory_CreateAudioDecoder_ParamsSpec.$,
    'InterfaceFactory_CreateAudioDecoder_Params',
    [
      mojo.internal.StructField(
        'audioDecoder', 0,
        0,
        mojo.internal.InterfaceRequest(media.mojom.AudioDecoderPendingReceiver),
        null,
        false /* nullable */),
    ],
    [[0, 16],]);





/** @record */
media.mojom.InterfaceFactory_CreateAudioDecoder_Params = class {
  constructor() {
    /** @export { !media.mojom.AudioDecoderPendingReceiver } */
    this.audioDecoder;
  }
};




mojo.internal.Struct(
    media.mojom.InterfaceFactory_CreateVideoDecoder_ParamsSpec.$,
    'InterfaceFactory_CreateVideoDecoder_Params',
    [
      mojo.internal.StructField(
        'videoDecoder', 0,
        0,
        mojo.internal.InterfaceRequest(media.mojom.VideoDecoderPendingReceiver),
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'dstVideoDecoder', 4,
        0,
        mojo.internal.InterfaceProxy(media.stable.mojom.StableVideoDecoderRemote),
        null,
        true /* nullable */),
    ],
    [[0, 24],]);





/** @record */
media.mojom.InterfaceFactory_CreateVideoDecoder_Params = class {
  constructor() {
    /** @export { !media.mojom.VideoDecoderPendingReceiver } */
    this.videoDecoder;
    /** @export { (media.stable.mojom.StableVideoDecoderRemote|undefined) } */
    this.dstVideoDecoder;
  }
};




mojo.internal.Struct(
    media.mojom.InterfaceFactory_CreateAudioEncoder_ParamsSpec.$,
    'InterfaceFactory_CreateAudioEncoder_Params',
    [
      mojo.internal.StructField(
        'audioEncoder', 0,
        0,
        mojo.internal.InterfaceRequest(media.mojom.AudioEncoderPendingReceiver),
        null,
        false /* nullable */),
    ],
    [[0, 16],]);





/** @record */
media.mojom.InterfaceFactory_CreateAudioEncoder_Params = class {
  constructor() {
    /** @export { !media.mojom.AudioEncoderPendingReceiver } */
    this.audioEncoder;
  }
};




mojo.internal.Struct(
    media.mojom.InterfaceFactory_CreateDefaultRenderer_ParamsSpec.$,
    'InterfaceFactory_CreateDefaultRenderer_Params',
    [
      mojo.internal.StructField(
        'audioDeviceId', 0,
        0,
        mojo.internal.String,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'renderer', 8,
        0,
        mojo.internal.InterfaceRequest(media.mojom.RendererPendingReceiver),
        null,
        false /* nullable */),
    ],
    [[0, 24],]);





/** @record */
media.mojom.InterfaceFactory_CreateDefaultRenderer_Params = class {
  constructor() {
    /** @export { !string } */
    this.audioDeviceId;
    /** @export { !media.mojom.RendererPendingReceiver } */
    this.renderer;
  }
};




mojo.internal.Struct(
    media.mojom.InterfaceFactory_CreateMediaPlayerRenderer_ParamsSpec.$,
    'InterfaceFactory_CreateMediaPlayerRenderer_Params',
    [
      mojo.internal.StructField(
        'clientExtension', 0,
        0,
        mojo.internal.InterfaceProxy(media.mojom.MediaPlayerRendererClientExtensionRemote),
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'renderer', 8,
        0,
        mojo.internal.InterfaceRequest(media.mojom.RendererPendingReceiver),
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'rendererExtension', 12,
        0,
        mojo.internal.InterfaceRequest(media.mojom.MediaPlayerRendererExtensionPendingReceiver),
        null,
        false /* nullable */),
    ],
    [[0, 24],]);





/** @record */
media.mojom.InterfaceFactory_CreateMediaPlayerRenderer_Params = class {
  constructor() {
    /** @export { !media.mojom.MediaPlayerRendererClientExtensionRemote } */
    this.clientExtension;
    /** @export { !media.mojom.RendererPendingReceiver } */
    this.renderer;
    /** @export { !media.mojom.MediaPlayerRendererExtensionPendingReceiver } */
    this.rendererExtension;
  }
};




mojo.internal.Struct(
    media.mojom.InterfaceFactory_CreateFlingingRenderer_ParamsSpec.$,
    'InterfaceFactory_CreateFlingingRenderer_Params',
    [
      mojo.internal.StructField(
        'presentationId', 0,
        0,
        mojo.internal.String,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'clientExtension', 8,
        0,
        mojo.internal.InterfaceProxy(media.mojom.FlingingRendererClientExtensionRemote),
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'renderer', 16,
        0,
        mojo.internal.InterfaceRequest(media.mojom.RendererPendingReceiver),
        null,
        false /* nullable */),
    ],
    [[0, 32],]);





/** @record */
media.mojom.InterfaceFactory_CreateFlingingRenderer_Params = class {
  constructor() {
    /** @export { !string } */
    this.presentationId;
    /** @export { !media.mojom.FlingingRendererClientExtensionRemote } */
    this.clientExtension;
    /** @export { !media.mojom.RendererPendingReceiver } */
    this.renderer;
  }
};




mojo.internal.Struct(
    media.mojom.InterfaceFactory_CreateCdm_ParamsSpec.$,
    'InterfaceFactory_CreateCdm_Params',
    [
      mojo.internal.StructField(
        'cdmConfig', 0,
        0,
        media.mojom.CdmConfigSpec.$,
        null,
        false /* nullable */),
    ],
    [[0, 16],]);





/** @record */
media.mojom.InterfaceFactory_CreateCdm_Params = class {
  constructor() {
    /** @export { !media.mojom.CdmConfig } */
    this.cdmConfig;
  }
};




mojo.internal.Struct(
    media.mojom.InterfaceFactory_CreateCdm_ResponseParamsSpec.$,
    'InterfaceFactory_CreateCdm_ResponseParams',
    [
      mojo.internal.StructField(
        'cdm', 0,
        0,
        mojo.internal.InterfaceProxy(media.mojom.ContentDecryptionModuleRemote),
        null,
        true /* nullable */),
      mojo.internal.StructField(
        'cdmContext', 8,
        0,
        media.mojom.CdmContextSpec.$,
        null,
        true /* nullable */),
      mojo.internal.StructField(
        'errorMessage', 16,
        0,
        mojo.internal.String,
        null,
        false /* nullable */),
    ],
    [[0, 32],]);





/** @record */
media.mojom.InterfaceFactory_CreateCdm_ResponseParams = class {
  constructor() {
    /** @export { (media.mojom.ContentDecryptionModuleRemote|undefined) } */
    this.cdm;
    /** @export { (media.mojom.CdmContext|undefined) } */
    this.cdmContext;
    /** @export { !string } */
    this.errorMessage;
  }
};


