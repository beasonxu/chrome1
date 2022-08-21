// services/network/public/mojom/network_change_manager.mojom-lite-for-compile.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
'use strict';

goog.require('mojo.internal');
goog.require('mojo.internal.interfaceSupport');





goog.provide('network.mojom.ConnectionType');
goog.provide('network.mojom.ConnectionTypeSpec');
/**
 * @const { {$: !mojo.internal.MojomType} }
 * @export
 */
network.mojom.ConnectionTypeSpec = { $: mojo.internal.Enum() };

/**
 * @enum {number}
 * @export
 */
network.mojom.ConnectionType = {
  
  CONNECTION_UNKNOWN: 0,
  CONNECTION_ETHERNET: 1,
  CONNECTION_WIFI: 2,
  CONNECTION_2G: 3,
  CONNECTION_3G: 4,
  CONNECTION_4G: 5,
  CONNECTION_NONE: 6,
  CONNECTION_BLUETOOTH: 7,
  CONNECTION_5G: 8,
  CONNECTION_LAST: 8,
  MIN_VALUE: 0,
  MAX_VALUE: 8,
};

goog.provide('network.mojom.ConnectionSubtype');
goog.provide('network.mojom.ConnectionSubtypeSpec');
/**
 * @const { {$: !mojo.internal.MojomType} }
 * @export
 */
network.mojom.ConnectionSubtypeSpec = { $: mojo.internal.Enum() };

/**
 * @enum {number}
 * @export
 */
network.mojom.ConnectionSubtype = {
  
  SUBTYPE_UNKNOWN: 0,
  SUBTYPE_NONE: 1,
  SUBTYPE_OTHER: 2,
  SUBTYPE_GSM: 3,
  SUBTYPE_IDEN: 4,
  SUBTYPE_CDMA: 5,
  SUBTYPE_1XRTT: 6,
  SUBTYPE_GPRS: 7,
  SUBTYPE_EDGE: 8,
  SUBTYPE_UMTS: 9,
  SUBTYPE_EVDO_REV_0: 10,
  SUBTYPE_EVDO_REV_A: 11,
  SUBTYPE_HSPA: 12,
  SUBTYPE_EVDO_REV_B: 13,
  SUBTYPE_HSDPA: 14,
  SUBTYPE_HSUPA: 15,
  SUBTYPE_EHRPD: 16,
  SUBTYPE_HSPAP: 17,
  SUBTYPE_LTE: 18,
  SUBTYPE_LTE_ADVANCED: 19,
  SUBTYPE_BLUETOOTH_1_2: 20,
  SUBTYPE_BLUETOOTH_2_1: 21,
  SUBTYPE_BLUETOOTH_3_0: 22,
  SUBTYPE_BLUETOOTH_4_0: 23,
  SUBTYPE_ETHERNET: 24,
  SUBTYPE_FAST_ETHERNET: 25,
  SUBTYPE_GIGABIT_ETHERNET: 26,
  SUBTYPE_10_GIGABIT_ETHERNET: 27,
  SUBTYPE_WIFI_B: 28,
  SUBTYPE_WIFI_G: 29,
  SUBTYPE_WIFI_N: 30,
  SUBTYPE_WIFI_AC: 31,
  SUBTYPE_WIFI_AD: 32,
  SUBTYPE_LAST: 32,
  MIN_VALUE: 0,
  MAX_VALUE: 32,
};



goog.provide('network.mojom.NetworkChangeManagerClient');
goog.provide('network.mojom.NetworkChangeManagerClientReceiver');
goog.provide('network.mojom.NetworkChangeManagerClientCallbackRouter');
goog.provide('network.mojom.NetworkChangeManagerClientInterface');
goog.provide('network.mojom.NetworkChangeManagerClientRemote');
goog.provide('network.mojom.NetworkChangeManagerClientPendingReceiver');


/**
 * @implements {mojo.internal.interfaceSupport.PendingReceiver}
 * @export
 */
network.mojom.NetworkChangeManagerClientPendingReceiver = class {
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
        network.mojom.NetworkChangeManagerClient.$interfaceName,
        scope);
  }
};

/** @interface */
network.mojom.NetworkChangeManagerClientInterface = class {
  
  /**
   * @param { !network.mojom.ConnectionType } type
   */

  onInitialConnectionType(type) {}
  
  /**
   * @param { !network.mojom.ConnectionType } type
   */

  onNetworkChanged(type) {}
};

/**
 * @export
 * @implements { network.mojom.NetworkChangeManagerClientInterface }
 */
network.mojom.NetworkChangeManagerClientRemote = class {
  /** @param {MojoHandle|mojo.internal.interfaceSupport.Endpoint=} handle */
  constructor(handle = undefined) {
    /**
     * @private {!mojo.internal.interfaceSupport.InterfaceRemoteBase<!network.mojom.NetworkChangeManagerClientPendingReceiver>}
     */
    this.proxy =
        new mojo.internal.interfaceSupport.InterfaceRemoteBase(
          network.mojom.NetworkChangeManagerClientPendingReceiver,
          handle);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper<!network.mojom.NetworkChangeManagerClientPendingReceiver>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper(this.proxy);

    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.proxy.getConnectionErrorEventRouter();
  }

  
  /**
   * @param { !network.mojom.ConnectionType } type
   */

  onInitialConnectionType(
      type) {
    this.proxy.sendMessage(
        0,
        network.mojom.NetworkChangeManagerClient_OnInitialConnectionType_ParamsSpec.$,
        null,
        [
          type
        ]);
  }

  
  /**
   * @param { !network.mojom.ConnectionType } type
   */

  onNetworkChanged(
      type) {
    this.proxy.sendMessage(
        1,
        network.mojom.NetworkChangeManagerClient_OnNetworkChanged_ParamsSpec.$,
        null,
        [
          type
        ]);
  }
};

/**
 * An object which receives request messages for the NetworkChangeManagerClient
 * mojom interface. Must be constructed over an object which implements that
 * interface.
 *
 * @export
 */
network.mojom.NetworkChangeManagerClientReceiver = class {
  /**
   * @param {!network.mojom.NetworkChangeManagerClientInterface } impl
   */
  constructor(impl) {
    /** @private {!mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal<!network.mojom.NetworkChangeManagerClientRemote>} */
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
        network.mojom.NetworkChangeManagerClientRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!network.mojom.NetworkChangeManagerClientRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);


    this.helper_internal_.registerHandler(
        0,
        network.mojom.NetworkChangeManagerClient_OnInitialConnectionType_ParamsSpec.$,
        null,
        impl.onInitialConnectionType.bind(impl));
    this.helper_internal_.registerHandler(
        1,
        network.mojom.NetworkChangeManagerClient_OnNetworkChanged_ParamsSpec.$,
        null,
        impl.onNetworkChanged.bind(impl));
    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.helper_internal_.getConnectionErrorEventRouter();
  }
};

/**
 *  @export
 */
network.mojom.NetworkChangeManagerClient = class {
  /**
   * @return {!string}
   */
  static get $interfaceName() {
    return "network.mojom.NetworkChangeManagerClient";
  }

  /**
   * Returns a remote for this interface which sends messages to the browser.
   * The browser must have an interface request binder registered for this
   * interface and accessible to the calling document's frame.
   *
   * @return {!network.mojom.NetworkChangeManagerClientRemote}
   * @export
   */
  static getRemote() {
    let remote = new network.mojom.NetworkChangeManagerClientRemote;
    remote.$.bindNewPipeAndPassReceiver().bindInBrowser();
    return remote;
  }
};


/**
 * An object which receives request messages for the NetworkChangeManagerClient
 * mojom interface and dispatches them as callbacks. One callback receiver exists
 * on this object for each message defined in the mojom interface, and each
 * receiver can have any number of listeners added to it.
 *
 * @export
 */
network.mojom.NetworkChangeManagerClientCallbackRouter = class {
  constructor() {
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
      network.mojom.NetworkChangeManagerClientRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!network.mojom.NetworkChangeManagerClientRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);

    this.router_ = new mojo.internal.interfaceSupport.CallbackRouter;

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.onInitialConnectionType =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        0,
        network.mojom.NetworkChangeManagerClient_OnInitialConnectionType_ParamsSpec.$,
        null,
        this.onInitialConnectionType.createReceiverHandler(false /* expectsResponse */));
    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.onNetworkChanged =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        1,
        network.mojom.NetworkChangeManagerClient_OnNetworkChanged_ParamsSpec.$,
        null,
        this.onNetworkChanged.createReceiverHandler(false /* expectsResponse */));
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


goog.provide('network.mojom.NetworkChangeManager');
goog.provide('network.mojom.NetworkChangeManagerReceiver');
goog.provide('network.mojom.NetworkChangeManagerCallbackRouter');
goog.provide('network.mojom.NetworkChangeManagerInterface');
goog.provide('network.mojom.NetworkChangeManagerRemote');
goog.provide('network.mojom.NetworkChangeManagerPendingReceiver');


/**
 * @implements {mojo.internal.interfaceSupport.PendingReceiver}
 * @export
 */
network.mojom.NetworkChangeManagerPendingReceiver = class {
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
        network.mojom.NetworkChangeManager.$interfaceName,
        scope);
  }
};

/** @interface */
network.mojom.NetworkChangeManagerInterface = class {
  
  /**
   * @param { !network.mojom.NetworkChangeManagerClientRemote } clientRemote
   */

  requestNotifications(clientRemote) {}
  
  /**
   * @param { !boolean } dnsChanged
   * @param { !boolean } ipAddressChanged
   * @param { !boolean } connectionTypeChanged
   * @param { !network.mojom.ConnectionType } newConnectionType
   * @param { !boolean } connectionSubtypeChanged
   * @param { !network.mojom.ConnectionSubtype } newConnectionSubtype
   */

  onNetworkChanged(dnsChanged, ipAddressChanged, connectionTypeChanged, newConnectionType, connectionSubtypeChanged, newConnectionSubtype) {}
};

/**
 * @export
 * @implements { network.mojom.NetworkChangeManagerInterface }
 */
network.mojom.NetworkChangeManagerRemote = class {
  /** @param {MojoHandle|mojo.internal.interfaceSupport.Endpoint=} handle */
  constructor(handle = undefined) {
    /**
     * @private {!mojo.internal.interfaceSupport.InterfaceRemoteBase<!network.mojom.NetworkChangeManagerPendingReceiver>}
     */
    this.proxy =
        new mojo.internal.interfaceSupport.InterfaceRemoteBase(
          network.mojom.NetworkChangeManagerPendingReceiver,
          handle);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper<!network.mojom.NetworkChangeManagerPendingReceiver>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper(this.proxy);

    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.proxy.getConnectionErrorEventRouter();
  }

  
  /**
   * @param { !network.mojom.NetworkChangeManagerClientRemote } clientRemote
   */

  requestNotifications(
      clientRemote) {
    this.proxy.sendMessage(
        0,
        network.mojom.NetworkChangeManager_RequestNotifications_ParamsSpec.$,
        null,
        [
          clientRemote
        ]);
  }

  
  /**
   * @param { !boolean } dnsChanged
   * @param { !boolean } ipAddressChanged
   * @param { !boolean } connectionTypeChanged
   * @param { !network.mojom.ConnectionType } newConnectionType
   * @param { !boolean } connectionSubtypeChanged
   * @param { !network.mojom.ConnectionSubtype } newConnectionSubtype
   */

  onNetworkChanged(
      dnsChanged,
      ipAddressChanged,
      connectionTypeChanged,
      newConnectionType,
      connectionSubtypeChanged,
      newConnectionSubtype) {
    this.proxy.sendMessage(
        1,
        network.mojom.NetworkChangeManager_OnNetworkChanged_ParamsSpec.$,
        null,
        [
          dnsChanged,
          ipAddressChanged,
          connectionTypeChanged,
          newConnectionType,
          connectionSubtypeChanged,
          newConnectionSubtype
        ]);
  }
};

/**
 * An object which receives request messages for the NetworkChangeManager
 * mojom interface. Must be constructed over an object which implements that
 * interface.
 *
 * @export
 */
network.mojom.NetworkChangeManagerReceiver = class {
  /**
   * @param {!network.mojom.NetworkChangeManagerInterface } impl
   */
  constructor(impl) {
    /** @private {!mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal<!network.mojom.NetworkChangeManagerRemote>} */
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
        network.mojom.NetworkChangeManagerRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!network.mojom.NetworkChangeManagerRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);


    this.helper_internal_.registerHandler(
        0,
        network.mojom.NetworkChangeManager_RequestNotifications_ParamsSpec.$,
        null,
        impl.requestNotifications.bind(impl));
    this.helper_internal_.registerHandler(
        1,
        network.mojom.NetworkChangeManager_OnNetworkChanged_ParamsSpec.$,
        null,
        impl.onNetworkChanged.bind(impl));
    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.helper_internal_.getConnectionErrorEventRouter();
  }
};

/**
 *  @export
 */
network.mojom.NetworkChangeManager = class {
  /**
   * @return {!string}
   */
  static get $interfaceName() {
    return "network.mojom.NetworkChangeManager";
  }

  /**
   * Returns a remote for this interface which sends messages to the browser.
   * The browser must have an interface request binder registered for this
   * interface and accessible to the calling document's frame.
   *
   * @return {!network.mojom.NetworkChangeManagerRemote}
   * @export
   */
  static getRemote() {
    let remote = new network.mojom.NetworkChangeManagerRemote;
    remote.$.bindNewPipeAndPassReceiver().bindInBrowser();
    return remote;
  }
};


/**
 * An object which receives request messages for the NetworkChangeManager
 * mojom interface and dispatches them as callbacks. One callback receiver exists
 * on this object for each message defined in the mojom interface, and each
 * receiver can have any number of listeners added to it.
 *
 * @export
 */
network.mojom.NetworkChangeManagerCallbackRouter = class {
  constructor() {
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
      network.mojom.NetworkChangeManagerRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!network.mojom.NetworkChangeManagerRemote>}
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
        network.mojom.NetworkChangeManager_RequestNotifications_ParamsSpec.$,
        null,
        this.requestNotifications.createReceiverHandler(false /* expectsResponse */));
    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.onNetworkChanged =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        1,
        network.mojom.NetworkChangeManager_OnNetworkChanged_ParamsSpec.$,
        null,
        this.onNetworkChanged.createReceiverHandler(false /* expectsResponse */));
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


goog.provide('network.mojom.NetworkChangeManagerClient_OnInitialConnectionType_ParamsSpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
network.mojom.NetworkChangeManagerClient_OnInitialConnectionType_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

goog.provide('network.mojom.NetworkChangeManagerClient_OnNetworkChanged_ParamsSpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
network.mojom.NetworkChangeManagerClient_OnNetworkChanged_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

goog.provide('network.mojom.NetworkChangeManager_RequestNotifications_ParamsSpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
network.mojom.NetworkChangeManager_RequestNotifications_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

goog.provide('network.mojom.NetworkChangeManager_OnNetworkChanged_ParamsSpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
network.mojom.NetworkChangeManager_OnNetworkChanged_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };




mojo.internal.Struct(
    network.mojom.NetworkChangeManagerClient_OnInitialConnectionType_ParamsSpec.$,
    'NetworkChangeManagerClient_OnInitialConnectionType_Params',
    [
      mojo.internal.StructField(
        'type', 0,
        0,
        network.mojom.ConnectionTypeSpec.$,
        0,
        false /* nullable */),
    ],
    [[0, 16],]);



goog.provide('network.mojom.NetworkChangeManagerClient_OnInitialConnectionType_Params');

/** @record */
network.mojom.NetworkChangeManagerClient_OnInitialConnectionType_Params = class {
  constructor() {
    /** @export { !network.mojom.ConnectionType } */
    this.type;
  }
};




mojo.internal.Struct(
    network.mojom.NetworkChangeManagerClient_OnNetworkChanged_ParamsSpec.$,
    'NetworkChangeManagerClient_OnNetworkChanged_Params',
    [
      mojo.internal.StructField(
        'type', 0,
        0,
        network.mojom.ConnectionTypeSpec.$,
        0,
        false /* nullable */),
    ],
    [[0, 16],]);



goog.provide('network.mojom.NetworkChangeManagerClient_OnNetworkChanged_Params');

/** @record */
network.mojom.NetworkChangeManagerClient_OnNetworkChanged_Params = class {
  constructor() {
    /** @export { !network.mojom.ConnectionType } */
    this.type;
  }
};




mojo.internal.Struct(
    network.mojom.NetworkChangeManager_RequestNotifications_ParamsSpec.$,
    'NetworkChangeManager_RequestNotifications_Params',
    [
      mojo.internal.StructField(
        'clientRemote', 0,
        0,
        mojo.internal.InterfaceProxy(network.mojom.NetworkChangeManagerClientRemote),
        null,
        false /* nullable */),
    ],
    [[0, 16],]);



goog.provide('network.mojom.NetworkChangeManager_RequestNotifications_Params');

/** @record */
network.mojom.NetworkChangeManager_RequestNotifications_Params = class {
  constructor() {
    /** @export { !network.mojom.NetworkChangeManagerClientRemote } */
    this.clientRemote;
  }
};




mojo.internal.Struct(
    network.mojom.NetworkChangeManager_OnNetworkChanged_ParamsSpec.$,
    'NetworkChangeManager_OnNetworkChanged_Params',
    [
      mojo.internal.StructField(
        'dnsChanged', 0,
        0,
        mojo.internal.Bool,
        false,
        false /* nullable */),
      mojo.internal.StructField(
        'ipAddressChanged', 0,
        1,
        mojo.internal.Bool,
        false,
        false /* nullable */),
      mojo.internal.StructField(
        'connectionTypeChanged', 0,
        2,
        mojo.internal.Bool,
        false,
        false /* nullable */),
      mojo.internal.StructField(
        'newConnectionType', 4,
        0,
        network.mojom.ConnectionTypeSpec.$,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'connectionSubtypeChanged', 0,
        3,
        mojo.internal.Bool,
        false,
        false /* nullable */),
      mojo.internal.StructField(
        'newConnectionSubtype', 8,
        0,
        network.mojom.ConnectionSubtypeSpec.$,
        0,
        false /* nullable */),
    ],
    [[0, 24],]);



goog.provide('network.mojom.NetworkChangeManager_OnNetworkChanged_Params');

/** @record */
network.mojom.NetworkChangeManager_OnNetworkChanged_Params = class {
  constructor() {
    /** @export { !boolean } */
    this.dnsChanged;
    /** @export { !boolean } */
    this.ipAddressChanged;
    /** @export { !boolean } */
    this.connectionTypeChanged;
    /** @export { !boolean } */
    this.connectionSubtypeChanged;
    /** @export { !network.mojom.ConnectionType } */
    this.newConnectionType;
    /** @export { !network.mojom.ConnectionSubtype } */
    this.newConnectionSubtype;
  }
};


