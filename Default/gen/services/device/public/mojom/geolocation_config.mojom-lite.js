// services/device/public/mojom/geolocation_config.mojom-lite.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
'use strict';


mojo.internal.exportModule('device.mojom');








/**
 * @implements {mojo.internal.interfaceSupport.PendingReceiver}
 * @export
 */
device.mojom.GeolocationConfigPendingReceiver = class {
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
        device.mojom.GeolocationConfig.$interfaceName,
        scope);
  }
};



/**
 * @export
 * @implements { device.mojom.GeolocationConfigInterface }
 */
device.mojom.GeolocationConfigRemote = class {
  /** @param {MojoHandle|mojo.internal.interfaceSupport.Endpoint=} handle */
  constructor(handle = undefined) {
    /**
     * @private {!mojo.internal.interfaceSupport.InterfaceRemoteBase<!device.mojom.GeolocationConfigPendingReceiver>}
     */
    this.proxy =
        new mojo.internal.interfaceSupport.InterfaceRemoteBase(
          device.mojom.GeolocationConfigPendingReceiver,
          handle);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper<!device.mojom.GeolocationConfigPendingReceiver>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper(this.proxy);

    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.proxy.getConnectionErrorEventRouter();
  }

  
  /**
   * @return {!Promise<{
        highAccuracy: !boolean,
   *  }>}
   */

  isHighAccuracyLocationBeingCaptured() {
    return this.proxy.sendMessage(
        0,
        device.mojom.GeolocationConfig_IsHighAccuracyLocationBeingCaptured_ParamsSpec.$,
        device.mojom.GeolocationConfig_IsHighAccuracyLocationBeingCaptured_ResponseParamsSpec.$,
        [
        ]);
  }
};

/**
 * An object which receives request messages for the GeolocationConfig
 * mojom interface. Must be constructed over an object which implements that
 * interface.
 *
 * @export
 */
device.mojom.GeolocationConfigReceiver = class {
  /**
   * @param {!device.mojom.GeolocationConfigInterface } impl
   */
  constructor(impl) {
    /** @private {!mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal<!device.mojom.GeolocationConfigRemote>} */
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
        device.mojom.GeolocationConfigRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!device.mojom.GeolocationConfigRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);


    this.helper_internal_.registerHandler(
        0,
        device.mojom.GeolocationConfig_IsHighAccuracyLocationBeingCaptured_ParamsSpec.$,
        device.mojom.GeolocationConfig_IsHighAccuracyLocationBeingCaptured_ResponseParamsSpec.$,
        impl.isHighAccuracyLocationBeingCaptured.bind(impl));
    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.helper_internal_.getConnectionErrorEventRouter();
  }
};

/**
 *  @export
 */
device.mojom.GeolocationConfig = class {
  /**
   * @return {!string}
   */
  static get $interfaceName() {
    return "device.mojom.GeolocationConfig";
  }

  /**
   * Returns a remote for this interface which sends messages to the browser.
   * The browser must have an interface request binder registered for this
   * interface and accessible to the calling document's frame.
   *
   * @return {!device.mojom.GeolocationConfigRemote}
   * @export
   */
  static getRemote() {
    let remote = new device.mojom.GeolocationConfigRemote;
    remote.$.bindNewPipeAndPassReceiver().bindInBrowser();
    return remote;
  }
};


/**
 * An object which receives request messages for the GeolocationConfig
 * mojom interface and dispatches them as callbacks. One callback receiver exists
 * on this object for each message defined in the mojom interface, and each
 * receiver can have any number of listeners added to it.
 *
 * @export
 */
device.mojom.GeolocationConfigCallbackRouter = class {
  constructor() {
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
      device.mojom.GeolocationConfigRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!device.mojom.GeolocationConfigRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);

    this.router_ = new mojo.internal.interfaceSupport.CallbackRouter;

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.isHighAccuracyLocationBeingCaptured =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        0,
        device.mojom.GeolocationConfig_IsHighAccuracyLocationBeingCaptured_ParamsSpec.$,
        device.mojom.GeolocationConfig_IsHighAccuracyLocationBeingCaptured_ResponseParamsSpec.$,
        this.isHighAccuracyLocationBeingCaptured.createReceiverHandler(true /* expectsResponse */));
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
device.mojom.GeolocationConfig_IsHighAccuracyLocationBeingCaptured_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
device.mojom.GeolocationConfig_IsHighAccuracyLocationBeingCaptured_ResponseParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };




mojo.internal.Struct(
    device.mojom.GeolocationConfig_IsHighAccuracyLocationBeingCaptured_ParamsSpec.$,
    'GeolocationConfig_IsHighAccuracyLocationBeingCaptured_Params',
    [
    ],
    [[0, 8],]);





/** @record */
device.mojom.GeolocationConfig_IsHighAccuracyLocationBeingCaptured_Params = class {
  constructor() {
  }
};




mojo.internal.Struct(
    device.mojom.GeolocationConfig_IsHighAccuracyLocationBeingCaptured_ResponseParamsSpec.$,
    'GeolocationConfig_IsHighAccuracyLocationBeingCaptured_ResponseParams',
    [
      mojo.internal.StructField(
        'highAccuracy', 0,
        0,
        mojo.internal.Bool,
        false,
        false /* nullable */),
    ],
    [[0, 16],]);





/** @record */
device.mojom.GeolocationConfig_IsHighAccuracyLocationBeingCaptured_ResponseParams = class {
  constructor() {
    /** @export { !boolean } */
    this.highAccuracy;
  }
};


