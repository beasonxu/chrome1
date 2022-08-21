// third_party/blink/public/mojom/lock_screen/lock_screen.mojom.m.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2020 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

import {mojo} from '../../../../../mojo/public/js/bindings.js';


/**
 * @const { {$: !mojo.internal.MojomType} }
 */
export const LockScreenServiceStatusSpec = { $: mojo.internal.Enum() };

/**
 * @enum {number}
 */
export const LockScreenServiceStatus = {
  
  kSuccess: 0,
  kNotAllowedFromContext: 1,
  kWriteError: 2,
  MIN_VALUE: 0,
  MAX_VALUE: 2,
};



/**
 * @implements {mojo.internal.interfaceSupport.PendingReceiver}
 */
export class LockScreenServicePendingReceiver {
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
        this.handle, 'blink.mojom.LockScreenService', scope);
  }
}

/** @interface */
export class LockScreenServiceInterface {
  
  /**
   * @return {!Promise<{
        keys: !Array<!string>,
   *  }>}
   */

  getKeys() {}
  
  /**
   * @param { !string } key
   * @param { !string } data
   * @return {!Promise<{
        status: !LockScreenServiceStatus,
   *  }>}
   */

  setData(key, data) {}
}

/**
 * @implements { LockScreenServiceInterface }
 */
export class LockScreenServiceRemote {
  /** @param {MojoHandle|mojo.internal.interfaceSupport.Endpoint=} handle */
  constructor(handle = undefined) {
    /**
     * @private {!mojo.internal.interfaceSupport.InterfaceRemoteBase<!LockScreenServicePendingReceiver>}
     */
    this.proxy =
        new mojo.internal.interfaceSupport.InterfaceRemoteBase(
          LockScreenServicePendingReceiver,
          handle);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper<!LockScreenServicePendingReceiver>}
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
        LockScreenService_GetKeys_ParamsSpec.$,
        LockScreenService_GetKeys_ResponseParamsSpec.$,
        [
        ]);
  }

  
  /**
   * @param { !string } key
   * @param { !string } data
   * @return {!Promise<{
        status: !LockScreenServiceStatus,
   *  }>}
   */

  setData(
      key,
      data) {
    return this.proxy.sendMessage(
        1,
        LockScreenService_SetData_ParamsSpec.$,
        LockScreenService_SetData_ResponseParamsSpec.$,
        [
          key,
          data
        ]);
  }
}

/**
 * An object which receives request messages for the LockScreenService
 * mojom interface. Must be constructed over an object which implements that
 * interface.
 */
export class LockScreenServiceReceiver {
  /**
   * @param {!LockScreenServiceInterface } impl
   */
  constructor(impl) {
    /** @private {!mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal<!LockScreenServiceRemote>} */
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
        LockScreenServiceRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!LockScreenServiceRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);


    this.helper_internal_.registerHandler(
        0,
        LockScreenService_GetKeys_ParamsSpec.$,
        LockScreenService_GetKeys_ResponseParamsSpec.$,
        impl.getKeys.bind(impl));
    this.helper_internal_.registerHandler(
        1,
        LockScreenService_SetData_ParamsSpec.$,
        LockScreenService_SetData_ResponseParamsSpec.$,
        impl.setData.bind(impl));
    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.helper_internal_.getConnectionErrorEventRouter();
  }
}

export class LockScreenService {
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
   * @return {!LockScreenServiceRemote}
   */
  static getRemote() {
    let remote = new LockScreenServiceRemote;
    remote.$.bindNewPipeAndPassReceiver().bindInBrowser();
    return remote;
  }
}


/**
 * An object which receives request messages for the LockScreenService
 * mojom interface and dispatches them as callbacks. One callback receiver exists
 * on this object for each message defined in the mojom interface, and each
 * receiver can have any number of listeners added to it.
 */
export class LockScreenServiceCallbackRouter {
  constructor() {
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
      LockScreenServiceRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!LockScreenServiceRemote>}
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
        LockScreenService_GetKeys_ParamsSpec.$,
        LockScreenService_GetKeys_ResponseParamsSpec.$,
        this.getKeys.createReceiverHandler(true /* expectsResponse */));
    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.setData =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        1,
        LockScreenService_SetData_ParamsSpec.$,
        LockScreenService_SetData_ResponseParamsSpec.$,
        this.setData.createReceiverHandler(true /* expectsResponse */));
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
export const LockScreenService_GetKeys_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const LockScreenService_GetKeys_ResponseParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const LockScreenService_SetData_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const LockScreenService_SetData_ResponseParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };




mojo.internal.Struct(
    LockScreenService_GetKeys_ParamsSpec.$,
    'LockScreenService_GetKeys_Params',
    [
    ],
    [[0, 8],]);



/**
 * @record
 */
export class LockScreenService_GetKeys_Params {
  constructor() {
  }
}



mojo.internal.Struct(
    LockScreenService_GetKeys_ResponseParamsSpec.$,
    'LockScreenService_GetKeys_ResponseParams',
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
export class LockScreenService_GetKeys_ResponseParams {
  constructor() {
    /** @type { !Array<!string> } */
    this.keys;
  }
}



mojo.internal.Struct(
    LockScreenService_SetData_ParamsSpec.$,
    'LockScreenService_SetData_Params',
    [
      mojo.internal.StructField(
        'key', 0,
        0,
        mojo.internal.String,
        null,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'data', 8,
        0,
        mojo.internal.String,
        null,
        false /* nullable */,
        0),
    ],
    [[0, 24],]);



/**
 * @record
 */
export class LockScreenService_SetData_Params {
  constructor() {
    /** @type { !string } */
    this.key;
    /** @type { !string } */
    this.data;
  }
}



mojo.internal.Struct(
    LockScreenService_SetData_ResponseParamsSpec.$,
    'LockScreenService_SetData_ResponseParams',
    [
      mojo.internal.StructField(
        'status', 0,
        0,
        LockScreenServiceStatusSpec.$,
        0,
        false /* nullable */,
        0),
    ],
    [[0, 16],]);



/**
 * @record
 */
export class LockScreenService_SetData_ResponseParams {
  constructor() {
    /** @type { !LockScreenServiceStatus } */
    this.status;
  }
}

