// services/device/public/mojom/geolocation.mojom.m.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2020 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

import {mojo} from '../../../../mojo/public/js/bindings.js';

import {
  Geoposition as device_mojom_Geoposition,
  GeopositionSpec as device_mojom_GeopositionSpec
} from './geoposition.mojom.m.js';




/**
 * @implements {mojo.internal.interfaceSupport.PendingReceiver}
 */
export class GeolocationPendingReceiver {
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
        this.handle, 'device.mojom.Geolocation', scope);
  }
}

/** @interface */
export class GeolocationInterface {
  
  /**
   * @param { !boolean } highAccuracy
   */

  setHighAccuracy(highAccuracy) {}
  
  /**
   * @return {!Promise<{
        geoposition: !device_mojom_Geoposition,
   *  }>}
   */

  queryNextPosition() {}
}

/**
 * @implements { GeolocationInterface }
 */
export class GeolocationRemote {
  /** @param {MojoHandle|mojo.internal.interfaceSupport.Endpoint=} handle */
  constructor(handle = undefined) {
    /**
     * @private {!mojo.internal.interfaceSupport.InterfaceRemoteBase<!GeolocationPendingReceiver>}
     */
    this.proxy =
        new mojo.internal.interfaceSupport.InterfaceRemoteBase(
          GeolocationPendingReceiver,
          handle);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper<!GeolocationPendingReceiver>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper(this.proxy);

    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.proxy.getConnectionErrorEventRouter();
  }

  
  /**
   * @param { !boolean } highAccuracy
   */

  setHighAccuracy(
      highAccuracy) {
    this.proxy.sendMessage(
        0,
        Geolocation_SetHighAccuracy_ParamsSpec.$,
        null,
        [
          highAccuracy
        ]);
  }

  
  /**
   * @return {!Promise<{
        geoposition: !device_mojom_Geoposition,
   *  }>}
   */

  queryNextPosition() {
    return this.proxy.sendMessage(
        1,
        Geolocation_QueryNextPosition_ParamsSpec.$,
        Geolocation_QueryNextPosition_ResponseParamsSpec.$,
        [
        ]);
  }
}

/**
 * An object which receives request messages for the Geolocation
 * mojom interface. Must be constructed over an object which implements that
 * interface.
 */
export class GeolocationReceiver {
  /**
   * @param {!GeolocationInterface } impl
   */
  constructor(impl) {
    /** @private {!mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal<!GeolocationRemote>} */
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
        GeolocationRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!GeolocationRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);


    this.helper_internal_.registerHandler(
        0,
        Geolocation_SetHighAccuracy_ParamsSpec.$,
        null,
        impl.setHighAccuracy.bind(impl));
    this.helper_internal_.registerHandler(
        1,
        Geolocation_QueryNextPosition_ParamsSpec.$,
        Geolocation_QueryNextPosition_ResponseParamsSpec.$,
        impl.queryNextPosition.bind(impl));
    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.helper_internal_.getConnectionErrorEventRouter();
  }
}

export class Geolocation {
  /**
   * @return {!string}
   */
  static get $interfaceName() {
    return "device.mojom.Geolocation";
  }

  /**
   * Returns a remote for this interface which sends messages to the browser.
   * The browser must have an interface request binder registered for this
   * interface and accessible to the calling document's frame.
   *
   * @return {!GeolocationRemote}
   */
  static getRemote() {
    let remote = new GeolocationRemote;
    remote.$.bindNewPipeAndPassReceiver().bindInBrowser();
    return remote;
  }
}


/**
 * An object which receives request messages for the Geolocation
 * mojom interface and dispatches them as callbacks. One callback receiver exists
 * on this object for each message defined in the mojom interface, and each
 * receiver can have any number of listeners added to it.
 */
export class GeolocationCallbackRouter {
  constructor() {
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
      GeolocationRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!GeolocationRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);

    this.router_ = new mojo.internal.interfaceSupport.CallbackRouter;

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.setHighAccuracy =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        0,
        Geolocation_SetHighAccuracy_ParamsSpec.$,
        null,
        this.setHighAccuracy.createReceiverHandler(false /* expectsResponse */));
    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.queryNextPosition =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        1,
        Geolocation_QueryNextPosition_ParamsSpec.$,
        Geolocation_QueryNextPosition_ResponseParamsSpec.$,
        this.queryNextPosition.createReceiverHandler(true /* expectsResponse */));
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
export const Geolocation_SetHighAccuracy_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const Geolocation_QueryNextPosition_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const Geolocation_QueryNextPosition_ResponseParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };




mojo.internal.Struct(
    Geolocation_SetHighAccuracy_ParamsSpec.$,
    'Geolocation_SetHighAccuracy_Params',
    [
      mojo.internal.StructField(
        'highAccuracy', 0,
        0,
        mojo.internal.Bool,
        false,
        false /* nullable */,
        0),
    ],
    [[0, 16],]);



/**
 * @record
 */
export class Geolocation_SetHighAccuracy_Params {
  constructor() {
    /** @type { !boolean } */
    this.highAccuracy;
  }
}



mojo.internal.Struct(
    Geolocation_QueryNextPosition_ParamsSpec.$,
    'Geolocation_QueryNextPosition_Params',
    [
    ],
    [[0, 8],]);



/**
 * @record
 */
export class Geolocation_QueryNextPosition_Params {
  constructor() {
  }
}



mojo.internal.Struct(
    Geolocation_QueryNextPosition_ResponseParamsSpec.$,
    'Geolocation_QueryNextPosition_ResponseParams',
    [
      mojo.internal.StructField(
        'geoposition', 0,
        0,
        device_mojom_GeopositionSpec.$,
        null,
        false /* nullable */,
        0),
    ],
    [[0, 16],]);



/**
 * @record
 */
export class Geolocation_QueryNextPosition_ResponseParams {
  constructor() {
    /** @type { !device_mojom_Geoposition } */
    this.geoposition;
  }
}

