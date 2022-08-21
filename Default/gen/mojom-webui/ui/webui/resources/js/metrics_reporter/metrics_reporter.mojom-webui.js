// mojom-webui/ui/webui/resources/js/metrics_reporter/metrics_reporter.mojom-webui.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2020 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

import {mojo} from '//resources/mojo/mojo/public/js/bindings.js';

import {
  TimeDelta as mojoBase_mojom_TimeDelta,
  TimeDeltaSpec as mojoBase_mojom_TimeDeltaSpec
} from 'chrome://resources/mojo/mojo/public/mojom/base/time.mojom-webui.js';




/**
 * @implements {mojo.internal.interfaceSupport.PendingReceiver}
 */
export class PageMetricsHostPendingReceiver {
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
        this.handle, 'metrics_reporter.mojom.PageMetricsHost', scope);
  }
}

/** @interface */
export class PageMetricsHostInterface {
  
  /**
   * @param { !PageMetricsRemote } page
   */

  onPageRemoteCreated(page) {}
  
  /**
   * @param { !string } name
   * @return {!Promise<{
        markedTime: ?mojoBase_mojom_TimeDelta,
   *  }>}
   */

  onGetMark(name) {}
  
  /**
   * @param { !string } name
   */

  onClearMark(name) {}
  
  /**
   * @param { !string } name
   * @param { !mojoBase_mojom_TimeDelta } time
   */

  onUmaReportTime(name, time) {}
}

/**
 * @implements { PageMetricsHostInterface }
 */
export class PageMetricsHostRemote {
  /** @param {MojoHandle|mojo.internal.interfaceSupport.Endpoint=} handle */
  constructor(handle = undefined) {
    /**
     * @private {!mojo.internal.interfaceSupport.InterfaceRemoteBase<!PageMetricsHostPendingReceiver>}
     */
    this.proxy =
        new mojo.internal.interfaceSupport.InterfaceRemoteBase(
          PageMetricsHostPendingReceiver,
          handle);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper<!PageMetricsHostPendingReceiver>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper(this.proxy);

    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.proxy.getConnectionErrorEventRouter();
  }

  
  /**
   * @param { !PageMetricsRemote } page
   */

  onPageRemoteCreated(
      page) {
    this.proxy.sendMessage(
        0,
        PageMetricsHost_OnPageRemoteCreated_ParamsSpec.$,
        null,
        [
          page
        ]);
  }

  
  /**
   * @param { !string } name
   * @return {!Promise<{
        markedTime: ?mojoBase_mojom_TimeDelta,
   *  }>}
   */

  onGetMark(
      name) {
    return this.proxy.sendMessage(
        1,
        PageMetricsHost_OnGetMark_ParamsSpec.$,
        PageMetricsHost_OnGetMark_ResponseParamsSpec.$,
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
        PageMetricsHost_OnClearMark_ParamsSpec.$,
        null,
        [
          name
        ]);
  }

  
  /**
   * @param { !string } name
   * @param { !mojoBase_mojom_TimeDelta } time
   */

  onUmaReportTime(
      name,
      time) {
    this.proxy.sendMessage(
        3,
        PageMetricsHost_OnUmaReportTime_ParamsSpec.$,
        null,
        [
          name,
          time
        ]);
  }
}

/**
 * An object which receives request messages for the PageMetricsHost
 * mojom interface. Must be constructed over an object which implements that
 * interface.
 */
export class PageMetricsHostReceiver {
  /**
   * @param {!PageMetricsHostInterface } impl
   */
  constructor(impl) {
    /** @private {!mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal<!PageMetricsHostRemote>} */
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
        PageMetricsHostRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!PageMetricsHostRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);


    this.helper_internal_.registerHandler(
        0,
        PageMetricsHost_OnPageRemoteCreated_ParamsSpec.$,
        null,
        impl.onPageRemoteCreated.bind(impl));
    this.helper_internal_.registerHandler(
        1,
        PageMetricsHost_OnGetMark_ParamsSpec.$,
        PageMetricsHost_OnGetMark_ResponseParamsSpec.$,
        impl.onGetMark.bind(impl));
    this.helper_internal_.registerHandler(
        2,
        PageMetricsHost_OnClearMark_ParamsSpec.$,
        null,
        impl.onClearMark.bind(impl));
    this.helper_internal_.registerHandler(
        3,
        PageMetricsHost_OnUmaReportTime_ParamsSpec.$,
        null,
        impl.onUmaReportTime.bind(impl));
    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.helper_internal_.getConnectionErrorEventRouter();
  }
}

export class PageMetricsHost {
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
   * @return {!PageMetricsHostRemote}
   */
  static getRemote() {
    let remote = new PageMetricsHostRemote;
    remote.$.bindNewPipeAndPassReceiver().bindInBrowser();
    return remote;
  }
}


/**
 * An object which receives request messages for the PageMetricsHost
 * mojom interface and dispatches them as callbacks. One callback receiver exists
 * on this object for each message defined in the mojom interface, and each
 * receiver can have any number of listeners added to it.
 */
export class PageMetricsHostCallbackRouter {
  constructor() {
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
      PageMetricsHostRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!PageMetricsHostRemote>}
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
        PageMetricsHost_OnPageRemoteCreated_ParamsSpec.$,
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
        PageMetricsHost_OnGetMark_ParamsSpec.$,
        PageMetricsHost_OnGetMark_ResponseParamsSpec.$,
        this.onGetMark.createReceiverHandler(true /* expectsResponse */));
    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.onClearMark =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        2,
        PageMetricsHost_OnClearMark_ParamsSpec.$,
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
        PageMetricsHost_OnUmaReportTime_ParamsSpec.$,
        null,
        this.onUmaReportTime.createReceiverHandler(false /* expectsResponse */));
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
export class PageMetricsPendingReceiver {
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
        this.handle, 'metrics_reporter.mojom.PageMetrics', scope);
  }
}

/** @interface */
export class PageMetricsInterface {
  
  /**
   * @param { !string } name
   * @return {!Promise<{
        markedTime: ?mojoBase_mojom_TimeDelta,
   *  }>}
   */

  onGetMark(name) {}
  
  /**
   * @param { !string } name
   */

  onClearMark(name) {}
}

/**
 * @implements { PageMetricsInterface }
 */
export class PageMetricsRemote {
  /** @param {MojoHandle|mojo.internal.interfaceSupport.Endpoint=} handle */
  constructor(handle = undefined) {
    /**
     * @private {!mojo.internal.interfaceSupport.InterfaceRemoteBase<!PageMetricsPendingReceiver>}
     */
    this.proxy =
        new mojo.internal.interfaceSupport.InterfaceRemoteBase(
          PageMetricsPendingReceiver,
          handle);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper<!PageMetricsPendingReceiver>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper(this.proxy);

    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.proxy.getConnectionErrorEventRouter();
  }

  
  /**
   * @param { !string } name
   * @return {!Promise<{
        markedTime: ?mojoBase_mojom_TimeDelta,
   *  }>}
   */

  onGetMark(
      name) {
    return this.proxy.sendMessage(
        0,
        PageMetrics_OnGetMark_ParamsSpec.$,
        PageMetrics_OnGetMark_ResponseParamsSpec.$,
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
        PageMetrics_OnClearMark_ParamsSpec.$,
        null,
        [
          name
        ]);
  }
}

/**
 * An object which receives request messages for the PageMetrics
 * mojom interface. Must be constructed over an object which implements that
 * interface.
 */
export class PageMetricsReceiver {
  /**
   * @param {!PageMetricsInterface } impl
   */
  constructor(impl) {
    /** @private {!mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal<!PageMetricsRemote>} */
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
        PageMetricsRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!PageMetricsRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);


    this.helper_internal_.registerHandler(
        0,
        PageMetrics_OnGetMark_ParamsSpec.$,
        PageMetrics_OnGetMark_ResponseParamsSpec.$,
        impl.onGetMark.bind(impl));
    this.helper_internal_.registerHandler(
        1,
        PageMetrics_OnClearMark_ParamsSpec.$,
        null,
        impl.onClearMark.bind(impl));
    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.helper_internal_.getConnectionErrorEventRouter();
  }
}

export class PageMetrics {
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
   * @return {!PageMetricsRemote}
   */
  static getRemote() {
    let remote = new PageMetricsRemote;
    remote.$.bindNewPipeAndPassReceiver().bindInBrowser();
    return remote;
  }
}


/**
 * An object which receives request messages for the PageMetrics
 * mojom interface and dispatches them as callbacks. One callback receiver exists
 * on this object for each message defined in the mojom interface, and each
 * receiver can have any number of listeners added to it.
 */
export class PageMetricsCallbackRouter {
  constructor() {
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
      PageMetricsRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!PageMetricsRemote>}
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
        PageMetrics_OnGetMark_ParamsSpec.$,
        PageMetrics_OnGetMark_ResponseParamsSpec.$,
        this.onGetMark.createReceiverHandler(true /* expectsResponse */));
    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.onClearMark =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        1,
        PageMetrics_OnClearMark_ParamsSpec.$,
        null,
        this.onClearMark.createReceiverHandler(false /* expectsResponse */));
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
export const PageMetricsHost_OnPageRemoteCreated_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const PageMetricsHost_OnGetMark_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const PageMetricsHost_OnGetMark_ResponseParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const PageMetricsHost_OnClearMark_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const PageMetricsHost_OnUmaReportTime_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const PageMetrics_OnGetMark_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const PageMetrics_OnGetMark_ResponseParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const PageMetrics_OnClearMark_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };




mojo.internal.Struct(
    PageMetricsHost_OnPageRemoteCreated_ParamsSpec.$,
    'PageMetricsHost_OnPageRemoteCreated_Params',
    [
      mojo.internal.StructField(
        'page', 0,
        0,
        mojo.internal.InterfaceProxy(PageMetricsRemote),
        null,
        false /* nullable */,
        0),
    ],
    [[0, 16],]);



/**
 * @record
 */
export class PageMetricsHost_OnPageRemoteCreated_Params {
  constructor() {
    /** @type { !PageMetricsRemote } */
    this.page;
  }
}



mojo.internal.Struct(
    PageMetricsHost_OnGetMark_ParamsSpec.$,
    'PageMetricsHost_OnGetMark_Params',
    [
      mojo.internal.StructField(
        'name', 0,
        0,
        mojo.internal.String,
        null,
        false /* nullable */,
        0),
    ],
    [[0, 16],]);



/**
 * @record
 */
export class PageMetricsHost_OnGetMark_Params {
  constructor() {
    /** @type { !string } */
    this.name;
  }
}



mojo.internal.Struct(
    PageMetricsHost_OnGetMark_ResponseParamsSpec.$,
    'PageMetricsHost_OnGetMark_ResponseParams',
    [
      mojo.internal.StructField(
        'markedTime', 0,
        0,
        mojoBase_mojom_TimeDeltaSpec.$,
        null,
        true /* nullable */,
        0),
    ],
    [[0, 16],]);



/**
 * @record
 */
export class PageMetricsHost_OnGetMark_ResponseParams {
  constructor() {
    /** @type { (mojoBase_mojom_TimeDelta|undefined) } */
    this.markedTime;
  }
}



mojo.internal.Struct(
    PageMetricsHost_OnClearMark_ParamsSpec.$,
    'PageMetricsHost_OnClearMark_Params',
    [
      mojo.internal.StructField(
        'name', 0,
        0,
        mojo.internal.String,
        null,
        false /* nullable */,
        0),
    ],
    [[0, 16],]);



/**
 * @record
 */
export class PageMetricsHost_OnClearMark_Params {
  constructor() {
    /** @type { !string } */
    this.name;
  }
}



mojo.internal.Struct(
    PageMetricsHost_OnUmaReportTime_ParamsSpec.$,
    'PageMetricsHost_OnUmaReportTime_Params',
    [
      mojo.internal.StructField(
        'name', 0,
        0,
        mojo.internal.String,
        null,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'time', 8,
        0,
        mojoBase_mojom_TimeDeltaSpec.$,
        null,
        false /* nullable */,
        0),
    ],
    [[0, 24],]);



/**
 * @record
 */
export class PageMetricsHost_OnUmaReportTime_Params {
  constructor() {
    /** @type { !string } */
    this.name;
    /** @type { !mojoBase_mojom_TimeDelta } */
    this.time;
  }
}



mojo.internal.Struct(
    PageMetrics_OnGetMark_ParamsSpec.$,
    'PageMetrics_OnGetMark_Params',
    [
      mojo.internal.StructField(
        'name', 0,
        0,
        mojo.internal.String,
        null,
        false /* nullable */,
        0),
    ],
    [[0, 16],]);



/**
 * @record
 */
export class PageMetrics_OnGetMark_Params {
  constructor() {
    /** @type { !string } */
    this.name;
  }
}



mojo.internal.Struct(
    PageMetrics_OnGetMark_ResponseParamsSpec.$,
    'PageMetrics_OnGetMark_ResponseParams',
    [
      mojo.internal.StructField(
        'markedTime', 0,
        0,
        mojoBase_mojom_TimeDeltaSpec.$,
        null,
        true /* nullable */,
        0),
    ],
    [[0, 16],]);



/**
 * @record
 */
export class PageMetrics_OnGetMark_ResponseParams {
  constructor() {
    /** @type { (mojoBase_mojom_TimeDelta|undefined) } */
    this.markedTime;
  }
}



mojo.internal.Struct(
    PageMetrics_OnClearMark_ParamsSpec.$,
    'PageMetrics_OnClearMark_Params',
    [
      mojo.internal.StructField(
        'name', 0,
        0,
        mojo.internal.String,
        null,
        false /* nullable */,
        0),
    ],
    [[0, 16],]);



/**
 * @record
 */
export class PageMetrics_OnClearMark_Params {
  constructor() {
    /** @type { !string } */
    this.name;
  }
}

