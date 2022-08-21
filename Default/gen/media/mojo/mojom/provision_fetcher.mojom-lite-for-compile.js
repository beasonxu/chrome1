// media/mojo/mojom/provision_fetcher.mojom-lite-for-compile.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
'use strict';

goog.require('mojo.internal');
goog.require('mojo.internal.interfaceSupport');

goog.require('url.mojom.Url');






goog.provide('media.mojom.ProvisionFetcher');
goog.provide('media.mojom.ProvisionFetcherReceiver');
goog.provide('media.mojom.ProvisionFetcherCallbackRouter');
goog.provide('media.mojom.ProvisionFetcherInterface');
goog.provide('media.mojom.ProvisionFetcherRemote');
goog.provide('media.mojom.ProvisionFetcherPendingReceiver');


/**
 * @implements {mojo.internal.interfaceSupport.PendingReceiver}
 * @export
 */
media.mojom.ProvisionFetcherPendingReceiver = class {
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
        media.mojom.ProvisionFetcher.$interfaceName,
        scope);
  }
};

/** @interface */
media.mojom.ProvisionFetcherInterface = class {
  
  /**
   * @param { !url.mojom.Url } defaultUrl
   * @param { !string } requestData
   * @return {!Promise<{
        result: !boolean,
        response: !string,
   *  }>}
   */

  retrieve(defaultUrl, requestData) {}
};

/**
 * @export
 * @implements { media.mojom.ProvisionFetcherInterface }
 */
media.mojom.ProvisionFetcherRemote = class {
  /** @param {MojoHandle|mojo.internal.interfaceSupport.Endpoint=} handle */
  constructor(handle = undefined) {
    /**
     * @private {!mojo.internal.interfaceSupport.InterfaceRemoteBase<!media.mojom.ProvisionFetcherPendingReceiver>}
     */
    this.proxy =
        new mojo.internal.interfaceSupport.InterfaceRemoteBase(
          media.mojom.ProvisionFetcherPendingReceiver,
          handle);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper<!media.mojom.ProvisionFetcherPendingReceiver>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper(this.proxy);

    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.proxy.getConnectionErrorEventRouter();
  }

  
  /**
   * @param { !url.mojom.Url } defaultUrl
   * @param { !string } requestData
   * @return {!Promise<{
        result: !boolean,
        response: !string,
   *  }>}
   */

  retrieve(
      defaultUrl,
      requestData) {
    return this.proxy.sendMessage(
        0,
        media.mojom.ProvisionFetcher_Retrieve_ParamsSpec.$,
        media.mojom.ProvisionFetcher_Retrieve_ResponseParamsSpec.$,
        [
          defaultUrl,
          requestData
        ]);
  }
};

/**
 * An object which receives request messages for the ProvisionFetcher
 * mojom interface. Must be constructed over an object which implements that
 * interface.
 *
 * @export
 */
media.mojom.ProvisionFetcherReceiver = class {
  /**
   * @param {!media.mojom.ProvisionFetcherInterface } impl
   */
  constructor(impl) {
    /** @private {!mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal<!media.mojom.ProvisionFetcherRemote>} */
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
        media.mojom.ProvisionFetcherRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!media.mojom.ProvisionFetcherRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);


    this.helper_internal_.registerHandler(
        0,
        media.mojom.ProvisionFetcher_Retrieve_ParamsSpec.$,
        media.mojom.ProvisionFetcher_Retrieve_ResponseParamsSpec.$,
        impl.retrieve.bind(impl));
    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.helper_internal_.getConnectionErrorEventRouter();
  }
};

/**
 *  @export
 */
media.mojom.ProvisionFetcher = class {
  /**
   * @return {!string}
   */
  static get $interfaceName() {
    return "media.mojom.ProvisionFetcher";
  }

  /**
   * Returns a remote for this interface which sends messages to the browser.
   * The browser must have an interface request binder registered for this
   * interface and accessible to the calling document's frame.
   *
   * @return {!media.mojom.ProvisionFetcherRemote}
   * @export
   */
  static getRemote() {
    let remote = new media.mojom.ProvisionFetcherRemote;
    remote.$.bindNewPipeAndPassReceiver().bindInBrowser();
    return remote;
  }
};


/**
 * An object which receives request messages for the ProvisionFetcher
 * mojom interface and dispatches them as callbacks. One callback receiver exists
 * on this object for each message defined in the mojom interface, and each
 * receiver can have any number of listeners added to it.
 *
 * @export
 */
media.mojom.ProvisionFetcherCallbackRouter = class {
  constructor() {
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
      media.mojom.ProvisionFetcherRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!media.mojom.ProvisionFetcherRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);

    this.router_ = new mojo.internal.interfaceSupport.CallbackRouter;

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.retrieve =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        0,
        media.mojom.ProvisionFetcher_Retrieve_ParamsSpec.$,
        media.mojom.ProvisionFetcher_Retrieve_ResponseParamsSpec.$,
        this.retrieve.createReceiverHandler(true /* expectsResponse */));
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


goog.provide('media.mojom.ProvisionFetcher_Retrieve_ParamsSpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
media.mojom.ProvisionFetcher_Retrieve_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

goog.provide('media.mojom.ProvisionFetcher_Retrieve_ResponseParamsSpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
media.mojom.ProvisionFetcher_Retrieve_ResponseParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };




mojo.internal.Struct(
    media.mojom.ProvisionFetcher_Retrieve_ParamsSpec.$,
    'ProvisionFetcher_Retrieve_Params',
    [
      mojo.internal.StructField(
        'defaultUrl', 0,
        0,
        url.mojom.UrlSpec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'requestData', 8,
        0,
        mojo.internal.String,
        null,
        false /* nullable */),
    ],
    [[0, 24],]);



goog.provide('media.mojom.ProvisionFetcher_Retrieve_Params');

/** @record */
media.mojom.ProvisionFetcher_Retrieve_Params = class {
  constructor() {
    /** @export { !url.mojom.Url } */
    this.defaultUrl;
    /** @export { !string } */
    this.requestData;
  }
};




mojo.internal.Struct(
    media.mojom.ProvisionFetcher_Retrieve_ResponseParamsSpec.$,
    'ProvisionFetcher_Retrieve_ResponseParams',
    [
      mojo.internal.StructField(
        'result', 0,
        0,
        mojo.internal.Bool,
        false,
        false /* nullable */),
      mojo.internal.StructField(
        'response', 8,
        0,
        mojo.internal.String,
        null,
        false /* nullable */),
    ],
    [[0, 24],]);



goog.provide('media.mojom.ProvisionFetcher_Retrieve_ResponseParams');

/** @record */
media.mojom.ProvisionFetcher_Retrieve_ResponseParams = class {
  constructor() {
    /** @export { !boolean } */
    this.result;
    /** @export { !string } */
    this.response;
  }
};


