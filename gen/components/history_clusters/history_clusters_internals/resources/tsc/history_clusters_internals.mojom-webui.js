// mojom-webui/components/history_clusters/history_clusters_internals/webui/history_clusters_internals.mojom-webui.js is auto generated by mojom_bindings_generator.py, do not edit
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
        mojo.internal.interfaceSupport.bind(this.handle, 'history_clusters_internals.mojom.PageHandlerFactory', scope);
    }
}
/** @interface */
export class PageHandlerFactoryInterface {
    /**
     * @param { !PageRemote } page
     */
    createPageHandler(page) { }
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
     */
    createPageHandler(page) {
        this.proxy.sendMessage(0, PageHandlerFactory_CreatePageHandler_ParamsSpec.$, null, [
            page
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
        return "history_clusters_internals.mojom.PageHandlerFactory";
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
        mojo.internal.interfaceSupport.bind(this.handle, 'history_clusters_internals.mojom.Page', scope);
    }
}
/** @interface */
export class PageInterface {
    /**
     * @param { !string } message
     */
    onLogMessageAdded(message) { }
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
     * @param { !string } message
     */
    onLogMessageAdded(message) {
        this.proxy.sendMessage(0, Page_OnLogMessageAdded_ParamsSpec.$, null, [
            message
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
        this.helper_internal_.registerHandler(0, Page_OnLogMessageAdded_ParamsSpec.$, null, impl.onLogMessageAdded.bind(impl));
        /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
        this.onConnectionError = this.helper_internal_.getConnectionErrorEventRouter();
    }
}
export class Page {
    /**
     * @return {!string}
     */
    static get $interfaceName() {
        return "history_clusters_internals.mojom.Page";
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
        this.onLogMessageAdded =
            new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(this.router_);
        this.helper_internal_.registerHandler(0, Page_OnLogMessageAdded_ParamsSpec.$, null, this.onLogMessageAdded.createReceiverHandler(false /* expectsResponse */));
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
export const PageHandlerFactory_CreatePageHandler_ParamsSpec = { $: /** @type {!mojo.internal.MojomType} */ ({}) };
/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const Page_OnLogMessageAdded_ParamsSpec = { $: /** @type {!mojo.internal.MojomType} */ ({}) };
mojo.internal.Struct(PageHandlerFactory_CreatePageHandler_ParamsSpec.$, 'PageHandlerFactory_CreatePageHandler_Params', [
    mojo.internal.StructField('page', 0, 0, mojo.internal.InterfaceProxy(PageRemote), null, false /* nullable */, 0),
], [[0, 16],]);
/**
 * @record
 */
export class PageHandlerFactory_CreatePageHandler_Params {
    constructor() {
        /** @type { !PageRemote } */
        this.page;
    }
}
mojo.internal.Struct(Page_OnLogMessageAdded_ParamsSpec.$, 'Page_OnLogMessageAdded_Params', [
    mojo.internal.StructField('message', 0, 0, mojo.internal.String, null, false /* nullable */, 0),
], [[0, 16],]);
/**
 * @record
 */
export class Page_OnLogMessageAdded_Params {
    constructor() {
        /** @type { !string } */
        this.message;
    }
}
