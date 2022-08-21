// services/device/public/mojom/usb_manager.mojom-lite.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
'use strict';


mojo.internal.exportModule('device.mojom');








/**
 * @implements {mojo.internal.interfaceSupport.PendingReceiver}
 * @export
 */
device.mojom.UsbDeviceManagerPendingReceiver = class {
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
        device.mojom.UsbDeviceManager.$interfaceName,
        scope);
  }
};



/**
 * @export
 * @implements { device.mojom.UsbDeviceManagerInterface }
 */
device.mojom.UsbDeviceManagerRemote = class {
  /** @param {MojoHandle|mojo.internal.interfaceSupport.Endpoint=} handle */
  constructor(handle = undefined) {
    /**
     * @private {!mojo.internal.interfaceSupport.InterfaceRemoteBase<!device.mojom.UsbDeviceManagerPendingReceiver>}
     */
    this.proxy =
        new mojo.internal.interfaceSupport.InterfaceRemoteBase(
          device.mojom.UsbDeviceManagerPendingReceiver,
          handle);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper<!device.mojom.UsbDeviceManagerPendingReceiver>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper(this.proxy);

    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.proxy.getConnectionErrorEventRouter();
  }

  
  /**
   * @param { !Object } client
   * @return {!Promise<{
        results: !Array<!device.mojom.UsbDeviceInfo>,
   *  }>}
   */

  enumerateDevicesAndSetClient(
      client) {
    return this.proxy.sendMessage(
        0,
        device.mojom.UsbDeviceManager_EnumerateDevicesAndSetClient_ParamsSpec.$,
        device.mojom.UsbDeviceManager_EnumerateDevicesAndSetClient_ResponseParamsSpec.$,
        [
          client
        ]);
  }

  
  /**
   * @param { ?device.mojom.UsbEnumerationOptions } options
   * @return {!Promise<{
        results: !Array<!device.mojom.UsbDeviceInfo>,
   *  }>}
   */

  getDevices(
      options) {
    return this.proxy.sendMessage(
        1,
        device.mojom.UsbDeviceManager_GetDevices_ParamsSpec.$,
        device.mojom.UsbDeviceManager_GetDevices_ResponseParamsSpec.$,
        [
          options
        ]);
  }

  
  /**
   * @param { !string } guid
   * @param { !Array<!number> } blockedInterfaceClasses
   * @param { !device.mojom.UsbDevicePendingReceiver } deviceReceiver
   * @param { ?device.mojom.UsbDeviceClientRemote } deviceClient
   */

  getDevice(
      guid,
      blockedInterfaceClasses,
      deviceReceiver,
      deviceClient) {
    this.proxy.sendMessage(
        2,
        device.mojom.UsbDeviceManager_GetDevice_ParamsSpec.$,
        null,
        [
          guid,
          blockedInterfaceClasses,
          deviceReceiver,
          deviceClient
        ]);
  }

  
  /**
   * @param { !string } guid
   * @param { !device.mojom.UsbDevicePendingReceiver } deviceReceiver
   * @param { ?device.mojom.UsbDeviceClientRemote } deviceClient
   */

  getSecurityKeyDevice(
      guid,
      deviceReceiver,
      deviceClient) {
    this.proxy.sendMessage(
        3,
        device.mojom.UsbDeviceManager_GetSecurityKeyDevice_ParamsSpec.$,
        null,
        [
          guid,
          deviceReceiver,
          deviceClient
        ]);
  }

  
  /**
   * @param { !string } guid
   * @return {!Promise<{
        deviceInfo: ?device.mojom.UsbDeviceInfo,
   *  }>}
   */

  refreshDeviceInfo(
      guid) {
    return this.proxy.sendMessage(
        4,
        device.mojom.UsbDeviceManager_RefreshDeviceInfo_ParamsSpec.$,
        device.mojom.UsbDeviceManager_RefreshDeviceInfo_ResponseParamsSpec.$,
        [
          guid
        ]);
  }

  
  /**
   * @param { !Object } client
   */

  setClient(
      client) {
    this.proxy.sendMessage(
        5,
        device.mojom.UsbDeviceManager_SetClient_ParamsSpec.$,
        null,
        [
          client
        ]);
  }
};

/**
 * An object which receives request messages for the UsbDeviceManager
 * mojom interface. Must be constructed over an object which implements that
 * interface.
 *
 * @export
 */
device.mojom.UsbDeviceManagerReceiver = class {
  /**
   * @param {!device.mojom.UsbDeviceManagerInterface } impl
   */
  constructor(impl) {
    /** @private {!mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal<!device.mojom.UsbDeviceManagerRemote>} */
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
        device.mojom.UsbDeviceManagerRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!device.mojom.UsbDeviceManagerRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);


    this.helper_internal_.registerHandler(
        0,
        device.mojom.UsbDeviceManager_EnumerateDevicesAndSetClient_ParamsSpec.$,
        device.mojom.UsbDeviceManager_EnumerateDevicesAndSetClient_ResponseParamsSpec.$,
        impl.enumerateDevicesAndSetClient.bind(impl));
    this.helper_internal_.registerHandler(
        1,
        device.mojom.UsbDeviceManager_GetDevices_ParamsSpec.$,
        device.mojom.UsbDeviceManager_GetDevices_ResponseParamsSpec.$,
        impl.getDevices.bind(impl));
    this.helper_internal_.registerHandler(
        2,
        device.mojom.UsbDeviceManager_GetDevice_ParamsSpec.$,
        null,
        impl.getDevice.bind(impl));
    this.helper_internal_.registerHandler(
        3,
        device.mojom.UsbDeviceManager_GetSecurityKeyDevice_ParamsSpec.$,
        null,
        impl.getSecurityKeyDevice.bind(impl));
    this.helper_internal_.registerHandler(
        4,
        device.mojom.UsbDeviceManager_RefreshDeviceInfo_ParamsSpec.$,
        device.mojom.UsbDeviceManager_RefreshDeviceInfo_ResponseParamsSpec.$,
        impl.refreshDeviceInfo.bind(impl));
    this.helper_internal_.registerHandler(
        5,
        device.mojom.UsbDeviceManager_SetClient_ParamsSpec.$,
        null,
        impl.setClient.bind(impl));
    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.helper_internal_.getConnectionErrorEventRouter();
  }
};

/**
 *  @export
 */
device.mojom.UsbDeviceManager = class {
  /**
   * @return {!string}
   */
  static get $interfaceName() {
    return "device.mojom.UsbDeviceManager";
  }

  /**
   * Returns a remote for this interface which sends messages to the browser.
   * The browser must have an interface request binder registered for this
   * interface and accessible to the calling document's frame.
   *
   * @return {!device.mojom.UsbDeviceManagerRemote}
   * @export
   */
  static getRemote() {
    let remote = new device.mojom.UsbDeviceManagerRemote;
    remote.$.bindNewPipeAndPassReceiver().bindInBrowser();
    return remote;
  }
};


/**
 * An object which receives request messages for the UsbDeviceManager
 * mojom interface and dispatches them as callbacks. One callback receiver exists
 * on this object for each message defined in the mojom interface, and each
 * receiver can have any number of listeners added to it.
 *
 * @export
 */
device.mojom.UsbDeviceManagerCallbackRouter = class {
  constructor() {
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
      device.mojom.UsbDeviceManagerRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!device.mojom.UsbDeviceManagerRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);

    this.router_ = new mojo.internal.interfaceSupport.CallbackRouter;

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.enumerateDevicesAndSetClient =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        0,
        device.mojom.UsbDeviceManager_EnumerateDevicesAndSetClient_ParamsSpec.$,
        device.mojom.UsbDeviceManager_EnumerateDevicesAndSetClient_ResponseParamsSpec.$,
        this.enumerateDevicesAndSetClient.createReceiverHandler(true /* expectsResponse */));
    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.getDevices =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        1,
        device.mojom.UsbDeviceManager_GetDevices_ParamsSpec.$,
        device.mojom.UsbDeviceManager_GetDevices_ResponseParamsSpec.$,
        this.getDevices.createReceiverHandler(true /* expectsResponse */));
    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.getDevice =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        2,
        device.mojom.UsbDeviceManager_GetDevice_ParamsSpec.$,
        null,
        this.getDevice.createReceiverHandler(false /* expectsResponse */));
    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.getSecurityKeyDevice =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        3,
        device.mojom.UsbDeviceManager_GetSecurityKeyDevice_ParamsSpec.$,
        null,
        this.getSecurityKeyDevice.createReceiverHandler(false /* expectsResponse */));
    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.refreshDeviceInfo =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        4,
        device.mojom.UsbDeviceManager_RefreshDeviceInfo_ParamsSpec.$,
        device.mojom.UsbDeviceManager_RefreshDeviceInfo_ResponseParamsSpec.$,
        this.refreshDeviceInfo.createReceiverHandler(true /* expectsResponse */));
    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.setClient =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        5,
        device.mojom.UsbDeviceManager_SetClient_ParamsSpec.$,
        null,
        this.setClient.createReceiverHandler(false /* expectsResponse */));
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
device.mojom.UsbDeviceManager_EnumerateDevicesAndSetClient_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
device.mojom.UsbDeviceManager_EnumerateDevicesAndSetClient_ResponseParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
device.mojom.UsbDeviceManager_GetDevices_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
device.mojom.UsbDeviceManager_GetDevices_ResponseParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
device.mojom.UsbDeviceManager_GetDevice_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
device.mojom.UsbDeviceManager_GetSecurityKeyDevice_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
device.mojom.UsbDeviceManager_RefreshDeviceInfo_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
device.mojom.UsbDeviceManager_RefreshDeviceInfo_ResponseParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
device.mojom.UsbDeviceManager_SetClient_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };




mojo.internal.Struct(
    device.mojom.UsbDeviceManager_EnumerateDevicesAndSetClient_ParamsSpec.$,
    'UsbDeviceManager_EnumerateDevicesAndSetClient_Params',
    [
      mojo.internal.StructField(
        'client', 0,
        0,
        mojo.internal.AssociatedInterfaceProxy(device.mojom.UsbDeviceManagerClientRemote),
        null,
        false /* nullable */),
    ],
    [[0, 16],]);





/** @record */
device.mojom.UsbDeviceManager_EnumerateDevicesAndSetClient_Params = class {
  constructor() {
    /** @export { !Object } */
    this.client;
  }
};




mojo.internal.Struct(
    device.mojom.UsbDeviceManager_EnumerateDevicesAndSetClient_ResponseParamsSpec.$,
    'UsbDeviceManager_EnumerateDevicesAndSetClient_ResponseParams',
    [
      mojo.internal.StructField(
        'results', 0,
        0,
        mojo.internal.Array(device.mojom.UsbDeviceInfoSpec.$, false),
        null,
        false /* nullable */),
    ],
    [[0, 16],]);





/** @record */
device.mojom.UsbDeviceManager_EnumerateDevicesAndSetClient_ResponseParams = class {
  constructor() {
    /** @export { !Array<!device.mojom.UsbDeviceInfo> } */
    this.results;
  }
};




mojo.internal.Struct(
    device.mojom.UsbDeviceManager_GetDevices_ParamsSpec.$,
    'UsbDeviceManager_GetDevices_Params',
    [
      mojo.internal.StructField(
        'options', 0,
        0,
        device.mojom.UsbEnumerationOptionsSpec.$,
        null,
        true /* nullable */),
    ],
    [[0, 16],]);





/** @record */
device.mojom.UsbDeviceManager_GetDevices_Params = class {
  constructor() {
    /** @export { (device.mojom.UsbEnumerationOptions|undefined) } */
    this.options;
  }
};




mojo.internal.Struct(
    device.mojom.UsbDeviceManager_GetDevices_ResponseParamsSpec.$,
    'UsbDeviceManager_GetDevices_ResponseParams',
    [
      mojo.internal.StructField(
        'results', 0,
        0,
        mojo.internal.Array(device.mojom.UsbDeviceInfoSpec.$, false),
        null,
        false /* nullable */),
    ],
    [[0, 16],]);





/** @record */
device.mojom.UsbDeviceManager_GetDevices_ResponseParams = class {
  constructor() {
    /** @export { !Array<!device.mojom.UsbDeviceInfo> } */
    this.results;
  }
};




mojo.internal.Struct(
    device.mojom.UsbDeviceManager_GetDevice_ParamsSpec.$,
    'UsbDeviceManager_GetDevice_Params',
    [
      mojo.internal.StructField(
        'guid', 0,
        0,
        mojo.internal.String,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'blockedInterfaceClasses', 8,
        0,
        mojo.internal.Array(mojo.internal.Uint8, false),
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'deviceReceiver', 16,
        0,
        mojo.internal.InterfaceRequest(device.mojom.UsbDevicePendingReceiver),
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'deviceClient', 20,
        0,
        mojo.internal.InterfaceProxy(device.mojom.UsbDeviceClientRemote),
        null,
        true /* nullable */),
    ],
    [[0, 40],]);





/** @record */
device.mojom.UsbDeviceManager_GetDevice_Params = class {
  constructor() {
    /** @export { !string } */
    this.guid;
    /** @export { !Array<!number> } */
    this.blockedInterfaceClasses;
    /** @export { !device.mojom.UsbDevicePendingReceiver } */
    this.deviceReceiver;
    /** @export { (device.mojom.UsbDeviceClientRemote|undefined) } */
    this.deviceClient;
  }
};




mojo.internal.Struct(
    device.mojom.UsbDeviceManager_GetSecurityKeyDevice_ParamsSpec.$,
    'UsbDeviceManager_GetSecurityKeyDevice_Params',
    [
      mojo.internal.StructField(
        'guid', 0,
        0,
        mojo.internal.String,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'deviceReceiver', 8,
        0,
        mojo.internal.InterfaceRequest(device.mojom.UsbDevicePendingReceiver),
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'deviceClient', 12,
        0,
        mojo.internal.InterfaceProxy(device.mojom.UsbDeviceClientRemote),
        null,
        true /* nullable */),
    ],
    [[0, 32],]);





/** @record */
device.mojom.UsbDeviceManager_GetSecurityKeyDevice_Params = class {
  constructor() {
    /** @export { !string } */
    this.guid;
    /** @export { !device.mojom.UsbDevicePendingReceiver } */
    this.deviceReceiver;
    /** @export { (device.mojom.UsbDeviceClientRemote|undefined) } */
    this.deviceClient;
  }
};




mojo.internal.Struct(
    device.mojom.UsbDeviceManager_RefreshDeviceInfo_ParamsSpec.$,
    'UsbDeviceManager_RefreshDeviceInfo_Params',
    [
      mojo.internal.StructField(
        'guid', 0,
        0,
        mojo.internal.String,
        null,
        false /* nullable */),
    ],
    [[0, 16],]);





/** @record */
device.mojom.UsbDeviceManager_RefreshDeviceInfo_Params = class {
  constructor() {
    /** @export { !string } */
    this.guid;
  }
};




mojo.internal.Struct(
    device.mojom.UsbDeviceManager_RefreshDeviceInfo_ResponseParamsSpec.$,
    'UsbDeviceManager_RefreshDeviceInfo_ResponseParams',
    [
      mojo.internal.StructField(
        'deviceInfo', 0,
        0,
        device.mojom.UsbDeviceInfoSpec.$,
        null,
        true /* nullable */),
    ],
    [[0, 16],]);





/** @record */
device.mojom.UsbDeviceManager_RefreshDeviceInfo_ResponseParams = class {
  constructor() {
    /** @export { (device.mojom.UsbDeviceInfo|undefined) } */
    this.deviceInfo;
  }
};




mojo.internal.Struct(
    device.mojom.UsbDeviceManager_SetClient_ParamsSpec.$,
    'UsbDeviceManager_SetClient_Params',
    [
      mojo.internal.StructField(
        'client', 0,
        0,
        mojo.internal.AssociatedInterfaceProxy(device.mojom.UsbDeviceManagerClientRemote),
        null,
        false /* nullable */),
    ],
    [[0, 16],]);





/** @record */
device.mojom.UsbDeviceManager_SetClient_Params = class {
  constructor() {
    /** @export { !Object } */
    this.client;
  }
};


