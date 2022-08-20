// third_party/blink/public/mojom/worker/worker_content_settings_proxy.mojom.m.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2020 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

import {mojo} from '../../../../../mojo/public/js/bindings.js';




/**
 * @implements {mojo.internal.interfaceSupport.PendingReceiver}
 */
export class WorkerContentSettingsProxyPendingReceiver {
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
        this.handle, 'blink.mojom.WorkerContentSettingsProxy', scope);
  }
}

/** @interface */
export class WorkerContentSettingsProxyInterface {
  
  /**
   * @return {!Promise<{
        result: !boolean,
   *  }>}
   */

  allowIndexedDB() {}
  
  /**
   * @return {!Promise<{
        result: !boolean,
   *  }>}
   */

  allowCacheStorage() {}
  
  /**
   * @return {!Promise<{
        result: !boolean,
   *  }>}
   */

  allowWebLocks() {}
  
  /**
   * @return {!Promise<{
        result: !boolean,
   *  }>}
   */

  requestFileSystemAccessSync() {}
}

/**
 * @implements { WorkerContentSettingsProxyInterface }
 */
export class WorkerContentSettingsProxyRemote {
  /** @param {MojoHandle|mojo.internal.interfaceSupport.Endpoint=} handle */
  constructor(handle = undefined) {
    /**
     * @private {!mojo.internal.interfaceSupport.InterfaceRemoteBase<!WorkerContentSettingsProxyPendingReceiver>}
     */
    this.proxy =
        new mojo.internal.interfaceSupport.InterfaceRemoteBase(
          WorkerContentSettingsProxyPendingReceiver,
          handle);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper<!WorkerContentSettingsProxyPendingReceiver>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper(this.proxy);

    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.proxy.getConnectionErrorEventRouter();
  }

  
  /**
   * @return {!Promise<{
        result: !boolean,
   *  }>}
   */

  allowIndexedDB() {
    return this.proxy.sendMessage(
        0,
        WorkerContentSettingsProxy_AllowIndexedDB_ParamsSpec.$,
        WorkerContentSettingsProxy_AllowIndexedDB_ResponseParamsSpec.$,
        [
        ]);
  }

  
  /**
   * @return {!Promise<{
        result: !boolean,
   *  }>}
   */

  allowCacheStorage() {
    return this.proxy.sendMessage(
        1,
        WorkerContentSettingsProxy_AllowCacheStorage_ParamsSpec.$,
        WorkerContentSettingsProxy_AllowCacheStorage_ResponseParamsSpec.$,
        [
        ]);
  }

  
  /**
   * @return {!Promise<{
        result: !boolean,
   *  }>}
   */

  allowWebLocks() {
    return this.proxy.sendMessage(
        2,
        WorkerContentSettingsProxy_AllowWebLocks_ParamsSpec.$,
        WorkerContentSettingsProxy_AllowWebLocks_ResponseParamsSpec.$,
        [
        ]);
  }

  
  /**
   * @return {!Promise<{
        result: !boolean,
   *  }>}
   */

  requestFileSystemAccessSync() {
    return this.proxy.sendMessage(
        3,
        WorkerContentSettingsProxy_RequestFileSystemAccessSync_ParamsSpec.$,
        WorkerContentSettingsProxy_RequestFileSystemAccessSync_ResponseParamsSpec.$,
        [
        ]);
  }
}

/**
 * An object which receives request messages for the WorkerContentSettingsProxy
 * mojom interface. Must be constructed over an object which implements that
 * interface.
 */
export class WorkerContentSettingsProxyReceiver {
  /**
   * @param {!WorkerContentSettingsProxyInterface } impl
   */
  constructor(impl) {
    /** @private {!mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal<!WorkerContentSettingsProxyRemote>} */
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
        WorkerContentSettingsProxyRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!WorkerContentSettingsProxyRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);


    this.helper_internal_.registerHandler(
        0,
        WorkerContentSettingsProxy_AllowIndexedDB_ParamsSpec.$,
        WorkerContentSettingsProxy_AllowIndexedDB_ResponseParamsSpec.$,
        impl.allowIndexedDB.bind(impl));
    this.helper_internal_.registerHandler(
        1,
        WorkerContentSettingsProxy_AllowCacheStorage_ParamsSpec.$,
        WorkerContentSettingsProxy_AllowCacheStorage_ResponseParamsSpec.$,
        impl.allowCacheStorage.bind(impl));
    this.helper_internal_.registerHandler(
        2,
        WorkerContentSettingsProxy_AllowWebLocks_ParamsSpec.$,
        WorkerContentSettingsProxy_AllowWebLocks_ResponseParamsSpec.$,
        impl.allowWebLocks.bind(impl));
    this.helper_internal_.registerHandler(
        3,
        WorkerContentSettingsProxy_RequestFileSystemAccessSync_ParamsSpec.$,
        WorkerContentSettingsProxy_RequestFileSystemAccessSync_ResponseParamsSpec.$,
        impl.requestFileSystemAccessSync.bind(impl));
    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.helper_internal_.getConnectionErrorEventRouter();
  }
}

export class WorkerContentSettingsProxy {
  /**
   * @return {!string}
   */
  static get $interfaceName() {
    return "blink.mojom.WorkerContentSettingsProxy";
  }

  /**
   * Returns a remote for this interface which sends messages to the browser.
   * The browser must have an interface request binder registered for this
   * interface and accessible to the calling document's frame.
   *
   * @return {!WorkerContentSettingsProxyRemote}
   */
  static getRemote() {
    let remote = new WorkerContentSettingsProxyRemote;
    remote.$.bindNewPipeAndPassReceiver().bindInBrowser();
    return remote;
  }
}


/**
 * An object which receives request messages for the WorkerContentSettingsProxy
 * mojom interface and dispatches them as callbacks. One callback receiver exists
 * on this object for each message defined in the mojom interface, and each
 * receiver can have any number of listeners added to it.
 */
export class WorkerContentSettingsProxyCallbackRouter {
  constructor() {
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
      WorkerContentSettingsProxyRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!WorkerContentSettingsProxyRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);

    this.router_ = new mojo.internal.interfaceSupport.CallbackRouter;

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.allowIndexedDB =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        0,
        WorkerContentSettingsProxy_AllowIndexedDB_ParamsSpec.$,
        WorkerContentSettingsProxy_AllowIndexedDB_ResponseParamsSpec.$,
        this.allowIndexedDB.createReceiverHandler(true /* expectsResponse */));
    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.allowCacheStorage =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        1,
        WorkerContentSettingsProxy_AllowCacheStorage_ParamsSpec.$,
        WorkerContentSettingsProxy_AllowCacheStorage_ResponseParamsSpec.$,
        this.allowCacheStorage.createReceiverHandler(true /* expectsResponse */));
    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.allowWebLocks =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        2,
        WorkerContentSettingsProxy_AllowWebLocks_ParamsSpec.$,
        WorkerContentSettingsProxy_AllowWebLocks_ResponseParamsSpec.$,
        this.allowWebLocks.createReceiverHandler(true /* expectsResponse */));
    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.requestFileSystemAccessSync =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        3,
        WorkerContentSettingsProxy_RequestFileSystemAccessSync_ParamsSpec.$,
        WorkerContentSettingsProxy_RequestFileSystemAccessSync_ResponseParamsSpec.$,
        this.requestFileSystemAccessSync.createReceiverHandler(true /* expectsResponse */));
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
export const WorkerContentSettingsProxy_AllowIndexedDB_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const WorkerContentSettingsProxy_AllowIndexedDB_ResponseParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const WorkerContentSettingsProxy_AllowCacheStorage_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const WorkerContentSettingsProxy_AllowCacheStorage_ResponseParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const WorkerContentSettingsProxy_AllowWebLocks_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const WorkerContentSettingsProxy_AllowWebLocks_ResponseParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const WorkerContentSettingsProxy_RequestFileSystemAccessSync_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const WorkerContentSettingsProxy_RequestFileSystemAccessSync_ResponseParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };




mojo.internal.Struct(
    WorkerContentSettingsProxy_AllowIndexedDB_ParamsSpec.$,
    'WorkerContentSettingsProxy_AllowIndexedDB_Params',
    [
    ],
    [[0, 8],]);



/**
 * @record
 */
export class WorkerContentSettingsProxy_AllowIndexedDB_Params {
  constructor() {
  }
}



mojo.internal.Struct(
    WorkerContentSettingsProxy_AllowIndexedDB_ResponseParamsSpec.$,
    'WorkerContentSettingsProxy_AllowIndexedDB_ResponseParams',
    [
      mojo.internal.StructField(
        'result', 0,
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
export class WorkerContentSettingsProxy_AllowIndexedDB_ResponseParams {
  constructor() {
    /** @type { !boolean } */
    this.result;
  }
}



mojo.internal.Struct(
    WorkerContentSettingsProxy_AllowCacheStorage_ParamsSpec.$,
    'WorkerContentSettingsProxy_AllowCacheStorage_Params',
    [
    ],
    [[0, 8],]);



/**
 * @record
 */
export class WorkerContentSettingsProxy_AllowCacheStorage_Params {
  constructor() {
  }
}



mojo.internal.Struct(
    WorkerContentSettingsProxy_AllowCacheStorage_ResponseParamsSpec.$,
    'WorkerContentSettingsProxy_AllowCacheStorage_ResponseParams',
    [
      mojo.internal.StructField(
        'result', 0,
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
export class WorkerContentSettingsProxy_AllowCacheStorage_ResponseParams {
  constructor() {
    /** @type { !boolean } */
    this.result;
  }
}



mojo.internal.Struct(
    WorkerContentSettingsProxy_AllowWebLocks_ParamsSpec.$,
    'WorkerContentSettingsProxy_AllowWebLocks_Params',
    [
    ],
    [[0, 8],]);



/**
 * @record
 */
export class WorkerContentSettingsProxy_AllowWebLocks_Params {
  constructor() {
  }
}



mojo.internal.Struct(
    WorkerContentSettingsProxy_AllowWebLocks_ResponseParamsSpec.$,
    'WorkerContentSettingsProxy_AllowWebLocks_ResponseParams',
    [
      mojo.internal.StructField(
        'result', 0,
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
export class WorkerContentSettingsProxy_AllowWebLocks_ResponseParams {
  constructor() {
    /** @type { !boolean } */
    this.result;
  }
}



mojo.internal.Struct(
    WorkerContentSettingsProxy_RequestFileSystemAccessSync_ParamsSpec.$,
    'WorkerContentSettingsProxy_RequestFileSystemAccessSync_Params',
    [
    ],
    [[0, 8],]);



/**
 * @record
 */
export class WorkerContentSettingsProxy_RequestFileSystemAccessSync_Params {
  constructor() {
  }
}



mojo.internal.Struct(
    WorkerContentSettingsProxy_RequestFileSystemAccessSync_ResponseParamsSpec.$,
    'WorkerContentSettingsProxy_RequestFileSystemAccessSync_ResponseParams',
    [
      mojo.internal.StructField(
        'result', 0,
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
export class WorkerContentSettingsProxy_RequestFileSystemAccessSync_ResponseParams {
  constructor() {
    /** @type { !boolean } */
    this.result;
  }
}

