// third_party/blink/public/mojom/render_accessibility.mojom-lite-for-compile.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
'use strict';

goog.require('mojo.internal');
goog.require('mojo.internal.interfaceSupport');

goog.require('ax.mojom.Event');
goog.require('ax.mojom.AXActionData');
goog.require('ax.mojom.AXEvent');
goog.require('ax.mojom.AXRelativeBounds');
goog.require('ax.mojom.AXTreeUpdate');
goog.require('gfx.mojom.Point');
goog.require('blink.mojom.FrameToken');






goog.provide('blink.mojom.RenderAccessibilityHost');
goog.provide('blink.mojom.RenderAccessibilityHostReceiver');
goog.provide('blink.mojom.RenderAccessibilityHostCallbackRouter');
goog.provide('blink.mojom.RenderAccessibilityHostInterface');
goog.provide('blink.mojom.RenderAccessibilityHostRemote');
goog.provide('blink.mojom.RenderAccessibilityHostPendingReceiver');


/**
 * @implements {mojo.internal.interfaceSupport.PendingReceiver}
 * @export
 */
blink.mojom.RenderAccessibilityHostPendingReceiver = class {
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
        blink.mojom.RenderAccessibilityHost.$interfaceName,
        scope);
  }
};

/** @interface */
blink.mojom.RenderAccessibilityHostInterface = class {
  
  /**
   * @param { !blink.mojom.AXUpdatesAndEvents } eventsAndUpdates
   * @param { !number } resetToken
   * @return {!Promise}
   */

  handleAXEvents(eventsAndUpdates, resetToken) {}
  
  /**
   * @param { !Array<!blink.mojom.LocationChanges> } changes
   */

  handleAXLocationChanges(changes) {}
};

/**
 * @export
 * @implements { blink.mojom.RenderAccessibilityHostInterface }
 */
blink.mojom.RenderAccessibilityHostRemote = class {
  /** @param {MojoHandle|mojo.internal.interfaceSupport.Endpoint=} handle */
  constructor(handle = undefined) {
    /**
     * @private {!mojo.internal.interfaceSupport.InterfaceRemoteBase<!blink.mojom.RenderAccessibilityHostPendingReceiver>}
     */
    this.proxy =
        new mojo.internal.interfaceSupport.InterfaceRemoteBase(
          blink.mojom.RenderAccessibilityHostPendingReceiver,
          handle);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper<!blink.mojom.RenderAccessibilityHostPendingReceiver>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper(this.proxy);

    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.proxy.getConnectionErrorEventRouter();
  }

  
  /**
   * @param { !blink.mojom.AXUpdatesAndEvents } eventsAndUpdates
   * @param { !number } resetToken
   * @return {!Promise}
   */

  handleAXEvents(
      eventsAndUpdates,
      resetToken) {
    return this.proxy.sendMessage(
        0,
        blink.mojom.RenderAccessibilityHost_HandleAXEvents_ParamsSpec.$,
        blink.mojom.RenderAccessibilityHost_HandleAXEvents_ResponseParamsSpec.$,
        [
          eventsAndUpdates,
          resetToken
        ]);
  }

  
  /**
   * @param { !Array<!blink.mojom.LocationChanges> } changes
   */

  handleAXLocationChanges(
      changes) {
    this.proxy.sendMessage(
        1,
        blink.mojom.RenderAccessibilityHost_HandleAXLocationChanges_ParamsSpec.$,
        null,
        [
          changes
        ]);
  }
};

/**
 * An object which receives request messages for the RenderAccessibilityHost
 * mojom interface. Must be constructed over an object which implements that
 * interface.
 *
 * @export
 */
blink.mojom.RenderAccessibilityHostReceiver = class {
  /**
   * @param {!blink.mojom.RenderAccessibilityHostInterface } impl
   */
  constructor(impl) {
    /** @private {!mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal<!blink.mojom.RenderAccessibilityHostRemote>} */
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
        blink.mojom.RenderAccessibilityHostRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!blink.mojom.RenderAccessibilityHostRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);


    this.helper_internal_.registerHandler(
        0,
        blink.mojom.RenderAccessibilityHost_HandleAXEvents_ParamsSpec.$,
        blink.mojom.RenderAccessibilityHost_HandleAXEvents_ResponseParamsSpec.$,
        impl.handleAXEvents.bind(impl));
    this.helper_internal_.registerHandler(
        1,
        blink.mojom.RenderAccessibilityHost_HandleAXLocationChanges_ParamsSpec.$,
        null,
        impl.handleAXLocationChanges.bind(impl));
    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.helper_internal_.getConnectionErrorEventRouter();
  }
};

/**
 *  @export
 */
blink.mojom.RenderAccessibilityHost = class {
  /**
   * @return {!string}
   */
  static get $interfaceName() {
    return "blink.mojom.RenderAccessibilityHost";
  }

  /**
   * Returns a remote for this interface which sends messages to the browser.
   * The browser must have an interface request binder registered for this
   * interface and accessible to the calling document's frame.
   *
   * @return {!blink.mojom.RenderAccessibilityHostRemote}
   * @export
   */
  static getRemote() {
    let remote = new blink.mojom.RenderAccessibilityHostRemote;
    remote.$.bindNewPipeAndPassReceiver().bindInBrowser();
    return remote;
  }
};


/**
 * An object which receives request messages for the RenderAccessibilityHost
 * mojom interface and dispatches them as callbacks. One callback receiver exists
 * on this object for each message defined in the mojom interface, and each
 * receiver can have any number of listeners added to it.
 *
 * @export
 */
blink.mojom.RenderAccessibilityHostCallbackRouter = class {
  constructor() {
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
      blink.mojom.RenderAccessibilityHostRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!blink.mojom.RenderAccessibilityHostRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);

    this.router_ = new mojo.internal.interfaceSupport.CallbackRouter;

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.handleAXEvents =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        0,
        blink.mojom.RenderAccessibilityHost_HandleAXEvents_ParamsSpec.$,
        blink.mojom.RenderAccessibilityHost_HandleAXEvents_ResponseParamsSpec.$,
        this.handleAXEvents.createReceiverHandler(true /* expectsResponse */));
    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.handleAXLocationChanges =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        1,
        blink.mojom.RenderAccessibilityHost_HandleAXLocationChanges_ParamsSpec.$,
        null,
        this.handleAXLocationChanges.createReceiverHandler(false /* expectsResponse */));
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


goog.provide('blink.mojom.RenderAccessibility');
goog.provide('blink.mojom.RenderAccessibilityReceiver');
goog.provide('blink.mojom.RenderAccessibilityCallbackRouter');
goog.provide('blink.mojom.RenderAccessibilityInterface');
goog.provide('blink.mojom.RenderAccessibilityRemote');
goog.provide('blink.mojom.RenderAccessibilityPendingReceiver');


/**
 * @implements {mojo.internal.interfaceSupport.PendingReceiver}
 * @export
 */
blink.mojom.RenderAccessibilityPendingReceiver = class {
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
        blink.mojom.RenderAccessibility.$interfaceName,
        scope);
  }
};

/** @interface */
blink.mojom.RenderAccessibilityInterface = class {
  
  /**
   * @param { !number } axMode
   */

  setMode(axMode) {}
  
  /**
   */

  fatalError() {}
  
  /**
   * @param { !gfx.mojom.Point } point
   * @param { !ax.mojom.Event } eventToFire
   * @param { !number } requestId
   * @return {!Promise<{
        hitTestResponse: ?blink.mojom.HitTestResponse,
   *  }>}
   */

  hitTest(point, eventToFire, requestId) {}
  
  /**
   * @param { !ax.mojom.AXActionData } actionData
   */

  performAction(actionData) {}
  
  /**
   * @param { !number } resetToken
   */

  reset(resetToken) {}
};

/**
 * @export
 * @implements { blink.mojom.RenderAccessibilityInterface }
 */
blink.mojom.RenderAccessibilityRemote = class {
  /** @param {MojoHandle|mojo.internal.interfaceSupport.Endpoint=} handle */
  constructor(handle = undefined) {
    /**
     * @private {!mojo.internal.interfaceSupport.InterfaceRemoteBase<!blink.mojom.RenderAccessibilityPendingReceiver>}
     */
    this.proxy =
        new mojo.internal.interfaceSupport.InterfaceRemoteBase(
          blink.mojom.RenderAccessibilityPendingReceiver,
          handle);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper<!blink.mojom.RenderAccessibilityPendingReceiver>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper(this.proxy);

    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.proxy.getConnectionErrorEventRouter();
  }

  
  /**
   * @param { !number } axMode
   */

  setMode(
      axMode) {
    this.proxy.sendMessage(
        0,
        blink.mojom.RenderAccessibility_SetMode_ParamsSpec.$,
        null,
        [
          axMode
        ]);
  }

  
  /**
   */

  fatalError() {
    this.proxy.sendMessage(
        1,
        blink.mojom.RenderAccessibility_FatalError_ParamsSpec.$,
        null,
        [
        ]);
  }

  
  /**
   * @param { !gfx.mojom.Point } point
   * @param { !ax.mojom.Event } eventToFire
   * @param { !number } requestId
   * @return {!Promise<{
        hitTestResponse: ?blink.mojom.HitTestResponse,
   *  }>}
   */

  hitTest(
      point,
      eventToFire,
      requestId) {
    return this.proxy.sendMessage(
        2,
        blink.mojom.RenderAccessibility_HitTest_ParamsSpec.$,
        blink.mojom.RenderAccessibility_HitTest_ResponseParamsSpec.$,
        [
          point,
          eventToFire,
          requestId
        ]);
  }

  
  /**
   * @param { !ax.mojom.AXActionData } actionData
   */

  performAction(
      actionData) {
    this.proxy.sendMessage(
        3,
        blink.mojom.RenderAccessibility_PerformAction_ParamsSpec.$,
        null,
        [
          actionData
        ]);
  }

  
  /**
   * @param { !number } resetToken
   */

  reset(
      resetToken) {
    this.proxy.sendMessage(
        4,
        blink.mojom.RenderAccessibility_Reset_ParamsSpec.$,
        null,
        [
          resetToken
        ]);
  }
};

/**
 * An object which receives request messages for the RenderAccessibility
 * mojom interface. Must be constructed over an object which implements that
 * interface.
 *
 * @export
 */
blink.mojom.RenderAccessibilityReceiver = class {
  /**
   * @param {!blink.mojom.RenderAccessibilityInterface } impl
   */
  constructor(impl) {
    /** @private {!mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal<!blink.mojom.RenderAccessibilityRemote>} */
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
        blink.mojom.RenderAccessibilityRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!blink.mojom.RenderAccessibilityRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);


    this.helper_internal_.registerHandler(
        0,
        blink.mojom.RenderAccessibility_SetMode_ParamsSpec.$,
        null,
        impl.setMode.bind(impl));
    this.helper_internal_.registerHandler(
        1,
        blink.mojom.RenderAccessibility_FatalError_ParamsSpec.$,
        null,
        impl.fatalError.bind(impl));
    this.helper_internal_.registerHandler(
        2,
        blink.mojom.RenderAccessibility_HitTest_ParamsSpec.$,
        blink.mojom.RenderAccessibility_HitTest_ResponseParamsSpec.$,
        impl.hitTest.bind(impl));
    this.helper_internal_.registerHandler(
        3,
        blink.mojom.RenderAccessibility_PerformAction_ParamsSpec.$,
        null,
        impl.performAction.bind(impl));
    this.helper_internal_.registerHandler(
        4,
        blink.mojom.RenderAccessibility_Reset_ParamsSpec.$,
        null,
        impl.reset.bind(impl));
    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.helper_internal_.getConnectionErrorEventRouter();
  }
};

/**
 *  @export
 */
blink.mojom.RenderAccessibility = class {
  /**
   * @return {!string}
   */
  static get $interfaceName() {
    return "blink.mojom.RenderAccessibility";
  }

  /**
   * Returns a remote for this interface which sends messages to the browser.
   * The browser must have an interface request binder registered for this
   * interface and accessible to the calling document's frame.
   *
   * @return {!blink.mojom.RenderAccessibilityRemote}
   * @export
   */
  static getRemote() {
    let remote = new blink.mojom.RenderAccessibilityRemote;
    remote.$.bindNewPipeAndPassReceiver().bindInBrowser();
    return remote;
  }
};


/**
 * An object which receives request messages for the RenderAccessibility
 * mojom interface and dispatches them as callbacks. One callback receiver exists
 * on this object for each message defined in the mojom interface, and each
 * receiver can have any number of listeners added to it.
 *
 * @export
 */
blink.mojom.RenderAccessibilityCallbackRouter = class {
  constructor() {
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
      blink.mojom.RenderAccessibilityRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!blink.mojom.RenderAccessibilityRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);

    this.router_ = new mojo.internal.interfaceSupport.CallbackRouter;

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.setMode =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        0,
        blink.mojom.RenderAccessibility_SetMode_ParamsSpec.$,
        null,
        this.setMode.createReceiverHandler(false /* expectsResponse */));
    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.fatalError =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        1,
        blink.mojom.RenderAccessibility_FatalError_ParamsSpec.$,
        null,
        this.fatalError.createReceiverHandler(false /* expectsResponse */));
    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.hitTest =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        2,
        blink.mojom.RenderAccessibility_HitTest_ParamsSpec.$,
        blink.mojom.RenderAccessibility_HitTest_ResponseParamsSpec.$,
        this.hitTest.createReceiverHandler(true /* expectsResponse */));
    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.performAction =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        3,
        blink.mojom.RenderAccessibility_PerformAction_ParamsSpec.$,
        null,
        this.performAction.createReceiverHandler(false /* expectsResponse */));
    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.reset =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        4,
        blink.mojom.RenderAccessibility_Reset_ParamsSpec.$,
        null,
        this.reset.createReceiverHandler(false /* expectsResponse */));
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


goog.provide('blink.mojom.LocationChangesSpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
blink.mojom.LocationChangesSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

goog.provide('blink.mojom.HitTestResponseSpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
blink.mojom.HitTestResponseSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

goog.provide('blink.mojom.AXUpdatesAndEventsSpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
blink.mojom.AXUpdatesAndEventsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

goog.provide('blink.mojom.RenderAccessibilityHost_HandleAXEvents_ParamsSpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
blink.mojom.RenderAccessibilityHost_HandleAXEvents_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

goog.provide('blink.mojom.RenderAccessibilityHost_HandleAXEvents_ResponseParamsSpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
blink.mojom.RenderAccessibilityHost_HandleAXEvents_ResponseParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

goog.provide('blink.mojom.RenderAccessibilityHost_HandleAXLocationChanges_ParamsSpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
blink.mojom.RenderAccessibilityHost_HandleAXLocationChanges_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

goog.provide('blink.mojom.RenderAccessibility_SetMode_ParamsSpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
blink.mojom.RenderAccessibility_SetMode_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

goog.provide('blink.mojom.RenderAccessibility_FatalError_ParamsSpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
blink.mojom.RenderAccessibility_FatalError_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

goog.provide('blink.mojom.RenderAccessibility_HitTest_ParamsSpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
blink.mojom.RenderAccessibility_HitTest_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

goog.provide('blink.mojom.RenderAccessibility_HitTest_ResponseParamsSpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
blink.mojom.RenderAccessibility_HitTest_ResponseParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

goog.provide('blink.mojom.RenderAccessibility_PerformAction_ParamsSpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
blink.mojom.RenderAccessibility_PerformAction_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

goog.provide('blink.mojom.RenderAccessibility_Reset_ParamsSpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
blink.mojom.RenderAccessibility_Reset_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };




mojo.internal.Struct(
    blink.mojom.LocationChangesSpec.$,
    'LocationChanges',
    [
      mojo.internal.StructField(
        'id', 0,
        0,
        mojo.internal.Int32,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'newLocation', 8,
        0,
        ax.mojom.AXRelativeBoundsSpec.$,
        null,
        false /* nullable */),
    ],
    [[0, 24],]);



goog.provide('blink.mojom.LocationChanges');

/** @record */
blink.mojom.LocationChanges = class {
  constructor() {
    /** @export { !number } */
    this.id;
    /** @export { !ax.mojom.AXRelativeBounds } */
    this.newLocation;
  }
};




mojo.internal.Struct(
    blink.mojom.HitTestResponseSpec.$,
    'HitTestResponse',
    [
      mojo.internal.StructField(
        'hitFrameToken', 0,
        0,
        blink.mojom.FrameTokenSpec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'hitFrameTransformedPoint', 16,
        0,
        gfx.mojom.PointSpec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'hitNodeId', 24,
        0,
        mojo.internal.Int32,
        0,
        false /* nullable */),
    ],
    [[0, 40],]);



goog.provide('blink.mojom.HitTestResponse');

/** @record */
blink.mojom.HitTestResponse = class {
  constructor() {
    /** @export { !blink.mojom.FrameToken } */
    this.hitFrameToken;
    /** @export { !gfx.mojom.Point } */
    this.hitFrameTransformedPoint;
    /** @export { !number } */
    this.hitNodeId;
  }
};




mojo.internal.Struct(
    blink.mojom.AXUpdatesAndEventsSpec.$,
    'AXUpdatesAndEvents',
    [
      mojo.internal.StructField(
        'updates', 0,
        0,
        mojo.internal.Array(ax.mojom.AXTreeUpdateSpec.$, false),
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'events', 8,
        0,
        mojo.internal.Array(ax.mojom.AXEventSpec.$, false),
        null,
        false /* nullable */),
    ],
    [[0, 24],]);



goog.provide('blink.mojom.AXUpdatesAndEvents');

/** @record */
blink.mojom.AXUpdatesAndEvents = class {
  constructor() {
    /** @export { !Array<!ax.mojom.AXTreeUpdate> } */
    this.updates;
    /** @export { !Array<!ax.mojom.AXEvent> } */
    this.events;
  }
};




mojo.internal.Struct(
    blink.mojom.RenderAccessibilityHost_HandleAXEvents_ParamsSpec.$,
    'RenderAccessibilityHost_HandleAXEvents_Params',
    [
      mojo.internal.StructField(
        'eventsAndUpdates', 0,
        0,
        blink.mojom.AXUpdatesAndEventsSpec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'resetToken', 8,
        0,
        mojo.internal.Int32,
        0,
        false /* nullable */),
    ],
    [[0, 24],]);



goog.provide('blink.mojom.RenderAccessibilityHost_HandleAXEvents_Params');

/** @record */
blink.mojom.RenderAccessibilityHost_HandleAXEvents_Params = class {
  constructor() {
    /** @export { !blink.mojom.AXUpdatesAndEvents } */
    this.eventsAndUpdates;
    /** @export { !number } */
    this.resetToken;
  }
};




mojo.internal.Struct(
    blink.mojom.RenderAccessibilityHost_HandleAXEvents_ResponseParamsSpec.$,
    'RenderAccessibilityHost_HandleAXEvents_ResponseParams',
    [
    ],
    [[0, 8],]);



goog.provide('blink.mojom.RenderAccessibilityHost_HandleAXEvents_ResponseParams');

/** @record */
blink.mojom.RenderAccessibilityHost_HandleAXEvents_ResponseParams = class {
  constructor() {
  }
};




mojo.internal.Struct(
    blink.mojom.RenderAccessibilityHost_HandleAXLocationChanges_ParamsSpec.$,
    'RenderAccessibilityHost_HandleAXLocationChanges_Params',
    [
      mojo.internal.StructField(
        'changes', 0,
        0,
        mojo.internal.Array(blink.mojom.LocationChangesSpec.$, false),
        null,
        false /* nullable */),
    ],
    [[0, 16],]);



goog.provide('blink.mojom.RenderAccessibilityHost_HandleAXLocationChanges_Params');

/** @record */
blink.mojom.RenderAccessibilityHost_HandleAXLocationChanges_Params = class {
  constructor() {
    /** @export { !Array<!blink.mojom.LocationChanges> } */
    this.changes;
  }
};




mojo.internal.Struct(
    blink.mojom.RenderAccessibility_SetMode_ParamsSpec.$,
    'RenderAccessibility_SetMode_Params',
    [
      mojo.internal.StructField(
        'axMode', 0,
        0,
        mojo.internal.Uint32,
        0,
        false /* nullable */),
    ],
    [[0, 16],]);



goog.provide('blink.mojom.RenderAccessibility_SetMode_Params');

/** @record */
blink.mojom.RenderAccessibility_SetMode_Params = class {
  constructor() {
    /** @export { !number } */
    this.axMode;
  }
};




mojo.internal.Struct(
    blink.mojom.RenderAccessibility_FatalError_ParamsSpec.$,
    'RenderAccessibility_FatalError_Params',
    [
    ],
    [[0, 8],]);



goog.provide('blink.mojom.RenderAccessibility_FatalError_Params');

/** @record */
blink.mojom.RenderAccessibility_FatalError_Params = class {
  constructor() {
  }
};




mojo.internal.Struct(
    blink.mojom.RenderAccessibility_HitTest_ParamsSpec.$,
    'RenderAccessibility_HitTest_Params',
    [
      mojo.internal.StructField(
        'point', 0,
        0,
        gfx.mojom.PointSpec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'eventToFire', 8,
        0,
        ax.mojom.EventSpec.$,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'requestId', 12,
        0,
        mojo.internal.Int32,
        0,
        false /* nullable */),
    ],
    [[0, 24],]);



goog.provide('blink.mojom.RenderAccessibility_HitTest_Params');

/** @record */
blink.mojom.RenderAccessibility_HitTest_Params = class {
  constructor() {
    /** @export { !gfx.mojom.Point } */
    this.point;
    /** @export { !ax.mojom.Event } */
    this.eventToFire;
    /** @export { !number } */
    this.requestId;
  }
};




mojo.internal.Struct(
    blink.mojom.RenderAccessibility_HitTest_ResponseParamsSpec.$,
    'RenderAccessibility_HitTest_ResponseParams',
    [
      mojo.internal.StructField(
        'hitTestResponse', 0,
        0,
        blink.mojom.HitTestResponseSpec.$,
        null,
        true /* nullable */),
    ],
    [[0, 16],]);



goog.provide('blink.mojom.RenderAccessibility_HitTest_ResponseParams');

/** @record */
blink.mojom.RenderAccessibility_HitTest_ResponseParams = class {
  constructor() {
    /** @export { (blink.mojom.HitTestResponse|undefined) } */
    this.hitTestResponse;
  }
};




mojo.internal.Struct(
    blink.mojom.RenderAccessibility_PerformAction_ParamsSpec.$,
    'RenderAccessibility_PerformAction_Params',
    [
      mojo.internal.StructField(
        'actionData', 0,
        0,
        ax.mojom.AXActionDataSpec.$,
        null,
        false /* nullable */),
    ],
    [[0, 16],]);



goog.provide('blink.mojom.RenderAccessibility_PerformAction_Params');

/** @record */
blink.mojom.RenderAccessibility_PerformAction_Params = class {
  constructor() {
    /** @export { !ax.mojom.AXActionData } */
    this.actionData;
  }
};




mojo.internal.Struct(
    blink.mojom.RenderAccessibility_Reset_ParamsSpec.$,
    'RenderAccessibility_Reset_Params',
    [
      mojo.internal.StructField(
        'resetToken', 0,
        0,
        mojo.internal.Int32,
        0,
        false /* nullable */),
    ],
    [[0, 16],]);



goog.provide('blink.mojom.RenderAccessibility_Reset_Params');

/** @record */
blink.mojom.RenderAccessibility_Reset_Params = class {
  constructor() {
    /** @export { !number } */
    this.resetToken;
  }
};


