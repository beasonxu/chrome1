// mojom-webui/services/device/public/mojom/usb_manager.mojom-webui.js is auto generated by mojom_bindings_generator.py, do not edit
// Copyright 2020 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
import { mojo } from '//resources/mojo/mojo/public/js/bindings.js';
import { UsbDevicePendingReceiver as device_mojom_UsbDevicePendingReceiver, UsbDeviceClientRemote as device_mojom_UsbDeviceClientRemote, UsbDeviceInfoSpec as device_mojom_UsbDeviceInfoSpec } from './usb_device.mojom-webui.js';
import { UsbEnumerationOptionsSpec as device_mojom_UsbEnumerationOptionsSpec } from './usb_enumeration_options.mojom-webui.js';
import { UsbDeviceManagerClientRemote as device_mojom_UsbDeviceManagerClientRemote } from './usb_manager_client.mojom-webui.js';
/**
 * @implements {mojo.internal.interfaceSupport.PendingReceiver}
 */
export class UsbDeviceManagerPendingReceiver {
    /**
     * @param {!MojoHandle|!mojo.internal.interfaceSupport.Endpoint} handle
     */
    constructor(handle) {
        /** @public {!mojo.internal.interfaceSupport.Endpoint} */
        this.handle = mojo.internal.interfaceSupport.getEndpointForReceiver(handle);
    }
    /** @param {string=} scope */
    bindInBrowser(scope = 'context') {
        mojo.internal.interfaceSupport.bind(this.handle, 'device.mojom.UsbDeviceManager', scope);
    }
}
/** @interface */
export class UsbDeviceManagerInterface {
    /**
     * @param { !Object } client
     * @return {!Promise<{
          results: !Array<!device_mojom_UsbDeviceInfo>,
     *  }>}
     */
    enumerateDevicesAndSetClient(client) { }
    /**
     * @param { ?device_mojom_UsbEnumerationOptions } options
     * @return {!Promise<{
          results: !Array<!device_mojom_UsbDeviceInfo>,
     *  }>}
     */
    getDevices(options) { }
    /**
     * @param { !string } guid
     * @param { !Array<!number> } blockedInterfaceClasses
     * @param { !device_mojom_UsbDevicePendingReceiver } deviceReceiver
     * @param { ?device_mojom_UsbDeviceClientRemote } deviceClient
     */
    getDevice(guid, blockedInterfaceClasses, deviceReceiver, deviceClient) { }
    /**
     * @param { !string } guid
     * @param { !device_mojom_UsbDevicePendingReceiver } deviceReceiver
     * @param { ?device_mojom_UsbDeviceClientRemote } deviceClient
     */
    getSecurityKeyDevice(guid, deviceReceiver, deviceClient) { }
    /**
     * @param { !string } guid
     * @return {!Promise<{
          deviceInfo: ?device_mojom_UsbDeviceInfo,
     *  }>}
     */
    refreshDeviceInfo(guid) { }
    /**
     * @param { !Object } client
     */
    setClient(client) { }
}
/**
 * @implements { UsbDeviceManagerInterface }
 */
export class UsbDeviceManagerRemote {
    /** @param {MojoHandle|mojo.internal.interfaceSupport.Endpoint=} handle */
    constructor(handle = undefined) {
        /**
         * @private {!mojo.internal.interfaceSupport.InterfaceRemoteBase<!UsbDeviceManagerPendingReceiver>}
         */
        this.proxy =
            new mojo.internal.interfaceSupport.InterfaceRemoteBase(UsbDeviceManagerPendingReceiver, handle);
        /**
         * @public {!mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper<!UsbDeviceManagerPendingReceiver>}
         */
        this.$ = new mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper(this.proxy);
        /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
        this.onConnectionError = this.proxy.getConnectionErrorEventRouter();
    }
    /**
     * @param { !Object } client
     * @return {!Promise<{
          results: !Array<!device_mojom_UsbDeviceInfo>,
     *  }>}
     */
    enumerateDevicesAndSetClient(client) {
        return this.proxy.sendMessage(0, UsbDeviceManager_EnumerateDevicesAndSetClient_ParamsSpec.$, UsbDeviceManager_EnumerateDevicesAndSetClient_ResponseParamsSpec.$, [
            client
        ]);
    }
    /**
     * @param { ?device_mojom_UsbEnumerationOptions } options
     * @return {!Promise<{
          results: !Array<!device_mojom_UsbDeviceInfo>,
     *  }>}
     */
    getDevices(options) {
        return this.proxy.sendMessage(1, UsbDeviceManager_GetDevices_ParamsSpec.$, UsbDeviceManager_GetDevices_ResponseParamsSpec.$, [
            options
        ]);
    }
    /**
     * @param { !string } guid
     * @param { !Array<!number> } blockedInterfaceClasses
     * @param { !device_mojom_UsbDevicePendingReceiver } deviceReceiver
     * @param { ?device_mojom_UsbDeviceClientRemote } deviceClient
     */
    getDevice(guid, blockedInterfaceClasses, deviceReceiver, deviceClient) {
        this.proxy.sendMessage(2, UsbDeviceManager_GetDevice_ParamsSpec.$, null, [
            guid,
            blockedInterfaceClasses,
            deviceReceiver,
            deviceClient
        ]);
    }
    /**
     * @param { !string } guid
     * @param { !device_mojom_UsbDevicePendingReceiver } deviceReceiver
     * @param { ?device_mojom_UsbDeviceClientRemote } deviceClient
     */
    getSecurityKeyDevice(guid, deviceReceiver, deviceClient) {
        this.proxy.sendMessage(3, UsbDeviceManager_GetSecurityKeyDevice_ParamsSpec.$, null, [
            guid,
            deviceReceiver,
            deviceClient
        ]);
    }
    /**
     * @param { !string } guid
     * @return {!Promise<{
          deviceInfo: ?device_mojom_UsbDeviceInfo,
     *  }>}
     */
    refreshDeviceInfo(guid) {
        return this.proxy.sendMessage(4, UsbDeviceManager_RefreshDeviceInfo_ParamsSpec.$, UsbDeviceManager_RefreshDeviceInfo_ResponseParamsSpec.$, [
            guid
        ]);
    }
    /**
     * @param { !Object } client
     */
    setClient(client) {
        this.proxy.sendMessage(5, UsbDeviceManager_SetClient_ParamsSpec.$, null, [
            client
        ]);
    }
}
/**
 * An object which receives request messages for the UsbDeviceManager
 * mojom interface. Must be constructed over an object which implements that
 * interface.
 */
export class UsbDeviceManagerReceiver {
    /**
     * @param {!UsbDeviceManagerInterface } impl
     */
    constructor(impl) {
        /** @private {!mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal<!UsbDeviceManagerRemote>} */
        this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(UsbDeviceManagerRemote);
        /**
         * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!UsbDeviceManagerRemote>}
         */
        this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);
        this.helper_internal_.registerHandler(0, UsbDeviceManager_EnumerateDevicesAndSetClient_ParamsSpec.$, UsbDeviceManager_EnumerateDevicesAndSetClient_ResponseParamsSpec.$, impl.enumerateDevicesAndSetClient.bind(impl));
        this.helper_internal_.registerHandler(1, UsbDeviceManager_GetDevices_ParamsSpec.$, UsbDeviceManager_GetDevices_ResponseParamsSpec.$, impl.getDevices.bind(impl));
        this.helper_internal_.registerHandler(2, UsbDeviceManager_GetDevice_ParamsSpec.$, null, impl.getDevice.bind(impl));
        this.helper_internal_.registerHandler(3, UsbDeviceManager_GetSecurityKeyDevice_ParamsSpec.$, null, impl.getSecurityKeyDevice.bind(impl));
        this.helper_internal_.registerHandler(4, UsbDeviceManager_RefreshDeviceInfo_ParamsSpec.$, UsbDeviceManager_RefreshDeviceInfo_ResponseParamsSpec.$, impl.refreshDeviceInfo.bind(impl));
        this.helper_internal_.registerHandler(5, UsbDeviceManager_SetClient_ParamsSpec.$, null, impl.setClient.bind(impl));
        /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
        this.onConnectionError = this.helper_internal_.getConnectionErrorEventRouter();
    }
}
export class UsbDeviceManager {
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
     * @return {!UsbDeviceManagerRemote}
     */
    static getRemote() {
        let remote = new UsbDeviceManagerRemote;
        remote.$.bindNewPipeAndPassReceiver().bindInBrowser();
        return remote;
    }
}
/**
 * An object which receives request messages for the UsbDeviceManager
 * mojom interface and dispatches them as callbacks. One callback receiver exists
 * on this object for each message defined in the mojom interface, and each
 * receiver can have any number of listeners added to it.
 */
export class UsbDeviceManagerCallbackRouter {
    constructor() {
        this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(UsbDeviceManagerRemote);
        /**
         * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!UsbDeviceManagerRemote>}
         */
        this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);
        this.router_ = new mojo.internal.interfaceSupport.CallbackRouter;
        /**
         * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
         */
        this.enumerateDevicesAndSetClient =
            new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(this.router_);
        this.helper_internal_.registerHandler(0, UsbDeviceManager_EnumerateDevicesAndSetClient_ParamsSpec.$, UsbDeviceManager_EnumerateDevicesAndSetClient_ResponseParamsSpec.$, this.enumerateDevicesAndSetClient.createReceiverHandler(true /* expectsResponse */));
        /**
         * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
         */
        this.getDevices =
            new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(this.router_);
        this.helper_internal_.registerHandler(1, UsbDeviceManager_GetDevices_ParamsSpec.$, UsbDeviceManager_GetDevices_ResponseParamsSpec.$, this.getDevices.createReceiverHandler(true /* expectsResponse */));
        /**
         * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
         */
        this.getDevice =
            new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(this.router_);
        this.helper_internal_.registerHandler(2, UsbDeviceManager_GetDevice_ParamsSpec.$, null, this.getDevice.createReceiverHandler(false /* expectsResponse */));
        /**
         * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
         */
        this.getSecurityKeyDevice =
            new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(this.router_);
        this.helper_internal_.registerHandler(3, UsbDeviceManager_GetSecurityKeyDevice_ParamsSpec.$, null, this.getSecurityKeyDevice.createReceiverHandler(false /* expectsResponse */));
        /**
         * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
         */
        this.refreshDeviceInfo =
            new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(this.router_);
        this.helper_internal_.registerHandler(4, UsbDeviceManager_RefreshDeviceInfo_ParamsSpec.$, UsbDeviceManager_RefreshDeviceInfo_ResponseParamsSpec.$, this.refreshDeviceInfo.createReceiverHandler(true /* expectsResponse */));
        /**
         * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
         */
        this.setClient =
            new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(this.router_);
        this.helper_internal_.registerHandler(5, UsbDeviceManager_SetClient_ParamsSpec.$, null, this.setClient.createReceiverHandler(false /* expectsResponse */));
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
export const UsbDeviceManager_EnumerateDevicesAndSetClient_ParamsSpec = { $: /** @type {!mojo.internal.MojomType} */ ({}) };
/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const UsbDeviceManager_EnumerateDevicesAndSetClient_ResponseParamsSpec = { $: /** @type {!mojo.internal.MojomType} */ ({}) };
/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const UsbDeviceManager_GetDevices_ParamsSpec = { $: /** @type {!mojo.internal.MojomType} */ ({}) };
/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const UsbDeviceManager_GetDevices_ResponseParamsSpec = { $: /** @type {!mojo.internal.MojomType} */ ({}) };
/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const UsbDeviceManager_GetDevice_ParamsSpec = { $: /** @type {!mojo.internal.MojomType} */ ({}) };
/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const UsbDeviceManager_GetSecurityKeyDevice_ParamsSpec = { $: /** @type {!mojo.internal.MojomType} */ ({}) };
/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const UsbDeviceManager_RefreshDeviceInfo_ParamsSpec = { $: /** @type {!mojo.internal.MojomType} */ ({}) };
/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const UsbDeviceManager_RefreshDeviceInfo_ResponseParamsSpec = { $: /** @type {!mojo.internal.MojomType} */ ({}) };
/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const UsbDeviceManager_SetClient_ParamsSpec = { $: /** @type {!mojo.internal.MojomType} */ ({}) };
mojo.internal.Struct(UsbDeviceManager_EnumerateDevicesAndSetClient_ParamsSpec.$, 'UsbDeviceManager_EnumerateDevicesAndSetClient_Params', [
    mojo.internal.StructField('client', 0, 0, mojo.internal.AssociatedInterfaceProxy(device_mojom_UsbDeviceManagerClientRemote), null, false /* nullable */, 0),
], [[0, 16],]);
/**
 * @record
 */
export class UsbDeviceManager_EnumerateDevicesAndSetClient_Params {
    constructor() {
        /** @type { !Object } */
        this.client;
    }
}
mojo.internal.Struct(UsbDeviceManager_EnumerateDevicesAndSetClient_ResponseParamsSpec.$, 'UsbDeviceManager_EnumerateDevicesAndSetClient_ResponseParams', [
    mojo.internal.StructField('results', 0, 0, mojo.internal.Array(device_mojom_UsbDeviceInfoSpec.$, false), null, false /* nullable */, 0),
], [[0, 16],]);
/**
 * @record
 */
export class UsbDeviceManager_EnumerateDevicesAndSetClient_ResponseParams {
    constructor() {
        /** @type { !Array<!device_mojom_UsbDeviceInfo> } */
        this.results;
    }
}
mojo.internal.Struct(UsbDeviceManager_GetDevices_ParamsSpec.$, 'UsbDeviceManager_GetDevices_Params', [
    mojo.internal.StructField('options', 0, 0, device_mojom_UsbEnumerationOptionsSpec.$, null, true /* nullable */, 0),
], [[0, 16],]);
/**
 * @record
 */
export class UsbDeviceManager_GetDevices_Params {
    constructor() {
        /** @type { (device_mojom_UsbEnumerationOptions|undefined) } */
        this.options;
    }
}
mojo.internal.Struct(UsbDeviceManager_GetDevices_ResponseParamsSpec.$, 'UsbDeviceManager_GetDevices_ResponseParams', [
    mojo.internal.StructField('results', 0, 0, mojo.internal.Array(device_mojom_UsbDeviceInfoSpec.$, false), null, false /* nullable */, 0),
], [[0, 16],]);
/**
 * @record
 */
export class UsbDeviceManager_GetDevices_ResponseParams {
    constructor() {
        /** @type { !Array<!device_mojom_UsbDeviceInfo> } */
        this.results;
    }
}
mojo.internal.Struct(UsbDeviceManager_GetDevice_ParamsSpec.$, 'UsbDeviceManager_GetDevice_Params', [
    mojo.internal.StructField('guid', 0, 0, mojo.internal.String, null, false /* nullable */, 0),
    mojo.internal.StructField('blockedInterfaceClasses', 8, 0, mojo.internal.Array(mojo.internal.Uint8, false), null, false /* nullable */, 0),
    mojo.internal.StructField('deviceReceiver', 16, 0, mojo.internal.InterfaceRequest(device_mojom_UsbDevicePendingReceiver), null, false /* nullable */, 0),
    mojo.internal.StructField('deviceClient', 20, 0, mojo.internal.InterfaceProxy(device_mojom_UsbDeviceClientRemote), null, true /* nullable */, 0),
], [[0, 40],]);
/**
 * @record
 */
export class UsbDeviceManager_GetDevice_Params {
    constructor() {
        /** @type { !string } */
        this.guid;
        /** @type { !Array<!number> } */
        this.blockedInterfaceClasses;
        /** @type { !device_mojom_UsbDevicePendingReceiver } */
        this.deviceReceiver;
        /** @type { (device_mojom_UsbDeviceClientRemote|undefined) } */
        this.deviceClient;
    }
}
mojo.internal.Struct(UsbDeviceManager_GetSecurityKeyDevice_ParamsSpec.$, 'UsbDeviceManager_GetSecurityKeyDevice_Params', [
    mojo.internal.StructField('guid', 0, 0, mojo.internal.String, null, false /* nullable */, 0),
    mojo.internal.StructField('deviceReceiver', 8, 0, mojo.internal.InterfaceRequest(device_mojom_UsbDevicePendingReceiver), null, false /* nullable */, 0),
    mojo.internal.StructField('deviceClient', 12, 0, mojo.internal.InterfaceProxy(device_mojom_UsbDeviceClientRemote), null, true /* nullable */, 0),
], [[0, 32],]);
/**
 * @record
 */
export class UsbDeviceManager_GetSecurityKeyDevice_Params {
    constructor() {
        /** @type { !string } */
        this.guid;
        /** @type { !device_mojom_UsbDevicePendingReceiver } */
        this.deviceReceiver;
        /** @type { (device_mojom_UsbDeviceClientRemote|undefined) } */
        this.deviceClient;
    }
}
mojo.internal.Struct(UsbDeviceManager_RefreshDeviceInfo_ParamsSpec.$, 'UsbDeviceManager_RefreshDeviceInfo_Params', [
    mojo.internal.StructField('guid', 0, 0, mojo.internal.String, null, false /* nullable */, 0),
], [[0, 16],]);
/**
 * @record
 */
export class UsbDeviceManager_RefreshDeviceInfo_Params {
    constructor() {
        /** @type { !string } */
        this.guid;
    }
}
mojo.internal.Struct(UsbDeviceManager_RefreshDeviceInfo_ResponseParamsSpec.$, 'UsbDeviceManager_RefreshDeviceInfo_ResponseParams', [
    mojo.internal.StructField('deviceInfo', 0, 0, device_mojom_UsbDeviceInfoSpec.$, null, true /* nullable */, 0),
], [[0, 16],]);
/**
 * @record
 */
export class UsbDeviceManager_RefreshDeviceInfo_ResponseParams {
    constructor() {
        /** @type { (device_mojom_UsbDeviceInfo|undefined) } */
        this.deviceInfo;
    }
}
mojo.internal.Struct(UsbDeviceManager_SetClient_ParamsSpec.$, 'UsbDeviceManager_SetClient_Params', [
    mojo.internal.StructField('client', 0, 0, mojo.internal.AssociatedInterfaceProxy(device_mojom_UsbDeviceManagerClientRemote), null, false /* nullable */, 0),
], [[0, 16],]);
/**
 * @record
 */
export class UsbDeviceManager_SetClient_Params {
    constructor() {
        /** @type { !Object } */
        this.client;
    }
}
