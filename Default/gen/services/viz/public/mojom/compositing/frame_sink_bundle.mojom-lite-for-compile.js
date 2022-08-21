// services/viz/public/mojom/compositing/frame_sink_bundle.mojom-lite-for-compile.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
'use strict';

goog.require('mojo.internal');
goog.require('mojo.internal.interfaceSupport');

goog.require('viz.mojom.CompositorFrameSinkType');
goog.require('viz.mojom.BeginFrameAck');
goog.require('viz.mojom.BeginFrameArgs');
goog.require('viz.mojom.CompositorFrame');
goog.require('viz.mojom.FrameTimingDetails');
goog.require('viz.mojom.HitTestRegionList');
goog.require('viz.mojom.LocalSurfaceId');
goog.require('gpu.mojom.Mailbox');
goog.require('mojoBase.mojom.ReadOnlySharedMemoryRegion');
goog.require('viz.mojom.ReturnedResource');






goog.provide('viz.mojom.FrameSinkBundle');
goog.provide('viz.mojom.FrameSinkBundleReceiver');
goog.provide('viz.mojom.FrameSinkBundleCallbackRouter');
goog.provide('viz.mojom.FrameSinkBundleInterface');
goog.provide('viz.mojom.FrameSinkBundleRemote');
goog.provide('viz.mojom.FrameSinkBundlePendingReceiver');


/**
 * @implements {mojo.internal.interfaceSupport.PendingReceiver}
 * @export
 */
viz.mojom.FrameSinkBundlePendingReceiver = class {
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
        viz.mojom.FrameSinkBundle.$interfaceName,
        scope);
  }
};

/** @interface */
viz.mojom.FrameSinkBundleInterface = class {
  
  /**
   * @param { !number } sinkId
   * @param { !viz.mojom.CompositorFrameSinkType } type
   */

  initializeCompositorFrameSinkType(sinkId, type) {}
  
  /**
   * @param { !number } sinkId
   * @param { !boolean } needsBeginFrame
   */

  setNeedsBeginFrame(sinkId, needsBeginFrame) {}
  
  /**
   * @param { !Array<!viz.mojom.BundledFrameSubmission> } submissions
   */

  submit(submissions) {}
  
  /**
   * @param { !number } sinkId
   * @param { !mojoBase.mojom.ReadOnlySharedMemoryRegion } region
   * @param { !gpu.mojom.Mailbox } id
   */

  didAllocateSharedBitmap(sinkId, region, id) {}
  
  /**
   * @param { !number } sinkId
   * @param { !Array<!number> } threadIds
   */

  setThreadIds(sinkId, threadIds) {}
};

/**
 * @export
 * @implements { viz.mojom.FrameSinkBundleInterface }
 */
viz.mojom.FrameSinkBundleRemote = class {
  /** @param {MojoHandle|mojo.internal.interfaceSupport.Endpoint=} handle */
  constructor(handle = undefined) {
    /**
     * @private {!mojo.internal.interfaceSupport.InterfaceRemoteBase<!viz.mojom.FrameSinkBundlePendingReceiver>}
     */
    this.proxy =
        new mojo.internal.interfaceSupport.InterfaceRemoteBase(
          viz.mojom.FrameSinkBundlePendingReceiver,
          handle);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper<!viz.mojom.FrameSinkBundlePendingReceiver>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper(this.proxy);

    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.proxy.getConnectionErrorEventRouter();
  }

  
  /**
   * @param { !number } sinkId
   * @param { !viz.mojom.CompositorFrameSinkType } type
   */

  initializeCompositorFrameSinkType(
      sinkId,
      type) {
    this.proxy.sendMessage(
        0,
        viz.mojom.FrameSinkBundle_InitializeCompositorFrameSinkType_ParamsSpec.$,
        null,
        [
          sinkId,
          type
        ]);
  }

  
  /**
   * @param { !number } sinkId
   * @param { !boolean } needsBeginFrame
   */

  setNeedsBeginFrame(
      sinkId,
      needsBeginFrame) {
    this.proxy.sendMessage(
        1,
        viz.mojom.FrameSinkBundle_SetNeedsBeginFrame_ParamsSpec.$,
        null,
        [
          sinkId,
          needsBeginFrame
        ]);
  }

  
  /**
   * @param { !Array<!viz.mojom.BundledFrameSubmission> } submissions
   */

  submit(
      submissions) {
    this.proxy.sendMessage(
        2,
        viz.mojom.FrameSinkBundle_Submit_ParamsSpec.$,
        null,
        [
          submissions
        ]);
  }

  
  /**
   * @param { !number } sinkId
   * @param { !mojoBase.mojom.ReadOnlySharedMemoryRegion } region
   * @param { !gpu.mojom.Mailbox } id
   */

  didAllocateSharedBitmap(
      sinkId,
      region,
      id) {
    this.proxy.sendMessage(
        3,
        viz.mojom.FrameSinkBundle_DidAllocateSharedBitmap_ParamsSpec.$,
        null,
        [
          sinkId,
          region,
          id
        ]);
  }

  
  /**
   * @param { !number } sinkId
   * @param { !Array<!number> } threadIds
   */

  setThreadIds(
      sinkId,
      threadIds) {
    this.proxy.sendMessage(
        4,
        viz.mojom.FrameSinkBundle_SetThreadIds_ParamsSpec.$,
        null,
        [
          sinkId,
          threadIds
        ]);
  }
};

/**
 * An object which receives request messages for the FrameSinkBundle
 * mojom interface. Must be constructed over an object which implements that
 * interface.
 *
 * @export
 */
viz.mojom.FrameSinkBundleReceiver = class {
  /**
   * @param {!viz.mojom.FrameSinkBundleInterface } impl
   */
  constructor(impl) {
    /** @private {!mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal<!viz.mojom.FrameSinkBundleRemote>} */
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
        viz.mojom.FrameSinkBundleRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!viz.mojom.FrameSinkBundleRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);


    this.helper_internal_.registerHandler(
        0,
        viz.mojom.FrameSinkBundle_InitializeCompositorFrameSinkType_ParamsSpec.$,
        null,
        impl.initializeCompositorFrameSinkType.bind(impl));
    this.helper_internal_.registerHandler(
        1,
        viz.mojom.FrameSinkBundle_SetNeedsBeginFrame_ParamsSpec.$,
        null,
        impl.setNeedsBeginFrame.bind(impl));
    this.helper_internal_.registerHandler(
        2,
        viz.mojom.FrameSinkBundle_Submit_ParamsSpec.$,
        null,
        impl.submit.bind(impl));
    this.helper_internal_.registerHandler(
        3,
        viz.mojom.FrameSinkBundle_DidAllocateSharedBitmap_ParamsSpec.$,
        null,
        impl.didAllocateSharedBitmap.bind(impl));
    this.helper_internal_.registerHandler(
        4,
        viz.mojom.FrameSinkBundle_SetThreadIds_ParamsSpec.$,
        null,
        impl.setThreadIds.bind(impl));
    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.helper_internal_.getConnectionErrorEventRouter();
  }
};

/**
 *  @export
 */
viz.mojom.FrameSinkBundle = class {
  /**
   * @return {!string}
   */
  static get $interfaceName() {
    return "viz.mojom.FrameSinkBundle";
  }

  /**
   * Returns a remote for this interface which sends messages to the browser.
   * The browser must have an interface request binder registered for this
   * interface and accessible to the calling document's frame.
   *
   * @return {!viz.mojom.FrameSinkBundleRemote}
   * @export
   */
  static getRemote() {
    let remote = new viz.mojom.FrameSinkBundleRemote;
    remote.$.bindNewPipeAndPassReceiver().bindInBrowser();
    return remote;
  }
};


/**
 * An object which receives request messages for the FrameSinkBundle
 * mojom interface and dispatches them as callbacks. One callback receiver exists
 * on this object for each message defined in the mojom interface, and each
 * receiver can have any number of listeners added to it.
 *
 * @export
 */
viz.mojom.FrameSinkBundleCallbackRouter = class {
  constructor() {
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
      viz.mojom.FrameSinkBundleRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!viz.mojom.FrameSinkBundleRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);

    this.router_ = new mojo.internal.interfaceSupport.CallbackRouter;

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.initializeCompositorFrameSinkType =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        0,
        viz.mojom.FrameSinkBundle_InitializeCompositorFrameSinkType_ParamsSpec.$,
        null,
        this.initializeCompositorFrameSinkType.createReceiverHandler(false /* expectsResponse */));
    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.setNeedsBeginFrame =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        1,
        viz.mojom.FrameSinkBundle_SetNeedsBeginFrame_ParamsSpec.$,
        null,
        this.setNeedsBeginFrame.createReceiverHandler(false /* expectsResponse */));
    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.submit =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        2,
        viz.mojom.FrameSinkBundle_Submit_ParamsSpec.$,
        null,
        this.submit.createReceiverHandler(false /* expectsResponse */));
    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.didAllocateSharedBitmap =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        3,
        viz.mojom.FrameSinkBundle_DidAllocateSharedBitmap_ParamsSpec.$,
        null,
        this.didAllocateSharedBitmap.createReceiverHandler(false /* expectsResponse */));
    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.setThreadIds =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        4,
        viz.mojom.FrameSinkBundle_SetThreadIds_ParamsSpec.$,
        null,
        this.setThreadIds.createReceiverHandler(false /* expectsResponse */));
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


goog.provide('viz.mojom.FrameSinkBundleClient');
goog.provide('viz.mojom.FrameSinkBundleClientReceiver');
goog.provide('viz.mojom.FrameSinkBundleClientCallbackRouter');
goog.provide('viz.mojom.FrameSinkBundleClientInterface');
goog.provide('viz.mojom.FrameSinkBundleClientRemote');
goog.provide('viz.mojom.FrameSinkBundleClientPendingReceiver');


/**
 * @implements {mojo.internal.interfaceSupport.PendingReceiver}
 * @export
 */
viz.mojom.FrameSinkBundleClientPendingReceiver = class {
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
        viz.mojom.FrameSinkBundleClient.$interfaceName,
        scope);
  }
};

/** @interface */
viz.mojom.FrameSinkBundleClientInterface = class {
  
  /**
   * @param { !Array<!viz.mojom.BundledReturnedResources> } acks
   * @param { !Array<!viz.mojom.BeginFrameInfo> } beginFrames
   * @param { !Array<!viz.mojom.BundledReturnedResources> } reclaimedResources
   */

  flushNotifications(acks, beginFrames, reclaimedResources) {}
  
  /**
   * @param { !number } sinkId
   * @param { !boolean } paused
   */

  onBeginFramePausedChanged(sinkId, paused) {}
  
  /**
   * @param { !number } sinkId
   * @param { !number } sequenceId
   */

  onCompositorFrameTransitionDirectiveProcessed(sinkId, sequenceId) {}
};

/**
 * @export
 * @implements { viz.mojom.FrameSinkBundleClientInterface }
 */
viz.mojom.FrameSinkBundleClientRemote = class {
  /** @param {MojoHandle|mojo.internal.interfaceSupport.Endpoint=} handle */
  constructor(handle = undefined) {
    /**
     * @private {!mojo.internal.interfaceSupport.InterfaceRemoteBase<!viz.mojom.FrameSinkBundleClientPendingReceiver>}
     */
    this.proxy =
        new mojo.internal.interfaceSupport.InterfaceRemoteBase(
          viz.mojom.FrameSinkBundleClientPendingReceiver,
          handle);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper<!viz.mojom.FrameSinkBundleClientPendingReceiver>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper(this.proxy);

    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.proxy.getConnectionErrorEventRouter();
  }

  
  /**
   * @param { !Array<!viz.mojom.BundledReturnedResources> } acks
   * @param { !Array<!viz.mojom.BeginFrameInfo> } beginFrames
   * @param { !Array<!viz.mojom.BundledReturnedResources> } reclaimedResources
   */

  flushNotifications(
      acks,
      beginFrames,
      reclaimedResources) {
    this.proxy.sendMessage(
        0,
        viz.mojom.FrameSinkBundleClient_FlushNotifications_ParamsSpec.$,
        null,
        [
          acks,
          beginFrames,
          reclaimedResources
        ]);
  }

  
  /**
   * @param { !number } sinkId
   * @param { !boolean } paused
   */

  onBeginFramePausedChanged(
      sinkId,
      paused) {
    this.proxy.sendMessage(
        1,
        viz.mojom.FrameSinkBundleClient_OnBeginFramePausedChanged_ParamsSpec.$,
        null,
        [
          sinkId,
          paused
        ]);
  }

  
  /**
   * @param { !number } sinkId
   * @param { !number } sequenceId
   */

  onCompositorFrameTransitionDirectiveProcessed(
      sinkId,
      sequenceId) {
    this.proxy.sendMessage(
        2,
        viz.mojom.FrameSinkBundleClient_OnCompositorFrameTransitionDirectiveProcessed_ParamsSpec.$,
        null,
        [
          sinkId,
          sequenceId
        ]);
  }
};

/**
 * An object which receives request messages for the FrameSinkBundleClient
 * mojom interface. Must be constructed over an object which implements that
 * interface.
 *
 * @export
 */
viz.mojom.FrameSinkBundleClientReceiver = class {
  /**
   * @param {!viz.mojom.FrameSinkBundleClientInterface } impl
   */
  constructor(impl) {
    /** @private {!mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal<!viz.mojom.FrameSinkBundleClientRemote>} */
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
        viz.mojom.FrameSinkBundleClientRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!viz.mojom.FrameSinkBundleClientRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);


    this.helper_internal_.registerHandler(
        0,
        viz.mojom.FrameSinkBundleClient_FlushNotifications_ParamsSpec.$,
        null,
        impl.flushNotifications.bind(impl));
    this.helper_internal_.registerHandler(
        1,
        viz.mojom.FrameSinkBundleClient_OnBeginFramePausedChanged_ParamsSpec.$,
        null,
        impl.onBeginFramePausedChanged.bind(impl));
    this.helper_internal_.registerHandler(
        2,
        viz.mojom.FrameSinkBundleClient_OnCompositorFrameTransitionDirectiveProcessed_ParamsSpec.$,
        null,
        impl.onCompositorFrameTransitionDirectiveProcessed.bind(impl));
    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.helper_internal_.getConnectionErrorEventRouter();
  }
};

/**
 *  @export
 */
viz.mojom.FrameSinkBundleClient = class {
  /**
   * @return {!string}
   */
  static get $interfaceName() {
    return "viz.mojom.FrameSinkBundleClient";
  }

  /**
   * Returns a remote for this interface which sends messages to the browser.
   * The browser must have an interface request binder registered for this
   * interface and accessible to the calling document's frame.
   *
   * @return {!viz.mojom.FrameSinkBundleClientRemote}
   * @export
   */
  static getRemote() {
    let remote = new viz.mojom.FrameSinkBundleClientRemote;
    remote.$.bindNewPipeAndPassReceiver().bindInBrowser();
    return remote;
  }
};


/**
 * An object which receives request messages for the FrameSinkBundleClient
 * mojom interface and dispatches them as callbacks. One callback receiver exists
 * on this object for each message defined in the mojom interface, and each
 * receiver can have any number of listeners added to it.
 *
 * @export
 */
viz.mojom.FrameSinkBundleClientCallbackRouter = class {
  constructor() {
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
      viz.mojom.FrameSinkBundleClientRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!viz.mojom.FrameSinkBundleClientRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);

    this.router_ = new mojo.internal.interfaceSupport.CallbackRouter;

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.flushNotifications =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        0,
        viz.mojom.FrameSinkBundleClient_FlushNotifications_ParamsSpec.$,
        null,
        this.flushNotifications.createReceiverHandler(false /* expectsResponse */));
    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.onBeginFramePausedChanged =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        1,
        viz.mojom.FrameSinkBundleClient_OnBeginFramePausedChanged_ParamsSpec.$,
        null,
        this.onBeginFramePausedChanged.createReceiverHandler(false /* expectsResponse */));
    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.onCompositorFrameTransitionDirectiveProcessed =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        2,
        viz.mojom.FrameSinkBundleClient_OnCompositorFrameTransitionDirectiveProcessed_ParamsSpec.$,
        null,
        this.onCompositorFrameTransitionDirectiveProcessed.createReceiverHandler(false /* expectsResponse */));
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


goog.provide('viz.mojom.BundledFrameSubmissionSpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
viz.mojom.BundledFrameSubmissionSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

goog.provide('viz.mojom.BundledCompositorFrameSpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
viz.mojom.BundledCompositorFrameSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

goog.provide('viz.mojom.BundledReturnedResourcesSpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
viz.mojom.BundledReturnedResourcesSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

goog.provide('viz.mojom.BeginFrameInfoSpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
viz.mojom.BeginFrameInfoSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

goog.provide('viz.mojom.FrameSinkBundle_InitializeCompositorFrameSinkType_ParamsSpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
viz.mojom.FrameSinkBundle_InitializeCompositorFrameSinkType_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

goog.provide('viz.mojom.FrameSinkBundle_SetNeedsBeginFrame_ParamsSpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
viz.mojom.FrameSinkBundle_SetNeedsBeginFrame_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

goog.provide('viz.mojom.FrameSinkBundle_Submit_ParamsSpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
viz.mojom.FrameSinkBundle_Submit_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

goog.provide('viz.mojom.FrameSinkBundle_DidAllocateSharedBitmap_ParamsSpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
viz.mojom.FrameSinkBundle_DidAllocateSharedBitmap_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

goog.provide('viz.mojom.FrameSinkBundle_SetThreadIds_ParamsSpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
viz.mojom.FrameSinkBundle_SetThreadIds_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

goog.provide('viz.mojom.FrameSinkBundleClient_FlushNotifications_ParamsSpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
viz.mojom.FrameSinkBundleClient_FlushNotifications_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

goog.provide('viz.mojom.FrameSinkBundleClient_OnBeginFramePausedChanged_ParamsSpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
viz.mojom.FrameSinkBundleClient_OnBeginFramePausedChanged_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

goog.provide('viz.mojom.FrameSinkBundleClient_OnCompositorFrameTransitionDirectiveProcessed_ParamsSpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
viz.mojom.FrameSinkBundleClient_OnCompositorFrameTransitionDirectiveProcessed_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

goog.provide('viz.mojom.BundledFrameSubmissionDataSpec');
/**
 * @const { {$:!mojo.internal.MojomType} }
 * @export
 */
viz.mojom.BundledFrameSubmissionDataSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };




mojo.internal.Struct(
    viz.mojom.BundledFrameSubmissionSpec.$,
    'BundledFrameSubmission',
    [
      mojo.internal.StructField(
        'sinkId', 0,
        0,
        mojo.internal.Uint32,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'data', 8,
        0,
        viz.mojom.BundledFrameSubmissionDataSpec.$,
        null,
        false /* nullable */),
    ],
    [[0, 32],]);



goog.provide('viz.mojom.BundledFrameSubmission');

/** @record */
viz.mojom.BundledFrameSubmission = class {
  constructor() {
    /** @export { !number } */
    this.sinkId;
    /** @export { !viz.mojom.BundledFrameSubmissionData } */
    this.data;
  }
};




mojo.internal.Struct(
    viz.mojom.BundledCompositorFrameSpec.$,
    'BundledCompositorFrame',
    [
      mojo.internal.StructField(
        'localSurfaceId', 0,
        0,
        viz.mojom.LocalSurfaceIdSpec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'frame', 8,
        0,
        viz.mojom.CompositorFrameSpec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'hitTestRegionList', 16,
        0,
        viz.mojom.HitTestRegionListSpec.$,
        null,
        true /* nullable */),
      mojo.internal.StructField(
        'submitTime', 24,
        0,
        mojo.internal.Uint64,
        BigInt(0),
        false /* nullable */),
    ],
    [[0, 40],]);



goog.provide('viz.mojom.BundledCompositorFrame');

/** @record */
viz.mojom.BundledCompositorFrame = class {
  constructor() {
    /** @export { !viz.mojom.LocalSurfaceId } */
    this.localSurfaceId;
    /** @export { !viz.mojom.CompositorFrame } */
    this.frame;
    /** @export { (viz.mojom.HitTestRegionList|undefined) } */
    this.hitTestRegionList;
    /** @export { !bigint } */
    this.submitTime;
  }
};




mojo.internal.Struct(
    viz.mojom.BundledReturnedResourcesSpec.$,
    'BundledReturnedResources',
    [
      mojo.internal.StructField(
        'sinkId', 0,
        0,
        mojo.internal.Uint32,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'resources', 8,
        0,
        mojo.internal.Array(viz.mojom.ReturnedResourceSpec.$, false),
        null,
        false /* nullable */),
    ],
    [[0, 24],]);



goog.provide('viz.mojom.BundledReturnedResources');

/** @record */
viz.mojom.BundledReturnedResources = class {
  constructor() {
    /** @export { !number } */
    this.sinkId;
    /** @export { !Array<!viz.mojom.ReturnedResource> } */
    this.resources;
  }
};




mojo.internal.Struct(
    viz.mojom.BeginFrameInfoSpec.$,
    'BeginFrameInfo',
    [
      mojo.internal.StructField(
        'sinkId', 0,
        0,
        mojo.internal.Uint32,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'args', 8,
        0,
        viz.mojom.BeginFrameArgsSpec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'details', 16,
        0,
        mojo.internal.Map(mojo.internal.Uint32, viz.mojom.FrameTimingDetailsSpec.$, false),
        null,
        false /* nullable */),
    ],
    [[0, 32],]);



goog.provide('viz.mojom.BeginFrameInfo');

/** @record */
viz.mojom.BeginFrameInfo = class {
  constructor() {
    /** @export { !number } */
    this.sinkId;
    /** @export { !viz.mojom.BeginFrameArgs } */
    this.args;
    /** @export { !Object<!number, !viz.mojom.FrameTimingDetails> } */
    this.details;
  }
};




mojo.internal.Struct(
    viz.mojom.FrameSinkBundle_InitializeCompositorFrameSinkType_ParamsSpec.$,
    'FrameSinkBundle_InitializeCompositorFrameSinkType_Params',
    [
      mojo.internal.StructField(
        'sinkId', 0,
        0,
        mojo.internal.Uint32,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'type', 4,
        0,
        viz.mojom.CompositorFrameSinkTypeSpec.$,
        0,
        false /* nullable */),
    ],
    [[0, 16],]);



goog.provide('viz.mojom.FrameSinkBundle_InitializeCompositorFrameSinkType_Params');

/** @record */
viz.mojom.FrameSinkBundle_InitializeCompositorFrameSinkType_Params = class {
  constructor() {
    /** @export { !number } */
    this.sinkId;
    /** @export { !viz.mojom.CompositorFrameSinkType } */
    this.type;
  }
};




mojo.internal.Struct(
    viz.mojom.FrameSinkBundle_SetNeedsBeginFrame_ParamsSpec.$,
    'FrameSinkBundle_SetNeedsBeginFrame_Params',
    [
      mojo.internal.StructField(
        'sinkId', 0,
        0,
        mojo.internal.Uint32,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'needsBeginFrame', 4,
        0,
        mojo.internal.Bool,
        false,
        false /* nullable */),
    ],
    [[0, 16],]);



goog.provide('viz.mojom.FrameSinkBundle_SetNeedsBeginFrame_Params');

/** @record */
viz.mojom.FrameSinkBundle_SetNeedsBeginFrame_Params = class {
  constructor() {
    /** @export { !number } */
    this.sinkId;
    /** @export { !boolean } */
    this.needsBeginFrame;
  }
};




mojo.internal.Struct(
    viz.mojom.FrameSinkBundle_Submit_ParamsSpec.$,
    'FrameSinkBundle_Submit_Params',
    [
      mojo.internal.StructField(
        'submissions', 0,
        0,
        mojo.internal.Array(viz.mojom.BundledFrameSubmissionSpec.$, false),
        null,
        false /* nullable */),
    ],
    [[0, 16],]);



goog.provide('viz.mojom.FrameSinkBundle_Submit_Params');

/** @record */
viz.mojom.FrameSinkBundle_Submit_Params = class {
  constructor() {
    /** @export { !Array<!viz.mojom.BundledFrameSubmission> } */
    this.submissions;
  }
};




mojo.internal.Struct(
    viz.mojom.FrameSinkBundle_DidAllocateSharedBitmap_ParamsSpec.$,
    'FrameSinkBundle_DidAllocateSharedBitmap_Params',
    [
      mojo.internal.StructField(
        'sinkId', 0,
        0,
        mojo.internal.Uint32,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'region', 8,
        0,
        mojoBase.mojom.ReadOnlySharedMemoryRegionSpec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'id', 16,
        0,
        gpu.mojom.MailboxSpec.$,
        null,
        false /* nullable */),
    ],
    [[0, 32],]);



goog.provide('viz.mojom.FrameSinkBundle_DidAllocateSharedBitmap_Params');

/** @record */
viz.mojom.FrameSinkBundle_DidAllocateSharedBitmap_Params = class {
  constructor() {
    /** @export { !number } */
    this.sinkId;
    /** @export { !mojoBase.mojom.ReadOnlySharedMemoryRegion } */
    this.region;
    /** @export { !gpu.mojom.Mailbox } */
    this.id;
  }
};




mojo.internal.Struct(
    viz.mojom.FrameSinkBundle_SetThreadIds_ParamsSpec.$,
    'FrameSinkBundle_SetThreadIds_Params',
    [
      mojo.internal.StructField(
        'sinkId', 0,
        0,
        mojo.internal.Uint32,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'threadIds', 8,
        0,
        mojo.internal.Array(mojo.internal.Int32, false),
        null,
        false /* nullable */),
    ],
    [[0, 24],]);



goog.provide('viz.mojom.FrameSinkBundle_SetThreadIds_Params');

/** @record */
viz.mojom.FrameSinkBundle_SetThreadIds_Params = class {
  constructor() {
    /** @export { !number } */
    this.sinkId;
    /** @export { !Array<!number> } */
    this.threadIds;
  }
};




mojo.internal.Struct(
    viz.mojom.FrameSinkBundleClient_FlushNotifications_ParamsSpec.$,
    'FrameSinkBundleClient_FlushNotifications_Params',
    [
      mojo.internal.StructField(
        'acks', 0,
        0,
        mojo.internal.Array(viz.mojom.BundledReturnedResourcesSpec.$, false),
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'beginFrames', 8,
        0,
        mojo.internal.Array(viz.mojom.BeginFrameInfoSpec.$, false),
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'reclaimedResources', 16,
        0,
        mojo.internal.Array(viz.mojom.BundledReturnedResourcesSpec.$, false),
        null,
        false /* nullable */),
    ],
    [[0, 32],]);



goog.provide('viz.mojom.FrameSinkBundleClient_FlushNotifications_Params');

/** @record */
viz.mojom.FrameSinkBundleClient_FlushNotifications_Params = class {
  constructor() {
    /** @export { !Array<!viz.mojom.BundledReturnedResources> } */
    this.acks;
    /** @export { !Array<!viz.mojom.BeginFrameInfo> } */
    this.beginFrames;
    /** @export { !Array<!viz.mojom.BundledReturnedResources> } */
    this.reclaimedResources;
  }
};




mojo.internal.Struct(
    viz.mojom.FrameSinkBundleClient_OnBeginFramePausedChanged_ParamsSpec.$,
    'FrameSinkBundleClient_OnBeginFramePausedChanged_Params',
    [
      mojo.internal.StructField(
        'sinkId', 0,
        0,
        mojo.internal.Uint32,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'paused', 4,
        0,
        mojo.internal.Bool,
        false,
        false /* nullable */),
    ],
    [[0, 16],]);



goog.provide('viz.mojom.FrameSinkBundleClient_OnBeginFramePausedChanged_Params');

/** @record */
viz.mojom.FrameSinkBundleClient_OnBeginFramePausedChanged_Params = class {
  constructor() {
    /** @export { !number } */
    this.sinkId;
    /** @export { !boolean } */
    this.paused;
  }
};




mojo.internal.Struct(
    viz.mojom.FrameSinkBundleClient_OnCompositorFrameTransitionDirectiveProcessed_ParamsSpec.$,
    'FrameSinkBundleClient_OnCompositorFrameTransitionDirectiveProcessed_Params',
    [
      mojo.internal.StructField(
        'sinkId', 0,
        0,
        mojo.internal.Uint32,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'sequenceId', 4,
        0,
        mojo.internal.Uint32,
        0,
        false /* nullable */),
    ],
    [[0, 16],]);



goog.provide('viz.mojom.FrameSinkBundleClient_OnCompositorFrameTransitionDirectiveProcessed_Params');

/** @record */
viz.mojom.FrameSinkBundleClient_OnCompositorFrameTransitionDirectiveProcessed_Params = class {
  constructor() {
    /** @export { !number } */
    this.sinkId;
    /** @export { !number } */
    this.sequenceId;
  }
};


goog.provide('viz.mojom.BundledFrameSubmissionData');


mojo.internal.Union(
    viz.mojom.BundledFrameSubmissionDataSpec.$, 'BundledFrameSubmissionData',
    {
      'frame': {
        'ordinal': 0,
        'type': viz.mojom.BundledCompositorFrameSpec.$,
      },
      'didNotProduceFrame': {
        'ordinal': 1,
        'type': viz.mojom.BeginFrameAckSpec.$,
      },
      'didDeleteSharedBitmap': {
        'ordinal': 2,
        'type': gpu.mojom.MailboxSpec.$,
      },
    });

/**
 * @typedef { {
 *   frame: (!viz.mojom.BundledCompositorFrame|undefined),
 *   didNotProduceFrame: (!viz.mojom.BeginFrameAck|undefined),
 *   didDeleteSharedBitmap: (!gpu.mojom.Mailbox|undefined),
 * } }
 */
viz.mojom.BundledFrameSubmissionData;
