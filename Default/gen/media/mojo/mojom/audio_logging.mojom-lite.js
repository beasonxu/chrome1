// media/mojo/mojom/audio_logging.mojom-lite.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
'use strict';


mojo.internal.exportModule('media.mojom');





/**
 * @const { {$: !mojo.internal.MojomType} }
 * @export
 */
media.mojom.AudioLogComponentSpec = { $: mojo.internal.Enum() };

/**
 * @enum {number}
 * @export
 */
media.mojom.AudioLogComponent = {
  
  kInputController: 0,
  kOutputController: 1,
  kOutputStream: 2,
  MIN_VALUE: 0,
  MAX_VALUE: 2,
};





/**
 * @implements {mojo.internal.interfaceSupport.PendingReceiver}
 * @export
 */
media.mojom.AudioLogPendingReceiver = class {
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
        media.mojom.AudioLog.$interfaceName,
        scope);
  }
};



/**
 * @export
 * @implements { media.mojom.AudioLogInterface }
 */
media.mojom.AudioLogRemote = class {
  /** @param {MojoHandle|mojo.internal.interfaceSupport.Endpoint=} handle */
  constructor(handle = undefined) {
    /**
     * @private {!mojo.internal.interfaceSupport.InterfaceRemoteBase<!media.mojom.AudioLogPendingReceiver>}
     */
    this.proxy =
        new mojo.internal.interfaceSupport.InterfaceRemoteBase(
          media.mojom.AudioLogPendingReceiver,
          handle);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper<!media.mojom.AudioLogPendingReceiver>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper(this.proxy);

    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.proxy.getConnectionErrorEventRouter();
  }

  
  /**
   * @param { !media.mojom.AudioParameters } params
   * @param { !string } deviceId
   */

  onCreated(
      params,
      deviceId) {
    this.proxy.sendMessage(
        0,
        media.mojom.AudioLog_OnCreated_ParamsSpec.$,
        null,
        [
          params,
          deviceId
        ]);
  }

  
  /**
   */

  onStarted() {
    this.proxy.sendMessage(
        1,
        media.mojom.AudioLog_OnStarted_ParamsSpec.$,
        null,
        [
        ]);
  }

  
  /**
   */

  onStopped() {
    this.proxy.sendMessage(
        2,
        media.mojom.AudioLog_OnStopped_ParamsSpec.$,
        null,
        [
        ]);
  }

  
  /**
   */

  onClosed() {
    this.proxy.sendMessage(
        3,
        media.mojom.AudioLog_OnClosed_ParamsSpec.$,
        null,
        [
        ]);
  }

  
  /**
   */

  onError() {
    this.proxy.sendMessage(
        4,
        media.mojom.AudioLog_OnError_ParamsSpec.$,
        null,
        [
        ]);
  }

  
  /**
   * @param { !number } volume
   */

  onSetVolume(
      volume) {
    this.proxy.sendMessage(
        5,
        media.mojom.AudioLog_OnSetVolume_ParamsSpec.$,
        null,
        [
          volume
        ]);
  }

  
  /**
   * @param { !string } message
   */

  onProcessingStateChanged(
      message) {
    this.proxy.sendMessage(
        6,
        media.mojom.AudioLog_OnProcessingStateChanged_ParamsSpec.$,
        null,
        [
          message
        ]);
  }

  
  /**
   * @param { !string } message
   */

  onLogMessage(
      message) {
    this.proxy.sendMessage(
        7,
        media.mojom.AudioLog_OnLogMessage_ParamsSpec.$,
        null,
        [
          message
        ]);
  }
};

/**
 * An object which receives request messages for the AudioLog
 * mojom interface. Must be constructed over an object which implements that
 * interface.
 *
 * @export
 */
media.mojom.AudioLogReceiver = class {
  /**
   * @param {!media.mojom.AudioLogInterface } impl
   */
  constructor(impl) {
    /** @private {!mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal<!media.mojom.AudioLogRemote>} */
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
        media.mojom.AudioLogRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!media.mojom.AudioLogRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);


    this.helper_internal_.registerHandler(
        0,
        media.mojom.AudioLog_OnCreated_ParamsSpec.$,
        null,
        impl.onCreated.bind(impl));
    this.helper_internal_.registerHandler(
        1,
        media.mojom.AudioLog_OnStarted_ParamsSpec.$,
        null,
        impl.onStarted.bind(impl));
    this.helper_internal_.registerHandler(
        2,
        media.mojom.AudioLog_OnStopped_ParamsSpec.$,
        null,
        impl.onStopped.bind(impl));
    this.helper_internal_.registerHandler(
        3,
        media.mojom.AudioLog_OnClosed_ParamsSpec.$,
        null,
        impl.onClosed.bind(impl));
    this.helper_internal_.registerHandler(
        4,
        media.mojom.AudioLog_OnError_ParamsSpec.$,
        null,
        impl.onError.bind(impl));
    this.helper_internal_.registerHandler(
        5,
        media.mojom.AudioLog_OnSetVolume_ParamsSpec.$,
        null,
        impl.onSetVolume.bind(impl));
    this.helper_internal_.registerHandler(
        6,
        media.mojom.AudioLog_OnProcessingStateChanged_ParamsSpec.$,
        null,
        impl.onProcessingStateChanged.bind(impl));
    this.helper_internal_.registerHandler(
        7,
        media.mojom.AudioLog_OnLogMessage_ParamsSpec.$,
        null,
        impl.onLogMessage.bind(impl));
    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.helper_internal_.getConnectionErrorEventRouter();
  }
};

/**
 *  @export
 */
media.mojom.AudioLog = class {
  /**
   * @return {!string}
   */
  static get $interfaceName() {
    return "media.mojom.AudioLog";
  }

  /**
   * Returns a remote for this interface which sends messages to the browser.
   * The browser must have an interface request binder registered for this
   * interface and accessible to the calling document's frame.
   *
   * @return {!media.mojom.AudioLogRemote}
   * @export
   */
  static getRemote() {
    let remote = new media.mojom.AudioLogRemote;
    remote.$.bindNewPipeAndPassReceiver().bindInBrowser();
    return remote;
  }
};


/**
 * An object which receives request messages for the AudioLog
 * mojom interface and dispatches them as callbacks. One callback receiver exists
 * on this object for each message defined in the mojom interface, and each
 * receiver can have any number of listeners added to it.
 *
 * @export
 */
media.mojom.AudioLogCallbackRouter = class {
  constructor() {
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
      media.mojom.AudioLogRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!media.mojom.AudioLogRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);

    this.router_ = new mojo.internal.interfaceSupport.CallbackRouter;

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.onCreated =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        0,
        media.mojom.AudioLog_OnCreated_ParamsSpec.$,
        null,
        this.onCreated.createReceiverHandler(false /* expectsResponse */));
    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.onStarted =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        1,
        media.mojom.AudioLog_OnStarted_ParamsSpec.$,
        null,
        this.onStarted.createReceiverHandler(false /* expectsResponse */));
    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.onStopped =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        2,
        media.mojom.AudioLog_OnStopped_ParamsSpec.$,
        null,
        this.onStopped.createReceiverHandler(false /* expectsResponse */));
    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.onClosed =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        3,
        media.mojom.AudioLog_OnClosed_ParamsSpec.$,
        null,
        this.onClosed.createReceiverHandler(false /* expectsResponse */));
    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.onError =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        4,
        media.mojom.AudioLog_OnError_ParamsSpec.$,
        null,
        this.onError.createReceiverHandler(false /* expectsResponse */));
    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.onSetVolume =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        5,
        media.mojom.AudioLog_OnSetVolume_ParamsSpec.$,
        null,
        this.onSetVolume.createReceiverHandler(false /* expectsResponse */));
    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.onProcessingStateChanged =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        6,
        media.mojom.AudioLog_OnProcessingStateChanged_ParamsSpec.$,
        null,
        this.onProcessingStateChanged.createReceiverHandler(false /* expectsResponse */));
    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.onLogMessage =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        7,
        media.mojom.AudioLog_OnLogMessage_ParamsSpec.$,
        null,
        this.onLogMessage.createReceiverHandler(false /* expectsResponse */));
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
media.mojom.AudioLogFactoryPendingReceiver = class {
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
        media.mojom.AudioLogFactory.$interfaceName,
        scope);
  }
};



/**
 * @export
 * @implements { media.mojom.AudioLogFactoryInterface }
 */
media.mojom.AudioLogFactoryRemote = class {
  /** @param {MojoHandle|mojo.internal.interfaceSupport.Endpoint=} handle */
  constructor(handle = undefined) {
    /**
     * @private {!mojo.internal.interfaceSupport.InterfaceRemoteBase<!media.mojom.AudioLogFactoryPendingReceiver>}
     */
    this.proxy =
        new mojo.internal.interfaceSupport.InterfaceRemoteBase(
          media.mojom.AudioLogFactoryPendingReceiver,
          handle);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper<!media.mojom.AudioLogFactoryPendingReceiver>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper(this.proxy);

    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.proxy.getConnectionErrorEventRouter();
  }

  
  /**
   * @param { !media.mojom.AudioLogComponent } component
   * @param { !number } componentId
   * @param { !media.mojom.AudioLogPendingReceiver } audioLogReceiver
   */

  createAudioLog(
      component,
      componentId,
      audioLogReceiver) {
    this.proxy.sendMessage(
        0,
        media.mojom.AudioLogFactory_CreateAudioLog_ParamsSpec.$,
        null,
        [
          component,
          componentId,
          audioLogReceiver
        ]);
  }
};

/**
 * An object which receives request messages for the AudioLogFactory
 * mojom interface. Must be constructed over an object which implements that
 * interface.
 *
 * @export
 */
media.mojom.AudioLogFactoryReceiver = class {
  /**
   * @param {!media.mojom.AudioLogFactoryInterface } impl
   */
  constructor(impl) {
    /** @private {!mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal<!media.mojom.AudioLogFactoryRemote>} */
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
        media.mojom.AudioLogFactoryRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!media.mojom.AudioLogFactoryRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);


    this.helper_internal_.registerHandler(
        0,
        media.mojom.AudioLogFactory_CreateAudioLog_ParamsSpec.$,
        null,
        impl.createAudioLog.bind(impl));
    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.helper_internal_.getConnectionErrorEventRouter();
  }
};

/**
 *  @export
 */
media.mojom.AudioLogFactory = class {
  /**
   * @return {!string}
   */
  static get $interfaceName() {
    return "media.mojom.AudioLogFactory";
  }

  /**
   * Returns a remote for this interface which sends messages to the browser.
   * The browser must have an interface request binder registered for this
   * interface and accessible to the calling document's frame.
   *
   * @return {!media.mojom.AudioLogFactoryRemote}
   * @export
   */
  static getRemote() {
    let remote = new media.mojom.AudioLogFactoryRemote;
    remote.$.bindNewPipeAndPassReceiver().bindInBrowser();
    return remote;
  }
};


/**
 * An object which receives request messages for the AudioLogFactory
 * mojom interface and dispatches them as callbacks. One callback receiver exists
 * on this object for each message defined in the mojom interface, and each
 * receiver can have any number of listeners added to it.
 *
 * @export
 */
media.mojom.AudioLogFactoryCallbackRouter = class {
  constructor() {
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
      media.mojom.AudioLogFactoryRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!media.mojom.AudioLogFactoryRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);

    this.router_ = new mojo.internal.interfaceSupport.CallbackRouter;

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.createAudioLog =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        0,
        media.mojom.AudioLogFactory_CreateAudioLog_ParamsSpec.$,
        null,
        this.createAudioLog.createReceiverHandler(false /* expectsResponse */));
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
media.mojom.AudioLog_OnCreated_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
media.mojom.AudioLog_OnStarted_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
media.mojom.AudioLog_OnStopped_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
media.mojom.AudioLog_OnClosed_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
media.mojom.AudioLog_OnError_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
media.mojom.AudioLog_OnSetVolume_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
media.mojom.AudioLog_OnProcessingStateChanged_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
media.mojom.AudioLog_OnLogMessage_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
media.mojom.AudioLogFactory_CreateAudioLog_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };




mojo.internal.Struct(
    media.mojom.AudioLog_OnCreated_ParamsSpec.$,
    'AudioLog_OnCreated_Params',
    [
      mojo.internal.StructField(
        'params', 0,
        0,
        media.mojom.AudioParametersSpec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'deviceId', 8,
        0,
        mojo.internal.String,
        null,
        false /* nullable */),
    ],
    [[0, 24],]);





/** @record */
media.mojom.AudioLog_OnCreated_Params = class {
  constructor() {
    /** @export { !media.mojom.AudioParameters } */
    this.params;
    /** @export { !string } */
    this.deviceId;
  }
};




mojo.internal.Struct(
    media.mojom.AudioLog_OnStarted_ParamsSpec.$,
    'AudioLog_OnStarted_Params',
    [
    ],
    [[0, 8],]);





/** @record */
media.mojom.AudioLog_OnStarted_Params = class {
  constructor() {
  }
};




mojo.internal.Struct(
    media.mojom.AudioLog_OnStopped_ParamsSpec.$,
    'AudioLog_OnStopped_Params',
    [
    ],
    [[0, 8],]);





/** @record */
media.mojom.AudioLog_OnStopped_Params = class {
  constructor() {
  }
};




mojo.internal.Struct(
    media.mojom.AudioLog_OnClosed_ParamsSpec.$,
    'AudioLog_OnClosed_Params',
    [
    ],
    [[0, 8],]);





/** @record */
media.mojom.AudioLog_OnClosed_Params = class {
  constructor() {
  }
};




mojo.internal.Struct(
    media.mojom.AudioLog_OnError_ParamsSpec.$,
    'AudioLog_OnError_Params',
    [
    ],
    [[0, 8],]);





/** @record */
media.mojom.AudioLog_OnError_Params = class {
  constructor() {
  }
};




mojo.internal.Struct(
    media.mojom.AudioLog_OnSetVolume_ParamsSpec.$,
    'AudioLog_OnSetVolume_Params',
    [
      mojo.internal.StructField(
        'volume', 0,
        0,
        mojo.internal.Double,
        0,
        false /* nullable */),
    ],
    [[0, 16],]);





/** @record */
media.mojom.AudioLog_OnSetVolume_Params = class {
  constructor() {
    /** @export { !number } */
    this.volume;
  }
};




mojo.internal.Struct(
    media.mojom.AudioLog_OnProcessingStateChanged_ParamsSpec.$,
    'AudioLog_OnProcessingStateChanged_Params',
    [
      mojo.internal.StructField(
        'message', 0,
        0,
        mojo.internal.String,
        null,
        false /* nullable */),
    ],
    [[0, 16],]);





/** @record */
media.mojom.AudioLog_OnProcessingStateChanged_Params = class {
  constructor() {
    /** @export { !string } */
    this.message;
  }
};




mojo.internal.Struct(
    media.mojom.AudioLog_OnLogMessage_ParamsSpec.$,
    'AudioLog_OnLogMessage_Params',
    [
      mojo.internal.StructField(
        'message', 0,
        0,
        mojo.internal.String,
        null,
        false /* nullable */),
    ],
    [[0, 16],]);





/** @record */
media.mojom.AudioLog_OnLogMessage_Params = class {
  constructor() {
    /** @export { !string } */
    this.message;
  }
};




mojo.internal.Struct(
    media.mojom.AudioLogFactory_CreateAudioLog_ParamsSpec.$,
    'AudioLogFactory_CreateAudioLog_Params',
    [
      mojo.internal.StructField(
        'component', 0,
        0,
        media.mojom.AudioLogComponentSpec.$,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'componentId', 4,
        0,
        mojo.internal.Int32,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'audioLogReceiver', 8,
        0,
        mojo.internal.InterfaceRequest(media.mojom.AudioLogPendingReceiver),
        null,
        false /* nullable */),
    ],
    [[0, 24],]);





/** @record */
media.mojom.AudioLogFactory_CreateAudioLog_Params = class {
  constructor() {
    /** @export { !media.mojom.AudioLogComponent } */
    this.component;
    /** @export { !number } */
    this.componentId;
    /** @export { !media.mojom.AudioLogPendingReceiver } */
    this.audioLogReceiver;
  }
};


