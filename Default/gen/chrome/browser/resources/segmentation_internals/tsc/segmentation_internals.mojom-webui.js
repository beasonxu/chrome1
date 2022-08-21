// mojom-webui/chrome/browser/ui/webui/segmentation_internals/segmentation_internals.mojom-webui.js is auto generated by mojom_bindings_generator.py, do not edit
// Copyright 2020 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
import { mojo } from '//resources/mojo/mojo/public/js/bindings.js';
/**
 * @implements {mojo.internal.interfaceSupport.PendingReceiver}
 */
export class PageHandlerFactoryPendingReceiver {
    /**
     * @param {!MojoHandle|!mojo.internal.interfaceSupport.Endpoint} handle
     */
    constructor(handle) {
        /** @public {!mojo.internal.interfaceSupport.Endpoint} */
        this.handle = mojo.internal.interfaceSupport.getEndpointForReceiver(handle);
    }
    /** @param {string=} scope */
    bindInBrowser(scope = 'context') {
        mojo.internal.interfaceSupport.bind(this.handle, 'segmentation_internals.mojom.PageHandlerFactory', scope);
    }
}
/** @interface */
export class PageHandlerFactoryInterface {
    /**
     * @param { !PageRemote } page
     * @param { !PageHandlerPendingReceiver } handler
     */
    createPageHandler(page, handler) { }
}
/**
 * @implements { PageHandlerFactoryInterface }
 */
export class PageHandlerFactoryRemote {
    /** @param {MojoHandle|mojo.internal.interfaceSupport.Endpoint=} handle */
    constructor(handle = undefined) {
        /**
         * @private {!mojo.internal.interfaceSupport.InterfaceRemoteBase<!PageHandlerFactoryPendingReceiver>}
         */
        this.proxy =
            new mojo.internal.interfaceSupport.InterfaceRemoteBase(PageHandlerFactoryPendingReceiver, handle);
        /**
         * @public {!mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper<!PageHandlerFactoryPendingReceiver>}
         */
        this.$ = new mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper(this.proxy);
        /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
        this.onConnectionError = this.proxy.getConnectionErrorEventRouter();
    }
    /**
     * @param { !PageRemote } page
     * @param { !PageHandlerPendingReceiver } handler
     */
    createPageHandler(page, handler) {
        this.proxy.sendMessage(0, PageHandlerFactory_CreatePageHandler_ParamsSpec.$, null, [
            page,
            handler
        ]);
    }
}
/**
 * An object which receives request messages for the PageHandlerFactory
 * mojom interface. Must be constructed over an object which implements that
 * interface.
 */
export class PageHandlerFactoryReceiver {
    /**
     * @param {!PageHandlerFactoryInterface } impl
     */
    constructor(impl) {
        /** @private {!mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal<!PageHandlerFactoryRemote>} */
        this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(PageHandlerFactoryRemote);
        /**
         * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!PageHandlerFactoryRemote>}
         */
        this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);
        this.helper_internal_.registerHandler(0, PageHandlerFactory_CreatePageHandler_ParamsSpec.$, null, impl.createPageHandler.bind(impl));
        /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
        this.onConnectionError = this.helper_internal_.getConnectionErrorEventRouter();
    }
}
export class PageHandlerFactory {
    /**
     * @return {!string}
     */
    static get $interfaceName() {
        return "segmentation_internals.mojom.PageHandlerFactory";
    }
    /**
     * Returns a remote for this interface which sends messages to the browser.
     * The browser must have an interface request binder registered for this
     * interface and accessible to the calling document's frame.
     *
     * @return {!PageHandlerFactoryRemote}
     */
    static getRemote() {
        let remote = new PageHandlerFactoryRemote;
        remote.$.bindNewPipeAndPassReceiver().bindInBrowser();
        return remote;
    }
}
/**
 * An object which receives request messages for the PageHandlerFactory
 * mojom interface and dispatches them as callbacks. One callback receiver exists
 * on this object for each message defined in the mojom interface, and each
 * receiver can have any number of listeners added to it.
 */
export class PageHandlerFactoryCallbackRouter {
    constructor() {
        this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(PageHandlerFactoryRemote);
        /**
         * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!PageHandlerFactoryRemote>}
         */
        this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);
        this.router_ = new mojo.internal.interfaceSupport.CallbackRouter;
        /**
         * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
         */
        this.createPageHandler =
            new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(this.router_);
        this.helper_internal_.registerHandler(0, PageHandlerFactory_CreatePageHandler_ParamsSpec.$, null, this.createPageHandler.createReceiverHandler(false /* expectsResponse */));
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
export class PageHandlerPendingReceiver {
    /**
     * @param {!MojoHandle|!mojo.internal.interfaceSupport.Endpoint} handle
     */
    constructor(handle) {
        /** @public {!mojo.internal.interfaceSupport.Endpoint} */
        this.handle = mojo.internal.interfaceSupport.getEndpointForReceiver(handle);
    }
    /** @param {string=} scope */
    bindInBrowser(scope = 'context') {
        mojo.internal.interfaceSupport.bind(this.handle, 'segmentation_internals.mojom.PageHandler', scope);
    }
}
/** @interface */
export class PageHandlerInterface {
    /**
     */
    getServiceStatus() { }
    /**
     * @param { !number } segmentId
     */
    executeModel(segmentId) { }
    /**
     * @param { !number } segmentId
     * @param { !number } result
     */
    overwriteResult(segmentId, result) { }
    /**
     * @param { !string } segmentationKey
     * @param { !number } optimizationTarget
     */
    setSelected(segmentationKey, optimizationTarget) { }
}
/**
 * @implements { PageHandlerInterface }
 */
export class PageHandlerRemote {
    /** @param {MojoHandle|mojo.internal.interfaceSupport.Endpoint=} handle */
    constructor(handle = undefined) {
        /**
         * @private {!mojo.internal.interfaceSupport.InterfaceRemoteBase<!PageHandlerPendingReceiver>}
         */
        this.proxy =
            new mojo.internal.interfaceSupport.InterfaceRemoteBase(PageHandlerPendingReceiver, handle);
        /**
         * @public {!mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper<!PageHandlerPendingReceiver>}
         */
        this.$ = new mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper(this.proxy);
        /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
        this.onConnectionError = this.proxy.getConnectionErrorEventRouter();
    }
    /**
     */
    getServiceStatus() {
        this.proxy.sendMessage(0, PageHandler_GetServiceStatus_ParamsSpec.$, null, []);
    }
    /**
     * @param { !number } segmentId
     */
    executeModel(segmentId) {
        this.proxy.sendMessage(1, PageHandler_ExecuteModel_ParamsSpec.$, null, [
            segmentId
        ]);
    }
    /**
     * @param { !number } segmentId
     * @param { !number } result
     */
    overwriteResult(segmentId, result) {
        this.proxy.sendMessage(2, PageHandler_OverwriteResult_ParamsSpec.$, null, [
            segmentId,
            result
        ]);
    }
    /**
     * @param { !string } segmentationKey
     * @param { !number } optimizationTarget
     */
    setSelected(segmentationKey, optimizationTarget) {
        this.proxy.sendMessage(3, PageHandler_SetSelected_ParamsSpec.$, null, [
            segmentationKey,
            optimizationTarget
        ]);
    }
}
/**
 * An object which receives request messages for the PageHandler
 * mojom interface. Must be constructed over an object which implements that
 * interface.
 */
export class PageHandlerReceiver {
    /**
     * @param {!PageHandlerInterface } impl
     */
    constructor(impl) {
        /** @private {!mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal<!PageHandlerRemote>} */
        this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(PageHandlerRemote);
        /**
         * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!PageHandlerRemote>}
         */
        this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);
        this.helper_internal_.registerHandler(0, PageHandler_GetServiceStatus_ParamsSpec.$, null, impl.getServiceStatus.bind(impl));
        this.helper_internal_.registerHandler(1, PageHandler_ExecuteModel_ParamsSpec.$, null, impl.executeModel.bind(impl));
        this.helper_internal_.registerHandler(2, PageHandler_OverwriteResult_ParamsSpec.$, null, impl.overwriteResult.bind(impl));
        this.helper_internal_.registerHandler(3, PageHandler_SetSelected_ParamsSpec.$, null, impl.setSelected.bind(impl));
        /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
        this.onConnectionError = this.helper_internal_.getConnectionErrorEventRouter();
    }
}
export class PageHandler {
    /**
     * @return {!string}
     */
    static get $interfaceName() {
        return "segmentation_internals.mojom.PageHandler";
    }
    /**
     * Returns a remote for this interface which sends messages to the browser.
     * The browser must have an interface request binder registered for this
     * interface and accessible to the calling document's frame.
     *
     * @return {!PageHandlerRemote}
     */
    static getRemote() {
        let remote = new PageHandlerRemote;
        remote.$.bindNewPipeAndPassReceiver().bindInBrowser();
        return remote;
    }
}
/**
 * An object which receives request messages for the PageHandler
 * mojom interface and dispatches them as callbacks. One callback receiver exists
 * on this object for each message defined in the mojom interface, and each
 * receiver can have any number of listeners added to it.
 */
export class PageHandlerCallbackRouter {
    constructor() {
        this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(PageHandlerRemote);
        /**
         * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!PageHandlerRemote>}
         */
        this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);
        this.router_ = new mojo.internal.interfaceSupport.CallbackRouter;
        /**
         * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
         */
        this.getServiceStatus =
            new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(this.router_);
        this.helper_internal_.registerHandler(0, PageHandler_GetServiceStatus_ParamsSpec.$, null, this.getServiceStatus.createReceiverHandler(false /* expectsResponse */));
        /**
         * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
         */
        this.executeModel =
            new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(this.router_);
        this.helper_internal_.registerHandler(1, PageHandler_ExecuteModel_ParamsSpec.$, null, this.executeModel.createReceiverHandler(false /* expectsResponse */));
        /**
         * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
         */
        this.overwriteResult =
            new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(this.router_);
        this.helper_internal_.registerHandler(2, PageHandler_OverwriteResult_ParamsSpec.$, null, this.overwriteResult.createReceiverHandler(false /* expectsResponse */));
        /**
         * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
         */
        this.setSelected =
            new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(this.router_);
        this.helper_internal_.registerHandler(3, PageHandler_SetSelected_ParamsSpec.$, null, this.setSelected.createReceiverHandler(false /* expectsResponse */));
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
export class PagePendingReceiver {
    /**
     * @param {!MojoHandle|!mojo.internal.interfaceSupport.Endpoint} handle
     */
    constructor(handle) {
        /** @public {!mojo.internal.interfaceSupport.Endpoint} */
        this.handle = mojo.internal.interfaceSupport.getEndpointForReceiver(handle);
    }
    /** @param {string=} scope */
    bindInBrowser(scope = 'context') {
        mojo.internal.interfaceSupport.bind(this.handle, 'segmentation_internals.mojom.Page', scope);
    }
}
/** @interface */
export class PageInterface {
    /**
     * @param { !boolean } isInitialized
     * @param { !number } statusFlag
     */
    onServiceStatusChanged(isInitialized, statusFlag) { }
    /**
     * @param { !Array<!ClientInfo> } clientInfo
     */
    onClientInfoAvailable(clientInfo) { }
}
/**
 * @implements { PageInterface }
 */
export class PageRemote {
    /** @param {MojoHandle|mojo.internal.interfaceSupport.Endpoint=} handle */
    constructor(handle = undefined) {
        /**
         * @private {!mojo.internal.interfaceSupport.InterfaceRemoteBase<!PagePendingReceiver>}
         */
        this.proxy =
            new mojo.internal.interfaceSupport.InterfaceRemoteBase(PagePendingReceiver, handle);
        /**
         * @public {!mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper<!PagePendingReceiver>}
         */
        this.$ = new mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper(this.proxy);
        /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
        this.onConnectionError = this.proxy.getConnectionErrorEventRouter();
    }
    /**
     * @param { !boolean } isInitialized
     * @param { !number } statusFlag
     */
    onServiceStatusChanged(isInitialized, statusFlag) {
        this.proxy.sendMessage(0, Page_OnServiceStatusChanged_ParamsSpec.$, null, [
            isInitialized,
            statusFlag
        ]);
    }
    /**
     * @param { !Array<!ClientInfo> } clientInfo
     */
    onClientInfoAvailable(clientInfo) {
        this.proxy.sendMessage(1, Page_OnClientInfoAvailable_ParamsSpec.$, null, [
            clientInfo
        ]);
    }
}
/**
 * An object which receives request messages for the Page
 * mojom interface. Must be constructed over an object which implements that
 * interface.
 */
export class PageReceiver {
    /**
     * @param {!PageInterface } impl
     */
    constructor(impl) {
        /** @private {!mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal<!PageRemote>} */
        this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(PageRemote);
        /**
         * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!PageRemote>}
         */
        this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);
        this.helper_internal_.registerHandler(0, Page_OnServiceStatusChanged_ParamsSpec.$, null, impl.onServiceStatusChanged.bind(impl));
        this.helper_internal_.registerHandler(1, Page_OnClientInfoAvailable_ParamsSpec.$, null, impl.onClientInfoAvailable.bind(impl));
        /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
        this.onConnectionError = this.helper_internal_.getConnectionErrorEventRouter();
    }
}
export class Page {
    /**
     * @return {!string}
     */
    static get $interfaceName() {
        return "segmentation_internals.mojom.Page";
    }
    /**
     * Returns a remote for this interface which sends messages to the browser.
     * The browser must have an interface request binder registered for this
     * interface and accessible to the calling document's frame.
     *
     * @return {!PageRemote}
     */
    static getRemote() {
        let remote = new PageRemote;
        remote.$.bindNewPipeAndPassReceiver().bindInBrowser();
        return remote;
    }
}
/**
 * An object which receives request messages for the Page
 * mojom interface and dispatches them as callbacks. One callback receiver exists
 * on this object for each message defined in the mojom interface, and each
 * receiver can have any number of listeners added to it.
 */
export class PageCallbackRouter {
    constructor() {
        this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(PageRemote);
        /**
         * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!PageRemote>}
         */
        this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);
        this.router_ = new mojo.internal.interfaceSupport.CallbackRouter;
        /**
         * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
         */
        this.onServiceStatusChanged =
            new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(this.router_);
        this.helper_internal_.registerHandler(0, Page_OnServiceStatusChanged_ParamsSpec.$, null, this.onServiceStatusChanged.createReceiverHandler(false /* expectsResponse */));
        /**
         * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
         */
        this.onClientInfoAvailable =
            new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(this.router_);
        this.helper_internal_.registerHandler(1, Page_OnClientInfoAvailable_ParamsSpec.$, null, this.onClientInfoAvailable.createReceiverHandler(false /* expectsResponse */));
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
export const ServiceStatusSpec = { $: /** @type {!mojo.internal.MojomType} */ ({}) };
/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const SegmentInfoSpec = { $: /** @type {!mojo.internal.MojomType} */ ({}) };
/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const ClientInfoSpec = { $: /** @type {!mojo.internal.MojomType} */ ({}) };
/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const PageHandlerFactory_CreatePageHandler_ParamsSpec = { $: /** @type {!mojo.internal.MojomType} */ ({}) };
/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const PageHandler_GetServiceStatus_ParamsSpec = { $: /** @type {!mojo.internal.MojomType} */ ({}) };
/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const PageHandler_ExecuteModel_ParamsSpec = { $: /** @type {!mojo.internal.MojomType} */ ({}) };
/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const PageHandler_OverwriteResult_ParamsSpec = { $: /** @type {!mojo.internal.MojomType} */ ({}) };
/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const PageHandler_SetSelected_ParamsSpec = { $: /** @type {!mojo.internal.MojomType} */ ({}) };
/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const Page_OnServiceStatusChanged_ParamsSpec = { $: /** @type {!mojo.internal.MojomType} */ ({}) };
/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const Page_OnClientInfoAvailable_ParamsSpec = { $: /** @type {!mojo.internal.MojomType} */ ({}) };
mojo.internal.Struct(ServiceStatusSpec.$, 'ServiceStatus', [
    mojo.internal.StructField('isInitialized', 0, 0, mojo.internal.Bool, false, false /* nullable */, 0),
    mojo.internal.StructField('intializationStatus', 4, 0, mojo.internal.Int32, 0, false /* nullable */, 0),
], [[0, 16],]);
/**
 * @record
 */
export class ServiceStatus {
    constructor() {
        /** @type { !boolean } */
        this.isInitialized;
        /** @type { !number } */
        this.intializationStatus;
    }
}
mojo.internal.Struct(SegmentInfoSpec.$, 'SegmentInfo', [
    mojo.internal.StructField('segmentName', 0, 0, mojo.internal.String, null, false /* nullable */, 0),
    mojo.internal.StructField('segmentId', 8, 0, mojo.internal.Int32, 0, false /* nullable */, 0),
    mojo.internal.StructField('segmentData', 16, 0, mojo.internal.String, null, false /* nullable */, 0),
    mojo.internal.StructField('canExecuteSegment', 12, 0, mojo.internal.Bool, false, false /* nullable */, 0),
    mojo.internal.StructField('predictionResult', 24, 0, mojo.internal.String, null, false /* nullable */, 0),
], [[0, 40],]);
/**
 * @record
 */
export class SegmentInfo {
    constructor() {
        /** @type { !string } */
        this.segmentName;
        /** @type { !number } */
        this.segmentId;
        /** @type { !boolean } */
        this.canExecuteSegment;
        /** @type { !string } */
        this.segmentData;
        /** @type { !string } */
        this.predictionResult;
    }
}
mojo.internal.Struct(ClientInfoSpec.$, 'ClientInfo', [
    mojo.internal.StructField('segmentationKey', 0, 0, mojo.internal.String, null, false /* nullable */, 0),
    mojo.internal.StructField('selectedSegment', 8, 0, mojo.internal.String, null, false /* nullable */, 0),
    mojo.internal.StructField('segmentInfo', 16, 0, mojo.internal.Array(SegmentInfoSpec.$, false), null, false /* nullable */, 0),
], [[0, 32],]);
/**
 * @record
 */
export class ClientInfo {
    constructor() {
        /** @type { !string } */
        this.segmentationKey;
        /** @type { !string } */
        this.selectedSegment;
        /** @type { !Array<!SegmentInfo> } */
        this.segmentInfo;
    }
}
mojo.internal.Struct(PageHandlerFactory_CreatePageHandler_ParamsSpec.$, 'PageHandlerFactory_CreatePageHandler_Params', [
    mojo.internal.StructField('page', 0, 0, mojo.internal.InterfaceProxy(PageRemote), null, false /* nullable */, 0),
    mojo.internal.StructField('handler', 8, 0, mojo.internal.InterfaceRequest(PageHandlerPendingReceiver), null, false /* nullable */, 0),
], [[0, 24],]);
/**
 * @record
 */
export class PageHandlerFactory_CreatePageHandler_Params {
    constructor() {
        /** @type { !PageRemote } */
        this.page;
        /** @type { !PageHandlerPendingReceiver } */
        this.handler;
    }
}
mojo.internal.Struct(PageHandler_GetServiceStatus_ParamsSpec.$, 'PageHandler_GetServiceStatus_Params', [], [[0, 8],]);
/**
 * @record
 */
export class PageHandler_GetServiceStatus_Params {
    constructor() {
    }
}
mojo.internal.Struct(PageHandler_ExecuteModel_ParamsSpec.$, 'PageHandler_ExecuteModel_Params', [
    mojo.internal.StructField('segmentId', 0, 0, mojo.internal.Int32, 0, false /* nullable */, 0),
], [[0, 16],]);
/**
 * @record
 */
export class PageHandler_ExecuteModel_Params {
    constructor() {
        /** @type { !number } */
        this.segmentId;
    }
}
mojo.internal.Struct(PageHandler_OverwriteResult_ParamsSpec.$, 'PageHandler_OverwriteResult_Params', [
    mojo.internal.StructField('segmentId', 0, 0, mojo.internal.Int32, 0, false /* nullable */, 0),
    mojo.internal.StructField('result', 4, 0, mojo.internal.Float, 0, false /* nullable */, 0),
], [[0, 16],]);
/**
 * @record
 */
export class PageHandler_OverwriteResult_Params {
    constructor() {
        /** @type { !number } */
        this.segmentId;
        /** @type { !number } */
        this.result;
    }
}
mojo.internal.Struct(PageHandler_SetSelected_ParamsSpec.$, 'PageHandler_SetSelected_Params', [
    mojo.internal.StructField('segmentationKey', 0, 0, mojo.internal.String, null, false /* nullable */, 0),
    mojo.internal.StructField('optimizationTarget', 8, 0, mojo.internal.Int32, 0, false /* nullable */, 0),
], [[0, 24],]);
/**
 * @record
 */
export class PageHandler_SetSelected_Params {
    constructor() {
        /** @type { !string } */
        this.segmentationKey;
        /** @type { !number } */
        this.optimizationTarget;
    }
}
mojo.internal.Struct(Page_OnServiceStatusChanged_ParamsSpec.$, 'Page_OnServiceStatusChanged_Params', [
    mojo.internal.StructField('isInitialized', 0, 0, mojo.internal.Bool, false, false /* nullable */, 0),
    mojo.internal.StructField('statusFlag', 4, 0, mojo.internal.Int32, 0, false /* nullable */, 0),
], [[0, 16],]);
/**
 * @record
 */
export class Page_OnServiceStatusChanged_Params {
    constructor() {
        /** @type { !boolean } */
        this.isInitialized;
        /** @type { !number } */
        this.statusFlag;
    }
}
mojo.internal.Struct(Page_OnClientInfoAvailable_ParamsSpec.$, 'Page_OnClientInfoAvailable_Params', [
    mojo.internal.StructField('clientInfo', 0, 0, mojo.internal.Array(ClientInfoSpec.$, false), null, false /* nullable */, 0),
], [[0, 16],]);
/**
 * @record
 */
export class Page_OnClientInfoAvailable_Params {
    constructor() {
        /** @type { !Array<!ClientInfo> } */
        this.clientInfo;
    }
}
