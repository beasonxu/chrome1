// ui/gfx/mojom/color_space.mojom-blink-forward.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_GFX_MOJOM_COLOR_SPACE_MOJOM_BLINK_FORWARD_H_
#define UI_GFX_MOJOM_COLOR_SPACE_MOJOM_BLINK_FORWARD_H_

#include <stdint.h>

#include "mojo/public/cpp/bindings/struct_forward.h"




#include "mojo/public/interfaces/bindings/native_struct.mojom-forward.h"




namespace gfx {
namespace mojom {

enum class ColorSpacePrimaryID : int32_t;

enum class ColorSpaceTransferID : int32_t;

enum class ColorSpaceMatrixID : int32_t;

enum class ColorSpaceRangeID : int32_t;
}  // namespace gfx
}  // namespace mojom


namespace gfx {
namespace mojom {
namespace blink {
using ColorSpacePrimaryID = ColorSpacePrimaryID;
using ColorSpaceTransferID = ColorSpaceTransferID;
using ColorSpaceMatrixID = ColorSpaceMatrixID;
using ColorSpaceRangeID = ColorSpaceRangeID;
class ColorSpace;
using ColorSpacePtr = mojo::StructPtr<ColorSpace>;




}  // namespace blink
}  // namespace mojom
}  // namespace gfx

#endif  // UI_GFX_MOJOM_COLOR_SPACE_MOJOM_BLINK_FORWARD_H_