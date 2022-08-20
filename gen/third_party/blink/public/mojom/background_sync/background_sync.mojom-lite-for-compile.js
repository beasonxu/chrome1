// third_party/blink/public/mojom/background_sync/background_sync.mojom-lite-for-compile.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
'use strict';

goog.require('mojo.internal');
goog.require('mojo.internal.interfaceSupport');





goog.provide('blink.mojom.BackgroundSyncError');
goog.provide('blink.mojom.BackgroundSyncErrorSpec');
/**
 * @const { {$: !mojo.internal.MojomType} }
 * @export
 */
blink.mojom.BackgroundSyncErrorSpec = { $: mojo.internal.Enum() };

/**
 * @enum {number}
 * @export
 */
blink.mojom.BackgroundSyncError = {
  
  NONE: 0,
  STORAGE: 1,
  NOT_FOUND: 2,
  NO_SERVICE_WORKER: 3,
  NOT_ALLOWED: 4,
  PERMISSION_DENIED: 5,
  MAX: 5,
  MIN_VALUE: 0,
  MAX_VALUE: 5,
};

goog.provide('blink.mojom.BackgroundSyncState');
goog.provide('blink.mojom.BackgroundSyncStateSpec');
/**
 * @const { {$: !mojo.internal.MojomType} }
 * @export
 */
blink.mojom.BackgroundSyncStateSpec = { $: mojo.internal.Enum() };

/**
 * @enum {number}
 * @export
 */
blink.mojom.BackgroundSyncState = {
  
  PENDING: 0,
  FIRING: 1,
  REREGISTERED_WHILE_FIRING: 2,
  MIN_VALUE: 0,
  MAX_VALUE: 2,
};

goog.provide('blink.mojom.BackgroundSyncEventLastChance');
goog.provide('blink.mojom.BackgroundSyncEventLastChanceSpec');
/**
 * @const { {$: !mojo.internal.MojomType} }
 * @export
 */
blink.mojom.BackgroundSyncEventLastChanceSpec = { $: mojo.internal.Enum() };

/**
 * @enum {number}
 * @export
 */
blink.mojom.BackgroundSyncEventLastChance = {
  
  IS_NOT_LAST_CHANCE: 0,
  IS_LAST_CHANCE: 1,
  MIN_VALUE: 0,
  MAX_VALUE: 1,
};

goog.provide('blink.mojom.BackgroundSyncType');
goog.provide('blink.mojom.BackgroundSyncTypeSpec');
/**
 * @const { {$: !mojo.internal.MojomType} }
 * @export
 */
blink.mojom.BackgroundSyncTypeSpec = { $: mojo.internal.Enum() };

/**
 * @enum {number}
 * @export
 */
blink.mojom.BackgroundSyncType = {
  
  ONE_SHOT: 0,
  PERIODIC: 1,
  MIN_VALUE: 0,
  MAX_VALUE: 1,
};



goog.provide('blink.mojom.OneShotBackgroundSyncService');
goog.provide('blink.mojom.OneShotBackgroundSyncServiceReceiver');
goog.provide('blink.mojom.OneShotBackgroundSyncServiceCallbackRouter');
goog.provide('blink.mojom.OneShotBackgroundSyncServiceInterface');
goog.provide('blink.mojom.OneShotBackgroundSyncServiceRemote');
goog.provide('blink.mojom.OneShotBackgroundSyncServicePendingReceiver');


/**
 * @implements {mojo.internal.interfaceSupport.PendingReceiver}
 * @export
 */
blink.mojom.OneShotBackgroundSyncServicePendingReceiver = class {
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
        blink.mojom.OneShotBackgroundSyncService.$interfaceName,
        scope);
  }
};

/** @interface */
blink.mojom.OneShotBackgroundSyncServiceInterface = class {
  
  /**
   * @param { !blink.mojom.SyncRegistrationOptions } options
   * @param { !bigint } serviceWorkerRegistrationId
   * @return {!Promise<{
        err: !blink.mojom.BackgroundSyncError,
        options: ?blink.mojom.SyncRegistrationOptions,
   *  }>}
   */

  register(options, serviceWorkerRegistrationId) {}
  
  /**
   * @param { !blink.mojom.BackgroundSyncRegistrationInfo } registrationInfo
   */

  didResolveRegistration(registrationInfo) {}
  
  /**
   * @param { !bigint } serviceWorkerRegistrationId
   * @return {!Promise<{
        err: !blink.mojom.BackgroundSyncError,
        registrations: !Array<!blink.mojom.SyncRegistrationOptions>,
   *  }>}
   */

  getRegistrations(serviceWorkerRegistrationId) {}
};

/**
 * @export
 * @implements { blink.mojom.OneShotBackgroundSyncServiceInterface }
 */
blink.mojom.OneShotBackgroundSyncServiceRemote = class {
  /** @param {MojoHandle|mojo.internal.interfaceSupport.Endpoint=} handle */
  constructor(handle = undefined) {
    /**
     * @private {!mojo.internal.interfaceSupport.InterfaceRemoteBase<!blink.mojom.OneShotBackgroundSyncServicePendingReceiver>}
     */
    this.proxy =
        new mojo.internal.interfaceSupport.InterfaceRemoteBase(
          blink.mojom.OneShotBackgroundSyncServicePendingReceiver,
          handle);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper<!blink.mojom.OneShotBackgroundSyncServicePendingReceiver>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper(this.proxy);

    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.proxy.getConnectionErrorEventRouter();
  }

  
  /**
   * @param { !blink.mojom.SyncRegistrationOptions } options
   * @param { !bigint } serviceWorkerRegistrationId
   * @return {!Promise<{
        err: !blink.mojom.BackgroundSyncError,
        options: ?blink.mojom.SyncRegistrationOptions,
   *  }>}
   */

  register(
      options,
      serviceWorkerRegistrationId) {
    return this.proxy.sendMessage(
        0,
        blink.mojom.OneShotBackgroundSyncService_Register_ParamsSpec.$,
        blink.mojom.OneShotBackgroundSyncService_Register_ResponseParamsSpec.$,
        [
          options,
          serviceWorkerRegistrationId
        ]);
  }

  
  /**
   * @param { !blink.mojom.BackgroundSyncRegistrationInfo } registrationInfo
   */

  didResolveRegistration(
      registrationInfo) {
    this.proxy.sendMessage(
        1,
        blink.mojom.OneShotBackgroundSyncService_DidResolveRegistration_ParamsSpec.$,
        null,
        [
          registrationInfo
        ]);
  }

  
  /**
   * @param { !bigint } serviceWorkerRegistrationId
   * @return {!Promise<{
        err: !blink.mojom.BackgroundSyncError,
        registrations: !Array<!blink.mojom.SyncRegistrationOptions>,
   *  }>}
   */

  getRegistrations(
      serviceWorkerRegistrationId) {
    return this.proxy.sendMessage(
        2,
        blink.mojom.OneShotBackgroundSyncService_GetRegistrations_ParamsSpec.$,
        blink.mojom.OneShotBackgroundSyncService_GetRegistrations_ResponseParamsSpec.$,
        [
          serviceWorkerRegistrationId
        ]);
  }
};

/**
 * An object which receives request messages for the OneShotBackgroundSyncService
 * mojom interface. Must be constructed over an object which implements that
 * interface.
 *
 * @export
 */
blink.mojom.OneShotBackgroundSyncServiceReceiver = class {
  /**
   * @param {!blink.mojom.OneShotBackgroundSyncServiceInterface } impl
   */
  constructor(impl) {
    /** @private {!mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal<!blink.mojom.OneShotBackgroundSyncServiceRemote>} */
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
        blink.mojom.OneShotBackgroundSyncServiceRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!blink.mojom.OneShotBackgroundSyncServiceRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);


    this.helper_internal_.registerHandler(
        0,
        blink.mojom.OneShotBackgroundSyncService_Register_ParamsSpec.$,
        blink.mojom.OneShotBackgroundSyncService_Register_ResponseParamsSpec.$,
        impl.register.bind(impl));
    this.helper_internal_.registerHandler(
        1,
        blink.mojom.OneShotBackgroundSyncService_DidResolveRegistration_ParamsSpec.$,
        null,
        impl.didResolveRegistration.bind(impl));
    this.helper_internal_.registerHandler(
        2,
        blink.mojom.OneShotBackgroundSyncService_GetRegistrations_ParamsSpec.$,
        blink.mojom.OneShotBackgroundSyncService_GetRegistrations_ResponseParamsSpec.$,
        impl.getRegistrations.bind(impl));
    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.helper_internal_.getConnectionErrorEventRouter();
  }
};

/**
 *  @export
 */
blink.mojom.OneShotBackgroundSyncService = class {
  /**
   * @return {!string}
   */
  static get $interfaceName() {
    return "blink.mojom.OneShotBackgroundSyncService";
  }

  /**
   * Returns a remote for this interface which sends messages to the browser.
   * The browser must have an interface request binder registered for this
   * interface and accessible to the calling document's frame.
   *
   * @return {!blink.mojom.OneShotBackgroundSyncServiceRemote}
   * @export
   */
  static getRemote() {
    let remote = new blink.mojom.OneShotBackgroundSyncServiceRemote;
    remote.$.bindNewPipeAndPassReceiver().bindInBrowser();
    return remote;
  }
};


/**
 * An object which receives request messages for the OneShotBackgroundSyncService
 * mojom interface and dispatches them as callbacks. One callback receiver exists
 * on this object for each message defined in the mojom interface, and each
 * receiver can have any number of listeners added to it.
 *
 * @export
 */
blink.mojom.OneShotBackgroundSyncServiceCallbackRouter = class {
  constructor() {
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
      blink.mojom.OneShotBackgroundSyncServiceRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!blink.mojom.OneShotBackgroundSyncServiceRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);

    this.router_ = new mojo.internal.interfaceSupport.CallbackRouter;

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.register =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        0,
        blink.mojom.OneShotBackgroundSyncService_Register_ParamsSpec.$,
        blink.mojom.OneShotBackgroundSyncService_Register_ResponseParamsSpec.$,
        this.register.createReceiverHandler(true /* expectsResponse */));
    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.didResolveRegistration =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        1,
        blink.mojom.OneShotBackgroundSyncService_DidResolveRegistration_ParamsSpec.$,
        null,
        this.didResolveRegistration.createReceiverHandler(false /* expectsResponse */));
    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.getRegistrations =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        2,
        blink.mojom.OneShotBackgroundSyncService_GetRegistrations_ParamsSpec.$,
        blink.mojom.OneShotBackgroundSyncService_GetRegistrations_ResponseParamsSpec.$,
        this.getRegistrations.createReceiverHandler(true /* expectsResponse */));
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


goog.provide('blink.mojom.PeriodicBackgroundSyncService');
goog.provide('blink.mojom.PeriodicBackgroundSyncServiceReceiver');
goog.provide('blink.mojom.PeriodicBackgroundSyncServiceCallbackRouter');
goog.provide('blink.mojom.PeriodicBackgroundSyncServiceInterface');
goog.provide('blink.mojom.PeriodicBackgroundSyncServiceRemote');
goog.provide('blink.mojom.PeriodicBackgroundSyncServicePendingReceiver');


/**
 * @implements {mojo.internal.interfaceSupport.PendingReceiver}
 * @export
 */
blink.mojom.PeriodicBackgroundSyncServicePendingReceiver = class {
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
        blink.mojom.PeriodicBackgroundSyncService.$interfaceName,
        scope);
  }
};

/** @interface */
blink.mojom.PeriodicBackgroundSyncServiceInterface = class {
  
  /**
   * @param { !blink.mojom.SyncRegistrationOptions } options
   * @param { !bigint } serviceWorkerRegistrationId
   * @return {!Promise<{
        err: !blink.mojom.BackgroundSyncError,
        options: ?blink.mojom.SyncRegistrationOptions,
   *  }>}
   */

  register(options, serviceWorkerRegistrationId) {}
  
  /**
   * @param { !bigint } serviceWorkerRegistrationId
   * @param { !string } tag
   * @return {!Promise<{
        err: !blink.mojom.BackgroundSyncError,
   *  }>}
   */

  unregister(serviceWorkerRegistrationId, tag) {}
  
  /**
   * @param { !bigint } serviceWorkerRegistrationId
   * @return {!Promise<{
        err: !blink.mojom.BackgroundSyncError,
        registrations: !Array<!blink.mojom.SyncRegistrationOptions>,
   *  }>}
   */

  getRegistrations(serviceWorkerRegistrationId) {}
};

/**
 * @export
 * @implements { blink.mojom.PeriodicBackgroundSyncServiceInterface }
 */
blink.mojom.PeriodicBackgroundSyncServiceRemote = class {
  /** @param {MojoHandle|mojo.internal.interfaceSupport.Endpoint=} handle */
  constructor(handle = undefined) {
    /**
     * @private {!mojo.internal.interfaceSupport.InterfaceRemoteBase<!blink.mojom.PeriodicBackgroundSyncServicePendingReceiver>}
     */
    this.proxy =
        new mojo.internal.interfaceSupport.InterfaceRemoteBase(
          blink.mojom.PeriodicBackgroundSyncServicePendingReceiver,
          handle);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper<!blink.mojom.PeriodicBackgroundSyncServicePendingReceiver>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper(this.proxy);

    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.proxy.getConnectionErrorEventRouter();
  }

  
  /**
   * @param { !blink.mojom.SyncRegistrationOptions } options
   * @param { !bigint } serviceWorkerRegistrationId
   * @return {!Promise<{
        err: !blink.mojom.BackgroundSyncError,
        options: ?blink.mojom.SyncRegistrationOptions,
   *  }>}
   */

  register(
      options,
      serviceWorkerRegistrationId) {
    return this.proxy.sendMessage(
        0,
        blink.mojom.PeriodicBackgroundSyncService_Register_ParamsSpec.$,
        blink.mojom.PeriodicBackgroundSyncService_Register_ResponseParamsSpec.$,
        [
          options,
          serviceWorkerRegistrationId
        ]);
  }

  
  /**
   * @param { !bigint } serviceWorkerRegistrationId
   * @param { !string } tag
   * @return {!Promise<{
        err: !blink.mojom.BackgroundSyncError,
   *  }>}
   */

  unregister(
      serviceWorkerRegistrationId,
      tag) {
    return this.proxy.sendMessage(
        1,
        blink.mojom.PeriodicBackgroundSyncService_Unregister_ParamsSpec.$,
        blink.mojom.PeriodicBackgroundSyncService_Unregister_ResponseParamsSpec.$,
        [
          serviceWorkerRegistrationId,
          tag
        ]);
  }

  
  /**
   * @param { !bigint } serviceWorkerRegistrationId
   * @return {!Promise<{
        err: !blink.mojom.BackgroundSyncError,
        registrations: !Array<!blink.mojom.SyncRegistrationOptions>,
   *  }>}
   */

  getRegistrations(
      serviceWorkerRegistrationId) {
    return this.proxy.sendMessage(
        2,
        blink.mojom.PeriodicBackgroundSyncService_GetRegistrations_ParamsSpec.$,
        blink.mojom.PeriodicBackgroundSyncService_GetRegistrations_ResponseParamsSpec.$,
        [
          serviceWorkerRegistrationId
        ]);
  }
};

/**
 * An object which receives request messages for the PeriodicBackgroundSyncService
 * mojom interface. Must be constructed over an object which implements that
 * interface.
 *
 * @export
 */
blink.mojom.PeriodicBackgroundSyncServiceReceiver = class {
  /**
   * @param {!blink.mojom.PeriodicBackgroundSyncServiceInterface } impl
   */
  constructor(impl) {
    /** @private {!mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal<!blink.mojom.PeriodicBackgroundSyncServiceRemote>} */
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
        blink.mojom.PeriodicBackgroundSyncServiceRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!blink.mojom.PeriodicBackgroundSyncServiceRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);


    this.helper_internal_.registerHandler(
        0,
        blink.mojom.PeriodicBackgroundSyncService_Register_ParamsSpec.$,
        blink.mojom.PeriodicBackgroundSyncService_Register_ResponseParamsSpec.$,
        impl.register.bind(impl));
    this.helper_internal_.registerHandler(
        1,
        blink.mojom.PeriodicBackgroundSyncService_Unregister_ParamsSpec.$,
        blink.mojom.PeriodicBackgroundSyncService_Unregister_ResponseParamsSpec.$,
        impl.unregister.bind(impl));
    this.helper_internal_.registerHandler(
        2,
        blink.mojom.PeriodicBackgroundSyncService_GetRegistrations_ParamsSpec.$,
        blink.mojom.PeriodicBackgroundSyncService_GetRegistrations_ResponseParamsSpec.$,
        impl.getRegistrations.bind(impl));
    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.helper_internal_.getConnectionErrorEventRouter();
  }
};

/**
 *  @export
 */
blink.mojom.PeriodicBackgroundSyncService = class {
  /**
   * @return {!string}
   */
  static get $interfaceName() {
    return "blink.mojom.PeriodicBackgroundSyncService";
  }

  /**
   * Returns a remote for this interface which sends messages to the browser.
   * The browser must have an interface request binder registered for this
   * interface and accessible to the calling document's frame.
   *
   * @return {!blink.mojom.PeriodicBackgroundSyncServiceRemote}
   * @export
   */
  static getRemote() {
    let remote = new blink.mojom.PeriodicBackgroundSyncServiceRemote;
    remote.$.bindNewPipeAndPassReceiver().bindInBrowser();
    return remote;
  }
};


/**
 * An object which receives request messages for the PeriodicBackgroundSyncService
 * mojom interface and dispatches them as callbacks. One callback receiver exists
 * on this object for each message defined in the mojom interface, and each
 * receiver can have any number of listeners added to it.
 *
 * @export
 */
blink.mojom.PeriodicBackgroundSyncServiceCallbackRouter = class {
  constructor() {
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
      blink.mojom.PeriodicBackgroundSyncServiceRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!blink.mojom.PeriodicBackgroundSyncServiceRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);

    this.router_ = new mojo.internal.interfaceSupport.CallbackRouter;

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.register =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        0,
        blink.mojom.PeriodicBackgroundSyncService_Register_ParamsSpec.$,
        blink.mojom.PeriodicBackgroundSyncService_Register_ResponseParamsSpec.$,
        this.register.createReceiverHandler(true /* expectsResponse */));
    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.unregister =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        1,
        blink.mojom.PeriodicBackgroundSyncService_Unregister_ParamsSpec.$,
        blink.mojom.PeriodicBackgroundSyncService_Unregister_ResponseParamsSpec.$,
        this.unregister.createReceiverHandler(true /* expectsResponse */));
    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.getRegistrations =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        2,
        blink.mojom.PeriodicBackgroundSyncService_GetRegistrations_ParamsSpec.$,
        blink.mojom.PeriodicBackgroundSyncService_GetRegistrations_ResponseParamsSpec.$,
        this.getRegistrations.createReceiverHandler(true /* expectsResponse */));
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


goog.provide('blink.mojom.SyncRegistrationOptionsSpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
blink.mojom.SyncRegistrationOptionsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

goog.provide('blink.mojom.BackgroundSyncRegistrationInfoSpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
blink.mojom.BackgroundSyncRegistrationInfoSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

goog.provide('blink.mojom.OneShotBackgroundSyncService_Register_ParamsSpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
blink.mojom.OneShotBackgroundSyncService_Register_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

goog.provide('blink.mojom.OneShotBackgroundSyncService_Register_ResponseParamsSpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
blink.mojom.OneShotBackgroundSyncService_Register_ResponseParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

goog.provide('blink.mojom.OneShotBackgroundSyncService_DidResolveRegistration_ParamsSpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
blink.mojom.OneShotBackgroundSyncService_DidResolveRegistration_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

goog.provide('blink.mojom.OneShotBackgroundSyncService_GetRegistrations_ParamsSpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
blink.mojom.OneShotBackgroundSyncService_GetRegistrations_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

goog.provide('blink.mojom.OneShotBackgroundSyncService_GetRegistrations_ResponseParamsSpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
blink.mojom.OneShotBackgroundSyncService_GetRegistrations_ResponseParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

goog.provide('blink.mojom.PeriodicBackgroundSyncService_Register_ParamsSpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
blink.mojom.PeriodicBackgroundSyncService_Register_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

goog.provide('blink.mojom.PeriodicBackgroundSyncService_Register_ResponseParamsSpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
blink.mojom.PeriodicBackgroundSyncService_Register_ResponseParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

goog.provide('blink.mojom.PeriodicBackgroundSyncService_Unregister_ParamsSpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
blink.mojom.PeriodicBackgroundSyncService_Unregister_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

goog.provide('blink.mojom.PeriodicBackgroundSyncService_Unregister_ResponseParamsSpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
blink.mojom.PeriodicBackgroundSyncService_Unregister_ResponseParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

goog.provide('blink.mojom.PeriodicBackgroundSyncService_GetRegistrations_ParamsSpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
blink.mojom.PeriodicBackgroundSyncService_GetRegistrations_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

goog.provide('blink.mojom.PeriodicBackgroundSyncService_GetRegistrations_ResponseParamsSpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
blink.mojom.PeriodicBackgroundSyncService_GetRegistrations_ResponseParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };




mojo.internal.Struct(
    blink.mojom.SyncRegistrationOptionsSpec.$,
    'SyncRegistrationOptions',
    [
      mojo.internal.StructField(
        'tag', 0,
        0,
        mojo.internal.String,
        "",
        false /* nullable */),
      mojo.internal.StructField(
        'minInterval', 8,
        0,
        mojo.internal.Int64,
        BigInt('-1'),
        false /* nullable */),
    ],
    [[0, 24],]);



goog.provide('blink.mojom.SyncRegistrationOptions');

/** @record */
blink.mojom.SyncRegistrationOptions = class {
  constructor() {
    /** @export { !string } */
    this.tag;
    /** @export { !bigint } */
    this.minInterval;
  }
};




mojo.internal.Struct(
    blink.mojom.BackgroundSyncRegistrationInfoSpec.$,
    'BackgroundSyncRegistrationInfo',
    [
      mojo.internal.StructField(
        'serviceWorkerRegistrationId', 0,
        0,
        mojo.internal.Int64,
        BigInt('-1'),
        false /* nullable */),
      mojo.internal.StructField(
        'tag', 8,
        0,
        mojo.internal.String,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'syncType', 16,
        0,
        blink.mojom.BackgroundSyncTypeSpec.$,
        0,
        false /* nullable */),
    ],
    [[0, 32],]);



goog.provide('blink.mojom.BackgroundSyncRegistrationInfo');

/** @record */
blink.mojom.BackgroundSyncRegistrationInfo = class {
  constructor() {
    /** @export { !bigint } */
    this.serviceWorkerRegistrationId;
    /** @export { !string } */
    this.tag;
    /** @export { !blink.mojom.BackgroundSyncType } */
    this.syncType;
  }
};




mojo.internal.Struct(
    blink.mojom.OneShotBackgroundSyncService_Register_ParamsSpec.$,
    'OneShotBackgroundSyncService_Register_Params',
    [
      mojo.internal.StructField(
        'options', 0,
        0,
        blink.mojom.SyncRegistrationOptionsSpec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'serviceWorkerRegistrationId', 8,
        0,
        mojo.internal.Int64,
        BigInt(0),
        false /* nullable */),
    ],
    [[0, 24],]);



goog.provide('blink.mojom.OneShotBackgroundSyncService_Register_Params');

/** @record */
blink.mojom.OneShotBackgroundSyncService_Register_Params = class {
  constructor() {
    /** @export { !blink.mojom.SyncRegistrationOptions } */
    this.options;
    /** @export { !bigint } */
    this.serviceWorkerRegistrationId;
  }
};




mojo.internal.Struct(
    blink.mojom.OneShotBackgroundSyncService_Register_ResponseParamsSpec.$,
    'OneShotBackgroundSyncService_Register_ResponseParams',
    [
      mojo.internal.StructField(
        'err', 0,
        0,
        blink.mojom.BackgroundSyncErrorSpec.$,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'options', 8,
        0,
        blink.mojom.SyncRegistrationOptionsSpec.$,
        null,
        true /* nullable */),
    ],
    [[0, 24],]);



goog.provide('blink.mojom.OneShotBackgroundSyncService_Register_ResponseParams');

/** @record */
blink.mojom.OneShotBackgroundSyncService_Register_ResponseParams = class {
  constructor() {
    /** @export { !blink.mojom.BackgroundSyncError } */
    this.err;
    /** @export { (blink.mojom.SyncRegistrationOptions|undefined) } */
    this.options;
  }
};




mojo.internal.Struct(
    blink.mojom.OneShotBackgroundSyncService_DidResolveRegistration_ParamsSpec.$,
    'OneShotBackgroundSyncService_DidResolveRegistration_Params',
    [
      mojo.internal.StructField(
        'registrationInfo', 0,
        0,
        blink.mojom.BackgroundSyncRegistrationInfoSpec.$,
        null,
        false /* nullable */),
    ],
    [[0, 16],]);



goog.provide('blink.mojom.OneShotBackgroundSyncService_DidResolveRegistration_Params');

/** @record */
blink.mojom.OneShotBackgroundSyncService_DidResolveRegistration_Params = class {
  constructor() {
    /** @export { !blink.mojom.BackgroundSyncRegistrationInfo } */
    this.registrationInfo;
  }
};




mojo.internal.Struct(
    blink.mojom.OneShotBackgroundSyncService_GetRegistrations_ParamsSpec.$,
    'OneShotBackgroundSyncService_GetRegistrations_Params',
    [
      mojo.internal.StructField(
        'serviceWorkerRegistrationId', 0,
        0,
        mojo.internal.Int64,
        BigInt(0),
        false /* nullable */),
    ],
    [[0, 16],]);



goog.provide('blink.mojom.OneShotBackgroundSyncService_GetRegistrations_Params');

/** @record */
blink.mojom.OneShotBackgroundSyncService_GetRegistrations_Params = class {
  constructor() {
    /** @export { !bigint } */
    this.serviceWorkerRegistrationId;
  }
};




mojo.internal.Struct(
    blink.mojom.OneShotBackgroundSyncService_GetRegistrations_ResponseParamsSpec.$,
    'OneShotBackgroundSyncService_GetRegistrations_ResponseParams',
    [
      mojo.internal.StructField(
        'err', 0,
        0,
        blink.mojom.BackgroundSyncErrorSpec.$,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'registrations', 8,
        0,
        mojo.internal.Array(blink.mojom.SyncRegistrationOptionsSpec.$, false),
        null,
        false /* nullable */),
    ],
    [[0, 24],]);



goog.provide('blink.mojom.OneShotBackgroundSyncService_GetRegistrations_ResponseParams');

/** @record */
blink.mojom.OneShotBackgroundSyncService_GetRegistrations_ResponseParams = class {
  constructor() {
    /** @export { !blink.mojom.BackgroundSyncError } */
    this.err;
    /** @export { !Array<!blink.mojom.SyncRegistrationOptions> } */
    this.registrations;
  }
};




mojo.internal.Struct(
    blink.mojom.PeriodicBackgroundSyncService_Register_ParamsSpec.$,
    'PeriodicBackgroundSyncService_Register_Params',
    [
      mojo.internal.StructField(
        'options', 0,
        0,
        blink.mojom.SyncRegistrationOptionsSpec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'serviceWorkerRegistrationId', 8,
        0,
        mojo.internal.Int64,
        BigInt(0),
        false /* nullable */),
    ],
    [[0, 24],]);



goog.provide('blink.mojom.PeriodicBackgroundSyncService_Register_Params');

/** @record */
blink.mojom.PeriodicBackgroundSyncService_Register_Params = class {
  constructor() {
    /** @export { !blink.mojom.SyncRegistrationOptions } */
    this.options;
    /** @export { !bigint } */
    this.serviceWorkerRegistrationId;
  }
};




mojo.internal.Struct(
    blink.mojom.PeriodicBackgroundSyncService_Register_ResponseParamsSpec.$,
    'PeriodicBackgroundSyncService_Register_ResponseParams',
    [
      mojo.internal.StructField(
        'err', 0,
        0,
        blink.mojom.BackgroundSyncErrorSpec.$,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'options', 8,
        0,
        blink.mojom.SyncRegistrationOptionsSpec.$,
        null,
        true /* nullable */),
    ],
    [[0, 24],]);



goog.provide('blink.mojom.PeriodicBackgroundSyncService_Register_ResponseParams');

/** @record */
blink.mojom.PeriodicBackgroundSyncService_Register_ResponseParams = class {
  constructor() {
    /** @export { !blink.mojom.BackgroundSyncError } */
    this.err;
    /** @export { (blink.mojom.SyncRegistrationOptions|undefined) } */
    this.options;
  }
};




mojo.internal.Struct(
    blink.mojom.PeriodicBackgroundSyncService_Unregister_ParamsSpec.$,
    'PeriodicBackgroundSyncService_Unregister_Params',
    [
      mojo.internal.StructField(
        'serviceWorkerRegistrationId', 0,
        0,
        mojo.internal.Int64,
        BigInt(0),
        false /* nullable */),
      mojo.internal.StructField(
        'tag', 8,
        0,
        mojo.internal.String,
        null,
        false /* nullable */),
    ],
    [[0, 24],]);



goog.provide('blink.mojom.PeriodicBackgroundSyncService_Unregister_Params');

/** @record */
blink.mojom.PeriodicBackgroundSyncService_Unregister_Params = class {
  constructor() {
    /** @export { !bigint } */
    this.serviceWorkerRegistrationId;
    /** @export { !string } */
    this.tag;
  }
};




mojo.internal.Struct(
    blink.mojom.PeriodicBackgroundSyncService_Unregister_ResponseParamsSpec.$,
    'PeriodicBackgroundSyncService_Unregister_ResponseParams',
    [
      mojo.internal.StructField(
        'err', 0,
        0,
        blink.mojom.BackgroundSyncErrorSpec.$,
        0,
        false /* nullable */),
    ],
    [[0, 16],]);



goog.provide('blink.mojom.PeriodicBackgroundSyncService_Unregister_ResponseParams');

/** @record */
blink.mojom.PeriodicBackgroundSyncService_Unregister_ResponseParams = class {
  constructor() {
    /** @export { !blink.mojom.BackgroundSyncError } */
    this.err;
  }
};




mojo.internal.Struct(
    blink.mojom.PeriodicBackgroundSyncService_GetRegistrations_ParamsSpec.$,
    'PeriodicBackgroundSyncService_GetRegistrations_Params',
    [
      mojo.internal.StructField(
        'serviceWorkerRegistrationId', 0,
        0,
        mojo.internal.Int64,
        BigInt(0),
        false /* nullable */),
    ],
    [[0, 16],]);



goog.provide('blink.mojom.PeriodicBackgroundSyncService_GetRegistrations_Params');

/** @record */
blink.mojom.PeriodicBackgroundSyncService_GetRegistrations_Params = class {
  constructor() {
    /** @export { !bigint } */
    this.serviceWorkerRegistrationId;
  }
};




mojo.internal.Struct(
    blink.mojom.PeriodicBackgroundSyncService_GetRegistrations_ResponseParamsSpec.$,
    'PeriodicBackgroundSyncService_GetRegistrations_ResponseParams',
    [
      mojo.internal.StructField(
        'err', 0,
        0,
        blink.mojom.BackgroundSyncErrorSpec.$,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'registrations', 8,
        0,
        mojo.internal.Array(blink.mojom.SyncRegistrationOptionsSpec.$, false),
        null,
        false /* nullable */),
    ],
    [[0, 24],]);



goog.provide('blink.mojom.PeriodicBackgroundSyncService_GetRegistrations_ResponseParams');

/** @record */
blink.mojom.PeriodicBackgroundSyncService_GetRegistrations_ResponseParams = class {
  constructor() {
    /** @export { !blink.mojom.BackgroundSyncError } */
    this.err;
    /** @export { !Array<!blink.mojom.SyncRegistrationOptions> } */
    this.registrations;
  }
};


