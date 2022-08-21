// third_party/blink/public/mojom/lock_screen/lock_screen.mojom-lite.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
'use strict';


mojo.internal.exportModule('blink.mojom');





/**
 * @const { {$: !mojo.internal.MojomType} }
 * @export
 */
blink.mojom.LockScreenServiceStatusSpec = { $: mojo.internal.Enum() };

/**
 * @enum {number}
 * @export
 */
blink.mojom.LockScreenServiceStatus = {
  
  kSuccess: 0,
  kNotAllowedFromContext: 1,
  kWriteError: 2,
  MIN_VALUE: 0,
  MAX_VALUE: 2,
};





/**
 * @implements {mojo.internal.interfaceSupport.PendingReceiver}
 * @export
 */
blink.mojom.LockScreenServicePendingReceiver = class {
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
        blink.mojom.LockScreenService.$interfaceName,
        scope);
  }
};



/**
 * @export
 * @implements { blink.mojom.LockScreenServiceInterface }
 */
blink.mojom.LockScreenServiceRemote = class {
  /** @param {MojoHandle|mojo.internal.interfaceSupport.Endpoint=} handle */
  constructor(handle = undefined) {
    /**
     * @private {!mojo.internal.interfaceSupport.InterfaceRemoteBase<!blink.mojom.LockScreenServicePendingReceiver>}
     */
    this.proxy =
        new mojo.internal.interfaceSupport.InterfaceRemoteBase(
          blink.mojom.LockScreenServicePendingReceiver,
          handle);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper<!blink.mojom.LockScreenServicePendingReceiver>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper(this.proxy);

    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.proxy.getConnectionErrorEventRouter();
  }

  
  /**
   * @return {!Promise<{
        keys: !Array<!string>,
   *  }>}
   */

  getKeys() {
    return this.proxy.sendMessage(
        0,
        blink.mojom.LockScreenService_GetKeys_ParamsSpec.$,
        blink.mojom.LockScreenService_GetKeys_ResponseParamsSpec.$,
        [
        ]);
  }

  
  /**
   * @param { !string } key
   * @param { !string } data
   * @return {!Promise<{
        status: !blink.mojom.LockScreenServiceStatus,
   *  }>}
   */

  setData(
      key,
      data) {
    return this.proxy.sendMessage(
        1,
        blink.mojom.LockScreenService_SetData_ParamsSpec.$,
        blink.mojom.LockScreenService_SetData_ResponseParamsSpec.$,
        [
          key,
          data
        ]);
  }
};

/**
 * An object which receives request messages for the LockScreenService
 * mojom interface. Must be constructed over an object which implements that
 * interface.
 *
 * @export
 */
blink.mojom.LockScreenServiceReceiver = class {
  /**
   * @param {!blink.mojom.LockScreenServiceInterface } impl
   */
  constructor(impl) {
    /** @private {!mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal<!blink.mojom.LockScreenServiceRemote>} */
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
        blink.mojom.LockScreenServiceRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!blink.mojom.LockScreenServiceRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);


    this.helper_internal_.registerHandler(
        0,
        blink.mojom.LockScreenService_GetKeys_ParamsSpec.$,
        blink.mojom.LockScreenService_GetKeys_ResponseParamsSpec.$,
        impl.getKeys.bind(impl));
    this.helper_internal_.registerHandler(
        1,
        blink.mojom.LockScreenService_SetData_ParamsSpec.$,
        blink.mojom.LockScreenService_SetData_ResponseParamsSpec.$,
        impl.setData.bind(impl));
    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.helper_internal_.getConnectionErrorEventRouter();
  }
};

/**
 *  @export
 */
blink.mojom.LockScreenService = class {
  /**
   * @return {!string}
   */
  static get $interfaceName() {
    return "blink.mojom.LockScreenService";
  }

  /**
   * Returns a remote for this interface which sends messages to the browser.
   * The browser must have an interface request binder registered for this
   * interface and accessible to the calling document's frame.
   *
   * @return {!blink.mojom.LockScreenServiceRemote}
   * @export
   */
  static getRemote() {
    let remote = new blink.mojom.LockScreenServiceRemote;
    remote.$.bindNewPipeAndPassReceiver().bindInBrowser();
    return remote;
  }
};


/**
 * An object which receives request messages for the LockScreenService
 * mojom interface and dispatches them as callbacks. One callback receiver exists
 * on this object for each message defined in the mojom interface, and each
 * receiver can have any number of listeners added to it.
 *
 * @export
 */
blink.mojom.LockScreenServiceCallbackRouter = class {
  constructor() {
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
      blink.mojom.LockScreenServiceRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!blink.mojom.LockScreenServiceRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);

    this.router_ = new mojo.internal.interfaceSupport.CallbackRouter;

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.getKeys =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        0,
        blink.mojom.LockScreenService_GetKeys_ParamsSpec.$,
        blink.mojom.LockScreenService_GetKeys_ResponseParamsSpec.$,
        this.getKeys.createReceiverHandler(true /* expectsResponse */));
    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.setData =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        1,
        blink.mojom.LockScreenService_SetData_ParamsSpec.$,
        blink.mojom.LockScreenService_SetData_ResponseParamsSpec.$,
        this.setData.createReceiverHandler(true /* expectsResponse */));
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
blink.mojom.LockScreenService_GetKeys_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
blink.mojom.LockScreenService_GetKeys_ResponseParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
blink.mojom.LockScreenService_SetData_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
blink.mojom.LockScreenService_SetData_ResponseParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };




mojo.internal.Struct(
    blink.mojom.LockScreenService_GetKeys_ParamsSpec.$,
    'LockScreenService_GetKeys_Params',
    [
    ],
    [[0, 8],]);





/** @record */
blink.mojom.LockScreenService_GetKeys_Params = class {
  constructor() {
  }
};




mojo.internal.Struct(
    blink.mojom.LockScreenService_GetKeys_ResponseParamsSpec.$,
    'LockScreenService_GetKeys_ResponseParams',
    [
      mojo.internal.StructField(
        'keys', 0,
        0,
        mojo.internal.Array(mojo.internal.String, false),
        null,
        false /* nullable */),
    ],
    [[0, 16],]);





/** @record */
blink.mojom.LockScreenService_GetKeys_ResponseParams = class {
  constructor() {
    /** @export { !Array<!string> } */
    this.keys;
  }
};




mojo.internal.Struct(
    blink.mojom.LockScreenService_SetData_ParamsSpec.$,
    'LockScreenService_SetData_Params',
    [
      mojo.internal.StructField(
        'key', 0,
        0,
        mojo.internal.String,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'data', 8,
        0,
        mojo.internal.String,
        null,
        false /* nullable */),
    ],
    [[0, 24],]);





/** @record */
blink.mojom.LockScreenService_SetData_Params = class {
  constructor() {
    /** @export { !string } */
    this.key;
    /** @export { !string } */
    this.data;
  }
};




mojo.internal.Struct(
    blink.mojom.LockScreenService_SetData_ResponseParamsSpec.$,
    'LockScreenService_SetData_ResponseParams',
    [
      mojo.internal.StructField(
        'status', 0,
        0,
        blink.mojom.LockScreenServiceStatusSpec.$,
        0,
        false /* nullable */),
    ],
    [[0, 16],]);





/** @record */
blink.mojom.LockScreenService_SetData_ResponseParams = class {
  constructor() {
    /** @export { !blink.mojom.LockScreenServiceStatus } */
    this.status;
  }
};


