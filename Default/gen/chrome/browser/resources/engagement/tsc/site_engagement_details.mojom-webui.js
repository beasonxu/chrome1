// mojom-webui/components/site_engagement/core/mojom/site_engagement_details.mojom-webui.js is auto generated by mojom_bindings_generator.py, do not edit
// Copyright 2020 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
import { mojo } from '//resources/mojo/mojo/public/js/bindings.js';
import { UrlSpec as url_mojom_UrlSpec } from 'chrome://resources/mojo/url/mojom/url.mojom-webui.js';
/**
 * @implements {mojo.internal.interfaceSupport.PendingReceiver}
 */
export class SiteEngagementDetailsProviderPendingReceiver {
    /**
     * @param {!MojoHandle|!mojo.internal.interfaceSupport.Endpoint} handle
     */
    constructor(handle) {
        /** @public {!mojo.internal.interfaceSupport.Endpoint} */
        this.handle = mojo.internal.interfaceSupport.getEndpointForReceiver(handle);
    }
    /** @param {string=} scope */
    bindInBrowser(scope = 'context') {
        mojo.internal.interfaceSupport.bind(this.handle, 'site_engagement.mojom.SiteEngagementDetailsProvider', scope);
    }
}
/** @interface */
export class SiteEngagementDetailsProviderInterface {
    /**
     * @return {!Promise<{
          info: !Array<!SiteEngagementDetails>,
     *  }>}
     */
    getSiteEngagementDetails() { }
    /**
     * @param { !url_mojom_Url } url
     * @param { !number } score
     */
    setSiteEngagementBaseScoreForUrl(url, score) { }
}
/**
 * @implements { SiteEngagementDetailsProviderInterface }
 */
export class SiteEngagementDetailsProviderRemote {
    /** @param {MojoHandle|mojo.internal.interfaceSupport.Endpoint=} handle */
    constructor(handle = undefined) {
        /**
         * @private {!mojo.internal.interfaceSupport.InterfaceRemoteBase<!SiteEngagementDetailsProviderPendingReceiver>}
         */
        this.proxy =
            new mojo.internal.interfaceSupport.InterfaceRemoteBase(SiteEngagementDetailsProviderPendingReceiver, handle);
        /**
         * @public {!mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper<!SiteEngagementDetailsProviderPendingReceiver>}
         */
        this.$ = new mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper(this.proxy);
        /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
        this.onConnectionError = this.proxy.getConnectionErrorEventRouter();
    }
    /**
     * @return {!Promise<{
          info: !Array<!SiteEngagementDetails>,
     *  }>}
     */
    getSiteEngagementDetails() {
        return this.proxy.sendMessage(0, SiteEngagementDetailsProvider_GetSiteEngagementDetails_ParamsSpec.$, SiteEngagementDetailsProvider_GetSiteEngagementDetails_ResponseParamsSpec.$, []);
    }
    /**
     * @param { !url_mojom_Url } url
     * @param { !number } score
     */
    setSiteEngagementBaseScoreForUrl(url, score) {
        this.proxy.sendMessage(1, SiteEngagementDetailsProvider_SetSiteEngagementBaseScoreForUrl_ParamsSpec.$, null, [
            url,
            score
        ]);
    }
}
/**
 * An object which receives request messages for the SiteEngagementDetailsProvider
 * mojom interface. Must be constructed over an object which implements that
 * interface.
 */
export class SiteEngagementDetailsProviderReceiver {
    /**
     * @param {!SiteEngagementDetailsProviderInterface } impl
     */
    constructor(impl) {
        /** @private {!mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal<!SiteEngagementDetailsProviderRemote>} */
        this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(SiteEngagementDetailsProviderRemote);
        /**
         * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!SiteEngagementDetailsProviderRemote>}
         */
        this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);
        this.helper_internal_.registerHandler(0, SiteEngagementDetailsProvider_GetSiteEngagementDetails_ParamsSpec.$, SiteEngagementDetailsProvider_GetSiteEngagementDetails_ResponseParamsSpec.$, impl.getSiteEngagementDetails.bind(impl));
        this.helper_internal_.registerHandler(1, SiteEngagementDetailsProvider_SetSiteEngagementBaseScoreForUrl_ParamsSpec.$, null, impl.setSiteEngagementBaseScoreForUrl.bind(impl));
        /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
        this.onConnectionError = this.helper_internal_.getConnectionErrorEventRouter();
    }
}
export class SiteEngagementDetailsProvider {
    /**
     * @return {!string}
     */
    static get $interfaceName() {
        return "site_engagement.mojom.SiteEngagementDetailsProvider";
    }
    /**
     * Returns a remote for this interface which sends messages to the browser.
     * The browser must have an interface request binder registered for this
     * interface and accessible to the calling document's frame.
     *
     * @return {!SiteEngagementDetailsProviderRemote}
     */
    static getRemote() {
        let remote = new SiteEngagementDetailsProviderRemote;
        remote.$.bindNewPipeAndPassReceiver().bindInBrowser();
        return remote;
    }
}
/**
 * An object which receives request messages for the SiteEngagementDetailsProvider
 * mojom interface and dispatches them as callbacks. One callback receiver exists
 * on this object for each message defined in the mojom interface, and each
 * receiver can have any number of listeners added to it.
 */
export class SiteEngagementDetailsProviderCallbackRouter {
    constructor() {
        this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(SiteEngagementDetailsProviderRemote);
        /**
         * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!SiteEngagementDetailsProviderRemote>}
         */
        this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);
        this.router_ = new mojo.internal.interfaceSupport.CallbackRouter;
        /**
         * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
         */
        this.getSiteEngagementDetails =
            new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(this.router_);
        this.helper_internal_.registerHandler(0, SiteEngagementDetailsProvider_GetSiteEngagementDetails_ParamsSpec.$, SiteEngagementDetailsProvider_GetSiteEngagementDetails_ResponseParamsSpec.$, this.getSiteEngagementDetails.createReceiverHandler(true /* expectsResponse */));
        /**
         * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
         */
        this.setSiteEngagementBaseScoreForUrl =
            new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(this.router_);
        this.helper_internal_.registerHandler(1, SiteEngagementDetailsProvider_SetSiteEngagementBaseScoreForUrl_ParamsSpec.$, null, this.setSiteEngagementBaseScoreForUrl.createReceiverHandler(false /* expectsResponse */));
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
export const SiteEngagementDetailsSpec = { $: /** @type {!mojo.internal.MojomType} */ ({}) };
/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const SiteEngagementDetailsProvider_GetSiteEngagementDetails_ParamsSpec = { $: /** @type {!mojo.internal.MojomType} */ ({}) };
/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const SiteEngagementDetailsProvider_GetSiteEngagementDetails_ResponseParamsSpec = { $: /** @type {!mojo.internal.MojomType} */ ({}) };
/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const SiteEngagementDetailsProvider_SetSiteEngagementBaseScoreForUrl_ParamsSpec = { $: /** @type {!mojo.internal.MojomType} */ ({}) };
mojo.internal.Struct(SiteEngagementDetailsSpec.$, 'SiteEngagementDetails', [
    mojo.internal.StructField('origin', 0, 0, url_mojom_UrlSpec.$, null, false /* nullable */, 0),
    mojo.internal.StructField('totalScore', 8, 0, mojo.internal.Double, 0, false /* nullable */, 0),
    mojo.internal.StructField('baseScore', 16, 0, mojo.internal.Double, 0, false /* nullable */, 0),
    mojo.internal.StructField('installedBonus', 24, 0, mojo.internal.Double, 0, false /* nullable */, 0),
], [[0, 40],]);
/**
 * @record
 */
export class SiteEngagementDetails {
    constructor() {
        /** @type { !url_mojom_Url } */
        this.origin;
        /** @type { !number } */
        this.totalScore;
        /** @type { !number } */
        this.baseScore;
        /** @type { !number } */
        this.installedBonus;
    }
}
mojo.internal.Struct(SiteEngagementDetailsProvider_GetSiteEngagementDetails_ParamsSpec.$, 'SiteEngagementDetailsProvider_GetSiteEngagementDetails_Params', [], [[0, 8],]);
/**
 * @record
 */
export class SiteEngagementDetailsProvider_GetSiteEngagementDetails_Params {
    constructor() {
    }
}
mojo.internal.Struct(SiteEngagementDetailsProvider_GetSiteEngagementDetails_ResponseParamsSpec.$, 'SiteEngagementDetailsProvider_GetSiteEngagementDetails_ResponseParams', [
    mojo.internal.StructField('info', 0, 0, mojo.internal.Array(SiteEngagementDetailsSpec.$, false), null, false /* nullable */, 0),
], [[0, 16],]);
/**
 * @record
 */
export class SiteEngagementDetailsProvider_GetSiteEngagementDetails_ResponseParams {
    constructor() {
        /** @type { !Array<!SiteEngagementDetails> } */
        this.info;
    }
}
mojo.internal.Struct(SiteEngagementDetailsProvider_SetSiteEngagementBaseScoreForUrl_ParamsSpec.$, 'SiteEngagementDetailsProvider_SetSiteEngagementBaseScoreForUrl_Params', [
    mojo.internal.StructField('url', 0, 0, url_mojom_UrlSpec.$, null, false /* nullable */, 0),
    mojo.internal.StructField('score', 8, 0, mojo.internal.Double, 0, false /* nullable */, 0),
], [[0, 24],]);
/**
 * @record
 */
export class SiteEngagementDetailsProvider_SetSiteEngagementBaseScoreForUrl_Params {
    constructor() {
        /** @type { !url_mojom_Url } */
        this.url;
        /** @type { !number } */
        this.score;
    }
}
