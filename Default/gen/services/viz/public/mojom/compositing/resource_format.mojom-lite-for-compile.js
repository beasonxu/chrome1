// services/viz/public/mojom/compositing/resource_format.mojom-lite-for-compile.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
'use strict';

goog.require('mojo.internal');





goog.provide('viz.mojom.ResourceFormat');
goog.provide('viz.mojom.ResourceFormatSpec');
/**
 * @const { {$: !mojo.internal.MojomType} }
 * @export
 */
viz.mojom.ResourceFormatSpec = { $: mojo.internal.Enum() };

/**
 * @enum {number}
 * @export
 */
viz.mojom.ResourceFormat = {
  
  RGBA_8888: 0,
  RGBA_4444: 1,
  BGRA_8888: 2,
  ALPHA_8: 3,
  LUMINANCE_8: 4,
  RGB_565: 5,
  BGR_565: 6,
  ETC1: 7,
  RED_8: 8,
  RG_88: 9,
  LUMINANCE_F16: 10,
  RGBA_F16: 11,
  R16_EXT: 12,
  RG16_EXT: 13,
  RGBX_8888: 14,
  BGRX_8888: 15,
  RGBX_1010102: 16,
  BGRX_1010102: 17,
  YVU_420: 18,
  YUV_420_BIPLANAR: 19,
  P010: 20,
  MIN_VALUE: 0,
  MAX_VALUE: 20,
};




