// components/mirroring/mojom/mirroring_service_host.mojom-lite.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
'use strict';


mojo.internal.exportModule('mirroring.mojom');








/**
 * @implements {mojo.internal.interfaceSupport.PendingReceiver}
 * @export
 */
mirroring.mojom.MirroringServiceHostPendingReceiver = class {
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
        mirroring.mojom.MirroringServiceHost.$interfaceName,
        scope);
  }
};



/**
 * @export
 * @implements { mirroring.mojom.MirroringServiceHostInterface }
 */
mirroring.mojom.MirroringServiceHostRemote = class {
  /** @param {MojoHandle|mojo.internal.interfaceSupport.Endpoint=} handle */
  constructor(handle = undefined) {
    /**
     * @private {!mojo.internal.interfaceSupport.InterfaceRemoteBase<!mirroring.mojom.MirroringServiceHostPendingReceiver>}
     */
    this.proxy =
        new mojo.internal.interfaceSupport.InterfaceRemoteBase(
          mirroring.mojom.MirroringServiceHostPendingReceiver,
          handle);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper<!mirroring.mojom.MirroringServiceHostPendingReceiver>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper(this.proxy);

    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.proxy.getConnectionErrorEventRouter();
  }

  
  /**
   * @param { !mirroring.mojom.SessionParameters } params
   * @param { !mirroring.mojom.SessionObserverRemote } observer
   * @param { !mirroring.mojom.CastMessageChannelRemote } outboundChannel
   * @param { !mirroring.mojom.CastMessageChannelPendingReceiver } inboundChannel
   */

  start(
      params,
      observer,
      outboundChannel,
      inboundChannel) {
    this.proxy.sendMessage(
        0,
        mirroring.mojom.MirroringServiceHost_Start_ParamsSpec.$,
        null,
        [
          params,
          observer,
          outboundChannel,
          inboundChannel
        ]);
  }
};

/**
 * An object which receives request messages for the MirroringServiceHost
 * mojom interface. Must be constructed over an object which implements that
 * interface.
 *
 * @export
 */
mirroring.mojom.MirroringServiceHostReceiver = class {
  /**
   * @param {!mirroring.mojom.MirroringServiceHostInterface } impl
   */
  constructor(impl) {
    /** @private {!mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal<!mirroring.mojom.MirroringServiceHostRemote>} */
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
        mirroring.mojom.MirroringServiceHostRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!mirroring.mojom.MirroringServiceHostRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);


    this.helper_internal_.registerHandler(
        0,
        mirroring.mojom.MirroringServiceHost_Start_ParamsSpec.$,
        null,
        impl.start.bind(impl));
    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.helper_internal_.getConnectionErrorEventRouter();
  }
};

/**
 *  @export
 */
mirroring.mojom.MirroringServiceHost = class {
  /**
   * @return {!string}
   */
  static get $interfaceName() {
    return "mirroring.mojom.MirroringServiceHost";
  }

  /**
   * Returns a remote for this interface which sends messages to the browser.
   * The browser must have an interface request binder registered for this
   * interface and accessible to the calling document's frame.
   *
   * @return {!mirroring.mojom.MirroringServiceHostRemote}
   * @export
   */
  static getRemote() {
    let remote = new mirroring.mojom.MirroringServiceHostRemote;
    remote.$.bindNewPipeAndPassReceiver().bindInBrowser();
    return remote;
  }
};


/**
 * An object which receives request messages for the MirroringServiceHost
 * mojom interface and dispatches them as callbacks. One callback receiver exists
 * on this object for each message defined in the mojom interface, and each
 * receiver can have any number of listeners added to it.
 *
 * @export
 */
mirroring.mojom.MirroringServiceHostCallbackRouter = class {
  constructor() {
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
      mirroring.mojom.MirroringServiceHostRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!mirroring.mojom.MirroringServiceHostRemote>}
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
        mirroring.mojom.MirroringServiceHost_Start_ParamsSpec.$,
        null,
        this.start.createReceiverHandler(false /* expectsResponse */));
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
mirroring.mojom.MirroringServiceHost_Start_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };




mojo.internal.Struct(
    mirroring.mojom.MirroringServiceHost_Start_ParamsSpec.$,
    'MirroringServiceHost_Start_Params',
    [
      mojo.internal.StructField(
        'params', 0,
        0,
        mirroring.mojom.SessionParametersSpec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'observer', 8,
        0,
        mojo.internal.InterfaceProxy(mirroring.mojom.SessionObserverRemote),
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'outboundChannel', 16,
        0,
        mojo.internal.InterfaceProxy(mirroring.mojom.CastMessageChannelRemote),
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'inboundChannel', 24,
        0,
        mojo.internal.InterfaceRequest(mirroring.mojom.CastMessageChannelPendingReceiver),
        null,
        false /* nullable */),
    ],
    [[0, 40],]);





/** @record */
mirroring.mojom.MirroringServiceHost_Start_Params = class {
  constructor() {
    /** @export { !mirroring.mojom.SessionParameters } */
    this.params;
    /** @export { !mirroring.mojom.SessionObserverRemote } */
    this.observer;
    /** @export { !mirroring.mojom.CastMessageChannelRemote } */
    this.outboundChannel;
    /** @export { !mirroring.mojom.CastMessageChannelPendingReceiver } */
    this.inboundChannel;
  }
};


