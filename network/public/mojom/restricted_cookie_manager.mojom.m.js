// services/network/public/mojom/restricted_cookie_manager.mojom.m.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2020 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

import {mojo} from '../../../../mojo/public/js/bindings.js';

import {
  Origin as url_mojom_Origin,
  OriginSpec as url_mojom_OriginSpec
} from '../../../../url/mojom/origin.mojom.m.js';

import {
  Url as url_mojom_Url,
  UrlSpec as url_mojom_UrlSpec
} from '../../../../url/mojom/url.mojom.m.js';

import {
  CookieChangeListenerRemote as network_mojom_CookieChangeListenerRemote,
  CookieChangeListenerPendingReceiver as network_mojom_CookieChangeListenerPendingReceiver,
  CanonicalCookie as network_mojom_CanonicalCookie,
  CanonicalCookieSpec as network_mojom_CanonicalCookieSpec,
  CookieInclusionStatus as network_mojom_CookieInclusionStatus,
  CookieInclusionStatusSpec as network_mojom_CookieInclusionStatusSpec,
  CookieWithAccessResult as network_mojom_CookieWithAccessResult,
  CookieWithAccessResultSpec as network_mojom_CookieWithAccessResultSpec
} from './cookie_manager.mojom.m.js';

import {
  SiteForCookies as network_mojom_SiteForCookies,
  SiteForCookiesSpec as network_mojom_SiteForCookiesSpec
} from './site_for_cookies.mojom.m.js';


/**
 * @const { {$: !mojo.internal.MojomType} }
 */
export const CookieMatchTypeSpec = { $: mojo.internal.Enum() };

/**
 * @enum {number}
 */
export const CookieMatchType = {
  
  EQUALS: 0,
  STARTS_WITH: 1,
  MIN_VALUE: 0,
  MAX_VALUE: 1,
};

/**
 * @const { {$: !mojo.internal.MojomType} }
 */
export const RestrictedCookieManagerRoleSpec = { $: mojo.internal.Enum() };

/**
 * @enum {number}
 */
export const RestrictedCookieManagerRole = {
  
  SCRIPT: 0,
  NETWORK: 1,
  MIN_VALUE: 0,
  MAX_VALUE: 1,
};



/**
 * @implements {mojo.internal.interfaceSupport.PendingReceiver}
 */
export class RestrictedCookieManagerPendingReceiver {
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
        this.handle, 'network.mojom.RestrictedCookieManager', scope);
  }
}

/** @interface */
export class RestrictedCookieManagerInterface {
  
  /**
   * @param { !url_mojom_Url } url
   * @param { !network_mojom_SiteForCookies } siteForCookies
   * @param { !url_mojom_Origin } topFrameOrigin
   * @param { !CookieManagerGetOptions } options
   * @param { !boolean } partitionedCookiesRuntimeFeatureEnabled
   * @return {!Promise<{
        cookies: !Array<!network_mojom_CookieWithAccessResult>,
   *  }>}
   */

  getAllForUrl(url, siteForCookies, topFrameOrigin, options, partitionedCookiesRuntimeFeatureEnabled) {}
  
  /**
   * @param { !network_mojom_CanonicalCookie } cookie
   * @param { !url_mojom_Url } url
   * @param { !network_mojom_SiteForCookies } siteForCookies
   * @param { !url_mojom_Origin } topFrameOrigin
   * @param { !network_mojom_CookieInclusionStatus } status
   * @return {!Promise<{
        success: !boolean,
   *  }>}
   */

  setCanonicalCookie(cookie, url, siteForCookies, topFrameOrigin, status) {}
  
  /**
   * @param { !url_mojom_Url } url
   * @param { !network_mojom_SiteForCookies } siteForCookies
   * @param { !url_mojom_Origin } topFrameOrigin
   * @param { !network_mojom_CookieChangeListenerRemote } listener
   * @return {!Promise}
   */

  addChangeListener(url, siteForCookies, topFrameOrigin, listener) {}
  
  /**
   * @param { !url_mojom_Url } url
   * @param { !network_mojom_SiteForCookies } siteForCookies
   * @param { !url_mojom_Origin } topFrameOrigin
   * @param { !string } cookie
   * @param { !boolean } partitionedCookiesRuntimeFeatureEnabled
   * @return {!Promise<{
        siteForCookiesOk: !boolean,
        topFrameOriginOk: !boolean,
   *  }>}
   */

  setCookieFromString(url, siteForCookies, topFrameOrigin, cookie, partitionedCookiesRuntimeFeatureEnabled) {}
  
  /**
   * @param { !url_mojom_Url } url
   * @param { !network_mojom_SiteForCookies } siteForCookies
   * @param { !url_mojom_Origin } topFrameOrigin
   * @param { !boolean } partitionedCookiesRuntimeFeatureEnabled
   * @return {!Promise<{
        cookies: !string,
   *  }>}
   */

  getCookiesString(url, siteForCookies, topFrameOrigin, partitionedCookiesRuntimeFeatureEnabled) {}
  
  /**
   * @param { !url_mojom_Url } url
   * @param { !network_mojom_SiteForCookies } siteForCookies
   * @param { !url_mojom_Origin } topFrameOrigin
   * @return {!Promise<{
        cookiesEnabled: !boolean,
   *  }>}
   */

  cookiesEnabledFor(url, siteForCookies, topFrameOrigin) {}
  
  /**
   * @param { !url_mojom_Url } url
   */

  convertPartitionedCookiesToUnpartitioned(url) {}
}

/**
 * @implements { RestrictedCookieManagerInterface }
 */
export class RestrictedCookieManagerRemote {
  /** @param {MojoHandle|mojo.internal.interfaceSupport.Endpoint=} handle */
  constructor(handle = undefined) {
    /**
     * @private {!mojo.internal.interfaceSupport.InterfaceRemoteBase<!RestrictedCookieManagerPendingReceiver>}
     */
    this.proxy =
        new mojo.internal.interfaceSupport.InterfaceRemoteBase(
          RestrictedCookieManagerPendingReceiver,
          handle);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper<!RestrictedCookieManagerPendingReceiver>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper(this.proxy);

    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.proxy.getConnectionErrorEventRouter();
  }

  
  /**
   * @param { !url_mojom_Url } url
   * @param { !network_mojom_SiteForCookies } siteForCookies
   * @param { !url_mojom_Origin } topFrameOrigin
   * @param { !CookieManagerGetOptions } options
   * @param { !boolean } partitionedCookiesRuntimeFeatureEnabled
   * @return {!Promise<{
        cookies: !Array<!network_mojom_CookieWithAccessResult>,
   *  }>}
   */

  getAllForUrl(
      url,
      siteForCookies,
      topFrameOrigin,
      options,
      partitionedCookiesRuntimeFeatureEnabled) {
    return this.proxy.sendMessage(
        0,
        RestrictedCookieManager_GetAllForUrl_ParamsSpec.$,
        RestrictedCookieManager_GetAllForUrl_ResponseParamsSpec.$,
        [
          url,
          siteForCookies,
          topFrameOrigin,
          options,
          partitionedCookiesRuntimeFeatureEnabled
        ]);
  }

  
  /**
   * @param { !network_mojom_CanonicalCookie } cookie
   * @param { !url_mojom_Url } url
   * @param { !network_mojom_SiteForCookies } siteForCookies
   * @param { !url_mojom_Origin } topFrameOrigin
   * @param { !network_mojom_CookieInclusionStatus } status
   * @return {!Promise<{
        success: !boolean,
   *  }>}
   */

  setCanonicalCookie(
      cookie,
      url,
      siteForCookies,
      topFrameOrigin,
      status) {
    return this.proxy.sendMessage(
        1,
        RestrictedCookieManager_SetCanonicalCookie_ParamsSpec.$,
        RestrictedCookieManager_SetCanonicalCookie_ResponseParamsSpec.$,
        [
          cookie,
          url,
          siteForCookies,
          topFrameOrigin,
          status
        ]);
  }

  
  /**
   * @param { !url_mojom_Url } url
   * @param { !network_mojom_SiteForCookies } siteForCookies
   * @param { !url_mojom_Origin } topFrameOrigin
   * @param { !network_mojom_CookieChangeListenerRemote } listener
   * @return {!Promise}
   */

  addChangeListener(
      url,
      siteForCookies,
      topFrameOrigin,
      listener) {
    return this.proxy.sendMessage(
        2,
        RestrictedCookieManager_AddChangeListener_ParamsSpec.$,
        RestrictedCookieManager_AddChangeListener_ResponseParamsSpec.$,
        [
          url,
          siteForCookies,
          topFrameOrigin,
          listener
        ]);
  }

  
  /**
   * @param { !url_mojom_Url } url
   * @param { !network_mojom_SiteForCookies } siteForCookies
   * @param { !url_mojom_Origin } topFrameOrigin
   * @param { !string } cookie
   * @param { !boolean } partitionedCookiesRuntimeFeatureEnabled
   * @return {!Promise<{
        siteForCookiesOk: !boolean,
        topFrameOriginOk: !boolean,
   *  }>}
   */

  setCookieFromString(
      url,
      siteForCookies,
      topFrameOrigin,
      cookie,
      partitionedCookiesRuntimeFeatureEnabled) {
    return this.proxy.sendMessage(
        3,
        RestrictedCookieManager_SetCookieFromString_ParamsSpec.$,
        RestrictedCookieManager_SetCookieFromString_ResponseParamsSpec.$,
        [
          url,
          siteForCookies,
          topFrameOrigin,
          cookie,
          partitionedCookiesRuntimeFeatureEnabled
        ]);
  }

  
  /**
   * @param { !url_mojom_Url } url
   * @param { !network_mojom_SiteForCookies } siteForCookies
   * @param { !url_mojom_Origin } topFrameOrigin
   * @param { !boolean } partitionedCookiesRuntimeFeatureEnabled
   * @return {!Promise<{
        cookies: !string,
   *  }>}
   */

  getCookiesString(
      url,
      siteForCookies,
      topFrameOrigin,
      partitionedCookiesRuntimeFeatureEnabled) {
    return this.proxy.sendMessage(
        4,
        RestrictedCookieManager_GetCookiesString_ParamsSpec.$,
        RestrictedCookieManager_GetCookiesString_ResponseParamsSpec.$,
        [
          url,
          siteForCookies,
          topFrameOrigin,
          partitionedCookiesRuntimeFeatureEnabled
        ]);
  }

  
  /**
   * @param { !url_mojom_Url } url
   * @param { !network_mojom_SiteForCookies } siteForCookies
   * @param { !url_mojom_Origin } topFrameOrigin
   * @return {!Promise<{
        cookiesEnabled: !boolean,
   *  }>}
   */

  cookiesEnabledFor(
      url,
      siteForCookies,
      topFrameOrigin) {
    return this.proxy.sendMessage(
        5,
        RestrictedCookieManager_CookiesEnabledFor_ParamsSpec.$,
        RestrictedCookieManager_CookiesEnabledFor_ResponseParamsSpec.$,
        [
          url,
          siteForCookies,
          topFrameOrigin
        ]);
  }

  
  /**
   * @param { !url_mojom_Url } url
   */

  convertPartitionedCookiesToUnpartitioned(
      url) {
    this.proxy.sendMessage(
        6,
        RestrictedCookieManager_ConvertPartitionedCookiesToUnpartitioned_ParamsSpec.$,
        null,
        [
          url
        ]);
  }
}

/**
 * An object which receives request messages for the RestrictedCookieManager
 * mojom interface. Must be constructed over an object which implements that
 * interface.
 */
export class RestrictedCookieManagerReceiver {
  /**
   * @param {!RestrictedCookieManagerInterface } impl
   */
  constructor(impl) {
    /** @private {!mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal<!RestrictedCookieManagerRemote>} */
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
        RestrictedCookieManagerRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!RestrictedCookieManagerRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);


    this.helper_internal_.registerHandler(
        0,
        RestrictedCookieManager_GetAllForUrl_ParamsSpec.$,
        RestrictedCookieManager_GetAllForUrl_ResponseParamsSpec.$,
        impl.getAllForUrl.bind(impl));
    this.helper_internal_.registerHandler(
        1,
        RestrictedCookieManager_SetCanonicalCookie_ParamsSpec.$,
        RestrictedCookieManager_SetCanonicalCookie_ResponseParamsSpec.$,
        impl.setCanonicalCookie.bind(impl));
    this.helper_internal_.registerHandler(
        2,
        RestrictedCookieManager_AddChangeListener_ParamsSpec.$,
        RestrictedCookieManager_AddChangeListener_ResponseParamsSpec.$,
        impl.addChangeListener.bind(impl));
    this.helper_internal_.registerHandler(
        3,
        RestrictedCookieManager_SetCookieFromString_ParamsSpec.$,
        RestrictedCookieManager_SetCookieFromString_ResponseParamsSpec.$,
        impl.setCookieFromString.bind(impl));
    this.helper_internal_.registerHandler(
        4,
        RestrictedCookieManager_GetCookiesString_ParamsSpec.$,
        RestrictedCookieManager_GetCookiesString_ResponseParamsSpec.$,
        impl.getCookiesString.bind(impl));
    this.helper_internal_.registerHandler(
        5,
        RestrictedCookieManager_CookiesEnabledFor_ParamsSpec.$,
        RestrictedCookieManager_CookiesEnabledFor_ResponseParamsSpec.$,
        impl.cookiesEnabledFor.bind(impl));
    this.helper_internal_.registerHandler(
        6,
        RestrictedCookieManager_ConvertPartitionedCookiesToUnpartitioned_ParamsSpec.$,
        null,
        impl.convertPartitionedCookiesToUnpartitioned.bind(impl));
    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.helper_internal_.getConnectionErrorEventRouter();
  }
}

export class RestrictedCookieManager {
  /**
   * @return {!string}
   */
  static get $interfaceName() {
    return "network.mojom.RestrictedCookieManager";
  }

  /**
   * Returns a remote for this interface which sends messages to the browser.
   * The browser must have an interface request binder registered for this
   * interface and accessible to the calling document's frame.
   *
   * @return {!RestrictedCookieManagerRemote}
   */
  static getRemote() {
    let remote = new RestrictedCookieManagerRemote;
    remote.$.bindNewPipeAndPassReceiver().bindInBrowser();
    return remote;
  }
}


/**
 * An object which receives request messages for the RestrictedCookieManager
 * mojom interface and dispatches them as callbacks. One callback receiver exists
 * on this object for each message defined in the mojom interface, and each
 * receiver can have any number of listeners added to it.
 */
export class RestrictedCookieManagerCallbackRouter {
  constructor() {
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
      RestrictedCookieManagerRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!RestrictedCookieManagerRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);

    this.router_ = new mojo.internal.interfaceSupport.CallbackRouter;

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.getAllForUrl =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        0,
        RestrictedCookieManager_GetAllForUrl_ParamsSpec.$,
        RestrictedCookieManager_GetAllForUrl_ResponseParamsSpec.$,
        this.getAllForUrl.createReceiverHandler(true /* expectsResponse */));
    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.setCanonicalCookie =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        1,
        RestrictedCookieManager_SetCanonicalCookie_ParamsSpec.$,
        RestrictedCookieManager_SetCanonicalCookie_ResponseParamsSpec.$,
        this.setCanonicalCookie.createReceiverHandler(true /* expectsResponse */));
    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.addChangeListener =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        2,
        RestrictedCookieManager_AddChangeListener_ParamsSpec.$,
        RestrictedCookieManager_AddChangeListener_ResponseParamsSpec.$,
        this.addChangeListener.createReceiverHandler(true /* expectsResponse */));
    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.setCookieFromString =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        3,
        RestrictedCookieManager_SetCookieFromString_ParamsSpec.$,
        RestrictedCookieManager_SetCookieFromString_ResponseParamsSpec.$,
        this.setCookieFromString.createReceiverHandler(true /* expectsResponse */));
    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.getCookiesString =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        4,
        RestrictedCookieManager_GetCookiesString_ParamsSpec.$,
        RestrictedCookieManager_GetCookiesString_ResponseParamsSpec.$,
        this.getCookiesString.createReceiverHandler(true /* expectsResponse */));
    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.cookiesEnabledFor =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        5,
        RestrictedCookieManager_CookiesEnabledFor_ParamsSpec.$,
        RestrictedCookieManager_CookiesEnabledFor_ResponseParamsSpec.$,
        this.cookiesEnabledFor.createReceiverHandler(true /* expectsResponse */));
    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.convertPartitionedCookiesToUnpartitioned =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        6,
        RestrictedCookieManager_ConvertPartitionedCookiesToUnpartitioned_ParamsSpec.$,
        null,
        this.convertPartitionedCookiesToUnpartitioned.createReceiverHandler(false /* expectsResponse */));
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
export const CookieManagerGetOptionsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const RestrictedCookieManager_GetAllForUrl_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const RestrictedCookieManager_GetAllForUrl_ResponseParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const RestrictedCookieManager_SetCanonicalCookie_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const RestrictedCookieManager_SetCanonicalCookie_ResponseParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const RestrictedCookieManager_AddChangeListener_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const RestrictedCookieManager_AddChangeListener_ResponseParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const RestrictedCookieManager_SetCookieFromString_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const RestrictedCookieManager_SetCookieFromString_ResponseParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const RestrictedCookieManager_GetCookiesString_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const RestrictedCookieManager_GetCookiesString_ResponseParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const RestrictedCookieManager_CookiesEnabledFor_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const RestrictedCookieManager_CookiesEnabledFor_ResponseParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const RestrictedCookieManager_ConvertPartitionedCookiesToUnpartitioned_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };




mojo.internal.Struct(
    CookieManagerGetOptionsSpec.$,
    'CookieManagerGetOptions',
    [
      mojo.internal.StructField(
        'name', 0,
        0,
        mojo.internal.String,
        null,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'matchType', 8,
        0,
        CookieMatchTypeSpec.$,
        0,
        false /* nullable */,
        0),
    ],
    [[0, 24],]);



/**
 * @record
 */
export class CookieManagerGetOptions {
  constructor() {
    /** @type { !string } */
    this.name;
    /** @type { !CookieMatchType } */
    this.matchType;
  }
}



mojo.internal.Struct(
    RestrictedCookieManager_GetAllForUrl_ParamsSpec.$,
    'RestrictedCookieManager_GetAllForUrl_Params',
    [
      mojo.internal.StructField(
        'url', 0,
        0,
        url_mojom_UrlSpec.$,
        null,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'siteForCookies', 8,
        0,
        network_mojom_SiteForCookiesSpec.$,
        null,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'topFrameOrigin', 16,
        0,
        url_mojom_OriginSpec.$,
        null,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'options', 24,
        0,
        CookieManagerGetOptionsSpec.$,
        null,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'partitionedCookiesRuntimeFeatureEnabled', 32,
        0,
        mojo.internal.Bool,
        false,
        false /* nullable */,
        0),
    ],
    [[0, 48],]);



/**
 * @record
 */
export class RestrictedCookieManager_GetAllForUrl_Params {
  constructor() {
    /** @type { !url_mojom_Url } */
    this.url;
    /** @type { !network_mojom_SiteForCookies } */
    this.siteForCookies;
    /** @type { !url_mojom_Origin } */
    this.topFrameOrigin;
    /** @type { !CookieManagerGetOptions } */
    this.options;
    /** @type { !boolean } */
    this.partitionedCookiesRuntimeFeatureEnabled;
  }
}



mojo.internal.Struct(
    RestrictedCookieManager_GetAllForUrl_ResponseParamsSpec.$,
    'RestrictedCookieManager_GetAllForUrl_ResponseParams',
    [
      mojo.internal.StructField(
        'cookies', 0,
        0,
        mojo.internal.Array(network_mojom_CookieWithAccessResultSpec.$, false),
        null,
        false /* nullable */,
        0),
    ],
    [[0, 16],]);



/**
 * @record
 */
export class RestrictedCookieManager_GetAllForUrl_ResponseParams {
  constructor() {
    /** @type { !Array<!network_mojom_CookieWithAccessResult> } */
    this.cookies;
  }
}



mojo.internal.Struct(
    RestrictedCookieManager_SetCanonicalCookie_ParamsSpec.$,
    'RestrictedCookieManager_SetCanonicalCookie_Params',
    [
      mojo.internal.StructField(
        'cookie', 0,
        0,
        network_mojom_CanonicalCookieSpec.$,
        null,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'url', 8,
        0,
        url_mojom_UrlSpec.$,
        null,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'siteForCookies', 16,
        0,
        network_mojom_SiteForCookiesSpec.$,
        null,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'topFrameOrigin', 24,
        0,
        url_mojom_OriginSpec.$,
        null,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'status', 32,
        0,
        network_mojom_CookieInclusionStatusSpec.$,
        null,
        false /* nullable */,
        0),
    ],
    [[0, 48],]);



/**
 * @record
 */
export class RestrictedCookieManager_SetCanonicalCookie_Params {
  constructor() {
    /** @type { !network_mojom_CanonicalCookie } */
    this.cookie;
    /** @type { !url_mojom_Url } */
    this.url;
    /** @type { !network_mojom_SiteForCookies } */
    this.siteForCookies;
    /** @type { !url_mojom_Origin } */
    this.topFrameOrigin;
    /** @type { !network_mojom_CookieInclusionStatus } */
    this.status;
  }
}



mojo.internal.Struct(
    RestrictedCookieManager_SetCanonicalCookie_ResponseParamsSpec.$,
    'RestrictedCookieManager_SetCanonicalCookie_ResponseParams',
    [
      mojo.internal.StructField(
        'success', 0,
        0,
        mojo.internal.Bool,
        false,
        false /* nullable */,
        0),
    ],
    [[0, 16],]);



/**
 * @record
 */
export class RestrictedCookieManager_SetCanonicalCookie_ResponseParams {
  constructor() {
    /** @type { !boolean } */
    this.success;
  }
}



mojo.internal.Struct(
    RestrictedCookieManager_AddChangeListener_ParamsSpec.$,
    'RestrictedCookieManager_AddChangeListener_Params',
    [
      mojo.internal.StructField(
        'url', 0,
        0,
        url_mojom_UrlSpec.$,
        null,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'siteForCookies', 8,
        0,
        network_mojom_SiteForCookiesSpec.$,
        null,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'topFrameOrigin', 16,
        0,
        url_mojom_OriginSpec.$,
        null,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'listener', 24,
        0,
        mojo.internal.InterfaceProxy(network_mojom_CookieChangeListenerRemote),
        null,
        false /* nullable */,
        0),
    ],
    [[0, 40],]);



/**
 * @record
 */
export class RestrictedCookieManager_AddChangeListener_Params {
  constructor() {
    /** @type { !url_mojom_Url } */
    this.url;
    /** @type { !network_mojom_SiteForCookies } */
    this.siteForCookies;
    /** @type { !url_mojom_Origin } */
    this.topFrameOrigin;
    /** @type { !network_mojom_CookieChangeListenerRemote } */
    this.listener;
  }
}



mojo.internal.Struct(
    RestrictedCookieManager_AddChangeListener_ResponseParamsSpec.$,
    'RestrictedCookieManager_AddChangeListener_ResponseParams',
    [
    ],
    [[0, 8],]);



/**
 * @record
 */
export class RestrictedCookieManager_AddChangeListener_ResponseParams {
  constructor() {
  }
}



mojo.internal.Struct(
    RestrictedCookieManager_SetCookieFromString_ParamsSpec.$,
    'RestrictedCookieManager_SetCookieFromString_Params',
    [
      mojo.internal.StructField(
        'url', 0,
        0,
        url_mojom_UrlSpec.$,
        null,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'siteForCookies', 8,
        0,
        network_mojom_SiteForCookiesSpec.$,
        null,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'topFrameOrigin', 16,
        0,
        url_mojom_OriginSpec.$,
        null,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'cookie', 24,
        0,
        mojo.internal.String,
        null,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'partitionedCookiesRuntimeFeatureEnabled', 32,
        0,
        mojo.internal.Bool,
        false,
        false /* nullable */,
        0),
    ],
    [[0, 48],]);



/**
 * @record
 */
export class RestrictedCookieManager_SetCookieFromString_Params {
  constructor() {
    /** @type { !url_mojom_Url } */
    this.url;
    /** @type { !network_mojom_SiteForCookies } */
    this.siteForCookies;
    /** @type { !url_mojom_Origin } */
    this.topFrameOrigin;
    /** @type { !string } */
    this.cookie;
    /** @type { !boolean } */
    this.partitionedCookiesRuntimeFeatureEnabled;
  }
}



mojo.internal.Struct(
    RestrictedCookieManager_SetCookieFromString_ResponseParamsSpec.$,
    'RestrictedCookieManager_SetCookieFromString_ResponseParams',
    [
      mojo.internal.StructField(
        'siteForCookiesOk', 0,
        0,
        mojo.internal.Bool,
        false,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'topFrameOriginOk', 0,
        1,
        mojo.internal.Bool,
        false,
        false /* nullable */,
        0),
    ],
    [[0, 16],]);



/**
 * @record
 */
export class RestrictedCookieManager_SetCookieFromString_ResponseParams {
  constructor() {
    /** @type { !boolean } */
    this.siteForCookiesOk;
    /** @type { !boolean } */
    this.topFrameOriginOk;
  }
}



mojo.internal.Struct(
    RestrictedCookieManager_GetCookiesString_ParamsSpec.$,
    'RestrictedCookieManager_GetCookiesString_Params',
    [
      mojo.internal.StructField(
        'url', 0,
        0,
        url_mojom_UrlSpec.$,
        null,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'siteForCookies', 8,
        0,
        network_mojom_SiteForCookiesSpec.$,
        null,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'topFrameOrigin', 16,
        0,
        url_mojom_OriginSpec.$,
        null,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'partitionedCookiesRuntimeFeatureEnabled', 24,
        0,
        mojo.internal.Bool,
        false,
        false /* nullable */,
        0),
    ],
    [[0, 40],]);



/**
 * @record
 */
export class RestrictedCookieManager_GetCookiesString_Params {
  constructor() {
    /** @type { !url_mojom_Url } */
    this.url;
    /** @type { !network_mojom_SiteForCookies } */
    this.siteForCookies;
    /** @type { !url_mojom_Origin } */
    this.topFrameOrigin;
    /** @type { !boolean } */
    this.partitionedCookiesRuntimeFeatureEnabled;
  }
}



mojo.internal.Struct(
    RestrictedCookieManager_GetCookiesString_ResponseParamsSpec.$,
    'RestrictedCookieManager_GetCookiesString_ResponseParams',
    [
      mojo.internal.StructField(
        'cookies', 0,
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
export class RestrictedCookieManager_GetCookiesString_ResponseParams {
  constructor() {
    /** @type { !string } */
    this.cookies;
  }
}



mojo.internal.Struct(
    RestrictedCookieManager_CookiesEnabledFor_ParamsSpec.$,
    'RestrictedCookieManager_CookiesEnabledFor_Params',
    [
      mojo.internal.StructField(
        'url', 0,
        0,
        url_mojom_UrlSpec.$,
        null,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'siteForCookies', 8,
        0,
        network_mojom_SiteForCookiesSpec.$,
        null,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'topFrameOrigin', 16,
        0,
        url_mojom_OriginSpec.$,
        null,
        false /* nullable */,
        0),
    ],
    [[0, 32],]);



/**
 * @record
 */
export class RestrictedCookieManager_CookiesEnabledFor_Params {
  constructor() {
    /** @type { !url_mojom_Url } */
    this.url;
    /** @type { !network_mojom_SiteForCookies } */
    this.siteForCookies;
    /** @type { !url_mojom_Origin } */
    this.topFrameOrigin;
  }
}



mojo.internal.Struct(
    RestrictedCookieManager_CookiesEnabledFor_ResponseParamsSpec.$,
    'RestrictedCookieManager_CookiesEnabledFor_ResponseParams',
    [
      mojo.internal.StructField(
        'cookiesEnabled', 0,
        0,
        mojo.internal.Bool,
        false,
        false /* nullable */,
        0),
    ],
    [[0, 16],]);



/**
 * @record
 */
export class RestrictedCookieManager_CookiesEnabledFor_ResponseParams {
  constructor() {
    /** @type { !boolean } */
    this.cookiesEnabled;
  }
}



mojo.internal.Struct(
    RestrictedCookieManager_ConvertPartitionedCookiesToUnpartitioned_ParamsSpec.$,
    'RestrictedCookieManager_ConvertPartitionedCookiesToUnpartitioned_Params',
    [
      mojo.internal.StructField(
        'url', 0,
        0,
        url_mojom_UrlSpec.$,
        null,
        false /* nullable */,
        0),
    ],
    [[0, 16],]);



/**
 * @record
 */
export class RestrictedCookieManager_ConvertPartitionedCookiesToUnpartitioned_Params {
  constructor() {
    /** @type { !url_mojom_Url } */
    this.url;
  }
}

