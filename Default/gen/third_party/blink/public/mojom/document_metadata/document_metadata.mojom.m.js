// third_party/blink/public/mojom/document_metadata/document_metadata.mojom.m.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2020 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

import {mojo} from '../../../../../mojo/public/js/bindings.js';

import {
  Entity as schemaOrg_mojom_Entity,
  EntitySpec as schemaOrg_mojom_EntitySpec
} from '../../../../../components/schema_org/common/metadata.mojom.m.js';

import {
  Url as url_mojom_Url,
  UrlSpec as url_mojom_UrlSpec
} from '../../../../../url/mojom/url.mojom.m.js';




/**
 * @implements {mojo.internal.interfaceSupport.PendingReceiver}
 */
export class DocumentMetadataPendingReceiver {
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
        this.handle, 'blink.mojom.DocumentMetadata', scope);
  }
}

/** @interface */
export class DocumentMetadataInterface {
  
  /**
   * @return {!Promise<{
        page: ?WebPage,
   *  }>}
   */

  getEntities() {}
}

/**
 * @implements { DocumentMetadataInterface }
 */
export class DocumentMetadataRemote {
  /** @param {MojoHandle|mojo.internal.interfaceSupport.Endpoint=} handle */
  constructor(handle = undefined) {
    /**
     * @private {!mojo.internal.interfaceSupport.InterfaceRemoteBase<!DocumentMetadataPendingReceiver>}
     */
    this.proxy =
        new mojo.internal.interfaceSupport.InterfaceRemoteBase(
          DocumentMetadataPendingReceiver,
          handle);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper<!DocumentMetadataPendingReceiver>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper(this.proxy);

    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.proxy.getConnectionErrorEventRouter();
  }

  
  /**
   * @return {!Promise<{
        page: ?WebPage,
   *  }>}
   */

  getEntities() {
    return this.proxy.sendMessage(
        0,
        DocumentMetadata_GetEntities_ParamsSpec.$,
        DocumentMetadata_GetEntities_ResponseParamsSpec.$,
        [
        ]);
  }
}

/**
 * An object which receives request messages for the DocumentMetadata
 * mojom interface. Must be constructed over an object which implements that
 * interface.
 */
export class DocumentMetadataReceiver {
  /**
   * @param {!DocumentMetadataInterface } impl
   */
  constructor(impl) {
    /** @private {!mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal<!DocumentMetadataRemote>} */
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
        DocumentMetadataRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!DocumentMetadataRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);


    this.helper_internal_.registerHandler(
        0,
        DocumentMetadata_GetEntities_ParamsSpec.$,
        DocumentMetadata_GetEntities_ResponseParamsSpec.$,
        impl.getEntities.bind(impl));
    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.helper_internal_.getConnectionErrorEventRouter();
  }
}

export class DocumentMetadata {
  /**
   * @return {!string}
   */
  static get $interfaceName() {
    return "blink.mojom.DocumentMetadata";
  }

  /**
   * Returns a remote for this interface which sends messages to the browser.
   * The browser must have an interface request binder registered for this
   * interface and accessible to the calling document's frame.
   *
   * @return {!DocumentMetadataRemote}
   */
  static getRemote() {
    let remote = new DocumentMetadataRemote;
    remote.$.bindNewPipeAndPassReceiver().bindInBrowser();
    return remote;
  }
}


/**
 * An object which receives request messages for the DocumentMetadata
 * mojom interface and dispatches them as callbacks. One callback receiver exists
 * on this object for each message defined in the mojom interface, and each
 * receiver can have any number of listeners added to it.
 */
export class DocumentMetadataCallbackRouter {
  constructor() {
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
      DocumentMetadataRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!DocumentMetadataRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);

    this.router_ = new mojo.internal.interfaceSupport.CallbackRouter;

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.getEntities =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        0,
        DocumentMetadata_GetEntities_ParamsSpec.$,
        DocumentMetadata_GetEntities_ResponseParamsSpec.$,
        this.getEntities.createReceiverHandler(true /* expectsResponse */));
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
export const WebPageSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const DocumentMetadata_GetEntities_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const DocumentMetadata_GetEntities_ResponseParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };




mojo.internal.Struct(
    WebPageSpec.$,
    'WebPage',
    [
      mojo.internal.StructField(
        'url', 0,
        0,
        url_mojom_UrlSpec.$,
        null,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'title', 8,
        0,
        mojo.internal.String,
        null,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'entities', 16,
        0,
        mojo.internal.Array(schemaOrg_mojom_EntitySpec.$, false),
        null,
        false /* nullable */,
        0),
    ],
    [[0, 32],]);



/**
 * @record
 */
export class WebPage {
  constructor() {
    /** @type { !url_mojom_Url } */
    this.url;
    /** @type { !string } */
    this.title;
    /** @type { !Array<!schemaOrg_mojom_Entity> } */
    this.entities;
  }
}



mojo.internal.Struct(
    DocumentMetadata_GetEntities_ParamsSpec.$,
    'DocumentMetadata_GetEntities_Params',
    [
    ],
    [[0, 8],]);



/**
 * @record
 */
export class DocumentMetadata_GetEntities_Params {
  constructor() {
  }
}



mojo.internal.Struct(
    DocumentMetadata_GetEntities_ResponseParamsSpec.$,
    'DocumentMetadata_GetEntities_ResponseParams',
    [
      mojo.internal.StructField(
        'page', 0,
        0,
        WebPageSpec.$,
        null,
        true /* nullable */,
        0),
    ],
    [[0, 16],]);



/**
 * @record
 */
export class DocumentMetadata_GetEntities_ResponseParams {
  constructor() {
    /** @type { (WebPage|undefined) } */
    this.page;
  }
}

