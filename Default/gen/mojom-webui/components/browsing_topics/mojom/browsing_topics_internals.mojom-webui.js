// mojom-webui/components/browsing_topics/mojom/browsing_topics_internals.mojom-webui.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2020 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

import {mojo} from '//resources/mojo/mojo/public/js/bindings.js';

import {
  String16 as mojoBase_mojom_String16,
  String16Spec as mojoBase_mojom_String16Spec
} from 'chrome://resources/mojo/mojo/public/mojom/base/string16.mojom-webui.js';

import {
  Time as mojoBase_mojom_Time,
  TimeSpec as mojoBase_mojom_TimeSpec,
  TimeDelta as mojoBase_mojom_TimeDelta,
  TimeDeltaSpec as mojoBase_mojom_TimeDeltaSpec
} from 'chrome://resources/mojo/mojo/public/mojom/base/time.mojom-webui.js';




/**
 * @implements {mojo.internal.interfaceSupport.PendingReceiver}
 */
export class PageHandlerPendingReceiver {
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
        this.handle, 'browsing_topics.mojom.PageHandler', scope);
  }
}

/** @interface */
export class PageHandlerInterface {
  
  /**
   * @return {!Promise<{
        config: !WebUIBrowsingTopicsConfiguration,
   *  }>}
   */

  getBrowsingTopicsConfiguration() {}
  
  /**
   * @param { !boolean } calculateNow
   * @return {!Promise<{
        result: !WebUIGetBrowsingTopicsStateResult,
   *  }>}
   */

  getBrowsingTopicsState(calculateNow) {}
  
  /**
   * @return {!Promise<{
        result: !WebUIGetModelInfoResult,
   *  }>}
   */

  getModelInfo() {}
  
  /**
   * @param { !Array<!string> } hosts
   * @return {!Promise<{
        topicsForHosts: !Array<!Array<!WebUITopic>>,
   *  }>}
   */

  classifyHosts(hosts) {}
}

/**
 * @implements { PageHandlerInterface }
 */
export class PageHandlerRemote {
  /** @param {MojoHandle|mojo.internal.interfaceSupport.Endpoint=} handle */
  constructor(handle = undefined) {
    /**
     * @private {!mojo.internal.interfaceSupport.InterfaceRemoteBase<!PageHandlerPendingReceiver>}
     */
    this.proxy =
        new mojo.internal.interfaceSupport.InterfaceRemoteBase(
          PageHandlerPendingReceiver,
          handle);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper<!PageHandlerPendingReceiver>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper(this.proxy);

    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.proxy.getConnectionErrorEventRouter();
  }

  
  /**
   * @return {!Promise<{
        config: !WebUIBrowsingTopicsConfiguration,
   *  }>}
   */

  getBrowsingTopicsConfiguration() {
    return this.proxy.sendMessage(
        0,
        PageHandler_GetBrowsingTopicsConfiguration_ParamsSpec.$,
        PageHandler_GetBrowsingTopicsConfiguration_ResponseParamsSpec.$,
        [
        ]);
  }

  
  /**
   * @param { !boolean } calculateNow
   * @return {!Promise<{
        result: !WebUIGetBrowsingTopicsStateResult,
   *  }>}
   */

  getBrowsingTopicsState(
      calculateNow) {
    return this.proxy.sendMessage(
        1,
        PageHandler_GetBrowsingTopicsState_ParamsSpec.$,
        PageHandler_GetBrowsingTopicsState_ResponseParamsSpec.$,
        [
          calculateNow
        ]);
  }

  
  /**
   * @return {!Promise<{
        result: !WebUIGetModelInfoResult,
   *  }>}
   */

  getModelInfo() {
    return this.proxy.sendMessage(
        2,
        PageHandler_GetModelInfo_ParamsSpec.$,
        PageHandler_GetModelInfo_ResponseParamsSpec.$,
        [
        ]);
  }

  
  /**
   * @param { !Array<!string> } hosts
   * @return {!Promise<{
        topicsForHosts: !Array<!Array<!WebUITopic>>,
   *  }>}
   */

  classifyHosts(
      hosts) {
    return this.proxy.sendMessage(
        3,
        PageHandler_ClassifyHosts_ParamsSpec.$,
        PageHandler_ClassifyHosts_ResponseParamsSpec.$,
        [
          hosts
        ]);
  }
}

/**
 * An object which receives request messages for the PageHandler
 * mojom interface. Must be constructed over an object which implements that
 * interface.
 */
export class PageHandlerReceiver {
  /**
   * @param {!PageHandlerInterface } impl
   */
  constructor(impl) {
    /** @private {!mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal<!PageHandlerRemote>} */
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
        PageHandlerRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!PageHandlerRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);


    this.helper_internal_.registerHandler(
        0,
        PageHandler_GetBrowsingTopicsConfiguration_ParamsSpec.$,
        PageHandler_GetBrowsingTopicsConfiguration_ResponseParamsSpec.$,
        impl.getBrowsingTopicsConfiguration.bind(impl));
    this.helper_internal_.registerHandler(
        1,
        PageHandler_GetBrowsingTopicsState_ParamsSpec.$,
        PageHandler_GetBrowsingTopicsState_ResponseParamsSpec.$,
        impl.getBrowsingTopicsState.bind(impl));
    this.helper_internal_.registerHandler(
        2,
        PageHandler_GetModelInfo_ParamsSpec.$,
        PageHandler_GetModelInfo_ResponseParamsSpec.$,
        impl.getModelInfo.bind(impl));
    this.helper_internal_.registerHandler(
        3,
        PageHandler_ClassifyHosts_ParamsSpec.$,
        PageHandler_ClassifyHosts_ResponseParamsSpec.$,
        impl.classifyHosts.bind(impl));
    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.helper_internal_.getConnectionErrorEventRouter();
  }
}

export class PageHandler {
  /**
   * @return {!string}
   */
  static get $interfaceName() {
    return "browsing_topics.mojom.PageHandler";
  }

  /**
   * Returns a remote for this interface which sends messages to the browser.
   * The browser must have an interface request binder registered for this
   * interface and accessible to the calling document's frame.
   *
   * @return {!PageHandlerRemote}
   */
  static getRemote() {
    let remote = new PageHandlerRemote;
    remote.$.bindNewPipeAndPassReceiver().bindInBrowser();
    return remote;
  }
}


/**
 * An object which receives request messages for the PageHandler
 * mojom interface and dispatches them as callbacks. One callback receiver exists
 * on this object for each message defined in the mojom interface, and each
 * receiver can have any number of listeners added to it.
 */
export class PageHandlerCallbackRouter {
  constructor() {
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
      PageHandlerRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!PageHandlerRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);

    this.router_ = new mojo.internal.interfaceSupport.CallbackRouter;

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.getBrowsingTopicsConfiguration =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        0,
        PageHandler_GetBrowsingTopicsConfiguration_ParamsSpec.$,
        PageHandler_GetBrowsingTopicsConfiguration_ResponseParamsSpec.$,
        this.getBrowsingTopicsConfiguration.createReceiverHandler(true /* expectsResponse */));
    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.getBrowsingTopicsState =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        1,
        PageHandler_GetBrowsingTopicsState_ParamsSpec.$,
        PageHandler_GetBrowsingTopicsState_ResponseParamsSpec.$,
        this.getBrowsingTopicsState.createReceiverHandler(true /* expectsResponse */));
    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.getModelInfo =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        2,
        PageHandler_GetModelInfo_ParamsSpec.$,
        PageHandler_GetModelInfo_ResponseParamsSpec.$,
        this.getModelInfo.createReceiverHandler(true /* expectsResponse */));
    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.classifyHosts =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        3,
        PageHandler_ClassifyHosts_ParamsSpec.$,
        PageHandler_ClassifyHosts_ResponseParamsSpec.$,
        this.classifyHosts.createReceiverHandler(true /* expectsResponse */));
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
export const WebUIBrowsingTopicsConfigurationSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const WebUITopicSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const WebUIEpochSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const WebUIBrowsingTopicsStateSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const WebUIModelInfoSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const PageHandler_GetBrowsingTopicsConfiguration_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const PageHandler_GetBrowsingTopicsConfiguration_ResponseParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const PageHandler_GetBrowsingTopicsState_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const PageHandler_GetBrowsingTopicsState_ResponseParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const PageHandler_GetModelInfo_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const PageHandler_GetModelInfo_ResponseParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const PageHandler_ClassifyHosts_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const PageHandler_ClassifyHosts_ResponseParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType} }
 */
export const WebUIGetBrowsingTopicsStateResultSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType} }
 */
export const WebUIGetModelInfoResultSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };




mojo.internal.Struct(
    WebUIBrowsingTopicsConfigurationSpec.$,
    'WebUIBrowsingTopicsConfiguration',
    [
      mojo.internal.StructField(
        'browsingTopicsEnabled', 0,
        0,
        mojo.internal.Bool,
        false,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'privacySandboxAdsApisOverrideEnabled', 0,
        1,
        mojo.internal.Bool,
        false,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'privacySandboxSettings3Enabled', 0,
        2,
        mojo.internal.Bool,
        false,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'overridePrivacySandboxSettingsLocalTestingEnabled', 0,
        3,
        mojo.internal.Bool,
        false,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'browsingTopicsBypassIpIsPubliclyRoutableCheckEnabled', 0,
        4,
        mojo.internal.Bool,
        false,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'numberOfEpochsToExpose', 4,
        0,
        mojo.internal.Int32,
        0,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'timePeriodPerEpoch', 8,
        0,
        mojoBase_mojom_TimeDeltaSpec.$,
        null,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'numberOfTopTopicsPerEpoch', 16,
        0,
        mojo.internal.Int32,
        0,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'useRandomTopicProbabilityPercent', 20,
        0,
        mojo.internal.Int32,
        0,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'numberOfEpochsOfObservationDataToUseForFiltering', 24,
        0,
        mojo.internal.Int32,
        0,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'maxNumberOfApiUsageContextDomainsToKeepPerTopic', 28,
        0,
        mojo.internal.Int32,
        0,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'maxNumberOfApiUsageContextEntriesToLoadPerEpoch', 32,
        0,
        mojo.internal.Int32,
        0,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'maxNumberOfApiUsageContextDomainsToStorePerPageLoad', 36,
        0,
        mojo.internal.Int32,
        0,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'configVersion', 40,
        0,
        mojo.internal.Int32,
        0,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'taxonomyVersion', 44,
        0,
        mojo.internal.Int32,
        0,
        false /* nullable */,
        0),
    ],
    [[0, 56],]);



/**
 * @record
 */
export class WebUIBrowsingTopicsConfiguration {
  constructor() {
    /** @type { !boolean } */
    this.browsingTopicsEnabled;
    /** @type { !boolean } */
    this.privacySandboxAdsApisOverrideEnabled;
    /** @type { !boolean } */
    this.privacySandboxSettings3Enabled;
    /** @type { !boolean } */
    this.overridePrivacySandboxSettingsLocalTestingEnabled;
    /** @type { !boolean } */
    this.browsingTopicsBypassIpIsPubliclyRoutableCheckEnabled;
    /** @type { !number } */
    this.numberOfEpochsToExpose;
    /** @type { !mojoBase_mojom_TimeDelta } */
    this.timePeriodPerEpoch;
    /** @type { !number } */
    this.numberOfTopTopicsPerEpoch;
    /** @type { !number } */
    this.useRandomTopicProbabilityPercent;
    /** @type { !number } */
    this.numberOfEpochsOfObservationDataToUseForFiltering;
    /** @type { !number } */
    this.maxNumberOfApiUsageContextDomainsToKeepPerTopic;
    /** @type { !number } */
    this.maxNumberOfApiUsageContextEntriesToLoadPerEpoch;
    /** @type { !number } */
    this.maxNumberOfApiUsageContextDomainsToStorePerPageLoad;
    /** @type { !number } */
    this.configVersion;
    /** @type { !number } */
    this.taxonomyVersion;
  }
}



mojo.internal.Struct(
    WebUITopicSpec.$,
    'WebUITopic',
    [
      mojo.internal.StructField(
        'topicId', 0,
        0,
        mojo.internal.Int32,
        0,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'topicName', 8,
        0,
        mojoBase_mojom_String16Spec.$,
        null,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'isRealTopic', 4,
        0,
        mojo.internal.Bool,
        false,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'observedByDomains', 16,
        0,
        mojo.internal.Array(mojo.internal.String, false),
        null,
        false /* nullable */,
        0),
    ],
    [[0, 32],]);



/**
 * @record
 */
export class WebUITopic {
  constructor() {
    /** @type { !number } */
    this.topicId;
    /** @type { !boolean } */
    this.isRealTopic;
    /** @type { !mojoBase_mojom_String16 } */
    this.topicName;
    /** @type { !Array<!string> } */
    this.observedByDomains;
  }
}



mojo.internal.Struct(
    WebUIEpochSpec.$,
    'WebUIEpoch',
    [
      mojo.internal.StructField(
        'topics', 0,
        0,
        mojo.internal.Array(WebUITopicSpec.$, false),
        null,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'calculationTime', 8,
        0,
        mojoBase_mojom_TimeSpec.$,
        null,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'modelVersion', 16,
        0,
        mojo.internal.String,
        null,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'taxonomyVersion', 24,
        0,
        mojo.internal.String,
        null,
        false /* nullable */,
        0),
    ],
    [[0, 40],]);



/**
 * @record
 */
export class WebUIEpoch {
  constructor() {
    /** @type { !Array<!WebUITopic> } */
    this.topics;
    /** @type { !mojoBase_mojom_Time } */
    this.calculationTime;
    /** @type { !string } */
    this.modelVersion;
    /** @type { !string } */
    this.taxonomyVersion;
  }
}



mojo.internal.Struct(
    WebUIBrowsingTopicsStateSpec.$,
    'WebUIBrowsingTopicsState',
    [
      mojo.internal.StructField(
        'epochs', 0,
        0,
        mojo.internal.Array(WebUIEpochSpec.$, false),
        null,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'nextScheduledCalculationTime', 8,
        0,
        mojoBase_mojom_TimeSpec.$,
        null,
        false /* nullable */,
        0),
    ],
    [[0, 24],]);



/**
 * @record
 */
export class WebUIBrowsingTopicsState {
  constructor() {
    /** @type { !Array<!WebUIEpoch> } */
    this.epochs;
    /** @type { !mojoBase_mojom_Time } */
    this.nextScheduledCalculationTime;
  }
}



mojo.internal.Struct(
    WebUIModelInfoSpec.$,
    'WebUIModelInfo',
    [
      mojo.internal.StructField(
        'modelVersion', 0,
        0,
        mojo.internal.String,
        null,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'modelFilePath', 8,
        0,
        mojo.internal.String,
        null,
        false /* nullable */,
        0),
    ],
    [[0, 24],]);



/**
 * @record
 */
export class WebUIModelInfo {
  constructor() {
    /** @type { !string } */
    this.modelVersion;
    /** @type { !string } */
    this.modelFilePath;
  }
}



mojo.internal.Struct(
    PageHandler_GetBrowsingTopicsConfiguration_ParamsSpec.$,
    'PageHandler_GetBrowsingTopicsConfiguration_Params',
    [
    ],
    [[0, 8],]);



/**
 * @record
 */
export class PageHandler_GetBrowsingTopicsConfiguration_Params {
  constructor() {
  }
}



mojo.internal.Struct(
    PageHandler_GetBrowsingTopicsConfiguration_ResponseParamsSpec.$,
    'PageHandler_GetBrowsingTopicsConfiguration_ResponseParams',
    [
      mojo.internal.StructField(
        'config', 0,
        0,
        WebUIBrowsingTopicsConfigurationSpec.$,
        null,
        false /* nullable */,
        0),
    ],
    [[0, 16],]);



/**
 * @record
 */
export class PageHandler_GetBrowsingTopicsConfiguration_ResponseParams {
  constructor() {
    /** @type { !WebUIBrowsingTopicsConfiguration } */
    this.config;
  }
}



mojo.internal.Struct(
    PageHandler_GetBrowsingTopicsState_ParamsSpec.$,
    'PageHandler_GetBrowsingTopicsState_Params',
    [
      mojo.internal.StructField(
        'calculateNow', 0,
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
export class PageHandler_GetBrowsingTopicsState_Params {
  constructor() {
    /** @type { !boolean } */
    this.calculateNow;
  }
}



mojo.internal.Struct(
    PageHandler_GetBrowsingTopicsState_ResponseParamsSpec.$,
    'PageHandler_GetBrowsingTopicsState_ResponseParams',
    [
      mojo.internal.StructField(
        'result', 0,
        0,
        WebUIGetBrowsingTopicsStateResultSpec.$,
        null,
        false /* nullable */,
        0),
    ],
    [[0, 24],]);



/**
 * @record
 */
export class PageHandler_GetBrowsingTopicsState_ResponseParams {
  constructor() {
    /** @type { !WebUIGetBrowsingTopicsStateResult } */
    this.result;
  }
}



mojo.internal.Struct(
    PageHandler_GetModelInfo_ParamsSpec.$,
    'PageHandler_GetModelInfo_Params',
    [
    ],
    [[0, 8],]);



/**
 * @record
 */
export class PageHandler_GetModelInfo_Params {
  constructor() {
  }
}



mojo.internal.Struct(
    PageHandler_GetModelInfo_ResponseParamsSpec.$,
    'PageHandler_GetModelInfo_ResponseParams',
    [
      mojo.internal.StructField(
        'result', 0,
        0,
        WebUIGetModelInfoResultSpec.$,
        null,
        false /* nullable */,
        0),
    ],
    [[0, 24],]);



/**
 * @record
 */
export class PageHandler_GetModelInfo_ResponseParams {
  constructor() {
    /** @type { !WebUIGetModelInfoResult } */
    this.result;
  }
}



mojo.internal.Struct(
    PageHandler_ClassifyHosts_ParamsSpec.$,
    'PageHandler_ClassifyHosts_Params',
    [
      mojo.internal.StructField(
        'hosts', 0,
        0,
        mojo.internal.Array(mojo.internal.String, false),
        null,
        false /* nullable */,
        0),
    ],
    [[0, 16],]);



/**
 * @record
 */
export class PageHandler_ClassifyHosts_Params {
  constructor() {
    /** @type { !Array<!string> } */
    this.hosts;
  }
}



mojo.internal.Struct(
    PageHandler_ClassifyHosts_ResponseParamsSpec.$,
    'PageHandler_ClassifyHosts_ResponseParams',
    [
      mojo.internal.StructField(
        'topicsForHosts', 0,
        0,
        mojo.internal.Array(mojo.internal.Array(WebUITopicSpec.$, false), false),
        null,
        false /* nullable */,
        0),
    ],
    [[0, 16],]);



/**
 * @record
 */
export class PageHandler_ClassifyHosts_ResponseParams {
  constructor() {
    /** @type { !Array<!Array<!WebUITopic>> } */
    this.topicsForHosts;
  }
}

mojo.internal.Union(
    WebUIGetBrowsingTopicsStateResultSpec.$, 'WebUIGetBrowsingTopicsStateResult',
    {
      'overrideStatusMessage': {
        'ordinal': 0,
        'type': mojo.internal.String,
      },
      'browsingTopicsState': {
        'ordinal': 1,
        'type': WebUIBrowsingTopicsStateSpec.$,
      },
    });

/**
 * @typedef { {
 *   overrideStatusMessage: (!string|undefined),
 *   browsingTopicsState: (!WebUIBrowsingTopicsState|undefined),
 * } }
 */
export const WebUIGetBrowsingTopicsStateResult = {};
mojo.internal.Union(
    WebUIGetModelInfoResultSpec.$, 'WebUIGetModelInfoResult',
    {
      'overrideStatusMessage': {
        'ordinal': 0,
        'type': mojo.internal.String,
      },
      'modelInfo': {
        'ordinal': 1,
        'type': WebUIModelInfoSpec.$,
      },
    });

/**
 * @typedef { {
 *   overrideStatusMessage: (!string|undefined),
 *   modelInfo: (!WebUIModelInfo|undefined),
 * } }
 */
export const WebUIGetModelInfoResult = {};
