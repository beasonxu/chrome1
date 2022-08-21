// services/device/public/mojom/input_service.mojom.m.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2020 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

import {mojo} from '../../../../mojo/public/js/bindings.js';


/**
 * @const { {$: !mojo.internal.MojomType} }
 */
export const InputDeviceSubsystemSpec = { $: mojo.internal.Enum() };

/**
 * @enum {number}
 */
export const InputDeviceSubsystem = {
  
  SUBSYSTEM_HID: 0,
  SUBSYSTEM_INPUT: 1,
  SUBSYSTEM_UNKNOWN: 2,
  MIN_VALUE: 0,
  MAX_VALUE: 2,
};

/**
 * @const { {$: !mojo.internal.MojomType} }
 */
export const InputDeviceTypeSpec = { $: mojo.internal.Enum() };

/**
 * @enum {number}
 */
export const InputDeviceType = {
  
  TYPE_BLUETOOTH: 0,
  TYPE_USB: 1,
  TYPE_SERIO: 2,
  TYPE_UNKNOWN: 3,
  MIN_VALUE: 0,
  MAX_VALUE: 3,
};



/**
 * @implements {mojo.internal.interfaceSupport.PendingReceiver}
 */
export class InputDeviceManagerClientPendingReceiver {
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
        this.handle, 'device.mojom.InputDeviceManagerClient', scope);
  }
}

/** @interface */
export class InputDeviceManagerClientInterface {
  
  /**
   * @param { !InputDeviceInfo } deviceInfo
   */

  inputDeviceAdded(deviceInfo) {}
  
  /**
   * @param { !string } id
   */

  inputDeviceRemoved(id) {}
}

/**
 * @implements { InputDeviceManagerClientInterface }
 */
export class InputDeviceManagerClientRemote {
  /** @param {MojoHandle|mojo.internal.interfaceSupport.Endpoint=} handle */
  constructor(handle = undefined) {
    /**
     * @private {!mojo.internal.interfaceSupport.InterfaceRemoteBase<!InputDeviceManagerClientPendingReceiver>}
     */
    this.proxy =
        new mojo.internal.interfaceSupport.InterfaceRemoteBase(
          InputDeviceManagerClientPendingReceiver,
          handle);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper<!InputDeviceManagerClientPendingReceiver>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper(this.proxy);

    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.proxy.getConnectionErrorEventRouter();
  }

  
  /**
   * @param { !InputDeviceInfo } deviceInfo
   */

  inputDeviceAdded(
      deviceInfo) {
    this.proxy.sendMessage(
        0,
        InputDeviceManagerClient_InputDeviceAdded_ParamsSpec.$,
        null,
        [
          deviceInfo
        ]);
  }

  
  /**
   * @param { !string } id
   */

  inputDeviceRemoved(
      id) {
    this.proxy.sendMessage(
        1,
        InputDeviceManagerClient_InputDeviceRemoved_ParamsSpec.$,
        null,
        [
          id
        ]);
  }
}

/**
 * An object which receives request messages for the InputDeviceManagerClient
 * mojom interface. Must be constructed over an object which implements that
 * interface.
 */
export class InputDeviceManagerClientReceiver {
  /**
   * @param {!InputDeviceManagerClientInterface } impl
   */
  constructor(impl) {
    /** @private {!mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal<!InputDeviceManagerClientRemote>} */
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
        InputDeviceManagerClientRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!InputDeviceManagerClientRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);


    this.helper_internal_.registerHandler(
        0,
        InputDeviceManagerClient_InputDeviceAdded_ParamsSpec.$,
        null,
        impl.inputDeviceAdded.bind(impl));
    this.helper_internal_.registerHandler(
        1,
        InputDeviceManagerClient_InputDeviceRemoved_ParamsSpec.$,
        null,
        impl.inputDeviceRemoved.bind(impl));
    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.helper_internal_.getConnectionErrorEventRouter();
  }
}

export class InputDeviceManagerClient {
  /**
   * @return {!string}
   */
  static get $interfaceName() {
    return "device.mojom.InputDeviceManagerClient";
  }

  /**
   * Returns a remote for this interface which sends messages to the browser.
   * The browser must have an interface request binder registered for this
   * interface and accessible to the calling document's frame.
   *
   * @return {!InputDeviceManagerClientRemote}
   */
  static getRemote() {
    let remote = new InputDeviceManagerClientRemote;
    remote.$.bindNewPipeAndPassReceiver().bindInBrowser();
    return remote;
  }
}


/**
 * An object which receives request messages for the InputDeviceManagerClient
 * mojom interface and dispatches them as callbacks. One callback receiver exists
 * on this object for each message defined in the mojom interface, and each
 * receiver can have any number of listeners added to it.
 */
export class InputDeviceManagerClientCallbackRouter {
  constructor() {
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
      InputDeviceManagerClientRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!InputDeviceManagerClientRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);

    this.router_ = new mojo.internal.interfaceSupport.CallbackRouter;

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.inputDeviceAdded =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        0,
        InputDeviceManagerClient_InputDeviceAdded_ParamsSpec.$,
        null,
        this.inputDeviceAdded.createReceiverHandler(false /* expectsResponse */));
    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.inputDeviceRemoved =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        1,
        InputDeviceManagerClient_InputDeviceRemoved_ParamsSpec.$,
        null,
        this.inputDeviceRemoved.createReceiverHandler(false /* expectsResponse */));
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
 * @implements {mojo.internal.interfaceSupport.PendingReceiver}
 */
export class InputDeviceManagerPendingReceiver {
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
        this.handle, 'device.mojom.InputDeviceManager', scope);
  }
}

/** @interface */
export class InputDeviceManagerInterface {
  
  /**
   * @param { !Object } client
   * @return {!Promise<{
        devices: !Array<!InputDeviceInfo>,
   *  }>}
   */

  getDevicesAndSetClient(client) {}
  
  /**
   * @return {!Promise<{
        devices: !Array<!InputDeviceInfo>,
   *  }>}
   */

  getDevices() {}
}

/**
 * @implements { InputDeviceManagerInterface }
 */
export class InputDeviceManagerRemote {
  /** @param {MojoHandle|mojo.internal.interfaceSupport.Endpoint=} handle */
  constructor(handle = undefined) {
    /**
     * @private {!mojo.internal.interfaceSupport.InterfaceRemoteBase<!InputDeviceManagerPendingReceiver>}
     */
    this.proxy =
        new mojo.internal.interfaceSupport.InterfaceRemoteBase(
          InputDeviceManagerPendingReceiver,
          handle);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper<!InputDeviceManagerPendingReceiver>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper(this.proxy);

    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.proxy.getConnectionErrorEventRouter();
  }

  
  /**
   * @param { !Object } client
   * @return {!Promise<{
        devices: !Array<!InputDeviceInfo>,
   *  }>}
   */

  getDevicesAndSetClient(
      client) {
    return this.proxy.sendMessage(
        0,
        InputDeviceManager_GetDevicesAndSetClient_ParamsSpec.$,
        InputDeviceManager_GetDevicesAndSetClient_ResponseParamsSpec.$,
        [
          client
        ]);
  }

  
  /**
   * @return {!Promise<{
        devices: !Array<!InputDeviceInfo>,
   *  }>}
   */

  getDevices() {
    return this.proxy.sendMessage(
        1,
        InputDeviceManager_GetDevices_ParamsSpec.$,
        InputDeviceManager_GetDevices_ResponseParamsSpec.$,
        [
        ]);
  }
}

/**
 * An object which receives request messages for the InputDeviceManager
 * mojom interface. Must be constructed over an object which implements that
 * interface.
 */
export class InputDeviceManagerReceiver {
  /**
   * @param {!InputDeviceManagerInterface } impl
   */
  constructor(impl) {
    /** @private {!mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal<!InputDeviceManagerRemote>} */
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
        InputDeviceManagerRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!InputDeviceManagerRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);


    this.helper_internal_.registerHandler(
        0,
        InputDeviceManager_GetDevicesAndSetClient_ParamsSpec.$,
        InputDeviceManager_GetDevicesAndSetClient_ResponseParamsSpec.$,
        impl.getDevicesAndSetClient.bind(impl));
    this.helper_internal_.registerHandler(
        1,
        InputDeviceManager_GetDevices_ParamsSpec.$,
        InputDeviceManager_GetDevices_ResponseParamsSpec.$,
        impl.getDevices.bind(impl));
    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.helper_internal_.getConnectionErrorEventRouter();
  }
}

export class InputDeviceManager {
  /**
   * @return {!string}
   */
  static get $interfaceName() {
    return "device.mojom.InputDeviceManager";
  }

  /**
   * Returns a remote for this interface which sends messages to the browser.
   * The browser must have an interface request binder registered for this
   * interface and accessible to the calling document's frame.
   *
   * @return {!InputDeviceManagerRemote}
   */
  static getRemote() {
    let remote = new InputDeviceManagerRemote;
    remote.$.bindNewPipeAndPassReceiver().bindInBrowser();
    return remote;
  }
}


/**
 * An object which receives request messages for the InputDeviceManager
 * mojom interface and dispatches them as callbacks. One callback receiver exists
 * on this object for each message defined in the mojom interface, and each
 * receiver can have any number of listeners added to it.
 */
export class InputDeviceManagerCallbackRouter {
  constructor() {
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
      InputDeviceManagerRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!InputDeviceManagerRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);

    this.router_ = new mojo.internal.interfaceSupport.CallbackRouter;

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.getDevicesAndSetClient =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        0,
        InputDeviceManager_GetDevicesAndSetClient_ParamsSpec.$,
        InputDeviceManager_GetDevicesAndSetClient_ResponseParamsSpec.$,
        this.getDevicesAndSetClient.createReceiverHandler(true /* expectsResponse */));
    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.getDevices =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        1,
        InputDeviceManager_GetDevices_ParamsSpec.$,
        InputDeviceManager_GetDevices_ResponseParamsSpec.$,
        this.getDevices.createReceiverHandler(true /* expectsResponse */));
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
export const InputDeviceInfoSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const InputDeviceManagerClient_InputDeviceAdded_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const InputDeviceManagerClient_InputDeviceRemoved_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const InputDeviceManager_GetDevicesAndSetClient_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const InputDeviceManager_GetDevicesAndSetClient_ResponseParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const InputDeviceManager_GetDevices_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const InputDeviceManager_GetDevices_ResponseParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };




mojo.internal.Struct(
    InputDeviceInfoSpec.$,
    'InputDeviceInfo',
    [
      mojo.internal.StructField(
        'id', 0,
        0,
        mojo.internal.String,
        null,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'name', 8,
        0,
        mojo.internal.String,
        null,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'subsystem', 16,
        0,
        InputDeviceSubsystemSpec.$,
        0,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'type', 20,
        0,
        InputDeviceTypeSpec.$,
        0,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'isAccelerometer', 24,
        0,
        mojo.internal.Bool,
        false,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'isJoystick', 24,
        1,
        mojo.internal.Bool,
        false,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'isKey', 24,
        2,
        mojo.internal.Bool,
        false,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'isKeyboard', 24,
        3,
        mojo.internal.Bool,
        false,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'isMouse', 24,
        4,
        mojo.internal.Bool,
        false,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'isTablet', 24,
        5,
        mojo.internal.Bool,
        false,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'isTouchpad', 24,
        6,
        mojo.internal.Bool,
        false,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'isTouchscreen', 24,
        7,
        mojo.internal.Bool,
        false,
        false /* nullable */,
        0),
    ],
    [[0, 40],]);



/**
 * @record
 */
export class InputDeviceInfo {
  constructor() {
    /** @type { !string } */
    this.id;
    /** @type { !string } */
    this.name;
    /** @type { !InputDeviceSubsystem } */
    this.subsystem;
    /** @type { !InputDeviceType } */
    this.type;
    /** @type { !boolean } */
    this.isAccelerometer;
    /** @type { !boolean } */
    this.isJoystick;
    /** @type { !boolean } */
    this.isKey;
    /** @type { !boolean } */
    this.isKeyboard;
    /** @type { !boolean } */
    this.isMouse;
    /** @type { !boolean } */
    this.isTablet;
    /** @type { !boolean } */
    this.isTouchpad;
    /** @type { !boolean } */
    this.isTouchscreen;
  }
}



mojo.internal.Struct(
    InputDeviceManagerClient_InputDeviceAdded_ParamsSpec.$,
    'InputDeviceManagerClient_InputDeviceAdded_Params',
    [
      mojo.internal.StructField(
        'deviceInfo', 0,
        0,
        InputDeviceInfoSpec.$,
        null,
        false /* nullable */,
        0),
    ],
    [[0, 16],]);



/**
 * @record
 */
export class InputDeviceManagerClient_InputDeviceAdded_Params {
  constructor() {
    /** @type { !InputDeviceInfo } */
    this.deviceInfo;
  }
}



mojo.internal.Struct(
    InputDeviceManagerClient_InputDeviceRemoved_ParamsSpec.$,
    'InputDeviceManagerClient_InputDeviceRemoved_Params',
    [
      mojo.internal.StructField(
        'id', 0,
        0,
        mojo.internal.String,
        null,
        false /* nullable */,
        0),
    ],
    [[0, 16],]);



/**
 * @record
 */
export class InputDeviceManagerClient_InputDeviceRemoved_Params {
  constructor() {
    /** @type { !string } */
    this.id;
  }
}



mojo.internal.Struct(
    InputDeviceManager_GetDevicesAndSetClient_ParamsSpec.$,
    'InputDeviceManager_GetDevicesAndSetClient_Params',
    [
      mojo.internal.StructField(
        'client', 0,
        0,
        mojo.internal.AssociatedInterfaceProxy(InputDeviceManagerClientRemote),
        null,
        false /* nullable */,
        0),
    ],
    [[0, 16],]);



/**
 * @record
 */
export class InputDeviceManager_GetDevicesAndSetClient_Params {
  constructor() {
    /** @type { !Object } */
    this.client;
  }
}



mojo.internal.Struct(
    InputDeviceManager_GetDevicesAndSetClient_ResponseParamsSpec.$,
    'InputDeviceManager_GetDevicesAndSetClient_ResponseParams',
    [
      mojo.internal.StructField(
        'devices', 0,
        0,
        mojo.internal.Array(InputDeviceInfoSpec.$, false),
        null,
        false /* nullable */,
        0),
    ],
    [[0, 16],]);



/**
 * @record
 */
export class InputDeviceManager_GetDevicesAndSetClient_ResponseParams {
  constructor() {
    /** @type { !Array<!InputDeviceInfo> } */
    this.devices;
  }
}



mojo.internal.Struct(
    InputDeviceManager_GetDevices_ParamsSpec.$,
    'InputDeviceManager_GetDevices_Params',
    [
    ],
    [[0, 8],]);



/**
 * @record
 */
export class InputDeviceManager_GetDevices_Params {
  constructor() {
  }
}



mojo.internal.Struct(
    InputDeviceManager_GetDevices_ResponseParamsSpec.$,
    'InputDeviceManager_GetDevices_ResponseParams',
    [
      mojo.internal.StructField(
        'devices', 0,
        0,
        mojo.internal.Array(InputDeviceInfoSpec.$, false),
        null,
        false /* nullable */,
        0),
    ],
    [[0, 16],]);



/**
 * @record
 */
export class InputDeviceManager_GetDevices_ResponseParams {
  constructor() {
    /** @type { !Array<!InputDeviceInfo> } */
    this.devices;
  }
}

