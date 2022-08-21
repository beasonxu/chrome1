// skia/public/mojom/image_info.mojom-forward.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SKIA_PUBLIC_MOJOM_IMAGE_INFO_MOJOM_FORWARD_H_
#define SKIA_PUBLIC_MOJOM_IMAGE_INFO_MOJOM_FORWARD_H_

#include <stdint.h>

#include "mojo/public/cpp/bindings/struct_forward.h"




#include "mojo/public/interfaces/bindings/native_struct.mojom-forward.h"






namespace skia {
namespace mojom {
class ImageInfoDataView;

class BitmapN32ImageInfoDataView;


enum class ColorType : int32_t;

enum class AlphaType : int32_t;
class ImageInfo;
using ImageInfoPtr = mojo::StructPtr<ImageInfo>;

class BitmapN32ImageInfo;
using BitmapN32ImageInfoPtr = mojo::StructPtr<BitmapN32ImageInfo>;




}  // namespace mojom
}  // namespace skia

#endif  // SKIA_PUBLIC_MOJOM_IMAGE_INFO_MOJOM_FORWARD_H_