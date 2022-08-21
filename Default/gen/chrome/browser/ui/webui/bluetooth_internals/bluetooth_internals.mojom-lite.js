// chrome/browser/ui/webui/bluetooth_internals/bluetooth_internals.mojom-lite.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
'use strict';


mojo.internal.exportModule('mojom');








/**
 * @implements {mojo.internal.interfaceSupport.PendingReceiver}
 * @export
 */
mojom.DebugLogsChangeHandlerPendingReceiver = class {
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
        mojom.DebugLogsChangeHandler.$interfaceName,
        scope);
  }
};



/**
 * @export
 * @implements { mojom.DebugLogsChangeHandlerInterface }
 */
mojom.DebugLogsChangeHandlerRemote = class {
  /** @param {MojoHandle|mojo.internal.interfaceSupport.Endpoint=} handle */
  constructor(handle = undefined) {
    /**
     * @private {!mojo.internal.interfaceSupport.InterfaceRemoteBase<!mojom.DebugLogsChangeHandlerPendingReceiver>}
     */
    this.proxy =
        new mojo.internal.interfaceSupport.InterfaceRemoteBase(
          mojom.DebugLogsChangeHandlerPendingReceiver,
          handle);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper<!mojom.DebugLogsChangeHandlerPendingReceiver>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper(this.proxy);

    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.proxy.getConnectionErrorEventRouter();
  }

  
  /**
   * @param { !boolean } shouldDebugLogsBeEnabled
   */

  changeDebugLogsState(
      shouldDebugLogsBeEnabled) {
    this.proxy.sendMessage(
        0,
        mojom.DebugLogsChangeHandler_ChangeDebugLogsState_ParamsSpec.$,
        null,
        [
          shouldDebugLogsBeEnabled
        ]);
  }
};

/**
 * An object which receives request messages for the DebugLogsChangeHandler
 * mojom interface. Must be constructed over an object which implements that
 * interface.
 *
 * @export
 */
mojom.DebugLogsChangeHandlerReceiver = class {
  /**
   * @param {!mojom.DebugLogsChangeHandlerInterface } impl
   */
  constructor(impl) {
    /** @private {!mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal<!mojom.DebugLogsChangeHandlerRemote>} */
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
        mojom.DebugLogsChangeHandlerRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!mojom.DebugLogsChangeHandlerRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);


    this.helper_internal_.registerHandler(
        0,
        mojom.DebugLogsChangeHandler_ChangeDebugLogsState_ParamsSpec.$,
        null,
        impl.changeDebugLogsState.bind(impl));
    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.helper_internal_.getConnectionErrorEventRouter();
  }
};

/**
 *  @export
 */
mojom.DebugLogsChangeHandler = class {
  /**
   * @return {!string}
   */
  static get $interfaceName() {
    return "mojom.DebugLogsChangeHandler";
  }

  /**
   * Returns a remote for this interface which sends messages to the browser.
   * The browser must have an interface request binder registered for this
   * interface and accessible to the calling document's frame.
   *
   * @return {!mojom.DebugLogsChangeHandlerRemote}
   * @export
   */
  static getRemote() {
    let remote = new mojom.DebugLogsChangeHandlerRemote;
    remote.$.bindNewPipeAndPassReceiver().bindInBrowser();
    return remote;
  }
};


/**
 * An object which receives request messages for the DebugLogsChangeHandler
 * mojom interface and dispatches them as callbacks. One callback receiver exists
 * on this object for each message defined in the mojom interface, and each
 * receiver can have any number of listeners added to it.
 *
 * @export
 */
mojom.DebugLogsChangeHandlerCallbackRouter = class {
  constructor() {
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
      mojom.DebugLogsChangeHandlerRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!mojom.DebugLogsChangeHandlerRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);

    this.router_ = new mojo.internal.interfaceSupport.CallbackRouter;

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.changeDebugLogsState =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        0,
        mojom.DebugLogsChangeHandler_ChangeDebugLogsState_ParamsSpec.$,
        null,
        this.changeDebugLogsState.createReceiverHandler(false /* expectsResponse */));
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
 * @implements {mojo.internal.interfaceSupport.PendingReceiver}
 * @export
 */
mojom.BluetoothInternalsHandlerPendingReceiver = class {
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
        mojom.BluetoothInternalsHandler.$interfaceName,
        scope);
  }
};



/**
 * @export
 * @implements { mojom.BluetoothInternalsHandlerInterface }
 */
mojom.BluetoothInternalsHandlerRemote = class {
  /** @param {MojoHandle|mojo.internal.interfaceSupport.Endpoint=} handle */
  constructor(handle = undefined) {
    /**
     * @private {!mojo.internal.interfaceSupport.InterfaceRemoteBase<!mojom.BluetoothInternalsHandlerPendingReceiver>}
     */
    this.proxy =
        new mojo.internal.interfaceSupport.InterfaceRemoteBase(
          mojom.BluetoothInternalsHandlerPendingReceiver,
          handle);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper<!mojom.BluetoothInternalsHandlerPendingReceiver>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper(this.proxy);

    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.proxy.getConnectionErrorEventRouter();
  }

  
  /**
   * @return {!Promise<{
        adapter: ?bluetooth.mojom.AdapterRemote,
   *  }>}
   */

  getAdapter() {
    return this.proxy.sendMessage(
        0,
        mojom.BluetoothInternalsHandler_GetAdapter_ParamsSpec.$,
        mojom.BluetoothInternalsHandler_GetAdapter_ResponseParamsSpec.$,
        [
        ]);
  }

  
  /**
   * @return {!Promise<{
        handler: ?mojom.DebugLogsChangeHandlerRemote,
        initialToggleValue: !boolean,
   *  }>}
   */

  getDebugLogsChangeHandler() {
    return this.proxy.sendMessage(
        1,
        mojom.BluetoothInternalsHandler_GetDebugLogsChangeHandler_ParamsSpec.$,
        mojom.BluetoothInternalsHandler_GetDebugLogsChangeHandler_ResponseParamsSpec.$,
        [
        ]);
  }
};

/**
 * An object which receives request messages for the BluetoothInternalsHandler
 * mojom interface. Must be constructed over an object which implements that
 * interface.
 *
 * @export
 */
mojom.BluetoothInternalsHandlerReceiver = class {
  /**
   * @param {!mojom.BluetoothInternalsHandlerInterface } impl
   */
  constructor(impl) {
    /** @private {!mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal<!mojom.BluetoothInternalsHandlerRemote>} */
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
        mojom.BluetoothInternalsHandlerRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!mojom.BluetoothInternalsHandlerRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);


    this.helper_internal_.registerHandler(
        0,
        mojom.BluetoothInternalsHandler_GetAdapter_ParamsSpec.$,
        mojom.BluetoothInternalsHandler_GetAdapter_ResponseParamsSpec.$,
        impl.getAdapter.bind(impl));
    this.helper_internal_.registerHandler(
        1,
        mojom.BluetoothInternalsHandler_GetDebugLogsChangeHandler_ParamsSpec.$,
        mojom.BluetoothInternalsHandler_GetDebugLogsChangeHandler_ResponseParamsSpec.$,
        impl.getDebugLogsChangeHandler.bind(impl));
    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.helper_internal_.getConnectionErrorEventRouter();
  }
};

/**
 *  @export
 */
mojom.BluetoothInternalsHandler = class {
  /**
   * @return {!string}
   */
  static get $interfaceName() {
    return "mojom.BluetoothInternalsHandler";
  }

  /**
   * Returns a remote for this interface which sends messages to the browser.
   * The browser must have an interface request binder registered for this
   * interface and accessible to the calling document's frame.
   *
   * @return {!mojom.BluetoothInternalsHandlerRemote}
   * @export
   */
  static getRemote() {
    let remote = new mojom.BluetoothInternalsHandlerRemote;
    remote.$.bindNewPipeAndPassReceiver().bindInBrowser();
    return remote;
  }
};


/**
 * An object which receives request messages for the BluetoothInternalsHandler
 * mojom interface and dispatches them as callbacks. One callback receiver exists
 * on this object for each message defined in the mojom interface, and each
 * receiver can have any number of listeners added to it.
 *
 * @export
 */
mojom.BluetoothInternalsHandlerCallbackRouter = class {
  constructor() {
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
      mojom.BluetoothInternalsHandlerRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!mojom.BluetoothInternalsHandlerRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);

    this.router_ = new mojo.internal.interfaceSupport.CallbackRouter;

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.getAdapter =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        0,
        mojom.BluetoothInternalsHandler_GetAdapter_ParamsSpec.$,
        mojom.BluetoothInternalsHandler_GetAdapter_ResponseParamsSpec.$,
        this.getAdapter.createReceiverHandler(true /* expectsResponse */));
    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.getDebugLogsChangeHandler =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        1,
        mojom.BluetoothInternalsHandler_GetDebugLogsChangeHandler_ParamsSpec.$,
        mojom.BluetoothInternalsHandler_GetDebugLogsChangeHandler_ResponseParamsSpec.$,
        this.getDebugLogsChangeHandler.createReceiverHandler(true /* expectsResponse */));
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
mojom.DebugLogsChangeHandler_ChangeDebugLogsState_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
mojom.BluetoothInternalsHandler_GetAdapter_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
mojom.BluetoothInternalsHandler_GetAdapter_ResponseParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
mojom.BluetoothInternalsHandler_GetDebugLogsChangeHandler_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
mojom.BluetoothInternalsHandler_GetDebugLogsChangeHandler_ResponseParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };




mojo.internal.Struct(
    mojom.DebugLogsChangeHandler_ChangeDebugLogsState_ParamsSpec.$,
    'DebugLogsChangeHandler_ChangeDebugLogsState_Params',
    [
      mojo.internal.StructField(
        'shouldDebugLogsBeEnabled', 0,
        0,
        mojo.internal.Bool,
        false,
        false /* nullable */),
    ],
    [[0, 16],]);





/** @record */
mojom.DebugLogsChangeHandler_ChangeDebugLogsState_Params = class {
  constructor() {
    /** @export { !boolean } */
    this.shouldDebugLogsBeEnabled;
  }
};




mojo.internal.Struct(
    mojom.BluetoothInternalsHandler_GetAdapter_ParamsSpec.$,
    'BluetoothInternalsHandler_GetAdapter_Params',
    [
    ],
    [[0, 8],]);





/** @record */
mojom.BluetoothInternalsHandler_GetAdapter_Params = class {
  constructor() {
  }
};




mojo.internal.Struct(
    mojom.BluetoothInternalsHandler_GetAdapter_ResponseParamsSpec.$,
    'BluetoothInternalsHandler_GetAdapter_ResponseParams',
    [
      mojo.internal.StructField(
        'adapter', 0,
        0,
        mojo.internal.InterfaceProxy(bluetooth.mojom.AdapterRemote),
        null,
        true /* nullable */),
    ],
    [[0, 16],]);





/** @record */
mojom.BluetoothInternalsHandler_GetAdapter_ResponseParams = class {
  constructor() {
    /** @export { (bluetooth.mojom.AdapterRemote|undefined) } */
    this.adapter;
  }
};




mojo.internal.Struct(
    mojom.BluetoothInternalsHandler_GetDebugLogsChangeHandler_ParamsSpec.$,
    'BluetoothInternalsHandler_GetDebugLogsChangeHandler_Params',
    [
    ],
    [[0, 8],]);





/** @record */
mojom.BluetoothInternalsHandler_GetDebugLogsChangeHandler_Params = class {
  constructor() {
  }
};




mojo.internal.Struct(
    mojom.BluetoothInternalsHandler_GetDebugLogsChangeHandler_ResponseParamsSpec.$,
    'BluetoothInternalsHandler_GetDebugLogsChangeHandler_ResponseParams',
    [
      mojo.internal.StructField(
        'handler', 0,
        0,
        mojo.internal.InterfaceProxy(mojom.DebugLogsChangeHandlerRemote),
        null,
        true /* nullable */),
      mojo.internal.StructField(
        'initialToggleValue', 8,
        0,
        mojo.internal.Bool,
        false,
        false /* nullable */),
    ],
    [[0, 24],]);





/** @record */
mojom.BluetoothInternalsHandler_GetDebugLogsChangeHandler_ResponseParams = class {
  constructor() {
    /** @export { (mojom.DebugLogsChangeHandlerRemote|undefined) } */
    this.handler;
    /** @export { !boolean } */
    this.initialToggleValue;
  }
};


