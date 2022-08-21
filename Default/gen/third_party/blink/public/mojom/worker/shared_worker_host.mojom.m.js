// third_party/blink/public/mojom/worker/shared_worker_host.mojom.m.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2020 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

import {mojo} from '../../../../../mojo/public/js/bindings.js';

import {
  DevToolsAgentRemote as blink_mojom_DevToolsAgentRemote,
  DevToolsAgentPendingReceiver as blink_mojom_DevToolsAgentPendingReceiver,
  DevToolsAgentHostRemote as blink_mojom_DevToolsAgentHostRemote,
  DevToolsAgentHostPendingReceiver as blink_mojom_DevToolsAgentHostPendingReceiver
} from '../devtools/devtools_agent.mojom.m.js';

import {
  WebFeature as blink_mojom_WebFeature,
  WebFeatureSpec as blink_mojom_WebFeatureSpec
} from '../use_counter/metrics/web_feature.mojom.m.js';




/**
 * @implements {mojo.internal.interfaceSupport.PendingReceiver}
 */
export class SharedWorkerHostPendingReceiver {
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
        this.handle, 'blink.mojom.SharedWorkerHost', scope);
  }
}

/** @interface */
export class SharedWorkerHostInterface {
  
  /**
   * @param { !number } connectionId
   */

  onConnected(connectionId) {}
  
  /**
   */

  onContextClosed() {}
  
  /**
   * @param { !blink_mojom_DevToolsAgentRemote } agent
   * @param { !blink_mojom_DevToolsAgentHostPendingReceiver } agentHost
   */

  onReadyForInspection(agent, agentHost) {}
  
  /**
   * @param { !string } errorMessage
   */

  onScriptLoadFailed(errorMessage) {}
  
  /**
   * @param { !blink_mojom_WebFeature } feature
   */

  onFeatureUsed(feature) {}
}

/**
 * @implements { SharedWorkerHostInterface }
 */
export class SharedWorkerHostRemote {
  /** @param {MojoHandle|mojo.internal.interfaceSupport.Endpoint=} handle */
  constructor(handle = undefined) {
    /**
     * @private {!mojo.internal.interfaceSupport.InterfaceRemoteBase<!SharedWorkerHostPendingReceiver>}
     */
    this.proxy =
        new mojo.internal.interfaceSupport.InterfaceRemoteBase(
          SharedWorkerHostPendingReceiver,
          handle);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper<!SharedWorkerHostPendingReceiver>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper(this.proxy);

    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.proxy.getConnectionErrorEventRouter();
  }

  
  /**
   * @param { !number } connectionId
   */

  onConnected(
      connectionId) {
    this.proxy.sendMessage(
        0,
        SharedWorkerHost_OnConnected_ParamsSpec.$,
        null,
        [
          connectionId
        ]);
  }

  
  /**
   */

  onContextClosed() {
    this.proxy.sendMessage(
        1,
        SharedWorkerHost_OnContextClosed_ParamsSpec.$,
        null,
        [
        ]);
  }

  
  /**
   * @param { !blink_mojom_DevToolsAgentRemote } agent
   * @param { !blink_mojom_DevToolsAgentHostPendingReceiver } agentHost
   */

  onReadyForInspection(
      agent,
      agentHost) {
    this.proxy.sendMessage(
        2,
        SharedWorkerHost_OnReadyForInspection_ParamsSpec.$,
        null,
        [
          agent,
          agentHost
        ]);
  }

  
  /**
   * @param { !string } errorMessage
   */

  onScriptLoadFailed(
      errorMessage) {
    this.proxy.sendMessage(
        3,
        SharedWorkerHost_OnScriptLoadFailed_ParamsSpec.$,
        null,
        [
          errorMessage
        ]);
  }

  
  /**
   * @param { !blink_mojom_WebFeature } feature
   */

  onFeatureUsed(
      feature) {
    this.proxy.sendMessage(
        4,
        SharedWorkerHost_OnFeatureUsed_ParamsSpec.$,
        null,
        [
          feature
        ]);
  }
}

/**
 * An object which receives request messages for the SharedWorkerHost
 * mojom interface. Must be constructed over an object which implements that
 * interface.
 */
export class SharedWorkerHostReceiver {
  /**
   * @param {!SharedWorkerHostInterface } impl
   */
  constructor(impl) {
    /** @private {!mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal<!SharedWorkerHostRemote>} */
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
        SharedWorkerHostRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!SharedWorkerHostRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);


    this.helper_internal_.registerHandler(
        0,
        SharedWorkerHost_OnConnected_ParamsSpec.$,
        null,
        impl.onConnected.bind(impl));
    this.helper_internal_.registerHandler(
        1,
        SharedWorkerHost_OnContextClosed_ParamsSpec.$,
        null,
        impl.onContextClosed.bind(impl));
    this.helper_internal_.registerHandler(
        2,
        SharedWorkerHost_OnReadyForInspection_ParamsSpec.$,
        null,
        impl.onReadyForInspection.bind(impl));
    this.helper_internal_.registerHandler(
        3,
        SharedWorkerHost_OnScriptLoadFailed_ParamsSpec.$,
        null,
        impl.onScriptLoadFailed.bind(impl));
    this.helper_internal_.registerHandler(
        4,
        SharedWorkerHost_OnFeatureUsed_ParamsSpec.$,
        null,
        impl.onFeatureUsed.bind(impl));
    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.helper_internal_.getConnectionErrorEventRouter();
  }
}

export class SharedWorkerHost {
  /**
   * @return {!string}
   */
  static get $interfaceName() {
    return "blink.mojom.SharedWorkerHost";
  }

  /**
   * Returns a remote for this interface which sends messages to the browser.
   * The browser must have an interface request binder registered for this
   * interface and accessible to the calling document's frame.
   *
   * @return {!SharedWorkerHostRemote}
   */
  static getRemote() {
    let remote = new SharedWorkerHostRemote;
    remote.$.bindNewPipeAndPassReceiver().bindInBrowser();
    return remote;
  }
}


/**
 * An object which receives request messages for the SharedWorkerHost
 * mojom interface and dispatches them as callbacks. One callback receiver exists
 * on this object for each message defined in the mojom interface, and each
 * receiver can have any number of listeners added to it.
 */
export class SharedWorkerHostCallbackRouter {
  constructor() {
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
      SharedWorkerHostRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!SharedWorkerHostRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);

    this.router_ = new mojo.internal.interfaceSupport.CallbackRouter;

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.onConnected =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        0,
        SharedWorkerHost_OnConnected_ParamsSpec.$,
        null,
        this.onConnected.createReceiverHandler(false /* expectsResponse */));
    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.onContextClosed =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        1,
        SharedWorkerHost_OnContextClosed_ParamsSpec.$,
        null,
        this.onContextClosed.createReceiverHandler(false /* expectsResponse */));
    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.onReadyForInspection =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        2,
        SharedWorkerHost_OnReadyForInspection_ParamsSpec.$,
        null,
        this.onReadyForInspection.createReceiverHandler(false /* expectsResponse */));
    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.onScriptLoadFailed =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        3,
        SharedWorkerHost_OnScriptLoadFailed_ParamsSpec.$,
        null,
        this.onScriptLoadFailed.createReceiverHandler(false /* expectsResponse */));
    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.onFeatureUsed =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        4,
        SharedWorkerHost_OnFeatureUsed_ParamsSpec.$,
        null,
        this.onFeatureUsed.createReceiverHandler(false /* expectsResponse */));
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
export const SharedWorkerHost_OnConnected_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const SharedWorkerHost_OnContextClosed_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const SharedWorkerHost_OnReadyForInspection_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const SharedWorkerHost_OnScriptLoadFailed_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const SharedWorkerHost_OnFeatureUsed_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };




mojo.internal.Struct(
    SharedWorkerHost_OnConnected_ParamsSpec.$,
    'SharedWorkerHost_OnConnected_Params',
    [
      mojo.internal.StructField(
        'connectionId', 0,
        0,
        mojo.internal.Int32,
        0,
        false /* nullable */,
        0),
    ],
    [[0, 16],]);



/**
 * @record
 */
export class SharedWorkerHost_OnConnected_Params {
  constructor() {
    /** @type { !number } */
    this.connectionId;
  }
}



mojo.internal.Struct(
    SharedWorkerHost_OnContextClosed_ParamsSpec.$,
    'SharedWorkerHost_OnContextClosed_Params',
    [
    ],
    [[0, 8],]);



/**
 * @record
 */
export class SharedWorkerHost_OnContextClosed_Params {
  constructor() {
  }
}



mojo.internal.Struct(
    SharedWorkerHost_OnReadyForInspection_ParamsSpec.$,
    'SharedWorkerHost_OnReadyForInspection_Params',
    [
      mojo.internal.StructField(
        'agent', 0,
        0,
        mojo.internal.InterfaceProxy(blink_mojom_DevToolsAgentRemote),
        null,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'agentHost', 8,
        0,
        mojo.internal.InterfaceRequest(blink_mojom_DevToolsAgentHostPendingReceiver),
        null,
        false /* nullable */,
        0),
    ],
    [[0, 24],]);



/**
 * @record
 */
export class SharedWorkerHost_OnReadyForInspection_Params {
  constructor() {
    /** @type { !blink_mojom_DevToolsAgentRemote } */
    this.agent;
    /** @type { !blink_mojom_DevToolsAgentHostPendingReceiver } */
    this.agentHost;
  }
}



mojo.internal.Struct(
    SharedWorkerHost_OnScriptLoadFailed_ParamsSpec.$,
    'SharedWorkerHost_OnScriptLoadFailed_Params',
    [
      mojo.internal.StructField(
        'errorMessage', 0,
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
export class SharedWorkerHost_OnScriptLoadFailed_Params {
  constructor() {
    /** @type { !string } */
    this.errorMessage;
  }
}



mojo.internal.Struct(
    SharedWorkerHost_OnFeatureUsed_ParamsSpec.$,
    'SharedWorkerHost_OnFeatureUsed_Params',
    [
      mojo.internal.StructField(
        'feature', 0,
        0,
        blink_mojom_WebFeatureSpec.$,
        0,
        false /* nullable */,
        0),
    ],
    [[0, 16],]);



/**
 * @record
 */
export class SharedWorkerHost_OnFeatureUsed_Params {
  constructor() {
    /** @type { !blink_mojom_WebFeature } */
    this.feature;
  }
}

