// services/network/public/mojom/trust_tokens.mojom-lite-for-compile.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
'use strict';

goog.require('mojo.internal');
goog.require('mojo.internal.interfaceSupport');

goog.require('url.mojom.Origin');
goog.require('mojoBase.mojom.Time');




goog.provide('network.mojom.TrustTokenProtocolVersion');
goog.provide('network.mojom.TrustTokenProtocolVersionSpec');
/**
 * @const { {$: !mojo.internal.MojomType} }
 * @export
 */
network.mojom.TrustTokenProtocolVersionSpec = { $: mojo.internal.Enum() };

/**
 * @enum {number}
 * @export
 */
network.mojom.TrustTokenProtocolVersion = {
  
  kTrustTokenV3Pmb: 0,
  kTrustTokenV3Voprf: 1,
  MIN_VALUE: 0,
  MAX_VALUE: 1,
};

goog.provide('network.mojom.TrustTokenOperationStatus');
goog.provide('network.mojom.TrustTokenOperationStatusSpec');
/**
 * @const { {$: !mojo.internal.MojomType} }
 * @export
 */
network.mojom.TrustTokenOperationStatusSpec = { $: mojo.internal.Enum() };

/**
 * @enum {number}
 * @export
 */
network.mojom.TrustTokenOperationStatus = {
  
  kOk: 0,
  kInvalidArgument: 1,
  kFailedPrecondition: 2,
  kResourceExhausted: 3,
  kAlreadyExists: 4,
  kUnavailable: 5,
  kBadResponse: 6,
  kInternalError: 7,
  kUnknownError: 8,
  kOperationSuccessfullyFulfilledLocally: 9,
  MIN_VALUE: 0,
  MAX_VALUE: 9,
};

goog.provide('network.mojom.TrustTokenOperationType');
goog.provide('network.mojom.TrustTokenOperationTypeSpec');
/**
 * @const { {$: !mojo.internal.MojomType} }
 * @export
 */
network.mojom.TrustTokenOperationTypeSpec = { $: mojo.internal.Enum() };

/**
 * @enum {number}
 * @export
 */
network.mojom.TrustTokenOperationType = {
  
  kIssuance: 0,
  kRedemption: 1,
  kSigning: 2,
  MIN_VALUE: 0,
  MAX_VALUE: 2,
};

goog.provide('network.mojom.TrustTokenRefreshPolicy');
goog.provide('network.mojom.TrustTokenRefreshPolicySpec');
/**
 * @const { {$: !mojo.internal.MojomType} }
 * @export
 */
network.mojom.TrustTokenRefreshPolicySpec = { $: mojo.internal.Enum() };

/**
 * @enum {number}
 * @export
 */
network.mojom.TrustTokenRefreshPolicy = {
  
  kUseCached: 0,
  kRefresh: 1,
  MIN_VALUE: 0,
  MAX_VALUE: 1,
};

goog.provide('network.mojom.TrustTokenSignRequestData');
goog.provide('network.mojom.TrustTokenSignRequestDataSpec');
/**
 * @const { {$: !mojo.internal.MojomType} }
 * @export
 */
network.mojom.TrustTokenSignRequestDataSpec = { $: mojo.internal.Enum() };

/**
 * @enum {number}
 * @export
 */
network.mojom.TrustTokenSignRequestData = {
  
  kOmit: 0,
  kHeadersOnly: 1,
  kInclude: 2,
  MIN_VALUE: 0,
  MAX_VALUE: 2,
};

goog.provide('network.mojom.DeleteStoredTrustTokensStatus');
goog.provide('network.mojom.DeleteStoredTrustTokensStatusSpec');
/**
 * @const { {$: !mojo.internal.MojomType} }
 * @export
 */
network.mojom.DeleteStoredTrustTokensStatusSpec = { $: mojo.internal.Enum() };

/**
 * @enum {number}
 * @export
 */
network.mojom.DeleteStoredTrustTokensStatus = {
  
  kSuccessTokensDeleted: 0,
  kSuccessNoTokensDeleted: 1,
  kFailureFeatureDisabled: 2,
  kFailureInvalidOrigin: 3,
  MIN_VALUE: 0,
  MAX_VALUE: 3,
};



goog.provide('network.mojom.TrustTokenQueryAnswerer');
goog.provide('network.mojom.TrustTokenQueryAnswererReceiver');
goog.provide('network.mojom.TrustTokenQueryAnswererCallbackRouter');
goog.provide('network.mojom.TrustTokenQueryAnswererInterface');
goog.provide('network.mojom.TrustTokenQueryAnswererRemote');
goog.provide('network.mojom.TrustTokenQueryAnswererPendingReceiver');


/**
 * @implements {mojo.internal.interfaceSupport.PendingReceiver}
 * @export
 */
network.mojom.TrustTokenQueryAnswererPendingReceiver = class {
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
        network.mojom.TrustTokenQueryAnswerer.$interfaceName,
        scope);
  }
};

/** @interface */
network.mojom.TrustTokenQueryAnswererInterface = class {
  
  /**
   * @param { !url.mojom.Origin } issuer
   * @return {!Promise<{
        result: !network.mojom.HasTrustTokensResult,
   *  }>}
   */

  hasTrustTokens(issuer) {}
};

/**
 * @export
 * @implements { network.mojom.TrustTokenQueryAnswererInterface }
 */
network.mojom.TrustTokenQueryAnswererRemote = class {
  /** @param {MojoHandle|mojo.internal.interfaceSupport.Endpoint=} handle */
  constructor(handle = undefined) {
    /**
     * @private {!mojo.internal.interfaceSupport.InterfaceRemoteBase<!network.mojom.TrustTokenQueryAnswererPendingReceiver>}
     */
    this.proxy =
        new mojo.internal.interfaceSupport.InterfaceRemoteBase(
          network.mojom.TrustTokenQueryAnswererPendingReceiver,
          handle);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper<!network.mojom.TrustTokenQueryAnswererPendingReceiver>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper(this.proxy);

    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.proxy.getConnectionErrorEventRouter();
  }

  
  /**
   * @param { !url.mojom.Origin } issuer
   * @return {!Promise<{
        result: !network.mojom.HasTrustTokensResult,
   *  }>}
   */

  hasTrustTokens(
      issuer) {
    return this.proxy.sendMessage(
        0,
        network.mojom.TrustTokenQueryAnswerer_HasTrustTokens_ParamsSpec.$,
        network.mojom.TrustTokenQueryAnswerer_HasTrustTokens_ResponseParamsSpec.$,
        [
          issuer
        ]);
  }
};

/**
 * An object which receives request messages for the TrustTokenQueryAnswerer
 * mojom interface. Must be constructed over an object which implements that
 * interface.
 *
 * @export
 */
network.mojom.TrustTokenQueryAnswererReceiver = class {
  /**
   * @param {!network.mojom.TrustTokenQueryAnswererInterface } impl
   */
  constructor(impl) {
    /** @private {!mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal<!network.mojom.TrustTokenQueryAnswererRemote>} */
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
        network.mojom.TrustTokenQueryAnswererRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!network.mojom.TrustTokenQueryAnswererRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);


    this.helper_internal_.registerHandler(
        0,
        network.mojom.TrustTokenQueryAnswerer_HasTrustTokens_ParamsSpec.$,
        network.mojom.TrustTokenQueryAnswerer_HasTrustTokens_ResponseParamsSpec.$,
        impl.hasTrustTokens.bind(impl));
    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.helper_internal_.getConnectionErrorEventRouter();
  }
};

/**
 *  @export
 */
network.mojom.TrustTokenQueryAnswerer = class {
  /**
   * @return {!string}
   */
  static get $interfaceName() {
    return "network.mojom.TrustTokenQueryAnswerer";
  }

  /**
   * Returns a remote for this interface which sends messages to the browser.
   * The browser must have an interface request binder registered for this
   * interface and accessible to the calling document's frame.
   *
   * @return {!network.mojom.TrustTokenQueryAnswererRemote}
   * @export
   */
  static getRemote() {
    let remote = new network.mojom.TrustTokenQueryAnswererRemote;
    remote.$.bindNewPipeAndPassReceiver().bindInBrowser();
    return remote;
  }
};


/**
 * An object which receives request messages for the TrustTokenQueryAnswerer
 * mojom interface and dispatches them as callbacks. One callback receiver exists
 * on this object for each message defined in the mojom interface, and each
 * receiver can have any number of listeners added to it.
 *
 * @export
 */
network.mojom.TrustTokenQueryAnswererCallbackRouter = class {
  constructor() {
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
      network.mojom.TrustTokenQueryAnswererRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!network.mojom.TrustTokenQueryAnswererRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);

    this.router_ = new mojo.internal.interfaceSupport.CallbackRouter;

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.hasTrustTokens =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        0,
        network.mojom.TrustTokenQueryAnswerer_HasTrustTokens_ParamsSpec.$,
        network.mojom.TrustTokenQueryAnswerer_HasTrustTokens_ResponseParamsSpec.$,
        this.hasTrustTokens.createReceiverHandler(true /* expectsResponse */));
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


goog.provide('network.mojom.TrustTokenParamsSpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
network.mojom.TrustTokenParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

goog.provide('network.mojom.HasTrustTokensResultSpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
network.mojom.HasTrustTokensResultSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

goog.provide('network.mojom.TrustTokenVerificationKeySpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
network.mojom.TrustTokenVerificationKeySpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

goog.provide('network.mojom.TrustTokenKeyCommitmentResultSpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
network.mojom.TrustTokenKeyCommitmentResultSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

goog.provide('network.mojom.FulfillTrustTokenIssuanceRequestSpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
network.mojom.FulfillTrustTokenIssuanceRequestSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

goog.provide('network.mojom.FulfillTrustTokenIssuanceAnswerSpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
network.mojom.FulfillTrustTokenIssuanceAnswerSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

goog.provide('network.mojom.TrustTokenOperationResultSpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
network.mojom.TrustTokenOperationResultSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

goog.provide('network.mojom.StoredTrustTokensForIssuerSpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
network.mojom.StoredTrustTokensForIssuerSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

goog.provide('network.mojom.TrustTokenQueryAnswerer_HasTrustTokens_ParamsSpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
network.mojom.TrustTokenQueryAnswerer_HasTrustTokens_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

goog.provide('network.mojom.TrustTokenQueryAnswerer_HasTrustTokens_ResponseParamsSpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
network.mojom.TrustTokenQueryAnswerer_HasTrustTokens_ResponseParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };




mojo.internal.Struct(
    network.mojom.TrustTokenParamsSpec.$,
    'TrustTokenParams',
    [
      mojo.internal.StructField(
        'type', 0,
        0,
        network.mojom.TrustTokenOperationTypeSpec.$,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'refreshPolicy', 4,
        0,
        network.mojom.TrustTokenRefreshPolicySpec.$,
        network.mojom.TrustTokenRefreshPolicy.kUseCached,
        false /* nullable */),
      mojo.internal.StructField(
        'customKeyCommitment', 8,
        0,
        mojo.internal.String,
        null,
        true /* nullable */),
      mojo.internal.StructField(
        'signRequestData', 16,
        0,
        network.mojom.TrustTokenSignRequestDataSpec.$,
        network.mojom.TrustTokenSignRequestData.kOmit,
        false /* nullable */),
      mojo.internal.StructField(
        'includeTimestampHeader', 20,
        0,
        mojo.internal.Bool,
        false,
        false /* nullable */),
      mojo.internal.StructField(
        'issuers', 24,
        0,
        mojo.internal.Array(url.mojom.OriginSpec.$, false),
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'additionalSignedHeaders', 32,
        0,
        mojo.internal.Array(mojo.internal.String, false),
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'possiblyUnsafeAdditionalSigningData', 40,
        0,
        mojo.internal.String,
        null,
        true /* nullable */),
    ],
    [[0, 56],]);



goog.provide('network.mojom.TrustTokenParams');

/** @record */
network.mojom.TrustTokenParams = class {
  constructor() {
    /** @export { !network.mojom.TrustTokenOperationType } */
    this.type;
    /** @export { !network.mojom.TrustTokenRefreshPolicy } */
    this.refreshPolicy;
    /** @export { (string|undefined) } */
    this.customKeyCommitment;
    /** @export { !network.mojom.TrustTokenSignRequestData } */
    this.signRequestData;
    /** @export { !boolean } */
    this.includeTimestampHeader;
    /** @export { !Array<!url.mojom.Origin> } */
    this.issuers;
    /** @export { !Array<!string> } */
    this.additionalSignedHeaders;
    /** @export { (string|undefined) } */
    this.possiblyUnsafeAdditionalSigningData;
  }
};




mojo.internal.Struct(
    network.mojom.HasTrustTokensResultSpec.$,
    'HasTrustTokensResult',
    [
      mojo.internal.StructField(
        'status', 0,
        0,
        network.mojom.TrustTokenOperationStatusSpec.$,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'hasTrustTokens', 4,
        0,
        mojo.internal.Bool,
        false,
        false /* nullable */),
    ],
    [[0, 16],]);



goog.provide('network.mojom.HasTrustTokensResult');

/** @record */
network.mojom.HasTrustTokensResult = class {
  constructor() {
    /** @export { !network.mojom.TrustTokenOperationStatus } */
    this.status;
    /** @export { !boolean } */
    this.hasTrustTokens;
  }
};




mojo.internal.Struct(
    network.mojom.TrustTokenVerificationKeySpec.$,
    'TrustTokenVerificationKey',
    [
      mojo.internal.StructField(
        'body', 0,
        0,
        mojo.internal.String,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'expiry', 8,
        0,
        mojoBase.mojom.TimeSpec.$,
        null,
        false /* nullable */),
    ],
    [[0, 24],]);



goog.provide('network.mojom.TrustTokenVerificationKey');

/** @record */
network.mojom.TrustTokenVerificationKey = class {
  constructor() {
    /** @export { !string } */
    this.body;
    /** @export { !mojoBase.mojom.Time } */
    this.expiry;
  }
};



goog.provide('network.mojom.TrustTokenKeyCommitmentResult_Os');
goog.provide('network.mojom.TrustTokenKeyCommitmentResultSpec.OsSpec');
/**
 * @const { {$: !mojo.internal.MojomType} }
 * @export
 */
network.mojom.TrustTokenKeyCommitmentResultSpec.OsSpec = { $: mojo.internal.Enum() };

/**
 * @enum {number}
 * @export
 */
network.mojom.TrustTokenKeyCommitmentResult_Os = {
  
  kAndroid: 0,
  MIN_VALUE: 0,
  MAX_VALUE: 0,
};

goog.provide('network.mojom.TrustTokenKeyCommitmentResult_UnavailableLocalOperationFallback');
goog.provide('network.mojom.TrustTokenKeyCommitmentResultSpec.UnavailableLocalOperationFallbackSpec');
/**
 * @const { {$: !mojo.internal.MojomType} }
 * @export
 */
network.mojom.TrustTokenKeyCommitmentResultSpec.UnavailableLocalOperationFallbackSpec = { $: mojo.internal.Enum() };

/**
 * @enum {number}
 * @export
 */
network.mojom.TrustTokenKeyCommitmentResult_UnavailableLocalOperationFallback = {
  
  kWebIssuance: 0,
  kReturnWithError: 1,
  MIN_VALUE: 0,
  MAX_VALUE: 1,
};


mojo.internal.Struct(
    network.mojom.TrustTokenKeyCommitmentResultSpec.$,
    'TrustTokenKeyCommitmentResult',
    [
      mojo.internal.StructField(
        'protocolVersion', 0,
        0,
        network.mojom.TrustTokenProtocolVersionSpec.$,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'id', 4,
        0,
        mojo.internal.Int32,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'batchSize', 8,
        0,
        mojo.internal.Int32,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'keys', 16,
        0,
        mojo.internal.Array(network.mojom.TrustTokenVerificationKeySpec.$, false),
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'requestIssuanceLocallyOn', 24,
        0,
        mojo.internal.Array(network.mojom.TrustTokenKeyCommitmentResultSpec.OsSpec.$, false),
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'unavailableLocalOperationFallback', 12,
        0,
        network.mojom.TrustTokenKeyCommitmentResultSpec.UnavailableLocalOperationFallbackSpec.$,
        0,
        false /* nullable */),
    ],
    [[0, 40],]);



goog.provide('network.mojom.TrustTokenKeyCommitmentResult');

/** @record */
network.mojom.TrustTokenKeyCommitmentResult = class {
  constructor() {
    /** @export { !network.mojom.TrustTokenProtocolVersion } */
    this.protocolVersion;
    /** @export { !number } */
    this.id;
    /** @export { !number } */
    this.batchSize;
    /** @export { !network.mojom.TrustTokenKeyCommitmentResult_UnavailableLocalOperationFallback } */
    this.unavailableLocalOperationFallback;
    /** @export { !Array<!network.mojom.TrustTokenVerificationKey> } */
    this.keys;
    /** @export { !Array<!network.mojom.TrustTokenKeyCommitmentResult_Os> } */
    this.requestIssuanceLocallyOn;
  }
};




mojo.internal.Struct(
    network.mojom.FulfillTrustTokenIssuanceRequestSpec.$,
    'FulfillTrustTokenIssuanceRequest',
    [
      mojo.internal.StructField(
        'issuer', 0,
        0,
        url.mojom.OriginSpec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'request', 8,
        0,
        mojo.internal.String,
        null,
        false /* nullable */),
    ],
    [[0, 24],]);



goog.provide('network.mojom.FulfillTrustTokenIssuanceRequest');

/** @record */
network.mojom.FulfillTrustTokenIssuanceRequest = class {
  constructor() {
    /** @export { !url.mojom.Origin } */
    this.issuer;
    /** @export { !string } */
    this.request;
  }
};



goog.provide('network.mojom.FulfillTrustTokenIssuanceAnswer_Status');
goog.provide('network.mojom.FulfillTrustTokenIssuanceAnswerSpec.StatusSpec');
/**
 * @const { {$: !mojo.internal.MojomType} }
 * @export
 */
network.mojom.FulfillTrustTokenIssuanceAnswerSpec.StatusSpec = { $: mojo.internal.Enum() };

/**
 * @enum {number}
 * @export
 */
network.mojom.FulfillTrustTokenIssuanceAnswer_Status = {
  
  kOk: 0,
  kNotFound: 1,
  kUnknownError: 2,
  MIN_VALUE: 0,
  MAX_VALUE: 2,
};


mojo.internal.Struct(
    network.mojom.FulfillTrustTokenIssuanceAnswerSpec.$,
    'FulfillTrustTokenIssuanceAnswer',
    [
      mojo.internal.StructField(
        'status', 0,
        0,
        network.mojom.FulfillTrustTokenIssuanceAnswerSpec.StatusSpec.$,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'response', 8,
        0,
        mojo.internal.String,
        null,
        false /* nullable */),
    ],
    [[0, 24],]);



goog.provide('network.mojom.FulfillTrustTokenIssuanceAnswer');

/** @record */
network.mojom.FulfillTrustTokenIssuanceAnswer = class {
  constructor() {
    /** @export { !network.mojom.FulfillTrustTokenIssuanceAnswer_Status } */
    this.status;
    /** @export { !string } */
    this.response;
  }
};




mojo.internal.Struct(
    network.mojom.TrustTokenOperationResultSpec.$,
    'TrustTokenOperationResult',
    [
      mojo.internal.StructField(
        'type', 0,
        0,
        network.mojom.TrustTokenOperationTypeSpec.$,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'status', 4,
        0,
        network.mojom.TrustTokenOperationStatusSpec.$,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'issuer', 8,
        0,
        url.mojom.OriginSpec.$,
        null,
        true /* nullable */),
      mojo.internal.StructField(
        'topLevelOrigin', 16,
        0,
        url.mojom.OriginSpec.$,
        null,
        true /* nullable */),
      mojo.internal.StructField(
        'issuedTokenCount', 24,
        0,
        mojo.internal.Int32,
        0,
        false /* nullable */),
    ],
    [[0, 40],]);



goog.provide('network.mojom.TrustTokenOperationResult');

/** @record */
network.mojom.TrustTokenOperationResult = class {
  constructor() {
    /** @export { !network.mojom.TrustTokenOperationType } */
    this.type;
    /** @export { !network.mojom.TrustTokenOperationStatus } */
    this.status;
    /** @export { (url.mojom.Origin|undefined) } */
    this.issuer;
    /** @export { (url.mojom.Origin|undefined) } */
    this.topLevelOrigin;
    /** @export { !number } */
    this.issuedTokenCount;
  }
};




mojo.internal.Struct(
    network.mojom.StoredTrustTokensForIssuerSpec.$,
    'StoredTrustTokensForIssuer',
    [
      mojo.internal.StructField(
        'issuer', 0,
        0,
        url.mojom.OriginSpec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'count', 8,
        0,
        mojo.internal.Int32,
        0,
        false /* nullable */),
    ],
    [[0, 24],]);



goog.provide('network.mojom.StoredTrustTokensForIssuer');

/** @record */
network.mojom.StoredTrustTokensForIssuer = class {
  constructor() {
    /** @export { !url.mojom.Origin } */
    this.issuer;
    /** @export { !number } */
    this.count;
  }
};




mojo.internal.Struct(
    network.mojom.TrustTokenQueryAnswerer_HasTrustTokens_ParamsSpec.$,
    'TrustTokenQueryAnswerer_HasTrustTokens_Params',
    [
      mojo.internal.StructField(
        'issuer', 0,
        0,
        url.mojom.OriginSpec.$,
        null,
        false /* nullable */),
    ],
    [[0, 16],]);



goog.provide('network.mojom.TrustTokenQueryAnswerer_HasTrustTokens_Params');

/** @record */
network.mojom.TrustTokenQueryAnswerer_HasTrustTokens_Params = class {
  constructor() {
    /** @export { !url.mojom.Origin } */
    this.issuer;
  }
};




mojo.internal.Struct(
    network.mojom.TrustTokenQueryAnswerer_HasTrustTokens_ResponseParamsSpec.$,
    'TrustTokenQueryAnswerer_HasTrustTokens_ResponseParams',
    [
      mojo.internal.StructField(
        'result', 0,
        0,
        network.mojom.HasTrustTokensResultSpec.$,
        null,
        false /* nullable */),
    ],
    [[0, 16],]);



goog.provide('network.mojom.TrustTokenQueryAnswerer_HasTrustTokens_ResponseParams');

/** @record */
network.mojom.TrustTokenQueryAnswerer_HasTrustTokens_ResponseParams = class {
  constructor() {
    /** @export { !network.mojom.HasTrustTokensResult } */
    this.result;
  }
};


