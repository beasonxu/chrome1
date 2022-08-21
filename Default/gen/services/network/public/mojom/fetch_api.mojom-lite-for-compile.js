// services/network/public/mojom/fetch_api.mojom-lite-for-compile.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
'use strict';

goog.require('mojo.internal');





goog.provide('network.mojom.RequestMode');
goog.provide('network.mojom.RequestModeSpec');
/**
 * @const { {$: !mojo.internal.MojomType} }
 * @export
 */
network.mojom.RequestModeSpec = { $: mojo.internal.Enum() };

/**
 * @enum {number}
 * @export
 */
network.mojom.RequestMode = {
  
  kSameOrigin: 0,
  kNoCors: 1,
  kCors: 2,
  kCorsWithForcedPreflight: 3,
  kNavigate: 4,
  MIN_VALUE: 0,
  MAX_VALUE: 4,
};

goog.provide('network.mojom.RequestDestination');
goog.provide('network.mojom.RequestDestinationSpec');
/**
 * @const { {$: !mojo.internal.MojomType} }
 * @export
 */
network.mojom.RequestDestinationSpec = { $: mojo.internal.Enum() };

/**
 * @enum {number}
 * @export
 */
network.mojom.RequestDestination = {
  
  kEmpty: 0,
  kAudio: 1,
  kAudioWorklet: 2,
  kDocument: 3,
  kEmbed: 4,
  kFont: 5,
  kFrame: 6,
  kIframe: 7,
  kImage: 8,
  kManifest: 9,
  kObject: 10,
  kPaintWorklet: 11,
  kReport: 12,
  kScript: 13,
  kServiceWorker: 14,
  kSharedWorker: 15,
  kStyle: 16,
  kTrack: 17,
  kVideo: 18,
  kWebBundle: 19,
  kWorker: 20,
  kXslt: 21,
  kFencedframe: 22,
  MIN_VALUE: 0,
  MAX_VALUE: 22,
};

goog.provide('network.mojom.RedirectMode');
goog.provide('network.mojom.RedirectModeSpec');
/**
 * @const { {$: !mojo.internal.MojomType} }
 * @export
 */
network.mojom.RedirectModeSpec = { $: mojo.internal.Enum() };

/**
 * @enum {number}
 * @export
 */
network.mojom.RedirectMode = {
  
  kFollow: 0,
  kError: 1,
  kManual: 2,
  MIN_VALUE: 0,
  MAX_VALUE: 2,
};

goog.provide('network.mojom.CredentialsMode');
goog.provide('network.mojom.CredentialsModeSpec');
/**
 * @const { {$: !mojo.internal.MojomType} }
 * @export
 */
network.mojom.CredentialsModeSpec = { $: mojo.internal.Enum() };

/**
 * @enum {number}
 * @export
 */
network.mojom.CredentialsMode = {
  
  kOmit: 0,
  kSameOrigin: 1,
  kInclude: 2,
  kOmitBug_775438_Workaround: 3,
  MIN_VALUE: 0,
  MAX_VALUE: 3,
};

goog.provide('network.mojom.FetchResponseType');
goog.provide('network.mojom.FetchResponseTypeSpec');
/**
 * @const { {$: !mojo.internal.MojomType} }
 * @export
 */
network.mojom.FetchResponseTypeSpec = { $: mojo.internal.Enum() };

/**
 * @enum {number}
 * @export
 */
network.mojom.FetchResponseType = {
  
  kBasic: 0,
  kCors: 1,
  kDefault: 2,
  kError: 3,
  kOpaque: 4,
  kOpaqueRedirect: 5,
  MIN_VALUE: 0,
  MAX_VALUE: 5,
};

goog.provide('network.mojom.FetchResponseSource');
goog.provide('network.mojom.FetchResponseSourceSpec');
/**
 * @const { {$: !mojo.internal.MojomType} }
 * @export
 */
network.mojom.FetchResponseSourceSpec = { $: mojo.internal.Enum() };

/**
 * @enum {number}
 * @export
 */
network.mojom.FetchResponseSource = {
  
  kUnspecified: 0,
  kNetwork: 1,
  kHttpCache: 2,
  kCacheStorage: 3,
  MIN_VALUE: 0,
  MAX_VALUE: 3,
};




