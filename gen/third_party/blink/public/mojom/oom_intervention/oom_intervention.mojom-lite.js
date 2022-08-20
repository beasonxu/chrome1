// third_party/blink/public/mojom/oom_intervention/oom_intervention.mojom-lite.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
'use strict';


mojo.internal.exportModule('blink.mojom');








/**
 * @implements {mojo.internal.interfaceSupport.PendingReceiver}
 * @export
 */
blink.mojom.OomInterventionHostPendingReceiver = class {
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
        blink.mojom.OomInterventionHost.$interfaceName,
        scope);
  }
};



/**
 * @export
 * @implements { blink.mojom.OomInterventionHostInterface }
 */
blink.mojom.OomInterventionHostRemote = class {
  /** @param {MojoHandle|mojo.internal.interfaceSupport.Endpoint=} handle */
  constructor(handle = undefined) {
    /**
     * @private {!mojo.internal.interfaceSupport.InterfaceRemoteBase<!blink.mojom.OomInterventionHostPendingReceiver>}
     */
    this.proxy =
        new mojo.internal.interfaceSupport.InterfaceRemoteBase(
          blink.mojom.OomInterventionHostPendingReceiver,
          handle);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper<!blink.mojom.OomInterventionHostPendingReceiver>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper(this.proxy);

    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.proxy.getConnectionErrorEventRouter();
  }

  
  /**
   */

  onHighMemoryUsage() {
    this.proxy.sendMessage(
        0,
        blink.mojom.OomInterventionHost_OnHighMemoryUsage_ParamsSpec.$,
        null,
        [
        ]);
  }
};

/**
 * An object which receives request messages for the OomInterventionHost
 * mojom interface. Must be constructed over an object which implements that
 * interface.
 *
 * @export
 */
blink.mojom.OomInterventionHostReceiver = class {
  /**
   * @param {!blink.mojom.OomInterventionHostInterface } impl
   */
  constructor(impl) {
    /** @private {!mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal<!blink.mojom.OomInterventionHostRemote>} */
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
        blink.mojom.OomInterventionHostRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!blink.mojom.OomInterventionHostRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);


    this.helper_internal_.registerHandler(
        0,
        blink.mojom.OomInterventionHost_OnHighMemoryUsage_ParamsSpec.$,
        null,
        impl.onHighMemoryUsage.bind(impl));
    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.helper_internal_.getConnectionErrorEventRouter();
  }
};

/**
 *  @export
 */
blink.mojom.OomInterventionHost = class {
  /**
   * @return {!string}
   */
  static get $interfaceName() {
    return "blink.mojom.OomInterventionHost";
  }

  /**
   * Returns a remote for this interface which sends messages to the browser.
   * The browser must have an interface request binder registered for this
   * interface and accessible to the calling document's frame.
   *
   * @return {!blink.mojom.OomInterventionHostRemote}
   * @export
   */
  static getRemote() {
    let remote = new blink.mojom.OomInterventionHostRemote;
    remote.$.bindNewPipeAndPassReceiver().bindInBrowser();
    return remote;
  }
};


/**
 * An object which receives request messages for the OomInterventionHost
 * mojom interface and dispatches them as callbacks. One callback receiver exists
 * on this object for each message defined in the mojom interface, and each
 * receiver can have any number of listeners added to it.
 *
 * @export
 */
blink.mojom.OomInterventionHostCallbackRouter = class {
  constructor() {
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
      blink.mojom.OomInterventionHostRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!blink.mojom.OomInterventionHostRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);

    this.router_ = new mojo.internal.interfaceSupport.CallbackRouter;

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.onHighMemoryUsage =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        0,
        blink.mojom.OomInterventionHost_OnHighMemoryUsage_ParamsSpec.$,
        null,
        this.onHighMemoryUsage.createReceiverHandler(false /* expectsResponse */));
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
blink.mojom.OomInterventionPendingReceiver = class {
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
        blink.mojom.OomIntervention.$interfaceName,
        scope);
  }
};



/**
 * @export
 * @implements { blink.mojom.OomInterventionInterface }
 */
blink.mojom.OomInterventionRemote = class {
  /** @param {MojoHandle|mojo.internal.interfaceSupport.Endpoint=} handle */
  constructor(handle = undefined) {
    /**
     * @private {!mojo.internal.interfaceSupport.InterfaceRemoteBase<!blink.mojom.OomInterventionPendingReceiver>}
     */
    this.proxy =
        new mojo.internal.interfaceSupport.InterfaceRemoteBase(
          blink.mojom.OomInterventionPendingReceiver,
          handle);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper<!blink.mojom.OomInterventionPendingReceiver>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper(this.proxy);

    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.proxy.getConnectionErrorEventRouter();
  }

  
  /**
   * @param { !blink.mojom.OomInterventionHostRemote } host
   * @param { !blink.mojom.DetectionArgs } detectionArgs
   * @param { !boolean } rendererPauseEnabled
   * @param { !boolean } navigateAdsEnabled
   * @param { !boolean } purgeV8MemoryEnabled
   */

  startDetection(
      host,
      detectionArgs,
      rendererPauseEnabled,
      navigateAdsEnabled,
      purgeV8MemoryEnabled) {
    this.proxy.sendMessage(
        0,
        blink.mojom.OomIntervention_StartDetection_ParamsSpec.$,
        null,
        [
          host,
          detectionArgs,
          rendererPauseEnabled,
          navigateAdsEnabled,
          purgeV8MemoryEnabled
        ]);
  }
};

/**
 * An object which receives request messages for the OomIntervention
 * mojom interface. Must be constructed over an object which implements that
 * interface.
 *
 * @export
 */
blink.mojom.OomInterventionReceiver = class {
  /**
   * @param {!blink.mojom.OomInterventionInterface } impl
   */
  constructor(impl) {
    /** @private {!mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal<!blink.mojom.OomInterventionRemote>} */
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
        blink.mojom.OomInterventionRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!blink.mojom.OomInterventionRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);


    this.helper_internal_.registerHandler(
        0,
        blink.mojom.OomIntervention_StartDetection_ParamsSpec.$,
        null,
        impl.startDetection.bind(impl));
    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.helper_internal_.getConnectionErrorEventRouter();
  }
};

/**
 *  @export
 */
blink.mojom.OomIntervention = class {
  /**
   * @return {!string}
   */
  static get $interfaceName() {
    return "blink.mojom.OomIntervention";
  }

  /**
   * Returns a remote for this interface which sends messages to the browser.
   * The browser must have an interface request binder registered for this
   * interface and accessible to the calling document's frame.
   *
   * @return {!blink.mojom.OomInterventionRemote}
   * @export
   */
  static getRemote() {
    let remote = new blink.mojom.OomInterventionRemote;
    remote.$.bindNewPipeAndPassReceiver().bindInBrowser();
    return remote;
  }
};


/**
 * An object which receives request messages for the OomIntervention
 * mojom interface and dispatches them as callbacks. One callback receiver exists
 * on this object for each message defined in the mojom interface, and each
 * receiver can have any number of listeners added to it.
 *
 * @export
 */
blink.mojom.OomInterventionCallbackRouter = class {
  constructor() {
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
      blink.mojom.OomInterventionRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!blink.mojom.OomInterventionRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);

    this.router_ = new mojo.internal.interfaceSupport.CallbackRouter;

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.startDetection =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        0,
        blink.mojom.OomIntervention_StartDetection_ParamsSpec.$,
        null,
        this.startDetection.createReceiverHandler(false /* expectsResponse */));
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
blink.mojom.DetectionArgsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
blink.mojom.OomInterventionHost_OnHighMemoryUsage_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
blink.mojom.OomIntervention_StartDetection_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };




mojo.internal.Struct(
    blink.mojom.DetectionArgsSpec.$,
    'DetectionArgs',
    [
      mojo.internal.StructField(
        'blinkWorkloadThreshold', 0,
        0,
        mojo.internal.Uint64,
        BigInt(0),
        false /* nullable */),
      mojo.internal.StructField(
        'privateFootprintThreshold', 8,
        0,
        mojo.internal.Uint64,
        BigInt(0),
        false /* nullable */),
      mojo.internal.StructField(
        'swapThreshold', 16,
        0,
        mojo.internal.Uint64,
        BigInt(0),
        false /* nullable */),
      mojo.internal.StructField(
        'virtualMemoryThresold', 24,
        0,
        mojo.internal.Uint64,
        BigInt(0),
        false /* nullable */),
    ],
    [[0, 40],]);





/** @record */
blink.mojom.DetectionArgs = class {
  constructor() {
    /** @export { !bigint } */
    this.blinkWorkloadThreshold;
    /** @export { !bigint } */
    this.privateFootprintThreshold;
    /** @export { !bigint } */
    this.swapThreshold;
    /** @export { !bigint } */
    this.virtualMemoryThresold;
  }
};




mojo.internal.Struct(
    blink.mojom.OomInterventionHost_OnHighMemoryUsage_ParamsSpec.$,
    'OomInterventionHost_OnHighMemoryUsage_Params',
    [
    ],
    [[0, 8],]);





/** @record */
blink.mojom.OomInterventionHost_OnHighMemoryUsage_Params = class {
  constructor() {
  }
};




mojo.internal.Struct(
    blink.mojom.OomIntervention_StartDetection_ParamsSpec.$,
    'OomIntervention_StartDetection_Params',
    [
      mojo.internal.StructField(
        'host', 0,
        0,
        mojo.internal.InterfaceProxy(blink.mojom.OomInterventionHostRemote),
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'detectionArgs', 8,
        0,
        blink.mojom.DetectionArgsSpec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'rendererPauseEnabled', 16,
        0,
        mojo.internal.Bool,
        false,
        false /* nullable */),
      mojo.internal.StructField(
        'navigateAdsEnabled', 16,
        1,
        mojo.internal.Bool,
        false,
        false /* nullable */),
      mojo.internal.StructField(
        'purgeV8MemoryEnabled', 16,
        2,
        mojo.internal.Bool,
        false,
        false /* nullable */),
    ],
    [[0, 32],]);





/** @record */
blink.mojom.OomIntervention_StartDetection_Params = class {
  constructor() {
    /** @export { !blink.mojom.OomInterventionHostRemote } */
    this.host;
    /** @export { !blink.mojom.DetectionArgs } */
    this.detectionArgs;
    /** @export { !boolean } */
    this.rendererPauseEnabled;
    /** @export { !boolean } */
    this.navigateAdsEnabled;
    /** @export { !boolean } */
    this.purgeV8MemoryEnabled;
  }
};


