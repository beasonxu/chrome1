// third_party/blink/public/mojom/render_accessibility.mojom.m.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2020 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

import {mojo} from '../../../../mojo/public/js/bindings.js';

import {
  Event as ax_mojom_Event,
  EventSpec as ax_mojom_EventSpec
} from '../../../../ui/accessibility/ax_enums.mojom.m.js';

import {
  AXActionData as ax_mojom_AXActionData,
  AXActionDataSpec as ax_mojom_AXActionDataSpec
} from '../../../../ui/accessibility/mojom/ax_action_data.mojom.m.js';

import {
  AXEvent as ax_mojom_AXEvent,
  AXEventSpec as ax_mojom_AXEventSpec
} from '../../../../ui/accessibility/mojom/ax_event.mojom.m.js';

import {
  AXRelativeBounds as ax_mojom_AXRelativeBounds,
  AXRelativeBoundsSpec as ax_mojom_AXRelativeBoundsSpec
} from '../../../../ui/accessibility/mojom/ax_relative_bounds.mojom.m.js';

import {
  AXTreeUpdate as ax_mojom_AXTreeUpdate,
  AXTreeUpdateSpec as ax_mojom_AXTreeUpdateSpec
} from '../../../../ui/accessibility/mojom/ax_tree_update.mojom.m.js';

import {
  Point as gfx_mojom_Point,
  PointSpec as gfx_mojom_PointSpec
} from '../../../../ui/gfx/geometry/mojom/geometry.mojom.m.js';

import {
  FrameToken as blink_mojom_FrameToken,
  FrameTokenSpec as blink_mojom_FrameTokenSpec
} from './tokens/tokens.mojom.m.js';




/**
 * @implements {mojo.internal.interfaceSupport.PendingReceiver}
 */
export class RenderAccessibilityHostPendingReceiver {
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
        this.handle, 'blink.mojom.RenderAccessibilityHost', scope);
  }
}

/** @interface */
export class RenderAccessibilityHostInterface {
  
  /**
   * @param { !AXUpdatesAndEvents } eventsAndUpdates
   * @param { !number } resetToken
   * @return {!Promise}
   */

  handleAXEvents(eventsAndUpdates, resetToken) {}
  
  /**
   * @param { !Array<!LocationChanges> } changes
   */

  handleAXLocationChanges(changes) {}
}

/**
 * @implements { RenderAccessibilityHostInterface }
 */
export class RenderAccessibilityHostRemote {
  /** @param {MojoHandle|mojo.internal.interfaceSupport.Endpoint=} handle */
  constructor(handle = undefined) {
    /**
     * @private {!mojo.internal.interfaceSupport.InterfaceRemoteBase<!RenderAccessibilityHostPendingReceiver>}
     */
    this.proxy =
        new mojo.internal.interfaceSupport.InterfaceRemoteBase(
          RenderAccessibilityHostPendingReceiver,
          handle);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper<!RenderAccessibilityHostPendingReceiver>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper(this.proxy);

    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.proxy.getConnectionErrorEventRouter();
  }

  
  /**
   * @param { !AXUpdatesAndEvents } eventsAndUpdates
   * @param { !number } resetToken
   * @return {!Promise}
   */

  handleAXEvents(
      eventsAndUpdates,
      resetToken) {
    return this.proxy.sendMessage(
        0,
        RenderAccessibilityHost_HandleAXEvents_ParamsSpec.$,
        RenderAccessibilityHost_HandleAXEvents_ResponseParamsSpec.$,
        [
          eventsAndUpdates,
          resetToken
        ]);
  }

  
  /**
   * @param { !Array<!LocationChanges> } changes
   */

  handleAXLocationChanges(
      changes) {
    this.proxy.sendMessage(
        1,
        RenderAccessibilityHost_HandleAXLocationChanges_ParamsSpec.$,
        null,
        [
          changes
        ]);
  }
}

/**
 * An object which receives request messages for the RenderAccessibilityHost
 * mojom interface. Must be constructed over an object which implements that
 * interface.
 */
export class RenderAccessibilityHostReceiver {
  /**
   * @param {!RenderAccessibilityHostInterface } impl
   */
  constructor(impl) {
    /** @private {!mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal<!RenderAccessibilityHostRemote>} */
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
        RenderAccessibilityHostRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!RenderAccessibilityHostRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);


    this.helper_internal_.registerHandler(
        0,
        RenderAccessibilityHost_HandleAXEvents_ParamsSpec.$,
        RenderAccessibilityHost_HandleAXEvents_ResponseParamsSpec.$,
        impl.handleAXEvents.bind(impl));
    this.helper_internal_.registerHandler(
        1,
        RenderAccessibilityHost_HandleAXLocationChanges_ParamsSpec.$,
        null,
        impl.handleAXLocationChanges.bind(impl));
    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.helper_internal_.getConnectionErrorEventRouter();
  }
}

export class RenderAccessibilityHost {
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
   * @return {!RenderAccessibilityHostRemote}
   */
  static getRemote() {
    let remote = new RenderAccessibilityHostRemote;
    remote.$.bindNewPipeAndPassReceiver().bindInBrowser();
    return remote;
  }
}


/**
 * An object which receives request messages for the RenderAccessibilityHost
 * mojom interface and dispatches them as callbacks. One callback receiver exists
 * on this object for each message defined in the mojom interface, and each
 * receiver can have any number of listeners added to it.
 */
export class RenderAccessibilityHostCallbackRouter {
  constructor() {
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
      RenderAccessibilityHostRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!RenderAccessibilityHostRemote>}
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
        RenderAccessibilityHost_HandleAXEvents_ParamsSpec.$,
        RenderAccessibilityHost_HandleAXEvents_ResponseParamsSpec.$,
        this.handleAXEvents.createReceiverHandler(true /* expectsResponse */));
    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.handleAXLocationChanges =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        1,
        RenderAccessibilityHost_HandleAXLocationChanges_ParamsSpec.$,
        null,
        this.handleAXLocationChanges.createReceiverHandler(false /* expectsResponse */));
    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.helper_internal_.getConnectionErrorEventRouter();
  }

  /**
   * @param {number} id An ID returned by a prior call to addListener.
   * @return {boolean} True iff the identified listener was found and removed.
   */
  removeListener(id) {
    return this.router_.removeListener(id);
  }
}


/**
 * @implements {mojo.internal.interfaceSupport.PendingReceiver}
 */
export class RenderAccessibilityPendingReceiver {
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
        this.handle, 'blink.mojom.RenderAccessibility', scope);
  }
}

/** @interface */
export class RenderAccessibilityInterface {
  
  /**
   * @param { !number } axMode
   */

  setMode(axMode) {}
  
  /**
   */

  fatalError() {}
  
  /**
   * @param { !gfx_mojom_Point } point
   * @param { !ax_mojom_Event } eventToFire
   * @param { !number } requestId
   * @return {!Promise<{
        hitTestResponse: ?HitTestResponse,
   *  }>}
   */

  hitTest(point, eventToFire, requestId) {}
  
  /**
   * @param { !ax_mojom_AXActionData } actionData
   */

  performAction(actionData) {}
  
  /**
   * @param { !number } resetToken
   */

  reset(resetToken) {}
}

/**
 * @implements { RenderAccessibilityInterface }
 */
export class RenderAccessibilityRemote {
  /** @param {MojoHandle|mojo.internal.interfaceSupport.Endpoint=} handle */
  constructor(handle = undefined) {
    /**
     * @private {!mojo.internal.interfaceSupport.InterfaceRemoteBase<!RenderAccessibilityPendingReceiver>}
     */
    this.proxy =
        new mojo.internal.interfaceSupport.InterfaceRemoteBase(
          RenderAccessibilityPendingReceiver,
          handle);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper<!RenderAccessibilityPendingReceiver>}
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
        RenderAccessibility_SetMode_ParamsSpec.$,
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
        RenderAccessibility_FatalError_ParamsSpec.$,
        null,
        [
        ]);
  }

  
  /**
   * @param { !gfx_mojom_Point } point
   * @param { !ax_mojom_Event } eventToFire
   * @param { !number } requestId
   * @return {!Promise<{
        hitTestResponse: ?HitTestResponse,
   *  }>}
   */

  hitTest(
      point,
      eventToFire,
      requestId) {
    return this.proxy.sendMessage(
        2,
        RenderAccessibility_HitTest_ParamsSpec.$,
        RenderAccessibility_HitTest_ResponseParamsSpec.$,
        [
          point,
          eventToFire,
          requestId
        ]);
  }

  
  /**
   * @param { !ax_mojom_AXActionData } actionData
   */

  performAction(
      actionData) {
    this.proxy.sendMessage(
        3,
        RenderAccessibility_PerformAction_ParamsSpec.$,
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
        RenderAccessibility_Reset_ParamsSpec.$,
        null,
        [
          resetToken
        ]);
  }
}

/**
 * An object which receives request messages for the RenderAccessibility
 * mojom interface. Must be constructed over an object which implements that
 * interface.
 */
export class RenderAccessibilityReceiver {
  /**
   * @param {!RenderAccessibilityInterface } impl
   */
  constructor(impl) {
    /** @private {!mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal<!RenderAccessibilityRemote>} */
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
        RenderAccessibilityRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!RenderAccessibilityRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);


    this.helper_internal_.registerHandler(
        0,
        RenderAccessibility_SetMode_ParamsSpec.$,
        null,
        impl.setMode.bind(impl));
    this.helper_internal_.registerHandler(
        1,
        RenderAccessibility_FatalError_ParamsSpec.$,
        null,
        impl.fatalError.bind(impl));
    this.helper_internal_.registerHandler(
        2,
        RenderAccessibility_HitTest_ParamsSpec.$,
        RenderAccessibility_HitTest_ResponseParamsSpec.$,
        impl.hitTest.bind(impl));
    this.helper_internal_.registerHandler(
        3,
        RenderAccessibility_PerformAction_ParamsSpec.$,
        null,
        impl.performAction.bind(impl));
    this.helper_internal_.registerHandler(
        4,
        RenderAccessibility_Reset_ParamsSpec.$,
        null,
        impl.reset.bind(impl));
    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.helper_internal_.getConnectionErrorEventRouter();
  }
}

export class RenderAccessibility {
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
   * @return {!RenderAccessibilityRemote}
   */
  static getRemote() {
    let remote = new RenderAccessibilityRemote;
    remote.$.bindNewPipeAndPassReceiver().bindInBrowser();
    return remote;
  }
}


/**
 * An object which receives request messages for the RenderAccessibility
 * mojom interface and dispatches them as callbacks. One callback receiver exists
 * on this object for each message defined in the mojom interface, and each
 * receiver can have any number of listeners added to it.
 */
export class RenderAccessibilityCallbackRouter {
  constructor() {
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
      RenderAccessibilityRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!RenderAccessibilityRemote>}
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
        RenderAccessibility_SetMode_ParamsSpec.$,
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
        RenderAccessibility_FatalError_ParamsSpec.$,
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
        RenderAccessibility_HitTest_ParamsSpec.$,
        RenderAccessibility_HitTest_ResponseParamsSpec.$,
        this.hitTest.createReceiverHandler(true /* expectsResponse */));
    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.performAction =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        3,
        RenderAccessibility_PerformAction_ParamsSpec.$,
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
        RenderAccessibility_Reset_ParamsSpec.$,
        null,
        this.reset.createReceiverHandler(false /* expectsResponse */));
    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.helper_internal_.getConnectionErrorEventRouter();
  }

  /**
   * @param {number} id An ID returned by a prior call to addListener.
   * @return {boolean} True iff the identified listener was found and removed.
   */
  removeListener(id) {
    return this.router_.removeListener(id);
  }
}

/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const LocationChangesSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const HitTestResponseSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const AXUpdatesAndEventsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const RenderAccessibilityHost_HandleAXEvents_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const RenderAccessibilityHost_HandleAXEvents_ResponseParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const RenderAccessibilityHost_HandleAXLocationChanges_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const RenderAccessibility_SetMode_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const RenderAccessibility_FatalError_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const RenderAccessibility_HitTest_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const RenderAccessibility_HitTest_ResponseParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const RenderAccessibility_PerformAction_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const RenderAccessibility_Reset_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };




mojo.internal.Struct(
    LocationChangesSpec.$,
    'LocationChanges',
    [
      mojo.internal.StructField(
        'id', 0,
        0,
        mojo.internal.Int32,
        0,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'newLocation', 8,
        0,
        ax_mojom_AXRelativeBoundsSpec.$,
        null,
        false /* nullable */,
        0),
    ],
    [[0, 24],]);



/**
 * @record
 */
export class LocationChanges {
  constructor() {
    /** @type { !number } */
    this.id;
    /** @type { !ax_mojom_AXRelativeBounds } */
    this.newLocation;
  }
}



mojo.internal.Struct(
    HitTestResponseSpec.$,
    'HitTestResponse',
    [
      mojo.internal.StructField(
        'hitFrameToken', 0,
        0,
        blink_mojom_FrameTokenSpec.$,
        null,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'hitFrameTransformedPoint', 16,
        0,
        gfx_mojom_PointSpec.$,
        null,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'hitNodeId', 24,
        0,
        mojo.internal.Int32,
        0,
        false /* nullable */,
        0),
    ],
    [[0, 40],]);



/**
 * @record
 */
export class HitTestResponse {
  constructor() {
    /** @type { !blink_mojom_FrameToken } */
    this.hitFrameToken;
    /** @type { !gfx_mojom_Point } */
    this.hitFrameTransformedPoint;
    /** @type { !number } */
    this.hitNodeId;
  }
}



mojo.internal.Struct(
    AXUpdatesAndEventsSpec.$,
    'AXUpdatesAndEvents',
    [
      mojo.internal.StructField(
        'updates', 0,
        0,
        mojo.internal.Array(ax_mojom_AXTreeUpdateSpec.$, false),
        null,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'events', 8,
        0,
        mojo.internal.Array(ax_mojom_AXEventSpec.$, false),
        null,
        false /* nullable */,
        0),
    ],
    [[0, 24],]);



/**
 * @record
 */
export class AXUpdatesAndEvents {
  constructor() {
    /** @type { !Array<!ax_mojom_AXTreeUpdate> } */
    this.updates;
    /** @type { !Array<!ax_mojom_AXEvent> } */
    this.events;
  }
}



mojo.internal.Struct(
    RenderAccessibilityHost_HandleAXEvents_ParamsSpec.$,
    'RenderAccessibilityHost_HandleAXEvents_Params',
    [
      mojo.internal.StructField(
        'eventsAndUpdates', 0,
        0,
        AXUpdatesAndEventsSpec.$,
        null,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'resetToken', 8,
        0,
        mojo.internal.Int32,
        0,
        false /* nullable */,
        0),
    ],
    [[0, 24],]);



/**
 * @record
 */
export class RenderAccessibilityHost_HandleAXEvents_Params {
  constructor() {
    /** @type { !AXUpdatesAndEvents } */
    this.eventsAndUpdates;
    /** @type { !number } */
    this.resetToken;
  }
}



mojo.internal.Struct(
    RenderAccessibilityHost_HandleAXEvents_ResponseParamsSpec.$,
    'RenderAccessibilityHost_HandleAXEvents_ResponseParams',
    [
    ],
    [[0, 8],]);



/**
 * @record
 */
export class RenderAccessibilityHost_HandleAXEvents_ResponseParams {
  constructor() {
  }
}



mojo.internal.Struct(
    RenderAccessibilityHost_HandleAXLocationChanges_ParamsSpec.$,
    'RenderAccessibilityHost_HandleAXLocationChanges_Params',
    [
      mojo.internal.StructField(
        'changes', 0,
        0,
        mojo.internal.Array(LocationChangesSpec.$, false),
        null,
        false /* nullable */,
        0),
    ],
    [[0, 16],]);



/**
 * @record
 */
export class RenderAccessibilityHost_HandleAXLocationChanges_Params {
  constructor() {
    /** @type { !Array<!LocationChanges> } */
    this.changes;
  }
}



mojo.internal.Struct(
    RenderAccessibility_SetMode_ParamsSpec.$,
    'RenderAccessibility_SetMode_Params',
    [
      mojo.internal.StructField(
        'axMode', 0,
        0,
        mojo.internal.Uint32,
        0,
        false /* nullable */,
        0),
    ],
    [[0, 16],]);



/**
 * @record
 */
export class RenderAccessibility_SetMode_Params {
  constructor() {
    /** @type { !number } */
    this.axMode;
  }
}



mojo.internal.Struct(
    RenderAccessibility_FatalError_ParamsSpec.$,
    'RenderAccessibility_FatalError_Params',
    [
    ],
    [[0, 8],]);



/**
 * @record
 */
export class RenderAccessibility_FatalError_Params {
  constructor() {
  }
}



mojo.internal.Struct(
    RenderAccessibility_HitTest_ParamsSpec.$,
    'RenderAccessibility_HitTest_Params',
    [
      mojo.internal.StructField(
        'point', 0,
        0,
        gfx_mojom_PointSpec.$,
        null,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'eventToFire', 8,
        0,
        ax_mojom_EventSpec.$,
        0,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'requestId', 12,
        0,
        mojo.internal.Int32,
        0,
        false /* nullable */,
        0),
    ],
    [[0, 24],]);



/**
 * @record
 */
export class RenderAccessibility_HitTest_Params {
  constructor() {
    /** @type { !gfx_mojom_Point } */
    this.point;
    /** @type { !ax_mojom_Event } */
    this.eventToFire;
    /** @type { !number } */
    this.requestId;
  }
}



mojo.internal.Struct(
    RenderAccessibility_HitTest_ResponseParamsSpec.$,
    'RenderAccessibility_HitTest_ResponseParams',
    [
      mojo.internal.StructField(
        'hitTestResponse', 0,
        0,
        HitTestResponseSpec.$,
        null,
        true /* nullable */,
        0),
    ],
    [[0, 16],]);



/**
 * @record
 */
export class RenderAccessibility_HitTest_ResponseParams {
  constructor() {
    /** @type { (HitTestResponse|undefined) } */
    this.hitTestResponse;
  }
}



mojo.internal.Struct(
    RenderAccessibility_PerformAction_ParamsSpec.$,
    'RenderAccessibility_PerformAction_Params',
    [
      mojo.internal.StructField(
        'actionData', 0,
        0,
        ax_mojom_AXActionDataSpec.$,
        null,
        false /* nullable */,
        0),
    ],
    [[0, 16],]);



/**
 * @record
 */
export class RenderAccessibility_PerformAction_Params {
  constructor() {
    /** @type { !ax_mojom_AXActionData } */
    this.actionData;
  }
}



mojo.internal.Struct(
    RenderAccessibility_Reset_ParamsSpec.$,
    'RenderAccessibility_Reset_Params',
    [
      mojo.internal.StructField(
        'resetToken', 0,
        0,
        mojo.internal.Int32,
        0,
        false /* nullable */,
        0),
    ],
    [[0, 16],]);



/**
 * @record
 */
export class RenderAccessibility_Reset_Params {
  constructor() {
    /** @type { !number } */
    this.resetToken;
  }
}

