// content/common/renderer.mojom-forward.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_RENDERER_MOJOM_FORWARD_H_
#define CONTENT_COMMON_RENDERER_MOJOM_FORWARD_H_

#include <stdint.h>

#include "mojo/public/cpp/bindings/struct_forward.h"

#include "mojo/public/cpp/bindings/deprecated_interface_types_forward.h"


#include "mojo/public/interfaces/bindings/native_struct.mojom-forward.h"



namespace mojo {
enum class NativeEnum;
}  // namespace mojo


namespace content {
namespace mojom {
class UpdateScrollbarThemeParamsDataView;

class UpdateSystemColorInfoParamsDataView;


enum class RenderProcessBackgroundState : int32_t;

enum class RenderProcessVisibleState : int32_t;
class UpdateScrollbarThemeParams;
using UpdateScrollbarThemeParamsPtr = mojo::StructPtr<UpdateScrollbarThemeParams>;

class UpdateSystemColorInfoParams;
using UpdateSystemColorInfoParamsPtr = mojo::StructPtr<UpdateSystemColorInfoParams>;

class Renderer;




}  // namespace mojom
}  // namespace content

#endif  // CONTENT_COMMON_RENDERER_MOJOM_FORWARD_H_