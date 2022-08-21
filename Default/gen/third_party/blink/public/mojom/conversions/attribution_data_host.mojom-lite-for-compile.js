// third_party/blink/public/mojom/conversions/attribution_data_host.mojom-lite-for-compile.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
'use strict';

goog.require('mojo.internal');
goog.require('mojo.internal.interfaceSupport');

goog.require('url.mojom.Origin');
goog.require('mojoBase.mojom.TimeDelta');
goog.require('mojoBase.mojom.Uint128');






goog.provide('blink.mojom.AttributionDataHost');
goog.provide('blink.mojom.AttributionDataHostReceiver');
goog.provide('blink.mojom.AttributionDataHostCallbackRouter');
goog.provide('blink.mojom.AttributionDataHostInterface');
goog.provide('blink.mojom.AttributionDataHostRemote');
goog.provide('blink.mojom.AttributionDataHostPendingReceiver');


/**
 * @implements {mojo.internal.interfaceSupport.PendingReceiver}
 * @export
 */
blink.mojom.AttributionDataHostPendingReceiver = class {
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
        blink.mojom.AttributionDataHost.$interfaceName,
        scope);
  }
};

/** @interface */
blink.mojom.AttributionDataHostInterface = class {
  
  /**
   * @param { !blink.mojom.AttributionSourceData } data
   */

  sourceDataAvailable(data) {}
  
  /**
   * @param { !blink.mojom.AttributionTriggerData } data
   */

  triggerDataAvailable(data) {}
};

/**
 * @export
 * @implements { blink.mojom.AttributionDataHostInterface }
 */
blink.mojom.AttributionDataHostRemote = class {
  /** @param {MojoHandle|mojo.internal.interfaceSupport.Endpoint=} handle */
  constructor(handle = undefined) {
    /**
     * @private {!mojo.internal.interfaceSupport.InterfaceRemoteBase<!blink.mojom.AttributionDataHostPendingReceiver>}
     */
    this.proxy =
        new mojo.internal.interfaceSupport.InterfaceRemoteBase(
          blink.mojom.AttributionDataHostPendingReceiver,
          handle);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper<!blink.mojom.AttributionDataHostPendingReceiver>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper(this.proxy);

    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.proxy.getConnectionErrorEventRouter();
  }

  
  /**
   * @param { !blink.mojom.AttributionSourceData } data
   */

  sourceDataAvailable(
      data) {
    this.proxy.sendMessage(
        0,
        blink.mojom.AttributionDataHost_SourceDataAvailable_ParamsSpec.$,
        null,
        [
          data
        ]);
  }

  
  /**
   * @param { !blink.mojom.AttributionTriggerData } data
   */

  triggerDataAvailable(
      data) {
    this.proxy.sendMessage(
        1,
        blink.mojom.AttributionDataHost_TriggerDataAvailable_ParamsSpec.$,
        null,
        [
          data
        ]);
  }
};

/**
 * An object which receives request messages for the AttributionDataHost
 * mojom interface. Must be constructed over an object which implements that
 * interface.
 *
 * @export
 */
blink.mojom.AttributionDataHostReceiver = class {
  /**
   * @param {!blink.mojom.AttributionDataHostInterface } impl
   */
  constructor(impl) {
    /** @private {!mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal<!blink.mojom.AttributionDataHostRemote>} */
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
        blink.mojom.AttributionDataHostRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!blink.mojom.AttributionDataHostRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);


    this.helper_internal_.registerHandler(
        0,
        blink.mojom.AttributionDataHost_SourceDataAvailable_ParamsSpec.$,
        null,
        impl.sourceDataAvailable.bind(impl));
    this.helper_internal_.registerHandler(
        1,
        blink.mojom.AttributionDataHost_TriggerDataAvailable_ParamsSpec.$,
        null,
        impl.triggerDataAvailable.bind(impl));
    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.helper_internal_.getConnectionErrorEventRouter();
  }
};

/**
 *  @export
 */
blink.mojom.AttributionDataHost = class {
  /**
   * @return {!string}
   */
  static get $interfaceName() {
    return "blink.mojom.AttributionDataHost";
  }

  /**
   * Returns a remote for this interface which sends messages to the browser.
   * The browser must have an interface request binder registered for this
   * interface and accessible to the calling document's frame.
   *
   * @return {!blink.mojom.AttributionDataHostRemote}
   * @export
   */
  static getRemote() {
    let remote = new blink.mojom.AttributionDataHostRemote;
    remote.$.bindNewPipeAndPassReceiver().bindInBrowser();
    return remote;
  }
};


/**
 * An object which receives request messages for the AttributionDataHost
 * mojom interface and dispatches them as callbacks. One callback receiver exists
 * on this object for each message defined in the mojom interface, and each
 * receiver can have any number of listeners added to it.
 *
 * @export
 */
blink.mojom.AttributionDataHostCallbackRouter = class {
  constructor() {
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
      blink.mojom.AttributionDataHostRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!blink.mojom.AttributionDataHostRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);

    this.router_ = new mojo.internal.interfaceSupport.CallbackRouter;

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.sourceDataAvailable =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        0,
        blink.mojom.AttributionDataHost_SourceDataAvailable_ParamsSpec.$,
        null,
        this.sourceDataAvailable.createReceiverHandler(false /* expectsResponse */));
    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.triggerDataAvailable =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        1,
        blink.mojom.AttributionDataHost_TriggerDataAvailable_ParamsSpec.$,
        null,
        this.triggerDataAvailable.createReceiverHandler(false /* expectsResponse */));
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


goog.provide('blink.mojom.AttributionDebugKeySpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
blink.mojom.AttributionDebugKeySpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

goog.provide('blink.mojom.AttributionFilterDataSpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
blink.mojom.AttributionFilterDataSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

goog.provide('blink.mojom.AttributionAggregatableTriggerDataSpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
blink.mojom.AttributionAggregatableTriggerDataSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

goog.provide('blink.mojom.AttributionSourceDataSpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
blink.mojom.AttributionSourceDataSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

goog.provide('blink.mojom.AttributionTriggerDedupKeySpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
blink.mojom.AttributionTriggerDedupKeySpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

goog.provide('blink.mojom.EventTriggerDataSpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
blink.mojom.EventTriggerDataSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

goog.provide('blink.mojom.AttributionTriggerDataSpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
blink.mojom.AttributionTriggerDataSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

goog.provide('blink.mojom.AttributionDataHost_SourceDataAvailable_ParamsSpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
blink.mojom.AttributionDataHost_SourceDataAvailable_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

goog.provide('blink.mojom.AttributionDataHost_TriggerDataAvailable_ParamsSpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
blink.mojom.AttributionDataHost_TriggerDataAvailable_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };




mojo.internal.Struct(
    blink.mojom.AttributionDebugKeySpec.$,
    'AttributionDebugKey',
    [
      mojo.internal.StructField(
        'value', 0,
        0,
        mojo.internal.Uint64,
        BigInt(0),
        false /* nullable */),
    ],
    [[0, 16],]);



goog.provide('blink.mojom.AttributionDebugKey');

/** @record */
blink.mojom.AttributionDebugKey = class {
  constructor() {
    /** @export { !bigint } */
    this.value;
  }
};




mojo.internal.Struct(
    blink.mojom.AttributionFilterDataSpec.$,
    'AttributionFilterData',
    [
      mojo.internal.StructField(
        'filterValues', 0,
        0,
        mojo.internal.Map(mojo.internal.String, mojo.internal.Array(mojo.internal.String, false), false),
        null,
        false /* nullable */),
    ],
    [[0, 16],]);



goog.provide('blink.mojom.AttributionFilterData');

/** @record */
blink.mojom.AttributionFilterData = class {
  constructor() {
    /** @export { !Object<!string, !Array<!string>> } */
    this.filterValues;
  }
};




mojo.internal.Struct(
    blink.mojom.AttributionAggregatableTriggerDataSpec.$,
    'AttributionAggregatableTriggerData',
    [
      mojo.internal.StructField(
        'keyPiece', 0,
        0,
        mojoBase.mojom.Uint128Spec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'sourceKeys', 8,
        0,
        mojo.internal.Array(mojo.internal.String, false),
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'filters', 16,
        0,
        blink.mojom.AttributionFilterDataSpec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'notFilters', 24,
        0,
        blink.mojom.AttributionFilterDataSpec.$,
        null,
        false /* nullable */),
    ],
    [[0, 40],]);



goog.provide('blink.mojom.AttributionAggregatableTriggerData');

/** @record */
blink.mojom.AttributionAggregatableTriggerData = class {
  constructor() {
    /** @export { !mojoBase.mojom.Uint128 } */
    this.keyPiece;
    /** @export { !Array<!string> } */
    this.sourceKeys;
    /** @export { !blink.mojom.AttributionFilterData } */
    this.filters;
    /** @export { !blink.mojom.AttributionFilterData } */
    this.notFilters;
  }
};




mojo.internal.Struct(
    blink.mojom.AttributionSourceDataSpec.$,
    'AttributionSourceData',
    [
      mojo.internal.StructField(
        'destination', 0,
        0,
        url.mojom.OriginSpec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'reportingOrigin', 8,
        0,
        url.mojom.OriginSpec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'sourceEventId', 16,
        0,
        mojo.internal.Uint64,
        BigInt('0'),
        false /* nullable */),
      mojo.internal.StructField(
        'expiry', 24,
        0,
        mojoBase.mojom.TimeDeltaSpec.$,
        null,
        true /* nullable */),
      mojo.internal.StructField(
        'priority', 32,
        0,
        mojo.internal.Int64,
        BigInt('0'),
        false /* nullable */),
      mojo.internal.StructField(
        'debugKey', 40,
        0,
        blink.mojom.AttributionDebugKeySpec.$,
        null,
        true /* nullable */),
      mojo.internal.StructField(
        'filterData', 48,
        0,
        blink.mojom.AttributionFilterDataSpec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'aggregationKeys', 56,
        0,
        mojo.internal.Map(mojo.internal.String, mojoBase.mojom.Uint128Spec.$, false),
        null,
        false /* nullable */),
    ],
    [[0, 72],]);



goog.provide('blink.mojom.AttributionSourceData');

/** @record */
blink.mojom.AttributionSourceData = class {
  constructor() {
    /** @export { !url.mojom.Origin } */
    this.destination;
    /** @export { !url.mojom.Origin } */
    this.reportingOrigin;
    /** @export { !bigint } */
    this.sourceEventId;
    /** @export { (mojoBase.mojom.TimeDelta|undefined) } */
    this.expiry;
    /** @export { !bigint } */
    this.priority;
    /** @export { (blink.mojom.AttributionDebugKey|undefined) } */
    this.debugKey;
    /** @export { !blink.mojom.AttributionFilterData } */
    this.filterData;
    /** @export { !Object<!string, !mojoBase.mojom.Uint128> } */
    this.aggregationKeys;
  }
};




mojo.internal.Struct(
    blink.mojom.AttributionTriggerDedupKeySpec.$,
    'AttributionTriggerDedupKey',
    [
      mojo.internal.StructField(
        'value', 0,
        0,
        mojo.internal.Uint64,
        BigInt(0),
        false /* nullable */),
    ],
    [[0, 16],]);



goog.provide('blink.mojom.AttributionTriggerDedupKey');

/** @record */
blink.mojom.AttributionTriggerDedupKey = class {
  constructor() {
    /** @export { !bigint } */
    this.value;
  }
};




mojo.internal.Struct(
    blink.mojom.EventTriggerDataSpec.$,
    'EventTriggerData',
    [
      mojo.internal.StructField(
        'data', 0,
        0,
        mojo.internal.Uint64,
        BigInt('0'),
        false /* nullable */),
      mojo.internal.StructField(
        'priority', 8,
        0,
        mojo.internal.Int64,
        BigInt('0'),
        false /* nullable */),
      mojo.internal.StructField(
        'dedupKey', 16,
        0,
        blink.mojom.AttributionTriggerDedupKeySpec.$,
        null,
        true /* nullable */),
      mojo.internal.StructField(
        'filters', 24,
        0,
        blink.mojom.AttributionFilterDataSpec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'notFilters', 32,
        0,
        blink.mojom.AttributionFilterDataSpec.$,
        null,
        false /* nullable */),
    ],
    [[0, 48],]);



goog.provide('blink.mojom.EventTriggerData');

/** @record */
blink.mojom.EventTriggerData = class {
  constructor() {
    /** @export { !bigint } */
    this.data;
    /** @export { !bigint } */
    this.priority;
    /** @export { (blink.mojom.AttributionTriggerDedupKey|undefined) } */
    this.dedupKey;
    /** @export { !blink.mojom.AttributionFilterData } */
    this.filters;
    /** @export { !blink.mojom.AttributionFilterData } */
    this.notFilters;
  }
};




mojo.internal.Struct(
    blink.mojom.AttributionTriggerDataSpec.$,
    'AttributionTriggerData',
    [
      mojo.internal.StructField(
        'reportingOrigin', 0,
        0,
        url.mojom.OriginSpec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'eventTriggers', 8,
        0,
        mojo.internal.Array(blink.mojom.EventTriggerDataSpec.$, false),
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'filters', 16,
        0,
        blink.mojom.AttributionFilterDataSpec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'notFilters', 24,
        0,
        blink.mojom.AttributionFilterDataSpec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'aggregatableTriggerData', 32,
        0,
        mojo.internal.Array(blink.mojom.AttributionAggregatableTriggerDataSpec.$, false),
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'aggregatableValues', 40,
        0,
        mojo.internal.Map(mojo.internal.String, mojo.internal.Uint32, false),
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'debugKey', 48,
        0,
        blink.mojom.AttributionDebugKeySpec.$,
        null,
        true /* nullable */),
    ],
    [[0, 64],]);



goog.provide('blink.mojom.AttributionTriggerData');

/** @record */
blink.mojom.AttributionTriggerData = class {
  constructor() {
    /** @export { !url.mojom.Origin } */
    this.reportingOrigin;
    /** @export { !Array<!blink.mojom.EventTriggerData> } */
    this.eventTriggers;
    /** @export { !blink.mojom.AttributionFilterData } */
    this.filters;
    /** @export { !blink.mojom.AttributionFilterData } */
    this.notFilters;
    /** @export { !Array<!blink.mojom.AttributionAggregatableTriggerData> } */
    this.aggregatableTriggerData;
    /** @export { !Object<!string, !number> } */
    this.aggregatableValues;
    /** @export { (blink.mojom.AttributionDebugKey|undefined) } */
    this.debugKey;
  }
};




mojo.internal.Struct(
    blink.mojom.AttributionDataHost_SourceDataAvailable_ParamsSpec.$,
    'AttributionDataHost_SourceDataAvailable_Params',
    [
      mojo.internal.StructField(
        'data', 0,
        0,
        blink.mojom.AttributionSourceDataSpec.$,
        null,
        false /* nullable */),
    ],
    [[0, 16],]);



goog.provide('blink.mojom.AttributionDataHost_SourceDataAvailable_Params');

/** @record */
blink.mojom.AttributionDataHost_SourceDataAvailable_Params = class {
  constructor() {
    /** @export { !blink.mojom.AttributionSourceData } */
    this.data;
  }
};




mojo.internal.Struct(
    blink.mojom.AttributionDataHost_TriggerDataAvailable_ParamsSpec.$,
    'AttributionDataHost_TriggerDataAvailable_Params',
    [
      mojo.internal.StructField(
        'data', 0,
        0,
        blink.mojom.AttributionTriggerDataSpec.$,
        null,
        false /* nullable */),
    ],
    [[0, 16],]);



goog.provide('blink.mojom.AttributionDataHost_TriggerDataAvailable_Params');

/** @record */
blink.mojom.AttributionDataHost_TriggerDataAvailable_Params = class {
  constructor() {
    /** @export { !blink.mojom.AttributionTriggerData } */
    this.data;
  }
};


