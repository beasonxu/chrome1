// media/learning/mojo/public/mojom/learning_task_controller.mojom-lite.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
'use strict';


mojo.internal.exportModule('media.learning.mojom');








/**
 * @implements {mojo.internal.interfaceSupport.PendingReceiver}
 * @export
 */
media.learning.mojom.LearningTaskControllerPendingReceiver = class {
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
        media.learning.mojom.LearningTaskController.$interfaceName,
        scope);
  }
};



/**
 * @export
 * @implements { media.learning.mojom.LearningTaskControllerInterface }
 */
media.learning.mojom.LearningTaskControllerRemote = class {
  /** @param {MojoHandle|mojo.internal.interfaceSupport.Endpoint=} handle */
  constructor(handle = undefined) {
    /**
     * @private {!mojo.internal.interfaceSupport.InterfaceRemoteBase<!media.learning.mojom.LearningTaskControllerPendingReceiver>}
     */
    this.proxy =
        new mojo.internal.interfaceSupport.InterfaceRemoteBase(
          media.learning.mojom.LearningTaskControllerPendingReceiver,
          handle);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper<!media.learning.mojom.LearningTaskControllerPendingReceiver>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper(this.proxy);

    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.proxy.getConnectionErrorEventRouter();
  }

  
  /**
   * @param { !mojoBase.mojom.UnguessableToken } id
   * @param { !Array<!media.learning.mojom.FeatureValue> } features
   * @param { ?media.learning.mojom.TargetValue } defaultTarget
   */

  beginObservation(
      id,
      features,
      defaultTarget) {
    this.proxy.sendMessage(
        0,
        media.learning.mojom.LearningTaskController_BeginObservation_ParamsSpec.$,
        null,
        [
          id,
          features,
          defaultTarget
        ]);
  }

  
  /**
   * @param { !mojoBase.mojom.UnguessableToken } id
   * @param { !media.learning.mojom.ObservationCompletion } completion
   */

  completeObservation(
      id,
      completion) {
    this.proxy.sendMessage(
        1,
        media.learning.mojom.LearningTaskController_CompleteObservation_ParamsSpec.$,
        null,
        [
          id,
          completion
        ]);
  }

  
  /**
   * @param { !mojoBase.mojom.UnguessableToken } id
   */

  cancelObservation(
      id) {
    this.proxy.sendMessage(
        2,
        media.learning.mojom.LearningTaskController_CancelObservation_ParamsSpec.$,
        null,
        [
          id
        ]);
  }

  
  /**
   * @param { !mojoBase.mojom.UnguessableToken } id
   * @param { ?media.learning.mojom.TargetValue } defaultTarget
   */

  updateDefaultTarget(
      id,
      defaultTarget) {
    this.proxy.sendMessage(
        3,
        media.learning.mojom.LearningTaskController_UpdateDefaultTarget_ParamsSpec.$,
        null,
        [
          id,
          defaultTarget
        ]);
  }

  
  /**
   * @param { !Array<!media.learning.mojom.FeatureValue> } features
   * @return {!Promise<{
        predicted: ?media.learning.mojom.TargetHistogram,
   *  }>}
   */

  predictDistribution(
      features) {
    return this.proxy.sendMessage(
        4,
        media.learning.mojom.LearningTaskController_PredictDistribution_ParamsSpec.$,
        media.learning.mojom.LearningTaskController_PredictDistribution_ResponseParamsSpec.$,
        [
          features
        ]);
  }
};

/**
 * An object which receives request messages for the LearningTaskController
 * mojom interface. Must be constructed over an object which implements that
 * interface.
 *
 * @export
 */
media.learning.mojom.LearningTaskControllerReceiver = class {
  /**
   * @param {!media.learning.mojom.LearningTaskControllerInterface } impl
   */
  constructor(impl) {
    /** @private {!mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal<!media.learning.mojom.LearningTaskControllerRemote>} */
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
        media.learning.mojom.LearningTaskControllerRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!media.learning.mojom.LearningTaskControllerRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);


    this.helper_internal_.registerHandler(
        0,
        media.learning.mojom.LearningTaskController_BeginObservation_ParamsSpec.$,
        null,
        impl.beginObservation.bind(impl));
    this.helper_internal_.registerHandler(
        1,
        media.learning.mojom.LearningTaskController_CompleteObservation_ParamsSpec.$,
        null,
        impl.completeObservation.bind(impl));
    this.helper_internal_.registerHandler(
        2,
        media.learning.mojom.LearningTaskController_CancelObservation_ParamsSpec.$,
        null,
        impl.cancelObservation.bind(impl));
    this.helper_internal_.registerHandler(
        3,
        media.learning.mojom.LearningTaskController_UpdateDefaultTarget_ParamsSpec.$,
        null,
        impl.updateDefaultTarget.bind(impl));
    this.helper_internal_.registerHandler(
        4,
        media.learning.mojom.LearningTaskController_PredictDistribution_ParamsSpec.$,
        media.learning.mojom.LearningTaskController_PredictDistribution_ResponseParamsSpec.$,
        impl.predictDistribution.bind(impl));
    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.helper_internal_.getConnectionErrorEventRouter();
  }
};

/**
 *  @export
 */
media.learning.mojom.LearningTaskController = class {
  /**
   * @return {!string}
   */
  static get $interfaceName() {
    return "media.learning.mojom.LearningTaskController";
  }

  /**
   * Returns a remote for this interface which sends messages to the browser.
   * The browser must have an interface request binder registered for this
   * interface and accessible to the calling document's frame.
   *
   * @return {!media.learning.mojom.LearningTaskControllerRemote}
   * @export
   */
  static getRemote() {
    let remote = new media.learning.mojom.LearningTaskControllerRemote;
    remote.$.bindNewPipeAndPassReceiver().bindInBrowser();
    return remote;
  }
};


/**
 * An object which receives request messages for the LearningTaskController
 * mojom interface and dispatches them as callbacks. One callback receiver exists
 * on this object for each message defined in the mojom interface, and each
 * receiver can have any number of listeners added to it.
 *
 * @export
 */
media.learning.mojom.LearningTaskControllerCallbackRouter = class {
  constructor() {
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
      media.learning.mojom.LearningTaskControllerRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!media.learning.mojom.LearningTaskControllerRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);

    this.router_ = new mojo.internal.interfaceSupport.CallbackRouter;

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.beginObservation =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        0,
        media.learning.mojom.LearningTaskController_BeginObservation_ParamsSpec.$,
        null,
        this.beginObservation.createReceiverHandler(false /* expectsResponse */));
    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.completeObservation =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        1,
        media.learning.mojom.LearningTaskController_CompleteObservation_ParamsSpec.$,
        null,
        this.completeObservation.createReceiverHandler(false /* expectsResponse */));
    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.cancelObservation =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        2,
        media.learning.mojom.LearningTaskController_CancelObservation_ParamsSpec.$,
        null,
        this.cancelObservation.createReceiverHandler(false /* expectsResponse */));
    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.updateDefaultTarget =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        3,
        media.learning.mojom.LearningTaskController_UpdateDefaultTarget_ParamsSpec.$,
        null,
        this.updateDefaultTarget.createReceiverHandler(false /* expectsResponse */));
    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.predictDistribution =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        4,
        media.learning.mojom.LearningTaskController_PredictDistribution_ParamsSpec.$,
        media.learning.mojom.LearningTaskController_PredictDistribution_ResponseParamsSpec.$,
        this.predictDistribution.createReceiverHandler(true /* expectsResponse */));
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
media.learning.mojom.LearningTaskController_BeginObservation_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
media.learning.mojom.LearningTaskController_CompleteObservation_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
media.learning.mojom.LearningTaskController_CancelObservation_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
media.learning.mojom.LearningTaskController_UpdateDefaultTarget_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
media.learning.mojom.LearningTaskController_PredictDistribution_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
media.learning.mojom.LearningTaskController_PredictDistribution_ResponseParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };




mojo.internal.Struct(
    media.learning.mojom.LearningTaskController_BeginObservation_ParamsSpec.$,
    'LearningTaskController_BeginObservation_Params',
    [
      mojo.internal.StructField(
        'id', 0,
        0,
        mojoBase.mojom.UnguessableTokenSpec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'features', 8,
        0,
        mojo.internal.Array(media.learning.mojom.FeatureValueSpec.$, false),
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'defaultTarget', 16,
        0,
        media.learning.mojom.TargetValueSpec.$,
        null,
        true /* nullable */),
    ],
    [[0, 32],]);





/** @record */
media.learning.mojom.LearningTaskController_BeginObservation_Params = class {
  constructor() {
    /** @export { !mojoBase.mojom.UnguessableToken } */
    this.id;
    /** @export { !Array<!media.learning.mojom.FeatureValue> } */
    this.features;
    /** @export { (media.learning.mojom.TargetValue|undefined) } */
    this.defaultTarget;
  }
};




mojo.internal.Struct(
    media.learning.mojom.LearningTaskController_CompleteObservation_ParamsSpec.$,
    'LearningTaskController_CompleteObservation_Params',
    [
      mojo.internal.StructField(
        'id', 0,
        0,
        mojoBase.mojom.UnguessableTokenSpec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'completion', 8,
        0,
        media.learning.mojom.ObservationCompletionSpec.$,
        null,
        false /* nullable */),
    ],
    [[0, 24],]);





/** @record */
media.learning.mojom.LearningTaskController_CompleteObservation_Params = class {
  constructor() {
    /** @export { !mojoBase.mojom.UnguessableToken } */
    this.id;
    /** @export { !media.learning.mojom.ObservationCompletion } */
    this.completion;
  }
};




mojo.internal.Struct(
    media.learning.mojom.LearningTaskController_CancelObservation_ParamsSpec.$,
    'LearningTaskController_CancelObservation_Params',
    [
      mojo.internal.StructField(
        'id', 0,
        0,
        mojoBase.mojom.UnguessableTokenSpec.$,
        null,
        false /* nullable */),
    ],
    [[0, 16],]);





/** @record */
media.learning.mojom.LearningTaskController_CancelObservation_Params = class {
  constructor() {
    /** @export { !mojoBase.mojom.UnguessableToken } */
    this.id;
  }
};




mojo.internal.Struct(
    media.learning.mojom.LearningTaskController_UpdateDefaultTarget_ParamsSpec.$,
    'LearningTaskController_UpdateDefaultTarget_Params',
    [
      mojo.internal.StructField(
        'id', 0,
        0,
        mojoBase.mojom.UnguessableTokenSpec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'defaultTarget', 8,
        0,
        media.learning.mojom.TargetValueSpec.$,
        null,
        true /* nullable */),
    ],
    [[0, 24],]);





/** @record */
media.learning.mojom.LearningTaskController_UpdateDefaultTarget_Params = class {
  constructor() {
    /** @export { !mojoBase.mojom.UnguessableToken } */
    this.id;
    /** @export { (media.learning.mojom.TargetValue|undefined) } */
    this.defaultTarget;
  }
};




mojo.internal.Struct(
    media.learning.mojom.LearningTaskController_PredictDistribution_ParamsSpec.$,
    'LearningTaskController_PredictDistribution_Params',
    [
      mojo.internal.StructField(
        'features', 0,
        0,
        mojo.internal.Array(media.learning.mojom.FeatureValueSpec.$, false),
        null,
        false /* nullable */),
    ],
    [[0, 16],]);





/** @record */
media.learning.mojom.LearningTaskController_PredictDistribution_Params = class {
  constructor() {
    /** @export { !Array<!media.learning.mojom.FeatureValue> } */
    this.features;
  }
};




mojo.internal.Struct(
    media.learning.mojom.LearningTaskController_PredictDistribution_ResponseParamsSpec.$,
    'LearningTaskController_PredictDistribution_ResponseParams',
    [
      mojo.internal.StructField(
        'predicted', 0,
        0,
        media.learning.mojom.TargetHistogramSpec.$,
        null,
        true /* nullable */),
    ],
    [[0, 16],]);





/** @record */
media.learning.mojom.LearningTaskController_PredictDistribution_ResponseParams = class {
  constructor() {
    /** @export { (media.learning.mojom.TargetHistogram|undefined) } */
    this.predicted;
  }
};


