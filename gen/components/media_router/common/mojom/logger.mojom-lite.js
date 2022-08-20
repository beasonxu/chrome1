// components/media_router/common/mojom/logger.mojom-lite.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
'use strict';


mojo.internal.exportModule('mediaRouter.mojom');





/**
 * @const { {$: !mojo.internal.MojomType} }
 * @export
 */
mediaRouter.mojom.LogCategorySpec = { $: mojo.internal.Enum() };

/**
 * @enum {number}
 * @export
 */
mediaRouter.mojom.LogCategory = {
  
  kDiscovery: 0,
  kRoute: 1,
  kMirroring: 2,
  kUi: 3,
  MIN_VALUE: 0,
  MAX_VALUE: 3,
};





/**
 * @implements {mojo.internal.interfaceSupport.PendingReceiver}
 * @export
 */
mediaRouter.mojom.LoggerPendingReceiver = class {
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
        mediaRouter.mojom.Logger.$interfaceName,
        scope);
  }
};



/**
 * @export
 * @implements { mediaRouter.mojom.LoggerInterface }
 */
mediaRouter.mojom.LoggerRemote = class {
  /** @param {MojoHandle|mojo.internal.interfaceSupport.Endpoint=} handle */
  constructor(handle = undefined) {
    /**
     * @private {!mojo.internal.interfaceSupport.InterfaceRemoteBase<!mediaRouter.mojom.LoggerPendingReceiver>}
     */
    this.proxy =
        new mojo.internal.interfaceSupport.InterfaceRemoteBase(
          mediaRouter.mojom.LoggerPendingReceiver,
          handle);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper<!mediaRouter.mojom.LoggerPendingReceiver>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper(this.proxy);

    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.proxy.getConnectionErrorEventRouter();
  }

  
  /**
   * @param { !mediaRouter.mojom.LogCategory } category
   * @param { !string } component
   * @param { !string } message
   * @param { !string } sinkId
   * @param { !string } mediaSource
   * @param { !string } sessionId
   */

  logInfo(
      category,
      component,
      message,
      sinkId,
      mediaSource,
      sessionId) {
    this.proxy.sendMessage(
        0,
        mediaRouter.mojom.Logger_LogInfo_ParamsSpec.$,
        null,
        [
          category,
          component,
          message,
          sinkId,
          mediaSource,
          sessionId
        ]);
  }

  
  /**
   * @param { !mediaRouter.mojom.LogCategory } category
   * @param { !string } component
   * @param { !string } message
   * @param { !string } sinkId
   * @param { !string } mediaSource
   * @param { !string } sessionId
   */

  logWarning(
      category,
      component,
      message,
      sinkId,
      mediaSource,
      sessionId) {
    this.proxy.sendMessage(
        1,
        mediaRouter.mojom.Logger_LogWarning_ParamsSpec.$,
        null,
        [
          category,
          component,
          message,
          sinkId,
          mediaSource,
          sessionId
        ]);
  }

  
  /**
   * @param { !mediaRouter.mojom.LogCategory } category
   * @param { !string } component
   * @param { !string } message
   * @param { !string } sinkId
   * @param { !string } mediaSource
   * @param { !string } sessionId
   */

  logError(
      category,
      component,
      message,
      sinkId,
      mediaSource,
      sessionId) {
    this.proxy.sendMessage(
        2,
        mediaRouter.mojom.Logger_LogError_ParamsSpec.$,
        null,
        [
          category,
          component,
          message,
          sinkId,
          mediaSource,
          sessionId
        ]);
  }

  
  /**
   * @param { !mediaRouter.mojom.LoggerPendingReceiver } receiver
   */

  bindReceiver(
      receiver) {
    this.proxy.sendMessage(
        3,
        mediaRouter.mojom.Logger_BindReceiver_ParamsSpec.$,
        null,
        [
          receiver
        ]);
  }
};

/**
 * An object which receives request messages for the Logger
 * mojom interface. Must be constructed over an object which implements that
 * interface.
 *
 * @export
 */
mediaRouter.mojom.LoggerReceiver = class {
  /**
   * @param {!mediaRouter.mojom.LoggerInterface } impl
   */
  constructor(impl) {
    /** @private {!mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal<!mediaRouter.mojom.LoggerRemote>} */
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
        mediaRouter.mojom.LoggerRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!mediaRouter.mojom.LoggerRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);


    this.helper_internal_.registerHandler(
        0,
        mediaRouter.mojom.Logger_LogInfo_ParamsSpec.$,
        null,
        impl.logInfo.bind(impl));
    this.helper_internal_.registerHandler(
        1,
        mediaRouter.mojom.Logger_LogWarning_ParamsSpec.$,
        null,
        impl.logWarning.bind(impl));
    this.helper_internal_.registerHandler(
        2,
        mediaRouter.mojom.Logger_LogError_ParamsSpec.$,
        null,
        impl.logError.bind(impl));
    this.helper_internal_.registerHandler(
        3,
        mediaRouter.mojom.Logger_BindReceiver_ParamsSpec.$,
        null,
        impl.bindReceiver.bind(impl));
    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.helper_internal_.getConnectionErrorEventRouter();
  }
};

/**
 *  @export
 */
mediaRouter.mojom.Logger = class {
  /**
   * @return {!string}
   */
  static get $interfaceName() {
    return "media_router.mojom.Logger";
  }

  /**
   * Returns a remote for this interface which sends messages to the browser.
   * The browser must have an interface request binder registered for this
   * interface and accessible to the calling document's frame.
   *
   * @return {!mediaRouter.mojom.LoggerRemote}
   * @export
   */
  static getRemote() {
    let remote = new mediaRouter.mojom.LoggerRemote;
    remote.$.bindNewPipeAndPassReceiver().bindInBrowser();
    return remote;
  }
};


/**
 * An object which receives request messages for the Logger
 * mojom interface and dispatches them as callbacks. One callback receiver exists
 * on this object for each message defined in the mojom interface, and each
 * receiver can have any number of listeners added to it.
 *
 * @export
 */
mediaRouter.mojom.LoggerCallbackRouter = class {
  constructor() {
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
      mediaRouter.mojom.LoggerRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!mediaRouter.mojom.LoggerRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);

    this.router_ = new mojo.internal.interfaceSupport.CallbackRouter;

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.logInfo =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        0,
        mediaRouter.mojom.Logger_LogInfo_ParamsSpec.$,
        null,
        this.logInfo.createReceiverHandler(false /* expectsResponse */));
    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.logWarning =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        1,
        mediaRouter.mojom.Logger_LogWarning_ParamsSpec.$,
        null,
        this.logWarning.createReceiverHandler(false /* expectsResponse */));
    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.logError =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        2,
        mediaRouter.mojom.Logger_LogError_ParamsSpec.$,
        null,
        this.logError.createReceiverHandler(false /* expectsResponse */));
    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.bindReceiver =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        3,
        mediaRouter.mojom.Logger_BindReceiver_ParamsSpec.$,
        null,
        this.bindReceiver.createReceiverHandler(false /* expectsResponse */));
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
mediaRouter.mojom.Logger_LogInfo_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
mediaRouter.mojom.Logger_LogWarning_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
mediaRouter.mojom.Logger_LogError_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
mediaRouter.mojom.Logger_BindReceiver_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };




mojo.internal.Struct(
    mediaRouter.mojom.Logger_LogInfo_ParamsSpec.$,
    'Logger_LogInfo_Params',
    [
      mojo.internal.StructField(
        'category', 0,
        0,
        mediaRouter.mojom.LogCategorySpec.$,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'component', 8,
        0,
        mojo.internal.String,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'message', 16,
        0,
        mojo.internal.String,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'sinkId', 24,
        0,
        mojo.internal.String,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'mediaSource', 32,
        0,
        mojo.internal.String,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'sessionId', 40,
        0,
        mojo.internal.String,
        null,
        false /* nullable */),
    ],
    [[0, 56],]);





/** @record */
mediaRouter.mojom.Logger_LogInfo_Params = class {
  constructor() {
    /** @export { !mediaRouter.mojom.LogCategory } */
    this.category;
    /** @export { !string } */
    this.component;
    /** @export { !string } */
    this.message;
    /** @export { !string } */
    this.sinkId;
    /** @export { !string } */
    this.mediaSource;
    /** @export { !string } */
    this.sessionId;
  }
};




mojo.internal.Struct(
    mediaRouter.mojom.Logger_LogWarning_ParamsSpec.$,
    'Logger_LogWarning_Params',
    [
      mojo.internal.StructField(
        'category', 0,
        0,
        mediaRouter.mojom.LogCategorySpec.$,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'component', 8,
        0,
        mojo.internal.String,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'message', 16,
        0,
        mojo.internal.String,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'sinkId', 24,
        0,
        mojo.internal.String,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'mediaSource', 32,
        0,
        mojo.internal.String,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'sessionId', 40,
        0,
        mojo.internal.String,
        null,
        false /* nullable */),
    ],
    [[0, 56],]);





/** @record */
mediaRouter.mojom.Logger_LogWarning_Params = class {
  constructor() {
    /** @export { !mediaRouter.mojom.LogCategory } */
    this.category;
    /** @export { !string } */
    this.component;
    /** @export { !string } */
    this.message;
    /** @export { !string } */
    this.sinkId;
    /** @export { !string } */
    this.mediaSource;
    /** @export { !string } */
    this.sessionId;
  }
};




mojo.internal.Struct(
    mediaRouter.mojom.Logger_LogError_ParamsSpec.$,
    'Logger_LogError_Params',
    [
      mojo.internal.StructField(
        'category', 0,
        0,
        mediaRouter.mojom.LogCategorySpec.$,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'component', 8,
        0,
        mojo.internal.String,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'message', 16,
        0,
        mojo.internal.String,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'sinkId', 24,
        0,
        mojo.internal.String,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'mediaSource', 32,
        0,
        mojo.internal.String,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'sessionId', 40,
        0,
        mojo.internal.String,
        null,
        false /* nullable */),
    ],
    [[0, 56],]);





/** @record */
mediaRouter.mojom.Logger_LogError_Params = class {
  constructor() {
    /** @export { !mediaRouter.mojom.LogCategory } */
    this.category;
    /** @export { !string } */
    this.component;
    /** @export { !string } */
    this.message;
    /** @export { !string } */
    this.sinkId;
    /** @export { !string } */
    this.mediaSource;
    /** @export { !string } */
    this.sessionId;
  }
};




mojo.internal.Struct(
    mediaRouter.mojom.Logger_BindReceiver_ParamsSpec.$,
    'Logger_BindReceiver_Params',
    [
      mojo.internal.StructField(
        'receiver', 0,
        0,
        mojo.internal.InterfaceRequest(mediaRouter.mojom.LoggerPendingReceiver),
        null,
        false /* nullable */),
    ],
    [[0, 16],]);





/** @record */
mediaRouter.mojom.Logger_BindReceiver_Params = class {
  constructor() {
    /** @export { !mediaRouter.mojom.LoggerPendingReceiver } */
    this.receiver;
  }
};


