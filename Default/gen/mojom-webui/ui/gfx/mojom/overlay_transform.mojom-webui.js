// mojom-webui/ui/gfx/mojom/overlay_transform.mojom-webui.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2020 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

import {mojo} from '//resources/mojo/mojo/public/js/bindings.js';


/**
 * @const { {$: !mojo.internal.MojomType} }
 */
export const OverlayTransformSpec = { $: mojo.internal.Enum() };

/**
 * @enum {number}
 */
export const OverlayTransform = {
  
  OVERLAY_TRANSFORM_INVALID: 0,
  OVERLAY_TRANSFORM_NONE: 1,
  OVERLAY_TRANSFORM_FLIP_HORIZONTAL: 2,
  OVERLAY_TRANSFORM_FLIP_VERTICAL: 3,
  OVERLAY_TRANSFORM_ROTATE_90: 4,
  OVERLAY_TRANSFORM_ROTATE_180: 5,
  OVERLAY_TRANSFORM_ROTATE_270: 6,
  OVERLAY_TRANSFORM_LAST: 6,
  MIN_VALUE: 0,
  MAX_VALUE: 6,
};



