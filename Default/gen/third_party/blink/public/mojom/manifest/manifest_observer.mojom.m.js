// third_party/blink/public/mojom/manifest/manifest_observer.mojom.m.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2020 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

import {mojo} from '../../../../../mojo/public/js/bindings.js';

import {
  Url as url_mojom_Url,
  UrlSpec as url_mojom_UrlSpec
} from '../../../../../url/mojom/url.mojom.m.js';




/**
 * @implements {mojo.internal.interfaceSupport.PendingReceiver}
 */
export class ManifestUrlChangeObserverPendingReceiver {
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
        this.handle, 'blink.mojom.ManifestUrlChangeObserver', scope);
  }
}

/** @interface */
export class ManifestUrlChangeObserverInterface {
  
  /**
   * @param { !url_mojom_Url } manifestUrl
   */

  manifestUrlChanged(manifestUrl) {}
}

/**
 * @implements { ManifestUrlChangeObserverInterface }
 */
export class ManifestUrlChangeObserverRemote {
  /** @param {MojoHandle|mojo.internal.interfaceSupport.Endpoint=} handle */
  constructor(handle = undefined) {
    /**
     * @private {!mojo.internal.interfaceSupport.InterfaceRemoteBase<!ManifestUrlChangeObserverPendingReceiver>}
     */
    this.proxy =
        new mojo.internal.interfaceSupport.InterfaceRemoteBase(
          ManifestUrlChangeObserverPendingReceiver,
          handle);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper<!ManifestUrlChangeObserverPendingReceiver>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper(this.proxy);

    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.proxy.getConnectionErrorEventRouter();
  }

  
  /**
   * @param { !url_mojom_Url } manifestUrl
   */

  manifestUrlChanged(
      manifestUrl) {
    this.proxy.sendMessage(
        0,
        ManifestUrlChangeObserver_ManifestUrlChanged_ParamsSpec.$,
        null,
        [
          manifestUrl
        ]);
  }
}

/**
 * An object which receives request messages for the ManifestUrlChangeObserver
 * mojom interface. Must be constructed over an object which implements that
 * interface.
 */
export class ManifestUrlChangeObserverReceiver {
  /**
   * @param {!ManifestUrlChangeObserverInterface } impl
   */
  constructor(impl) {
    /** @private {!mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal<!ManifestUrlChangeObserverRemote>} */
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
        ManifestUrlChangeObserverRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!ManifestUrlChangeObserverRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);


    this.helper_internal_.registerHandler(
        0,
        ManifestUrlChangeObserver_ManifestUrlChanged_ParamsSpec.$,
        null,
        impl.manifestUrlChanged.bind(impl));
    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.helper_internal_.getConnectionErrorEventRouter();
  }
}

export class ManifestUrlChangeObserver {
  /**
   * @return {!string}
   */
  static get $interfaceName() {
    return "blink.mojom.ManifestUrlChangeObserver";
  }

  /**
   * Returns a remote for this interface which sends messages to the browser.
   * The browser must have an interface request binder registered for this
   * interface and accessible to the calling document's frame.
   *
   * @return {!ManifestUrlChangeObserverRemote}
   */
  static getRemote() {
    let remote = new ManifestUrlChangeObserverRemote;
    remote.$.bindNewPipeAndPassReceiver().bindInBrowser();
    return remote;
  }
}


/**
 * An object which receives request messages for the ManifestUrlChangeObserver
 * mojom interface and dispatches them as callbacks. One callback receiver exists
 * on this object for each message defined in the mojom interface, and each
 * receiver can have any number of listeners added to it.
 */
export class ManifestUrlChangeObserverCallbackRouter {
  constructor() {
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
      ManifestUrlChangeObserverRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!ManifestUrlChangeObserverRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);

    this.router_ = new mojo.internal.interfaceSupport.CallbackRouter;

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.manifestUrlChanged =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        0,
        ManifestUrlChangeObserver_ManifestUrlChanged_ParamsSpec.$,
        null,
        this.manifestUrlChanged.createReceiverHandler(false /* expectsResponse */));
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
export const ManifestUrlChangeObserver_ManifestUrlChanged_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };




mojo.internal.Struct(
    ManifestUrlChangeObserver_ManifestUrlChanged_ParamsSpec.$,
    'ManifestUrlChangeObserver_ManifestUrlChanged_Params',
    [
      mojo.internal.StructField(
        'manifestUrl', 0,
        0,
        url_mojom_UrlSpec.$,
        null,
        false /* nullable */,
        0),
    ],
    [[0, 16],]);



/**
 * @record
 */
export class ManifestUrlChangeObserver_ManifestUrlChanged_Params {
  constructor() {
    /** @type { !url_mojom_Url } */
    this.manifestUrl;
  }
}

