// services/device/public/mojom/power_monitor.mojom-lite-for-compile.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
'use strict';

goog.require('mojo.internal');
goog.require('mojo.internal.interfaceSupport');







goog.provide('device.mojom.PowerMonitor');
goog.provide('device.mojom.PowerMonitorReceiver');
goog.provide('device.mojom.PowerMonitorCallbackRouter');
goog.provide('device.mojom.PowerMonitorInterface');
goog.provide('device.mojom.PowerMonitorRemote');
goog.provide('device.mojom.PowerMonitorPendingReceiver');


/**
 * @implements {mojo.internal.interfaceSupport.PendingReceiver}
 * @export
 */
device.mojom.PowerMonitorPendingReceiver = class {
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
        device.mojom.PowerMonitor.$interfaceName,
        scope);
  }
};

/** @interface */
device.mojom.PowerMonitorInterface = class {
  
  /**
   * @param { !device.mojom.PowerMonitorClientRemote } client
   */

  addClient(client) {}
};

/**
 * @export
 * @implements { device.mojom.PowerMonitorInterface }
 */
device.mojom.PowerMonitorRemote = class {
  /** @param {MojoHandle|mojo.internal.interfaceSupport.Endpoint=} handle */
  constructor(handle = undefined) {
    /**
     * @private {!mojo.internal.interfaceSupport.InterfaceRemoteBase<!device.mojom.PowerMonitorPendingReceiver>}
     */
    this.proxy =
        new mojo.internal.interfaceSupport.InterfaceRemoteBase(
          device.mojom.PowerMonitorPendingReceiver,
          handle);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper<!device.mojom.PowerMonitorPendingReceiver>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper(this.proxy);

    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.proxy.getConnectionErrorEventRouter();
  }

  
  /**
   * @param { !device.mojom.PowerMonitorClientRemote } client
   */

  addClient(
      client) {
    this.proxy.sendMessage(
        0,
        device.mojom.PowerMonitor_AddClient_ParamsSpec.$,
        null,
        [
          client
        ]);
  }
};

/**
 * An object which receives request messages for the PowerMonitor
 * mojom interface. Must be constructed over an object which implements that
 * interface.
 *
 * @export
 */
device.mojom.PowerMonitorReceiver = class {
  /**
   * @param {!device.mojom.PowerMonitorInterface } impl
   */
  constructor(impl) {
    /** @private {!mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal<!device.mojom.PowerMonitorRemote>} */
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
        device.mojom.PowerMonitorRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!device.mojom.PowerMonitorRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);


    this.helper_internal_.registerHandler(
        0,
        device.mojom.PowerMonitor_AddClient_ParamsSpec.$,
        null,
        impl.addClient.bind(impl));
    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.helper_internal_.getConnectionErrorEventRouter();
  }
};

/**
 *  @export
 */
device.mojom.PowerMonitor = class {
  /**
   * @return {!string}
   */
  static get $interfaceName() {
    return "device.mojom.PowerMonitor";
  }

  /**
   * Returns a remote for this interface which sends messages to the browser.
   * The browser must have an interface request binder registered for this
   * interface and accessible to the calling document's frame.
   *
   * @return {!device.mojom.PowerMonitorRemote}
   * @export
   */
  static getRemote() {
    let remote = new device.mojom.PowerMonitorRemote;
    remote.$.bindNewPipeAndPassReceiver().bindInBrowser();
    return remote;
  }
};


/**
 * An object which receives request messages for the PowerMonitor
 * mojom interface and dispatches them as callbacks. One callback receiver exists
 * on this object for each message defined in the mojom interface, and each
 * receiver can have any number of listeners added to it.
 *
 * @export
 */
device.mojom.PowerMonitorCallbackRouter = class {
  constructor() {
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
      device.mojom.PowerMonitorRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!device.mojom.PowerMonitorRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);

    this.router_ = new mojo.internal.interfaceSupport.CallbackRouter;

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.addClient =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        0,
        device.mojom.PowerMonitor_AddClient_ParamsSpec.$,
        null,
        this.addClient.createReceiverHandler(false /* expectsResponse */));
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


goog.provide('device.mojom.PowerMonitorClient');
goog.provide('device.mojom.PowerMonitorClientReceiver');
goog.provide('device.mojom.PowerMonitorClientCallbackRouter');
goog.provide('device.mojom.PowerMonitorClientInterface');
goog.provide('device.mojom.PowerMonitorClientRemote');
goog.provide('device.mojom.PowerMonitorClientPendingReceiver');


/**
 * @implements {mojo.internal.interfaceSupport.PendingReceiver}
 * @export
 */
device.mojom.PowerMonitorClientPendingReceiver = class {
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
        device.mojom.PowerMonitorClient.$interfaceName,
        scope);
  }
};

/** @interface */
device.mojom.PowerMonitorClientInterface = class {
  
  /**
   * @param { !boolean } onBatteryPower
   */

  powerStateChange(onBatteryPower) {}
  
  /**
   */

  suspend() {}
  
  /**
   */

  resume() {}
};

/**
 * @export
 * @implements { device.mojom.PowerMonitorClientInterface }
 */
device.mojom.PowerMonitorClientRemote = class {
  /** @param {MojoHandle|mojo.internal.interfaceSupport.Endpoint=} handle */
  constructor(handle = undefined) {
    /**
     * @private {!mojo.internal.interfaceSupport.InterfaceRemoteBase<!device.mojom.PowerMonitorClientPendingReceiver>}
     */
    this.proxy =
        new mojo.internal.interfaceSupport.InterfaceRemoteBase(
          device.mojom.PowerMonitorClientPendingReceiver,
          handle);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper<!device.mojom.PowerMonitorClientPendingReceiver>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper(this.proxy);

    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.proxy.getConnectionErrorEventRouter();
  }

  
  /**
   * @param { !boolean } onBatteryPower
   */

  powerStateChange(
      onBatteryPower) {
    this.proxy.sendMessage(
        0,
        device.mojom.PowerMonitorClient_PowerStateChange_ParamsSpec.$,
        null,
        [
          onBatteryPower
        ]);
  }

  
  /**
   */

  suspend() {
    this.proxy.sendMessage(
        1,
        device.mojom.PowerMonitorClient_Suspend_ParamsSpec.$,
        null,
        [
        ]);
  }

  
  /**
   */

  resume() {
    this.proxy.sendMessage(
        2,
        device.mojom.PowerMonitorClient_Resume_ParamsSpec.$,
        null,
        [
        ]);
  }
};

/**
 * An object which receives request messages for the PowerMonitorClient
 * mojom interface. Must be constructed over an object which implements that
 * interface.
 *
 * @export
 */
device.mojom.PowerMonitorClientReceiver = class {
  /**
   * @param {!device.mojom.PowerMonitorClientInterface } impl
   */
  constructor(impl) {
    /** @private {!mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal<!device.mojom.PowerMonitorClientRemote>} */
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
        device.mojom.PowerMonitorClientRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!device.mojom.PowerMonitorClientRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);


    this.helper_internal_.registerHandler(
        0,
        device.mojom.PowerMonitorClient_PowerStateChange_ParamsSpec.$,
        null,
        impl.powerStateChange.bind(impl));
    this.helper_internal_.registerHandler(
        1,
        device.mojom.PowerMonitorClient_Suspend_ParamsSpec.$,
        null,
        impl.suspend.bind(impl));
    this.helper_internal_.registerHandler(
        2,
        device.mojom.PowerMonitorClient_Resume_ParamsSpec.$,
        null,
        impl.resume.bind(impl));
    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.helper_internal_.getConnectionErrorEventRouter();
  }
};

/**
 *  @export
 */
device.mojom.PowerMonitorClient = class {
  /**
   * @return {!string}
   */
  static get $interfaceName() {
    return "device.mojom.PowerMonitorClient";
  }

  /**
   * Returns a remote for this interface which sends messages to the browser.
   * The browser must have an interface request binder registered for this
   * interface and accessible to the calling document's frame.
   *
   * @return {!device.mojom.PowerMonitorClientRemote}
   * @export
   */
  static getRemote() {
    let remote = new device.mojom.PowerMonitorClientRemote;
    remote.$.bindNewPipeAndPassReceiver().bindInBrowser();
    return remote;
  }
};


/**
 * An object which receives request messages for the PowerMonitorClient
 * mojom interface and dispatches them as callbacks. One callback receiver exists
 * on this object for each message defined in the mojom interface, and each
 * receiver can have any number of listeners added to it.
 *
 * @export
 */
device.mojom.PowerMonitorClientCallbackRouter = class {
  constructor() {
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
      device.mojom.PowerMonitorClientRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!device.mojom.PowerMonitorClientRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);

    this.router_ = new mojo.internal.interfaceSupport.CallbackRouter;

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.powerStateChange =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        0,
        device.mojom.PowerMonitorClient_PowerStateChange_ParamsSpec.$,
        null,
        this.powerStateChange.createReceiverHandler(false /* expectsResponse */));
    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.suspend =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        1,
        device.mojom.PowerMonitorClient_Suspend_ParamsSpec.$,
        null,
        this.suspend.createReceiverHandler(false /* expectsResponse */));
    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.resume =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        2,
        device.mojom.PowerMonitorClient_Resume_ParamsSpec.$,
        null,
        this.resume.createReceiverHandler(false /* expectsResponse */));
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


goog.provide('device.mojom.PowerMonitor_AddClient_ParamsSpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
device.mojom.PowerMonitor_AddClient_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

goog.provide('device.mojom.PowerMonitorClient_PowerStateChange_ParamsSpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
device.mojom.PowerMonitorClient_PowerStateChange_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

goog.provide('device.mojom.PowerMonitorClient_Suspend_ParamsSpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
device.mojom.PowerMonitorClient_Suspend_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

goog.provide('device.mojom.PowerMonitorClient_Resume_ParamsSpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
device.mojom.PowerMonitorClient_Resume_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };




mojo.internal.Struct(
    device.mojom.PowerMonitor_AddClient_ParamsSpec.$,
    'PowerMonitor_AddClient_Params',
    [
      mojo.internal.StructField(
        'client', 0,
        0,
        mojo.internal.InterfaceProxy(device.mojom.PowerMonitorClientRemote),
        null,
        false /* nullable */),
    ],
    [[0, 16],]);



goog.provide('device.mojom.PowerMonitor_AddClient_Params');

/** @record */
device.mojom.PowerMonitor_AddClient_Params = class {
  constructor() {
    /** @export { !device.mojom.PowerMonitorClientRemote } */
    this.client;
  }
};




mojo.internal.Struct(
    device.mojom.PowerMonitorClient_PowerStateChange_ParamsSpec.$,
    'PowerMonitorClient_PowerStateChange_Params',
    [
      mojo.internal.StructField(
        'onBatteryPower', 0,
        0,
        mojo.internal.Bool,
        false,
        false /* nullable */),
    ],
    [[0, 16],]);



goog.provide('device.mojom.PowerMonitorClient_PowerStateChange_Params');

/** @record */
device.mojom.PowerMonitorClient_PowerStateChange_Params = class {
  constructor() {
    /** @export { !boolean } */
    this.onBatteryPower;
  }
};




mojo.internal.Struct(
    device.mojom.PowerMonitorClient_Suspend_ParamsSpec.$,
    'PowerMonitorClient_Suspend_Params',
    [
    ],
    [[0, 8],]);



goog.provide('device.mojom.PowerMonitorClient_Suspend_Params');

/** @record */
device.mojom.PowerMonitorClient_Suspend_Params = class {
  constructor() {
  }
};




mojo.internal.Struct(
    device.mojom.PowerMonitorClient_Resume_ParamsSpec.$,
    'PowerMonitorClient_Resume_Params',
    [
    ],
    [[0, 8],]);



goog.provide('device.mojom.PowerMonitorClient_Resume_Params');

/** @record */
device.mojom.PowerMonitorClient_Resume_Params = class {
  constructor() {
  }
};


