// media/mojo/mojom/webrtc_video_perf.mojom-lite.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
'use strict';


mojo.internal.exportModule('media.mojom');








/**
 * @implements {mojo.internal.interfaceSupport.PendingReceiver}
 * @export
 */
media.mojom.WebrtcVideoPerfRecorderPendingReceiver = class {
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
        media.mojom.WebrtcVideoPerfRecorder.$interfaceName,
        scope);
  }
};



/**
 * @export
 * @implements { media.mojom.WebrtcVideoPerfRecorderInterface }
 */
media.mojom.WebrtcVideoPerfRecorderRemote = class {
  /** @param {MojoHandle|mojo.internal.interfaceSupport.Endpoint=} handle */
  constructor(handle = undefined) {
    /**
     * @private {!mojo.internal.interfaceSupport.InterfaceRemoteBase<!media.mojom.WebrtcVideoPerfRecorderPendingReceiver>}
     */
    this.proxy =
        new mojo.internal.interfaceSupport.InterfaceRemoteBase(
          media.mojom.WebrtcVideoPerfRecorderPendingReceiver,
          handle);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper<!media.mojom.WebrtcVideoPerfRecorderPendingReceiver>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper(this.proxy);

    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.proxy.getConnectionErrorEventRouter();
  }

  
  /**
   * @param { !media.mojom.WebrtcPredictionFeatures } features
   * @param { !media.mojom.WebrtcVideoStats } videoStats
   */

  updateRecord(
      features,
      videoStats) {
    this.proxy.sendMessage(
        0,
        media.mojom.WebrtcVideoPerfRecorder_UpdateRecord_ParamsSpec.$,
        null,
        [
          features,
          videoStats
        ]);
  }
};

/**
 * An object which receives request messages for the WebrtcVideoPerfRecorder
 * mojom interface. Must be constructed over an object which implements that
 * interface.
 *
 * @export
 */
media.mojom.WebrtcVideoPerfRecorderReceiver = class {
  /**
   * @param {!media.mojom.WebrtcVideoPerfRecorderInterface } impl
   */
  constructor(impl) {
    /** @private {!mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal<!media.mojom.WebrtcVideoPerfRecorderRemote>} */
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
        media.mojom.WebrtcVideoPerfRecorderRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!media.mojom.WebrtcVideoPerfRecorderRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);


    this.helper_internal_.registerHandler(
        0,
        media.mojom.WebrtcVideoPerfRecorder_UpdateRecord_ParamsSpec.$,
        null,
        impl.updateRecord.bind(impl));
    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.helper_internal_.getConnectionErrorEventRouter();
  }
};

/**
 *  @export
 */
media.mojom.WebrtcVideoPerfRecorder = class {
  /**
   * @return {!string}
   */
  static get $interfaceName() {
    return "media.mojom.WebrtcVideoPerfRecorder";
  }

  /**
   * Returns a remote for this interface which sends messages to the browser.
   * The browser must have an interface request binder registered for this
   * interface and accessible to the calling document's frame.
   *
   * @return {!media.mojom.WebrtcVideoPerfRecorderRemote}
   * @export
   */
  static getRemote() {
    let remote = new media.mojom.WebrtcVideoPerfRecorderRemote;
    remote.$.bindNewPipeAndPassReceiver().bindInBrowser();
    return remote;
  }
};


/**
 * An object which receives request messages for the WebrtcVideoPerfRecorder
 * mojom interface and dispatches them as callbacks. One callback receiver exists
 * on this object for each message defined in the mojom interface, and each
 * receiver can have any number of listeners added to it.
 *
 * @export
 */
media.mojom.WebrtcVideoPerfRecorderCallbackRouter = class {
  constructor() {
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
      media.mojom.WebrtcVideoPerfRecorderRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!media.mojom.WebrtcVideoPerfRecorderRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);

    this.router_ = new mojo.internal.interfaceSupport.CallbackRouter;

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.updateRecord =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        0,
        media.mojom.WebrtcVideoPerfRecorder_UpdateRecord_ParamsSpec.$,
        null,
        this.updateRecord.createReceiverHandler(false /* expectsResponse */));
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
 * @implements {mojo.internal.interfaceSupport.PendingReceiver}
 * @export
 */
media.mojom.WebrtcVideoPerfHistoryPendingReceiver = class {
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
        media.mojom.WebrtcVideoPerfHistory.$interfaceName,
        scope);
  }
};



/**
 * @export
 * @implements { media.mojom.WebrtcVideoPerfHistoryInterface }
 */
media.mojom.WebrtcVideoPerfHistoryRemote = class {
  /** @param {MojoHandle|mojo.internal.interfaceSupport.Endpoint=} handle */
  constructor(handle = undefined) {
    /**
     * @private {!mojo.internal.interfaceSupport.InterfaceRemoteBase<!media.mojom.WebrtcVideoPerfHistoryPendingReceiver>}
     */
    this.proxy =
        new mojo.internal.interfaceSupport.InterfaceRemoteBase(
          media.mojom.WebrtcVideoPerfHistoryPendingReceiver,
          handle);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper<!media.mojom.WebrtcVideoPerfHistoryPendingReceiver>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper(this.proxy);

    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.proxy.getConnectionErrorEventRouter();
  }

  
  /**
   * @param { !media.mojom.WebrtcPredictionFeatures } features
   * @param { !number } framesPerSecond
   * @return {!Promise<{
        isSmooth: !boolean,
   *  }>}
   */

  getPerfInfo(
      features,
      framesPerSecond) {
    return this.proxy.sendMessage(
        0,
        media.mojom.WebrtcVideoPerfHistory_GetPerfInfo_ParamsSpec.$,
        media.mojom.WebrtcVideoPerfHistory_GetPerfInfo_ResponseParamsSpec.$,
        [
          features,
          framesPerSecond
        ]);
  }
};

/**
 * An object which receives request messages for the WebrtcVideoPerfHistory
 * mojom interface. Must be constructed over an object which implements that
 * interface.
 *
 * @export
 */
media.mojom.WebrtcVideoPerfHistoryReceiver = class {
  /**
   * @param {!media.mojom.WebrtcVideoPerfHistoryInterface } impl
   */
  constructor(impl) {
    /** @private {!mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal<!media.mojom.WebrtcVideoPerfHistoryRemote>} */
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
        media.mojom.WebrtcVideoPerfHistoryRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!media.mojom.WebrtcVideoPerfHistoryRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);


    this.helper_internal_.registerHandler(
        0,
        media.mojom.WebrtcVideoPerfHistory_GetPerfInfo_ParamsSpec.$,
        media.mojom.WebrtcVideoPerfHistory_GetPerfInfo_ResponseParamsSpec.$,
        impl.getPerfInfo.bind(impl));
    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.helper_internal_.getConnectionErrorEventRouter();
  }
};

/**
 *  @export
 */
media.mojom.WebrtcVideoPerfHistory = class {
  /**
   * @return {!string}
   */
  static get $interfaceName() {
    return "media.mojom.WebrtcVideoPerfHistory";
  }

  /**
   * Returns a remote for this interface which sends messages to the browser.
   * The browser must have an interface request binder registered for this
   * interface and accessible to the calling document's frame.
   *
   * @return {!media.mojom.WebrtcVideoPerfHistoryRemote}
   * @export
   */
  static getRemote() {
    let remote = new media.mojom.WebrtcVideoPerfHistoryRemote;
    remote.$.bindNewPipeAndPassReceiver().bindInBrowser();
    return remote;
  }
};


/**
 * An object which receives request messages for the WebrtcVideoPerfHistory
 * mojom interface and dispatches them as callbacks. One callback receiver exists
 * on this object for each message defined in the mojom interface, and each
 * receiver can have any number of listeners added to it.
 *
 * @export
 */
media.mojom.WebrtcVideoPerfHistoryCallbackRouter = class {
  constructor() {
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
      media.mojom.WebrtcVideoPerfHistoryRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!media.mojom.WebrtcVideoPerfHistoryRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);

    this.router_ = new mojo.internal.interfaceSupport.CallbackRouter;

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.getPerfInfo =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        0,
        media.mojom.WebrtcVideoPerfHistory_GetPerfInfo_ParamsSpec.$,
        media.mojom.WebrtcVideoPerfHistory_GetPerfInfo_ResponseParamsSpec.$,
        this.getPerfInfo.createReceiverHandler(true /* expectsResponse */));
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
media.mojom.WebrtcPredictionFeaturesSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
media.mojom.WebrtcVideoStatsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
media.mojom.WebrtcVideoPerfRecorder_UpdateRecord_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
media.mojom.WebrtcVideoPerfHistory_GetPerfInfo_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
media.mojom.WebrtcVideoPerfHistory_GetPerfInfo_ResponseParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };




mojo.internal.Struct(
    media.mojom.WebrtcPredictionFeaturesSpec.$,
    'WebrtcPredictionFeatures',
    [
      mojo.internal.StructField(
        'isDecodeStats', 0,
        0,
        mojo.internal.Bool,
        true,
        false /* nullable */),
      mojo.internal.StructField(
        'profile', 4,
        0,
        media.mojom.VideoCodecProfileSpec.$,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'videoPixels', 8,
        0,
        mojo.internal.Int32,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'hardwareAccelerated', 0,
        1,
        mojo.internal.Bool,
        false,
        false /* nullable */),
    ],
    [[0, 24],]);





/** @record */
media.mojom.WebrtcPredictionFeatures = class {
  constructor() {
    /** @export { !boolean } */
    this.isDecodeStats;
    /** @export { !boolean } */
    this.hardwareAccelerated;
    /** @export { !media.mojom.VideoCodecProfile } */
    this.profile;
    /** @export { !number } */
    this.videoPixels;
  }
};




mojo.internal.Struct(
    media.mojom.WebrtcVideoStatsSpec.$,
    'WebrtcVideoStats',
    [
      mojo.internal.StructField(
        'framesProcessed', 0,
        0,
        mojo.internal.Uint32,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'keyFramesProcessed', 4,
        0,
        mojo.internal.Uint32,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'p99ProcessingTimeMs', 8,
        0,
        mojo.internal.Float,
        0,
        false /* nullable */),
    ],
    [[0, 24],]);





/** @record */
media.mojom.WebrtcVideoStats = class {
  constructor() {
    /** @export { !number } */
    this.framesProcessed;
    /** @export { !number } */
    this.keyFramesProcessed;
    /** @export { !number } */
    this.p99ProcessingTimeMs;
  }
};




mojo.internal.Struct(
    media.mojom.WebrtcVideoPerfRecorder_UpdateRecord_ParamsSpec.$,
    'WebrtcVideoPerfRecorder_UpdateRecord_Params',
    [
      mojo.internal.StructField(
        'features', 0,
        0,
        media.mojom.WebrtcPredictionFeaturesSpec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'videoStats', 8,
        0,
        media.mojom.WebrtcVideoStatsSpec.$,
        null,
        false /* nullable */),
    ],
    [[0, 24],]);





/** @record */
media.mojom.WebrtcVideoPerfRecorder_UpdateRecord_Params = class {
  constructor() {
    /** @export { !media.mojom.WebrtcPredictionFeatures } */
    this.features;
    /** @export { !media.mojom.WebrtcVideoStats } */
    this.videoStats;
  }
};




mojo.internal.Struct(
    media.mojom.WebrtcVideoPerfHistory_GetPerfInfo_ParamsSpec.$,
    'WebrtcVideoPerfHistory_GetPerfInfo_Params',
    [
      mojo.internal.StructField(
        'features', 0,
        0,
        media.mojom.WebrtcPredictionFeaturesSpec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'framesPerSecond', 8,
        0,
        mojo.internal.Int32,
        0,
        false /* nullable */),
    ],
    [[0, 24],]);





/** @record */
media.mojom.WebrtcVideoPerfHistory_GetPerfInfo_Params = class {
  constructor() {
    /** @export { !media.mojom.WebrtcPredictionFeatures } */
    this.features;
    /** @export { !number } */
    this.framesPerSecond;
  }
};




mojo.internal.Struct(
    media.mojom.WebrtcVideoPerfHistory_GetPerfInfo_ResponseParamsSpec.$,
    'WebrtcVideoPerfHistory_GetPerfInfo_ResponseParams',
    [
      mojo.internal.StructField(
        'isSmooth', 0,
        0,
        mojo.internal.Bool,
        false,
        false /* nullable */),
    ],
    [[0, 16],]);





/** @record */
media.mojom.WebrtcVideoPerfHistory_GetPerfInfo_ResponseParams = class {
  constructor() {
    /** @export { !boolean } */
    this.isSmooth;
  }
};


