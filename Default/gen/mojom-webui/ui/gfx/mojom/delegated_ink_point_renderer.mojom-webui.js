// mojom-webui/ui/gfx/mojom/delegated_ink_point_renderer.mojom-webui.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2020 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

import {mojo} from '//resources/mojo/mojo/public/js/bindings.js';

import {
  DelegatedInkPoint as gfx_mojom_DelegatedInkPoint,
  DelegatedInkPointSpec as gfx_mojom_DelegatedInkPointSpec
} from './delegated_ink_point.mojom-webui.js';




/**
 * @implements {mojo.internal.interfaceSupport.PendingReceiver}
 */
export class DelegatedInkPointRendererPendingReceiver {
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
        this.handle, 'gfx.mojom.DelegatedInkPointRenderer', scope);
  }
}

/** @interface */
export class DelegatedInkPointRendererInterface {
  
  /**
   * @param { !gfx_mojom_DelegatedInkPoint } point
   */

  storeDelegatedInkPoint(point) {}
  
  /**
   */

  resetPrediction() {}
}

/**
 * @implements { DelegatedInkPointRendererInterface }
 */
export class DelegatedInkPointRendererRemote {
  /** @param {MojoHandle|mojo.internal.interfaceSupport.Endpoint=} handle */
  constructor(handle = undefined) {
    /**
     * @private {!mojo.internal.interfaceSupport.InterfaceRemoteBase<!DelegatedInkPointRendererPendingReceiver>}
     */
    this.proxy =
        new mojo.internal.interfaceSupport.InterfaceRemoteBase(
          DelegatedInkPointRendererPendingReceiver,
          handle);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper<!DelegatedInkPointRendererPendingReceiver>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper(this.proxy);

    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.proxy.getConnectionErrorEventRouter();
  }

  
  /**
   * @param { !gfx_mojom_DelegatedInkPoint } point
   */

  storeDelegatedInkPoint(
      point) {
    this.proxy.sendMessage(
        0,
        DelegatedInkPointRenderer_StoreDelegatedInkPoint_ParamsSpec.$,
        null,
        [
          point
        ]);
  }

  
  /**
   */

  resetPrediction() {
    this.proxy.sendMessage(
        1,
        DelegatedInkPointRenderer_ResetPrediction_ParamsSpec.$,
        null,
        [
        ]);
  }
}

/**
 * An object which receives request messages for the DelegatedInkPointRenderer
 * mojom interface. Must be constructed over an object which implements that
 * interface.
 */
export class DelegatedInkPointRendererReceiver {
  /**
   * @param {!DelegatedInkPointRendererInterface } impl
   */
  constructor(impl) {
    /** @private {!mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal<!DelegatedInkPointRendererRemote>} */
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
        DelegatedInkPointRendererRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!DelegatedInkPointRendererRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);


    this.helper_internal_.registerHandler(
        0,
        DelegatedInkPointRenderer_StoreDelegatedInkPoint_ParamsSpec.$,
        null,
        impl.storeDelegatedInkPoint.bind(impl));
    this.helper_internal_.registerHandler(
        1,
        DelegatedInkPointRenderer_ResetPrediction_ParamsSpec.$,
        null,
        impl.resetPrediction.bind(impl));
    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.helper_internal_.getConnectionErrorEventRouter();
  }
}

export class DelegatedInkPointRenderer {
  /**
   * @return {!string}
   */
  static get $interfaceName() {
    return "gfx.mojom.DelegatedInkPointRenderer";
  }

  /**
   * Returns a remote for this interface which sends messages to the browser.
   * The browser must have an interface request binder registered for this
   * interface and accessible to the calling document's frame.
   *
   * @return {!DelegatedInkPointRendererRemote}
   */
  static getRemote() {
    let remote = new DelegatedInkPointRendererRemote;
    remote.$.bindNewPipeAndPassReceiver().bindInBrowser();
    return remote;
  }
}


/**
 * An object which receives request messages for the DelegatedInkPointRenderer
 * mojom interface and dispatches them as callbacks. One callback receiver exists
 * on this object for each message defined in the mojom interface, and each
 * receiver can have any number of listeners added to it.
 */
export class DelegatedInkPointRendererCallbackRouter {
  constructor() {
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
      DelegatedInkPointRendererRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!DelegatedInkPointRendererRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);

    this.router_ = new mojo.internal.interfaceSupport.CallbackRouter;

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.storeDelegatedInkPoint =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        0,
        DelegatedInkPointRenderer_StoreDelegatedInkPoint_ParamsSpec.$,
        null,
        this.storeDelegatedInkPoint.createReceiverHandler(false /* expectsResponse */));
    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.resetPrediction =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        1,
        DelegatedInkPointRenderer_ResetPrediction_ParamsSpec.$,
        null,
        this.resetPrediction.createReceiverHandler(false /* expectsResponse */));
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
export const DelegatedInkPointRenderer_StoreDelegatedInkPoint_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const DelegatedInkPointRenderer_ResetPrediction_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };




mojo.internal.Struct(
    DelegatedInkPointRenderer_StoreDelegatedInkPoint_ParamsSpec.$,
    'DelegatedInkPointRenderer_StoreDelegatedInkPoint_Params',
    [
      mojo.internal.StructField(
        'point', 0,
        0,
        gfx_mojom_DelegatedInkPointSpec.$,
        null,
        false /* nullable */,
        0),
    ],
    [[0, 16],]);



/**
 * @record
 */
export class DelegatedInkPointRenderer_StoreDelegatedInkPoint_Params {
  constructor() {
    /** @type { !gfx_mojom_DelegatedInkPoint } */
    this.point;
  }
}



mojo.internal.Struct(
    DelegatedInkPointRenderer_ResetPrediction_ParamsSpec.$,
    'DelegatedInkPointRenderer_ResetPrediction_Params',
    [
    ],
    [[0, 8],]);



/**
 * @record
 */
export class DelegatedInkPointRenderer_ResetPrediction_Params {
  constructor() {
  }
}

