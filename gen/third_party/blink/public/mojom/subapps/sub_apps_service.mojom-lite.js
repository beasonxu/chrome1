// third_party/blink/public/mojom/subapps/sub_apps_service.mojom-lite.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
'use strict';


mojo.internal.exportModule('blink.mojom');





/**
 * @const { {$: !mojo.internal.MojomType} }
 * @export
 */
blink.mojom.SubAppsServiceResultSpec = { $: mojo.internal.Enum() };

/**
 * @enum {number}
 * @export
 */
blink.mojom.SubAppsServiceResult = {
  
  kSuccess: 0,
  kFailure: 1,
  MIN_VALUE: 0,
  MAX_VALUE: 1,
};


/**
 * @const { {$: !mojo.internal.MojomType} }
 * @export
 */
blink.mojom.SubAppsServiceAddResultCodeSpec = { $: mojo.internal.Enum() };

/**
 * @enum {number}
 * @export
 */
blink.mojom.SubAppsServiceAddResultCode = {
  
  kSuccessNewInstall: 0,
  kSuccessAlreadyInstalled: 1,
  kUserInstallDeclined: 2,
  kExpectedAppIdCheckFailed: 3,
  kParentAppUninstalled: 4,
  kFailure: 5,
  MIN_VALUE: 0,
  MAX_VALUE: 5,
};





/**
 * @implements {mojo.internal.interfaceSupport.PendingReceiver}
 * @export
 */
blink.mojom.SubAppsServicePendingReceiver = class {
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
        blink.mojom.SubAppsService.$interfaceName,
        scope);
  }
};



/**
 * @export
 * @implements { blink.mojom.SubAppsServiceInterface }
 */
blink.mojom.SubAppsServiceRemote = class {
  /** @param {MojoHandle|mojo.internal.interfaceSupport.Endpoint=} handle */
  constructor(handle = undefined) {
    /**
     * @private {!mojo.internal.interfaceSupport.InterfaceRemoteBase<!blink.mojom.SubAppsServicePendingReceiver>}
     */
    this.proxy =
        new mojo.internal.interfaceSupport.InterfaceRemoteBase(
          blink.mojom.SubAppsServicePendingReceiver,
          handle);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper<!blink.mojom.SubAppsServicePendingReceiver>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper(this.proxy);

    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.proxy.getConnectionErrorEventRouter();
  }

  
  /**
   * @param { !Array<!blink.mojom.SubAppsServiceAddInfo> } subApps
   * @return {!Promise<{
        result: !Array<!blink.mojom.SubAppsServiceAddResult>,
   *  }>}
   */

  add(
      subApps) {
    return this.proxy.sendMessage(
        0,
        blink.mojom.SubAppsService_Add_ParamsSpec.$,
        blink.mojom.SubAppsService_Add_ResponseParamsSpec.$,
        [
          subApps
        ]);
  }

  
  /**
   * @return {!Promise<{
        result: !blink.mojom.SubAppsServiceListResult,
   *  }>}
   */

  list() {
    return this.proxy.sendMessage(
        1,
        blink.mojom.SubAppsService_List_ParamsSpec.$,
        blink.mojom.SubAppsService_List_ResponseParamsSpec.$,
        [
        ]);
  }

  
  /**
   * @param { !string } unhashedAppId
   * @return {!Promise<{
        result: !blink.mojom.SubAppsServiceResult,
   *  }>}
   */

  remove(
      unhashedAppId) {
    return this.proxy.sendMessage(
        2,
        blink.mojom.SubAppsService_Remove_ParamsSpec.$,
        blink.mojom.SubAppsService_Remove_ResponseParamsSpec.$,
        [
          unhashedAppId
        ]);
  }
};

/**
 * An object which receives request messages for the SubAppsService
 * mojom interface. Must be constructed over an object which implements that
 * interface.
 *
 * @export
 */
blink.mojom.SubAppsServiceReceiver = class {
  /**
   * @param {!blink.mojom.SubAppsServiceInterface } impl
   */
  constructor(impl) {
    /** @private {!mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal<!blink.mojom.SubAppsServiceRemote>} */
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
        blink.mojom.SubAppsServiceRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!blink.mojom.SubAppsServiceRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);


    this.helper_internal_.registerHandler(
        0,
        blink.mojom.SubAppsService_Add_ParamsSpec.$,
        blink.mojom.SubAppsService_Add_ResponseParamsSpec.$,
        impl.add.bind(impl));
    this.helper_internal_.registerHandler(
        1,
        blink.mojom.SubAppsService_List_ParamsSpec.$,
        blink.mojom.SubAppsService_List_ResponseParamsSpec.$,
        impl.list.bind(impl));
    this.helper_internal_.registerHandler(
        2,
        blink.mojom.SubAppsService_Remove_ParamsSpec.$,
        blink.mojom.SubAppsService_Remove_ResponseParamsSpec.$,
        impl.remove.bind(impl));
    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.helper_internal_.getConnectionErrorEventRouter();
  }
};

/**
 *  @export
 */
blink.mojom.SubAppsService = class {
  /**
   * @return {!string}
   */
  static get $interfaceName() {
    return "blink.mojom.SubAppsService";
  }

  /**
   * Returns a remote for this interface which sends messages to the browser.
   * The browser must have an interface request binder registered for this
   * interface and accessible to the calling document's frame.
   *
   * @return {!blink.mojom.SubAppsServiceRemote}
   * @export
   */
  static getRemote() {
    let remote = new blink.mojom.SubAppsServiceRemote;
    remote.$.bindNewPipeAndPassReceiver().bindInBrowser();
    return remote;
  }
};


/**
 * An object which receives request messages for the SubAppsService
 * mojom interface and dispatches them as callbacks. One callback receiver exists
 * on this object for each message defined in the mojom interface, and each
 * receiver can have any number of listeners added to it.
 *
 * @export
 */
blink.mojom.SubAppsServiceCallbackRouter = class {
  constructor() {
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
      blink.mojom.SubAppsServiceRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!blink.mojom.SubAppsServiceRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);

    this.router_ = new mojo.internal.interfaceSupport.CallbackRouter;

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.add =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        0,
        blink.mojom.SubAppsService_Add_ParamsSpec.$,
        blink.mojom.SubAppsService_Add_ResponseParamsSpec.$,
        this.add.createReceiverHandler(true /* expectsResponse */));
    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.list =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        1,
        blink.mojom.SubAppsService_List_ParamsSpec.$,
        blink.mojom.SubAppsService_List_ResponseParamsSpec.$,
        this.list.createReceiverHandler(true /* expectsResponse */));
    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.remove =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        2,
        blink.mojom.SubAppsService_Remove_ParamsSpec.$,
        blink.mojom.SubAppsService_Remove_ResponseParamsSpec.$,
        this.remove.createReceiverHandler(true /* expectsResponse */));
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
blink.mojom.SubAppsServiceAddInfoSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
blink.mojom.SubAppsServiceAddResultSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
blink.mojom.SubAppsServiceListResultSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
blink.mojom.SubAppsService_Add_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
blink.mojom.SubAppsService_Add_ResponseParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
blink.mojom.SubAppsService_List_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
blink.mojom.SubAppsService_List_ResponseParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
blink.mojom.SubAppsService_Remove_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
blink.mojom.SubAppsService_Remove_ResponseParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };




mojo.internal.Struct(
    blink.mojom.SubAppsServiceAddInfoSpec.$,
    'SubAppsServiceAddInfo',
    [
      mojo.internal.StructField(
        'unhashedAppId', 0,
        0,
        mojo.internal.String,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'installUrl', 8,
        0,
        url.mojom.UrlSpec.$,
        null,
        false /* nullable */),
    ],
    [[0, 24],]);





/** @record */
blink.mojom.SubAppsServiceAddInfo = class {
  constructor() {
    /** @export { !string } */
    this.unhashedAppId;
    /** @export { !url.mojom.Url } */
    this.installUrl;
  }
};




mojo.internal.Struct(
    blink.mojom.SubAppsServiceAddResultSpec.$,
    'SubAppsServiceAddResult',
    [
      mojo.internal.StructField(
        'unhashedAppId', 0,
        0,
        mojo.internal.String,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'resultCode', 8,
        0,
        blink.mojom.SubAppsServiceAddResultCodeSpec.$,
        0,
        false /* nullable */),
    ],
    [[0, 24],]);





/** @record */
blink.mojom.SubAppsServiceAddResult = class {
  constructor() {
    /** @export { !string } */
    this.unhashedAppId;
    /** @export { !blink.mojom.SubAppsServiceAddResultCode } */
    this.resultCode;
  }
};




mojo.internal.Struct(
    blink.mojom.SubAppsServiceListResultSpec.$,
    'SubAppsServiceListResult',
    [
      mojo.internal.StructField(
        'code', 0,
        0,
        blink.mojom.SubAppsServiceResultSpec.$,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'subAppIds', 8,
        0,
        mojo.internal.Array(mojo.internal.String, false),
        null,
        false /* nullable */),
    ],
    [[0, 24],]);





/** @record */
blink.mojom.SubAppsServiceListResult = class {
  constructor() {
    /** @export { !blink.mojom.SubAppsServiceResult } */
    this.code;
    /** @export { !Array<!string> } */
    this.subAppIds;
  }
};




mojo.internal.Struct(
    blink.mojom.SubAppsService_Add_ParamsSpec.$,
    'SubAppsService_Add_Params',
    [
      mojo.internal.StructField(
        'subApps', 0,
        0,
        mojo.internal.Array(blink.mojom.SubAppsServiceAddInfoSpec.$, false),
        null,
        false /* nullable */),
    ],
    [[0, 16],]);





/** @record */
blink.mojom.SubAppsService_Add_Params = class {
  constructor() {
    /** @export { !Array<!blink.mojom.SubAppsServiceAddInfo> } */
    this.subApps;
  }
};




mojo.internal.Struct(
    blink.mojom.SubAppsService_Add_ResponseParamsSpec.$,
    'SubAppsService_Add_ResponseParams',
    [
      mojo.internal.StructField(
        'result', 0,
        0,
        mojo.internal.Array(blink.mojom.SubAppsServiceAddResultSpec.$, false),
        null,
        false /* nullable */),
    ],
    [[0, 16],]);





/** @record */
blink.mojom.SubAppsService_Add_ResponseParams = class {
  constructor() {
    /** @export { !Array<!blink.mojom.SubAppsServiceAddResult> } */
    this.result;
  }
};




mojo.internal.Struct(
    blink.mojom.SubAppsService_List_ParamsSpec.$,
    'SubAppsService_List_Params',
    [
    ],
    [[0, 8],]);





/** @record */
blink.mojom.SubAppsService_List_Params = class {
  constructor() {
  }
};




mojo.internal.Struct(
    blink.mojom.SubAppsService_List_ResponseParamsSpec.$,
    'SubAppsService_List_ResponseParams',
    [
      mojo.internal.StructField(
        'result', 0,
        0,
        blink.mojom.SubAppsServiceListResultSpec.$,
        null,
        false /* nullable */),
    ],
    [[0, 16],]);





/** @record */
blink.mojom.SubAppsService_List_ResponseParams = class {
  constructor() {
    /** @export { !blink.mojom.SubAppsServiceListResult } */
    this.result;
  }
};




mojo.internal.Struct(
    blink.mojom.SubAppsService_Remove_ParamsSpec.$,
    'SubAppsService_Remove_Params',
    [
      mojo.internal.StructField(
        'unhashedAppId', 0,
        0,
        mojo.internal.String,
        null,
        false /* nullable */),
    ],
    [[0, 16],]);





/** @record */
blink.mojom.SubAppsService_Remove_Params = class {
  constructor() {
    /** @export { !string } */
    this.unhashedAppId;
  }
};




mojo.internal.Struct(
    blink.mojom.SubAppsService_Remove_ResponseParamsSpec.$,
    'SubAppsService_Remove_ResponseParams',
    [
      mojo.internal.StructField(
        'result', 0,
        0,
        blink.mojom.SubAppsServiceResultSpec.$,
        0,
        false /* nullable */),
    ],
    [[0, 16],]);





/** @record */
blink.mojom.SubAppsService_Remove_ResponseParams = class {
  constructor() {
    /** @export { !blink.mojom.SubAppsServiceResult } */
    this.result;
  }
};


