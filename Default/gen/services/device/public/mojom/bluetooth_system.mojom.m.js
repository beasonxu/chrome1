// services/device/public/mojom/bluetooth_system.mojom.m.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2020 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

import {mojo} from '../../../../mojo/public/js/bindings.js';




/**
 * @implements {mojo.internal.interfaceSupport.PendingReceiver}
 */
export class BluetoothSystemFactoryPendingReceiver {
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
        this.handle, 'device.mojom.BluetoothSystemFactory', scope);
  }
}

/** @interface */
export class BluetoothSystemFactoryInterface {
  
  /**
   * @param { !BluetoothSystemPendingReceiver } system
   * @param { !BluetoothSystemClientRemote } systemClient
   */

  create(system, systemClient) {}
}

/**
 * @implements { BluetoothSystemFactoryInterface }
 */
export class BluetoothSystemFactoryRemote {
  /** @param {MojoHandle|mojo.internal.interfaceSupport.Endpoint=} handle */
  constructor(handle = undefined) {
    /**
     * @private {!mojo.internal.interfaceSupport.InterfaceRemoteBase<!BluetoothSystemFactoryPendingReceiver>}
     */
    this.proxy =
        new mojo.internal.interfaceSupport.InterfaceRemoteBase(
          BluetoothSystemFactoryPendingReceiver,
          handle);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper<!BluetoothSystemFactoryPendingReceiver>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper(this.proxy);

    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.proxy.getConnectionErrorEventRouter();
  }

  
  /**
   * @param { !BluetoothSystemPendingReceiver } system
   * @param { !BluetoothSystemClientRemote } systemClient
   */

  create(
      system,
      systemClient) {
    this.proxy.sendMessage(
        0,
        BluetoothSystemFactory_Create_ParamsSpec.$,
        null,
        [
          system,
          systemClient
        ]);
  }
}

/**
 * An object which receives request messages for the BluetoothSystemFactory
 * mojom interface. Must be constructed over an object which implements that
 * interface.
 */
export class BluetoothSystemFactoryReceiver {
  /**
   * @param {!BluetoothSystemFactoryInterface } impl
   */
  constructor(impl) {
    /** @private {!mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal<!BluetoothSystemFactoryRemote>} */
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
        BluetoothSystemFactoryRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!BluetoothSystemFactoryRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);


    this.helper_internal_.registerHandler(
        0,
        BluetoothSystemFactory_Create_ParamsSpec.$,
        null,
        impl.create.bind(impl));
    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.helper_internal_.getConnectionErrorEventRouter();
  }
}

export class BluetoothSystemFactory {
  /**
   * @return {!string}
   */
  static get $interfaceName() {
    return "device.mojom.BluetoothSystemFactory";
  }

  /**
   * Returns a remote for this interface which sends messages to the browser.
   * The browser must have an interface request binder registered for this
   * interface and accessible to the calling document's frame.
   *
   * @return {!BluetoothSystemFactoryRemote}
   */
  static getRemote() {
    let remote = new BluetoothSystemFactoryRemote;
    remote.$.bindNewPipeAndPassReceiver().bindInBrowser();
    return remote;
  }
}


/**
 * An object which receives request messages for the BluetoothSystemFactory
 * mojom interface and dispatches them as callbacks. One callback receiver exists
 * on this object for each message defined in the mojom interface, and each
 * receiver can have any number of listeners added to it.
 */
export class BluetoothSystemFactoryCallbackRouter {
  constructor() {
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
      BluetoothSystemFactoryRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!BluetoothSystemFactoryRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);

    this.router_ = new mojo.internal.interfaceSupport.CallbackRouter;

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.create =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        0,
        BluetoothSystemFactory_Create_ParamsSpec.$,
        null,
        this.create.createReceiverHandler(false /* expectsResponse */));
    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.helper_internal_.getConnectionErrorEventRouter();
  }

  /**
   * @param {number} id An ID returned by a prior call to addListener.
   * @return {boolean} True iff the identified listener was found and removed.
   */
  removeListener(id) {
    return this.router_.removeListener(id);
  }
}


/**
 * @implements {mojo.internal.interfaceSupport.PendingReceiver}
 */
export class BluetoothSystemPendingReceiver {
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
        this.handle, 'device.mojom.BluetoothSystem', scope);
  }
}

/** @interface */
export class BluetoothSystemInterface {
  
  /**
   * @return {!Promise<{
        state: !BluetoothSystem_State,
   *  }>}
   */

  getState() {}
  
  /**
   * @param { !boolean } powered
   * @return {!Promise<{
        result: !BluetoothSystem_SetPoweredResult,
   *  }>}
   */

  setPowered(powered) {}
  
  /**
   * @return {!Promise<{
        scanState: !BluetoothSystem_ScanState,
   *  }>}
   */

  getScanState() {}
  
  /**
   * @return {!Promise<{
        result: !BluetoothSystem_StartScanResult,
   *  }>}
   */

  startScan() {}
  
  /**
   * @return {!Promise<{
        result: !BluetoothSystem_StopScanResult,
   *  }>}
   */

  stopScan() {}
  
  /**
   * @return {!Promise<{
        devices: !Array<!BluetoothDeviceInfo>,
   *  }>}
   */

  getAvailableDevices() {}
}

/**
 * @implements { BluetoothSystemInterface }
 */
export class BluetoothSystemRemote {
  /** @param {MojoHandle|mojo.internal.interfaceSupport.Endpoint=} handle */
  constructor(handle = undefined) {
    /**
     * @private {!mojo.internal.interfaceSupport.InterfaceRemoteBase<!BluetoothSystemPendingReceiver>}
     */
    this.proxy =
        new mojo.internal.interfaceSupport.InterfaceRemoteBase(
          BluetoothSystemPendingReceiver,
          handle);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper<!BluetoothSystemPendingReceiver>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper(this.proxy);

    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.proxy.getConnectionErrorEventRouter();
  }

  
  /**
   * @return {!Promise<{
        state: !BluetoothSystem_State,
   *  }>}
   */

  getState() {
    return this.proxy.sendMessage(
        0,
        BluetoothSystem_GetState_ParamsSpec.$,
        BluetoothSystem_GetState_ResponseParamsSpec.$,
        [
        ]);
  }

  
  /**
   * @param { !boolean } powered
   * @return {!Promise<{
        result: !BluetoothSystem_SetPoweredResult,
   *  }>}
   */

  setPowered(
      powered) {
    return this.proxy.sendMessage(
        1,
        BluetoothSystem_SetPowered_ParamsSpec.$,
        BluetoothSystem_SetPowered_ResponseParamsSpec.$,
        [
          powered
        ]);
  }

  
  /**
   * @return {!Promise<{
        scanState: !BluetoothSystem_ScanState,
   *  }>}
   */

  getScanState() {
    return this.proxy.sendMessage(
        2,
        BluetoothSystem_GetScanState_ParamsSpec.$,
        BluetoothSystem_GetScanState_ResponseParamsSpec.$,
        [
        ]);
  }

  
  /**
   * @return {!Promise<{
        result: !BluetoothSystem_StartScanResult,
   *  }>}
   */

  startScan() {
    return this.proxy.sendMessage(
        3,
        BluetoothSystem_StartScan_ParamsSpec.$,
        BluetoothSystem_StartScan_ResponseParamsSpec.$,
        [
        ]);
  }

  
  /**
   * @return {!Promise<{
        result: !BluetoothSystem_StopScanResult,
   *  }>}
   */

  stopScan() {
    return this.proxy.sendMessage(
        4,
        BluetoothSystem_StopScan_ParamsSpec.$,
        BluetoothSystem_StopScan_ResponseParamsSpec.$,
        [
        ]);
  }

  
  /**
   * @return {!Promise<{
        devices: !Array<!BluetoothDeviceInfo>,
   *  }>}
   */

  getAvailableDevices() {
    return this.proxy.sendMessage(
        5,
        BluetoothSystem_GetAvailableDevices_ParamsSpec.$,
        BluetoothSystem_GetAvailableDevices_ResponseParamsSpec.$,
        [
        ]);
  }
}

/**
 * An object which receives request messages for the BluetoothSystem
 * mojom interface. Must be constructed over an object which implements that
 * interface.
 */
export class BluetoothSystemReceiver {
  /**
   * @param {!BluetoothSystemInterface } impl
   */
  constructor(impl) {
    /** @private {!mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal<!BluetoothSystemRemote>} */
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
        BluetoothSystemRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!BluetoothSystemRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);


    this.helper_internal_.registerHandler(
        0,
        BluetoothSystem_GetState_ParamsSpec.$,
        BluetoothSystem_GetState_ResponseParamsSpec.$,
        impl.getState.bind(impl));
    this.helper_internal_.registerHandler(
        1,
        BluetoothSystem_SetPowered_ParamsSpec.$,
        BluetoothSystem_SetPowered_ResponseParamsSpec.$,
        impl.setPowered.bind(impl));
    this.helper_internal_.registerHandler(
        2,
        BluetoothSystem_GetScanState_ParamsSpec.$,
        BluetoothSystem_GetScanState_ResponseParamsSpec.$,
        impl.getScanState.bind(impl));
    this.helper_internal_.registerHandler(
        3,
        BluetoothSystem_StartScan_ParamsSpec.$,
        BluetoothSystem_StartScan_ResponseParamsSpec.$,
        impl.startScan.bind(impl));
    this.helper_internal_.registerHandler(
        4,
        BluetoothSystem_StopScan_ParamsSpec.$,
        BluetoothSystem_StopScan_ResponseParamsSpec.$,
        impl.stopScan.bind(impl));
    this.helper_internal_.registerHandler(
        5,
        BluetoothSystem_GetAvailableDevices_ParamsSpec.$,
        BluetoothSystem_GetAvailableDevices_ResponseParamsSpec.$,
        impl.getAvailableDevices.bind(impl));
    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.helper_internal_.getConnectionErrorEventRouter();
  }
}

export class BluetoothSystem {
  /**
   * @return {!string}
   */
  static get $interfaceName() {
    return "device.mojom.BluetoothSystem";
  }

  /**
   * Returns a remote for this interface which sends messages to the browser.
   * The browser must have an interface request binder registered for this
   * interface and accessible to the calling document's frame.
   *
   * @return {!BluetoothSystemRemote}
   */
  static getRemote() {
    let remote = new BluetoothSystemRemote;
    remote.$.bindNewPipeAndPassReceiver().bindInBrowser();
    return remote;
  }
}

/**
 * @const { {$: !mojo.internal.MojomType} }
 */
export const BluetoothSystem_StateSpec = { $: mojo.internal.Enum() };

/**
 * @enum {number}
 */
export const BluetoothSystem_State = {
  
  kUnsupported: 0,
  kUnavailable: 1,
  kPoweredOff: 2,
  kTransitioning: 3,
  kPoweredOn: 4,
  MIN_VALUE: 0,
  MAX_VALUE: 4,
};
/**
 * @const { {$: !mojo.internal.MojomType} }
 */
export const BluetoothSystem_SetPoweredResultSpec = { $: mojo.internal.Enum() };

/**
 * @enum {number}
 */
export const BluetoothSystem_SetPoweredResult = {
  
  kSuccess: 0,
  kFailedUnknownReason: 1,
  kFailedBluetoothUnavailable: 2,
  kFailedInProgress: 3,
  MIN_VALUE: 0,
  MAX_VALUE: 3,
};
/**
 * @const { {$: !mojo.internal.MojomType} }
 */
export const BluetoothSystem_ScanStateSpec = { $: mojo.internal.Enum() };

/**
 * @enum {number}
 */
export const BluetoothSystem_ScanState = {
  
  kNotScanning: 0,
  kTransitioning: 1,
  kScanning: 2,
  MIN_VALUE: 0,
  MAX_VALUE: 2,
};
/**
 * @const { {$: !mojo.internal.MojomType} }
 */
export const BluetoothSystem_StartScanResultSpec = { $: mojo.internal.Enum() };

/**
 * @enum {number}
 */
export const BluetoothSystem_StartScanResult = {
  
  kSuccess: 0,
  kFailedUnknownReason: 1,
  kFailedBluetoothUnavailable: 2,
  MIN_VALUE: 0,
  MAX_VALUE: 2,
};
/**
 * @const { {$: !mojo.internal.MojomType} }
 */
export const BluetoothSystem_StopScanResultSpec = { $: mojo.internal.Enum() };

/**
 * @enum {number}
 */
export const BluetoothSystem_StopScanResult = {
  
  kSuccess: 0,
  kFailedUnknownReason: 1,
  kFailedBluetoothUnavailable: 2,
  MIN_VALUE: 0,
  MAX_VALUE: 2,
};

/**
 * An object which receives request messages for the BluetoothSystem
 * mojom interface and dispatches them as callbacks. One callback receiver exists
 * on this object for each message defined in the mojom interface, and each
 * receiver can have any number of listeners added to it.
 */
export class BluetoothSystemCallbackRouter {
  constructor() {
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
      BluetoothSystemRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!BluetoothSystemRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);

    this.router_ = new mojo.internal.interfaceSupport.CallbackRouter;

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.getState =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        0,
        BluetoothSystem_GetState_ParamsSpec.$,
        BluetoothSystem_GetState_ResponseParamsSpec.$,
        this.getState.createReceiverHandler(true /* expectsResponse */));
    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.setPowered =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        1,
        BluetoothSystem_SetPowered_ParamsSpec.$,
        BluetoothSystem_SetPowered_ResponseParamsSpec.$,
        this.setPowered.createReceiverHandler(true /* expectsResponse */));
    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.getScanState =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        2,
        BluetoothSystem_GetScanState_ParamsSpec.$,
        BluetoothSystem_GetScanState_ResponseParamsSpec.$,
        this.getScanState.createReceiverHandler(true /* expectsResponse */));
    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.startScan =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        3,
        BluetoothSystem_StartScan_ParamsSpec.$,
        BluetoothSystem_StartScan_ResponseParamsSpec.$,
        this.startScan.createReceiverHandler(true /* expectsResponse */));
    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.stopScan =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        4,
        BluetoothSystem_StopScan_ParamsSpec.$,
        BluetoothSystem_StopScan_ResponseParamsSpec.$,
        this.stopScan.createReceiverHandler(true /* expectsResponse */));
    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.getAvailableDevices =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        5,
        BluetoothSystem_GetAvailableDevices_ParamsSpec.$,
        BluetoothSystem_GetAvailableDevices_ResponseParamsSpec.$,
        this.getAvailableDevices.createReceiverHandler(true /* expectsResponse */));
    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.helper_internal_.getConnectionErrorEventRouter();
  }

  /**
   * @param {number} id An ID returned by a prior call to addListener.
   * @return {boolean} True iff the identified listener was found and removed.
   */
  removeListener(id) {
    return this.router_.removeListener(id);
  }
}


/**
 * @implements {mojo.internal.interfaceSupport.PendingReceiver}
 */
export class BluetoothSystemClientPendingReceiver {
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
        this.handle, 'device.mojom.BluetoothSystemClient', scope);
  }
}

/** @interface */
export class BluetoothSystemClientInterface {
  
  /**
   * @param { !BluetoothSystem_State } newState
   */

  onStateChanged(newState) {}
  
  /**
   * @param { !BluetoothSystem_ScanState } newState
   */

  onScanStateChanged(newState) {}
}

/**
 * @implements { BluetoothSystemClientInterface }
 */
export class BluetoothSystemClientRemote {
  /** @param {MojoHandle|mojo.internal.interfaceSupport.Endpoint=} handle */
  constructor(handle = undefined) {
    /**
     * @private {!mojo.internal.interfaceSupport.InterfaceRemoteBase<!BluetoothSystemClientPendingReceiver>}
     */
    this.proxy =
        new mojo.internal.interfaceSupport.InterfaceRemoteBase(
          BluetoothSystemClientPendingReceiver,
          handle);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper<!BluetoothSystemClientPendingReceiver>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper(this.proxy);

    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.proxy.getConnectionErrorEventRouter();
  }

  
  /**
   * @param { !BluetoothSystem_State } newState
   */

  onStateChanged(
      newState) {
    this.proxy.sendMessage(
        0,
        BluetoothSystemClient_OnStateChanged_ParamsSpec.$,
        null,
        [
          newState
        ]);
  }

  
  /**
   * @param { !BluetoothSystem_ScanState } newState
   */

  onScanStateChanged(
      newState) {
    this.proxy.sendMessage(
        1,
        BluetoothSystemClient_OnScanStateChanged_ParamsSpec.$,
        null,
        [
          newState
        ]);
  }
}

/**
 * An object which receives request messages for the BluetoothSystemClient
 * mojom interface. Must be constructed over an object which implements that
 * interface.
 */
export class BluetoothSystemClientReceiver {
  /**
   * @param {!BluetoothSystemClientInterface } impl
   */
  constructor(impl) {
    /** @private {!mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal<!BluetoothSystemClientRemote>} */
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
        BluetoothSystemClientRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!BluetoothSystemClientRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);


    this.helper_internal_.registerHandler(
        0,
        BluetoothSystemClient_OnStateChanged_ParamsSpec.$,
        null,
        impl.onStateChanged.bind(impl));
    this.helper_internal_.registerHandler(
        1,
        BluetoothSystemClient_OnScanStateChanged_ParamsSpec.$,
        null,
        impl.onScanStateChanged.bind(impl));
    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.helper_internal_.getConnectionErrorEventRouter();
  }
}

export class BluetoothSystemClient {
  /**
   * @return {!string}
   */
  static get $interfaceName() {
    return "device.mojom.BluetoothSystemClient";
  }

  /**
   * Returns a remote for this interface which sends messages to the browser.
   * The browser must have an interface request binder registered for this
   * interface and accessible to the calling document's frame.
   *
   * @return {!BluetoothSystemClientRemote}
   */
  static getRemote() {
    let remote = new BluetoothSystemClientRemote;
    remote.$.bindNewPipeAndPassReceiver().bindInBrowser();
    return remote;
  }
}


/**
 * An object which receives request messages for the BluetoothSystemClient
 * mojom interface and dispatches them as callbacks. One callback receiver exists
 * on this object for each message defined in the mojom interface, and each
 * receiver can have any number of listeners added to it.
 */
export class BluetoothSystemClientCallbackRouter {
  constructor() {
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
      BluetoothSystemClientRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!BluetoothSystemClientRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);

    this.router_ = new mojo.internal.interfaceSupport.CallbackRouter;

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.onStateChanged =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        0,
        BluetoothSystemClient_OnStateChanged_ParamsSpec.$,
        null,
        this.onStateChanged.createReceiverHandler(false /* expectsResponse */));
    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.onScanStateChanged =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        1,
        BluetoothSystemClient_OnScanStateChanged_ParamsSpec.$,
        null,
        this.onScanStateChanged.createReceiverHandler(false /* expectsResponse */));
    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.helper_internal_.getConnectionErrorEventRouter();
  }

  /**
   * @param {number} id An ID returned by a prior call to addListener.
   * @return {boolean} True iff the identified listener was found and removed.
   */
  removeListener(id) {
    return this.router_.removeListener(id);
  }
}

/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const BluetoothAddressSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const BluetoothDeviceBatteryInfoSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const BluetoothDeviceInfoSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const BluetoothSystemFactory_Create_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const BluetoothSystem_GetState_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const BluetoothSystem_GetState_ResponseParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const BluetoothSystem_SetPowered_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const BluetoothSystem_SetPowered_ResponseParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const BluetoothSystem_GetScanState_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const BluetoothSystem_GetScanState_ResponseParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const BluetoothSystem_StartScan_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const BluetoothSystem_StartScan_ResponseParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const BluetoothSystem_StopScan_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const BluetoothSystem_StopScan_ResponseParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const BluetoothSystem_GetAvailableDevices_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const BluetoothSystem_GetAvailableDevices_ResponseParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const BluetoothSystemClient_OnStateChanged_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const BluetoothSystemClient_OnScanStateChanged_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };




mojo.internal.Struct(
    BluetoothAddressSpec.$,
    'BluetoothAddress',
    [
      mojo.internal.StructField(
        'address', 0,
        0,
        mojo.internal.Array(mojo.internal.Uint8, false),
        null,
        false /* nullable */,
        0),
    ],
    [[0, 16],]);



/**
 * @record
 */
export class BluetoothAddress {
  constructor() {
    /** @type { !Array<!number> } */
    this.address;
  }
}



mojo.internal.Struct(
    BluetoothDeviceBatteryInfoSpec.$,
    'BluetoothDeviceBatteryInfo',
    [
      mojo.internal.StructField(
        'batteryPercentage', 0,
        0,
        mojo.internal.Uint8,
        0,
        false /* nullable */,
        0),
    ],
    [[0, 16],]);



/**
 * @record
 */
export class BluetoothDeviceBatteryInfo {
  constructor() {
    /** @type { !number } */
    this.batteryPercentage;
  }
}


/**
 * @const { {$: !mojo.internal.MojomType} }
 */
export const BluetoothDeviceInfo_ConnectionStateSpec = { $: mojo.internal.Enum() };

/**
 * @enum {number}
 */
export const BluetoothDeviceInfo_ConnectionState = {
  
  kNotConnected: 0,
  kConnecting: 1,
  kConnected: 2,
  MIN_VALUE: 0,
  MAX_VALUE: 2,
};

/**
 * @const { {$: !mojo.internal.MojomType} }
 */
export const BluetoothDeviceInfo_DeviceTypeSpec = { $: mojo.internal.Enum() };

/**
 * @enum {number}
 */
export const BluetoothDeviceInfo_DeviceType = {
  
  kUnknown: 0,
  kComputer: 1,
  kPhone: 2,
  kModem: 3,
  kAudio: 4,
  kCarAudio: 5,
  kVideo: 6,
  kPeripheral: 7,
  kJoystick: 8,
  kGamepad: 9,
  kKeyboard: 10,
  kMouse: 11,
  kTablet: 12,
  kKeyboardMouseCombo: 13,
  MIN_VALUE: 0,
  MAX_VALUE: 13,
};


mojo.internal.Struct(
    BluetoothDeviceInfoSpec.$,
    'BluetoothDeviceInfo',
    [
      mojo.internal.StructField(
        'address', 0,
        0,
        BluetoothAddressSpec.$,
        null,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'name', 8,
        0,
        mojo.internal.String,
        null,
        true /* nullable */,
        0),
      mojo.internal.StructField(
        'connectionState', 16,
        0,
        BluetoothDeviceInfo_ConnectionStateSpec.$,
        0,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'isPaired', 20,
        0,
        mojo.internal.Bool,
        false,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'deviceType', 24,
        0,
        BluetoothDeviceInfo_DeviceTypeSpec.$,
        0,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'batteryInfo', 32,
        0,
        BluetoothDeviceBatteryInfoSpec.$,
        null,
        true /* nullable */,
        0),
      mojo.internal.StructField(
        'isBlockedByPolicy', 20,
        1,
        mojo.internal.Bool,
        false,
        false /* nullable */,
        0),
    ],
    [[0, 48],]);



/**
 * @record
 */
export class BluetoothDeviceInfo {
  constructor() {
    /** @type { !BluetoothAddress } */
    this.address;
    /** @type { (string|undefined) } */
    this.name;
    /** @type { !BluetoothDeviceInfo_ConnectionState } */
    this.connectionState;
    /** @type { !boolean } */
    this.isPaired;
    /** @type { !boolean } */
    this.isBlockedByPolicy;
    /** @type { !BluetoothDeviceInfo_DeviceType } */
    this.deviceType;
    /** @type { (BluetoothDeviceBatteryInfo|undefined) } */
    this.batteryInfo;
  }
}



mojo.internal.Struct(
    BluetoothSystemFactory_Create_ParamsSpec.$,
    'BluetoothSystemFactory_Create_Params',
    [
      mojo.internal.StructField(
        'system', 0,
        0,
        mojo.internal.InterfaceRequest(BluetoothSystemPendingReceiver),
        null,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'systemClient', 4,
        0,
        mojo.internal.InterfaceProxy(BluetoothSystemClientRemote),
        null,
        false /* nullable */,
        0),
    ],
    [[0, 24],]);



/**
 * @record
 */
export class BluetoothSystemFactory_Create_Params {
  constructor() {
    /** @type { !BluetoothSystemPendingReceiver } */
    this.system;
    /** @type { !BluetoothSystemClientRemote } */
    this.systemClient;
  }
}



mojo.internal.Struct(
    BluetoothSystem_GetState_ParamsSpec.$,
    'BluetoothSystem_GetState_Params',
    [
    ],
    [[0, 8],]);



/**
 * @record
 */
export class BluetoothSystem_GetState_Params {
  constructor() {
  }
}



mojo.internal.Struct(
    BluetoothSystem_GetState_ResponseParamsSpec.$,
    'BluetoothSystem_GetState_ResponseParams',
    [
      mojo.internal.StructField(
        'state', 0,
        0,
        BluetoothSystem_StateSpec.$,
        0,
        false /* nullable */,
        0),
    ],
    [[0, 16],]);



/**
 * @record
 */
export class BluetoothSystem_GetState_ResponseParams {
  constructor() {
    /** @type { !BluetoothSystem_State } */
    this.state;
  }
}



mojo.internal.Struct(
    BluetoothSystem_SetPowered_ParamsSpec.$,
    'BluetoothSystem_SetPowered_Params',
    [
      mojo.internal.StructField(
        'powered', 0,
        0,
        mojo.internal.Bool,
        false,
        false /* nullable */,
        0),
    ],
    [[0, 16],]);



/**
 * @record
 */
export class BluetoothSystem_SetPowered_Params {
  constructor() {
    /** @type { !boolean } */
    this.powered;
  }
}



mojo.internal.Struct(
    BluetoothSystem_SetPowered_ResponseParamsSpec.$,
    'BluetoothSystem_SetPowered_ResponseParams',
    [
      mojo.internal.StructField(
        'result', 0,
        0,
        BluetoothSystem_SetPoweredResultSpec.$,
        0,
        false /* nullable */,
        0),
    ],
    [[0, 16],]);



/**
 * @record
 */
export class BluetoothSystem_SetPowered_ResponseParams {
  constructor() {
    /** @type { !BluetoothSystem_SetPoweredResult } */
    this.result;
  }
}



mojo.internal.Struct(
    BluetoothSystem_GetScanState_ParamsSpec.$,
    'BluetoothSystem_GetScanState_Params',
    [
    ],
    [[0, 8],]);



/**
 * @record
 */
export class BluetoothSystem_GetScanState_Params {
  constructor() {
  }
}



mojo.internal.Struct(
    BluetoothSystem_GetScanState_ResponseParamsSpec.$,
    'BluetoothSystem_GetScanState_ResponseParams',
    [
      mojo.internal.StructField(
        'scanState', 0,
        0,
        BluetoothSystem_ScanStateSpec.$,
        0,
        false /* nullable */,
        0),
    ],
    [[0, 16],]);



/**
 * @record
 */
export class BluetoothSystem_GetScanState_ResponseParams {
  constructor() {
    /** @type { !BluetoothSystem_ScanState } */
    this.scanState;
  }
}



mojo.internal.Struct(
    BluetoothSystem_StartScan_ParamsSpec.$,
    'BluetoothSystem_StartScan_Params',
    [
    ],
    [[0, 8],]);



/**
 * @record
 */
export class BluetoothSystem_StartScan_Params {
  constructor() {
  }
}



mojo.internal.Struct(
    BluetoothSystem_StartScan_ResponseParamsSpec.$,
    'BluetoothSystem_StartScan_ResponseParams',
    [
      mojo.internal.StructField(
        'result', 0,
        0,
        BluetoothSystem_StartScanResultSpec.$,
        0,
        false /* nullable */,
        0),
    ],
    [[0, 16],]);



/**
 * @record
 */
export class BluetoothSystem_StartScan_ResponseParams {
  constructor() {
    /** @type { !BluetoothSystem_StartScanResult } */
    this.result;
  }
}



mojo.internal.Struct(
    BluetoothSystem_StopScan_ParamsSpec.$,
    'BluetoothSystem_StopScan_Params',
    [
    ],
    [[0, 8],]);



/**
 * @record
 */
export class BluetoothSystem_StopScan_Params {
  constructor() {
  }
}



mojo.internal.Struct(
    BluetoothSystem_StopScan_ResponseParamsSpec.$,
    'BluetoothSystem_StopScan_ResponseParams',
    [
      mojo.internal.StructField(
        'result', 0,
        0,
        BluetoothSystem_StopScanResultSpec.$,
        0,
        false /* nullable */,
        0),
    ],
    [[0, 16],]);



/**
 * @record
 */
export class BluetoothSystem_StopScan_ResponseParams {
  constructor() {
    /** @type { !BluetoothSystem_StopScanResult } */
    this.result;
  }
}



mojo.internal.Struct(
    BluetoothSystem_GetAvailableDevices_ParamsSpec.$,
    'BluetoothSystem_GetAvailableDevices_Params',
    [
    ],
    [[0, 8],]);



/**
 * @record
 */
export class BluetoothSystem_GetAvailableDevices_Params {
  constructor() {
  }
}



mojo.internal.Struct(
    BluetoothSystem_GetAvailableDevices_ResponseParamsSpec.$,
    'BluetoothSystem_GetAvailableDevices_ResponseParams',
    [
      mojo.internal.StructField(
        'devices', 0,
        0,
        mojo.internal.Array(BluetoothDeviceInfoSpec.$, false),
        null,
        false /* nullable */,
        0),
    ],
    [[0, 16],]);



/**
 * @record
 */
export class BluetoothSystem_GetAvailableDevices_ResponseParams {
  constructor() {
    /** @type { !Array<!BluetoothDeviceInfo> } */
    this.devices;
  }
}



mojo.internal.Struct(
    BluetoothSystemClient_OnStateChanged_ParamsSpec.$,
    'BluetoothSystemClient_OnStateChanged_Params',
    [
      mojo.internal.StructField(
        'newState', 0,
        0,
        BluetoothSystem_StateSpec.$,
        0,
        false /* nullable */,
        0),
    ],
    [[0, 16],]);



/**
 * @record
 */
export class BluetoothSystemClient_OnStateChanged_Params {
  constructor() {
    /** @type { !BluetoothSystem_State } */
    this.newState;
  }
}



mojo.internal.Struct(
    BluetoothSystemClient_OnScanStateChanged_ParamsSpec.$,
    'BluetoothSystemClient_OnScanStateChanged_Params',
    [
      mojo.internal.StructField(
        'newState', 0,
        0,
        BluetoothSystem_ScanStateSpec.$,
        0,
        false /* nullable */,
        0),
    ],
    [[0, 16],]);



/**
 * @record
 */
export class BluetoothSystemClient_OnScanStateChanged_Params {
  constructor() {
    /** @type { !BluetoothSystem_ScanState } */
    this.newState;
  }
}

