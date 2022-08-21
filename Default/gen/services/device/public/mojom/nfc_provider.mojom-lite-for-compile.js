// services/device/public/mojom/nfc_provider.mojom-lite-for-compile.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
'use strict';

goog.require('mojo.internal');
goog.require('mojo.internal.interfaceSupport');

goog.require('device.mojom.NFC');






goog.provide('device.mojom.NFCProvider');
goog.provide('device.mojom.NFCProviderReceiver');
goog.provide('device.mojom.NFCProviderCallbackRouter');
goog.provide('device.mojom.NFCProviderInterface');
goog.provide('device.mojom.NFCProviderRemote');
goog.provide('device.mojom.NFCProviderPendingReceiver');


/**
 * @implements {mojo.internal.interfaceSupport.PendingReceiver}
 * @export
 */
device.mojom.NFCProviderPendingReceiver = class {
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
        device.mojom.NFCProvider.$interfaceName,
        scope);
  }
};

/** @interface */
device.mojom.NFCProviderInterface = class {
  
  /**
   * @param { !number } hostId
   * @param { !device.mojom.NFCPendingReceiver } receiver
   */

  getNFCForHost(hostId, receiver) {}
  
  /**
   */

  suspendNFCOperations() {}
  
  /**
   */

  resumeNFCOperations() {}
};

/**
 * @export
 * @implements { device.mojom.NFCProviderInterface }
 */
device.mojom.NFCProviderRemote = class {
  /** @param {MojoHandle|mojo.internal.interfaceSupport.Endpoint=} handle */
  constructor(handle = undefined) {
    /**
     * @private {!mojo.internal.interfaceSupport.InterfaceRemoteBase<!device.mojom.NFCProviderPendingReceiver>}
     */
    this.proxy =
        new mojo.internal.interfaceSupport.InterfaceRemoteBase(
          device.mojom.NFCProviderPendingReceiver,
          handle);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper<!device.mojom.NFCProviderPendingReceiver>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper(this.proxy);

    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.proxy.getConnectionErrorEventRouter();
  }

  
  /**
   * @param { !number } hostId
   * @param { !device.mojom.NFCPendingReceiver } receiver
   */

  getNFCForHost(
      hostId,
      receiver) {
    this.proxy.sendMessage(
        0,
        device.mojom.NFCProvider_GetNFCForHost_ParamsSpec.$,
        null,
        [
          hostId,
          receiver
        ]);
  }

  
  /**
   */

  suspendNFCOperations() {
    this.proxy.sendMessage(
        1,
        device.mojom.NFCProvider_SuspendNFCOperations_ParamsSpec.$,
        null,
        [
        ]);
  }

  
  /**
   */

  resumeNFCOperations() {
    this.proxy.sendMessage(
        2,
        device.mojom.NFCProvider_ResumeNFCOperations_ParamsSpec.$,
        null,
        [
        ]);
  }
};

/**
 * An object which receives request messages for the NFCProvider
 * mojom interface. Must be constructed over an object which implements that
 * interface.
 *
 * @export
 */
device.mojom.NFCProviderReceiver = class {
  /**
   * @param {!device.mojom.NFCProviderInterface } impl
   */
  constructor(impl) {
    /** @private {!mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal<!device.mojom.NFCProviderRemote>} */
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
        device.mojom.NFCProviderRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!device.mojom.NFCProviderRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);


    this.helper_internal_.registerHandler(
        0,
        device.mojom.NFCProvider_GetNFCForHost_ParamsSpec.$,
        null,
        impl.getNFCForHost.bind(impl));
    this.helper_internal_.registerHandler(
        1,
        device.mojom.NFCProvider_SuspendNFCOperations_ParamsSpec.$,
        null,
        impl.suspendNFCOperations.bind(impl));
    this.helper_internal_.registerHandler(
        2,
        device.mojom.NFCProvider_ResumeNFCOperations_ParamsSpec.$,
        null,
        impl.resumeNFCOperations.bind(impl));
    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.helper_internal_.getConnectionErrorEventRouter();
  }
};

/**
 *  @export
 */
device.mojom.NFCProvider = class {
  /**
   * @return {!string}
   */
  static get $interfaceName() {
    return "device.mojom.NFCProvider";
  }

  /**
   * Returns a remote for this interface which sends messages to the browser.
   * The browser must have an interface request binder registered for this
   * interface and accessible to the calling document's frame.
   *
   * @return {!device.mojom.NFCProviderRemote}
   * @export
   */
  static getRemote() {
    let remote = new device.mojom.NFCProviderRemote;
    remote.$.bindNewPipeAndPassReceiver().bindInBrowser();
    return remote;
  }
};


/**
 * An object which receives request messages for the NFCProvider
 * mojom interface and dispatches them as callbacks. One callback receiver exists
 * on this object for each message defined in the mojom interface, and each
 * receiver can have any number of listeners added to it.
 *
 * @export
 */
device.mojom.NFCProviderCallbackRouter = class {
  constructor() {
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
      device.mojom.NFCProviderRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!device.mojom.NFCProviderRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);

    this.router_ = new mojo.internal.interfaceSupport.CallbackRouter;

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.getNFCForHost =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        0,
        device.mojom.NFCProvider_GetNFCForHost_ParamsSpec.$,
        null,
        this.getNFCForHost.createReceiverHandler(false /* expectsResponse */));
    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.suspendNFCOperations =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        1,
        device.mojom.NFCProvider_SuspendNFCOperations_ParamsSpec.$,
        null,
        this.suspendNFCOperations.createReceiverHandler(false /* expectsResponse */));
    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.resumeNFCOperations =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        2,
        device.mojom.NFCProvider_ResumeNFCOperations_ParamsSpec.$,
        null,
        this.resumeNFCOperations.createReceiverHandler(false /* expectsResponse */));
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


goog.provide('device.mojom.NFCProvider_GetNFCForHost_ParamsSpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
device.mojom.NFCProvider_GetNFCForHost_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

goog.provide('device.mojom.NFCProvider_SuspendNFCOperations_ParamsSpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
device.mojom.NFCProvider_SuspendNFCOperations_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

goog.provide('device.mojom.NFCProvider_ResumeNFCOperations_ParamsSpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
device.mojom.NFCProvider_ResumeNFCOperations_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };




mojo.internal.Struct(
    device.mojom.NFCProvider_GetNFCForHost_ParamsSpec.$,
    'NFCProvider_GetNFCForHost_Params',
    [
      mojo.internal.StructField(
        'hostId', 0,
        0,
        mojo.internal.Int32,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'receiver', 4,
        0,
        mojo.internal.InterfaceRequest(device.mojom.NFCPendingReceiver),
        null,
        false /* nullable */),
    ],
    [[0, 16],]);



goog.provide('device.mojom.NFCProvider_GetNFCForHost_Params');

/** @record */
device.mojom.NFCProvider_GetNFCForHost_Params = class {
  constructor() {
    /** @export { !number } */
    this.hostId;
    /** @export { !device.mojom.NFCPendingReceiver } */
    this.receiver;
  }
};




mojo.internal.Struct(
    device.mojom.NFCProvider_SuspendNFCOperations_ParamsSpec.$,
    'NFCProvider_SuspendNFCOperations_Params',
    [
    ],
    [[0, 8],]);



goog.provide('device.mojom.NFCProvider_SuspendNFCOperations_Params');

/** @record */
device.mojom.NFCProvider_SuspendNFCOperations_Params = class {
  constructor() {
  }
};




mojo.internal.Struct(
    device.mojom.NFCProvider_ResumeNFCOperations_ParamsSpec.$,
    'NFCProvider_ResumeNFCOperations_Params',
    [
    ],
    [[0, 8],]);



goog.provide('device.mojom.NFCProvider_ResumeNFCOperations_Params');

/** @record */
device.mojom.NFCProvider_ResumeNFCOperations_Params = class {
  constructor() {
  }
};


