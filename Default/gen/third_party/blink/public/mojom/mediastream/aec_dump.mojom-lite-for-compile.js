// third_party/blink/public/mojom/mediastream/aec_dump.mojom-lite-for-compile.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
'use strict';

goog.require('mojo.internal');
goog.require('mojo.internal.interfaceSupport');

goog.require('mojoBase.mojom.File');






goog.provide('blink.mojom.AecDumpAgent');
goog.provide('blink.mojom.AecDumpAgentReceiver');
goog.provide('blink.mojom.AecDumpAgentCallbackRouter');
goog.provide('blink.mojom.AecDumpAgentInterface');
goog.provide('blink.mojom.AecDumpAgentRemote');
goog.provide('blink.mojom.AecDumpAgentPendingReceiver');


/**
 * @implements {mojo.internal.interfaceSupport.PendingReceiver}
 * @export
 */
blink.mojom.AecDumpAgentPendingReceiver = class {
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
        blink.mojom.AecDumpAgent.$interfaceName,
        scope);
  }
};

/** @interface */
blink.mojom.AecDumpAgentInterface = class {
  
  /**
   * @param { !mojoBase.mojom.File } file
   */

  start(file) {}
  
  /**
   */

  stop() {}
};

/**
 * @export
 * @implements { blink.mojom.AecDumpAgentInterface }
 */
blink.mojom.AecDumpAgentRemote = class {
  /** @param {MojoHandle|mojo.internal.interfaceSupport.Endpoint=} handle */
  constructor(handle = undefined) {
    /**
     * @private {!mojo.internal.interfaceSupport.InterfaceRemoteBase<!blink.mojom.AecDumpAgentPendingReceiver>}
     */
    this.proxy =
        new mojo.internal.interfaceSupport.InterfaceRemoteBase(
          blink.mojom.AecDumpAgentPendingReceiver,
          handle);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper<!blink.mojom.AecDumpAgentPendingReceiver>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper(this.proxy);

    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.proxy.getConnectionErrorEventRouter();
  }

  
  /**
   * @param { !mojoBase.mojom.File } file
   */

  start(
      file) {
    this.proxy.sendMessage(
        0,
        blink.mojom.AecDumpAgent_Start_ParamsSpec.$,
        null,
        [
          file
        ]);
  }

  
  /**
   */

  stop() {
    this.proxy.sendMessage(
        1,
        blink.mojom.AecDumpAgent_Stop_ParamsSpec.$,
        null,
        [
        ]);
  }
};

/**
 * An object which receives request messages for the AecDumpAgent
 * mojom interface. Must be constructed over an object which implements that
 * interface.
 *
 * @export
 */
blink.mojom.AecDumpAgentReceiver = class {
  /**
   * @param {!blink.mojom.AecDumpAgentInterface } impl
   */
  constructor(impl) {
    /** @private {!mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal<!blink.mojom.AecDumpAgentRemote>} */
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
        blink.mojom.AecDumpAgentRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!blink.mojom.AecDumpAgentRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);


    this.helper_internal_.registerHandler(
        0,
        blink.mojom.AecDumpAgent_Start_ParamsSpec.$,
        null,
        impl.start.bind(impl));
    this.helper_internal_.registerHandler(
        1,
        blink.mojom.AecDumpAgent_Stop_ParamsSpec.$,
        null,
        impl.stop.bind(impl));
    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.helper_internal_.getConnectionErrorEventRouter();
  }
};

/**
 *  @export
 */
blink.mojom.AecDumpAgent = class {
  /**
   * @return {!string}
   */
  static get $interfaceName() {
    return "blink.mojom.AecDumpAgent";
  }

  /**
   * Returns a remote for this interface which sends messages to the browser.
   * The browser must have an interface request binder registered for this
   * interface and accessible to the calling document's frame.
   *
   * @return {!blink.mojom.AecDumpAgentRemote}
   * @export
   */
  static getRemote() {
    let remote = new blink.mojom.AecDumpAgentRemote;
    remote.$.bindNewPipeAndPassReceiver().bindInBrowser();
    return remote;
  }
};


/**
 * An object which receives request messages for the AecDumpAgent
 * mojom interface and dispatches them as callbacks. One callback receiver exists
 * on this object for each message defined in the mojom interface, and each
 * receiver can have any number of listeners added to it.
 *
 * @export
 */
blink.mojom.AecDumpAgentCallbackRouter = class {
  constructor() {
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
      blink.mojom.AecDumpAgentRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!blink.mojom.AecDumpAgentRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);

    this.router_ = new mojo.internal.interfaceSupport.CallbackRouter;

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.start =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        0,
        blink.mojom.AecDumpAgent_Start_ParamsSpec.$,
        null,
        this.start.createReceiverHandler(false /* expectsResponse */));
    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.stop =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        1,
        blink.mojom.AecDumpAgent_Stop_ParamsSpec.$,
        null,
        this.stop.createReceiverHandler(false /* expectsResponse */));
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


goog.provide('blink.mojom.AecDumpManager');
goog.provide('blink.mojom.AecDumpManagerReceiver');
goog.provide('blink.mojom.AecDumpManagerCallbackRouter');
goog.provide('blink.mojom.AecDumpManagerInterface');
goog.provide('blink.mojom.AecDumpManagerRemote');
goog.provide('blink.mojom.AecDumpManagerPendingReceiver');


/**
 * @implements {mojo.internal.interfaceSupport.PendingReceiver}
 * @export
 */
blink.mojom.AecDumpManagerPendingReceiver = class {
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
        blink.mojom.AecDumpManager.$interfaceName,
        scope);
  }
};

/** @interface */
blink.mojom.AecDumpManagerInterface = class {
  
  /**
   * @param { !blink.mojom.AecDumpAgentRemote } agent
   */

  add(agent) {}
};

/**
 * @export
 * @implements { blink.mojom.AecDumpManagerInterface }
 */
blink.mojom.AecDumpManagerRemote = class {
  /** @param {MojoHandle|mojo.internal.interfaceSupport.Endpoint=} handle */
  constructor(handle = undefined) {
    /**
     * @private {!mojo.internal.interfaceSupport.InterfaceRemoteBase<!blink.mojom.AecDumpManagerPendingReceiver>}
     */
    this.proxy =
        new mojo.internal.interfaceSupport.InterfaceRemoteBase(
          blink.mojom.AecDumpManagerPendingReceiver,
          handle);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper<!blink.mojom.AecDumpManagerPendingReceiver>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper(this.proxy);

    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.proxy.getConnectionErrorEventRouter();
  }

  
  /**
   * @param { !blink.mojom.AecDumpAgentRemote } agent
   */

  add(
      agent) {
    this.proxy.sendMessage(
        0,
        blink.mojom.AecDumpManager_Add_ParamsSpec.$,
        null,
        [
          agent
        ]);
  }
};

/**
 * An object which receives request messages for the AecDumpManager
 * mojom interface. Must be constructed over an object which implements that
 * interface.
 *
 * @export
 */
blink.mojom.AecDumpManagerReceiver = class {
  /**
   * @param {!blink.mojom.AecDumpManagerInterface } impl
   */
  constructor(impl) {
    /** @private {!mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal<!blink.mojom.AecDumpManagerRemote>} */
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
        blink.mojom.AecDumpManagerRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!blink.mojom.AecDumpManagerRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);


    this.helper_internal_.registerHandler(
        0,
        blink.mojom.AecDumpManager_Add_ParamsSpec.$,
        null,
        impl.add.bind(impl));
    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.helper_internal_.getConnectionErrorEventRouter();
  }
};

/**
 *  @export
 */
blink.mojom.AecDumpManager = class {
  /**
   * @return {!string}
   */
  static get $interfaceName() {
    return "blink.mojom.AecDumpManager";
  }

  /**
   * Returns a remote for this interface which sends messages to the browser.
   * The browser must have an interface request binder registered for this
   * interface and accessible to the calling document's frame.
   *
   * @return {!blink.mojom.AecDumpManagerRemote}
   * @export
   */
  static getRemote() {
    let remote = new blink.mojom.AecDumpManagerRemote;
    remote.$.bindNewPipeAndPassReceiver().bindInBrowser();
    return remote;
  }
};


/**
 * An object which receives request messages for the AecDumpManager
 * mojom interface and dispatches them as callbacks. One callback receiver exists
 * on this object for each message defined in the mojom interface, and each
 * receiver can have any number of listeners added to it.
 *
 * @export
 */
blink.mojom.AecDumpManagerCallbackRouter = class {
  constructor() {
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
      blink.mojom.AecDumpManagerRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!blink.mojom.AecDumpManagerRemote>}
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
        blink.mojom.AecDumpManager_Add_ParamsSpec.$,
        null,
        this.add.createReceiverHandler(false /* expectsResponse */));
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


goog.provide('blink.mojom.AecDumpAgent_Start_ParamsSpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
blink.mojom.AecDumpAgent_Start_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

goog.provide('blink.mojom.AecDumpAgent_Stop_ParamsSpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
blink.mojom.AecDumpAgent_Stop_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

goog.provide('blink.mojom.AecDumpManager_Add_ParamsSpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
blink.mojom.AecDumpManager_Add_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };




mojo.internal.Struct(
    blink.mojom.AecDumpAgent_Start_ParamsSpec.$,
    'AecDumpAgent_Start_Params',
    [
      mojo.internal.StructField(
        'file', 0,
        0,
        mojoBase.mojom.FileSpec.$,
        null,
        false /* nullable */),
    ],
    [[0, 16],]);



goog.provide('blink.mojom.AecDumpAgent_Start_Params');

/** @record */
blink.mojom.AecDumpAgent_Start_Params = class {
  constructor() {
    /** @export { !mojoBase.mojom.File } */
    this.file;
  }
};




mojo.internal.Struct(
    blink.mojom.AecDumpAgent_Stop_ParamsSpec.$,
    'AecDumpAgent_Stop_Params',
    [
    ],
    [[0, 8],]);



goog.provide('blink.mojom.AecDumpAgent_Stop_Params');

/** @record */
blink.mojom.AecDumpAgent_Stop_Params = class {
  constructor() {
  }
};




mojo.internal.Struct(
    blink.mojom.AecDumpManager_Add_ParamsSpec.$,
    'AecDumpManager_Add_Params',
    [
      mojo.internal.StructField(
        'agent', 0,
        0,
        mojo.internal.InterfaceProxy(blink.mojom.AecDumpAgentRemote),
        null,
        false /* nullable */),
    ],
    [[0, 16],]);



goog.provide('blink.mojom.AecDumpManager_Add_Params');

/** @record */
blink.mojom.AecDumpManager_Add_Params = class {
  constructor() {
    /** @export { !blink.mojom.AecDumpAgentRemote } */
    this.agent;
  }
};


