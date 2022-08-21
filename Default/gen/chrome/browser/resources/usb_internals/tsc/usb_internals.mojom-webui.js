// mojom-webui/chrome/browser/ui/webui/usb_internals/usb_internals.mojom-webui.js is auto generated by mojom_bindings_generator.py, do not edit
// Copyright 2020 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
import { mojo } from '//resources/mojo/mojo/public/js/bindings.js';
import { UsbDeviceManagerPendingReceiver as device_mojom_UsbDeviceManagerPendingReceiver } from './usb_manager.mojom-webui.js';
import { UsbDeviceManagerTestPendingReceiver as device_mojom_UsbDeviceManagerTestPendingReceiver } from './usb_manager_test.mojom-webui.js';
/**
 * @implements {mojo.internal.interfaceSupport.PendingReceiver}
 */
export class UsbInternalsPageHandlerPendingReceiver {
    /**
     * @param {!MojoHandle|!mojo.internal.interfaceSupport.Endpoint} handle
     */
    constructor(handle) {
        /** @public {!mojo.internal.interfaceSupport.Endpoint} */
        this.handle = mojo.internal.interfaceSupport.getEndpointForReceiver(handle);
    }
    /** @param {string=} scope */
    bindInBrowser(scope = 'context') {
        mojo.internal.interfaceSupport.bind(this.handle, 'mojom.UsbInternalsPageHandler', scope);
    }
}
/** @interface */
export class UsbInternalsPageHandlerInterface {
    /**
     * @param { !device_mojom_UsbDeviceManagerPendingReceiver } receiver
     */
    bindUsbDeviceManagerInterface(receiver) { }
    /**
     * @param { !device_mojom_UsbDeviceManagerTestPendingReceiver } receiver
     */
    bindTestInterface(receiver) { }
}
/**
 * @implements { UsbInternalsPageHandlerInterface }
 */
export class UsbInternalsPageHandlerRemote {
    /** @param {MojoHandle|mojo.internal.interfaceSupport.Endpoint=} handle */
    constructor(handle = undefined) {
        /**
         * @private {!mojo.internal.interfaceSupport.InterfaceRemoteBase<!UsbInternalsPageHandlerPendingReceiver>}
         */
        this.proxy =
            new mojo.internal.interfaceSupport.InterfaceRemoteBase(UsbInternalsPageHandlerPendingReceiver, handle);
        /**
         * @public {!mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper<!UsbInternalsPageHandlerPendingReceiver>}
         */
        this.$ = new mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper(this.proxy);
        /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
        this.onConnectionError = this.proxy.getConnectionErrorEventRouter();
    }
    /**
     * @param { !device_mojom_UsbDeviceManagerPendingReceiver } receiver
     */
    bindUsbDeviceManagerInterface(receiver) {
        this.proxy.sendMessage(0, UsbInternalsPageHandler_BindUsbDeviceManagerInterface_ParamsSpec.$, null, [
            receiver
        ]);
    }
    /**
     * @param { !device_mojom_UsbDeviceManagerTestPendingReceiver } receiver
     */
    bindTestInterface(receiver) {
        this.proxy.sendMessage(1, UsbInternalsPageHandler_BindTestInterface_ParamsSpec.$, null, [
            receiver
        ]);
    }
}
/**
 * An object which receives request messages for the UsbInternalsPageHandler
 * mojom interface. Must be constructed over an object which implements that
 * interface.
 */
export class UsbInternalsPageHandlerReceiver {
    /**
     * @param {!UsbInternalsPageHandlerInterface } impl
     */
    constructor(impl) {
        /** @private {!mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal<!UsbInternalsPageHandlerRemote>} */
        this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(UsbInternalsPageHandlerRemote);
        /**
         * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!UsbInternalsPageHandlerRemote>}
         */
        this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);
        this.helper_internal_.registerHandler(0, UsbInternalsPageHandler_BindUsbDeviceManagerInterface_ParamsSpec.$, null, impl.bindUsbDeviceManagerInterface.bind(impl));
        this.helper_internal_.registerHandler(1, UsbInternalsPageHandler_BindTestInterface_ParamsSpec.$, null, impl.bindTestInterface.bind(impl));
        /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
        this.onConnectionError = this.helper_internal_.getConnectionErrorEventRouter();
    }
}
export class UsbInternalsPageHandler {
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
     * @return {!UsbInternalsPageHandlerRemote}
     */
    static getRemote() {
        let remote = new UsbInternalsPageHandlerRemote;
        remote.$.bindNewPipeAndPassReceiver().bindInBrowser();
        return remote;
    }
}
/**
 * An object which receives request messages for the UsbInternalsPageHandler
 * mojom interface and dispatches them as callbacks. One callback receiver exists
 * on this object for each message defined in the mojom interface, and each
 * receiver can have any number of listeners added to it.
 */
export class UsbInternalsPageHandlerCallbackRouter {
    constructor() {
        this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(UsbInternalsPageHandlerRemote);
        /**
         * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!UsbInternalsPageHandlerRemote>}
         */
        this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);
        this.router_ = new mojo.internal.interfaceSupport.CallbackRouter;
        /**
         * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
         */
        this.bindUsbDeviceManagerInterface =
            new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(this.router_);
        this.helper_internal_.registerHandler(0, UsbInternalsPageHandler_BindUsbDeviceManagerInterface_ParamsSpec.$, null, this.bindUsbDeviceManagerInterface.createReceiverHandler(false /* expectsResponse */));
        /**
         * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
         */
        this.bindTestInterface =
            new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(this.router_);
        this.helper_internal_.registerHandler(1, UsbInternalsPageHandler_BindTestInterface_ParamsSpec.$, null, this.bindTestInterface.createReceiverHandler(false /* expectsResponse */));
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
export const UsbInternalsPageHandler_BindUsbDeviceManagerInterface_ParamsSpec = { $: /** @type {!mojo.internal.MojomType} */ ({}) };
/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const UsbInternalsPageHandler_BindTestInterface_ParamsSpec = { $: /** @type {!mojo.internal.MojomType} */ ({}) };
mojo.internal.Struct(UsbInternalsPageHandler_BindUsbDeviceManagerInterface_ParamsSpec.$, 'UsbInternalsPageHandler_BindUsbDeviceManagerInterface_Params', [
    mojo.internal.StructField('receiver', 0, 0, mojo.internal.InterfaceRequest(device_mojom_UsbDeviceManagerPendingReceiver), null, false /* nullable */, 0),
], [[0, 16],]);
/**
 * @record
 */
export class UsbInternalsPageHandler_BindUsbDeviceManagerInterface_Params {
    constructor() {
        /** @type { !device_mojom_UsbDeviceManagerPendingReceiver } */
        this.receiver;
    }
}
mojo.internal.Struct(UsbInternalsPageHandler_BindTestInterface_ParamsSpec.$, 'UsbInternalsPageHandler_BindTestInterface_Params', [
    mojo.internal.StructField('receiver', 0, 0, mojo.internal.InterfaceRequest(device_mojom_UsbDeviceManagerTestPendingReceiver), null, false /* nullable */, 0),
], [[0, 16],]);
/**
 * @record
 */
export class UsbInternalsPageHandler_BindTestInterface_Params {
    constructor() {
        /** @type { !device_mojom_UsbDeviceManagerTestPendingReceiver } */
        this.receiver;
    }
}
