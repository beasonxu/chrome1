// third_party/blink/public/mojom/sms/webotp_service.mojom-lite-for-compile.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
'use strict';

goog.require('mojo.internal');
goog.require('mojo.internal.interfaceSupport');





goog.provide('blink.mojom.SmsStatus');
goog.provide('blink.mojom.SmsStatusSpec');
/**
 * @const { {$: !mojo.internal.MojomType} }
 * @export
 */
blink.mojom.SmsStatusSpec = { $: mojo.internal.Enum() };

/**
 * @enum {number}
 * @export
 */
blink.mojom.SmsStatus = {
  
  kSuccess: 0,
  kUnhandledRequest: 1,
  kCancelled: 2,
  kAborted: 3,
  kTimeout: 4,
  kBackendNotAvailable: 5,
  MIN_VALUE: 0,
  MAX_VALUE: 5,
};



goog.provide('blink.mojom.WebOTPService');
goog.provide('blink.mojom.WebOTPServiceReceiver');
goog.provide('blink.mojom.WebOTPServiceCallbackRouter');
goog.provide('blink.mojom.WebOTPServiceInterface');
goog.provide('blink.mojom.WebOTPServiceRemote');
goog.provide('blink.mojom.WebOTPServicePendingReceiver');


/**
 * @implements {mojo.internal.interfaceSupport.PendingReceiver}
 * @export
 */
blink.mojom.WebOTPServicePendingReceiver = class {
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
        blink.mojom.WebOTPService.$interfaceName,
        scope);
  }
};

/** @interface */
blink.mojom.WebOTPServiceInterface = class {
  
  /**
   * @return {!Promise<{
        status: !blink.mojom.SmsStatus,
        otp: ?string,
   *  }>}
   */

  receive() {}
  
  /**
   */

  abort() {}
};

/**
 * @export
 * @implements { blink.mojom.WebOTPServiceInterface }
 */
blink.mojom.WebOTPServiceRemote = class {
  /** @param {MojoHandle|mojo.internal.interfaceSupport.Endpoint=} handle */
  constructor(handle = undefined) {
    /**
     * @private {!mojo.internal.interfaceSupport.InterfaceRemoteBase<!blink.mojom.WebOTPServicePendingReceiver>}
     */
    this.proxy =
        new mojo.internal.interfaceSupport.InterfaceRemoteBase(
          blink.mojom.WebOTPServicePendingReceiver,
          handle);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper<!blink.mojom.WebOTPServicePendingReceiver>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper(this.proxy);

    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.proxy.getConnectionErrorEventRouter();
  }

  
  /**
   * @return {!Promise<{
        status: !blink.mojom.SmsStatus,
        otp: ?string,
   *  }>}
   */

  receive() {
    return this.proxy.sendMessage(
        0,
        blink.mojom.WebOTPService_Receive_ParamsSpec.$,
        blink.mojom.WebOTPService_Receive_ResponseParamsSpec.$,
        [
        ]);
  }

  
  /**
   */

  abort() {
    this.proxy.sendMessage(
        1,
        blink.mojom.WebOTPService_Abort_ParamsSpec.$,
        null,
        [
        ]);
  }
};

/**
 * An object which receives request messages for the WebOTPService
 * mojom interface. Must be constructed over an object which implements that
 * interface.
 *
 * @export
 */
blink.mojom.WebOTPServiceReceiver = class {
  /**
   * @param {!blink.mojom.WebOTPServiceInterface } impl
   */
  constructor(impl) {
    /** @private {!mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal<!blink.mojom.WebOTPServiceRemote>} */
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
        blink.mojom.WebOTPServiceRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!blink.mojom.WebOTPServiceRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);


    this.helper_internal_.registerHandler(
        0,
        blink.mojom.WebOTPService_Receive_ParamsSpec.$,
        blink.mojom.WebOTPService_Receive_ResponseParamsSpec.$,
        impl.receive.bind(impl));
    this.helper_internal_.registerHandler(
        1,
        blink.mojom.WebOTPService_Abort_ParamsSpec.$,
        null,
        impl.abort.bind(impl));
    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.helper_internal_.getConnectionErrorEventRouter();
  }
};

/**
 *  @export
 */
blink.mojom.WebOTPService = class {
  /**
   * @return {!string}
   */
  static get $interfaceName() {
    return "blink.mojom.WebOTPService";
  }

  /**
   * Returns a remote for this interface which sends messages to the browser.
   * The browser must have an interface request binder registered for this
   * interface and accessible to the calling document's frame.
   *
   * @return {!blink.mojom.WebOTPServiceRemote}
   * @export
   */
  static getRemote() {
    let remote = new blink.mojom.WebOTPServiceRemote;
    remote.$.bindNewPipeAndPassReceiver().bindInBrowser();
    return remote;
  }
};


/**
 * An object which receives request messages for the WebOTPService
 * mojom interface and dispatches them as callbacks. One callback receiver exists
 * on this object for each message defined in the mojom interface, and each
 * receiver can have any number of listeners added to it.
 *
 * @export
 */
blink.mojom.WebOTPServiceCallbackRouter = class {
  constructor() {
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
      blink.mojom.WebOTPServiceRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!blink.mojom.WebOTPServiceRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);

    this.router_ = new mojo.internal.interfaceSupport.CallbackRouter;

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.receive =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        0,
        blink.mojom.WebOTPService_Receive_ParamsSpec.$,
        blink.mojom.WebOTPService_Receive_ResponseParamsSpec.$,
        this.receive.createReceiverHandler(true /* expectsResponse */));
    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.abort =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        1,
        blink.mojom.WebOTPService_Abort_ParamsSpec.$,
        null,
        this.abort.createReceiverHandler(false /* expectsResponse */));
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


goog.provide('blink.mojom.WebOTPService_Receive_ParamsSpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
blink.mojom.WebOTPService_Receive_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

goog.provide('blink.mojom.WebOTPService_Receive_ResponseParamsSpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
blink.mojom.WebOTPService_Receive_ResponseParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

goog.provide('blink.mojom.WebOTPService_Abort_ParamsSpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
blink.mojom.WebOTPService_Abort_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };




mojo.internal.Struct(
    blink.mojom.WebOTPService_Receive_ParamsSpec.$,
    'WebOTPService_Receive_Params',
    [
    ],
    [[0, 8],]);



goog.provide('blink.mojom.WebOTPService_Receive_Params');

/** @record */
blink.mojom.WebOTPService_Receive_Params = class {
  constructor() {
  }
};




mojo.internal.Struct(
    blink.mojom.WebOTPService_Receive_ResponseParamsSpec.$,
    'WebOTPService_Receive_ResponseParams',
    [
      mojo.internal.StructField(
        'status', 0,
        0,
        blink.mojom.SmsStatusSpec.$,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'otp', 8,
        0,
        mojo.internal.String,
        null,
        true /* nullable */),
    ],
    [[0, 24],]);



goog.provide('blink.mojom.WebOTPService_Receive_ResponseParams');

/** @record */
blink.mojom.WebOTPService_Receive_ResponseParams = class {
  constructor() {
    /** @export { !blink.mojom.SmsStatus } */
    this.status;
    /** @export { (string|undefined) } */
    this.otp;
  }
};




mojo.internal.Struct(
    blink.mojom.WebOTPService_Abort_ParamsSpec.$,
    'WebOTPService_Abort_Params',
    [
    ],
    [[0, 8],]);



goog.provide('blink.mojom.WebOTPService_Abort_Params');

/** @record */
blink.mojom.WebOTPService_Abort_Params = class {
  constructor() {
  }
};


