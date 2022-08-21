// services/service_manager/public/mojom/service_control.mojom-lite.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
'use strict';


mojo.internal.exportModule('serviceManager.mojom');








/**
 * @implements {mojo.internal.interfaceSupport.PendingReceiver}
 * @export
 */
serviceManager.mojom.ServiceControlPendingReceiver = class {
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
        serviceManager.mojom.ServiceControl.$interfaceName,
        scope);
  }
};



/**
 * @export
 * @implements { serviceManager.mojom.ServiceControlInterface }
 */
serviceManager.mojom.ServiceControlRemote = class {
  /** @param {MojoHandle|mojo.internal.interfaceSupport.Endpoint=} handle */
  constructor(handle = undefined) {
    /**
     * @private {!mojo.internal.interfaceSupport.InterfaceRemoteBase<!serviceManager.mojom.ServiceControlPendingReceiver>}
     */
    this.proxy =
        new mojo.internal.interfaceSupport.InterfaceRemoteBase(
          serviceManager.mojom.ServiceControlPendingReceiver,
          handle);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper<!serviceManager.mojom.ServiceControlPendingReceiver>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper(this.proxy);

    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.proxy.getConnectionErrorEventRouter();
  }

  
  /**
   */

  requestQuit() {
    this.proxy.sendMessage(
        0,
        serviceManager.mojom.ServiceControl_RequestQuit_ParamsSpec.$,
        null,
        [
        ]);
  }
};

/**
 * An object which receives request messages for the ServiceControl
 * mojom interface. Must be constructed over an object which implements that
 * interface.
 *
 * @export
 */
serviceManager.mojom.ServiceControlReceiver = class {
  /**
   * @param {!serviceManager.mojom.ServiceControlInterface } impl
   */
  constructor(impl) {
    /** @private {!mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal<!serviceManager.mojom.ServiceControlRemote>} */
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
        serviceManager.mojom.ServiceControlRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!serviceManager.mojom.ServiceControlRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);


    this.helper_internal_.registerHandler(
        0,
        serviceManager.mojom.ServiceControl_RequestQuit_ParamsSpec.$,
        null,
        impl.requestQuit.bind(impl));
    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.helper_internal_.getConnectionErrorEventRouter();
  }
};

/**
 *  @export
 */
serviceManager.mojom.ServiceControl = class {
  /**
   * @return {!string}
   */
  static get $interfaceName() {
    return "service_manager.mojom.ServiceControl";
  }

  /**
   * Returns a remote for this interface which sends messages to the browser.
   * The browser must have an interface request binder registered for this
   * interface and accessible to the calling document's frame.
   *
   * @return {!serviceManager.mojom.ServiceControlRemote}
   * @export
   */
  static getRemote() {
    let remote = new serviceManager.mojom.ServiceControlRemote;
    remote.$.bindNewPipeAndPassReceiver().bindInBrowser();
    return remote;
  }
};


/**
 * An object which receives request messages for the ServiceControl
 * mojom interface and dispatches them as callbacks. One callback receiver exists
 * on this object for each message defined in the mojom interface, and each
 * receiver can have any number of listeners added to it.
 *
 * @export
 */
serviceManager.mojom.ServiceControlCallbackRouter = class {
  constructor() {
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
      serviceManager.mojom.ServiceControlRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!serviceManager.mojom.ServiceControlRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);

    this.router_ = new mojo.internal.interfaceSupport.CallbackRouter;

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.requestQuit =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        0,
        serviceManager.mojom.ServiceControl_RequestQuit_ParamsSpec.$,
        null,
        this.requestQuit.createReceiverHandler(false /* expectsResponse */));
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
serviceManager.mojom.ServiceControl_RequestQuit_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };




mojo.internal.Struct(
    serviceManager.mojom.ServiceControl_RequestQuit_ParamsSpec.$,
    'ServiceControl_RequestQuit_Params',
    [
    ],
    [[0, 8],]);





/** @record */
serviceManager.mojom.ServiceControl_RequestQuit_Params = class {
  constructor() {
  }
};


