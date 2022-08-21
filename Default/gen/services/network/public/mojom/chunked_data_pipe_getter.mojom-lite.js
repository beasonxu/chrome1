// services/network/public/mojom/chunked_data_pipe_getter.mojom-lite.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
'use strict';


mojo.internal.exportModule('network.mojom');








/**
 * @implements {mojo.internal.interfaceSupport.PendingReceiver}
 * @export
 */
network.mojom.ChunkedDataPipeGetterPendingReceiver = class {
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
        network.mojom.ChunkedDataPipeGetter.$interfaceName,
        scope);
  }
};



/**
 * @export
 * @implements { network.mojom.ChunkedDataPipeGetterInterface }
 */
network.mojom.ChunkedDataPipeGetterRemote = class {
  /** @param {MojoHandle|mojo.internal.interfaceSupport.Endpoint=} handle */
  constructor(handle = undefined) {
    /**
     * @private {!mojo.internal.interfaceSupport.InterfaceRemoteBase<!network.mojom.ChunkedDataPipeGetterPendingReceiver>}
     */
    this.proxy =
        new mojo.internal.interfaceSupport.InterfaceRemoteBase(
          network.mojom.ChunkedDataPipeGetterPendingReceiver,
          handle);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper<!network.mojom.ChunkedDataPipeGetterPendingReceiver>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper(this.proxy);

    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.proxy.getConnectionErrorEventRouter();
  }

  
  /**
   * @return {!Promise<{
        status: !number,
        size: !bigint,
   *  }>}
   */

  getSize() {
    return this.proxy.sendMessage(
        0,
        network.mojom.ChunkedDataPipeGetter_GetSize_ParamsSpec.$,
        network.mojom.ChunkedDataPipeGetter_GetSize_ResponseParamsSpec.$,
        [
        ]);
  }

  
  /**
   * @param { !MojoHandle } pipe
   */

  startReading(
      pipe) {
    this.proxy.sendMessage(
        1,
        network.mojom.ChunkedDataPipeGetter_StartReading_ParamsSpec.$,
        null,
        [
          pipe
        ]);
  }
};

/**
 * An object which receives request messages for the ChunkedDataPipeGetter
 * mojom interface. Must be constructed over an object which implements that
 * interface.
 *
 * @export
 */
network.mojom.ChunkedDataPipeGetterReceiver = class {
  /**
   * @param {!network.mojom.ChunkedDataPipeGetterInterface } impl
   */
  constructor(impl) {
    /** @private {!mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal<!network.mojom.ChunkedDataPipeGetterRemote>} */
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
        network.mojom.ChunkedDataPipeGetterRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!network.mojom.ChunkedDataPipeGetterRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);


    this.helper_internal_.registerHandler(
        0,
        network.mojom.ChunkedDataPipeGetter_GetSize_ParamsSpec.$,
        network.mojom.ChunkedDataPipeGetter_GetSize_ResponseParamsSpec.$,
        impl.getSize.bind(impl));
    this.helper_internal_.registerHandler(
        1,
        network.mojom.ChunkedDataPipeGetter_StartReading_ParamsSpec.$,
        null,
        impl.startReading.bind(impl));
    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.helper_internal_.getConnectionErrorEventRouter();
  }
};

/**
 *  @export
 */
network.mojom.ChunkedDataPipeGetter = class {
  /**
   * @return {!string}
   */
  static get $interfaceName() {
    return "network.mojom.ChunkedDataPipeGetter";
  }

  /**
   * Returns a remote for this interface which sends messages to the browser.
   * The browser must have an interface request binder registered for this
   * interface and accessible to the calling document's frame.
   *
   * @return {!network.mojom.ChunkedDataPipeGetterRemote}
   * @export
   */
  static getRemote() {
    let remote = new network.mojom.ChunkedDataPipeGetterRemote;
    remote.$.bindNewPipeAndPassReceiver().bindInBrowser();
    return remote;
  }
};


/**
 * An object which receives request messages for the ChunkedDataPipeGetter
 * mojom interface and dispatches them as callbacks. One callback receiver exists
 * on this object for each message defined in the mojom interface, and each
 * receiver can have any number of listeners added to it.
 *
 * @export
 */
network.mojom.ChunkedDataPipeGetterCallbackRouter = class {
  constructor() {
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
      network.mojom.ChunkedDataPipeGetterRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!network.mojom.ChunkedDataPipeGetterRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);

    this.router_ = new mojo.internal.interfaceSupport.CallbackRouter;

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.getSize =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        0,
        network.mojom.ChunkedDataPipeGetter_GetSize_ParamsSpec.$,
        network.mojom.ChunkedDataPipeGetter_GetSize_ResponseParamsSpec.$,
        this.getSize.createReceiverHandler(true /* expectsResponse */));
    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.startReading =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        1,
        network.mojom.ChunkedDataPipeGetter_StartReading_ParamsSpec.$,
        null,
        this.startReading.createReceiverHandler(false /* expectsResponse */));
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
network.mojom.ChunkedDataPipeGetter_GetSize_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
network.mojom.ChunkedDataPipeGetter_GetSize_ResponseParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
network.mojom.ChunkedDataPipeGetter_StartReading_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };




mojo.internal.Struct(
    network.mojom.ChunkedDataPipeGetter_GetSize_ParamsSpec.$,
    'ChunkedDataPipeGetter_GetSize_Params',
    [
    ],
    [[0, 8],]);





/** @record */
network.mojom.ChunkedDataPipeGetter_GetSize_Params = class {
  constructor() {
  }
};




mojo.internal.Struct(
    network.mojom.ChunkedDataPipeGetter_GetSize_ResponseParamsSpec.$,
    'ChunkedDataPipeGetter_GetSize_ResponseParams',
    [
      mojo.internal.StructField(
        'status', 0,
        0,
        mojo.internal.Int32,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'size', 8,
        0,
        mojo.internal.Uint64,
        BigInt(0),
        false /* nullable */),
    ],
    [[0, 24],]);





/** @record */
network.mojom.ChunkedDataPipeGetter_GetSize_ResponseParams = class {
  constructor() {
    /** @export { !number } */
    this.status;
    /** @export { !bigint } */
    this.size;
  }
};




mojo.internal.Struct(
    network.mojom.ChunkedDataPipeGetter_StartReading_ParamsSpec.$,
    'ChunkedDataPipeGetter_StartReading_Params',
    [
      mojo.internal.StructField(
        'pipe', 0,
        0,
        mojo.internal.Handle,
        null,
        false /* nullable */),
    ],
    [[0, 16],]);





/** @record */
network.mojom.ChunkedDataPipeGetter_StartReading_Params = class {
  constructor() {
    /** @export { !MojoHandle } */
    this.pipe;
  }
};


