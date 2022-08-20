// third_party/blink/public/mojom/web_launch/web_launch.mojom-lite.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
'use strict';


mojo.internal.exportModule('blink.mojom');








/**
 * @implements {mojo.internal.interfaceSupport.PendingReceiver}
 * @export
 */
blink.mojom.WebLaunchServicePendingReceiver = class {
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
        blink.mojom.WebLaunchService.$interfaceName,
        scope);
  }
};



/**
 * @export
 * @implements { blink.mojom.WebLaunchServiceInterface }
 */
blink.mojom.WebLaunchServiceRemote = class {
  /** @param {MojoHandle|mojo.internal.interfaceSupport.Endpoint=} handle */
  constructor(handle = undefined) {
    /**
     * @private {!mojo.internal.interfaceSupport.InterfaceRemoteBase<!blink.mojom.WebLaunchServicePendingReceiver>}
     */
    this.proxy =
        new mojo.internal.interfaceSupport.InterfaceRemoteBase(
          blink.mojom.WebLaunchServicePendingReceiver,
          handle);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper<!blink.mojom.WebLaunchServicePendingReceiver>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper(this.proxy);

    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.proxy.getConnectionErrorEventRouter();
  }

  
  /**
   * @param { !Array<!blink.mojom.FileSystemAccessEntry> } files
   */

  setLaunchFiles(
      files) {
    this.proxy.sendMessage(
        0,
        blink.mojom.WebLaunchService_SetLaunchFiles_ParamsSpec.$,
        null,
        [
          files
        ]);
  }

  
  /**
   * @param { !url.mojom.Url } launchUrl
   */

  enqueueLaunchParams(
      launchUrl) {
    this.proxy.sendMessage(
        1,
        blink.mojom.WebLaunchService_EnqueueLaunchParams_ParamsSpec.$,
        null,
        [
          launchUrl
        ]);
  }
};

/**
 * An object which receives request messages for the WebLaunchService
 * mojom interface. Must be constructed over an object which implements that
 * interface.
 *
 * @export
 */
blink.mojom.WebLaunchServiceReceiver = class {
  /**
   * @param {!blink.mojom.WebLaunchServiceInterface } impl
   */
  constructor(impl) {
    /** @private {!mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal<!blink.mojom.WebLaunchServiceRemote>} */
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
        blink.mojom.WebLaunchServiceRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!blink.mojom.WebLaunchServiceRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);


    this.helper_internal_.registerHandler(
        0,
        blink.mojom.WebLaunchService_SetLaunchFiles_ParamsSpec.$,
        null,
        impl.setLaunchFiles.bind(impl));
    this.helper_internal_.registerHandler(
        1,
        blink.mojom.WebLaunchService_EnqueueLaunchParams_ParamsSpec.$,
        null,
        impl.enqueueLaunchParams.bind(impl));
    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.helper_internal_.getConnectionErrorEventRouter();
  }
};

/**
 *  @export
 */
blink.mojom.WebLaunchService = class {
  /**
   * @return {!string}
   */
  static get $interfaceName() {
    return "blink.mojom.WebLaunchService";
  }

  /**
   * Returns a remote for this interface which sends messages to the browser.
   * The browser must have an interface request binder registered for this
   * interface and accessible to the calling document's frame.
   *
   * @return {!blink.mojom.WebLaunchServiceRemote}
   * @export
   */
  static getRemote() {
    let remote = new blink.mojom.WebLaunchServiceRemote;
    remote.$.bindNewPipeAndPassReceiver().bindInBrowser();
    return remote;
  }
};


/**
 * An object which receives request messages for the WebLaunchService
 * mojom interface and dispatches them as callbacks. One callback receiver exists
 * on this object for each message defined in the mojom interface, and each
 * receiver can have any number of listeners added to it.
 *
 * @export
 */
blink.mojom.WebLaunchServiceCallbackRouter = class {
  constructor() {
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
      blink.mojom.WebLaunchServiceRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!blink.mojom.WebLaunchServiceRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);

    this.router_ = new mojo.internal.interfaceSupport.CallbackRouter;

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.setLaunchFiles =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        0,
        blink.mojom.WebLaunchService_SetLaunchFiles_ParamsSpec.$,
        null,
        this.setLaunchFiles.createReceiverHandler(false /* expectsResponse */));
    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.enqueueLaunchParams =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        1,
        blink.mojom.WebLaunchService_EnqueueLaunchParams_ParamsSpec.$,
        null,
        this.enqueueLaunchParams.createReceiverHandler(false /* expectsResponse */));
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
blink.mojom.WebLaunchService_SetLaunchFiles_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
blink.mojom.WebLaunchService_EnqueueLaunchParams_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };




mojo.internal.Struct(
    blink.mojom.WebLaunchService_SetLaunchFiles_ParamsSpec.$,
    'WebLaunchService_SetLaunchFiles_Params',
    [
      mojo.internal.StructField(
        'files', 0,
        0,
        mojo.internal.Array(blink.mojom.FileSystemAccessEntrySpec.$, false),
        null,
        false /* nullable */),
    ],
    [[0, 16],]);





/** @record */
blink.mojom.WebLaunchService_SetLaunchFiles_Params = class {
  constructor() {
    /** @export { !Array<!blink.mojom.FileSystemAccessEntry> } */
    this.files;
  }
};




mojo.internal.Struct(
    blink.mojom.WebLaunchService_EnqueueLaunchParams_ParamsSpec.$,
    'WebLaunchService_EnqueueLaunchParams_Params',
    [
      mojo.internal.StructField(
        'launchUrl', 0,
        0,
        url.mojom.UrlSpec.$,
        null,
        false /* nullable */),
    ],
    [[0, 16],]);





/** @record */
blink.mojom.WebLaunchService_EnqueueLaunchParams_Params = class {
  constructor() {
    /** @export { !url.mojom.Url } */
    this.launchUrl;
  }
};


