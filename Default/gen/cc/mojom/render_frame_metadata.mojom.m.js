// cc/mojom/render_frame_metadata.mojom.m.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2020 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

import {mojo} from '../../mojo/public/js/bindings.js';

import {
  TimeDelta as mojoBase_mojom_TimeDelta,
  TimeDeltaSpec as mojoBase_mojom_TimeDeltaSpec
} from '../../mojo/public/mojom/base/time.mojom.m.js';

import {
  LocalSurfaceId as viz_mojom_LocalSurfaceId,
  LocalSurfaceIdSpec as viz_mojom_LocalSurfaceIdSpec
} from '../../services/viz/public/mojom/compositing/local_surface_id.mojom.m.js';

import {
  Selection as viz_mojom_Selection,
  SelectionSpec as viz_mojom_SelectionSpec
} from '../../services/viz/public/mojom/compositing/selection.mojom.m.js';

import {
  VerticalScrollDirection as viz_mojom_VerticalScrollDirection,
  VerticalScrollDirectionSpec as viz_mojom_VerticalScrollDirectionSpec
} from '../../services/viz/public/mojom/compositing/vertical_scroll_direction.mojom.m.js';

import {
  SkColor4f as skia_mojom_SkColor4f,
  SkColor4fSpec as skia_mojom_SkColor4fSpec
} from '../../skia/public/mojom/skcolor4f.mojom.m.js';

import {
  PointF as gfx_mojom_PointF,
  PointFSpec as gfx_mojom_PointFSpec,
  Size as gfx_mojom_Size,
  SizeSpec as gfx_mojom_SizeSpec,
  SizeF as gfx_mojom_SizeF,
  SizeFSpec as gfx_mojom_SizeFSpec
} from '../../ui/gfx/geometry/mojom/geometry.mojom.m.js';




/**
 * @implements {mojo.internal.interfaceSupport.PendingReceiver}
 */
export class RenderFrameMetadataObserverPendingReceiver {
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
        this.handle, 'cc.mojom.RenderFrameMetadataObserver', scope);
  }
}

/** @interface */
export class RenderFrameMetadataObserverInterface {
  
  /**
   * @param { !boolean } enabled
   */

  reportAllRootScrolls(enabled) {}
  
  /**
   * @param { !boolean } enabled
   */

  reportAllFrameSubmissionsForTesting(enabled) {}
}

/**
 * @implements { RenderFrameMetadataObserverInterface }
 */
export class RenderFrameMetadataObserverRemote {
  /** @param {MojoHandle|mojo.internal.interfaceSupport.Endpoint=} handle */
  constructor(handle = undefined) {
    /**
     * @private {!mojo.internal.interfaceSupport.InterfaceRemoteBase<!RenderFrameMetadataObserverPendingReceiver>}
     */
    this.proxy =
        new mojo.internal.interfaceSupport.InterfaceRemoteBase(
          RenderFrameMetadataObserverPendingReceiver,
          handle);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper<!RenderFrameMetadataObserverPendingReceiver>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper(this.proxy);

    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.proxy.getConnectionErrorEventRouter();
  }

  
  /**
   * @param { !boolean } enabled
   */

  reportAllRootScrolls(
      enabled) {
    this.proxy.sendMessage(
        0,
        RenderFrameMetadataObserver_ReportAllRootScrolls_ParamsSpec.$,
        null,
        [
          enabled
        ]);
  }

  
  /**
   * @param { !boolean } enabled
   */

  reportAllFrameSubmissionsForTesting(
      enabled) {
    this.proxy.sendMessage(
        1,
        RenderFrameMetadataObserver_ReportAllFrameSubmissionsForTesting_ParamsSpec.$,
        null,
        [
          enabled
        ]);
  }
}

/**
 * An object which receives request messages for the RenderFrameMetadataObserver
 * mojom interface. Must be constructed over an object which implements that
 * interface.
 */
export class RenderFrameMetadataObserverReceiver {
  /**
   * @param {!RenderFrameMetadataObserverInterface } impl
   */
  constructor(impl) {
    /** @private {!mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal<!RenderFrameMetadataObserverRemote>} */
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
        RenderFrameMetadataObserverRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!RenderFrameMetadataObserverRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);


    this.helper_internal_.registerHandler(
        0,
        RenderFrameMetadataObserver_ReportAllRootScrolls_ParamsSpec.$,
        null,
        impl.reportAllRootScrolls.bind(impl));
    this.helper_internal_.registerHandler(
        1,
        RenderFrameMetadataObserver_ReportAllFrameSubmissionsForTesting_ParamsSpec.$,
        null,
        impl.reportAllFrameSubmissionsForTesting.bind(impl));
    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.helper_internal_.getConnectionErrorEventRouter();
  }
}

export class RenderFrameMetadataObserver {
  /**
   * @return {!string}
   */
  static get $interfaceName() {
    return "cc.mojom.RenderFrameMetadataObserver";
  }

  /**
   * Returns a remote for this interface which sends messages to the browser.
   * The browser must have an interface request binder registered for this
   * interface and accessible to the calling document's frame.
   *
   * @return {!RenderFrameMetadataObserverRemote}
   */
  static getRemote() {
    let remote = new RenderFrameMetadataObserverRemote;
    remote.$.bindNewPipeAndPassReceiver().bindInBrowser();
    return remote;
  }
}


/**
 * An object which receives request messages for the RenderFrameMetadataObserver
 * mojom interface and dispatches them as callbacks. One callback receiver exists
 * on this object for each message defined in the mojom interface, and each
 * receiver can have any number of listeners added to it.
 */
export class RenderFrameMetadataObserverCallbackRouter {
  constructor() {
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
      RenderFrameMetadataObserverRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!RenderFrameMetadataObserverRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);

    this.router_ = new mojo.internal.interfaceSupport.CallbackRouter;

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.reportAllRootScrolls =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        0,
        RenderFrameMetadataObserver_ReportAllRootScrolls_ParamsSpec.$,
        null,
        this.reportAllRootScrolls.createReceiverHandler(false /* expectsResponse */));
    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.reportAllFrameSubmissionsForTesting =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        1,
        RenderFrameMetadataObserver_ReportAllFrameSubmissionsForTesting_ParamsSpec.$,
        null,
        this.reportAllFrameSubmissionsForTesting.createReceiverHandler(false /* expectsResponse */));
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
export class RenderFrameMetadataObserverClientPendingReceiver {
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
        this.handle, 'cc.mojom.RenderFrameMetadataObserverClient', scope);
  }
}

/** @interface */
export class RenderFrameMetadataObserverClientInterface {
  
  /**
   * @param { !number } frameToken
   * @param { !RenderFrameMetadata } metadata
   */

  onRenderFrameMetadataChanged(frameToken, metadata) {}
  
  /**
   * @param { !number } frameToken
   */

  onFrameSubmissionForTesting(frameToken) {}
  
  /**
   * @param { !gfx_mojom_PointF } rootScrollOffset
   */

  onRootScrollOffsetChanged(rootScrollOffset) {}
}

/**
 * @implements { RenderFrameMetadataObserverClientInterface }
 */
export class RenderFrameMetadataObserverClientRemote {
  /** @param {MojoHandle|mojo.internal.interfaceSupport.Endpoint=} handle */
  constructor(handle = undefined) {
    /**
     * @private {!mojo.internal.interfaceSupport.InterfaceRemoteBase<!RenderFrameMetadataObserverClientPendingReceiver>}
     */
    this.proxy =
        new mojo.internal.interfaceSupport.InterfaceRemoteBase(
          RenderFrameMetadataObserverClientPendingReceiver,
          handle);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper<!RenderFrameMetadataObserverClientPendingReceiver>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper(this.proxy);

    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.proxy.getConnectionErrorEventRouter();
  }

  
  /**
   * @param { !number } frameToken
   * @param { !RenderFrameMetadata } metadata
   */

  onRenderFrameMetadataChanged(
      frameToken,
      metadata) {
    this.proxy.sendMessage(
        0,
        RenderFrameMetadataObserverClient_OnRenderFrameMetadataChanged_ParamsSpec.$,
        null,
        [
          frameToken,
          metadata
        ]);
  }

  
  /**
   * @param { !number } frameToken
   */

  onFrameSubmissionForTesting(
      frameToken) {
    this.proxy.sendMessage(
        1,
        RenderFrameMetadataObserverClient_OnFrameSubmissionForTesting_ParamsSpec.$,
        null,
        [
          frameToken
        ]);
  }

  
  /**
   * @param { !gfx_mojom_PointF } rootScrollOffset
   */

  onRootScrollOffsetChanged(
      rootScrollOffset) {
    this.proxy.sendMessage(
        2,
        RenderFrameMetadataObserverClient_OnRootScrollOffsetChanged_ParamsSpec.$,
        null,
        [
          rootScrollOffset
        ]);
  }
}

/**
 * An object which receives request messages for the RenderFrameMetadataObserverClient
 * mojom interface. Must be constructed over an object which implements that
 * interface.
 */
export class RenderFrameMetadataObserverClientReceiver {
  /**
   * @param {!RenderFrameMetadataObserverClientInterface } impl
   */
  constructor(impl) {
    /** @private {!mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal<!RenderFrameMetadataObserverClientRemote>} */
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
        RenderFrameMetadataObserverClientRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!RenderFrameMetadataObserverClientRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);


    this.helper_internal_.registerHandler(
        0,
        RenderFrameMetadataObserverClient_OnRenderFrameMetadataChanged_ParamsSpec.$,
        null,
        impl.onRenderFrameMetadataChanged.bind(impl));
    this.helper_internal_.registerHandler(
        1,
        RenderFrameMetadataObserverClient_OnFrameSubmissionForTesting_ParamsSpec.$,
        null,
        impl.onFrameSubmissionForTesting.bind(impl));
    this.helper_internal_.registerHandler(
        2,
        RenderFrameMetadataObserverClient_OnRootScrollOffsetChanged_ParamsSpec.$,
        null,
        impl.onRootScrollOffsetChanged.bind(impl));
    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.helper_internal_.getConnectionErrorEventRouter();
  }
}

export class RenderFrameMetadataObserverClient {
  /**
   * @return {!string}
   */
  static get $interfaceName() {
    return "cc.mojom.RenderFrameMetadataObserverClient";
  }

  /**
   * Returns a remote for this interface which sends messages to the browser.
   * The browser must have an interface request binder registered for this
   * interface and accessible to the calling document's frame.
   *
   * @return {!RenderFrameMetadataObserverClientRemote}
   */
  static getRemote() {
    let remote = new RenderFrameMetadataObserverClientRemote;
    remote.$.bindNewPipeAndPassReceiver().bindInBrowser();
    return remote;
  }
}


/**
 * An object which receives request messages for the RenderFrameMetadataObserverClient
 * mojom interface and dispatches them as callbacks. One callback receiver exists
 * on this object for each message defined in the mojom interface, and each
 * receiver can have any number of listeners added to it.
 */
export class RenderFrameMetadataObserverClientCallbackRouter {
  constructor() {
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
      RenderFrameMetadataObserverClientRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!RenderFrameMetadataObserverClientRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);

    this.router_ = new mojo.internal.interfaceSupport.CallbackRouter;

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.onRenderFrameMetadataChanged =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        0,
        RenderFrameMetadataObserverClient_OnRenderFrameMetadataChanged_ParamsSpec.$,
        null,
        this.onRenderFrameMetadataChanged.createReceiverHandler(false /* expectsResponse */));
    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.onFrameSubmissionForTesting =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        1,
        RenderFrameMetadataObserverClient_OnFrameSubmissionForTesting_ParamsSpec.$,
        null,
        this.onFrameSubmissionForTesting.createReceiverHandler(false /* expectsResponse */));
    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.onRootScrollOffsetChanged =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        2,
        RenderFrameMetadataObserverClient_OnRootScrollOffsetChanged_ParamsSpec.$,
        null,
        this.onRootScrollOffsetChanged.createReceiverHandler(false /* expectsResponse */));
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
export const DelegatedInkBrowserMetadataSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const RenderFrameMetadataSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const RenderFrameMetadataObserver_ReportAllRootScrolls_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const RenderFrameMetadataObserver_ReportAllFrameSubmissionsForTesting_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const RenderFrameMetadataObserverClient_OnRenderFrameMetadataChanged_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const RenderFrameMetadataObserverClient_OnFrameSubmissionForTesting_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const RenderFrameMetadataObserverClient_OnRootScrollOffsetChanged_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };




mojo.internal.Struct(
    DelegatedInkBrowserMetadataSpec.$,
    'DelegatedInkBrowserMetadata',
    [
      mojo.internal.StructField(
        'delegatedInkIsHovering', 0,
        0,
        mojo.internal.Bool,
        false,
        false /* nullable */,
        0),
    ],
    [[0, 16],]);



/**
 * @record
 */
export class DelegatedInkBrowserMetadata {
  constructor() {
    /** @type { !boolean } */
    this.delegatedInkIsHovering;
  }
}



mojo.internal.Struct(
    RenderFrameMetadataSpec.$,
    'RenderFrameMetadata',
    [
      mojo.internal.StructField(
        'rootBackgroundColor', 0,
        0,
        skia_mojom_SkColor4fSpec.$,
        null,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'rootScrollOffset', 8,
        0,
        gfx_mojom_PointFSpec.$,
        null,
        true /* nullable */,
        0),
      mojo.internal.StructField(
        'isScrollOffsetAtTop', 16,
        0,
        mojo.internal.Bool,
        false,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'selection', 24,
        0,
        viz_mojom_SelectionSpec.$,
        null,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'isMobileOptimized', 16,
        1,
        mojo.internal.Bool,
        false,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'delegatedInkMetadata', 32,
        0,
        DelegatedInkBrowserMetadataSpec.$,
        null,
        true /* nullable */,
        0),
      mojo.internal.StructField(
        'deviceScaleFactor', 20,
        0,
        mojo.internal.Float,
        0,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'viewportSizeInPixels', 40,
        0,
        gfx_mojom_SizeSpec.$,
        null,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'localSurfaceId', 48,
        0,
        viz_mojom_LocalSurfaceIdSpec.$,
        null,
        true /* nullable */,
        0),
      mojo.internal.StructField(
        'pageScaleFactor', 56,
        0,
        mojo.internal.Float,
        0,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'externalPageScaleFactor', 60,
        0,
        mojo.internal.Float,
        0,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'topControlsHeight', 64,
        0,
        mojo.internal.Float,
        0,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'topControlsShownRatio', 68,
        0,
        mojo.internal.Float,
        0,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'newVerticalScrollDirection', 72,
        0,
        viz_mojom_VerticalScrollDirectionSpec.$,
        0,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'previousSurfacesVisualUpdateDuration', 80,
        0,
        mojoBase_mojom_TimeDeltaSpec.$,
        null,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'currentSurfaceVisualUpdateDuration', 88,
        0,
        mojoBase_mojom_TimeDeltaSpec.$,
        null,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'bottomControlsHeight', 76,
        0,
        mojo.internal.Float,
        0,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'bottomControlsShownRatio', 96,
        0,
        mojo.internal.Float,
        0,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'topControlsMinHeightOffset', 100,
        0,
        mojo.internal.Float,
        0,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'bottomControlsMinHeightOffset', 104,
        0,
        mojo.internal.Float,
        0,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'minPageScaleFactor', 108,
        0,
        mojo.internal.Float,
        0,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'maxPageScaleFactor', 112,
        0,
        mojo.internal.Float,
        0,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'rootOverflowYHidden', 16,
        2,
        mojo.internal.Bool,
        false,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'scrollableViewportSize', 120,
        0,
        gfx_mojom_SizeFSpec.$,
        null,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'rootLayerSize', 128,
        0,
        gfx_mojom_SizeFSpec.$,
        null,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'hasTransparentBackground', 16,
        3,
        mojo.internal.Bool,
        false,
        false /* nullable */,
        0),
    ],
    [[0, 144],]);



/**
 * @record
 */
export class RenderFrameMetadata {
  constructor() {
    /** @type { !skia_mojom_SkColor4f } */
    this.rootBackgroundColor;
    /** @type { (gfx_mojom_PointF|undefined) } */
    this.rootScrollOffset;
    /** @type { !boolean } */
    this.isScrollOffsetAtTop;
    /** @type { !boolean } */
    this.isMobileOptimized;
    /** @type { !boolean } */
    this.rootOverflowYHidden;
    /** @type { !boolean } */
    this.hasTransparentBackground;
    /** @type { !number } */
    this.deviceScaleFactor;
    /** @type { !viz_mojom_Selection } */
    this.selection;
    /** @type { (DelegatedInkBrowserMetadata|undefined) } */
    this.delegatedInkMetadata;
    /** @type { !gfx_mojom_Size } */
    this.viewportSizeInPixels;
    /** @type { (viz_mojom_LocalSurfaceId|undefined) } */
    this.localSurfaceId;
    /** @type { !number } */
    this.pageScaleFactor;
    /** @type { !number } */
    this.externalPageScaleFactor;
    /** @type { !number } */
    this.topControlsHeight;
    /** @type { !number } */
    this.topControlsShownRatio;
    /** @type { !viz_mojom_VerticalScrollDirection } */
    this.newVerticalScrollDirection;
    /** @type { !number } */
    this.bottomControlsHeight;
    /** @type { !mojoBase_mojom_TimeDelta } */
    this.previousSurfacesVisualUpdateDuration;
    /** @type { !mojoBase_mojom_TimeDelta } */
    this.currentSurfaceVisualUpdateDuration;
    /** @type { !number } */
    this.bottomControlsShownRatio;
    /** @type { !number } */
    this.topControlsMinHeightOffset;
    /** @type { !number } */
    this.bottomControlsMinHeightOffset;
    /** @type { !number } */
    this.minPageScaleFactor;
    /** @type { !number } */
    this.maxPageScaleFactor;
    /** @type { !gfx_mojom_SizeF } */
    this.scrollableViewportSize;
    /** @type { !gfx_mojom_SizeF } */
    this.rootLayerSize;
  }
}



mojo.internal.Struct(
    RenderFrameMetadataObserver_ReportAllRootScrolls_ParamsSpec.$,
    'RenderFrameMetadataObserver_ReportAllRootScrolls_Params',
    [
      mojo.internal.StructField(
        'enabled', 0,
        0,
        mojo.internal.Bool,
        false,
        false /* nullable */,
        0),
    ],
    [[0, 16],]);



/**
 * @record
 */
export class RenderFrameMetadataObserver_ReportAllRootScrolls_Params {
  constructor() {
    /** @type { !boolean } */
    this.enabled;
  }
}



mojo.internal.Struct(
    RenderFrameMetadataObserver_ReportAllFrameSubmissionsForTesting_ParamsSpec.$,
    'RenderFrameMetadataObserver_ReportAllFrameSubmissionsForTesting_Params',
    [
      mojo.internal.StructField(
        'enabled', 0,
        0,
        mojo.internal.Bool,
        false,
        false /* nullable */,
        0),
    ],
    [[0, 16],]);



/**
 * @record
 */
export class RenderFrameMetadataObserver_ReportAllFrameSubmissionsForTesting_Params {
  constructor() {
    /** @type { !boolean } */
    this.enabled;
  }
}



mojo.internal.Struct(
    RenderFrameMetadataObserverClient_OnRenderFrameMetadataChanged_ParamsSpec.$,
    'RenderFrameMetadataObserverClient_OnRenderFrameMetadataChanged_Params',
    [
      mojo.internal.StructField(
        'frameToken', 0,
        0,
        mojo.internal.Uint32,
        0,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'metadata', 8,
        0,
        RenderFrameMetadataSpec.$,
        null,
        false /* nullable */,
        0),
    ],
    [[0, 24],]);



/**
 * @record
 */
export class RenderFrameMetadataObserverClient_OnRenderFrameMetadataChanged_Params {
  constructor() {
    /** @type { !number } */
    this.frameToken;
    /** @type { !RenderFrameMetadata } */
    this.metadata;
  }
}



mojo.internal.Struct(
    RenderFrameMetadataObserverClient_OnFrameSubmissionForTesting_ParamsSpec.$,
    'RenderFrameMetadataObserverClient_OnFrameSubmissionForTesting_Params',
    [
      mojo.internal.StructField(
        'frameToken', 0,
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
export class RenderFrameMetadataObserverClient_OnFrameSubmissionForTesting_Params {
  constructor() {
    /** @type { !number } */
    this.frameToken;
  }
}



mojo.internal.Struct(
    RenderFrameMetadataObserverClient_OnRootScrollOffsetChanged_ParamsSpec.$,
    'RenderFrameMetadataObserverClient_OnRootScrollOffsetChanged_Params',
    [
      mojo.internal.StructField(
        'rootScrollOffset', 0,
        0,
        gfx_mojom_PointFSpec.$,
        null,
        false /* nullable */,
        0),
    ],
    [[0, 16],]);



/**
 * @record
 */
export class RenderFrameMetadataObserverClient_OnRootScrollOffsetChanged_Params {
  constructor() {
    /** @type { !gfx_mojom_PointF } */
    this.rootScrollOffset;
  }
}

