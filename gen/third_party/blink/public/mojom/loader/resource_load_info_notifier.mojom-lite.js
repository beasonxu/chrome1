// third_party/blink/public/mojom/loader/resource_load_info_notifier.mojom-lite.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
'use strict';


mojo.internal.exportModule('blink.mojom');








/**
 * @implements {mojo.internal.interfaceSupport.PendingReceiver}
 * @export
 */
blink.mojom.ResourceLoadInfoNotifierPendingReceiver = class {
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
        blink.mojom.ResourceLoadInfoNotifier.$interfaceName,
        scope);
  }
};



/**
 * @export
 * @implements { blink.mojom.ResourceLoadInfoNotifierInterface }
 */
blink.mojom.ResourceLoadInfoNotifierRemote = class {
  /** @param {MojoHandle|mojo.internal.interfaceSupport.Endpoint=} handle */
  constructor(handle = undefined) {
    /**
     * @private {!mojo.internal.interfaceSupport.InterfaceRemoteBase<!blink.mojom.ResourceLoadInfoNotifierPendingReceiver>}
     */
    this.proxy =
        new mojo.internal.interfaceSupport.InterfaceRemoteBase(
          blink.mojom.ResourceLoadInfoNotifierPendingReceiver,
          handle);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper<!blink.mojom.ResourceLoadInfoNotifierPendingReceiver>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper(this.proxy);

    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.proxy.getConnectionErrorEventRouter();
  }

  
  /**
   */

  notifyUpdateUserGestureCarryoverInfo() {
    this.proxy.sendMessage(
        0,
        blink.mojom.ResourceLoadInfoNotifier_NotifyUpdateUserGestureCarryoverInfo_ParamsSpec.$,
        null,
        [
        ]);
  }

  
  /**
   * @param { !network.mojom.URLRequestRedirectInfo } redirectInfo
   * @param { !network.mojom.URLResponseHead } redirectResponse
   */

  notifyResourceRedirectReceived(
      redirectInfo,
      redirectResponse) {
    this.proxy.sendMessage(
        1,
        blink.mojom.ResourceLoadInfoNotifier_NotifyResourceRedirectReceived_ParamsSpec.$,
        null,
        [
          redirectInfo,
          redirectResponse
        ]);
  }

  
  /**
   * @param { !bigint } requestId
   * @param { !url.mojom.SchemeHostPort } finalResponseUrl
   * @param { !network.mojom.URLResponseHead } head
   * @param { !network.mojom.RequestDestination } requestDestination
   */

  notifyResourceResponseReceived(
      requestId,
      finalResponseUrl,
      head,
      requestDestination) {
    this.proxy.sendMessage(
        2,
        blink.mojom.ResourceLoadInfoNotifier_NotifyResourceResponseReceived_ParamsSpec.$,
        null,
        [
          requestId,
          finalResponseUrl,
          head,
          requestDestination
        ]);
  }

  
  /**
   * @param { !bigint } requestId
   * @param { !number } transferSizeDiff
   */

  notifyResourceTransferSizeUpdated(
      requestId,
      transferSizeDiff) {
    this.proxy.sendMessage(
        3,
        blink.mojom.ResourceLoadInfoNotifier_NotifyResourceTransferSizeUpdated_ParamsSpec.$,
        null,
        [
          requestId,
          transferSizeDiff
        ]);
  }

  
  /**
   * @param { !blink.mojom.ResourceLoadInfo } resourceLoadInfo
   * @param { !network.mojom.URLLoaderCompletionStatus } status
   */

  notifyResourceLoadCompleted(
      resourceLoadInfo,
      status) {
    this.proxy.sendMessage(
        4,
        blink.mojom.ResourceLoadInfoNotifier_NotifyResourceLoadCompleted_ParamsSpec.$,
        null,
        [
          resourceLoadInfo,
          status
        ]);
  }

  
  /**
   * @param { !bigint } requestId
   */

  notifyResourceLoadCanceled(
      requestId) {
    this.proxy.sendMessage(
        5,
        blink.mojom.ResourceLoadInfoNotifier_NotifyResourceLoadCanceled_ParamsSpec.$,
        null,
        [
          requestId
        ]);
  }

  
  /**
   * @param { !blink.mojom.ResourceLoadInfoNotifierPendingReceiver } pendingResourceLoadInfoNotifier
   */

  clone(
      pendingResourceLoadInfoNotifier) {
    this.proxy.sendMessage(
        6,
        blink.mojom.ResourceLoadInfoNotifier_Clone_ParamsSpec.$,
        null,
        [
          pendingResourceLoadInfoNotifier
        ]);
  }
};

/**
 * An object which receives request messages for the ResourceLoadInfoNotifier
 * mojom interface. Must be constructed over an object which implements that
 * interface.
 *
 * @export
 */
blink.mojom.ResourceLoadInfoNotifierReceiver = class {
  /**
   * @param {!blink.mojom.ResourceLoadInfoNotifierInterface } impl
   */
  constructor(impl) {
    /** @private {!mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal<!blink.mojom.ResourceLoadInfoNotifierRemote>} */
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
        blink.mojom.ResourceLoadInfoNotifierRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!blink.mojom.ResourceLoadInfoNotifierRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);


    this.helper_internal_.registerHandler(
        0,
        blink.mojom.ResourceLoadInfoNotifier_NotifyUpdateUserGestureCarryoverInfo_ParamsSpec.$,
        null,
        impl.notifyUpdateUserGestureCarryoverInfo.bind(impl));
    this.helper_internal_.registerHandler(
        1,
        blink.mojom.ResourceLoadInfoNotifier_NotifyResourceRedirectReceived_ParamsSpec.$,
        null,
        impl.notifyResourceRedirectReceived.bind(impl));
    this.helper_internal_.registerHandler(
        2,
        blink.mojom.ResourceLoadInfoNotifier_NotifyResourceResponseReceived_ParamsSpec.$,
        null,
        impl.notifyResourceResponseReceived.bind(impl));
    this.helper_internal_.registerHandler(
        3,
        blink.mojom.ResourceLoadInfoNotifier_NotifyResourceTransferSizeUpdated_ParamsSpec.$,
        null,
        impl.notifyResourceTransferSizeUpdated.bind(impl));
    this.helper_internal_.registerHandler(
        4,
        blink.mojom.ResourceLoadInfoNotifier_NotifyResourceLoadCompleted_ParamsSpec.$,
        null,
        impl.notifyResourceLoadCompleted.bind(impl));
    this.helper_internal_.registerHandler(
        5,
        blink.mojom.ResourceLoadInfoNotifier_NotifyResourceLoadCanceled_ParamsSpec.$,
        null,
        impl.notifyResourceLoadCanceled.bind(impl));
    this.helper_internal_.registerHandler(
        6,
        blink.mojom.ResourceLoadInfoNotifier_Clone_ParamsSpec.$,
        null,
        impl.clone.bind(impl));
    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.helper_internal_.getConnectionErrorEventRouter();
  }
};

/**
 *  @export
 */
blink.mojom.ResourceLoadInfoNotifier = class {
  /**
   * @return {!string}
   */
  static get $interfaceName() {
    return "blink.mojom.ResourceLoadInfoNotifier";
  }

  /**
   * Returns a remote for this interface which sends messages to the browser.
   * The browser must have an interface request binder registered for this
   * interface and accessible to the calling document's frame.
   *
   * @return {!blink.mojom.ResourceLoadInfoNotifierRemote}
   * @export
   */
  static getRemote() {
    let remote = new blink.mojom.ResourceLoadInfoNotifierRemote;
    remote.$.bindNewPipeAndPassReceiver().bindInBrowser();
    return remote;
  }
};


/**
 * An object which receives request messages for the ResourceLoadInfoNotifier
 * mojom interface and dispatches them as callbacks. One callback receiver exists
 * on this object for each message defined in the mojom interface, and each
 * receiver can have any number of listeners added to it.
 *
 * @export
 */
blink.mojom.ResourceLoadInfoNotifierCallbackRouter = class {
  constructor() {
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
      blink.mojom.ResourceLoadInfoNotifierRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!blink.mojom.ResourceLoadInfoNotifierRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);

    this.router_ = new mojo.internal.interfaceSupport.CallbackRouter;

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.notifyUpdateUserGestureCarryoverInfo =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        0,
        blink.mojom.ResourceLoadInfoNotifier_NotifyUpdateUserGestureCarryoverInfo_ParamsSpec.$,
        null,
        this.notifyUpdateUserGestureCarryoverInfo.createReceiverHandler(false /* expectsResponse */));
    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.notifyResourceRedirectReceived =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        1,
        blink.mojom.ResourceLoadInfoNotifier_NotifyResourceRedirectReceived_ParamsSpec.$,
        null,
        this.notifyResourceRedirectReceived.createReceiverHandler(false /* expectsResponse */));
    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.notifyResourceResponseReceived =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        2,
        blink.mojom.ResourceLoadInfoNotifier_NotifyResourceResponseReceived_ParamsSpec.$,
        null,
        this.notifyResourceResponseReceived.createReceiverHandler(false /* expectsResponse */));
    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.notifyResourceTransferSizeUpdated =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        3,
        blink.mojom.ResourceLoadInfoNotifier_NotifyResourceTransferSizeUpdated_ParamsSpec.$,
        null,
        this.notifyResourceTransferSizeUpdated.createReceiverHandler(false /* expectsResponse */));
    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.notifyResourceLoadCompleted =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        4,
        blink.mojom.ResourceLoadInfoNotifier_NotifyResourceLoadCompleted_ParamsSpec.$,
        null,
        this.notifyResourceLoadCompleted.createReceiverHandler(false /* expectsResponse */));
    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.notifyResourceLoadCanceled =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        5,
        blink.mojom.ResourceLoadInfoNotifier_NotifyResourceLoadCanceled_ParamsSpec.$,
        null,
        this.notifyResourceLoadCanceled.createReceiverHandler(false /* expectsResponse */));
    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.clone =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        6,
        blink.mojom.ResourceLoadInfoNotifier_Clone_ParamsSpec.$,
        null,
        this.clone.createReceiverHandler(false /* expectsResponse */));
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
blink.mojom.ResourceLoadInfoNotifier_NotifyUpdateUserGestureCarryoverInfo_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
blink.mojom.ResourceLoadInfoNotifier_NotifyResourceRedirectReceived_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
blink.mojom.ResourceLoadInfoNotifier_NotifyResourceResponseReceived_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
blink.mojom.ResourceLoadInfoNotifier_NotifyResourceTransferSizeUpdated_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
blink.mojom.ResourceLoadInfoNotifier_NotifyResourceLoadCompleted_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
blink.mojom.ResourceLoadInfoNotifier_NotifyResourceLoadCanceled_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
blink.mojom.ResourceLoadInfoNotifier_Clone_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };




mojo.internal.Struct(
    blink.mojom.ResourceLoadInfoNotifier_NotifyUpdateUserGestureCarryoverInfo_ParamsSpec.$,
    'ResourceLoadInfoNotifier_NotifyUpdateUserGestureCarryoverInfo_Params',
    [
    ],
    [[0, 8],]);





/** @record */
blink.mojom.ResourceLoadInfoNotifier_NotifyUpdateUserGestureCarryoverInfo_Params = class {
  constructor() {
  }
};




mojo.internal.Struct(
    blink.mojom.ResourceLoadInfoNotifier_NotifyResourceRedirectReceived_ParamsSpec.$,
    'ResourceLoadInfoNotifier_NotifyResourceRedirectReceived_Params',
    [
      mojo.internal.StructField(
        'redirectInfo', 0,
        0,
        network.mojom.URLRequestRedirectInfoSpec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'redirectResponse', 8,
        0,
        network.mojom.URLResponseHeadSpec.$,
        null,
        false /* nullable */),
    ],
    [[0, 24],]);





/** @record */
blink.mojom.ResourceLoadInfoNotifier_NotifyResourceRedirectReceived_Params = class {
  constructor() {
    /** @export { !network.mojom.URLRequestRedirectInfo } */
    this.redirectInfo;
    /** @export { !network.mojom.URLResponseHead } */
    this.redirectResponse;
  }
};




mojo.internal.Struct(
    blink.mojom.ResourceLoadInfoNotifier_NotifyResourceResponseReceived_ParamsSpec.$,
    'ResourceLoadInfoNotifier_NotifyResourceResponseReceived_Params',
    [
      mojo.internal.StructField(
        'requestId', 0,
        0,
        mojo.internal.Int64,
        BigInt(0),
        false /* nullable */),
      mojo.internal.StructField(
        'finalResponseUrl', 8,
        0,
        url.mojom.SchemeHostPortSpec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'head', 16,
        0,
        network.mojom.URLResponseHeadSpec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'requestDestination', 24,
        0,
        network.mojom.RequestDestinationSpec.$,
        0,
        false /* nullable */),
    ],
    [[0, 40],]);





/** @record */
blink.mojom.ResourceLoadInfoNotifier_NotifyResourceResponseReceived_Params = class {
  constructor() {
    /** @export { !bigint } */
    this.requestId;
    /** @export { !url.mojom.SchemeHostPort } */
    this.finalResponseUrl;
    /** @export { !network.mojom.URLResponseHead } */
    this.head;
    /** @export { !network.mojom.RequestDestination } */
    this.requestDestination;
  }
};




mojo.internal.Struct(
    blink.mojom.ResourceLoadInfoNotifier_NotifyResourceTransferSizeUpdated_ParamsSpec.$,
    'ResourceLoadInfoNotifier_NotifyResourceTransferSizeUpdated_Params',
    [
      mojo.internal.StructField(
        'requestId', 0,
        0,
        mojo.internal.Int64,
        BigInt(0),
        false /* nullable */),
      mojo.internal.StructField(
        'transferSizeDiff', 8,
        0,
        mojo.internal.Int32,
        0,
        false /* nullable */),
    ],
    [[0, 24],]);





/** @record */
blink.mojom.ResourceLoadInfoNotifier_NotifyResourceTransferSizeUpdated_Params = class {
  constructor() {
    /** @export { !bigint } */
    this.requestId;
    /** @export { !number } */
    this.transferSizeDiff;
  }
};




mojo.internal.Struct(
    blink.mojom.ResourceLoadInfoNotifier_NotifyResourceLoadCompleted_ParamsSpec.$,
    'ResourceLoadInfoNotifier_NotifyResourceLoadCompleted_Params',
    [
      mojo.internal.StructField(
        'resourceLoadInfo', 0,
        0,
        blink.mojom.ResourceLoadInfoSpec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'status', 8,
        0,
        network.mojom.URLLoaderCompletionStatusSpec.$,
        null,
        false /* nullable */),
    ],
    [[0, 24],]);





/** @record */
blink.mojom.ResourceLoadInfoNotifier_NotifyResourceLoadCompleted_Params = class {
  constructor() {
    /** @export { !blink.mojom.ResourceLoadInfo } */
    this.resourceLoadInfo;
    /** @export { !network.mojom.URLLoaderCompletionStatus } */
    this.status;
  }
};




mojo.internal.Struct(
    blink.mojom.ResourceLoadInfoNotifier_NotifyResourceLoadCanceled_ParamsSpec.$,
    'ResourceLoadInfoNotifier_NotifyResourceLoadCanceled_Params',
    [
      mojo.internal.StructField(
        'requestId', 0,
        0,
        mojo.internal.Int64,
        BigInt(0),
        false /* nullable */),
    ],
    [[0, 16],]);





/** @record */
blink.mojom.ResourceLoadInfoNotifier_NotifyResourceLoadCanceled_Params = class {
  constructor() {
    /** @export { !bigint } */
    this.requestId;
  }
};




mojo.internal.Struct(
    blink.mojom.ResourceLoadInfoNotifier_Clone_ParamsSpec.$,
    'ResourceLoadInfoNotifier_Clone_Params',
    [
      mojo.internal.StructField(
        'pendingResourceLoadInfoNotifier', 0,
        0,
        mojo.internal.InterfaceRequest(blink.mojom.ResourceLoadInfoNotifierPendingReceiver),
        null,
        false /* nullable */),
    ],
    [[0, 16],]);





/** @record */
blink.mojom.ResourceLoadInfoNotifier_Clone_Params = class {
  constructor() {
    /** @export { !blink.mojom.ResourceLoadInfoNotifierPendingReceiver } */
    this.pendingResourceLoadInfoNotifier;
  }
};


