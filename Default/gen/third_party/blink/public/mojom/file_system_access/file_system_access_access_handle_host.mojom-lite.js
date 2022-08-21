// third_party/blink/public/mojom/file_system_access/file_system_access_access_handle_host.mojom-lite.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
'use strict';


mojo.internal.exportModule('blink.mojom');








/**
 * @implements {mojo.internal.interfaceSupport.PendingReceiver}
 * @export
 */
blink.mojom.FileSystemAccessAccessHandleHostPendingReceiver = class {
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
        blink.mojom.FileSystemAccessAccessHandleHost.$interfaceName,
        scope);
  }
};



/**
 * @export
 * @implements { blink.mojom.FileSystemAccessAccessHandleHostInterface }
 */
blink.mojom.FileSystemAccessAccessHandleHostRemote = class {
  /** @param {MojoHandle|mojo.internal.interfaceSupport.Endpoint=} handle */
  constructor(handle = undefined) {
    /**
     * @private {!mojo.internal.interfaceSupport.InterfaceRemoteBase<!blink.mojom.FileSystemAccessAccessHandleHostPendingReceiver>}
     */
    this.proxy =
        new mojo.internal.interfaceSupport.InterfaceRemoteBase(
          blink.mojom.FileSystemAccessAccessHandleHostPendingReceiver,
          handle);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper<!blink.mojom.FileSystemAccessAccessHandleHostPendingReceiver>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper(this.proxy);

    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.proxy.getConnectionErrorEventRouter();
  }

  
  /**
   * @return {!Promise}
   */

  close() {
    return this.proxy.sendMessage(
        0,
        blink.mojom.FileSystemAccessAccessHandleHost_Close_ParamsSpec.$,
        blink.mojom.FileSystemAccessAccessHandleHost_Close_ResponseParamsSpec.$,
        [
        ]);
  }
};

/**
 * An object which receives request messages for the FileSystemAccessAccessHandleHost
 * mojom interface. Must be constructed over an object which implements that
 * interface.
 *
 * @export
 */
blink.mojom.FileSystemAccessAccessHandleHostReceiver = class {
  /**
   * @param {!blink.mojom.FileSystemAccessAccessHandleHostInterface } impl
   */
  constructor(impl) {
    /** @private {!mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal<!blink.mojom.FileSystemAccessAccessHandleHostRemote>} */
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
        blink.mojom.FileSystemAccessAccessHandleHostRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!blink.mojom.FileSystemAccessAccessHandleHostRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);


    this.helper_internal_.registerHandler(
        0,
        blink.mojom.FileSystemAccessAccessHandleHost_Close_ParamsSpec.$,
        blink.mojom.FileSystemAccessAccessHandleHost_Close_ResponseParamsSpec.$,
        impl.close.bind(impl));
    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.helper_internal_.getConnectionErrorEventRouter();
  }
};

/**
 *  @export
 */
blink.mojom.FileSystemAccessAccessHandleHost = class {
  /**
   * @return {!string}
   */
  static get $interfaceName() {
    return "blink.mojom.FileSystemAccessAccessHandleHost";
  }

  /**
   * Returns a remote for this interface which sends messages to the browser.
   * The browser must have an interface request binder registered for this
   * interface and accessible to the calling document's frame.
   *
   * @return {!blink.mojom.FileSystemAccessAccessHandleHostRemote}
   * @export
   */
  static getRemote() {
    let remote = new blink.mojom.FileSystemAccessAccessHandleHostRemote;
    remote.$.bindNewPipeAndPassReceiver().bindInBrowser();
    return remote;
  }
};


/**
 * An object which receives request messages for the FileSystemAccessAccessHandleHost
 * mojom interface and dispatches them as callbacks. One callback receiver exists
 * on this object for each message defined in the mojom interface, and each
 * receiver can have any number of listeners added to it.
 *
 * @export
 */
blink.mojom.FileSystemAccessAccessHandleHostCallbackRouter = class {
  constructor() {
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
      blink.mojom.FileSystemAccessAccessHandleHostRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!blink.mojom.FileSystemAccessAccessHandleHostRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);

    this.router_ = new mojo.internal.interfaceSupport.CallbackRouter;

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.close =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        0,
        blink.mojom.FileSystemAccessAccessHandleHost_Close_ParamsSpec.$,
        blink.mojom.FileSystemAccessAccessHandleHost_Close_ResponseParamsSpec.$,
        this.close.createReceiverHandler(true /* expectsResponse */));
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
blink.mojom.FileSystemAccessAccessHandleHost_Close_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
blink.mojom.FileSystemAccessAccessHandleHost_Close_ResponseParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };




mojo.internal.Struct(
    blink.mojom.FileSystemAccessAccessHandleHost_Close_ParamsSpec.$,
    'FileSystemAccessAccessHandleHost_Close_Params',
    [
    ],
    [[0, 8],]);





/** @record */
blink.mojom.FileSystemAccessAccessHandleHost_Close_Params = class {
  constructor() {
  }
};




mojo.internal.Struct(
    blink.mojom.FileSystemAccessAccessHandleHost_Close_ResponseParamsSpec.$,
    'FileSystemAccessAccessHandleHost_Close_ResponseParams',
    [
    ],
    [[0, 8],]);





/** @record */
blink.mojom.FileSystemAccessAccessHandleHost_Close_ResponseParams = class {
  constructor() {
  }
};


