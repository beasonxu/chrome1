// services/network/public/mojom/accept_ch_frame_observer.mojom-lite.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
'use strict';


mojo.internal.exportModule('network.mojom');








/**
 * @implements {mojo.internal.interfaceSupport.PendingReceiver}
 * @export
 */
network.mojom.AcceptCHFrameObserverPendingReceiver = class {
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
        network.mojom.AcceptCHFrameObserver.$interfaceName,
        scope);
  }
};



/**
 * @export
 * @implements { network.mojom.AcceptCHFrameObserverInterface }
 */
network.mojom.AcceptCHFrameObserverRemote = class {
  /** @param {MojoHandle|mojo.internal.interfaceSupport.Endpoint=} handle */
  constructor(handle = undefined) {
    /**
     * @private {!mojo.internal.interfaceSupport.InterfaceRemoteBase<!network.mojom.AcceptCHFrameObserverPendingReceiver>}
     */
    this.proxy =
        new mojo.internal.interfaceSupport.InterfaceRemoteBase(
          network.mojom.AcceptCHFrameObserverPendingReceiver,
          handle);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper<!network.mojom.AcceptCHFrameObserverPendingReceiver>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper(this.proxy);

    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.proxy.getConnectionErrorEventRouter();
  }

  
  /**
   * @param { !url.mojom.Origin } origin
   * @param { !Array<!network.mojom.WebClientHintsType> } acceptChFrame
   * @return {!Promise<{
        status: !number,
   *  }>}
   */

  onAcceptCHFrameReceived(
      origin,
      acceptChFrame) {
    return this.proxy.sendMessage(
        0,
        network.mojom.AcceptCHFrameObserver_OnAcceptCHFrameReceived_ParamsSpec.$,
        network.mojom.AcceptCHFrameObserver_OnAcceptCHFrameReceived_ResponseParamsSpec.$,
        [
          origin,
          acceptChFrame
        ]);
  }

  
  /**
   * @param { !network.mojom.AcceptCHFrameObserverPendingReceiver } listener
   */

  clone(
      listener) {
    this.proxy.sendMessage(
        1,
        network.mojom.AcceptCHFrameObserver_Clone_ParamsSpec.$,
        null,
        [
          listener
        ]);
  }
};

/**
 * An object which receives request messages for the AcceptCHFrameObserver
 * mojom interface. Must be constructed over an object which implements that
 * interface.
 *
 * @export
 */
network.mojom.AcceptCHFrameObserverReceiver = class {
  /**
   * @param {!network.mojom.AcceptCHFrameObserverInterface } impl
   */
  constructor(impl) {
    /** @private {!mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal<!network.mojom.AcceptCHFrameObserverRemote>} */
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
        network.mojom.AcceptCHFrameObserverRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!network.mojom.AcceptCHFrameObserverRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);


    this.helper_internal_.registerHandler(
        0,
        network.mojom.AcceptCHFrameObserver_OnAcceptCHFrameReceived_ParamsSpec.$,
        network.mojom.AcceptCHFrameObserver_OnAcceptCHFrameReceived_ResponseParamsSpec.$,
        impl.onAcceptCHFrameReceived.bind(impl));
    this.helper_internal_.registerHandler(
        1,
        network.mojom.AcceptCHFrameObserver_Clone_ParamsSpec.$,
        null,
        impl.clone.bind(impl));
    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.helper_internal_.getConnectionErrorEventRouter();
  }
};

/**
 *  @export
 */
network.mojom.AcceptCHFrameObserver = class {
  /**
   * @return {!string}
   */
  static get $interfaceName() {
    return "network.mojom.AcceptCHFrameObserver";
  }

  /**
   * Returns a remote for this interface which sends messages to the browser.
   * The browser must have an interface request binder registered for this
   * interface and accessible to the calling document's frame.
   *
   * @return {!network.mojom.AcceptCHFrameObserverRemote}
   * @export
   */
  static getRemote() {
    let remote = new network.mojom.AcceptCHFrameObserverRemote;
    remote.$.bindNewPipeAndPassReceiver().bindInBrowser();
    return remote;
  }
};


/**
 * An object which receives request messages for the AcceptCHFrameObserver
 * mojom interface and dispatches them as callbacks. One callback receiver exists
 * on this object for each message defined in the mojom interface, and each
 * receiver can have any number of listeners added to it.
 *
 * @export
 */
network.mojom.AcceptCHFrameObserverCallbackRouter = class {
  constructor() {
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
      network.mojom.AcceptCHFrameObserverRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!network.mojom.AcceptCHFrameObserverRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);

    this.router_ = new mojo.internal.interfaceSupport.CallbackRouter;

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.onAcceptCHFrameReceived =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        0,
        network.mojom.AcceptCHFrameObserver_OnAcceptCHFrameReceived_ParamsSpec.$,
        network.mojom.AcceptCHFrameObserver_OnAcceptCHFrameReceived_ResponseParamsSpec.$,
        this.onAcceptCHFrameReceived.createReceiverHandler(true /* expectsResponse */));
    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.clone =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        1,
        network.mojom.AcceptCHFrameObserver_Clone_ParamsSpec.$,
        null,
        this.clone.createReceiverHandler(false /* expectsResponse */));
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
network.mojom.AcceptCHFrameObserver_OnAcceptCHFrameReceived_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
network.mojom.AcceptCHFrameObserver_OnAcceptCHFrameReceived_ResponseParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
network.mojom.AcceptCHFrameObserver_Clone_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };




mojo.internal.Struct(
    network.mojom.AcceptCHFrameObserver_OnAcceptCHFrameReceived_ParamsSpec.$,
    'AcceptCHFrameObserver_OnAcceptCHFrameReceived_Params',
    [
      mojo.internal.StructField(
        'origin', 0,
        0,
        url.mojom.OriginSpec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'acceptChFrame', 8,
        0,
        mojo.internal.Array(network.mojom.WebClientHintsTypeSpec.$, false),
        null,
        false /* nullable */),
    ],
    [[0, 24],]);





/** @record */
network.mojom.AcceptCHFrameObserver_OnAcceptCHFrameReceived_Params = class {
  constructor() {
    /** @export { !url.mojom.Origin } */
    this.origin;
    /** @export { !Array<!network.mojom.WebClientHintsType> } */
    this.acceptChFrame;
  }
};




mojo.internal.Struct(
    network.mojom.AcceptCHFrameObserver_OnAcceptCHFrameReceived_ResponseParamsSpec.$,
    'AcceptCHFrameObserver_OnAcceptCHFrameReceived_ResponseParams',
    [
      mojo.internal.StructField(
        'status', 0,
        0,
        mojo.internal.Int32,
        0,
        false /* nullable */),
    ],
    [[0, 16],]);





/** @record */
network.mojom.AcceptCHFrameObserver_OnAcceptCHFrameReceived_ResponseParams = class {
  constructor() {
    /** @export { !number } */
    this.status;
  }
};




mojo.internal.Struct(
    network.mojom.AcceptCHFrameObserver_Clone_ParamsSpec.$,
    'AcceptCHFrameObserver_Clone_Params',
    [
      mojo.internal.StructField(
        'listener', 0,
        0,
        mojo.internal.InterfaceRequest(network.mojom.AcceptCHFrameObserverPendingReceiver),
        null,
        false /* nullable */),
    ],
    [[0, 16],]);





/** @record */
network.mojom.AcceptCHFrameObserver_Clone_Params = class {
  constructor() {
    /** @export { !network.mojom.AcceptCHFrameObserverPendingReceiver } */
    this.listener;
  }
};


