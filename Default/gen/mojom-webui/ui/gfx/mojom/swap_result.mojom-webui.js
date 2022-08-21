// mojom-webui/ui/gfx/mojom/swap_result.mojom-webui.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2020 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

import {mojo} from '//resources/mojo/mojo/public/js/bindings.js';


/**
 * @const { {$: !mojo.internal.MojomType} }
 */
export const SwapResultSpec = { $: mojo.internal.Enum() };

/**
 * @enum {number}
 */
export const SwapResult = {
  
  ACK: 0,
  FAILED: 1,
  SKIPPED: 2,
  NAK_RECREATE_BUFFERS: 3,
  MIN_VALUE: 0,
  MAX_VALUE: 3,
};



