// third_party/blink/public/mojom/font_access/font_access.mojom-lite-for-compile.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
'use strict';

goog.require('mojo.internal');
goog.require('mojo.internal.interfaceSupport');

goog.require('mojoBase.mojom.ReadOnlySharedMemoryRegion');




goog.provide('blink.mojom.FontEnumerationStatus');
goog.provide('blink.mojom.FontEnumerationStatusSpec');
/**
 * @const { {$: !mojo.internal.MojomType} }
 * @export
 */
blink.mojom.FontEnumerationStatusSpec = { $: mojo.internal.Enum() };

/**
 * @enum {number}
 * @export
 */
blink.mojom.FontEnumerationStatus = {
  
  kOk: 0,
  kUnimplemented: 1,
  kUnexpectedError: 2,
  kNeedsUserActivation: 3,
  kNotVisible: 4,
  kPermissionDenied: 5,
  MIN_VALUE: 0,
  MAX_VALUE: 5,
};



goog.provide('blink.mojom.FontAccessManager');
goog.provide('blink.mojom.FontAccessManagerReceiver');
goog.provide('blink.mojom.FontAccessManagerCallbackRouter');
goog.provide('blink.mojom.FontAccessManagerInterface');
goog.provide('blink.mojom.FontAccessManagerRemote');
goog.provide('blink.mojom.FontAccessManagerPendingReceiver');


/**
 * @implements {mojo.internal.interfaceSupport.PendingReceiver}
 * @export
 */
blink.mojom.FontAccessManagerPendingReceiver = class {
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
        blink.mojom.FontAccessManager.$interfaceName,
        scope);
  }
};

/** @interface */
blink.mojom.FontAccessManagerInterface = class {
  
  /**
   * @return {!Promise<{
        enumerationStatus: !blink.mojom.FontEnumerationStatus,
        enumerationTable: ?mojoBase.mojom.ReadOnlySharedMemoryRegion,
   *  }>}
   */

  enumerateLocalFonts() {}
};

/**
 * @export
 * @implements { blink.mojom.FontAccessManagerInterface }
 */
blink.mojom.FontAccessManagerRemote = class {
  /** @param {MojoHandle|mojo.internal.interfaceSupport.Endpoint=} handle */
  constructor(handle = undefined) {
    /**
     * @private {!mojo.internal.interfaceSupport.InterfaceRemoteBase<!blink.mojom.FontAccessManagerPendingReceiver>}
     */
    this.proxy =
        new mojo.internal.interfaceSupport.InterfaceRemoteBase(
          blink.mojom.FontAccessManagerPendingReceiver,
          handle);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper<!blink.mojom.FontAccessManagerPendingReceiver>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper(this.proxy);

    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.proxy.getConnectionErrorEventRouter();
  }

  
  /**
   * @return {!Promise<{
        enumerationStatus: !blink.mojom.FontEnumerationStatus,
        enumerationTable: ?mojoBase.mojom.ReadOnlySharedMemoryRegion,
   *  }>}
   */

  enumerateLocalFonts() {
    return this.proxy.sendMessage(
        0,
        blink.mojom.FontAccessManager_EnumerateLocalFonts_ParamsSpec.$,
        blink.mojom.FontAccessManager_EnumerateLocalFonts_ResponseParamsSpec.$,
        [
        ]);
  }
};

/**
 * An object which receives request messages for the FontAccessManager
 * mojom interface. Must be constructed over an object which implements that
 * interface.
 *
 * @export
 */
blink.mojom.FontAccessManagerReceiver = class {
  /**
   * @param {!blink.mojom.FontAccessManagerInterface } impl
   */
  constructor(impl) {
    /** @private {!mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal<!blink.mojom.FontAccessManagerRemote>} */
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
        blink.mojom.FontAccessManagerRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!blink.mojom.FontAccessManagerRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);


    this.helper_internal_.registerHandler(
        0,
        blink.mojom.FontAccessManager_EnumerateLocalFonts_ParamsSpec.$,
        blink.mojom.FontAccessManager_EnumerateLocalFonts_ResponseParamsSpec.$,
        impl.enumerateLocalFonts.bind(impl));
    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.helper_internal_.getConnectionErrorEventRouter();
  }
};

/**
 *  @export
 */
blink.mojom.FontAccessManager = class {
  /**
   * @return {!string}
   */
  static get $interfaceName() {
    return "blink.mojom.FontAccessManager";
  }

  /**
   * Returns a remote for this interface which sends messages to the browser.
   * The browser must have an interface request binder registered for this
   * interface and accessible to the calling document's frame.
   *
   * @return {!blink.mojom.FontAccessManagerRemote}
   * @export
   */
  static getRemote() {
    let remote = new blink.mojom.FontAccessManagerRemote;
    remote.$.bindNewPipeAndPassReceiver().bindInBrowser();
    return remote;
  }
};


/**
 * An object which receives request messages for the FontAccessManager
 * mojom interface and dispatches them as callbacks. One callback receiver exists
 * on this object for each message defined in the mojom interface, and each
 * receiver can have any number of listeners added to it.
 *
 * @export
 */
blink.mojom.FontAccessManagerCallbackRouter = class {
  constructor() {
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
      blink.mojom.FontAccessManagerRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!blink.mojom.FontAccessManagerRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);

    this.router_ = new mojo.internal.interfaceSupport.CallbackRouter;

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.enumerateLocalFonts =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        0,
        blink.mojom.FontAccessManager_EnumerateLocalFonts_ParamsSpec.$,
        blink.mojom.FontAccessManager_EnumerateLocalFonts_ResponseParamsSpec.$,
        this.enumerateLocalFonts.createReceiverHandler(true /* expectsResponse */));
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


goog.provide('blink.mojom.FontDataSpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
blink.mojom.FontDataSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

goog.provide('blink.mojom.FontAccessManager_EnumerateLocalFonts_ParamsSpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
blink.mojom.FontAccessManager_EnumerateLocalFonts_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

goog.provide('blink.mojom.FontAccessManager_EnumerateLocalFonts_ResponseParamsSpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
blink.mojom.FontAccessManager_EnumerateLocalFonts_ResponseParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };




mojo.internal.Struct(
    blink.mojom.FontDataSpec.$,
    'FontData',
    [
      mojo.internal.StructField(
        'postscriptName', 0,
        0,
        mojo.internal.String,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'fullName', 8,
        0,
        mojo.internal.String,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'family', 16,
        0,
        mojo.internal.String,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'style', 24,
        0,
        mojo.internal.String,
        null,
        false /* nullable */),
    ],
    [[0, 40],]);



goog.provide('blink.mojom.FontData');

/** @record */
blink.mojom.FontData = class {
  constructor() {
    /** @export { !string } */
    this.postscriptName;
    /** @export { !string } */
    this.fullName;
    /** @export { !string } */
    this.family;
    /** @export { !string } */
    this.style;
  }
};




mojo.internal.Struct(
    blink.mojom.FontAccessManager_EnumerateLocalFonts_ParamsSpec.$,
    'FontAccessManager_EnumerateLocalFonts_Params',
    [
    ],
    [[0, 8],]);



goog.provide('blink.mojom.FontAccessManager_EnumerateLocalFonts_Params');

/** @record */
blink.mojom.FontAccessManager_EnumerateLocalFonts_Params = class {
  constructor() {
  }
};




mojo.internal.Struct(
    blink.mojom.FontAccessManager_EnumerateLocalFonts_ResponseParamsSpec.$,
    'FontAccessManager_EnumerateLocalFonts_ResponseParams',
    [
      mojo.internal.StructField(
        'enumerationStatus', 0,
        0,
        blink.mojom.FontEnumerationStatusSpec.$,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'enumerationTable', 8,
        0,
        mojoBase.mojom.ReadOnlySharedMemoryRegionSpec.$,
        null,
        true /* nullable */),
    ],
    [[0, 24],]);



goog.provide('blink.mojom.FontAccessManager_EnumerateLocalFonts_ResponseParams');

/** @record */
blink.mojom.FontAccessManager_EnumerateLocalFonts_ResponseParams = class {
  constructor() {
    /** @export { !blink.mojom.FontEnumerationStatus } */
    this.enumerationStatus;
    /** @export { (mojoBase.mojom.ReadOnlySharedMemoryRegion|undefined) } */
    this.enumerationTable;
  }
};


