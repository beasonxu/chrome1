// third_party/blink/public/mojom/device/device.mojom.m.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2020 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

import {mojo} from '../../../../../mojo/public/js/bindings.js';




/**
 * @implements {mojo.internal.interfaceSupport.PendingReceiver}
 */
export class ManagedConfigurationObserverPendingReceiver {
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
        this.handle, 'blink.mojom.ManagedConfigurationObserver', scope);
  }
}

/** @interface */
export class ManagedConfigurationObserverInterface {
  
  /**
   */

  onConfigurationChanged() {}
}

/**
 * @implements { ManagedConfigurationObserverInterface }
 */
export class ManagedConfigurationObserverRemote {
  /** @param {MojoHandle|mojo.internal.interfaceSupport.Endpoint=} handle */
  constructor(handle = undefined) {
    /**
     * @private {!mojo.internal.interfaceSupport.InterfaceRemoteBase<!ManagedConfigurationObserverPendingReceiver>}
     */
    this.proxy =
        new mojo.internal.interfaceSupport.InterfaceRemoteBase(
          ManagedConfigurationObserverPendingReceiver,
          handle);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper<!ManagedConfigurationObserverPendingReceiver>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper(this.proxy);

    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.proxy.getConnectionErrorEventRouter();
  }

  
  /**
   */

  onConfigurationChanged() {
    this.proxy.sendMessage(
        0,
        ManagedConfigurationObserver_OnConfigurationChanged_ParamsSpec.$,
        null,
        [
        ]);
  }
}

/**
 * An object which receives request messages for the ManagedConfigurationObserver
 * mojom interface. Must be constructed over an object which implements that
 * interface.
 */
export class ManagedConfigurationObserverReceiver {
  /**
   * @param {!ManagedConfigurationObserverInterface } impl
   */
  constructor(impl) {
    /** @private {!mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal<!ManagedConfigurationObserverRemote>} */
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
        ManagedConfigurationObserverRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!ManagedConfigurationObserverRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);


    this.helper_internal_.registerHandler(
        0,
        ManagedConfigurationObserver_OnConfigurationChanged_ParamsSpec.$,
        null,
        impl.onConfigurationChanged.bind(impl));
    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.helper_internal_.getConnectionErrorEventRouter();
  }
}

export class ManagedConfigurationObserver {
  /**
   * @return {!string}
   */
  static get $interfaceName() {
    return "blink.mojom.ManagedConfigurationObserver";
  }

  /**
   * Returns a remote for this interface which sends messages to the browser.
   * The browser must have an interface request binder registered for this
   * interface and accessible to the calling document's frame.
   *
   * @return {!ManagedConfigurationObserverRemote}
   */
  static getRemote() {
    let remote = new ManagedConfigurationObserverRemote;
    remote.$.bindNewPipeAndPassReceiver().bindInBrowser();
    return remote;
  }
}


/**
 * An object which receives request messages for the ManagedConfigurationObserver
 * mojom interface and dispatches them as callbacks. One callback receiver exists
 * on this object for each message defined in the mojom interface, and each
 * receiver can have any number of listeners added to it.
 */
export class ManagedConfigurationObserverCallbackRouter {
  constructor() {
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
      ManagedConfigurationObserverRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!ManagedConfigurationObserverRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);

    this.router_ = new mojo.internal.interfaceSupport.CallbackRouter;

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.onConfigurationChanged =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        0,
        ManagedConfigurationObserver_OnConfigurationChanged_ParamsSpec.$,
        null,
        this.onConfigurationChanged.createReceiverHandler(false /* expectsResponse */));
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
export class DeviceAPIServicePendingReceiver {
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
        this.handle, 'blink.mojom.DeviceAPIService', scope);
  }
}

/** @interface */
export class DeviceAPIServiceInterface {
  
  /**
   * @return {!Promise<{
        result: !DeviceAttributeResult,
   *  }>}
   */

  getDirectoryId() {}
  
  /**
   * @return {!Promise<{
        result: !DeviceAttributeResult,
   *  }>}
   */

  getHostname() {}
  
  /**
   * @return {!Promise<{
        result: !DeviceAttributeResult,
   *  }>}
   */

  getSerialNumber() {}
  
  /**
   * @return {!Promise<{
        result: !DeviceAttributeResult,
   *  }>}
   */

  getAnnotatedAssetId() {}
  
  /**
   * @return {!Promise<{
        result: !DeviceAttributeResult,
   *  }>}
   */

  getAnnotatedLocation() {}
}

/**
 * @implements { DeviceAPIServiceInterface }
 */
export class DeviceAPIServiceRemote {
  /** @param {MojoHandle|mojo.internal.interfaceSupport.Endpoint=} handle */
  constructor(handle = undefined) {
    /**
     * @private {!mojo.internal.interfaceSupport.InterfaceRemoteBase<!DeviceAPIServicePendingReceiver>}
     */
    this.proxy =
        new mojo.internal.interfaceSupport.InterfaceRemoteBase(
          DeviceAPIServicePendingReceiver,
          handle);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper<!DeviceAPIServicePendingReceiver>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper(this.proxy);

    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.proxy.getConnectionErrorEventRouter();
  }

  
  /**
   * @return {!Promise<{
        result: !DeviceAttributeResult,
   *  }>}
   */

  getDirectoryId() {
    return this.proxy.sendMessage(
        0,
        DeviceAPIService_GetDirectoryId_ParamsSpec.$,
        DeviceAPIService_GetDirectoryId_ResponseParamsSpec.$,
        [
        ]);
  }

  
  /**
   * @return {!Promise<{
        result: !DeviceAttributeResult,
   *  }>}
   */

  getHostname() {
    return this.proxy.sendMessage(
        1,
        DeviceAPIService_GetHostname_ParamsSpec.$,
        DeviceAPIService_GetHostname_ResponseParamsSpec.$,
        [
        ]);
  }

  
  /**
   * @return {!Promise<{
        result: !DeviceAttributeResult,
   *  }>}
   */

  getSerialNumber() {
    return this.proxy.sendMessage(
        2,
        DeviceAPIService_GetSerialNumber_ParamsSpec.$,
        DeviceAPIService_GetSerialNumber_ResponseParamsSpec.$,
        [
        ]);
  }

  
  /**
   * @return {!Promise<{
        result: !DeviceAttributeResult,
   *  }>}
   */

  getAnnotatedAssetId() {
    return this.proxy.sendMessage(
        3,
        DeviceAPIService_GetAnnotatedAssetId_ParamsSpec.$,
        DeviceAPIService_GetAnnotatedAssetId_ResponseParamsSpec.$,
        [
        ]);
  }

  
  /**
   * @return {!Promise<{
        result: !DeviceAttributeResult,
   *  }>}
   */

  getAnnotatedLocation() {
    return this.proxy.sendMessage(
        4,
        DeviceAPIService_GetAnnotatedLocation_ParamsSpec.$,
        DeviceAPIService_GetAnnotatedLocation_ResponseParamsSpec.$,
        [
        ]);
  }
}

/**
 * An object which receives request messages for the DeviceAPIService
 * mojom interface. Must be constructed over an object which implements that
 * interface.
 */
export class DeviceAPIServiceReceiver {
  /**
   * @param {!DeviceAPIServiceInterface } impl
   */
  constructor(impl) {
    /** @private {!mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal<!DeviceAPIServiceRemote>} */
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
        DeviceAPIServiceRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!DeviceAPIServiceRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);


    this.helper_internal_.registerHandler(
        0,
        DeviceAPIService_GetDirectoryId_ParamsSpec.$,
        DeviceAPIService_GetDirectoryId_ResponseParamsSpec.$,
        impl.getDirectoryId.bind(impl));
    this.helper_internal_.registerHandler(
        1,
        DeviceAPIService_GetHostname_ParamsSpec.$,
        DeviceAPIService_GetHostname_ResponseParamsSpec.$,
        impl.getHostname.bind(impl));
    this.helper_internal_.registerHandler(
        2,
        DeviceAPIService_GetSerialNumber_ParamsSpec.$,
        DeviceAPIService_GetSerialNumber_ResponseParamsSpec.$,
        impl.getSerialNumber.bind(impl));
    this.helper_internal_.registerHandler(
        3,
        DeviceAPIService_GetAnnotatedAssetId_ParamsSpec.$,
        DeviceAPIService_GetAnnotatedAssetId_ResponseParamsSpec.$,
        impl.getAnnotatedAssetId.bind(impl));
    this.helper_internal_.registerHandler(
        4,
        DeviceAPIService_GetAnnotatedLocation_ParamsSpec.$,
        DeviceAPIService_GetAnnotatedLocation_ResponseParamsSpec.$,
        impl.getAnnotatedLocation.bind(impl));
    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.helper_internal_.getConnectionErrorEventRouter();
  }
}

export class DeviceAPIService {
  /**
   * @return {!string}
   */
  static get $interfaceName() {
    return "blink.mojom.DeviceAPIService";
  }

  /**
   * Returns a remote for this interface which sends messages to the browser.
   * The browser must have an interface request binder registered for this
   * interface and accessible to the calling document's frame.
   *
   * @return {!DeviceAPIServiceRemote}
   */
  static getRemote() {
    let remote = new DeviceAPIServiceRemote;
    remote.$.bindNewPipeAndPassReceiver().bindInBrowser();
    return remote;
  }
}


/**
 * An object which receives request messages for the DeviceAPIService
 * mojom interface and dispatches them as callbacks. One callback receiver exists
 * on this object for each message defined in the mojom interface, and each
 * receiver can have any number of listeners added to it.
 */
export class DeviceAPIServiceCallbackRouter {
  constructor() {
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
      DeviceAPIServiceRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!DeviceAPIServiceRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);

    this.router_ = new mojo.internal.interfaceSupport.CallbackRouter;

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.getDirectoryId =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        0,
        DeviceAPIService_GetDirectoryId_ParamsSpec.$,
        DeviceAPIService_GetDirectoryId_ResponseParamsSpec.$,
        this.getDirectoryId.createReceiverHandler(true /* expectsResponse */));
    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.getHostname =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        1,
        DeviceAPIService_GetHostname_ParamsSpec.$,
        DeviceAPIService_GetHostname_ResponseParamsSpec.$,
        this.getHostname.createReceiverHandler(true /* expectsResponse */));
    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.getSerialNumber =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        2,
        DeviceAPIService_GetSerialNumber_ParamsSpec.$,
        DeviceAPIService_GetSerialNumber_ResponseParamsSpec.$,
        this.getSerialNumber.createReceiverHandler(true /* expectsResponse */));
    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.getAnnotatedAssetId =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        3,
        DeviceAPIService_GetAnnotatedAssetId_ParamsSpec.$,
        DeviceAPIService_GetAnnotatedAssetId_ResponseParamsSpec.$,
        this.getAnnotatedAssetId.createReceiverHandler(true /* expectsResponse */));
    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.getAnnotatedLocation =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        4,
        DeviceAPIService_GetAnnotatedLocation_ParamsSpec.$,
        DeviceAPIService_GetAnnotatedLocation_ResponseParamsSpec.$,
        this.getAnnotatedLocation.createReceiverHandler(true /* expectsResponse */));
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
export class ManagedConfigurationServicePendingReceiver {
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
        this.handle, 'blink.mojom.ManagedConfigurationService', scope);
  }
}

/** @interface */
export class ManagedConfigurationServiceInterface {
  
  /**
   * @param { !Array<!string> } keys
   * @return {!Promise<{
        configurations: ?Object<!string, !string>,
   *  }>}
   */

  getManagedConfiguration(keys) {}
  
  /**
   * @param { !ManagedConfigurationObserverRemote } observer
   */

  subscribeToManagedConfiguration(observer) {}
}

/**
 * @implements { ManagedConfigurationServiceInterface }
 */
export class ManagedConfigurationServiceRemote {
  /** @param {MojoHandle|mojo.internal.interfaceSupport.Endpoint=} handle */
  constructor(handle = undefined) {
    /**
     * @private {!mojo.internal.interfaceSupport.InterfaceRemoteBase<!ManagedConfigurationServicePendingReceiver>}
     */
    this.proxy =
        new mojo.internal.interfaceSupport.InterfaceRemoteBase(
          ManagedConfigurationServicePendingReceiver,
          handle);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper<!ManagedConfigurationServicePendingReceiver>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper(this.proxy);

    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.proxy.getConnectionErrorEventRouter();
  }

  
  /**
   * @param { !Array<!string> } keys
   * @return {!Promise<{
        configurations: ?Object<!string, !string>,
   *  }>}
   */

  getManagedConfiguration(
      keys) {
    return this.proxy.sendMessage(
        0,
        ManagedConfigurationService_GetManagedConfiguration_ParamsSpec.$,
        ManagedConfigurationService_GetManagedConfiguration_ResponseParamsSpec.$,
        [
          keys
        ]);
  }

  
  /**
   * @param { !ManagedConfigurationObserverRemote } observer
   */

  subscribeToManagedConfiguration(
      observer) {
    this.proxy.sendMessage(
        1,
        ManagedConfigurationService_SubscribeToManagedConfiguration_ParamsSpec.$,
        null,
        [
          observer
        ]);
  }
}

/**
 * An object which receives request messages for the ManagedConfigurationService
 * mojom interface. Must be constructed over an object which implements that
 * interface.
 */
export class ManagedConfigurationServiceReceiver {
  /**
   * @param {!ManagedConfigurationServiceInterface } impl
   */
  constructor(impl) {
    /** @private {!mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal<!ManagedConfigurationServiceRemote>} */
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
        ManagedConfigurationServiceRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!ManagedConfigurationServiceRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);


    this.helper_internal_.registerHandler(
        0,
        ManagedConfigurationService_GetManagedConfiguration_ParamsSpec.$,
        ManagedConfigurationService_GetManagedConfiguration_ResponseParamsSpec.$,
        impl.getManagedConfiguration.bind(impl));
    this.helper_internal_.registerHandler(
        1,
        ManagedConfigurationService_SubscribeToManagedConfiguration_ParamsSpec.$,
        null,
        impl.subscribeToManagedConfiguration.bind(impl));
    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.helper_internal_.getConnectionErrorEventRouter();
  }
}

export class ManagedConfigurationService {
  /**
   * @return {!string}
   */
  static get $interfaceName() {
    return "blink.mojom.ManagedConfigurationService";
  }

  /**
   * Returns a remote for this interface which sends messages to the browser.
   * The browser must have an interface request binder registered for this
   * interface and accessible to the calling document's frame.
   *
   * @return {!ManagedConfigurationServiceRemote}
   */
  static getRemote() {
    let remote = new ManagedConfigurationServiceRemote;
    remote.$.bindNewPipeAndPassReceiver().bindInBrowser();
    return remote;
  }
}


/**
 * An object which receives request messages for the ManagedConfigurationService
 * mojom interface and dispatches them as callbacks. One callback receiver exists
 * on this object for each message defined in the mojom interface, and each
 * receiver can have any number of listeners added to it.
 */
export class ManagedConfigurationServiceCallbackRouter {
  constructor() {
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
      ManagedConfigurationServiceRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!ManagedConfigurationServiceRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);

    this.router_ = new mojo.internal.interfaceSupport.CallbackRouter;

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.getManagedConfiguration =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        0,
        ManagedConfigurationService_GetManagedConfiguration_ParamsSpec.$,
        ManagedConfigurationService_GetManagedConfiguration_ResponseParamsSpec.$,
        this.getManagedConfiguration.createReceiverHandler(true /* expectsResponse */));
    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.subscribeToManagedConfiguration =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        1,
        ManagedConfigurationService_SubscribeToManagedConfiguration_ParamsSpec.$,
        null,
        this.subscribeToManagedConfiguration.createReceiverHandler(false /* expectsResponse */));
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
export const ManagedConfigurationObserver_OnConfigurationChanged_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const DeviceAPIService_GetDirectoryId_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const DeviceAPIService_GetDirectoryId_ResponseParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const DeviceAPIService_GetHostname_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const DeviceAPIService_GetHostname_ResponseParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const DeviceAPIService_GetSerialNumber_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const DeviceAPIService_GetSerialNumber_ResponseParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const DeviceAPIService_GetAnnotatedAssetId_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const DeviceAPIService_GetAnnotatedAssetId_ResponseParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const DeviceAPIService_GetAnnotatedLocation_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const DeviceAPIService_GetAnnotatedLocation_ResponseParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const ManagedConfigurationService_GetManagedConfiguration_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const ManagedConfigurationService_GetManagedConfiguration_ResponseParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const ManagedConfigurationService_SubscribeToManagedConfiguration_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType} }
 */
export const DeviceAttributeResultSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };




mojo.internal.Struct(
    ManagedConfigurationObserver_OnConfigurationChanged_ParamsSpec.$,
    'ManagedConfigurationObserver_OnConfigurationChanged_Params',
    [
    ],
    [[0, 8],]);



/**
 * @record
 */
export class ManagedConfigurationObserver_OnConfigurationChanged_Params {
  constructor() {
  }
}



mojo.internal.Struct(
    DeviceAPIService_GetDirectoryId_ParamsSpec.$,
    'DeviceAPIService_GetDirectoryId_Params',
    [
    ],
    [[0, 8],]);



/**
 * @record
 */
export class DeviceAPIService_GetDirectoryId_Params {
  constructor() {
  }
}



mojo.internal.Struct(
    DeviceAPIService_GetDirectoryId_ResponseParamsSpec.$,
    'DeviceAPIService_GetDirectoryId_ResponseParams',
    [
      mojo.internal.StructField(
        'result', 0,
        0,
        DeviceAttributeResultSpec.$,
        null,
        false /* nullable */,
        0),
    ],
    [[0, 24],]);



/**
 * @record
 */
export class DeviceAPIService_GetDirectoryId_ResponseParams {
  constructor() {
    /** @type { !DeviceAttributeResult } */
    this.result;
  }
}



mojo.internal.Struct(
    DeviceAPIService_GetHostname_ParamsSpec.$,
    'DeviceAPIService_GetHostname_Params',
    [
    ],
    [[0, 8],]);



/**
 * @record
 */
export class DeviceAPIService_GetHostname_Params {
  constructor() {
  }
}



mojo.internal.Struct(
    DeviceAPIService_GetHostname_ResponseParamsSpec.$,
    'DeviceAPIService_GetHostname_ResponseParams',
    [
      mojo.internal.StructField(
        'result', 0,
        0,
        DeviceAttributeResultSpec.$,
        null,
        false /* nullable */,
        0),
    ],
    [[0, 24],]);



/**
 * @record
 */
export class DeviceAPIService_GetHostname_ResponseParams {
  constructor() {
    /** @type { !DeviceAttributeResult } */
    this.result;
  }
}



mojo.internal.Struct(
    DeviceAPIService_GetSerialNumber_ParamsSpec.$,
    'DeviceAPIService_GetSerialNumber_Params',
    [
    ],
    [[0, 8],]);



/**
 * @record
 */
export class DeviceAPIService_GetSerialNumber_Params {
  constructor() {
  }
}



mojo.internal.Struct(
    DeviceAPIService_GetSerialNumber_ResponseParamsSpec.$,
    'DeviceAPIService_GetSerialNumber_ResponseParams',
    [
      mojo.internal.StructField(
        'result', 0,
        0,
        DeviceAttributeResultSpec.$,
        null,
        false /* nullable */,
        0),
    ],
    [[0, 24],]);



/**
 * @record
 */
export class DeviceAPIService_GetSerialNumber_ResponseParams {
  constructor() {
    /** @type { !DeviceAttributeResult } */
    this.result;
  }
}



mojo.internal.Struct(
    DeviceAPIService_GetAnnotatedAssetId_ParamsSpec.$,
    'DeviceAPIService_GetAnnotatedAssetId_Params',
    [
    ],
    [[0, 8],]);



/**
 * @record
 */
export class DeviceAPIService_GetAnnotatedAssetId_Params {
  constructor() {
  }
}



mojo.internal.Struct(
    DeviceAPIService_GetAnnotatedAssetId_ResponseParamsSpec.$,
    'DeviceAPIService_GetAnnotatedAssetId_ResponseParams',
    [
      mojo.internal.StructField(
        'result', 0,
        0,
        DeviceAttributeResultSpec.$,
        null,
        false /* nullable */,
        0),
    ],
    [[0, 24],]);



/**
 * @record
 */
export class DeviceAPIService_GetAnnotatedAssetId_ResponseParams {
  constructor() {
    /** @type { !DeviceAttributeResult } */
    this.result;
  }
}



mojo.internal.Struct(
    DeviceAPIService_GetAnnotatedLocation_ParamsSpec.$,
    'DeviceAPIService_GetAnnotatedLocation_Params',
    [
    ],
    [[0, 8],]);



/**
 * @record
 */
export class DeviceAPIService_GetAnnotatedLocation_Params {
  constructor() {
  }
}



mojo.internal.Struct(
    DeviceAPIService_GetAnnotatedLocation_ResponseParamsSpec.$,
    'DeviceAPIService_GetAnnotatedLocation_ResponseParams',
    [
      mojo.internal.StructField(
        'result', 0,
        0,
        DeviceAttributeResultSpec.$,
        null,
        false /* nullable */,
        0),
    ],
    [[0, 24],]);



/**
 * @record
 */
export class DeviceAPIService_GetAnnotatedLocation_ResponseParams {
  constructor() {
    /** @type { !DeviceAttributeResult } */
    this.result;
  }
}



mojo.internal.Struct(
    ManagedConfigurationService_GetManagedConfiguration_ParamsSpec.$,
    'ManagedConfigurationService_GetManagedConfiguration_Params',
    [
      mojo.internal.StructField(
        'keys', 0,
        0,
        mojo.internal.Array(mojo.internal.String, false),
        null,
        false /* nullable */,
        0),
    ],
    [[0, 16],]);



/**
 * @record
 */
export class ManagedConfigurationService_GetManagedConfiguration_Params {
  constructor() {
    /** @type { !Array<!string> } */
    this.keys;
  }
}



mojo.internal.Struct(
    ManagedConfigurationService_GetManagedConfiguration_ResponseParamsSpec.$,
    'ManagedConfigurationService_GetManagedConfiguration_ResponseParams',
    [
      mojo.internal.StructField(
        'configurations', 0,
        0,
        mojo.internal.Map(mojo.internal.String, mojo.internal.String, false),
        null,
        true /* nullable */,
        0),
    ],
    [[0, 16],]);



/**
 * @record
 */
export class ManagedConfigurationService_GetManagedConfiguration_ResponseParams {
  constructor() {
    /** @type { (Object<!string, !string>|undefined) } */
    this.configurations;
  }
}



mojo.internal.Struct(
    ManagedConfigurationService_SubscribeToManagedConfiguration_ParamsSpec.$,
    'ManagedConfigurationService_SubscribeToManagedConfiguration_Params',
    [
      mojo.internal.StructField(
        'observer', 0,
        0,
        mojo.internal.InterfaceProxy(ManagedConfigurationObserverRemote),
        null,
        false /* nullable */,
        0),
    ],
    [[0, 16],]);



/**
 * @record
 */
export class ManagedConfigurationService_SubscribeToManagedConfiguration_Params {
  constructor() {
    /** @type { !ManagedConfigurationObserverRemote } */
    this.observer;
  }
}

mojo.internal.Union(
    DeviceAttributeResultSpec.$, 'DeviceAttributeResult',
    {
      'errorMessage': {
        'ordinal': 0,
        'type': mojo.internal.String,
      },
      'attribute': {
        'ordinal': 1,
        'type': mojo.internal.String,
        'nullable': true,
      },
    });

/**
 * @typedef { {
 *   errorMessage: (!string|undefined),
 *   attribute: (?string|undefined),
 * } }
 */
export const DeviceAttributeResult = {};
