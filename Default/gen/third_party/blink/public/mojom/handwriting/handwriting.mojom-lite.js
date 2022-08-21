// third_party/blink/public/mojom/handwriting/handwriting.mojom-lite.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
'use strict';


mojo.internal.exportModule('handwriting.mojom');





/**
 * @const { {$: !mojo.internal.MojomType} }
 * @export
 */
handwriting.mojom.HandwritingRecognitionTypeSpec = { $: mojo.internal.Enum() };

/**
 * @enum {number}
 * @export
 */
handwriting.mojom.HandwritingRecognitionType = {
  
  kText: 0,
  MIN_VALUE: 0,
  MAX_VALUE: 0,
};


/**
 * @const { {$: !mojo.internal.MojomType} }
 * @export
 */
handwriting.mojom.HandwritingInputTypeSpec = { $: mojo.internal.Enum() };

/**
 * @enum {number}
 * @export
 */
handwriting.mojom.HandwritingInputType = {
  
  kMouse: 0,
  kStylus: 1,
  kTouch: 2,
  MIN_VALUE: 0,
  MAX_VALUE: 2,
};


/**
 * @const { {$: !mojo.internal.MojomType} }
 * @export
 */
handwriting.mojom.CreateHandwritingRecognizerResultSpec = { $: mojo.internal.Enum() };

/**
 * @enum {number}
 * @export
 */
handwriting.mojom.CreateHandwritingRecognizerResult = {
  
  kOk: 0,
  kError: 1,
  kNotSupported: 2,
  MIN_VALUE: 0,
  MAX_VALUE: 2,
};





/**
 * @implements {mojo.internal.interfaceSupport.PendingReceiver}
 * @export
 */
handwriting.mojom.HandwritingRecognizerPendingReceiver = class {
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
        handwriting.mojom.HandwritingRecognizer.$interfaceName,
        scope);
  }
};



/**
 * @export
 * @implements { handwriting.mojom.HandwritingRecognizerInterface }
 */
handwriting.mojom.HandwritingRecognizerRemote = class {
  /** @param {MojoHandle|mojo.internal.interfaceSupport.Endpoint=} handle */
  constructor(handle = undefined) {
    /**
     * @private {!mojo.internal.interfaceSupport.InterfaceRemoteBase<!handwriting.mojom.HandwritingRecognizerPendingReceiver>}
     */
    this.proxy =
        new mojo.internal.interfaceSupport.InterfaceRemoteBase(
          handwriting.mojom.HandwritingRecognizerPendingReceiver,
          handle);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper<!handwriting.mojom.HandwritingRecognizerPendingReceiver>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper(this.proxy);

    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.proxy.getConnectionErrorEventRouter();
  }

  
  /**
   * @param { !Array<!handwriting.mojom.HandwritingStroke> } strokes
   * @param { !handwriting.mojom.HandwritingHints } hints
   * @return {!Promise<{
        prediction: ?Array<!handwriting.mojom.HandwritingPrediction>,
   *  }>}
   */

  getPrediction(
      strokes,
      hints) {
    return this.proxy.sendMessage(
        0,
        handwriting.mojom.HandwritingRecognizer_GetPrediction_ParamsSpec.$,
        handwriting.mojom.HandwritingRecognizer_GetPrediction_ResponseParamsSpec.$,
        [
          strokes,
          hints
        ]);
  }
};

/**
 * An object which receives request messages for the HandwritingRecognizer
 * mojom interface. Must be constructed over an object which implements that
 * interface.
 *
 * @export
 */
handwriting.mojom.HandwritingRecognizerReceiver = class {
  /**
   * @param {!handwriting.mojom.HandwritingRecognizerInterface } impl
   */
  constructor(impl) {
    /** @private {!mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal<!handwriting.mojom.HandwritingRecognizerRemote>} */
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
        handwriting.mojom.HandwritingRecognizerRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!handwriting.mojom.HandwritingRecognizerRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);


    this.helper_internal_.registerHandler(
        0,
        handwriting.mojom.HandwritingRecognizer_GetPrediction_ParamsSpec.$,
        handwriting.mojom.HandwritingRecognizer_GetPrediction_ResponseParamsSpec.$,
        impl.getPrediction.bind(impl));
    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.helper_internal_.getConnectionErrorEventRouter();
  }
};

/**
 *  @export
 */
handwriting.mojom.HandwritingRecognizer = class {
  /**
   * @return {!string}
   */
  static get $interfaceName() {
    return "handwriting.mojom.HandwritingRecognizer";
  }

  /**
   * Returns a remote for this interface which sends messages to the browser.
   * The browser must have an interface request binder registered for this
   * interface and accessible to the calling document's frame.
   *
   * @return {!handwriting.mojom.HandwritingRecognizerRemote}
   * @export
   */
  static getRemote() {
    let remote = new handwriting.mojom.HandwritingRecognizerRemote;
    remote.$.bindNewPipeAndPassReceiver().bindInBrowser();
    return remote;
  }
};


/**
 * An object which receives request messages for the HandwritingRecognizer
 * mojom interface and dispatches them as callbacks. One callback receiver exists
 * on this object for each message defined in the mojom interface, and each
 * receiver can have any number of listeners added to it.
 *
 * @export
 */
handwriting.mojom.HandwritingRecognizerCallbackRouter = class {
  constructor() {
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
      handwriting.mojom.HandwritingRecognizerRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!handwriting.mojom.HandwritingRecognizerRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);

    this.router_ = new mojo.internal.interfaceSupport.CallbackRouter;

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.getPrediction =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        0,
        handwriting.mojom.HandwritingRecognizer_GetPrediction_ParamsSpec.$,
        handwriting.mojom.HandwritingRecognizer_GetPrediction_ResponseParamsSpec.$,
        this.getPrediction.createReceiverHandler(true /* expectsResponse */));
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
handwriting.mojom.HandwritingRecognitionServicePendingReceiver = class {
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
        handwriting.mojom.HandwritingRecognitionService.$interfaceName,
        scope);
  }
};



/**
 * @export
 * @implements { handwriting.mojom.HandwritingRecognitionServiceInterface }
 */
handwriting.mojom.HandwritingRecognitionServiceRemote = class {
  /** @param {MojoHandle|mojo.internal.interfaceSupport.Endpoint=} handle */
  constructor(handle = undefined) {
    /**
     * @private {!mojo.internal.interfaceSupport.InterfaceRemoteBase<!handwriting.mojom.HandwritingRecognitionServicePendingReceiver>}
     */
    this.proxy =
        new mojo.internal.interfaceSupport.InterfaceRemoteBase(
          handwriting.mojom.HandwritingRecognitionServicePendingReceiver,
          handle);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper<!handwriting.mojom.HandwritingRecognitionServicePendingReceiver>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper(this.proxy);

    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.proxy.getConnectionErrorEventRouter();
  }

  
  /**
   * @param { !handwriting.mojom.HandwritingModelConstraint } constraint
   * @return {!Promise<{
        result: !handwriting.mojom.CreateHandwritingRecognizerResult,
        handwritingRecognizer: ?handwriting.mojom.HandwritingRecognizerRemote,
   *  }>}
   */

  createHandwritingRecognizer(
      constraint) {
    return this.proxy.sendMessage(
        0,
        handwriting.mojom.HandwritingRecognitionService_CreateHandwritingRecognizer_ParamsSpec.$,
        handwriting.mojom.HandwritingRecognitionService_CreateHandwritingRecognizer_ResponseParamsSpec.$,
        [
          constraint
        ]);
  }

  
  /**
   * @param { ?handwriting.mojom.HandwritingModelConstraint } constraint
   * @return {!Promise<{
        result: ?handwriting.mojom.QueryHandwritingRecognizerResult,
   *  }>}
   */

  queryHandwritingRecognizer(
      constraint) {
    return this.proxy.sendMessage(
        1,
        handwriting.mojom.HandwritingRecognitionService_QueryHandwritingRecognizer_ParamsSpec.$,
        handwriting.mojom.HandwritingRecognitionService_QueryHandwritingRecognizer_ResponseParamsSpec.$,
        [
          constraint
        ]);
  }
};

/**
 * An object which receives request messages for the HandwritingRecognitionService
 * mojom interface. Must be constructed over an object which implements that
 * interface.
 *
 * @export
 */
handwriting.mojom.HandwritingRecognitionServiceReceiver = class {
  /**
   * @param {!handwriting.mojom.HandwritingRecognitionServiceInterface } impl
   */
  constructor(impl) {
    /** @private {!mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal<!handwriting.mojom.HandwritingRecognitionServiceRemote>} */
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
        handwriting.mojom.HandwritingRecognitionServiceRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!handwriting.mojom.HandwritingRecognitionServiceRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);


    this.helper_internal_.registerHandler(
        0,
        handwriting.mojom.HandwritingRecognitionService_CreateHandwritingRecognizer_ParamsSpec.$,
        handwriting.mojom.HandwritingRecognitionService_CreateHandwritingRecognizer_ResponseParamsSpec.$,
        impl.createHandwritingRecognizer.bind(impl));
    this.helper_internal_.registerHandler(
        1,
        handwriting.mojom.HandwritingRecognitionService_QueryHandwritingRecognizer_ParamsSpec.$,
        handwriting.mojom.HandwritingRecognitionService_QueryHandwritingRecognizer_ResponseParamsSpec.$,
        impl.queryHandwritingRecognizer.bind(impl));
    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.helper_internal_.getConnectionErrorEventRouter();
  }
};

/**
 *  @export
 */
handwriting.mojom.HandwritingRecognitionService = class {
  /**
   * @return {!string}
   */
  static get $interfaceName() {
    return "handwriting.mojom.HandwritingRecognitionService";
  }

  /**
   * Returns a remote for this interface which sends messages to the browser.
   * The browser must have an interface request binder registered for this
   * interface and accessible to the calling document's frame.
   *
   * @return {!handwriting.mojom.HandwritingRecognitionServiceRemote}
   * @export
   */
  static getRemote() {
    let remote = new handwriting.mojom.HandwritingRecognitionServiceRemote;
    remote.$.bindNewPipeAndPassReceiver().bindInBrowser();
    return remote;
  }
};


/**
 * An object which receives request messages for the HandwritingRecognitionService
 * mojom interface and dispatches them as callbacks. One callback receiver exists
 * on this object for each message defined in the mojom interface, and each
 * receiver can have any number of listeners added to it.
 *
 * @export
 */
handwriting.mojom.HandwritingRecognitionServiceCallbackRouter = class {
  constructor() {
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
      handwriting.mojom.HandwritingRecognitionServiceRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!handwriting.mojom.HandwritingRecognitionServiceRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);

    this.router_ = new mojo.internal.interfaceSupport.CallbackRouter;

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.createHandwritingRecognizer =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        0,
        handwriting.mojom.HandwritingRecognitionService_CreateHandwritingRecognizer_ParamsSpec.$,
        handwriting.mojom.HandwritingRecognitionService_CreateHandwritingRecognizer_ResponseParamsSpec.$,
        this.createHandwritingRecognizer.createReceiverHandler(true /* expectsResponse */));
    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.queryHandwritingRecognizer =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        1,
        handwriting.mojom.HandwritingRecognitionService_QueryHandwritingRecognizer_ParamsSpec.$,
        handwriting.mojom.HandwritingRecognitionService_QueryHandwritingRecognizer_ResponseParamsSpec.$,
        this.queryHandwritingRecognizer.createReceiverHandler(true /* expectsResponse */));
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
handwriting.mojom.HandwritingPointSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
handwriting.mojom.HandwritingStrokeSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
handwriting.mojom.HandwritingDrawingSegmentSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
handwriting.mojom.HandwritingSegmentSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
handwriting.mojom.HandwritingPredictionSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
handwriting.mojom.HandwritingHintsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
handwriting.mojom.HandwritingHintsQueryResultSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
handwriting.mojom.QueryHandwritingRecognizerResultSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
handwriting.mojom.HandwritingModelConstraintSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
handwriting.mojom.HandwritingRecognizer_GetPrediction_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
handwriting.mojom.HandwritingRecognizer_GetPrediction_ResponseParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
handwriting.mojom.HandwritingRecognitionService_CreateHandwritingRecognizer_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
handwriting.mojom.HandwritingRecognitionService_CreateHandwritingRecognizer_ResponseParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
handwriting.mojom.HandwritingRecognitionService_QueryHandwritingRecognizer_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
handwriting.mojom.HandwritingRecognitionService_QueryHandwritingRecognizer_ResponseParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };




mojo.internal.Struct(
    handwriting.mojom.HandwritingPointSpec.$,
    'HandwritingPoint',
    [
      mojo.internal.StructField(
        'location', 0,
        0,
        gfx.mojom.PointFSpec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        't', 8,
        0,
        mojoBase.mojom.TimeDeltaSpec.$,
        null,
        true /* nullable */),
    ],
    [[0, 24],]);





/** @record */
handwriting.mojom.HandwritingPoint = class {
  constructor() {
    /** @export { !gfx.mojom.PointF } */
    this.location;
    /** @export { (mojoBase.mojom.TimeDelta|undefined) } */
    this.t;
  }
};




mojo.internal.Struct(
    handwriting.mojom.HandwritingStrokeSpec.$,
    'HandwritingStroke',
    [
      mojo.internal.StructField(
        'points', 0,
        0,
        mojo.internal.Array(handwriting.mojom.HandwritingPointSpec.$, false),
        null,
        false /* nullable */),
    ],
    [[0, 16],]);





/** @record */
handwriting.mojom.HandwritingStroke = class {
  constructor() {
    /** @export { !Array<!handwriting.mojom.HandwritingPoint> } */
    this.points;
  }
};




mojo.internal.Struct(
    handwriting.mojom.HandwritingDrawingSegmentSpec.$,
    'HandwritingDrawingSegment',
    [
      mojo.internal.StructField(
        'strokeIndex', 0,
        0,
        mojo.internal.Uint32,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'beginPointIndex', 4,
        0,
        mojo.internal.Uint32,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'endPointIndex', 8,
        0,
        mojo.internal.Uint32,
        0,
        false /* nullable */),
    ],
    [[0, 24],]);





/** @record */
handwriting.mojom.HandwritingDrawingSegment = class {
  constructor() {
    /** @export { !number } */
    this.strokeIndex;
    /** @export { !number } */
    this.beginPointIndex;
    /** @export { !number } */
    this.endPointIndex;
  }
};




mojo.internal.Struct(
    handwriting.mojom.HandwritingSegmentSpec.$,
    'HandwritingSegment',
    [
      mojo.internal.StructField(
        'grapheme', 0,
        0,
        mojo.internal.String,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'beginIndex', 8,
        0,
        mojo.internal.Uint32,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'endIndex', 12,
        0,
        mojo.internal.Uint32,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'drawingSegments', 16,
        0,
        mojo.internal.Array(handwriting.mojom.HandwritingDrawingSegmentSpec.$, false),
        null,
        false /* nullable */),
    ],
    [[0, 32],]);





/** @record */
handwriting.mojom.HandwritingSegment = class {
  constructor() {
    /** @export { !string } */
    this.grapheme;
    /** @export { !number } */
    this.beginIndex;
    /** @export { !number } */
    this.endIndex;
    /** @export { !Array<!handwriting.mojom.HandwritingDrawingSegment> } */
    this.drawingSegments;
  }
};




mojo.internal.Struct(
    handwriting.mojom.HandwritingPredictionSpec.$,
    'HandwritingPrediction',
    [
      mojo.internal.StructField(
        'text', 0,
        0,
        mojo.internal.String,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'segmentationResult', 8,
        0,
        mojo.internal.Array(handwriting.mojom.HandwritingSegmentSpec.$, false),
        null,
        false /* nullable */),
    ],
    [[0, 24],]);





/** @record */
handwriting.mojom.HandwritingPrediction = class {
  constructor() {
    /** @export { !string } */
    this.text;
    /** @export { !Array<!handwriting.mojom.HandwritingSegment> } */
    this.segmentationResult;
  }
};




mojo.internal.Struct(
    handwriting.mojom.HandwritingHintsSpec.$,
    'HandwritingHints',
    [
      mojo.internal.StructField(
        'recognitionType', 0,
        0,
        mojo.internal.String,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'inputType', 8,
        0,
        mojo.internal.String,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'textContext', 16,
        0,
        mojo.internal.String,
        null,
        true /* nullable */),
      mojo.internal.StructField(
        'alternatives', 24,
        0,
        mojo.internal.Uint32,
        0,
        false /* nullable */),
    ],
    [[0, 40],]);





/** @record */
handwriting.mojom.HandwritingHints = class {
  constructor() {
    /** @export { !string } */
    this.recognitionType;
    /** @export { !string } */
    this.inputType;
    /** @export { (string|undefined) } */
    this.textContext;
    /** @export { !number } */
    this.alternatives;
  }
};




mojo.internal.Struct(
    handwriting.mojom.HandwritingHintsQueryResultSpec.$,
    'HandwritingHintsQueryResult',
    [
      mojo.internal.StructField(
        'recognitionType', 0,
        0,
        mojo.internal.Array(handwriting.mojom.HandwritingRecognitionTypeSpec.$, false),
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'inputType', 8,
        0,
        mojo.internal.Array(handwriting.mojom.HandwritingInputTypeSpec.$, false),
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'textContext', 16,
        0,
        mojo.internal.Bool,
        false,
        false /* nullable */),
      mojo.internal.StructField(
        'alternatives', 16,
        1,
        mojo.internal.Bool,
        false,
        false /* nullable */),
    ],
    [[0, 32],]);





/** @record */
handwriting.mojom.HandwritingHintsQueryResult = class {
  constructor() {
    /** @export { !Array<!handwriting.mojom.HandwritingRecognitionType> } */
    this.recognitionType;
    /** @export { !Array<!handwriting.mojom.HandwritingInputType> } */
    this.inputType;
    /** @export { !boolean } */
    this.textContext;
    /** @export { !boolean } */
    this.alternatives;
  }
};




mojo.internal.Struct(
    handwriting.mojom.QueryHandwritingRecognizerResultSpec.$,
    'QueryHandwritingRecognizerResult',
    [
      mojo.internal.StructField(
        'textAlternatives', 0,
        0,
        mojo.internal.Bool,
        false,
        false /* nullable */),
      mojo.internal.StructField(
        'textSegmentation', 0,
        1,
        mojo.internal.Bool,
        false,
        false /* nullable */),
      mojo.internal.StructField(
        'hints', 8,
        0,
        handwriting.mojom.HandwritingHintsQueryResultSpec.$,
        null,
        false /* nullable */),
    ],
    [[0, 24],]);





/** @record */
handwriting.mojom.QueryHandwritingRecognizerResult = class {
  constructor() {
    /** @export { !boolean } */
    this.textAlternatives;
    /** @export { !boolean } */
    this.textSegmentation;
    /** @export { !handwriting.mojom.HandwritingHintsQueryResult } */
    this.hints;
  }
};




mojo.internal.Struct(
    handwriting.mojom.HandwritingModelConstraintSpec.$,
    'HandwritingModelConstraint',
    [
      mojo.internal.StructField(
        'languages', 0,
        0,
        mojo.internal.Array(mojo.internal.String, false),
        null,
        false /* nullable */),
    ],
    [[0, 16],]);





/** @record */
handwriting.mojom.HandwritingModelConstraint = class {
  constructor() {
    /** @export { !Array<!string> } */
    this.languages;
  }
};




mojo.internal.Struct(
    handwriting.mojom.HandwritingRecognizer_GetPrediction_ParamsSpec.$,
    'HandwritingRecognizer_GetPrediction_Params',
    [
      mojo.internal.StructField(
        'strokes', 0,
        0,
        mojo.internal.Array(handwriting.mojom.HandwritingStrokeSpec.$, false),
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'hints', 8,
        0,
        handwriting.mojom.HandwritingHintsSpec.$,
        null,
        false /* nullable */),
    ],
    [[0, 24],]);





/** @record */
handwriting.mojom.HandwritingRecognizer_GetPrediction_Params = class {
  constructor() {
    /** @export { !Array<!handwriting.mojom.HandwritingStroke> } */
    this.strokes;
    /** @export { !handwriting.mojom.HandwritingHints } */
    this.hints;
  }
};




mojo.internal.Struct(
    handwriting.mojom.HandwritingRecognizer_GetPrediction_ResponseParamsSpec.$,
    'HandwritingRecognizer_GetPrediction_ResponseParams',
    [
      mojo.internal.StructField(
        'prediction', 0,
        0,
        mojo.internal.Array(handwriting.mojom.HandwritingPredictionSpec.$, false),
        null,
        true /* nullable */),
    ],
    [[0, 16],]);





/** @record */
handwriting.mojom.HandwritingRecognizer_GetPrediction_ResponseParams = class {
  constructor() {
    /** @export { (Array<!handwriting.mojom.HandwritingPrediction>|undefined) } */
    this.prediction;
  }
};




mojo.internal.Struct(
    handwriting.mojom.HandwritingRecognitionService_CreateHandwritingRecognizer_ParamsSpec.$,
    'HandwritingRecognitionService_CreateHandwritingRecognizer_Params',
    [
      mojo.internal.StructField(
        'constraint', 0,
        0,
        handwriting.mojom.HandwritingModelConstraintSpec.$,
        null,
        false /* nullable */),
    ],
    [[0, 16],]);





/** @record */
handwriting.mojom.HandwritingRecognitionService_CreateHandwritingRecognizer_Params = class {
  constructor() {
    /** @export { !handwriting.mojom.HandwritingModelConstraint } */
    this.constraint;
  }
};




mojo.internal.Struct(
    handwriting.mojom.HandwritingRecognitionService_CreateHandwritingRecognizer_ResponseParamsSpec.$,
    'HandwritingRecognitionService_CreateHandwritingRecognizer_ResponseParams',
    [
      mojo.internal.StructField(
        'result', 0,
        0,
        handwriting.mojom.CreateHandwritingRecognizerResultSpec.$,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'handwritingRecognizer', 4,
        0,
        mojo.internal.InterfaceProxy(handwriting.mojom.HandwritingRecognizerRemote),
        null,
        true /* nullable */),
    ],
    [[0, 24],]);





/** @record */
handwriting.mojom.HandwritingRecognitionService_CreateHandwritingRecognizer_ResponseParams = class {
  constructor() {
    /** @export { !handwriting.mojom.CreateHandwritingRecognizerResult } */
    this.result;
    /** @export { (handwriting.mojom.HandwritingRecognizerRemote|undefined) } */
    this.handwritingRecognizer;
  }
};




mojo.internal.Struct(
    handwriting.mojom.HandwritingRecognitionService_QueryHandwritingRecognizer_ParamsSpec.$,
    'HandwritingRecognitionService_QueryHandwritingRecognizer_Params',
    [
      mojo.internal.StructField(
        'constraint', 0,
        0,
        handwriting.mojom.HandwritingModelConstraintSpec.$,
        null,
        true /* nullable */),
    ],
    [[0, 16],]);





/** @record */
handwriting.mojom.HandwritingRecognitionService_QueryHandwritingRecognizer_Params = class {
  constructor() {
    /** @export { (handwriting.mojom.HandwritingModelConstraint|undefined) } */
    this.constraint;
  }
};




mojo.internal.Struct(
    handwriting.mojom.HandwritingRecognitionService_QueryHandwritingRecognizer_ResponseParamsSpec.$,
    'HandwritingRecognitionService_QueryHandwritingRecognizer_ResponseParams',
    [
      mojo.internal.StructField(
        'result', 0,
        0,
        handwriting.mojom.QueryHandwritingRecognizerResultSpec.$,
        null,
        true /* nullable */),
    ],
    [[0, 16],]);





/** @record */
handwriting.mojom.HandwritingRecognitionService_QueryHandwritingRecognizer_ResponseParams = class {
  constructor() {
    /** @export { (handwriting.mojom.QueryHandwritingRecognizerResult|undefined) } */
    this.result;
  }
};


