// third_party/blink/public/mojom/input/pointer_lock_context.mojom-lite-for-compile.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
'use strict';

goog.require('mojo.internal');
goog.require('mojo.internal.interfaceSupport');

goog.require('blink.mojom.PointerLockResult');






goog.provide('blink.mojom.PointerLockContext');
goog.provide('blink.mojom.PointerLockContextReceiver');
goog.provide('blink.mojom.PointerLockContextCallbackRouter');
goog.provide('blink.mojom.PointerLockContextInterface');
goog.provide('blink.mojom.PointerLockContextRemote');
goog.provide('blink.mojom.PointerLockContextPendingReceiver');


/**
 * @implements {mojo.internal.interfaceSupport.PendingReceiver}
 * @export
 */
blink.mojom.PointerLockContextPendingReceiver = class {
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
        blink.mojom.PointerLockContext.$interfaceName,
        scope);
  }
};

/** @interface */
blink.mojom.PointerLockContextInterface = class {
  
  /**
   * @param { !boolean } unadjustedMovement
   * @return {!Promise<{
        result: !blink.mojom.PointerLockResult,
   *  }>}
   */

  requestMouseLockChange(unadjustedMovement) {}
};

/**
 * @export
 * @implements { blink.mojom.PointerLockContextInterface }
 */
blink.mojom.PointerLockContextRemote = class {
  /** @param {MojoHandle|mojo.internal.interfaceSupport.Endpoint=} handle */
  constructor(handle = undefined) {
    /**
     * @private {!mojo.internal.interfaceSupport.InterfaceRemoteBase<!blink.mojom.PointerLockContextPendingReceiver>}
     */
    this.proxy =
        new mojo.internal.interfaceSupport.InterfaceRemoteBase(
          blink.mojom.PointerLockContextPendingReceiver,
          handle);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper<!blink.mojom.PointerLockContextPendingReceiver>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper(this.proxy);

    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.proxy.getConnectionErrorEventRouter();
  }

  
  /**
   * @param { !boolean } unadjustedMovement
   * @return {!Promise<{
        result: !blink.mojom.PointerLockResult,
   *  }>}
   */

  requestMouseLockChange(
      unadjustedMovement) {
    return this.proxy.sendMessage(
        0,
        blink.mojom.PointerLockContext_RequestMouseLockChange_ParamsSpec.$,
        blink.mojom.PointerLockContext_RequestMouseLockChange_ResponseParamsSpec.$,
        [
          unadjustedMovement
        ]);
  }
};

/**
 * An object which receives request messages for the PointerLockContext
 * mojom interface. Must be constructed over an object which implements that
 * interface.
 *
 * @export
 */
blink.mojom.PointerLockContextReceiver = class {
  /**
   * @param {!blink.mojom.PointerLockContextInterface } impl
   */
  constructor(impl) {
    /** @private {!mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal<!blink.mojom.PointerLockContextRemote>} */
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
        blink.mojom.PointerLockContextRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!blink.mojom.PointerLockContextRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);


    this.helper_internal_.registerHandler(
        0,
        blink.mojom.PointerLockContext_RequestMouseLockChange_ParamsSpec.$,
        blink.mojom.PointerLockContext_RequestMouseLockChange_ResponseParamsSpec.$,
        impl.requestMouseLockChange.bind(impl));
    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.helper_internal_.getConnectionErrorEventRouter();
  }
};

/**
 *  @export
 */
blink.mojom.PointerLockContext = class {
  /**
   * @return {!string}
   */
  static get $interfaceName() {
    return "blink.mojom.PointerLockContext";
  }

  /**
   * Returns a remote for this interface which sends messages to the browser.
   * The browser must have an interface request binder registered for this
   * interface and accessible to the calling document's frame.
   *
   * @return {!blink.mojom.PointerLockContextRemote}
   * @export
   */
  static getRemote() {
    let remote = new blink.mojom.PointerLockContextRemote;
    remote.$.bindNewPipeAndPassReceiver().bindInBrowser();
    return remote;
  }
};


/**
 * An object which receives request messages for the PointerLockContext
 * mojom interface and dispatches them as callbacks. One callback receiver exists
 * on this object for each message defined in the mojom interface, and each
 * receiver can have any number of listeners added to it.
 *
 * @export
 */
blink.mojom.PointerLockContextCallbackRouter = class {
  constructor() {
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
      blink.mojom.PointerLockContextRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!blink.mojom.PointerLockContextRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);

    this.router_ = new mojo.internal.interfaceSupport.CallbackRouter;

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.requestMouseLockChange =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        0,
        blink.mojom.PointerLockContext_RequestMouseLockChange_ParamsSpec.$,
        blink.mojom.PointerLockContext_RequestMouseLockChange_ResponseParamsSpec.$,
        this.requestMouseLockChange.createReceiverHandler(true /* expectsResponse */));
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


goog.provide('blink.mojom.PointerLockContext_RequestMouseLockChange_ParamsSpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
blink.mojom.PointerLockContext_RequestMouseLockChange_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

goog.provide('blink.mojom.PointerLockContext_RequestMouseLockChange_ResponseParamsSpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
blink.mojom.PointerLockContext_RequestMouseLockChange_ResponseParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };




mojo.internal.Struct(
    blink.mojom.PointerLockContext_RequestMouseLockChange_ParamsSpec.$,
    'PointerLockContext_RequestMouseLockChange_Params',
    [
      mojo.internal.StructField(
        'unadjustedMovement', 0,
        0,
        mojo.internal.Bool,
        false,
        false /* nullable */),
    ],
    [[0, 16],]);



goog.provide('blink.mojom.PointerLockContext_RequestMouseLockChange_Params');

/** @record */
blink.mojom.PointerLockContext_RequestMouseLockChange_Params = class {
  constructor() {
    /** @export { !boolean } */
    this.unadjustedMovement;
  }
};




mojo.internal.Struct(
    blink.mojom.PointerLockContext_RequestMouseLockChange_ResponseParamsSpec.$,
    'PointerLockContext_RequestMouseLockChange_ResponseParams',
    [
      mojo.internal.StructField(
        'result', 0,
        0,
        blink.mojom.PointerLockResultSpec.$,
        0,
        false /* nullable */),
    ],
    [[0, 16],]);



goog.provide('blink.mojom.PointerLockContext_RequestMouseLockChange_ResponseParams');

/** @record */
blink.mojom.PointerLockContext_RequestMouseLockChange_ResponseParams = class {
  constructor() {
    /** @export { !blink.mojom.PointerLockResult } */
    this.result;
  }
};


