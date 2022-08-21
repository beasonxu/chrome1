// third_party/blink/public/mojom/compute_pressure/pressure_service.mojom-lite-for-compile.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
'use strict';

goog.require('mojo.internal');
goog.require('mojo.internal.interfaceSupport');

goog.require('device.mojom.PressureState');



goog.provide('blink.mojom.MAX_PRESSURE_CPU_UTILIZATION_THRESHOLDS');
/**
 * @const { !number }
 * @export
 */
blink.mojom.MAX_PRESSURE_CPU_UTILIZATION_THRESHOLDS = 3;

goog.provide('blink.mojom.PressureStatus');
goog.provide('blink.mojom.PressureStatusSpec');
/**
 * @const { {$: !mojo.internal.MojomType} }
 * @export
 */
blink.mojom.PressureStatusSpec = { $: mojo.internal.Enum() };

/**
 * @enum {number}
 * @export
 */
blink.mojom.PressureStatus = {
  
  kOk: 0,
  kNotSupported: 1,
  kSecurityError: 2,
  MIN_VALUE: 0,
  MAX_VALUE: 2,
};



goog.provide('blink.mojom.PressureObserver');
goog.provide('blink.mojom.PressureObserverReceiver');
goog.provide('blink.mojom.PressureObserverCallbackRouter');
goog.provide('blink.mojom.PressureObserverInterface');
goog.provide('blink.mojom.PressureObserverRemote');
goog.provide('blink.mojom.PressureObserverPendingReceiver');


/**
 * @implements {mojo.internal.interfaceSupport.PendingReceiver}
 * @export
 */
blink.mojom.PressureObserverPendingReceiver = class {
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
        blink.mojom.PressureObserver.$interfaceName,
        scope);
  }
};

/** @interface */
blink.mojom.PressureObserverInterface = class {
  
  /**
   * @param { !device.mojom.PressureState } state
   */

  onUpdate(state) {}
};

/**
 * @export
 * @implements { blink.mojom.PressureObserverInterface }
 */
blink.mojom.PressureObserverRemote = class {
  /** @param {MojoHandle|mojo.internal.interfaceSupport.Endpoint=} handle */
  constructor(handle = undefined) {
    /**
     * @private {!mojo.internal.interfaceSupport.InterfaceRemoteBase<!blink.mojom.PressureObserverPendingReceiver>}
     */
    this.proxy =
        new mojo.internal.interfaceSupport.InterfaceRemoteBase(
          blink.mojom.PressureObserverPendingReceiver,
          handle);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper<!blink.mojom.PressureObserverPendingReceiver>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper(this.proxy);

    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.proxy.getConnectionErrorEventRouter();
  }

  
  /**
   * @param { !device.mojom.PressureState } state
   */

  onUpdate(
      state) {
    this.proxy.sendMessage(
        0,
        blink.mojom.PressureObserver_OnUpdate_ParamsSpec.$,
        null,
        [
          state
        ]);
  }
};

/**
 * An object which receives request messages for the PressureObserver
 * mojom interface. Must be constructed over an object which implements that
 * interface.
 *
 * @export
 */
blink.mojom.PressureObserverReceiver = class {
  /**
   * @param {!blink.mojom.PressureObserverInterface } impl
   */
  constructor(impl) {
    /** @private {!mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal<!blink.mojom.PressureObserverRemote>} */
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
        blink.mojom.PressureObserverRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!blink.mojom.PressureObserverRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);


    this.helper_internal_.registerHandler(
        0,
        blink.mojom.PressureObserver_OnUpdate_ParamsSpec.$,
        null,
        impl.onUpdate.bind(impl));
    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.helper_internal_.getConnectionErrorEventRouter();
  }
};

/**
 *  @export
 */
blink.mojom.PressureObserver = class {
  /**
   * @return {!string}
   */
  static get $interfaceName() {
    return "blink.mojom.PressureObserver";
  }

  /**
   * Returns a remote for this interface which sends messages to the browser.
   * The browser must have an interface request binder registered for this
   * interface and accessible to the calling document's frame.
   *
   * @return {!blink.mojom.PressureObserverRemote}
   * @export
   */
  static getRemote() {
    let remote = new blink.mojom.PressureObserverRemote;
    remote.$.bindNewPipeAndPassReceiver().bindInBrowser();
    return remote;
  }
};


/**
 * An object which receives request messages for the PressureObserver
 * mojom interface and dispatches them as callbacks. One callback receiver exists
 * on this object for each message defined in the mojom interface, and each
 * receiver can have any number of listeners added to it.
 *
 * @export
 */
blink.mojom.PressureObserverCallbackRouter = class {
  constructor() {
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
      blink.mojom.PressureObserverRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!blink.mojom.PressureObserverRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);

    this.router_ = new mojo.internal.interfaceSupport.CallbackRouter;

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.onUpdate =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        0,
        blink.mojom.PressureObserver_OnUpdate_ParamsSpec.$,
        null,
        this.onUpdate.createReceiverHandler(false /* expectsResponse */));
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


goog.provide('blink.mojom.PressureService');
goog.provide('blink.mojom.PressureServiceReceiver');
goog.provide('blink.mojom.PressureServiceCallbackRouter');
goog.provide('blink.mojom.PressureServiceInterface');
goog.provide('blink.mojom.PressureServiceRemote');
goog.provide('blink.mojom.PressureServicePendingReceiver');


/**
 * @implements {mojo.internal.interfaceSupport.PendingReceiver}
 * @export
 */
blink.mojom.PressureServicePendingReceiver = class {
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
        blink.mojom.PressureService.$interfaceName,
        scope);
  }
};

/** @interface */
blink.mojom.PressureServiceInterface = class {
  
  /**
   * @param { !blink.mojom.PressureObserverRemote } observer
   * @param { !blink.mojom.PressureQuantization } quantization
   * @return {!Promise<{
        status: !blink.mojom.PressureStatus,
   *  }>}
   */

  addObserver(observer, quantization) {}
};

/**
 * @export
 * @implements { blink.mojom.PressureServiceInterface }
 */
blink.mojom.PressureServiceRemote = class {
  /** @param {MojoHandle|mojo.internal.interfaceSupport.Endpoint=} handle */
  constructor(handle = undefined) {
    /**
     * @private {!mojo.internal.interfaceSupport.InterfaceRemoteBase<!blink.mojom.PressureServicePendingReceiver>}
     */
    this.proxy =
        new mojo.internal.interfaceSupport.InterfaceRemoteBase(
          blink.mojom.PressureServicePendingReceiver,
          handle);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper<!blink.mojom.PressureServicePendingReceiver>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper(this.proxy);

    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.proxy.getConnectionErrorEventRouter();
  }

  
  /**
   * @param { !blink.mojom.PressureObserverRemote } observer
   * @param { !blink.mojom.PressureQuantization } quantization
   * @return {!Promise<{
        status: !blink.mojom.PressureStatus,
   *  }>}
   */

  addObserver(
      observer,
      quantization) {
    return this.proxy.sendMessage(
        0,
        blink.mojom.PressureService_AddObserver_ParamsSpec.$,
        blink.mojom.PressureService_AddObserver_ResponseParamsSpec.$,
        [
          observer,
          quantization
        ]);
  }
};

/**
 * An object which receives request messages for the PressureService
 * mojom interface. Must be constructed over an object which implements that
 * interface.
 *
 * @export
 */
blink.mojom.PressureServiceReceiver = class {
  /**
   * @param {!blink.mojom.PressureServiceInterface } impl
   */
  constructor(impl) {
    /** @private {!mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal<!blink.mojom.PressureServiceRemote>} */
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
        blink.mojom.PressureServiceRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!blink.mojom.PressureServiceRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);


    this.helper_internal_.registerHandler(
        0,
        blink.mojom.PressureService_AddObserver_ParamsSpec.$,
        blink.mojom.PressureService_AddObserver_ResponseParamsSpec.$,
        impl.addObserver.bind(impl));
    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.helper_internal_.getConnectionErrorEventRouter();
  }
};

/**
 *  @export
 */
blink.mojom.PressureService = class {
  /**
   * @return {!string}
   */
  static get $interfaceName() {
    return "blink.mojom.PressureService";
  }

  /**
   * Returns a remote for this interface which sends messages to the browser.
   * The browser must have an interface request binder registered for this
   * interface and accessible to the calling document's frame.
   *
   * @return {!blink.mojom.PressureServiceRemote}
   * @export
   */
  static getRemote() {
    let remote = new blink.mojom.PressureServiceRemote;
    remote.$.bindNewPipeAndPassReceiver().bindInBrowser();
    return remote;
  }
};


/**
 * An object which receives request messages for the PressureService
 * mojom interface and dispatches them as callbacks. One callback receiver exists
 * on this object for each message defined in the mojom interface, and each
 * receiver can have any number of listeners added to it.
 *
 * @export
 */
blink.mojom.PressureServiceCallbackRouter = class {
  constructor() {
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
      blink.mojom.PressureServiceRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!blink.mojom.PressureServiceRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);

    this.router_ = new mojo.internal.interfaceSupport.CallbackRouter;

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.addObserver =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        0,
        blink.mojom.PressureService_AddObserver_ParamsSpec.$,
        blink.mojom.PressureService_AddObserver_ResponseParamsSpec.$,
        this.addObserver.createReceiverHandler(true /* expectsResponse */));
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


goog.provide('blink.mojom.PressureQuantizationSpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
blink.mojom.PressureQuantizationSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

goog.provide('blink.mojom.PressureObserver_OnUpdate_ParamsSpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
blink.mojom.PressureObserver_OnUpdate_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

goog.provide('blink.mojom.PressureService_AddObserver_ParamsSpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
blink.mojom.PressureService_AddObserver_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

goog.provide('blink.mojom.PressureService_AddObserver_ResponseParamsSpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
blink.mojom.PressureService_AddObserver_ResponseParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };




mojo.internal.Struct(
    blink.mojom.PressureQuantizationSpec.$,
    'PressureQuantization',
    [
      mojo.internal.StructField(
        'cpuUtilizationThresholds', 0,
        0,
        mojo.internal.Array(mojo.internal.Double, false),
        null,
        false /* nullable */),
    ],
    [[0, 16],]);



goog.provide('blink.mojom.PressureQuantization');

/** @record */
blink.mojom.PressureQuantization = class {
  constructor() {
    /** @export { !Array<!number> } */
    this.cpuUtilizationThresholds;
  }
};




mojo.internal.Struct(
    blink.mojom.PressureObserver_OnUpdate_ParamsSpec.$,
    'PressureObserver_OnUpdate_Params',
    [
      mojo.internal.StructField(
        'state', 0,
        0,
        device.mojom.PressureStateSpec.$,
        null,
        false /* nullable */),
    ],
    [[0, 16],]);



goog.provide('blink.mojom.PressureObserver_OnUpdate_Params');

/** @record */
blink.mojom.PressureObserver_OnUpdate_Params = class {
  constructor() {
    /** @export { !device.mojom.PressureState } */
    this.state;
  }
};




mojo.internal.Struct(
    blink.mojom.PressureService_AddObserver_ParamsSpec.$,
    'PressureService_AddObserver_Params',
    [
      mojo.internal.StructField(
        'observer', 0,
        0,
        mojo.internal.InterfaceProxy(blink.mojom.PressureObserverRemote),
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'quantization', 8,
        0,
        blink.mojom.PressureQuantizationSpec.$,
        null,
        false /* nullable */),
    ],
    [[0, 24],]);



goog.provide('blink.mojom.PressureService_AddObserver_Params');

/** @record */
blink.mojom.PressureService_AddObserver_Params = class {
  constructor() {
    /** @export { !blink.mojom.PressureObserverRemote } */
    this.observer;
    /** @export { !blink.mojom.PressureQuantization } */
    this.quantization;
  }
};




mojo.internal.Struct(
    blink.mojom.PressureService_AddObserver_ResponseParamsSpec.$,
    'PressureService_AddObserver_ResponseParams',
    [
      mojo.internal.StructField(
        'status', 0,
        0,
        blink.mojom.PressureStatusSpec.$,
        0,
        false /* nullable */),
    ],
    [[0, 16],]);



goog.provide('blink.mojom.PressureService_AddObserver_ResponseParams');

/** @record */
blink.mojom.PressureService_AddObserver_ResponseParams = class {
  constructor() {
    /** @export { !blink.mojom.PressureStatus } */
    this.status;
  }
};


