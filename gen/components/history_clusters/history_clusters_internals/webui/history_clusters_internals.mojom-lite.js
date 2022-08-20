// components/history_clusters/history_clusters_internals/webui/history_clusters_internals.mojom-lite.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
'use strict';


mojo.internal.exportModule('historyClustersInternals.mojom');








/**
 * @implements {mojo.internal.interfaceSupport.PendingReceiver}
 * @export
 */
historyClustersInternals.mojom.PageHandlerFactoryPendingReceiver = class {
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
        historyClustersInternals.mojom.PageHandlerFactory.$interfaceName,
        scope);
  }
};



/**
 * @export
 * @implements { historyClustersInternals.mojom.PageHandlerFactoryInterface }
 */
historyClustersInternals.mojom.PageHandlerFactoryRemote = class {
  /** @param {MojoHandle|mojo.internal.interfaceSupport.Endpoint=} handle */
  constructor(handle = undefined) {
    /**
     * @private {!mojo.internal.interfaceSupport.InterfaceRemoteBase<!historyClustersInternals.mojom.PageHandlerFactoryPendingReceiver>}
     */
    this.proxy =
        new mojo.internal.interfaceSupport.InterfaceRemoteBase(
          historyClustersInternals.mojom.PageHandlerFactoryPendingReceiver,
          handle);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper<!historyClustersInternals.mojom.PageHandlerFactoryPendingReceiver>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper(this.proxy);

    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.proxy.getConnectionErrorEventRouter();
  }

  
  /**
   * @param { !historyClustersInternals.mojom.PageRemote } page
   */

  createPageHandler(
      page) {
    this.proxy.sendMessage(
        0,
        historyClustersInternals.mojom.PageHandlerFactory_CreatePageHandler_ParamsSpec.$,
        null,
        [
          page
        ]);
  }
};

/**
 * An object which receives request messages for the PageHandlerFactory
 * mojom interface. Must be constructed over an object which implements that
 * interface.
 *
 * @export
 */
historyClustersInternals.mojom.PageHandlerFactoryReceiver = class {
  /**
   * @param {!historyClustersInternals.mojom.PageHandlerFactoryInterface } impl
   */
  constructor(impl) {
    /** @private {!mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal<!historyClustersInternals.mojom.PageHandlerFactoryRemote>} */
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
        historyClustersInternals.mojom.PageHandlerFactoryRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!historyClustersInternals.mojom.PageHandlerFactoryRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);


    this.helper_internal_.registerHandler(
        0,
        historyClustersInternals.mojom.PageHandlerFactory_CreatePageHandler_ParamsSpec.$,
        null,
        impl.createPageHandler.bind(impl));
    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.helper_internal_.getConnectionErrorEventRouter();
  }
};

/**
 *  @export
 */
historyClustersInternals.mojom.PageHandlerFactory = class {
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
   * @return {!historyClustersInternals.mojom.PageHandlerFactoryRemote}
   * @export
   */
  static getRemote() {
    let remote = new historyClustersInternals.mojom.PageHandlerFactoryRemote;
    remote.$.bindNewPipeAndPassReceiver().bindInBrowser();
    return remote;
  }
};


/**
 * An object which receives request messages for the PageHandlerFactory
 * mojom interface and dispatches them as callbacks. One callback receiver exists
 * on this object for each message defined in the mojom interface, and each
 * receiver can have any number of listeners added to it.
 *
 * @export
 */
historyClustersInternals.mojom.PageHandlerFactoryCallbackRouter = class {
  constructor() {
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
      historyClustersInternals.mojom.PageHandlerFactoryRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!historyClustersInternals.mojom.PageHandlerFactoryRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);

    this.router_ = new mojo.internal.interfaceSupport.CallbackRouter;

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.createPageHandler =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        0,
        historyClustersInternals.mojom.PageHandlerFactory_CreatePageHandler_ParamsSpec.$,
        null,
        this.createPageHandler.createReceiverHandler(false /* expectsResponse */));
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
 * @implements {mojo.internal.interfaceSupport.PendingReceiver}
 * @export
 */
historyClustersInternals.mojom.PagePendingReceiver = class {
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
        historyClustersInternals.mojom.Page.$interfaceName,
        scope);
  }
};



/**
 * @export
 * @implements { historyClustersInternals.mojom.PageInterface }
 */
historyClustersInternals.mojom.PageRemote = class {
  /** @param {MojoHandle|mojo.internal.interfaceSupport.Endpoint=} handle */
  constructor(handle = undefined) {
    /**
     * @private {!mojo.internal.interfaceSupport.InterfaceRemoteBase<!historyClustersInternals.mojom.PagePendingReceiver>}
     */
    this.proxy =
        new mojo.internal.interfaceSupport.InterfaceRemoteBase(
          historyClustersInternals.mojom.PagePendingReceiver,
          handle);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper<!historyClustersInternals.mojom.PagePendingReceiver>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper(this.proxy);

    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.proxy.getConnectionErrorEventRouter();
  }

  
  /**
   * @param { !string } message
   */

  onLogMessageAdded(
      message) {
    this.proxy.sendMessage(
        0,
        historyClustersInternals.mojom.Page_OnLogMessageAdded_ParamsSpec.$,
        null,
        [
          message
        ]);
  }
};

/**
 * An object which receives request messages for the Page
 * mojom interface. Must be constructed over an object which implements that
 * interface.
 *
 * @export
 */
historyClustersInternals.mojom.PageReceiver = class {
  /**
   * @param {!historyClustersInternals.mojom.PageInterface } impl
   */
  constructor(impl) {
    /** @private {!mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal<!historyClustersInternals.mojom.PageRemote>} */
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
        historyClustersInternals.mojom.PageRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!historyClustersInternals.mojom.PageRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);


    this.helper_internal_.registerHandler(
        0,
        historyClustersInternals.mojom.Page_OnLogMessageAdded_ParamsSpec.$,
        null,
        impl.onLogMessageAdded.bind(impl));
    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.helper_internal_.getConnectionErrorEventRouter();
  }
};

/**
 *  @export
 */
historyClustersInternals.mojom.Page = class {
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
   * @return {!historyClustersInternals.mojom.PageRemote}
   * @export
   */
  static getRemote() {
    let remote = new historyClustersInternals.mojom.PageRemote;
    remote.$.bindNewPipeAndPassReceiver().bindInBrowser();
    return remote;
  }
};


/**
 * An object which receives request messages for the Page
 * mojom interface and dispatches them as callbacks. One callback receiver exists
 * on this object for each message defined in the mojom interface, and each
 * receiver can have any number of listeners added to it.
 *
 * @export
 */
historyClustersInternals.mojom.PageCallbackRouter = class {
  constructor() {
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
      historyClustersInternals.mojom.PageRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!historyClustersInternals.mojom.PageRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);

    this.router_ = new mojo.internal.interfaceSupport.CallbackRouter;

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.onLogMessageAdded =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        0,
        historyClustersInternals.mojom.Page_OnLogMessageAdded_ParamsSpec.$,
        null,
        this.onLogMessageAdded.createReceiverHandler(false /* expectsResponse */));
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
historyClustersInternals.mojom.PageHandlerFactory_CreatePageHandler_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
historyClustersInternals.mojom.Page_OnLogMessageAdded_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };




mojo.internal.Struct(
    historyClustersInternals.mojom.PageHandlerFactory_CreatePageHandler_ParamsSpec.$,
    'PageHandlerFactory_CreatePageHandler_Params',
    [
      mojo.internal.StructField(
        'page', 0,
        0,
        mojo.internal.InterfaceProxy(historyClustersInternals.mojom.PageRemote),
        null,
        false /* nullable */),
    ],
    [[0, 16],]);





/** @record */
historyClustersInternals.mojom.PageHandlerFactory_CreatePageHandler_Params = class {
  constructor() {
    /** @export { !historyClustersInternals.mojom.PageRemote } */
    this.page;
  }
};




mojo.internal.Struct(
    historyClustersInternals.mojom.Page_OnLogMessageAdded_ParamsSpec.$,
    'Page_OnLogMessageAdded_Params',
    [
      mojo.internal.StructField(
        'message', 0,
        0,
        mojo.internal.String,
        null,
        false /* nullable */),
    ],
    [[0, 16],]);





/** @record */
historyClustersInternals.mojom.Page_OnLogMessageAdded_Params = class {
  constructor() {
    /** @export { !string } */
    this.message;
  }
};


