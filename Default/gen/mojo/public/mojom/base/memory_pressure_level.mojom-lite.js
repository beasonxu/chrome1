// mojo/public/mojom/base/memory_pressure_level.mojom-lite.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
'use strict';


mojo.internal.exportModule('mojoBase.mojom');





/**
 * @const { {$: !mojo.internal.MojomType} }
 * @export
 */
mojoBase.mojom.MemoryPressureLevelSpec = { $: mojo.internal.Enum() };

/**
 * @enum {number}
 * @export
 */
mojoBase.mojom.MemoryPressureLevel = {
  
  NONE: 0,
  MODERATE: 1,
  CRITICAL: 2,
  MIN_VALUE: 0,
  MAX_VALUE: 2,
};




