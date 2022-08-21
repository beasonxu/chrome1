// services/network/public/mojom/network_quality_estimator_manager.mojom-lite-for-compile.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
'use strict';

goog.require('mojo.internal');
goog.require('mojo.internal.interfaceSupport');

goog.require('network.mojom.EffectiveConnectionType');
goog.require('mojoBase.mojom.TimeDelta');






goog.provide('network.mojom.NetworkQualityEstimatorManagerClient');
goog.provide('network.mojom.NetworkQualityEstimatorManagerClientReceiver');
goog.provide('network.mojom.NetworkQualityEstimatorManagerClientCallbackRouter');
goog.provide('network.mojom.NetworkQualityEstimatorManagerClientInterface');
goog.provide('network.mojom.NetworkQualityEstimatorManagerClientRemote');
goog.provide('network.mojom.NetworkQualityEstimatorManagerClientPendingReceiver');


/**
 * @implements {mojo.internal.interfaceSupport.PendingReceiver}
 * @export
 */
network.mojom.NetworkQualityEstimatorManagerClientPendingReceiver = class {
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
        network.mojom.NetworkQualityEstimatorManagerClient.$interfaceName,
        scope);
  }
};

/** @interface */
network.mojom.NetworkQualityEstimatorManagerClientInterface = class {
  
  /**
   * @param { !network.mojom.EffectiveConnectionType } type
   * @param { !mojoBase.mojom.TimeDelta } httpRtt
   * @param { !mojoBase.mojom.TimeDelta } transportRtt
   * @param { !number } downlinkBandwidthKbps
   */

  onNetworkQualityChanged(type, httpRtt, transportRtt, downlinkBandwidthKbps) {}
};

/**
 * @export
 * @implements { network.mojom.NetworkQualityEstimatorManagerClientInterface }
 */
network.mojom.NetworkQualityEstimatorManagerClientRemote = class {
  /** @param {MojoHandle|mojo.internal.interfaceSupport.Endpoint=} handle */
  constructor(handle = undefined) {
    /**
     * @private {!mojo.internal.interfaceSupport.InterfaceRemoteBase<!network.mojom.NetworkQualityEstimatorManagerClientPendingReceiver>}
     */
    this.proxy =
        new mojo.internal.interfaceSupport.InterfaceRemoteBase(
          network.mojom.NetworkQualityEstimatorManagerClientPendingReceiver,
          handle);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper<!network.mojom.NetworkQualityEstimatorManagerClientPendingReceiver>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper(this.proxy);

    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.proxy.getConnectionErrorEventRouter();
  }

  
  /**
   * @param { !network.mojom.EffectiveConnectionType } type
   * @param { !mojoBase.mojom.TimeDelta } httpRtt
   * @param { !mojoBase.mojom.TimeDelta } transportRtt
   * @param { !number } downlinkBandwidthKbps
   */

  onNetworkQualityChanged(
      type,
      httpRtt,
      transportRtt,
      downlinkBandwidthKbps) {
    this.proxy.sendMessage(
        0,
        network.mojom.NetworkQualityEstimatorManagerClient_OnNetworkQualityChanged_ParamsSpec.$,
        null,
        [
          type,
          httpRtt,
          transportRtt,
          downlinkBandwidthKbps
        ]);
  }
};

/**
 * An object which receives request messages for the NetworkQualityEstimatorManagerClient
 * mojom interface. Must be constructed over an object which implements that
 * interface.
 *
 * @export
 */
network.mojom.NetworkQualityEstimatorManagerClientReceiver = class {
  /**
   * @param {!network.mojom.NetworkQualityEstimatorManagerClientInterface } impl
   */
  constructor(impl) {
    /** @private {!mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal<!network.mojom.NetworkQualityEstimatorManagerClientRemote>} */
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
        network.mojom.NetworkQualityEstimatorManagerClientRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!network.mojom.NetworkQualityEstimatorManagerClientRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);


    this.helper_internal_.registerHandler(
        0,
        network.mojom.NetworkQualityEstimatorManagerClient_OnNetworkQualityChanged_ParamsSpec.$,
        null,
        impl.onNetworkQualityChanged.bind(impl));
    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.helper_internal_.getConnectionErrorEventRouter();
  }
};

/**
 *  @export
 */
network.mojom.NetworkQualityEstimatorManagerClient = class {
  /**
   * @return {!string}
   */
  static get $interfaceName() {
    return "network.mojom.NetworkQualityEstimatorManagerClient";
  }

  /**
   * Returns a remote for this interface which sends messages to the browser.
   * The browser must have an interface request binder registered for this
   * interface and accessible to the calling document's frame.
   *
   * @return {!network.mojom.NetworkQualityEstimatorManagerClientRemote}
   * @export
   */
  static getRemote() {
    let remote = new network.mojom.NetworkQualityEstimatorManagerClientRemote;
    remote.$.bindNewPipeAndPassReceiver().bindInBrowser();
    return remote;
  }
};


/**
 * An object which receives request messages for the NetworkQualityEstimatorManagerClient
 * mojom interface and dispatches them as callbacks. One callback receiver exists
 * on this object for each message defined in the mojom interface, and each
 * receiver can have any number of listeners added to it.
 *
 * @export
 */
network.mojom.NetworkQualityEstimatorManagerClientCallbackRouter = class {
  constructor() {
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
      network.mojom.NetworkQualityEstimatorManagerClientRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!network.mojom.NetworkQualityEstimatorManagerClientRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);

    this.router_ = new mojo.internal.interfaceSupport.CallbackRouter;

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.onNetworkQualityChanged =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        0,
        network.mojom.NetworkQualityEstimatorManagerClient_OnNetworkQualityChanged_ParamsSpec.$,
        null,
        this.onNetworkQualityChanged.createReceiverHandler(false /* expectsResponse */));
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


goog.provide('network.mojom.NetworkQualityEstimatorManager');
goog.provide('network.mojom.NetworkQualityEstimatorManagerReceiver');
goog.provide('network.mojom.NetworkQualityEstimatorManagerCallbackRouter');
goog.provide('network.mojom.NetworkQualityEstimatorManagerInterface');
goog.provide('network.mojom.NetworkQualityEstimatorManagerRemote');
goog.provide('network.mojom.NetworkQualityEstimatorManagerPendingReceiver');


/**
 * @implements {mojo.internal.interfaceSupport.PendingReceiver}
 * @export
 */
network.mojom.NetworkQualityEstimatorManagerPendingReceiver = class {
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
        network.mojom.NetworkQualityEstimatorManager.$interfaceName,
        scope);
  }
};

/** @interface */
network.mojom.NetworkQualityEstimatorManagerInterface = class {
  
  /**
   * @param { !network.mojom.NetworkQualityEstimatorManagerClientRemote } client
   */

  requestNotifications(client) {}
};

/**
 * @export
 * @implements { network.mojom.NetworkQualityEstimatorManagerInterface }
 */
network.mojom.NetworkQualityEstimatorManagerRemote = class {
  /** @param {MojoHandle|mojo.internal.interfaceSupport.Endpoint=} handle */
  constructor(handle = undefined) {
    /**
     * @private {!mojo.internal.interfaceSupport.InterfaceRemoteBase<!network.mojom.NetworkQualityEstimatorManagerPendingReceiver>}
     */
    this.proxy =
        new mojo.internal.interfaceSupport.InterfaceRemoteBase(
          network.mojom.NetworkQualityEstimatorManagerPendingReceiver,
          handle);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper<!network.mojom.NetworkQualityEstimatorManagerPendingReceiver>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper(this.proxy);

    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.proxy.getConnectionErrorEventRouter();
  }

  
  /**
   * @param { !network.mojom.NetworkQualityEstimatorManagerClientRemote } client
   */

  requestNotifications(
      client) {
    this.proxy.sendMessage(
        0,
        network.mojom.NetworkQualityEstimatorManager_RequestNotifications_ParamsSpec.$,
        null,
        [
          client
        ]);
  }
};

/**
 * An object which receives request messages for the NetworkQualityEstimatorManager
 * mojom interface. Must be constructed over an object which implements that
 * interface.
 *
 * @export
 */
network.mojom.NetworkQualityEstimatorManagerReceiver = class {
  /**
   * @param {!network.mojom.NetworkQualityEstimatorManagerInterface } impl
   */
  constructor(impl) {
    /** @private {!mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal<!network.mojom.NetworkQualityEstimatorManagerRemote>} */
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
        network.mojom.NetworkQualityEstimatorManagerRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!network.mojom.NetworkQualityEstimatorManagerRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);


    this.helper_internal_.registerHandler(
        0,
        network.mojom.NetworkQualityEstimatorManager_RequestNotifications_ParamsSpec.$,
        null,
        impl.requestNotifications.bind(impl));
    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.helper_internal_.getConnectionErrorEventRouter();
  }
};

/**
 *  @export
 */
network.mojom.NetworkQualityEstimatorManager = class {
  /**
   * @return {!string}
   */
  static get $interfaceName() {
    return "network.mojom.NetworkQualityEstimatorManager";
  }

  /**
   * Returns a remote for this interface which sends messages to the browser.
   * The browser must have an interface request binder registered for this
   * interface and accessible to the calling document's frame.
   *
   * @return {!network.mojom.NetworkQualityEstimatorManagerRemote}
   * @export
   */
  static getRemote() {
    let remote = new network.mojom.NetworkQualityEstimatorManagerRemote;
    remote.$.bindNewPipeAndPassReceiver().bindInBrowser();
    return remote;
  }
};


/**
 * An object which receives request messages for the NetworkQualityEstimatorManager
 * mojom interface and dispatches them as callbacks. One callback receiver exists
 * on this object for each message defined in the mojom interface, and each
 * receiver can have any number of listeners added to it.
 *
 * @export
 */
network.mojom.NetworkQualityEstimatorManagerCallbackRouter = class {
  constructor() {
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
      network.mojom.NetworkQualityEstimatorManagerRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!network.mojom.NetworkQualityEstimatorManagerRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);

    this.router_ = new mojo.internal.interfaceSupport.CallbackRouter;

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.requestNotifications =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        0,
        network.mojom.NetworkQualityEstimatorManager_RequestNotifications_ParamsSpec.$,
        null,
        this.requestNotifications.createReceiverHandler(false /* expectsResponse */));
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


goog.provide('network.mojom.NetworkQualityEstimatorManagerClient_OnNetworkQualityChanged_ParamsSpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
network.mojom.NetworkQualityEstimatorManagerClient_OnNetworkQualityChanged_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

goog.provide('network.mojom.NetworkQualityEstimatorManager_RequestNotifications_ParamsSpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
network.mojom.NetworkQualityEstimatorManager_RequestNotifications_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };




mojo.internal.Struct(
    network.mojom.NetworkQualityEstimatorManagerClient_OnNetworkQualityChanged_ParamsSpec.$,
    'NetworkQualityEstimatorManagerClient_OnNetworkQualityChanged_Params',
    [
      mojo.internal.StructField(
        'type', 0,
        0,
        network.mojom.EffectiveConnectionTypeSpec.$,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'httpRtt', 8,
        0,
        mojoBase.mojom.TimeDeltaSpec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'transportRtt', 16,
        0,
        mojoBase.mojom.TimeDeltaSpec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'downlinkBandwidthKbps', 4,
        0,
        mojo.internal.Int32,
        0,
        false /* nullable */),
    ],
    [[0, 32],]);



goog.provide('network.mojom.NetworkQualityEstimatorManagerClient_OnNetworkQualityChanged_Params');

/** @record */
network.mojom.NetworkQualityEstimatorManagerClient_OnNetworkQualityChanged_Params = class {
  constructor() {
    /** @export { !network.mojom.EffectiveConnectionType } */
    this.type;
    /** @export { !number } */
    this.downlinkBandwidthKbps;
    /** @export { !mojoBase.mojom.TimeDelta } */
    this.httpRtt;
    /** @export { !mojoBase.mojom.TimeDelta } */
    this.transportRtt;
  }
};




mojo.internal.Struct(
    network.mojom.NetworkQualityEstimatorManager_RequestNotifications_ParamsSpec.$,
    'NetworkQualityEstimatorManager_RequestNotifications_Params',
    [
      mojo.internal.StructField(
        'client', 0,
        0,
        mojo.internal.InterfaceProxy(network.mojom.NetworkQualityEstimatorManagerClientRemote),
        null,
        false /* nullable */),
    ],
    [[0, 16],]);



goog.provide('network.mojom.NetworkQualityEstimatorManager_RequestNotifications_Params');

/** @record */
network.mojom.NetworkQualityEstimatorManager_RequestNotifications_Params = class {
  constructor() {
    /** @export { !network.mojom.NetworkQualityEstimatorManagerClientRemote } */
    this.client;
  }
};


