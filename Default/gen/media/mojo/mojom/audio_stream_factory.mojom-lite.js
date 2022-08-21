// media/mojo/mojom/audio_stream_factory.mojom-lite.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
'use strict';


mojo.internal.exportModule('media.mojom');








/**
 * @implements {mojo.internal.interfaceSupport.PendingReceiver}
 * @export
 */
media.mojom.LocalMuterPendingReceiver = class {
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
        media.mojom.LocalMuter.$interfaceName,
        scope);
  }
};



/**
 * @export
 * @implements { media.mojom.LocalMuterInterface }
 */
media.mojom.LocalMuterRemote = class {
  /** @param {MojoHandle|mojo.internal.interfaceSupport.Endpoint=} handle */
  constructor(handle = undefined) {
    /**
     * @private {!mojo.internal.interfaceSupport.InterfaceRemoteBase<!media.mojom.LocalMuterPendingReceiver>}
     */
    this.proxy =
        new mojo.internal.interfaceSupport.InterfaceRemoteBase(
          media.mojom.LocalMuterPendingReceiver,
          handle);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper<!media.mojom.LocalMuterPendingReceiver>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper(this.proxy);

    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.proxy.getConnectionErrorEventRouter();
  }
};

/**
 * An object which receives request messages for the LocalMuter
 * mojom interface. Must be constructed over an object which implements that
 * interface.
 *
 * @export
 */
media.mojom.LocalMuterReceiver = class {
  /**
   * @param {!media.mojom.LocalMuterInterface } impl
   */
  constructor(impl) {
    /** @private {!mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal<!media.mojom.LocalMuterRemote>} */
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
        media.mojom.LocalMuterRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!media.mojom.LocalMuterRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);


    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.helper_internal_.getConnectionErrorEventRouter();
  }
};

/**
 *  @export
 */
media.mojom.LocalMuter = class {
  /**
   * @return {!string}
   */
  static get $interfaceName() {
    return "media.mojom.LocalMuter";
  }

  /**
   * Returns a remote for this interface which sends messages to the browser.
   * The browser must have an interface request binder registered for this
   * interface and accessible to the calling document's frame.
   *
   * @return {!media.mojom.LocalMuterRemote}
   * @export
   */
  static getRemote() {
    let remote = new media.mojom.LocalMuterRemote;
    remote.$.bindNewPipeAndPassReceiver().bindInBrowser();
    return remote;
  }
};


/**
 * An object which receives request messages for the LocalMuter
 * mojom interface and dispatches them as callbacks. One callback receiver exists
 * on this object for each message defined in the mojom interface, and each
 * receiver can have any number of listeners added to it.
 *
 * @export
 */
media.mojom.LocalMuterCallbackRouter = class {
  constructor() {
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
      media.mojom.LocalMuterRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!media.mojom.LocalMuterRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);

    this.router_ = new mojo.internal.interfaceSupport.CallbackRouter;

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
 * @implements {mojo.internal.interfaceSupport.PendingReceiver}
 * @export
 */
media.mojom.AudioStreamFactoryPendingReceiver = class {
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
        media.mojom.AudioStreamFactory.$interfaceName,
        scope);
  }
};



/**
 * @export
 * @implements { media.mojom.AudioStreamFactoryInterface }
 */
media.mojom.AudioStreamFactoryRemote = class {
  /** @param {MojoHandle|mojo.internal.interfaceSupport.Endpoint=} handle */
  constructor(handle = undefined) {
    /**
     * @private {!mojo.internal.interfaceSupport.InterfaceRemoteBase<!media.mojom.AudioStreamFactoryPendingReceiver>}
     */
    this.proxy =
        new mojo.internal.interfaceSupport.InterfaceRemoteBase(
          media.mojom.AudioStreamFactoryPendingReceiver,
          handle);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper<!media.mojom.AudioStreamFactoryPendingReceiver>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper(this.proxy);

    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.proxy.getConnectionErrorEventRouter();
  }

  
  /**
   * @param { !media.mojom.AudioInputStreamPendingReceiver } stream
   * @param { !media.mojom.AudioInputStreamClientRemote } client
   * @param { ?media.mojom.AudioInputStreamObserverRemote } observer
   * @param { ?media.mojom.AudioLogRemote } log
   * @param { !string } deviceId
   * @param { !media.mojom.AudioParameters } params
   * @param { !number } sharedMemoryCount
   * @param { !boolean } enableAgc
   * @param { ?mojoBase.mojom.ReadOnlySharedMemoryRegion } keyPressCountBuffer
   * @param { ?media.mojom.AudioProcessingConfig } processingConfig
   * @return {!Promise<{
        dataPipe: ?media.mojom.ReadOnlyAudioDataPipe,
        initiallyMuted: !boolean,
        streamId: ?mojoBase.mojom.UnguessableToken,
   *  }>}
   */

  createInputStream(
      stream,
      client,
      observer,
      log,
      deviceId,
      params,
      sharedMemoryCount,
      enableAgc,
      keyPressCountBuffer,
      processingConfig) {
    return this.proxy.sendMessage(
        0,
        media.mojom.AudioStreamFactory_CreateInputStream_ParamsSpec.$,
        media.mojom.AudioStreamFactory_CreateInputStream_ResponseParamsSpec.$,
        [
          stream,
          client,
          observer,
          log,
          deviceId,
          params,
          sharedMemoryCount,
          enableAgc,
          keyPressCountBuffer,
          processingConfig
        ]);
  }

  
  /**
   * @param { !mojoBase.mojom.UnguessableToken } inputStreamId
   * @param { !string } outputDeviceId
   */

  associateInputAndOutputForAec(
      inputStreamId,
      outputDeviceId) {
    this.proxy.sendMessage(
        1,
        media.mojom.AudioStreamFactory_AssociateInputAndOutputForAec_ParamsSpec.$,
        null,
        [
          inputStreamId,
          outputDeviceId
        ]);
  }

  
  /**
   * @param { !media.mojom.AudioOutputStreamPendingReceiver } stream
   * @param { ?Object } observer
   * @param { ?media.mojom.AudioLogRemote } log
   * @param { !string } deviceId
   * @param { !media.mojom.AudioParameters } params
   * @param { !mojoBase.mojom.UnguessableToken } groupId
   * @return {!Promise<{
        dataPipe: ?media.mojom.ReadWriteAudioDataPipe,
   *  }>}
   */

  createOutputStream(
      stream,
      observer,
      log,
      deviceId,
      params,
      groupId) {
    return this.proxy.sendMessage(
        2,
        media.mojom.AudioStreamFactory_CreateOutputStream_ParamsSpec.$,
        media.mojom.AudioStreamFactory_CreateOutputStream_ResponseParamsSpec.$,
        [
          stream,
          observer,
          log,
          deviceId,
          params,
          groupId
        ]);
  }

  
  /**
   * @param { !Object } receiver
   * @param { !mojoBase.mojom.UnguessableToken } groupId
   */

  bindMuter(
      receiver,
      groupId) {
    this.proxy.sendMessage(
        3,
        media.mojom.AudioStreamFactory_BindMuter_ParamsSpec.$,
        null,
        [
          receiver,
          groupId
        ]);
  }

  
  /**
   * @param { !media.mojom.AudioInputStreamPendingReceiver } receiver
   * @param { !media.mojom.AudioInputStreamClientRemote } client
   * @param { !media.mojom.AudioInputStreamObserverRemote } observer
   * @param { !media.mojom.AudioParameters } params
   * @param { !number } sharedMemoryCount
   * @param { !mojoBase.mojom.UnguessableToken } groupId
   * @return {!Promise<{
        dataPipe: ?media.mojom.ReadOnlyAudioDataPipe,
   *  }>}
   */

  createLoopbackStream(
      receiver,
      client,
      observer,
      params,
      sharedMemoryCount,
      groupId) {
    return this.proxy.sendMessage(
        4,
        media.mojom.AudioStreamFactory_CreateLoopbackStream_ParamsSpec.$,
        media.mojom.AudioStreamFactory_CreateLoopbackStream_ResponseParamsSpec.$,
        [
          receiver,
          client,
          observer,
          params,
          sharedMemoryCount,
          groupId
        ]);
  }
};

/**
 * An object which receives request messages for the AudioStreamFactory
 * mojom interface. Must be constructed over an object which implements that
 * interface.
 *
 * @export
 */
media.mojom.AudioStreamFactoryReceiver = class {
  /**
   * @param {!media.mojom.AudioStreamFactoryInterface } impl
   */
  constructor(impl) {
    /** @private {!mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal<!media.mojom.AudioStreamFactoryRemote>} */
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
        media.mojom.AudioStreamFactoryRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!media.mojom.AudioStreamFactoryRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);


    this.helper_internal_.registerHandler(
        0,
        media.mojom.AudioStreamFactory_CreateInputStream_ParamsSpec.$,
        media.mojom.AudioStreamFactory_CreateInputStream_ResponseParamsSpec.$,
        impl.createInputStream.bind(impl));
    this.helper_internal_.registerHandler(
        1,
        media.mojom.AudioStreamFactory_AssociateInputAndOutputForAec_ParamsSpec.$,
        null,
        impl.associateInputAndOutputForAec.bind(impl));
    this.helper_internal_.registerHandler(
        2,
        media.mojom.AudioStreamFactory_CreateOutputStream_ParamsSpec.$,
        media.mojom.AudioStreamFactory_CreateOutputStream_ResponseParamsSpec.$,
        impl.createOutputStream.bind(impl));
    this.helper_internal_.registerHandler(
        3,
        media.mojom.AudioStreamFactory_BindMuter_ParamsSpec.$,
        null,
        impl.bindMuter.bind(impl));
    this.helper_internal_.registerHandler(
        4,
        media.mojom.AudioStreamFactory_CreateLoopbackStream_ParamsSpec.$,
        media.mojom.AudioStreamFactory_CreateLoopbackStream_ResponseParamsSpec.$,
        impl.createLoopbackStream.bind(impl));
    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.helper_internal_.getConnectionErrorEventRouter();
  }
};

/**
 *  @export
 */
media.mojom.AudioStreamFactory = class {
  /**
   * @return {!string}
   */
  static get $interfaceName() {
    return "media.mojom.AudioStreamFactory";
  }

  /**
   * Returns a remote for this interface which sends messages to the browser.
   * The browser must have an interface request binder registered for this
   * interface and accessible to the calling document's frame.
   *
   * @return {!media.mojom.AudioStreamFactoryRemote}
   * @export
   */
  static getRemote() {
    let remote = new media.mojom.AudioStreamFactoryRemote;
    remote.$.bindNewPipeAndPassReceiver().bindInBrowser();
    return remote;
  }
};


/**
 * An object which receives request messages for the AudioStreamFactory
 * mojom interface and dispatches them as callbacks. One callback receiver exists
 * on this object for each message defined in the mojom interface, and each
 * receiver can have any number of listeners added to it.
 *
 * @export
 */
media.mojom.AudioStreamFactoryCallbackRouter = class {
  constructor() {
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
      media.mojom.AudioStreamFactoryRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!media.mojom.AudioStreamFactoryRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);

    this.router_ = new mojo.internal.interfaceSupport.CallbackRouter;

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.createInputStream =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        0,
        media.mojom.AudioStreamFactory_CreateInputStream_ParamsSpec.$,
        media.mojom.AudioStreamFactory_CreateInputStream_ResponseParamsSpec.$,
        this.createInputStream.createReceiverHandler(true /* expectsResponse */));
    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.associateInputAndOutputForAec =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        1,
        media.mojom.AudioStreamFactory_AssociateInputAndOutputForAec_ParamsSpec.$,
        null,
        this.associateInputAndOutputForAec.createReceiverHandler(false /* expectsResponse */));
    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.createOutputStream =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        2,
        media.mojom.AudioStreamFactory_CreateOutputStream_ParamsSpec.$,
        media.mojom.AudioStreamFactory_CreateOutputStream_ResponseParamsSpec.$,
        this.createOutputStream.createReceiverHandler(true /* expectsResponse */));
    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.bindMuter =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        3,
        media.mojom.AudioStreamFactory_BindMuter_ParamsSpec.$,
        null,
        this.bindMuter.createReceiverHandler(false /* expectsResponse */));
    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.createLoopbackStream =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        4,
        media.mojom.AudioStreamFactory_CreateLoopbackStream_ParamsSpec.$,
        media.mojom.AudioStreamFactory_CreateLoopbackStream_ResponseParamsSpec.$,
        this.createLoopbackStream.createReceiverHandler(true /* expectsResponse */));
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
media.mojom.AudioStreamFactory_CreateInputStream_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
media.mojom.AudioStreamFactory_CreateInputStream_ResponseParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
media.mojom.AudioStreamFactory_AssociateInputAndOutputForAec_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
media.mojom.AudioStreamFactory_CreateOutputStream_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
media.mojom.AudioStreamFactory_CreateOutputStream_ResponseParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
media.mojom.AudioStreamFactory_BindMuter_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
media.mojom.AudioStreamFactory_CreateLoopbackStream_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
media.mojom.AudioStreamFactory_CreateLoopbackStream_ResponseParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };




mojo.internal.Struct(
    media.mojom.AudioStreamFactory_CreateInputStream_ParamsSpec.$,
    'AudioStreamFactory_CreateInputStream_Params',
    [
      mojo.internal.StructField(
        'stream', 0,
        0,
        mojo.internal.InterfaceRequest(media.mojom.AudioInputStreamPendingReceiver),
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'client', 4,
        0,
        mojo.internal.InterfaceProxy(media.mojom.AudioInputStreamClientRemote),
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'observer', 12,
        0,
        mojo.internal.InterfaceProxy(media.mojom.AudioInputStreamObserverRemote),
        null,
        true /* nullable */),
      mojo.internal.StructField(
        'log', 20,
        0,
        mojo.internal.InterfaceProxy(media.mojom.AudioLogRemote),
        null,
        true /* nullable */),
      mojo.internal.StructField(
        'deviceId', 32,
        0,
        mojo.internal.String,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'params', 40,
        0,
        media.mojom.AudioParametersSpec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'sharedMemoryCount', 28,
        0,
        mojo.internal.Uint32,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'enableAgc', 48,
        0,
        mojo.internal.Bool,
        false,
        false /* nullable */),
      mojo.internal.StructField(
        'keyPressCountBuffer', 56,
        0,
        mojoBase.mojom.ReadOnlySharedMemoryRegionSpec.$,
        null,
        true /* nullable */),
      mojo.internal.StructField(
        'processingConfig', 64,
        0,
        media.mojom.AudioProcessingConfigSpec.$,
        null,
        true /* nullable */),
    ],
    [[0, 80],]);





/** @record */
media.mojom.AudioStreamFactory_CreateInputStream_Params = class {
  constructor() {
    /** @export { !media.mojom.AudioInputStreamPendingReceiver } */
    this.stream;
    /** @export { !media.mojom.AudioInputStreamClientRemote } */
    this.client;
    /** @export { (media.mojom.AudioInputStreamObserverRemote|undefined) } */
    this.observer;
    /** @export { (media.mojom.AudioLogRemote|undefined) } */
    this.log;
    /** @export { !number } */
    this.sharedMemoryCount;
    /** @export { !string } */
    this.deviceId;
    /** @export { !media.mojom.AudioParameters } */
    this.params;
    /** @export { !boolean } */
    this.enableAgc;
    /** @export { (mojoBase.mojom.ReadOnlySharedMemoryRegion|undefined) } */
    this.keyPressCountBuffer;
    /** @export { (media.mojom.AudioProcessingConfig|undefined) } */
    this.processingConfig;
  }
};




mojo.internal.Struct(
    media.mojom.AudioStreamFactory_CreateInputStream_ResponseParamsSpec.$,
    'AudioStreamFactory_CreateInputStream_ResponseParams',
    [
      mojo.internal.StructField(
        'dataPipe', 0,
        0,
        media.mojom.ReadOnlyAudioDataPipeSpec.$,
        null,
        true /* nullable */),
      mojo.internal.StructField(
        'initiallyMuted', 8,
        0,
        mojo.internal.Bool,
        false,
        false /* nullable */),
      mojo.internal.StructField(
        'streamId', 16,
        0,
        mojoBase.mojom.UnguessableTokenSpec.$,
        null,
        true /* nullable */),
    ],
    [[0, 32],]);





/** @record */
media.mojom.AudioStreamFactory_CreateInputStream_ResponseParams = class {
  constructor() {
    /** @export { (media.mojom.ReadOnlyAudioDataPipe|undefined) } */
    this.dataPipe;
    /** @export { !boolean } */
    this.initiallyMuted;
    /** @export { (mojoBase.mojom.UnguessableToken|undefined) } */
    this.streamId;
  }
};




mojo.internal.Struct(
    media.mojom.AudioStreamFactory_AssociateInputAndOutputForAec_ParamsSpec.$,
    'AudioStreamFactory_AssociateInputAndOutputForAec_Params',
    [
      mojo.internal.StructField(
        'inputStreamId', 0,
        0,
        mojoBase.mojom.UnguessableTokenSpec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'outputDeviceId', 8,
        0,
        mojo.internal.String,
        null,
        false /* nullable */),
    ],
    [[0, 24],]);





/** @record */
media.mojom.AudioStreamFactory_AssociateInputAndOutputForAec_Params = class {
  constructor() {
    /** @export { !mojoBase.mojom.UnguessableToken } */
    this.inputStreamId;
    /** @export { !string } */
    this.outputDeviceId;
  }
};




mojo.internal.Struct(
    media.mojom.AudioStreamFactory_CreateOutputStream_ParamsSpec.$,
    'AudioStreamFactory_CreateOutputStream_Params',
    [
      mojo.internal.StructField(
        'stream', 0,
        0,
        mojo.internal.InterfaceRequest(media.mojom.AudioOutputStreamPendingReceiver),
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'observer', 4,
        0,
        mojo.internal.AssociatedInterfaceProxy(media.mojom.AudioOutputStreamObserverRemote),
        null,
        true /* nullable */),
      mojo.internal.StructField(
        'log', 12,
        0,
        mojo.internal.InterfaceProxy(media.mojom.AudioLogRemote),
        null,
        true /* nullable */),
      mojo.internal.StructField(
        'deviceId', 24,
        0,
        mojo.internal.String,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'params', 32,
        0,
        media.mojom.AudioParametersSpec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'groupId', 40,
        0,
        mojoBase.mojom.UnguessableTokenSpec.$,
        null,
        false /* nullable */),
    ],
    [[0, 56],]);





/** @record */
media.mojom.AudioStreamFactory_CreateOutputStream_Params = class {
  constructor() {
    /** @export { !media.mojom.AudioOutputStreamPendingReceiver } */
    this.stream;
    /** @export { (Object|undefined) } */
    this.observer;
    /** @export { (media.mojom.AudioLogRemote|undefined) } */
    this.log;
    /** @export { !string } */
    this.deviceId;
    /** @export { !media.mojom.AudioParameters } */
    this.params;
    /** @export { !mojoBase.mojom.UnguessableToken } */
    this.groupId;
  }
};




mojo.internal.Struct(
    media.mojom.AudioStreamFactory_CreateOutputStream_ResponseParamsSpec.$,
    'AudioStreamFactory_CreateOutputStream_ResponseParams',
    [
      mojo.internal.StructField(
        'dataPipe', 0,
        0,
        media.mojom.ReadWriteAudioDataPipeSpec.$,
        null,
        true /* nullable */),
    ],
    [[0, 16],]);





/** @record */
media.mojom.AudioStreamFactory_CreateOutputStream_ResponseParams = class {
  constructor() {
    /** @export { (media.mojom.ReadWriteAudioDataPipe|undefined) } */
    this.dataPipe;
  }
};




mojo.internal.Struct(
    media.mojom.AudioStreamFactory_BindMuter_ParamsSpec.$,
    'AudioStreamFactory_BindMuter_Params',
    [
      mojo.internal.StructField(
        'receiver', 0,
        0,
        mojo.internal.AssociatedInterfaceRequest(media.mojom.LocalMuterPendingReceiver),
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'groupId', 8,
        0,
        mojoBase.mojom.UnguessableTokenSpec.$,
        null,
        false /* nullable */),
    ],
    [[0, 24],]);





/** @record */
media.mojom.AudioStreamFactory_BindMuter_Params = class {
  constructor() {
    /** @export { !Object } */
    this.receiver;
    /** @export { !mojoBase.mojom.UnguessableToken } */
    this.groupId;
  }
};




mojo.internal.Struct(
    media.mojom.AudioStreamFactory_CreateLoopbackStream_ParamsSpec.$,
    'AudioStreamFactory_CreateLoopbackStream_Params',
    [
      mojo.internal.StructField(
        'receiver', 0,
        0,
        mojo.internal.InterfaceRequest(media.mojom.AudioInputStreamPendingReceiver),
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'client', 4,
        0,
        mojo.internal.InterfaceProxy(media.mojom.AudioInputStreamClientRemote),
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'observer', 12,
        0,
        mojo.internal.InterfaceProxy(media.mojom.AudioInputStreamObserverRemote),
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'params', 24,
        0,
        media.mojom.AudioParametersSpec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'sharedMemoryCount', 20,
        0,
        mojo.internal.Uint32,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'groupId', 32,
        0,
        mojoBase.mojom.UnguessableTokenSpec.$,
        null,
        false /* nullable */),
    ],
    [[0, 48],]);





/** @record */
media.mojom.AudioStreamFactory_CreateLoopbackStream_Params = class {
  constructor() {
    /** @export { !media.mojom.AudioInputStreamPendingReceiver } */
    this.receiver;
    /** @export { !media.mojom.AudioInputStreamClientRemote } */
    this.client;
    /** @export { !media.mojom.AudioInputStreamObserverRemote } */
    this.observer;
    /** @export { !number } */
    this.sharedMemoryCount;
    /** @export { !media.mojom.AudioParameters } */
    this.params;
    /** @export { !mojoBase.mojom.UnguessableToken } */
    this.groupId;
  }
};




mojo.internal.Struct(
    media.mojom.AudioStreamFactory_CreateLoopbackStream_ResponseParamsSpec.$,
    'AudioStreamFactory_CreateLoopbackStream_ResponseParams',
    [
      mojo.internal.StructField(
        'dataPipe', 0,
        0,
        media.mojom.ReadOnlyAudioDataPipeSpec.$,
        null,
        true /* nullable */),
    ],
    [[0, 16],]);





/** @record */
media.mojom.AudioStreamFactory_CreateLoopbackStream_ResponseParams = class {
  constructor() {
    /** @export { (media.mojom.ReadOnlyAudioDataPipe|undefined) } */
    this.dataPipe;
  }
};


