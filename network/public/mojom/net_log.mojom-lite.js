// services/network/public/mojom/net_log.mojom-lite.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
'use strict';


mojo.internal.exportModule('network.mojom');





/**
 * @const { {$: !mojo.internal.MojomType} }
 * @export
 */
network.mojom.NetLogCaptureModeSpec = { $: mojo.internal.Enum() };

/**
 * @enum {number}
 * @export
 */
network.mojom.NetLogCaptureMode = {
  
  DEFAULT: 0,
  INCLUDE_PRIVACY_INFO: 1,
  EVERYTHING: 2,
  MIN_VALUE: 0,
  MAX_VALUE: 2,
};


/**
 * @const { {$: !mojo.internal.MojomType} }
 * @export
 */
network.mojom.NetLogEventPhaseSpec = { $: mojo.internal.Enum() };

/**
 * @enum {number}
 * @export
 */
network.mojom.NetLogEventPhase = {
  
  BEGIN: 0,
  END: 1,
  NONE: 2,
  MIN_VALUE: 0,
  MAX_VALUE: 2,
};





/**
 * @implements {mojo.internal.interfaceSupport.PendingReceiver}
 * @export
 */
network.mojom.NetLogExporterPendingReceiver = class {
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
        network.mojom.NetLogExporter.$interfaceName,
        scope);
  }
};



/**
 * @export
 * @implements { network.mojom.NetLogExporterInterface }
 */
network.mojom.NetLogExporterRemote = class {
  /** @param {MojoHandle|mojo.internal.interfaceSupport.Endpoint=} handle */
  constructor(handle = undefined) {
    /**
     * @private {!mojo.internal.interfaceSupport.InterfaceRemoteBase<!network.mojom.NetLogExporterPendingReceiver>}
     */
    this.proxy =
        new mojo.internal.interfaceSupport.InterfaceRemoteBase(
          network.mojom.NetLogExporterPendingReceiver,
          handle);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper<!network.mojom.NetLogExporterPendingReceiver>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper(this.proxy);

    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.proxy.getConnectionErrorEventRouter();
  }

  
  /**
   * @param { !mojoBase.mojom.File } destination
   * @param { !mojoBase.mojom.DictionaryValue } extraConstants
   * @param { !network.mojom.NetLogCaptureMode } captureMode
   * @param { !bigint } maxFileSize
   * @return {!Promise<{
        netError: !number,
   *  }>}
   */

  start(
      destination,
      extraConstants,
      captureMode,
      maxFileSize) {
    return this.proxy.sendMessage(
        0,
        network.mojom.NetLogExporter_Start_ParamsSpec.$,
        network.mojom.NetLogExporter_Start_ResponseParamsSpec.$,
        [
          destination,
          extraConstants,
          captureMode,
          maxFileSize
        ]);
  }

  
  /**
   * @param { !mojoBase.mojom.DictionaryValue } polledValues
   * @return {!Promise<{
        netError: !number,
   *  }>}
   */

  stop(
      polledValues) {
    return this.proxy.sendMessage(
        1,
        network.mojom.NetLogExporter_Stop_ParamsSpec.$,
        network.mojom.NetLogExporter_Stop_ResponseParamsSpec.$,
        [
          polledValues
        ]);
  }
};

/**
 * An object which receives request messages for the NetLogExporter
 * mojom interface. Must be constructed over an object which implements that
 * interface.
 *
 * @export
 */
network.mojom.NetLogExporterReceiver = class {
  /**
   * @param {!network.mojom.NetLogExporterInterface } impl
   */
  constructor(impl) {
    /** @private {!mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal<!network.mojom.NetLogExporterRemote>} */
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
        network.mojom.NetLogExporterRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!network.mojom.NetLogExporterRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);


    this.helper_internal_.registerHandler(
        0,
        network.mojom.NetLogExporter_Start_ParamsSpec.$,
        network.mojom.NetLogExporter_Start_ResponseParamsSpec.$,
        impl.start.bind(impl));
    this.helper_internal_.registerHandler(
        1,
        network.mojom.NetLogExporter_Stop_ParamsSpec.$,
        network.mojom.NetLogExporter_Stop_ResponseParamsSpec.$,
        impl.stop.bind(impl));
    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.helper_internal_.getConnectionErrorEventRouter();
  }
};

/**
 *  @export
 */
network.mojom.NetLogExporter = class {
  /**
   * @return {!string}
   */
  static get $interfaceName() {
    return "network.mojom.NetLogExporter";
  }

  /**
   * Returns a remote for this interface which sends messages to the browser.
   * The browser must have an interface request binder registered for this
   * interface and accessible to the calling document's frame.
   *
   * @return {!network.mojom.NetLogExporterRemote}
   * @export
   */
  static getRemote() {
    let remote = new network.mojom.NetLogExporterRemote;
    remote.$.bindNewPipeAndPassReceiver().bindInBrowser();
    return remote;
  }
};


/**
 * An object which receives request messages for the NetLogExporter
 * mojom interface and dispatches them as callbacks. One callback receiver exists
 * on this object for each message defined in the mojom interface, and each
 * receiver can have any number of listeners added to it.
 *
 * @export
 */
network.mojom.NetLogExporterCallbackRouter = class {
  constructor() {
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
      network.mojom.NetLogExporterRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!network.mojom.NetLogExporterRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);

    this.router_ = new mojo.internal.interfaceSupport.CallbackRouter;

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.start =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        0,
        network.mojom.NetLogExporter_Start_ParamsSpec.$,
        network.mojom.NetLogExporter_Start_ResponseParamsSpec.$,
        this.start.createReceiverHandler(true /* expectsResponse */));
    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.stop =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        1,
        network.mojom.NetLogExporter_Stop_ParamsSpec.$,
        network.mojom.NetLogExporter_Stop_ResponseParamsSpec.$,
        this.stop.createReceiverHandler(true /* expectsResponse */));
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
network.mojom.NetLogProxySourcePendingReceiver = class {
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
        network.mojom.NetLogProxySource.$interfaceName,
        scope);
  }
};



/**
 * @export
 * @implements { network.mojom.NetLogProxySourceInterface }
 */
network.mojom.NetLogProxySourceRemote = class {
  /** @param {MojoHandle|mojo.internal.interfaceSupport.Endpoint=} handle */
  constructor(handle = undefined) {
    /**
     * @private {!mojo.internal.interfaceSupport.InterfaceRemoteBase<!network.mojom.NetLogProxySourcePendingReceiver>}
     */
    this.proxy =
        new mojo.internal.interfaceSupport.InterfaceRemoteBase(
          network.mojom.NetLogProxySourcePendingReceiver,
          handle);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper<!network.mojom.NetLogProxySourcePendingReceiver>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper(this.proxy);

    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.proxy.getConnectionErrorEventRouter();
  }

  
  /**
   * @param { !number } modes
   */

  updateCaptureModes(
      modes) {
    this.proxy.sendMessage(
        0,
        network.mojom.NetLogProxySource_UpdateCaptureModes_ParamsSpec.$,
        null,
        [
          modes
        ]);
  }
};

/**
 * An object which receives request messages for the NetLogProxySource
 * mojom interface. Must be constructed over an object which implements that
 * interface.
 *
 * @export
 */
network.mojom.NetLogProxySourceReceiver = class {
  /**
   * @param {!network.mojom.NetLogProxySourceInterface } impl
   */
  constructor(impl) {
    /** @private {!mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal<!network.mojom.NetLogProxySourceRemote>} */
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
        network.mojom.NetLogProxySourceRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!network.mojom.NetLogProxySourceRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);


    this.helper_internal_.registerHandler(
        0,
        network.mojom.NetLogProxySource_UpdateCaptureModes_ParamsSpec.$,
        null,
        impl.updateCaptureModes.bind(impl));
    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.helper_internal_.getConnectionErrorEventRouter();
  }
};

/**
 *  @export
 */
network.mojom.NetLogProxySource = class {
  /**
   * @return {!string}
   */
  static get $interfaceName() {
    return "network.mojom.NetLogProxySource";
  }

  /**
   * Returns a remote for this interface which sends messages to the browser.
   * The browser must have an interface request binder registered for this
   * interface and accessible to the calling document's frame.
   *
   * @return {!network.mojom.NetLogProxySourceRemote}
   * @export
   */
  static getRemote() {
    let remote = new network.mojom.NetLogProxySourceRemote;
    remote.$.bindNewPipeAndPassReceiver().bindInBrowser();
    return remote;
  }
};


/**
 * An object which receives request messages for the NetLogProxySource
 * mojom interface and dispatches them as callbacks. One callback receiver exists
 * on this object for each message defined in the mojom interface, and each
 * receiver can have any number of listeners added to it.
 *
 * @export
 */
network.mojom.NetLogProxySourceCallbackRouter = class {
  constructor() {
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
      network.mojom.NetLogProxySourceRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!network.mojom.NetLogProxySourceRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);

    this.router_ = new mojo.internal.interfaceSupport.CallbackRouter;

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.updateCaptureModes =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        0,
        network.mojom.NetLogProxySource_UpdateCaptureModes_ParamsSpec.$,
        null,
        this.updateCaptureModes.createReceiverHandler(false /* expectsResponse */));
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
network.mojom.NetLogProxySinkPendingReceiver = class {
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
        network.mojom.NetLogProxySink.$interfaceName,
        scope);
  }
};



/**
 * @export
 * @implements { network.mojom.NetLogProxySinkInterface }
 */
network.mojom.NetLogProxySinkRemote = class {
  /** @param {MojoHandle|mojo.internal.interfaceSupport.Endpoint=} handle */
  constructor(handle = undefined) {
    /**
     * @private {!mojo.internal.interfaceSupport.InterfaceRemoteBase<!network.mojom.NetLogProxySinkPendingReceiver>}
     */
    this.proxy =
        new mojo.internal.interfaceSupport.InterfaceRemoteBase(
          network.mojom.NetLogProxySinkPendingReceiver,
          handle);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper<!network.mojom.NetLogProxySinkPendingReceiver>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper(this.proxy);

    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.proxy.getConnectionErrorEventRouter();
  }

  
  /**
   * @param { !number } type
   * @param { !number } sourceType
   * @param { !number } sourceId
   * @param { !mojoBase.mojom.TimeTicks } sourceStartTime
   * @param { !network.mojom.NetLogEventPhase } phase
   * @param { !mojoBase.mojom.TimeTicks } time
   * @param { !mojoBase.mojom.Value } params
   */

  addEntry(
      type,
      sourceType,
      sourceId,
      sourceStartTime,
      phase,
      time,
      params) {
    this.proxy.sendMessage(
        0,
        network.mojom.NetLogProxySink_AddEntry_ParamsSpec.$,
        null,
        [
          type,
          sourceType,
          sourceId,
          sourceStartTime,
          phase,
          time,
          params
        ]);
  }
};

/**
 * An object which receives request messages for the NetLogProxySink
 * mojom interface. Must be constructed over an object which implements that
 * interface.
 *
 * @export
 */
network.mojom.NetLogProxySinkReceiver = class {
  /**
   * @param {!network.mojom.NetLogProxySinkInterface } impl
   */
  constructor(impl) {
    /** @private {!mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal<!network.mojom.NetLogProxySinkRemote>} */
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
        network.mojom.NetLogProxySinkRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!network.mojom.NetLogProxySinkRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);


    this.helper_internal_.registerHandler(
        0,
        network.mojom.NetLogProxySink_AddEntry_ParamsSpec.$,
        null,
        impl.addEntry.bind(impl));
    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.helper_internal_.getConnectionErrorEventRouter();
  }
};

/**
 *  @export
 */
network.mojom.NetLogProxySink = class {
  /**
   * @return {!string}
   */
  static get $interfaceName() {
    return "network.mojom.NetLogProxySink";
  }

  /**
   * Returns a remote for this interface which sends messages to the browser.
   * The browser must have an interface request binder registered for this
   * interface and accessible to the calling document's frame.
   *
   * @return {!network.mojom.NetLogProxySinkRemote}
   * @export
   */
  static getRemote() {
    let remote = new network.mojom.NetLogProxySinkRemote;
    remote.$.bindNewPipeAndPassReceiver().bindInBrowser();
    return remote;
  }
};


/**
 * An object which receives request messages for the NetLogProxySink
 * mojom interface and dispatches them as callbacks. One callback receiver exists
 * on this object for each message defined in the mojom interface, and each
 * receiver can have any number of listeners added to it.
 *
 * @export
 */
network.mojom.NetLogProxySinkCallbackRouter = class {
  constructor() {
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
      network.mojom.NetLogProxySinkRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!network.mojom.NetLogProxySinkRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);

    this.router_ = new mojo.internal.interfaceSupport.CallbackRouter;

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.addEntry =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        0,
        network.mojom.NetLogProxySink_AddEntry_ParamsSpec.$,
        null,
        this.addEntry.createReceiverHandler(false /* expectsResponse */));
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
network.mojom.NetLogExporter_Start_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
network.mojom.NetLogExporter_Start_ResponseParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
network.mojom.NetLogExporter_Stop_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
network.mojom.NetLogExporter_Stop_ResponseParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
network.mojom.NetLogProxySource_UpdateCaptureModes_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
network.mojom.NetLogProxySink_AddEntry_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };




mojo.internal.Struct(
    network.mojom.NetLogExporter_Start_ParamsSpec.$,
    'NetLogExporter_Start_Params',
    [
      mojo.internal.StructField(
        'destination', 0,
        0,
        mojoBase.mojom.FileSpec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'extraConstants', 8,
        0,
        mojoBase.mojom.DictionaryValueSpec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'captureMode', 16,
        0,
        network.mojom.NetLogCaptureModeSpec.$,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'maxFileSize', 24,
        0,
        mojo.internal.Uint64,
        BigInt(0),
        false /* nullable */),
    ],
    [[0, 40],]);





/** @record */
network.mojom.NetLogExporter_Start_Params = class {
  constructor() {
    /** @export { !mojoBase.mojom.File } */
    this.destination;
    /** @export { !mojoBase.mojom.DictionaryValue } */
    this.extraConstants;
    /** @export { !network.mojom.NetLogCaptureMode } */
    this.captureMode;
    /** @export { !bigint } */
    this.maxFileSize;
  }
};




mojo.internal.Struct(
    network.mojom.NetLogExporter_Start_ResponseParamsSpec.$,
    'NetLogExporter_Start_ResponseParams',
    [
      mojo.internal.StructField(
        'netError', 0,
        0,
        mojo.internal.Int32,
        0,
        false /* nullable */),
    ],
    [[0, 16],]);





/** @record */
network.mojom.NetLogExporter_Start_ResponseParams = class {
  constructor() {
    /** @export { !number } */
    this.netError;
  }
};




mojo.internal.Struct(
    network.mojom.NetLogExporter_Stop_ParamsSpec.$,
    'NetLogExporter_Stop_Params',
    [
      mojo.internal.StructField(
        'polledValues', 0,
        0,
        mojoBase.mojom.DictionaryValueSpec.$,
        null,
        false /* nullable */),
    ],
    [[0, 16],]);





/** @record */
network.mojom.NetLogExporter_Stop_Params = class {
  constructor() {
    /** @export { !mojoBase.mojom.DictionaryValue } */
    this.polledValues;
  }
};




mojo.internal.Struct(
    network.mojom.NetLogExporter_Stop_ResponseParamsSpec.$,
    'NetLogExporter_Stop_ResponseParams',
    [
      mojo.internal.StructField(
        'netError', 0,
        0,
        mojo.internal.Int32,
        0,
        false /* nullable */),
    ],
    [[0, 16],]);





/** @record */
network.mojom.NetLogExporter_Stop_ResponseParams = class {
  constructor() {
    /** @export { !number } */
    this.netError;
  }
};




mojo.internal.Struct(
    network.mojom.NetLogProxySource_UpdateCaptureModes_ParamsSpec.$,
    'NetLogProxySource_UpdateCaptureModes_Params',
    [
      mojo.internal.StructField(
        'modes', 0,
        0,
        mojo.internal.Uint32,
        0,
        false /* nullable */),
    ],
    [[0, 16],]);





/** @record */
network.mojom.NetLogProxySource_UpdateCaptureModes_Params = class {
  constructor() {
    /** @export { !number } */
    this.modes;
  }
};




mojo.internal.Struct(
    network.mojom.NetLogProxySink_AddEntry_ParamsSpec.$,
    'NetLogProxySink_AddEntry_Params',
    [
      mojo.internal.StructField(
        'type', 0,
        0,
        mojo.internal.Uint32,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'sourceType', 4,
        0,
        mojo.internal.Uint32,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'sourceId', 8,
        0,
        mojo.internal.Uint32,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'sourceStartTime', 16,
        0,
        mojoBase.mojom.TimeTicksSpec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'phase', 12,
        0,
        network.mojom.NetLogEventPhaseSpec.$,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'time', 24,
        0,
        mojoBase.mojom.TimeTicksSpec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'params', 32,
        0,
        mojoBase.mojom.ValueSpec.$,
        null,
        false /* nullable */),
    ],
    [[0, 56],]);





/** @record */
network.mojom.NetLogProxySink_AddEntry_Params = class {
  constructor() {
    /** @export { !number } */
    this.type;
    /** @export { !number } */
    this.sourceType;
    /** @export { !number } */
    this.sourceId;
    /** @export { !network.mojom.NetLogEventPhase } */
    this.phase;
    /** @export { !mojoBase.mojom.TimeTicks } */
    this.sourceStartTime;
    /** @export { !mojoBase.mojom.TimeTicks } */
    this.time;
    /** @export { !mojoBase.mojom.Value } */
    this.params;
  }
};


