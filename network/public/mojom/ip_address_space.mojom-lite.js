// services/network/public/mojom/ip_address_space.mojom-lite.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
'use strict';


mojo.internal.exportModule('network.mojom');





/**
 * @const { {$: !mojo.internal.MojomType} }
 * @export
 */
network.mojom.IPAddressSpaceSpec = { $: mojo.internal.Enum() };

/**
 * @enum {number}
 * @export
 */
network.mojom.IPAddressSpace = {
  
  kLocal: 0,
  kPrivate: 1,
  kPublic: 2,
  kUnknown: 3,
  MIN_VALUE: 0,
  MAX_VALUE: 3,
};




