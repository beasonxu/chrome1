// third_party/blink/public/mojom/crash/crash_memory_metrics_reporter.mojom-lite-for-compile.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
'use strict';

goog.require('mojo.internal');
goog.require('mojo.internal.interfaceSupport');

goog.require('mojoBase.mojom.UnsafeSharedMemoryRegion');






goog.provide('blink.mojom.CrashMemoryMetricsReporter');
goog.provide('blink.mojom.CrashMemoryMetricsReporterReceiver');
goog.provide('blink.mojom.CrashMemoryMetricsReporterCallbackRouter');
goog.provide('blink.mojom.CrashMemoryMetricsReporterInterface');
goog.provide('blink.mojom.CrashMemoryMetricsReporterRemote');
goog.provide('blink.mojom.CrashMemoryMetricsReporterPendingReceiver');


/**
 * @implements {mojo.internal.interfaceSupport.PendingReceiver}
 * @export
 */
blink.mojom.CrashMemoryMetricsReporterPendingReceiver = class {
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
        blink.mojom.CrashMemoryMetricsReporter.$interfaceName,
        scope);
  }
};

/** @interface */
blink.mojom.CrashMemoryMetricsReporterInterface = class {
  
  /**
   * @param { !mojoBase.mojom.UnsafeSharedMemoryRegion } sharedMetricsBuffer
   */

  setSharedMemory(sharedMetricsBuffer) {}
};

/**
 * @export
 * @implements { blink.mojom.CrashMemoryMetricsReporterInterface }
 */
blink.mojom.CrashMemoryMetricsReporterRemote = class {
  /** @param {MojoHandle|mojo.internal.interfaceSupport.Endpoint=} handle */
  constructor(handle = undefined) {
    /**
     * @private {!mojo.internal.interfaceSupport.InterfaceRemoteBase<!blink.mojom.CrashMemoryMetricsReporterPendingReceiver>}
     */
    this.proxy =
        new mojo.internal.interfaceSupport.InterfaceRemoteBase(
          blink.mojom.CrashMemoryMetricsReporterPendingReceiver,
          handle);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper<!blink.mojom.CrashMemoryMetricsReporterPendingReceiver>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper(this.proxy);

    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.proxy.getConnectionErrorEventRouter();
  }

  
  /**
   * @param { !mojoBase.mojom.UnsafeSharedMemoryRegion } sharedMetricsBuffer
   */

  setSharedMemory(
      sharedMetricsBuffer) {
    this.proxy.sendMessage(
        0,
        blink.mojom.CrashMemoryMetricsReporter_SetSharedMemory_ParamsSpec.$,
        null,
        [
          sharedMetricsBuffer
        ]);
  }
};

/**
 * An object which receives request messages for the CrashMemoryMetricsReporter
 * mojom interface. Must be constructed over an object which implements that
 * interface.
 *
 * @export
 */
blink.mojom.CrashMemoryMetricsReporterReceiver = class {
  /**
   * @param {!blink.mojom.CrashMemoryMetricsReporterInterface } impl
   */
  constructor(impl) {
    /** @private {!mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal<!blink.mojom.CrashMemoryMetricsReporterRemote>} */
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
        blink.mojom.CrashMemoryMetricsReporterRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!blink.mojom.CrashMemoryMetricsReporterRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);


    this.helper_internal_.registerHandler(
        0,
        blink.mojom.CrashMemoryMetricsReporter_SetSharedMemory_ParamsSpec.$,
        null,
        impl.setSharedMemory.bind(impl));
    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.helper_internal_.getConnectionErrorEventRouter();
  }
};

/**
 *  @export
 */
blink.mojom.CrashMemoryMetricsReporter = class {
  /**
   * @return {!string}
   */
  static get $interfaceName() {
    return "blink.mojom.CrashMemoryMetricsReporter";
  }

  /**
   * Returns a remote for this interface which sends messages to the browser.
   * The browser must have an interface request binder registered for this
   * interface and accessible to the calling document's frame.
   *
   * @return {!blink.mojom.CrashMemoryMetricsReporterRemote}
   * @export
   */
  static getRemote() {
    let remote = new blink.mojom.CrashMemoryMetricsReporterRemote;
    remote.$.bindNewPipeAndPassReceiver().bindInBrowser();
    return remote;
  }
};


/**
 * An object which receives request messages for the CrashMemoryMetricsReporter
 * mojom interface and dispatches them as callbacks. One callback receiver exists
 * on this object for each message defined in the mojom interface, and each
 * receiver can have any number of listeners added to it.
 *
 * @export
 */
blink.mojom.CrashMemoryMetricsReporterCallbackRouter = class {
  constructor() {
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
      blink.mojom.CrashMemoryMetricsReporterRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!blink.mojom.CrashMemoryMetricsReporterRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);

    this.router_ = new mojo.internal.interfaceSupport.CallbackRouter;

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.setSharedMemory =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        0,
        blink.mojom.CrashMemoryMetricsReporter_SetSharedMemory_ParamsSpec.$,
        null,
        this.setSharedMemory.createReceiverHandler(false /* expectsResponse */));
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


goog.provide('blink.mojom.CrashMemoryMetricsReporter_SetSharedMemory_ParamsSpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
blink.mojom.CrashMemoryMetricsReporter_SetSharedMemory_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };




mojo.internal.Struct(
    blink.mojom.CrashMemoryMetricsReporter_SetSharedMemory_ParamsSpec.$,
    'CrashMemoryMetricsReporter_SetSharedMemory_Params',
    [
      mojo.internal.StructField(
        'sharedMetricsBuffer', 0,
        0,
        mojoBase.mojom.UnsafeSharedMemoryRegionSpec.$,
        null,
        false /* nullable */),
    ],
    [[0, 16],]);



goog.provide('blink.mojom.CrashMemoryMetricsReporter_SetSharedMemory_Params');

/** @record */
blink.mojom.CrashMemoryMetricsReporter_SetSharedMemory_Params = class {
  constructor() {
    /** @export { !mojoBase.mojom.UnsafeSharedMemoryRegion } */
    this.sharedMetricsBuffer;
  }
};


