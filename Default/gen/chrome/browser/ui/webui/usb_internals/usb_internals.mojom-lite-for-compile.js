// chrome/browser/ui/webui/usb_internals/usb_internals.mojom-lite-for-compile.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
'use strict';

goog.require('mojo.internal');
goog.require('mojo.internal.interfaceSupport');

goog.require('device.mojom.UsbDeviceManager');
goog.require('device.mojom.UsbDeviceManagerTest');






goog.provide('mojom.UsbInternalsPageHandler');
goog.provide('mojom.UsbInternalsPageHandlerReceiver');
goog.provide('mojom.UsbInternalsPageHandlerCallbackRouter');
goog.provide('mojom.UsbInternalsPageHandlerInterface');
goog.provide('mojom.UsbInternalsPageHandlerRemote');
goog.provide('mojom.UsbInternalsPageHandlerPendingReceiver');


/**
 * @implements {mojo.internal.interfaceSupport.PendingReceiver}
 * @export
 */
mojom.UsbInternalsPageHandlerPendingReceiver = class {
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
        mojom.UsbInternalsPageHandler.$interfaceName,
        scope);
  }
};

/** @interface */
mojom.UsbInternalsPageHandlerInterface = class {
  
  /**
   * @param { !device.mojom.UsbDeviceManagerPendingReceiver } receiver
   */

  bindUsbDeviceManagerInterface(receiver) {}
  
  /**
   * @param { !device.mojom.UsbDeviceManagerTestPendingReceiver } receiver
   */

  bindTestInterface(receiver) {}
};

/**
 * @export
 * @implements { mojom.UsbInternalsPageHandlerInterface }
 */
mojom.UsbInternalsPageHandlerRemote = class {
  /** @param {MojoHandle|mojo.internal.interfaceSupport.Endpoint=} handle */
  constructor(handle = undefined) {
    /**
     * @private {!mojo.internal.interfaceSupport.InterfaceRemoteBase<!mojom.UsbInternalsPageHandlerPendingReceiver>}
     */
    this.proxy =
        new mojo.internal.interfaceSupport.InterfaceRemoteBase(
          mojom.UsbInternalsPageHandlerPendingReceiver,
          handle);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper<!mojom.UsbInternalsPageHandlerPendingReceiver>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper(this.proxy);

    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.proxy.getConnectionErrorEventRouter();
  }

  
  /**
   * @param { !device.mojom.UsbDeviceManagerPendingReceiver } receiver
   */

  bindUsbDeviceManagerInterface(
      receiver) {
    this.proxy.sendMessage(
        0,
        mojom.UsbInternalsPageHandler_BindUsbDeviceManagerInterface_ParamsSpec.$,
        null,
        [
          receiver
        ]);
  }

  
  /**
   * @param { !device.mojom.UsbDeviceManagerTestPendingReceiver } receiver
   */

  bindTestInterface(
      receiver) {
    this.proxy.sendMessage(
        1,
        mojom.UsbInternalsPageHandler_BindTestInterface_ParamsSpec.$,
        null,
        [
          receiver
        ]);
  }
};

/**
 * An object which receives request messages for the UsbInternalsPageHandler
 * mojom interface. Must be constructed over an object which implements that
 * interface.
 *
 * @export
 */
mojom.UsbInternalsPageHandlerReceiver = class {
  /**
   * @param {!mojom.UsbInternalsPageHandlerInterface } impl
   */
  constructor(impl) {
    /** @private {!mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal<!mojom.UsbInternalsPageHandlerRemote>} */
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
        mojom.UsbInternalsPageHandlerRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!mojom.UsbInternalsPageHandlerRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);


    this.helper_internal_.registerHandler(
        0,
        mojom.UsbInternalsPageHandler_BindUsbDeviceManagerInterface_ParamsSpec.$,
        null,
        impl.bindUsbDeviceManagerInterface.bind(impl));
    this.helper_internal_.registerHandler(
        1,
        mojom.UsbInternalsPageHandler_BindTestInterface_ParamsSpec.$,
        null,
        impl.bindTestInterface.bind(impl));
    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.helper_internal_.getConnectionErrorEventRouter();
  }
};

/**
 *  @export
 */
mojom.UsbInternalsPageHandler = class {
  /**
   * @return {!string}
   */
  static get $interfaceName() {
    return "mojom.UsbInternalsPageHandler";
  }

  /**
   * Returns a remote for this interface which sends messages to the browser.
   * The browser must have an interface request binder registered for this
   * interface and accessible to the calling document's frame.
   *
   * @return {!mojom.UsbInternalsPageHandlerRemote}
   * @export
   */
  static getRemote() {
    let remote = new mojom.UsbInternalsPageHandlerRemote;
    remote.$.bindNewPipeAndPassReceiver().bindInBrowser();
    return remote;
  }
};


/**
 * An object which receives request messages for the UsbInternalsPageHandler
 * mojom interface and dispatches them as callbacks. One callback receiver exists
 * on this object for each message defined in the mojom interface, and each
 * receiver can have any number of listeners added to it.
 *
 * @export
 */
mojom.UsbInternalsPageHandlerCallbackRouter = class {
  constructor() {
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
      mojom.UsbInternalsPageHandlerRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!mojom.UsbInternalsPageHandlerRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);

    this.router_ = new mojo.internal.interfaceSupport.CallbackRouter;

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.bindUsbDeviceManagerInterface =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        0,
        mojom.UsbInternalsPageHandler_BindUsbDeviceManagerInterface_ParamsSpec.$,
        null,
        this.bindUsbDeviceManagerInterface.createReceiverHandler(false /* expectsResponse */));
    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.bindTestInterface =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        1,
        mojom.UsbInternalsPageHandler_BindTestInterface_ParamsSpec.$,
        null,
        this.bindTestInterface.createReceiverHandler(false /* expectsResponse */));
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


goog.provide('mojom.UsbInternalsPageHandler_BindUsbDeviceManagerInterface_ParamsSpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
mojom.UsbInternalsPageHandler_BindUsbDeviceManagerInterface_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

goog.provide('mojom.UsbInternalsPageHandler_BindTestInterface_ParamsSpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
mojom.UsbInternalsPageHandler_BindTestInterface_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };




mojo.internal.Struct(
    mojom.UsbInternalsPageHandler_BindUsbDeviceManagerInterface_ParamsSpec.$,
    'UsbInternalsPageHandler_BindUsbDeviceManagerInterface_Params',
    [
      mojo.internal.StructField(
        'receiver', 0,
        0,
        mojo.internal.InterfaceRequest(device.mojom.UsbDeviceManagerPendingReceiver),
        null,
        false /* nullable */),
    ],
    [[0, 16],]);



goog.provide('mojom.UsbInternalsPageHandler_BindUsbDeviceManagerInterface_Params');

/** @record */
mojom.UsbInternalsPageHandler_BindUsbDeviceManagerInterface_Params = class {
  constructor() {
    /** @export { !device.mojom.UsbDeviceManagerPendingReceiver } */
    this.receiver;
  }
};




mojo.internal.Struct(
    mojom.UsbInternalsPageHandler_BindTestInterface_ParamsSpec.$,
    'UsbInternalsPageHandler_BindTestInterface_Params',
    [
      mojo.internal.StructField(
        'receiver', 0,
        0,
        mojo.internal.InterfaceRequest(device.mojom.UsbDeviceManagerTestPendingReceiver),
        null,
        false /* nullable */),
    ],
    [[0, 16],]);



goog.provide('mojom.UsbInternalsPageHandler_BindTestInterface_Params');

/** @record */
mojom.UsbInternalsPageHandler_BindTestInterface_Params = class {
  constructor() {
    /** @export { !device.mojom.UsbDeviceManagerTestPendingReceiver } */
    this.receiver;
  }
};


