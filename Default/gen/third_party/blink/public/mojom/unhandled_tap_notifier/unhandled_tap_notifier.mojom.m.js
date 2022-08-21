// third_party/blink/public/mojom/unhandled_tap_notifier/unhandled_tap_notifier.mojom.m.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2020 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

import {mojo} from '../../../../../mojo/public/js/bindings.js';

import {
  Point as gfx_mojom_Point,
  PointSpec as gfx_mojom_PointSpec
} from '../../../../../ui/gfx/geometry/mojom/geometry.mojom.m.js';




/**
 * @implements {mojo.internal.interfaceSupport.PendingReceiver}
 */
export class UnhandledTapNotifierPendingReceiver {
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
        this.handle, 'blink.mojom.UnhandledTapNotifier', scope);
  }
}

/** @interface */
export class UnhandledTapNotifierInterface {
  
  /**
   * @param { !UnhandledTapInfo } unhandledTapInfo
   */

  showUnhandledTapUIIfNeeded(unhandledTapInfo) {}
}

/**
 * @implements { UnhandledTapNotifierInterface }
 */
export class UnhandledTapNotifierRemote {
  /** @param {MojoHandle|mojo.internal.interfaceSupport.Endpoint=} handle */
  constructor(handle = undefined) {
    /**
     * @private {!mojo.internal.interfaceSupport.InterfaceRemoteBase<!UnhandledTapNotifierPendingReceiver>}
     */
    this.proxy =
        new mojo.internal.interfaceSupport.InterfaceRemoteBase(
          UnhandledTapNotifierPendingReceiver,
          handle);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper<!UnhandledTapNotifierPendingReceiver>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper(this.proxy);

    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.proxy.getConnectionErrorEventRouter();
  }

  
  /**
   * @param { !UnhandledTapInfo } unhandledTapInfo
   */

  showUnhandledTapUIIfNeeded(
      unhandledTapInfo) {
    this.proxy.sendMessage(
        0,
        UnhandledTapNotifier_ShowUnhandledTapUIIfNeeded_ParamsSpec.$,
        null,
        [
          unhandledTapInfo
        ]);
  }
}

/**
 * An object which receives request messages for the UnhandledTapNotifier
 * mojom interface. Must be constructed over an object which implements that
 * interface.
 */
export class UnhandledTapNotifierReceiver {
  /**
   * @param {!UnhandledTapNotifierInterface } impl
   */
  constructor(impl) {
    /** @private {!mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal<!UnhandledTapNotifierRemote>} */
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
        UnhandledTapNotifierRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!UnhandledTapNotifierRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);


    this.helper_internal_.registerHandler(
        0,
        UnhandledTapNotifier_ShowUnhandledTapUIIfNeeded_ParamsSpec.$,
        null,
        impl.showUnhandledTapUIIfNeeded.bind(impl));
    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.helper_internal_.getConnectionErrorEventRouter();
  }
}

export class UnhandledTapNotifier {
  /**
   * @return {!string}
   */
  static get $interfaceName() {
    return "blink.mojom.UnhandledTapNotifier";
  }

  /**
   * Returns a remote for this interface which sends messages to the browser.
   * The browser must have an interface request binder registered for this
   * interface and accessible to the calling document's frame.
   *
   * @return {!UnhandledTapNotifierRemote}
   */
  static getRemote() {
    let remote = new UnhandledTapNotifierRemote;
    remote.$.bindNewPipeAndPassReceiver().bindInBrowser();
    return remote;
  }
}


/**
 * An object which receives request messages for the UnhandledTapNotifier
 * mojom interface and dispatches them as callbacks. One callback receiver exists
 * on this object for each message defined in the mojom interface, and each
 * receiver can have any number of listeners added to it.
 */
export class UnhandledTapNotifierCallbackRouter {
  constructor() {
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
      UnhandledTapNotifierRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!UnhandledTapNotifierRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);

    this.router_ = new mojo.internal.interfaceSupport.CallbackRouter;

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.showUnhandledTapUIIfNeeded =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        0,
        UnhandledTapNotifier_ShowUnhandledTapUIIfNeeded_ParamsSpec.$,
        null,
        this.showUnhandledTapUIIfNeeded.createReceiverHandler(false /* expectsResponse */));
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
export const UnhandledTapInfoSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const UnhandledTapNotifier_ShowUnhandledTapUIIfNeeded_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };




mojo.internal.Struct(
    UnhandledTapInfoSpec.$,
    'UnhandledTapInfo',
    [
      mojo.internal.StructField(
        'tappedPositionInViewport', 0,
        0,
        gfx_mojom_PointSpec.$,
        null,
        false /* nullable */,
        0),
    ],
    [[0, 16],]);



/**
 * @record
 */
export class UnhandledTapInfo {
  constructor() {
    /** @type { !gfx_mojom_Point } */
    this.tappedPositionInViewport;
  }
}



mojo.internal.Struct(
    UnhandledTapNotifier_ShowUnhandledTapUIIfNeeded_ParamsSpec.$,
    'UnhandledTapNotifier_ShowUnhandledTapUIIfNeeded_Params',
    [
      mojo.internal.StructField(
        'unhandledTapInfo', 0,
        0,
        UnhandledTapInfoSpec.$,
        null,
        false /* nullable */,
        0),
    ],
    [[0, 16],]);



/**
 * @record
 */
export class UnhandledTapNotifier_ShowUnhandledTapUIIfNeeded_Params {
  constructor() {
    /** @type { !UnhandledTapInfo } */
    this.unhandledTapInfo;
  }
}

