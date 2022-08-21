// third_party/blink/public/mojom/locks/lock_manager.mojom-lite-for-compile.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
'use strict';

goog.require('mojo.internal');
goog.require('mojo.internal.interfaceSupport');





goog.provide('blink.mojom.LockMode');
goog.provide('blink.mojom.LockModeSpec');
/**
 * @const { {$: !mojo.internal.MojomType} }
 * @export
 */
blink.mojom.LockModeSpec = { $: mojo.internal.Enum() };

/**
 * @enum {number}
 * @export
 */
blink.mojom.LockMode = {
  
  SHARED: 0,
  EXCLUSIVE: 1,
  MIN_VALUE: 0,
  MAX_VALUE: 1,
};



goog.provide('blink.mojom.LockHandle');
goog.provide('blink.mojom.LockHandleReceiver');
goog.provide('blink.mojom.LockHandleCallbackRouter');
goog.provide('blink.mojom.LockHandleInterface');
goog.provide('blink.mojom.LockHandleRemote');
goog.provide('blink.mojom.LockHandlePendingReceiver');


/**
 * @implements {mojo.internal.interfaceSupport.PendingReceiver}
 * @export
 */
blink.mojom.LockHandlePendingReceiver = class {
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
        blink.mojom.LockHandle.$interfaceName,
        scope);
  }
};

/** @interface */
blink.mojom.LockHandleInterface = class {
};

/**
 * @export
 * @implements { blink.mojom.LockHandleInterface }
 */
blink.mojom.LockHandleRemote = class {
  /** @param {MojoHandle|mojo.internal.interfaceSupport.Endpoint=} handle */
  constructor(handle = undefined) {
    /**
     * @private {!mojo.internal.interfaceSupport.InterfaceRemoteBase<!blink.mojom.LockHandlePendingReceiver>}
     */
    this.proxy =
        new mojo.internal.interfaceSupport.InterfaceRemoteBase(
          blink.mojom.LockHandlePendingReceiver,
          handle);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper<!blink.mojom.LockHandlePendingReceiver>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper(this.proxy);

    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.proxy.getConnectionErrorEventRouter();
  }
};

/**
 * An object which receives request messages for the LockHandle
 * mojom interface. Must be constructed over an object which implements that
 * interface.
 *
 * @export
 */
blink.mojom.LockHandleReceiver = class {
  /**
   * @param {!blink.mojom.LockHandleInterface } impl
   */
  constructor(impl) {
    /** @private {!mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal<!blink.mojom.LockHandleRemote>} */
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
        blink.mojom.LockHandleRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!blink.mojom.LockHandleRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);


    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.helper_internal_.getConnectionErrorEventRouter();
  }
};

/**
 *  @export
 */
blink.mojom.LockHandle = class {
  /**
   * @return {!string}
   */
  static get $interfaceName() {
    return "blink.mojom.LockHandle";
  }

  /**
   * Returns a remote for this interface which sends messages to the browser.
   * The browser must have an interface request binder registered for this
   * interface and accessible to the calling document's frame.
   *
   * @return {!blink.mojom.LockHandleRemote}
   * @export
   */
  static getRemote() {
    let remote = new blink.mojom.LockHandleRemote;
    remote.$.bindNewPipeAndPassReceiver().bindInBrowser();
    return remote;
  }
};


/**
 * An object which receives request messages for the LockHandle
 * mojom interface and dispatches them as callbacks. One callback receiver exists
 * on this object for each message defined in the mojom interface, and each
 * receiver can have any number of listeners added to it.
 *
 * @export
 */
blink.mojom.LockHandleCallbackRouter = class {
  constructor() {
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
      blink.mojom.LockHandleRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!blink.mojom.LockHandleRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);

    this.router_ = new mojo.internal.interfaceSupport.CallbackRouter;

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


goog.provide('blink.mojom.LockRequest');
goog.provide('blink.mojom.LockRequestReceiver');
goog.provide('blink.mojom.LockRequestCallbackRouter');
goog.provide('blink.mojom.LockRequestInterface');
goog.provide('blink.mojom.LockRequestRemote');
goog.provide('blink.mojom.LockRequestPendingReceiver');


/**
 * @implements {mojo.internal.interfaceSupport.PendingReceiver}
 * @export
 */
blink.mojom.LockRequestPendingReceiver = class {
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
        blink.mojom.LockRequest.$interfaceName,
        scope);
  }
};

/** @interface */
blink.mojom.LockRequestInterface = class {
  
  /**
   * @param { !Object } lockHandle
   */

  granted(lockHandle) {}
  
  /**
   */

  failed() {}
  
  /**
   * @param { !string } reason
   */

  abort(reason) {}
};

/**
 * @export
 * @implements { blink.mojom.LockRequestInterface }
 */
blink.mojom.LockRequestRemote = class {
  /** @param {MojoHandle|mojo.internal.interfaceSupport.Endpoint=} handle */
  constructor(handle = undefined) {
    /**
     * @private {!mojo.internal.interfaceSupport.InterfaceRemoteBase<!blink.mojom.LockRequestPendingReceiver>}
     */
    this.proxy =
        new mojo.internal.interfaceSupport.InterfaceRemoteBase(
          blink.mojom.LockRequestPendingReceiver,
          handle);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper<!blink.mojom.LockRequestPendingReceiver>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper(this.proxy);

    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.proxy.getConnectionErrorEventRouter();
  }

  
  /**
   * @param { !Object } lockHandle
   */

  granted(
      lockHandle) {
    this.proxy.sendMessage(
        0,
        blink.mojom.LockRequest_Granted_ParamsSpec.$,
        null,
        [
          lockHandle
        ]);
  }

  
  /**
   */

  failed() {
    this.proxy.sendMessage(
        1,
        blink.mojom.LockRequest_Failed_ParamsSpec.$,
        null,
        [
        ]);
  }

  
  /**
   * @param { !string } reason
   */

  abort(
      reason) {
    this.proxy.sendMessage(
        2,
        blink.mojom.LockRequest_Abort_ParamsSpec.$,
        null,
        [
          reason
        ]);
  }
};

/**
 * An object which receives request messages for the LockRequest
 * mojom interface. Must be constructed over an object which implements that
 * interface.
 *
 * @export
 */
blink.mojom.LockRequestReceiver = class {
  /**
   * @param {!blink.mojom.LockRequestInterface } impl
   */
  constructor(impl) {
    /** @private {!mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal<!blink.mojom.LockRequestRemote>} */
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
        blink.mojom.LockRequestRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!blink.mojom.LockRequestRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);


    this.helper_internal_.registerHandler(
        0,
        blink.mojom.LockRequest_Granted_ParamsSpec.$,
        null,
        impl.granted.bind(impl));
    this.helper_internal_.registerHandler(
        1,
        blink.mojom.LockRequest_Failed_ParamsSpec.$,
        null,
        impl.failed.bind(impl));
    this.helper_internal_.registerHandler(
        2,
        blink.mojom.LockRequest_Abort_ParamsSpec.$,
        null,
        impl.abort.bind(impl));
    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.helper_internal_.getConnectionErrorEventRouter();
  }
};

/**
 *  @export
 */
blink.mojom.LockRequest = class {
  /**
   * @return {!string}
   */
  static get $interfaceName() {
    return "blink.mojom.LockRequest";
  }

  /**
   * Returns a remote for this interface which sends messages to the browser.
   * The browser must have an interface request binder registered for this
   * interface and accessible to the calling document's frame.
   *
   * @return {!blink.mojom.LockRequestRemote}
   * @export
   */
  static getRemote() {
    let remote = new blink.mojom.LockRequestRemote;
    remote.$.bindNewPipeAndPassReceiver().bindInBrowser();
    return remote;
  }
};


/**
 * An object which receives request messages for the LockRequest
 * mojom interface and dispatches them as callbacks. One callback receiver exists
 * on this object for each message defined in the mojom interface, and each
 * receiver can have any number of listeners added to it.
 *
 * @export
 */
blink.mojom.LockRequestCallbackRouter = class {
  constructor() {
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
      blink.mojom.LockRequestRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!blink.mojom.LockRequestRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);

    this.router_ = new mojo.internal.interfaceSupport.CallbackRouter;

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.granted =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        0,
        blink.mojom.LockRequest_Granted_ParamsSpec.$,
        null,
        this.granted.createReceiverHandler(false /* expectsResponse */));
    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.failed =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        1,
        blink.mojom.LockRequest_Failed_ParamsSpec.$,
        null,
        this.failed.createReceiverHandler(false /* expectsResponse */));
    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.abort =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        2,
        blink.mojom.LockRequest_Abort_ParamsSpec.$,
        null,
        this.abort.createReceiverHandler(false /* expectsResponse */));
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


goog.provide('blink.mojom.LockManager');
goog.provide('blink.mojom.LockManagerReceiver');
goog.provide('blink.mojom.LockManagerCallbackRouter');
goog.provide('blink.mojom.LockManagerInterface');
goog.provide('blink.mojom.LockManagerRemote');
goog.provide('blink.mojom.LockManagerPendingReceiver');


/**
 * @implements {mojo.internal.interfaceSupport.PendingReceiver}
 * @export
 */
blink.mojom.LockManagerPendingReceiver = class {
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
        blink.mojom.LockManager.$interfaceName,
        scope);
  }
};

/** @interface */
blink.mojom.LockManagerInterface = class {
  
  /**
   * @param { !string } name
   * @param { !blink.mojom.LockMode } mode
   * @param { !blink.mojom.LockManager_WaitMode } wait
   * @param { !Object } request
   */

  requestLock(name, mode, wait, request) {}
  
  /**
   * @return {!Promise<{
        requested: !Array<!blink.mojom.LockInfo>,
        held: !Array<!blink.mojom.LockInfo>,
   *  }>}
   */

  queryState() {}
};

/**
 * @export
 * @implements { blink.mojom.LockManagerInterface }
 */
blink.mojom.LockManagerRemote = class {
  /** @param {MojoHandle|mojo.internal.interfaceSupport.Endpoint=} handle */
  constructor(handle = undefined) {
    /**
     * @private {!mojo.internal.interfaceSupport.InterfaceRemoteBase<!blink.mojom.LockManagerPendingReceiver>}
     */
    this.proxy =
        new mojo.internal.interfaceSupport.InterfaceRemoteBase(
          blink.mojom.LockManagerPendingReceiver,
          handle);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper<!blink.mojom.LockManagerPendingReceiver>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper(this.proxy);

    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.proxy.getConnectionErrorEventRouter();
  }

  
  /**
   * @param { !string } name
   * @param { !blink.mojom.LockMode } mode
   * @param { !blink.mojom.LockManager_WaitMode } wait
   * @param { !Object } request
   */

  requestLock(
      name,
      mode,
      wait,
      request) {
    this.proxy.sendMessage(
        0,
        blink.mojom.LockManager_RequestLock_ParamsSpec.$,
        null,
        [
          name,
          mode,
          wait,
          request
        ]);
  }

  
  /**
   * @return {!Promise<{
        requested: !Array<!blink.mojom.LockInfo>,
        held: !Array<!blink.mojom.LockInfo>,
   *  }>}
   */

  queryState() {
    return this.proxy.sendMessage(
        1,
        blink.mojom.LockManager_QueryState_ParamsSpec.$,
        blink.mojom.LockManager_QueryState_ResponseParamsSpec.$,
        [
        ]);
  }
};

/**
 * An object which receives request messages for the LockManager
 * mojom interface. Must be constructed over an object which implements that
 * interface.
 *
 * @export
 */
blink.mojom.LockManagerReceiver = class {
  /**
   * @param {!blink.mojom.LockManagerInterface } impl
   */
  constructor(impl) {
    /** @private {!mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal<!blink.mojom.LockManagerRemote>} */
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
        blink.mojom.LockManagerRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!blink.mojom.LockManagerRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);


    this.helper_internal_.registerHandler(
        0,
        blink.mojom.LockManager_RequestLock_ParamsSpec.$,
        null,
        impl.requestLock.bind(impl));
    this.helper_internal_.registerHandler(
        1,
        blink.mojom.LockManager_QueryState_ParamsSpec.$,
        blink.mojom.LockManager_QueryState_ResponseParamsSpec.$,
        impl.queryState.bind(impl));
    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.helper_internal_.getConnectionErrorEventRouter();
  }
};

/**
 *  @export
 */
blink.mojom.LockManager = class {
  /**
   * @return {!string}
   */
  static get $interfaceName() {
    return "blink.mojom.LockManager";
  }

  /**
   * Returns a remote for this interface which sends messages to the browser.
   * The browser must have an interface request binder registered for this
   * interface and accessible to the calling document's frame.
   *
   * @return {!blink.mojom.LockManagerRemote}
   * @export
   */
  static getRemote() {
    let remote = new blink.mojom.LockManagerRemote;
    remote.$.bindNewPipeAndPassReceiver().bindInBrowser();
    return remote;
  }
};

goog.provide('blink.mojom.LockManager_WaitMode');
goog.provide('blink.mojom.LockManager.WaitModeSpec');
/**
 * @const { {$: !mojo.internal.MojomType} }
 * @export
 */
blink.mojom.LockManager.WaitModeSpec = { $: mojo.internal.Enum() };

/**
 * @enum {number}
 * @export
 */
blink.mojom.LockManager_WaitMode = {
  
  WAIT: 0,
  NO_WAIT: 1,
  PREEMPT: 2,
  MIN_VALUE: 0,
  MAX_VALUE: 2,
};

/**
 * An object which receives request messages for the LockManager
 * mojom interface and dispatches them as callbacks. One callback receiver exists
 * on this object for each message defined in the mojom interface, and each
 * receiver can have any number of listeners added to it.
 *
 * @export
 */
blink.mojom.LockManagerCallbackRouter = class {
  constructor() {
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
      blink.mojom.LockManagerRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!blink.mojom.LockManagerRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);

    this.router_ = new mojo.internal.interfaceSupport.CallbackRouter;

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.requestLock =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        0,
        blink.mojom.LockManager_RequestLock_ParamsSpec.$,
        null,
        this.requestLock.createReceiverHandler(false /* expectsResponse */));
    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.queryState =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        1,
        blink.mojom.LockManager_QueryState_ParamsSpec.$,
        blink.mojom.LockManager_QueryState_ResponseParamsSpec.$,
        this.queryState.createReceiverHandler(true /* expectsResponse */));
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


goog.provide('blink.mojom.LockInfoSpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
blink.mojom.LockInfoSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

goog.provide('blink.mojom.LockRequest_Granted_ParamsSpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
blink.mojom.LockRequest_Granted_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

goog.provide('blink.mojom.LockRequest_Failed_ParamsSpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
blink.mojom.LockRequest_Failed_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

goog.provide('blink.mojom.LockRequest_Abort_ParamsSpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
blink.mojom.LockRequest_Abort_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

goog.provide('blink.mojom.LockManager_RequestLock_ParamsSpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
blink.mojom.LockManager_RequestLock_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

goog.provide('blink.mojom.LockManager_QueryState_ParamsSpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
blink.mojom.LockManager_QueryState_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

goog.provide('blink.mojom.LockManager_QueryState_ResponseParamsSpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
blink.mojom.LockManager_QueryState_ResponseParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };




mojo.internal.Struct(
    blink.mojom.LockInfoSpec.$,
    'LockInfo',
    [
      mojo.internal.StructField(
        'name', 0,
        0,
        mojo.internal.String,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'mode', 8,
        0,
        blink.mojom.LockModeSpec.$,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'clientId', 16,
        0,
        mojo.internal.String,
        null,
        false /* nullable */),
    ],
    [[0, 32],]);



goog.provide('blink.mojom.LockInfo');

/** @record */
blink.mojom.LockInfo = class {
  constructor() {
    /** @export { !string } */
    this.name;
    /** @export { !blink.mojom.LockMode } */
    this.mode;
    /** @export { !string } */
    this.clientId;
  }
};




mojo.internal.Struct(
    blink.mojom.LockRequest_Granted_ParamsSpec.$,
    'LockRequest_Granted_Params',
    [
      mojo.internal.StructField(
        'lockHandle', 0,
        0,
        mojo.internal.AssociatedInterfaceProxy(blink.mojom.LockHandleRemote),
        null,
        false /* nullable */),
    ],
    [[0, 16],]);



goog.provide('blink.mojom.LockRequest_Granted_Params');

/** @record */
blink.mojom.LockRequest_Granted_Params = class {
  constructor() {
    /** @export { !Object } */
    this.lockHandle;
  }
};




mojo.internal.Struct(
    blink.mojom.LockRequest_Failed_ParamsSpec.$,
    'LockRequest_Failed_Params',
    [
    ],
    [[0, 8],]);



goog.provide('blink.mojom.LockRequest_Failed_Params');

/** @record */
blink.mojom.LockRequest_Failed_Params = class {
  constructor() {
  }
};




mojo.internal.Struct(
    blink.mojom.LockRequest_Abort_ParamsSpec.$,
    'LockRequest_Abort_Params',
    [
      mojo.internal.StructField(
        'reason', 0,
        0,
        mojo.internal.String,
        null,
        false /* nullable */),
    ],
    [[0, 16],]);



goog.provide('blink.mojom.LockRequest_Abort_Params');

/** @record */
blink.mojom.LockRequest_Abort_Params = class {
  constructor() {
    /** @export { !string } */
    this.reason;
  }
};




mojo.internal.Struct(
    blink.mojom.LockManager_RequestLock_ParamsSpec.$,
    'LockManager_RequestLock_Params',
    [
      mojo.internal.StructField(
        'name', 0,
        0,
        mojo.internal.String,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'mode', 8,
        0,
        blink.mojom.LockModeSpec.$,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'wait', 12,
        0,
        blink.mojom.LockManager.WaitModeSpec.$,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'request', 16,
        0,
        mojo.internal.AssociatedInterfaceProxy(blink.mojom.LockRequestRemote),
        null,
        false /* nullable */),
    ],
    [[0, 32],]);



goog.provide('blink.mojom.LockManager_RequestLock_Params');

/** @record */
blink.mojom.LockManager_RequestLock_Params = class {
  constructor() {
    /** @export { !string } */
    this.name;
    /** @export { !blink.mojom.LockMode } */
    this.mode;
    /** @export { !blink.mojom.LockManager_WaitMode } */
    this.wait;
    /** @export { !Object } */
    this.request;
  }
};




mojo.internal.Struct(
    blink.mojom.LockManager_QueryState_ParamsSpec.$,
    'LockManager_QueryState_Params',
    [
    ],
    [[0, 8],]);



goog.provide('blink.mojom.LockManager_QueryState_Params');

/** @record */
blink.mojom.LockManager_QueryState_Params = class {
  constructor() {
  }
};




mojo.internal.Struct(
    blink.mojom.LockManager_QueryState_ResponseParamsSpec.$,
    'LockManager_QueryState_ResponseParams',
    [
      mojo.internal.StructField(
        'requested', 0,
        0,
        mojo.internal.Array(blink.mojom.LockInfoSpec.$, false),
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'held', 8,
        0,
        mojo.internal.Array(blink.mojom.LockInfoSpec.$, false),
        null,
        false /* nullable */),
    ],
    [[0, 24],]);



goog.provide('blink.mojom.LockManager_QueryState_ResponseParams');

/** @record */
blink.mojom.LockManager_QueryState_ResponseParams = class {
  constructor() {
    /** @export { !Array<!blink.mojom.LockInfo> } */
    this.requested;
    /** @export { !Array<!blink.mojom.LockInfo> } */
    this.held;
  }
};


