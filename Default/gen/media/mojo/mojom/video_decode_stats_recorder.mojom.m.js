// media/mojo/mojom/video_decode_stats_recorder.mojom.m.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2020 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

import {mojo} from '../../../mojo/public/js/bindings.js';

import {
  PredictionFeatures as media_mojom_PredictionFeatures,
  PredictionFeaturesSpec as media_mojom_PredictionFeaturesSpec,
  PredictionTargets as media_mojom_PredictionTargets,
  PredictionTargetsSpec as media_mojom_PredictionTargetsSpec
} from './media_types.mojom.m.js';




/**
 * @implements {mojo.internal.interfaceSupport.PendingReceiver}
 */
export class VideoDecodeStatsRecorderPendingReceiver {
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
        this.handle, 'media.mojom.VideoDecodeStatsRecorder', scope);
  }
}

/** @interface */
export class VideoDecodeStatsRecorderInterface {
  
  /**
   * @param { !media_mojom_PredictionFeatures } features
   */

  startNewRecord(features) {}
  
  /**
   * @param { !media_mojom_PredictionTargets } targets
   */

  updateRecord(targets) {}
}

/**
 * @implements { VideoDecodeStatsRecorderInterface }
 */
export class VideoDecodeStatsRecorderRemote {
  /** @param {MojoHandle|mojo.internal.interfaceSupport.Endpoint=} handle */
  constructor(handle = undefined) {
    /**
     * @private {!mojo.internal.interfaceSupport.InterfaceRemoteBase<!VideoDecodeStatsRecorderPendingReceiver>}
     */
    this.proxy =
        new mojo.internal.interfaceSupport.InterfaceRemoteBase(
          VideoDecodeStatsRecorderPendingReceiver,
          handle);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper<!VideoDecodeStatsRecorderPendingReceiver>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper(this.proxy);

    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.proxy.getConnectionErrorEventRouter();
  }

  
  /**
   * @param { !media_mojom_PredictionFeatures } features
   */

  startNewRecord(
      features) {
    this.proxy.sendMessage(
        0,
        VideoDecodeStatsRecorder_StartNewRecord_ParamsSpec.$,
        null,
        [
          features
        ]);
  }

  
  /**
   * @param { !media_mojom_PredictionTargets } targets
   */

  updateRecord(
      targets) {
    this.proxy.sendMessage(
        1,
        VideoDecodeStatsRecorder_UpdateRecord_ParamsSpec.$,
        null,
        [
          targets
        ]);
  }
}

/**
 * An object which receives request messages for the VideoDecodeStatsRecorder
 * mojom interface. Must be constructed over an object which implements that
 * interface.
 */
export class VideoDecodeStatsRecorderReceiver {
  /**
   * @param {!VideoDecodeStatsRecorderInterface } impl
   */
  constructor(impl) {
    /** @private {!mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal<!VideoDecodeStatsRecorderRemote>} */
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
        VideoDecodeStatsRecorderRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!VideoDecodeStatsRecorderRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);


    this.helper_internal_.registerHandler(
        0,
        VideoDecodeStatsRecorder_StartNewRecord_ParamsSpec.$,
        null,
        impl.startNewRecord.bind(impl));
    this.helper_internal_.registerHandler(
        1,
        VideoDecodeStatsRecorder_UpdateRecord_ParamsSpec.$,
        null,
        impl.updateRecord.bind(impl));
    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.helper_internal_.getConnectionErrorEventRouter();
  }
}

export class VideoDecodeStatsRecorder {
  /**
   * @return {!string}
   */
  static get $interfaceName() {
    return "media.mojom.VideoDecodeStatsRecorder";
  }

  /**
   * Returns a remote for this interface which sends messages to the browser.
   * The browser must have an interface request binder registered for this
   * interface and accessible to the calling document's frame.
   *
   * @return {!VideoDecodeStatsRecorderRemote}
   */
  static getRemote() {
    let remote = new VideoDecodeStatsRecorderRemote;
    remote.$.bindNewPipeAndPassReceiver().bindInBrowser();
    return remote;
  }
}


/**
 * An object which receives request messages for the VideoDecodeStatsRecorder
 * mojom interface and dispatches them as callbacks. One callback receiver exists
 * on this object for each message defined in the mojom interface, and each
 * receiver can have any number of listeners added to it.
 */
export class VideoDecodeStatsRecorderCallbackRouter {
  constructor() {
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
      VideoDecodeStatsRecorderRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!VideoDecodeStatsRecorderRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);

    this.router_ = new mojo.internal.interfaceSupport.CallbackRouter;

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.startNewRecord =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        0,
        VideoDecodeStatsRecorder_StartNewRecord_ParamsSpec.$,
        null,
        this.startNewRecord.createReceiverHandler(false /* expectsResponse */));
    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.updateRecord =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        1,
        VideoDecodeStatsRecorder_UpdateRecord_ParamsSpec.$,
        null,
        this.updateRecord.createReceiverHandler(false /* expectsResponse */));
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
export const VideoDecodeStatsRecorder_StartNewRecord_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const VideoDecodeStatsRecorder_UpdateRecord_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };




mojo.internal.Struct(
    VideoDecodeStatsRecorder_StartNewRecord_ParamsSpec.$,
    'VideoDecodeStatsRecorder_StartNewRecord_Params',
    [
      mojo.internal.StructField(
        'features', 0,
        0,
        media_mojom_PredictionFeaturesSpec.$,
        null,
        false /* nullable */,
        0),
    ],
    [[0, 16],]);



/**
 * @record
 */
export class VideoDecodeStatsRecorder_StartNewRecord_Params {
  constructor() {
    /** @type { !media_mojom_PredictionFeatures } */
    this.features;
  }
}



mojo.internal.Struct(
    VideoDecodeStatsRecorder_UpdateRecord_ParamsSpec.$,
    'VideoDecodeStatsRecorder_UpdateRecord_Params',
    [
      mojo.internal.StructField(
        'targets', 0,
        0,
        media_mojom_PredictionTargetsSpec.$,
        null,
        false /* nullable */,
        0),
    ],
    [[0, 16],]);



/**
 * @record
 */
export class VideoDecodeStatsRecorder_UpdateRecord_Params {
  constructor() {
    /** @type { !media_mojom_PredictionTargets } */
    this.targets;
  }
}

