// mojom-webui/content/browser/process_internals/process_internals.mojom-webui.js is auto generated by mojom_bindings_generator.py, do not edit
// Copyright 2020 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
import { mojo } from '//resources/mojo/mojo/public/js/bindings.js';
import { UrlSpec as url_mojom_UrlSpec } from 'chrome://resources/mojo/url/mojom/url.mojom-webui.js';
/**
 * @implements {mojo.internal.interfaceSupport.PendingReceiver}
 */
export class ProcessInternalsHandlerPendingReceiver {
    /**
     * @param {!MojoHandle|!mojo.internal.interfaceSupport.Endpoint} handle
     */
    constructor(handle) {
        /** @public {!mojo.internal.interfaceSupport.Endpoint} */
        this.handle = mojo.internal.interfaceSupport.getEndpointForReceiver(handle);
    }
    /** @param {string=} scope */
    bindInBrowser(scope = 'context') {
        mojo.internal.interfaceSupport.bind(this.handle, 'mojom.ProcessInternalsHandler', scope);
    }
}
/** @interface */
export class ProcessInternalsHandlerInterface {
    /**
     * @return {!Promise<{
          mode: !string,
     *  }>}
     */
    getIsolationMode() { }
    /**
     * @return {!Promise<{
          isolatedOrigins: !Array<!string>,
     *  }>}
     */
    getUserTriggeredIsolatedOrigins() { }
    /**
     * @return {!Promise<{
          isolatedOrigins: !Array<!string>,
     *  }>}
     */
    getWebTriggeredIsolatedOrigins() { }
    /**
     * @return {!Promise<{
          isolatedOrigins: !Array<!IsolatedOriginInfo>,
     *  }>}
     */
    getGloballyIsolatedOrigins() { }
    /**
     * @return {!Promise<{
          infos: !Array<!WebContentsInfo>,
     *  }>}
     */
    getAllWebContentsInfo() { }
}
/**
 * @implements { ProcessInternalsHandlerInterface }
 */
export class ProcessInternalsHandlerRemote {
    /** @param {MojoHandle|mojo.internal.interfaceSupport.Endpoint=} handle */
    constructor(handle = undefined) {
        /**
         * @private {!mojo.internal.interfaceSupport.InterfaceRemoteBase<!ProcessInternalsHandlerPendingReceiver>}
         */
        this.proxy =
            new mojo.internal.interfaceSupport.InterfaceRemoteBase(ProcessInternalsHandlerPendingReceiver, handle);
        /**
         * @public {!mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper<!ProcessInternalsHandlerPendingReceiver>}
         */
        this.$ = new mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper(this.proxy);
        /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
        this.onConnectionError = this.proxy.getConnectionErrorEventRouter();
    }
    /**
     * @return {!Promise<{
          mode: !string,
     *  }>}
     */
    getIsolationMode() {
        return this.proxy.sendMessage(0, ProcessInternalsHandler_GetIsolationMode_ParamsSpec.$, ProcessInternalsHandler_GetIsolationMode_ResponseParamsSpec.$, []);
    }
    /**
     * @return {!Promise<{
          isolatedOrigins: !Array<!string>,
     *  }>}
     */
    getUserTriggeredIsolatedOrigins() {
        return this.proxy.sendMessage(1, ProcessInternalsHandler_GetUserTriggeredIsolatedOrigins_ParamsSpec.$, ProcessInternalsHandler_GetUserTriggeredIsolatedOrigins_ResponseParamsSpec.$, []);
    }
    /**
     * @return {!Promise<{
          isolatedOrigins: !Array<!string>,
     *  }>}
     */
    getWebTriggeredIsolatedOrigins() {
        return this.proxy.sendMessage(2, ProcessInternalsHandler_GetWebTriggeredIsolatedOrigins_ParamsSpec.$, ProcessInternalsHandler_GetWebTriggeredIsolatedOrigins_ResponseParamsSpec.$, []);
    }
    /**
     * @return {!Promise<{
          isolatedOrigins: !Array<!IsolatedOriginInfo>,
     *  }>}
     */
    getGloballyIsolatedOrigins() {
        return this.proxy.sendMessage(3, ProcessInternalsHandler_GetGloballyIsolatedOrigins_ParamsSpec.$, ProcessInternalsHandler_GetGloballyIsolatedOrigins_ResponseParamsSpec.$, []);
    }
    /**
     * @return {!Promise<{
          infos: !Array<!WebContentsInfo>,
     *  }>}
     */
    getAllWebContentsInfo() {
        return this.proxy.sendMessage(4, ProcessInternalsHandler_GetAllWebContentsInfo_ParamsSpec.$, ProcessInternalsHandler_GetAllWebContentsInfo_ResponseParamsSpec.$, []);
    }
}
/**
 * An object which receives request messages for the ProcessInternalsHandler
 * mojom interface. Must be constructed over an object which implements that
 * interface.
 */
export class ProcessInternalsHandlerReceiver {
    /**
     * @param {!ProcessInternalsHandlerInterface } impl
     */
    constructor(impl) {
        /** @private {!mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal<!ProcessInternalsHandlerRemote>} */
        this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(ProcessInternalsHandlerRemote);
        /**
         * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!ProcessInternalsHandlerRemote>}
         */
        this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);
        this.helper_internal_.registerHandler(0, ProcessInternalsHandler_GetIsolationMode_ParamsSpec.$, ProcessInternalsHandler_GetIsolationMode_ResponseParamsSpec.$, impl.getIsolationMode.bind(impl));
        this.helper_internal_.registerHandler(1, ProcessInternalsHandler_GetUserTriggeredIsolatedOrigins_ParamsSpec.$, ProcessInternalsHandler_GetUserTriggeredIsolatedOrigins_ResponseParamsSpec.$, impl.getUserTriggeredIsolatedOrigins.bind(impl));
        this.helper_internal_.registerHandler(2, ProcessInternalsHandler_GetWebTriggeredIsolatedOrigins_ParamsSpec.$, ProcessInternalsHandler_GetWebTriggeredIsolatedOrigins_ResponseParamsSpec.$, impl.getWebTriggeredIsolatedOrigins.bind(impl));
        this.helper_internal_.registerHandler(3, ProcessInternalsHandler_GetGloballyIsolatedOrigins_ParamsSpec.$, ProcessInternalsHandler_GetGloballyIsolatedOrigins_ResponseParamsSpec.$, impl.getGloballyIsolatedOrigins.bind(impl));
        this.helper_internal_.registerHandler(4, ProcessInternalsHandler_GetAllWebContentsInfo_ParamsSpec.$, ProcessInternalsHandler_GetAllWebContentsInfo_ResponseParamsSpec.$, impl.getAllWebContentsInfo.bind(impl));
        /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
        this.onConnectionError = this.helper_internal_.getConnectionErrorEventRouter();
    }
}
export class ProcessInternalsHandler {
    /**
     * @return {!string}
     */
    static get $interfaceName() {
        return "mojom.ProcessInternalsHandler";
    }
    /**
     * Returns a remote for this interface which sends messages to the browser.
     * The browser must have an interface request binder registered for this
     * interface and accessible to the calling document's frame.
     *
     * @return {!ProcessInternalsHandlerRemote}
     */
    static getRemote() {
        let remote = new ProcessInternalsHandlerRemote;
        remote.$.bindNewPipeAndPassReceiver().bindInBrowser();
        return remote;
    }
}
/**
 * An object which receives request messages for the ProcessInternalsHandler
 * mojom interface and dispatches them as callbacks. One callback receiver exists
 * on this object for each message defined in the mojom interface, and each
 * receiver can have any number of listeners added to it.
 */
export class ProcessInternalsHandlerCallbackRouter {
    constructor() {
        this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(ProcessInternalsHandlerRemote);
        /**
         * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!ProcessInternalsHandlerRemote>}
         */
        this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);
        this.router_ = new mojo.internal.interfaceSupport.CallbackRouter;
        /**
         * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
         */
        this.getIsolationMode =
            new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(this.router_);
        this.helper_internal_.registerHandler(0, ProcessInternalsHandler_GetIsolationMode_ParamsSpec.$, ProcessInternalsHandler_GetIsolationMode_ResponseParamsSpec.$, this.getIsolationMode.createReceiverHandler(true /* expectsResponse */));
        /**
         * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
         */
        this.getUserTriggeredIsolatedOrigins =
            new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(this.router_);
        this.helper_internal_.registerHandler(1, ProcessInternalsHandler_GetUserTriggeredIsolatedOrigins_ParamsSpec.$, ProcessInternalsHandler_GetUserTriggeredIsolatedOrigins_ResponseParamsSpec.$, this.getUserTriggeredIsolatedOrigins.createReceiverHandler(true /* expectsResponse */));
        /**
         * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
         */
        this.getWebTriggeredIsolatedOrigins =
            new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(this.router_);
        this.helper_internal_.registerHandler(2, ProcessInternalsHandler_GetWebTriggeredIsolatedOrigins_ParamsSpec.$, ProcessInternalsHandler_GetWebTriggeredIsolatedOrigins_ResponseParamsSpec.$, this.getWebTriggeredIsolatedOrigins.createReceiverHandler(true /* expectsResponse */));
        /**
         * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
         */
        this.getGloballyIsolatedOrigins =
            new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(this.router_);
        this.helper_internal_.registerHandler(3, ProcessInternalsHandler_GetGloballyIsolatedOrigins_ParamsSpec.$, ProcessInternalsHandler_GetGloballyIsolatedOrigins_ResponseParamsSpec.$, this.getGloballyIsolatedOrigins.createReceiverHandler(true /* expectsResponse */));
        /**
         * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
         */
        this.getAllWebContentsInfo =
            new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(this.router_);
        this.helper_internal_.registerHandler(4, ProcessInternalsHandler_GetAllWebContentsInfo_ParamsSpec.$, ProcessInternalsHandler_GetAllWebContentsInfo_ResponseParamsSpec.$, this.getAllWebContentsInfo.createReceiverHandler(true /* expectsResponse */));
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
export const SiteInstanceInfoSpec = { $: /** @type {!mojo.internal.MojomType} */ ({}) };
/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const FrameInfoSpec = { $: /** @type {!mojo.internal.MojomType} */ ({}) };
/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const WebContentsInfoSpec = { $: /** @type {!mojo.internal.MojomType} */ ({}) };
/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const IsolatedOriginInfoSpec = { $: /** @type {!mojo.internal.MojomType} */ ({}) };
/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const ProcessInternalsHandler_GetIsolationMode_ParamsSpec = { $: /** @type {!mojo.internal.MojomType} */ ({}) };
/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const ProcessInternalsHandler_GetIsolationMode_ResponseParamsSpec = { $: /** @type {!mojo.internal.MojomType} */ ({}) };
/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const ProcessInternalsHandler_GetUserTriggeredIsolatedOrigins_ParamsSpec = { $: /** @type {!mojo.internal.MojomType} */ ({}) };
/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const ProcessInternalsHandler_GetUserTriggeredIsolatedOrigins_ResponseParamsSpec = { $: /** @type {!mojo.internal.MojomType} */ ({}) };
/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const ProcessInternalsHandler_GetWebTriggeredIsolatedOrigins_ParamsSpec = { $: /** @type {!mojo.internal.MojomType} */ ({}) };
/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const ProcessInternalsHandler_GetWebTriggeredIsolatedOrigins_ResponseParamsSpec = { $: /** @type {!mojo.internal.MojomType} */ ({}) };
/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const ProcessInternalsHandler_GetGloballyIsolatedOrigins_ParamsSpec = { $: /** @type {!mojo.internal.MojomType} */ ({}) };
/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const ProcessInternalsHandler_GetGloballyIsolatedOrigins_ResponseParamsSpec = { $: /** @type {!mojo.internal.MojomType} */ ({}) };
/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const ProcessInternalsHandler_GetAllWebContentsInfo_ParamsSpec = { $: /** @type {!mojo.internal.MojomType} */ ({}) };
/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const ProcessInternalsHandler_GetAllWebContentsInfo_ResponseParamsSpec = { $: /** @type {!mojo.internal.MojomType} */ ({}) };
mojo.internal.Struct(SiteInstanceInfoSpec.$, 'SiteInstanceInfo', [
    mojo.internal.StructField('id', 0, 0, mojo.internal.Int32, 0, false /* nullable */, 0),
    mojo.internal.StructField('locked', 4, 0, mojo.internal.Bool, false, false /* nullable */, 0),
    mojo.internal.StructField('siteUrl', 8, 0, url_mojom_UrlSpec.$, null, true /* nullable */, 0),
    mojo.internal.StructField('processLockUrl', 16, 0, url_mojom_UrlSpec.$, null, true /* nullable */, 0),
    mojo.internal.StructField('requiresOriginKeyedProcess', 4, 1, mojo.internal.Bool, false, false /* nullable */, 0),
    mojo.internal.StructField('isSandboxForIframes', 4, 2, mojo.internal.Bool, false, false /* nullable */, 0),
    mojo.internal.StructField('isGuest', 4, 3, mojo.internal.Bool, false, false /* nullable */, 0),
    mojo.internal.StructField('storagePartition', 24, 0, mojo.internal.String, null, true /* nullable */, 0),
], [[0, 40],]);
/**
 * @record
 */
export class SiteInstanceInfo {
    constructor() {
        /** @type { !number } */
        this.id;
        /** @type { !boolean } */
        this.locked;
        /** @type { !boolean } */
        this.requiresOriginKeyedProcess;
        /** @type { !boolean } */
        this.isSandboxForIframes;
        /** @type { !boolean } */
        this.isGuest;
        /** @type { (url_mojom_Url|undefined) } */
        this.siteUrl;
        /** @type { (url_mojom_Url|undefined) } */
        this.processLockUrl;
        /** @type { (string|undefined) } */
        this.storagePartition;
    }
}
/**
 * @const { {$: !mojo.internal.MojomType} }
 */
export const FrameInfo_TypeSpec = { $: mojo.internal.Enum() };
/**
 * @enum {number}
 */
export const FrameInfo_Type = {
    kActive: 0,
    kBackForwardCache: 1,
    kPrerender: 2,
    MIN_VALUE: 0,
    MAX_VALUE: 2,
};
mojo.internal.Struct(FrameInfoSpec.$, 'FrameInfo', [
    mojo.internal.StructField('routingId', 0, 0, mojo.internal.Int32, 0, false /* nullable */, 0),
    mojo.internal.StructField('agentSchedulingGroupId', 4, 0, mojo.internal.Int32, 0, false /* nullable */, 0),
    mojo.internal.StructField('processId', 8, 0, mojo.internal.Int32, 0, false /* nullable */, 0),
    mojo.internal.StructField('siteInstance', 16, 0, SiteInstanceInfoSpec.$, null, false /* nullable */, 0),
    mojo.internal.StructField('lastCommittedUrl', 24, 0, url_mojom_UrlSpec.$, null, true /* nullable */, 0),
    mojo.internal.StructField('subframes', 32, 0, mojo.internal.Array(FrameInfoSpec.$, false), null, false /* nullable */, 0),
    mojo.internal.StructField('type', 12, 0, FrameInfo_TypeSpec.$, 0, false /* nullable */, 0),
], [[0, 48],]);
/**
 * @record
 */
export class FrameInfo {
    constructor() {
        /** @type { !number } */
        this.routingId;
        /** @type { !number } */
        this.agentSchedulingGroupId;
        /** @type { !number } */
        this.processId;
        /** @type { !FrameInfo_Type } */
        this.type;
        /** @type { !SiteInstanceInfo } */
        this.siteInstance;
        /** @type { (url_mojom_Url|undefined) } */
        this.lastCommittedUrl;
        /** @type { !Array<!FrameInfo> } */
        this.subframes;
    }
}
mojo.internal.Struct(WebContentsInfoSpec.$, 'WebContentsInfo', [
    mojo.internal.StructField('title', 0, 0, mojo.internal.String, null, false /* nullable */, 0),
    mojo.internal.StructField('rootFrame', 8, 0, FrameInfoSpec.$, null, false /* nullable */, 0),
    mojo.internal.StructField('bfcachedRootFrames', 16, 0, mojo.internal.Array(FrameInfoSpec.$, false), null, false /* nullable */, 0),
    mojo.internal.StructField('prerenderRootFrames', 24, 0, mojo.internal.Array(FrameInfoSpec.$, false), null, false /* nullable */, 0),
], [[0, 40],]);
/**
 * @record
 */
export class WebContentsInfo {
    constructor() {
        /** @type { !string } */
        this.title;
        /** @type { !FrameInfo } */
        this.rootFrame;
        /** @type { !Array<!FrameInfo> } */
        this.bfcachedRootFrames;
        /** @type { !Array<!FrameInfo> } */
        this.prerenderRootFrames;
    }
}
mojo.internal.Struct(IsolatedOriginInfoSpec.$, 'IsolatedOriginInfo', [
    mojo.internal.StructField('origin', 0, 0, mojo.internal.String, null, false /* nullable */, 0),
    mojo.internal.StructField('source', 8, 0, mojo.internal.String, null, false /* nullable */, 0),
], [[0, 24],]);
/**
 * @record
 */
export class IsolatedOriginInfo {
    constructor() {
        /** @type { !string } */
        this.origin;
        /** @type { !string } */
        this.source;
    }
}
mojo.internal.Struct(ProcessInternalsHandler_GetIsolationMode_ParamsSpec.$, 'ProcessInternalsHandler_GetIsolationMode_Params', [], [[0, 8],]);
/**
 * @record
 */
export class ProcessInternalsHandler_GetIsolationMode_Params {
    constructor() {
    }
}
mojo.internal.Struct(ProcessInternalsHandler_GetIsolationMode_ResponseParamsSpec.$, 'ProcessInternalsHandler_GetIsolationMode_ResponseParams', [
    mojo.internal.StructField('mode', 0, 0, mojo.internal.String, null, false /* nullable */, 0),
], [[0, 16],]);
/**
 * @record
 */
export class ProcessInternalsHandler_GetIsolationMode_ResponseParams {
    constructor() {
        /** @type { !string } */
        this.mode;
    }
}
mojo.internal.Struct(ProcessInternalsHandler_GetUserTriggeredIsolatedOrigins_ParamsSpec.$, 'ProcessInternalsHandler_GetUserTriggeredIsolatedOrigins_Params', [], [[0, 8],]);
/**
 * @record
 */
export class ProcessInternalsHandler_GetUserTriggeredIsolatedOrigins_Params {
    constructor() {
    }
}
mojo.internal.Struct(ProcessInternalsHandler_GetUserTriggeredIsolatedOrigins_ResponseParamsSpec.$, 'ProcessInternalsHandler_GetUserTriggeredIsolatedOrigins_ResponseParams', [
    mojo.internal.StructField('isolatedOrigins', 0, 0, mojo.internal.Array(mojo.internal.String, false), null, false /* nullable */, 0),
], [[0, 16],]);
/**
 * @record
 */
export class ProcessInternalsHandler_GetUserTriggeredIsolatedOrigins_ResponseParams {
    constructor() {
        /** @type { !Array<!string> } */
        this.isolatedOrigins;
    }
}
mojo.internal.Struct(ProcessInternalsHandler_GetWebTriggeredIsolatedOrigins_ParamsSpec.$, 'ProcessInternalsHandler_GetWebTriggeredIsolatedOrigins_Params', [], [[0, 8],]);
/**
 * @record
 */
export class ProcessInternalsHandler_GetWebTriggeredIsolatedOrigins_Params {
    constructor() {
    }
}
mojo.internal.Struct(ProcessInternalsHandler_GetWebTriggeredIsolatedOrigins_ResponseParamsSpec.$, 'ProcessInternalsHandler_GetWebTriggeredIsolatedOrigins_ResponseParams', [
    mojo.internal.StructField('isolatedOrigins', 0, 0, mojo.internal.Array(mojo.internal.String, false), null, false /* nullable */, 0),
], [[0, 16],]);
/**
 * @record
 */
export class ProcessInternalsHandler_GetWebTriggeredIsolatedOrigins_ResponseParams {
    constructor() {
        /** @type { !Array<!string> } */
        this.isolatedOrigins;
    }
}
mojo.internal.Struct(ProcessInternalsHandler_GetGloballyIsolatedOrigins_ParamsSpec.$, 'ProcessInternalsHandler_GetGloballyIsolatedOrigins_Params', [], [[0, 8],]);
/**
 * @record
 */
export class ProcessInternalsHandler_GetGloballyIsolatedOrigins_Params {
    constructor() {
    }
}
mojo.internal.Struct(ProcessInternalsHandler_GetGloballyIsolatedOrigins_ResponseParamsSpec.$, 'ProcessInternalsHandler_GetGloballyIsolatedOrigins_ResponseParams', [
    mojo.internal.StructField('isolatedOrigins', 0, 0, mojo.internal.Array(IsolatedOriginInfoSpec.$, false), null, false /* nullable */, 0),
], [[0, 16],]);
/**
 * @record
 */
export class ProcessInternalsHandler_GetGloballyIsolatedOrigins_ResponseParams {
    constructor() {
        /** @type { !Array<!IsolatedOriginInfo> } */
        this.isolatedOrigins;
    }
}
mojo.internal.Struct(ProcessInternalsHandler_GetAllWebContentsInfo_ParamsSpec.$, 'ProcessInternalsHandler_GetAllWebContentsInfo_Params', [], [[0, 8],]);
/**
 * @record
 */
export class ProcessInternalsHandler_GetAllWebContentsInfo_Params {
    constructor() {
    }
}
mojo.internal.Struct(ProcessInternalsHandler_GetAllWebContentsInfo_ResponseParamsSpec.$, 'ProcessInternalsHandler_GetAllWebContentsInfo_ResponseParams', [
    mojo.internal.StructField('infos', 0, 0, mojo.internal.Array(WebContentsInfoSpec.$, false), null, false /* nullable */, 0),
], [[0, 16],]);
/**
 * @record
 */
export class ProcessInternalsHandler_GetAllWebContentsInfo_ResponseParams {
    constructor() {
        /** @type { !Array<!WebContentsInfo> } */
        this.infos;
    }
}
