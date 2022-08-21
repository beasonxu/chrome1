// third_party/blink/public/mojom/badging/badging.mojom.m.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2020 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

import {mojo} from '../../../../../mojo/public/js/bindings.js';




/**
 * @implements {mojo.internal.interfaceSupport.PendingReceiver}
 */
export class BadgeServicePendingReceiver {
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
        this.handle, 'blink.mojom.BadgeService', scope);
  }
}

/** @interface */
export class BadgeServiceInterface {
  
  /**
   * @param { !BadgeValue } value
   */

  setBadge(value) {}
  
  /**
   */

  clearBadge() {}
}

/**
 * @implements { BadgeServiceInterface }
 */
export class BadgeServiceRemote {
  /** @param {MojoHandle|mojo.internal.interfaceSupport.Endpoint=} handle */
  constructor(handle = undefined) {
    /**
     * @private {!mojo.internal.interfaceSupport.InterfaceRemoteBase<!BadgeServicePendingReceiver>}
     */
    this.proxy =
        new mojo.internal.interfaceSupport.InterfaceRemoteBase(
          BadgeServicePendingReceiver,
          handle);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper<!BadgeServicePendingReceiver>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper(this.proxy);

    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.proxy.getConnectionErrorEventRouter();
  }

  
  /**
   * @param { !BadgeValue } value
   */

  setBadge(
      value) {
    this.proxy.sendMessage(
        0,
        BadgeService_SetBadge_ParamsSpec.$,
        null,
        [
          value
        ]);
  }

  
  /**
   */

  clearBadge() {
    this.proxy.sendMessage(
        1,
        BadgeService_ClearBadge_ParamsSpec.$,
        null,
        [
        ]);
  }
}

/**
 * An object which receives request messages for the BadgeService
 * mojom interface. Must be constructed over an object which implements that
 * interface.
 */
export class BadgeServiceReceiver {
  /**
   * @param {!BadgeServiceInterface } impl
   */
  constructor(impl) {
    /** @private {!mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal<!BadgeServiceRemote>} */
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
        BadgeServiceRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!BadgeServiceRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);


    this.helper_internal_.registerHandler(
        0,
        BadgeService_SetBadge_ParamsSpec.$,
        null,
        impl.setBadge.bind(impl));
    this.helper_internal_.registerHandler(
        1,
        BadgeService_ClearBadge_ParamsSpec.$,
        null,
        impl.clearBadge.bind(impl));
    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.helper_internal_.getConnectionErrorEventRouter();
  }
}

export class BadgeService {
  /**
   * @return {!string}
   */
  static get $interfaceName() {
    return "blink.mojom.BadgeService";
  }

  /**
   * Returns a remote for this interface which sends messages to the browser.
   * The browser must have an interface request binder registered for this
   * interface and accessible to the calling document's frame.
   *
   * @return {!BadgeServiceRemote}
   */
  static getRemote() {
    let remote = new BadgeServiceRemote;
    remote.$.bindNewPipeAndPassReceiver().bindInBrowser();
    return remote;
  }
}


/**
 * An object which receives request messages for the BadgeService
 * mojom interface and dispatches them as callbacks. One callback receiver exists
 * on this object for each message defined in the mojom interface, and each
 * receiver can have any number of listeners added to it.
 */
export class BadgeServiceCallbackRouter {
  constructor() {
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
      BadgeServiceRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!BadgeServiceRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);

    this.router_ = new mojo.internal.interfaceSupport.CallbackRouter;

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.setBadge =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        0,
        BadgeService_SetBadge_ParamsSpec.$,
        null,
        this.setBadge.createReceiverHandler(false /* expectsResponse */));
    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.clearBadge =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        1,
        BadgeService_ClearBadge_ParamsSpec.$,
        null,
        this.clearBadge.createReceiverHandler(false /* expectsResponse */));
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
export const BadgeService_SetBadge_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const BadgeService_ClearBadge_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType} }
 */
export const BadgeValueSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };




mojo.internal.Struct(
    BadgeService_SetBadge_ParamsSpec.$,
    'BadgeService_SetBadge_Params',
    [
      mojo.internal.StructField(
        'value', 0,
        0,
        BadgeValueSpec.$,
        null,
        false /* nullable */,
        0),
    ],
    [[0, 24],]);



/**
 * @record
 */
export class BadgeService_SetBadge_Params {
  constructor() {
    /** @type { !BadgeValue } */
    this.value;
  }
}



mojo.internal.Struct(
    BadgeService_ClearBadge_ParamsSpec.$,
    'BadgeService_ClearBadge_Params',
    [
    ],
    [[0, 8],]);



/**
 * @record
 */
export class BadgeService_ClearBadge_Params {
  constructor() {
  }
}

mojo.internal.Union(
    BadgeValueSpec.$, 'BadgeValue',
    {
      'flag': {
        'ordinal': 0,
        'type': mojo.internal.Uint8,
      },
      'number': {
        'ordinal': 1,
        'type': mojo.internal.Uint64,
      },
    });

/**
 * @typedef { {
 *   flag: (!number|undefined),
 *   number: (!bigint|undefined),
 * } }
 */
export const BadgeValue = {};
