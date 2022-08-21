// services/network/public/mojom/reporting_service.mojom-lite.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
'use strict';


mojo.internal.exportModule('network.mojom');





/**
 * @const { {$: !mojo.internal.MojomType} }
 * @export
 */
network.mojom.ReportingApiReportStatusSpec = { $: mojo.internal.Enum() };

/**
 * @enum {number}
 * @export
 */
network.mojom.ReportingApiReportStatus = {
  
  kQueued: 0,
  kPending: 1,
  kDoomed: 2,
  kSuccess: 3,
  MIN_VALUE: 0,
  MAX_VALUE: 3,
};





/**
 * @implements {mojo.internal.interfaceSupport.PendingReceiver}
 * @export
 */
network.mojom.ReportingApiObserverPendingReceiver = class {
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
        network.mojom.ReportingApiObserver.$interfaceName,
        scope);
  }
};



/**
 * @export
 * @implements { network.mojom.ReportingApiObserverInterface }
 */
network.mojom.ReportingApiObserverRemote = class {
  /** @param {MojoHandle|mojo.internal.interfaceSupport.Endpoint=} handle */
  constructor(handle = undefined) {
    /**
     * @private {!mojo.internal.interfaceSupport.InterfaceRemoteBase<!network.mojom.ReportingApiObserverPendingReceiver>}
     */
    this.proxy =
        new mojo.internal.interfaceSupport.InterfaceRemoteBase(
          network.mojom.ReportingApiObserverPendingReceiver,
          handle);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper<!network.mojom.ReportingApiObserverPendingReceiver>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper(this.proxy);

    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.proxy.getConnectionErrorEventRouter();
  }

  
  /**
   * @param { !network.mojom.ReportingApiReport } report
   */

  onReportAdded(
      report) {
    this.proxy.sendMessage(
        0,
        network.mojom.ReportingApiObserver_OnReportAdded_ParamsSpec.$,
        null,
        [
          report
        ]);
  }

  
  /**
   * @param { !network.mojom.ReportingApiReport } report
   */

  onReportUpdated(
      report) {
    this.proxy.sendMessage(
        1,
        network.mojom.ReportingApiObserver_OnReportUpdated_ParamsSpec.$,
        null,
        [
          report
        ]);
  }

  
  /**
   * @param { !Array<!network.mojom.ReportingApiEndpoint> } endpoints
   */

  onEndpointsUpdatedForOrigin(
      endpoints) {
    this.proxy.sendMessage(
        2,
        network.mojom.ReportingApiObserver_OnEndpointsUpdatedForOrigin_ParamsSpec.$,
        null,
        [
          endpoints
        ]);
  }
};

/**
 * An object which receives request messages for the ReportingApiObserver
 * mojom interface. Must be constructed over an object which implements that
 * interface.
 *
 * @export
 */
network.mojom.ReportingApiObserverReceiver = class {
  /**
   * @param {!network.mojom.ReportingApiObserverInterface } impl
   */
  constructor(impl) {
    /** @private {!mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal<!network.mojom.ReportingApiObserverRemote>} */
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
        network.mojom.ReportingApiObserverRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!network.mojom.ReportingApiObserverRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);


    this.helper_internal_.registerHandler(
        0,
        network.mojom.ReportingApiObserver_OnReportAdded_ParamsSpec.$,
        null,
        impl.onReportAdded.bind(impl));
    this.helper_internal_.registerHandler(
        1,
        network.mojom.ReportingApiObserver_OnReportUpdated_ParamsSpec.$,
        null,
        impl.onReportUpdated.bind(impl));
    this.helper_internal_.registerHandler(
        2,
        network.mojom.ReportingApiObserver_OnEndpointsUpdatedForOrigin_ParamsSpec.$,
        null,
        impl.onEndpointsUpdatedForOrigin.bind(impl));
    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.helper_internal_.getConnectionErrorEventRouter();
  }
};

/**
 *  @export
 */
network.mojom.ReportingApiObserver = class {
  /**
   * @return {!string}
   */
  static get $interfaceName() {
    return "network.mojom.ReportingApiObserver";
  }

  /**
   * Returns a remote for this interface which sends messages to the browser.
   * The browser must have an interface request binder registered for this
   * interface and accessible to the calling document's frame.
   *
   * @return {!network.mojom.ReportingApiObserverRemote}
   * @export
   */
  static getRemote() {
    let remote = new network.mojom.ReportingApiObserverRemote;
    remote.$.bindNewPipeAndPassReceiver().bindInBrowser();
    return remote;
  }
};


/**
 * An object which receives request messages for the ReportingApiObserver
 * mojom interface and dispatches them as callbacks. One callback receiver exists
 * on this object for each message defined in the mojom interface, and each
 * receiver can have any number of listeners added to it.
 *
 * @export
 */
network.mojom.ReportingApiObserverCallbackRouter = class {
  constructor() {
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
      network.mojom.ReportingApiObserverRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!network.mojom.ReportingApiObserverRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);

    this.router_ = new mojo.internal.interfaceSupport.CallbackRouter;

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.onReportAdded =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        0,
        network.mojom.ReportingApiObserver_OnReportAdded_ParamsSpec.$,
        null,
        this.onReportAdded.createReceiverHandler(false /* expectsResponse */));
    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.onReportUpdated =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        1,
        network.mojom.ReportingApiObserver_OnReportUpdated_ParamsSpec.$,
        null,
        this.onReportUpdated.createReceiverHandler(false /* expectsResponse */));
    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.onEndpointsUpdatedForOrigin =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        2,
        network.mojom.ReportingApiObserver_OnEndpointsUpdatedForOrigin_ParamsSpec.$,
        null,
        this.onEndpointsUpdatedForOrigin.createReceiverHandler(false /* expectsResponse */));
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
network.mojom.ReportingApiReportSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
network.mojom.ReportingApiEndpointSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
network.mojom.ReportingApiObserver_OnReportAdded_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
network.mojom.ReportingApiObserver_OnReportUpdated_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
network.mojom.ReportingApiObserver_OnEndpointsUpdatedForOrigin_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };




mojo.internal.Struct(
    network.mojom.ReportingApiReportSpec.$,
    'ReportingApiReport',
    [
      mojo.internal.StructField(
        'id', 0,
        0,
        mojoBase.mojom.UnguessableTokenSpec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'url', 8,
        0,
        url.mojom.UrlSpec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'group', 16,
        0,
        mojo.internal.String,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'type', 24,
        0,
        mojo.internal.String,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'timestamp', 32,
        0,
        mojoBase.mojom.TimeTicksSpec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'depth', 40,
        0,
        mojo.internal.Int32,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'attempts', 44,
        0,
        mojo.internal.Int32,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'body', 48,
        0,
        mojoBase.mojom.DeprecatedDictionaryValueSpec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'status', 56,
        0,
        network.mojom.ReportingApiReportStatusSpec.$,
        0,
        false /* nullable */),
    ],
    [[0, 72],]);





/** @record */
network.mojom.ReportingApiReport = class {
  constructor() {
    /** @export { !mojoBase.mojom.UnguessableToken } */
    this.id;
    /** @export { !url.mojom.Url } */
    this.url;
    /** @export { !string } */
    this.group;
    /** @export { !string } */
    this.type;
    /** @export { !mojoBase.mojom.TimeTicks } */
    this.timestamp;
    /** @export { !number } */
    this.depth;
    /** @export { !number } */
    this.attempts;
    /** @export { !mojoBase.mojom.DeprecatedDictionaryValue } */
    this.body;
    /** @export { !network.mojom.ReportingApiReportStatus } */
    this.status;
  }
};




mojo.internal.Struct(
    network.mojom.ReportingApiEndpointSpec.$,
    'ReportingApiEndpoint',
    [
      mojo.internal.StructField(
        'url', 0,
        0,
        url.mojom.UrlSpec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'attemptedUploads', 8,
        0,
        mojo.internal.Int32,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'successfulUploads', 12,
        0,
        mojo.internal.Int32,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'attemptedReports', 16,
        0,
        mojo.internal.Int32,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'successfulReports', 20,
        0,
        mojo.internal.Int32,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'priority', 24,
        0,
        mojo.internal.Int32,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'weight', 28,
        0,
        mojo.internal.Int32,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'origin', 32,
        0,
        url.mojom.OriginSpec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'groupName', 40,
        0,
        mojo.internal.String,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'networkIsolationKey', 48,
        0,
        network.mojom.NetworkIsolationKeySpec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'reportingSource', 56,
        0,
        mojoBase.mojom.UnguessableTokenSpec.$,
        null,
        true /* nullable */),
    ],
    [[0, 72],]);





/** @record */
network.mojom.ReportingApiEndpoint = class {
  constructor() {
    /** @export { !url.mojom.Url } */
    this.url;
    /** @export { !number } */
    this.attemptedUploads;
    /** @export { !number } */
    this.successfulUploads;
    /** @export { !number } */
    this.attemptedReports;
    /** @export { !number } */
    this.successfulReports;
    /** @export { !number } */
    this.priority;
    /** @export { !number } */
    this.weight;
    /** @export { !url.mojom.Origin } */
    this.origin;
    /** @export { !string } */
    this.groupName;
    /** @export { !network.mojom.NetworkIsolationKey } */
    this.networkIsolationKey;
    /** @export { (mojoBase.mojom.UnguessableToken|undefined) } */
    this.reportingSource;
  }
};




mojo.internal.Struct(
    network.mojom.ReportingApiObserver_OnReportAdded_ParamsSpec.$,
    'ReportingApiObserver_OnReportAdded_Params',
    [
      mojo.internal.StructField(
        'report', 0,
        0,
        network.mojom.ReportingApiReportSpec.$,
        null,
        false /* nullable */),
    ],
    [[0, 16],]);





/** @record */
network.mojom.ReportingApiObserver_OnReportAdded_Params = class {
  constructor() {
    /** @export { !network.mojom.ReportingApiReport } */
    this.report;
  }
};




mojo.internal.Struct(
    network.mojom.ReportingApiObserver_OnReportUpdated_ParamsSpec.$,
    'ReportingApiObserver_OnReportUpdated_Params',
    [
      mojo.internal.StructField(
        'report', 0,
        0,
        network.mojom.ReportingApiReportSpec.$,
        null,
        false /* nullable */),
    ],
    [[0, 16],]);





/** @record */
network.mojom.ReportingApiObserver_OnReportUpdated_Params = class {
  constructor() {
    /** @export { !network.mojom.ReportingApiReport } */
    this.report;
  }
};




mojo.internal.Struct(
    network.mojom.ReportingApiObserver_OnEndpointsUpdatedForOrigin_ParamsSpec.$,
    'ReportingApiObserver_OnEndpointsUpdatedForOrigin_Params',
    [
      mojo.internal.StructField(
        'endpoints', 0,
        0,
        mojo.internal.Array(network.mojom.ReportingApiEndpointSpec.$, false),
        null,
        false /* nullable */),
    ],
    [[0, 16],]);





/** @record */
network.mojom.ReportingApiObserver_OnEndpointsUpdatedForOrigin_Params = class {
  constructor() {
    /** @export { !Array<!network.mojom.ReportingApiEndpoint> } */
    this.endpoints;
  }
};


