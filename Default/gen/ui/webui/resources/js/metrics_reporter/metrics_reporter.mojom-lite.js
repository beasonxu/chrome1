// ui/webui/resources/js/metrics_reporter/metrics_reporter.mojom-lite.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
'use strict';


mojo.internal.exportModule('metricsReporter.mojom');








/**
 * @implements {mojo.internal.interfaceSupport.PendingReceiver}
 * @export
 */
metricsReporter.mojom.PageMetricsHostPendingReceiver = class {
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
        metricsReporter.mojom.PageMetricsHost.$interfaceName,
        scope);
  }
};



/**
 * @export
 * @implements { metricsReporter.mojom.PageMetricsHostInterface }
 */
metricsReporter.mojom.PageMetricsHostRemote = class {
  /** @param {MojoHandle|mojo.internal.interfaceSupport.Endpoint=} handle */
  constructor(handle = undefined) {
    /**
     * @private {!mojo.internal.interfaceSupport.InterfaceRemoteBase<!metricsReporter.mojom.PageMetricsHostPendingReceiver>}
     */
    this.proxy =
        new mojo.internal.interfaceSupport.InterfaceRemoteBase(
          metricsReporter.mojom.PageMetricsHostPendingReceiver,
          handle);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper<!metricsReporter.mojom.PageMetricsHostPendingReceiver>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper(this.proxy);

    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.proxy.getConnectionErrorEventRouter();
  }

  
  /**
   * @param { !metricsReporter.mojom.PageMetricsRemote } page
   */

  onPageRemoteCreated(
      page) {
    this.proxy.sendMessage(
        0,
        metricsReporter.mojom.PageMetricsHost_OnPageRemoteCreated_ParamsSpec.$,
        null,
        [
          page
        ]);
  }

  
  /**
   * @param { !string } name
   * @return {!Promise<{
        markedTime: ?mojoBase.mojom.TimeDelta,
   *  }>}
   */

  onGetMark(
      name) {
    return this.proxy.sendMessage(
        1,
        metricsReporter.mojom.PageMetricsHost_OnGetMark_ParamsSpec.$,
        metricsReporter.mojom.PageMetricsHost_OnGetMark_ResponseParamsSpec.$,
        [
          name
        ]);
  }

  
  /**
   * @param { !string } name
   */

  onClearMark(
      name) {
    this.proxy.sendMessage(
        2,
        metricsReporter.mojom.PageMetricsHost_OnClearMark_ParamsSpec.$,
        null,
        [
          name
        ]);
  }

  
  /**
   * @param { !string } name
   * @param { !mojoBase.mojom.TimeDelta } time
   */

  onUmaReportTime(
      name,
      time) {
    this.proxy.sendMessage(
        3,
        metricsReporter.mojom.PageMetricsHost_OnUmaReportTime_ParamsSpec.$,
        null,
        [
          name,
          time
        ]);
  }
};

/**
 * An object which receives request messages for the PageMetricsHost
 * mojom interface. Must be constructed over an object which implements that
 * interface.
 *
 * @export
 */
metricsReporter.mojom.PageMetricsHostReceiver = class {
  /**
   * @param {!metricsReporter.mojom.PageMetricsHostInterface } impl
   */
  constructor(impl) {
    /** @private {!mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal<!metricsReporter.mojom.PageMetricsHostRemote>} */
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
        metricsReporter.mojom.PageMetricsHostRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!metricsReporter.mojom.PageMetricsHostRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);


    this.helper_internal_.registerHandler(
        0,
        metricsReporter.mojom.PageMetricsHost_OnPageRemoteCreated_ParamsSpec.$,
        null,
        impl.onPageRemoteCreated.bind(impl));
    this.helper_internal_.registerHandler(
        1,
        metricsReporter.mojom.PageMetricsHost_OnGetMark_ParamsSpec.$,
        metricsReporter.mojom.PageMetricsHost_OnGetMark_ResponseParamsSpec.$,
        impl.onGetMark.bind(impl));
    this.helper_internal_.registerHandler(
        2,
        metricsReporter.mojom.PageMetricsHost_OnClearMark_ParamsSpec.$,
        null,
        impl.onClearMark.bind(impl));
    this.helper_internal_.registerHandler(
        3,
        metricsReporter.mojom.PageMetricsHost_OnUmaReportTime_ParamsSpec.$,
        null,
        impl.onUmaReportTime.bind(impl));
    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.helper_internal_.getConnectionErrorEventRouter();
  }
};

/**
 *  @export
 */
metricsReporter.mojom.PageMetricsHost = class {
  /**
   * @return {!string}
   */
  static get $interfaceName() {
    return "metrics_reporter.mojom.PageMetricsHost";
  }

  /**
   * Returns a remote for this interface which sends messages to the browser.
   * The browser must have an interface request binder registered for this
   * interface and accessible to the calling document's frame.
   *
   * @return {!metricsReporter.mojom.PageMetricsHostRemote}
   * @export
   */
  static getRemote() {
    let remote = new metricsReporter.mojom.PageMetricsHostRemote;
    remote.$.bindNewPipeAndPassReceiver().bindInBrowser();
    return remote;
  }
};


/**
 * An object which receives request messages for the PageMetricsHost
 * mojom interface and dispatches them as callbacks. One callback receiver exists
 * on this object for each message defined in the mojom interface, and each
 * receiver can have any number of listeners added to it.
 *
 * @export
 */
metricsReporter.mojom.PageMetricsHostCallbackRouter = class {
  constructor() {
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
      metricsReporter.mojom.PageMetricsHostRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!metricsReporter.mojom.PageMetricsHostRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);

    this.router_ = new mojo.internal.interfaceSupport.CallbackRouter;

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.onPageRemoteCreated =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        0,
        metricsReporter.mojom.PageMetricsHost_OnPageRemoteCreated_ParamsSpec.$,
        null,
        this.onPageRemoteCreated.createReceiverHandler(false /* expectsResponse */));
    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.onGetMark =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        1,
        metricsReporter.mojom.PageMetricsHost_OnGetMark_ParamsSpec.$,
        metricsReporter.mojom.PageMetricsHost_OnGetMark_ResponseParamsSpec.$,
        this.onGetMark.createReceiverHandler(true /* expectsResponse */));
    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.onClearMark =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        2,
        metricsReporter.mojom.PageMetricsHost_OnClearMark_ParamsSpec.$,
        null,
        this.onClearMark.createReceiverHandler(false /* expectsResponse */));
    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.onUmaReportTime =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        3,
        metricsReporter.mojom.PageMetricsHost_OnUmaReportTime_ParamsSpec.$,
        null,
        this.onUmaReportTime.createReceiverHandler(false /* expectsResponse */));
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
metricsReporter.mojom.PageMetricsPendingReceiver = class {
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
        metricsReporter.mojom.PageMetrics.$interfaceName,
        scope);
  }
};



/**
 * @export
 * @implements { metricsReporter.mojom.PageMetricsInterface }
 */
metricsReporter.mojom.PageMetricsRemote = class {
  /** @param {MojoHandle|mojo.internal.interfaceSupport.Endpoint=} handle */
  constructor(handle = undefined) {
    /**
     * @private {!mojo.internal.interfaceSupport.InterfaceRemoteBase<!metricsReporter.mojom.PageMetricsPendingReceiver>}
     */
    this.proxy =
        new mojo.internal.interfaceSupport.InterfaceRemoteBase(
          metricsReporter.mojom.PageMetricsPendingReceiver,
          handle);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper<!metricsReporter.mojom.PageMetricsPendingReceiver>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper(this.proxy);

    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.proxy.getConnectionErrorEventRouter();
  }

  
  /**
   * @param { !string } name
   * @return {!Promise<{
        markedTime: ?mojoBase.mojom.TimeDelta,
   *  }>}
   */

  onGetMark(
      name) {
    return this.proxy.sendMessage(
        0,
        metricsReporter.mojom.PageMetrics_OnGetMark_ParamsSpec.$,
        metricsReporter.mojom.PageMetrics_OnGetMark_ResponseParamsSpec.$,
        [
          name
        ]);
  }

  
  /**
   * @param { !string } name
   */

  onClearMark(
      name) {
    this.proxy.sendMessage(
        1,
        metricsReporter.mojom.PageMetrics_OnClearMark_ParamsSpec.$,
        null,
        [
          name
        ]);
  }
};

/**
 * An object which receives request messages for the PageMetrics
 * mojom interface. Must be constructed over an object which implements that
 * interface.
 *
 * @export
 */
metricsReporter.mojom.PageMetricsReceiver = class {
  /**
   * @param {!metricsReporter.mojom.PageMetricsInterface } impl
   */
  constructor(impl) {
    /** @private {!mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal<!metricsReporter.mojom.PageMetricsRemote>} */
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
        metricsReporter.mojom.PageMetricsRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!metricsReporter.mojom.PageMetricsRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);


    this.helper_internal_.registerHandler(
        0,
        metricsReporter.mojom.PageMetrics_OnGetMark_ParamsSpec.$,
        metricsReporter.mojom.PageMetrics_OnGetMark_ResponseParamsSpec.$,
        impl.onGetMark.bind(impl));
    this.helper_internal_.registerHandler(
        1,
        metricsReporter.mojom.PageMetrics_OnClearMark_ParamsSpec.$,
        null,
        impl.onClearMark.bind(impl));
    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.helper_internal_.getConnectionErrorEventRouter();
  }
};

/**
 *  @export
 */
metricsReporter.mojom.PageMetrics = class {
  /**
   * @return {!string}
   */
  static get $interfaceName() {
    return "metrics_reporter.mojom.PageMetrics";
  }

  /**
   * Returns a remote for this interface which sends messages to the browser.
   * The browser must have an interface request binder registered for this
   * interface and accessible to the calling document's frame.
   *
   * @return {!metricsReporter.mojom.PageMetricsRemote}
   * @export
   */
  static getRemote() {
    let remote = new metricsReporter.mojom.PageMetricsRemote;
    remote.$.bindNewPipeAndPassReceiver().bindInBrowser();
    return remote;
  }
};


/**
 * An object which receives request messages for the PageMetrics
 * mojom interface and dispatches them as callbacks. One callback receiver exists
 * on this object for each message defined in the mojom interface, and each
 * receiver can have any number of listeners added to it.
 *
 * @export
 */
metricsReporter.mojom.PageMetricsCallbackRouter = class {
  constructor() {
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
      metricsReporter.mojom.PageMetricsRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!metricsReporter.mojom.PageMetricsRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);

    this.router_ = new mojo.internal.interfaceSupport.CallbackRouter;

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.onGetMark =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        0,
        metricsReporter.mojom.PageMetrics_OnGetMark_ParamsSpec.$,
        metricsReporter.mojom.PageMetrics_OnGetMark_ResponseParamsSpec.$,
        this.onGetMark.createReceiverHandler(true /* expectsResponse */));
    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.onClearMark =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        1,
        metricsReporter.mojom.PageMetrics_OnClearMark_ParamsSpec.$,
        null,
        this.onClearMark.createReceiverHandler(false /* expectsResponse */));
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
metricsReporter.mojom.PageMetricsHost_OnPageRemoteCreated_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
metricsReporter.mojom.PageMetricsHost_OnGetMark_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
metricsReporter.mojom.PageMetricsHost_OnGetMark_ResponseParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
metricsReporter.mojom.PageMetricsHost_OnClearMark_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
metricsReporter.mojom.PageMetricsHost_OnUmaReportTime_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
metricsReporter.mojom.PageMetrics_OnGetMark_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
metricsReporter.mojom.PageMetrics_OnGetMark_ResponseParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
metricsReporter.mojom.PageMetrics_OnClearMark_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };




mojo.internal.Struct(
    metricsReporter.mojom.PageMetricsHost_OnPageRemoteCreated_ParamsSpec.$,
    'PageMetricsHost_OnPageRemoteCreated_Params',
    [
      mojo.internal.StructField(
        'page', 0,
        0,
        mojo.internal.InterfaceProxy(metricsReporter.mojom.PageMetricsRemote),
        null,
        false /* nullable */),
    ],
    [[0, 16],]);





/** @record */
metricsReporter.mojom.PageMetricsHost_OnPageRemoteCreated_Params = class {
  constructor() {
    /** @export { !metricsReporter.mojom.PageMetricsRemote } */
    this.page;
  }
};




mojo.internal.Struct(
    metricsReporter.mojom.PageMetricsHost_OnGetMark_ParamsSpec.$,
    'PageMetricsHost_OnGetMark_Params',
    [
      mojo.internal.StructField(
        'name', 0,
        0,
        mojo.internal.String,
        null,
        false /* nullable */),
    ],
    [[0, 16],]);





/** @record */
metricsReporter.mojom.PageMetricsHost_OnGetMark_Params = class {
  constructor() {
    /** @export { !string } */
    this.name;
  }
};




mojo.internal.Struct(
    metricsReporter.mojom.PageMetricsHost_OnGetMark_ResponseParamsSpec.$,
    'PageMetricsHost_OnGetMark_ResponseParams',
    [
      mojo.internal.StructField(
        'markedTime', 0,
        0,
        mojoBase.mojom.TimeDeltaSpec.$,
        null,
        true /* nullable */),
    ],
    [[0, 16],]);





/** @record */
metricsReporter.mojom.PageMetricsHost_OnGetMark_ResponseParams = class {
  constructor() {
    /** @export { (mojoBase.mojom.TimeDelta|undefined) } */
    this.markedTime;
  }
};




mojo.internal.Struct(
    metricsReporter.mojom.PageMetricsHost_OnClearMark_ParamsSpec.$,
    'PageMetricsHost_OnClearMark_Params',
    [
      mojo.internal.StructField(
        'name', 0,
        0,
        mojo.internal.String,
        null,
        false /* nullable */),
    ],
    [[0, 16],]);





/** @record */
metricsReporter.mojom.PageMetricsHost_OnClearMark_Params = class {
  constructor() {
    /** @export { !string } */
    this.name;
  }
};




mojo.internal.Struct(
    metricsReporter.mojom.PageMetricsHost_OnUmaReportTime_ParamsSpec.$,
    'PageMetricsHost_OnUmaReportTime_Params',
    [
      mojo.internal.StructField(
        'name', 0,
        0,
        mojo.internal.String,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'time', 8,
        0,
        mojoBase.mojom.TimeDeltaSpec.$,
        null,
        false /* nullable */),
    ],
    [[0, 24],]);





/** @record */
metricsReporter.mojom.PageMetricsHost_OnUmaReportTime_Params = class {
  constructor() {
    /** @export { !string } */
    this.name;
    /** @export { !mojoBase.mojom.TimeDelta } */
    this.time;
  }
};




mojo.internal.Struct(
    metricsReporter.mojom.PageMetrics_OnGetMark_ParamsSpec.$,
    'PageMetrics_OnGetMark_Params',
    [
      mojo.internal.StructField(
        'name', 0,
        0,
        mojo.internal.String,
        null,
        false /* nullable */),
    ],
    [[0, 16],]);





/** @record */
metricsReporter.mojom.PageMetrics_OnGetMark_Params = class {
  constructor() {
    /** @export { !string } */
    this.name;
  }
};




mojo.internal.Struct(
    metricsReporter.mojom.PageMetrics_OnGetMark_ResponseParamsSpec.$,
    'PageMetrics_OnGetMark_ResponseParams',
    [
      mojo.internal.StructField(
        'markedTime', 0,
        0,
        mojoBase.mojom.TimeDeltaSpec.$,
        null,
        true /* nullable */),
    ],
    [[0, 16],]);





/** @record */
metricsReporter.mojom.PageMetrics_OnGetMark_ResponseParams = class {
  constructor() {
    /** @export { (mojoBase.mojom.TimeDelta|undefined) } */
    this.markedTime;
  }
};




mojo.internal.Struct(
    metricsReporter.mojom.PageMetrics_OnClearMark_ParamsSpec.$,
    'PageMetrics_OnClearMark_Params',
    [
      mojo.internal.StructField(
        'name', 0,
        0,
        mojo.internal.String,
        null,
        false /* nullable */),
    ],
    [[0, 16],]);





/** @record */
metricsReporter.mojom.PageMetrics_OnClearMark_Params = class {
  constructor() {
    /** @export { !string } */
    this.name;
  }
};


