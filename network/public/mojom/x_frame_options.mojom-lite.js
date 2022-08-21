// services/network/public/mojom/x_frame_options.mojom-lite.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
'use strict';


mojo.internal.exportModule('network.mojom');





/**
 * @const { {$: !mojo.internal.MojomType} }
 * @export
 */
network.mojom.XFrameOptionsValueSpec = { $: mojo.internal.Enum() };

/**
 * @enum {number}
 * @export
 */
network.mojom.XFrameOptionsValue = {
  
  kNone: 0,
  kDeny: 1,
  kSameOrigin: 2,
  kAllowAll: 3,
  kInvalid: 4,
  kConflict: 5,
  MIN_VALUE: 0,
  MAX_VALUE: 5,
};




