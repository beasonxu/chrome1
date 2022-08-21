// ui/gfx/mojom/buffer_types.mojom-forward.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_GFX_MOJOM_BUFFER_TYPES_MOJOM_FORWARD_H_
#define UI_GFX_MOJOM_BUFFER_TYPES_MOJOM_FORWARD_H_

#include <stdint.h>

#include "mojo/public/cpp/bindings/struct_forward.h"




#include "mojo/public/interfaces/bindings/native_struct.mojom-forward.h"






namespace gfx {
namespace mojom {
class BufferUsageAndFormatDataView;

class GpuMemoryBufferIdDataView;

class GpuMemoryBufferHandleDataView;


enum class BufferFormat : int32_t;

enum class BufferUsage : int32_t;

enum class BufferPlane : int32_t;
class BufferUsageAndFormat;
using BufferUsageAndFormatPtr = mojo::InlinedStructPtr<BufferUsageAndFormat>;

class GpuMemoryBufferId;
using GpuMemoryBufferIdPtr = mojo::InlinedStructPtr<GpuMemoryBufferId>;

class GpuMemoryBufferHandle;
using GpuMemoryBufferHandlePtr = mojo::StructPtr<GpuMemoryBufferHandle>;




}  // namespace mojom
}  // namespace gfx

#endif  // UI_GFX_MOJOM_BUFFER_TYPES_MOJOM_FORWARD_H_