// ui/gfx/mojom/native_handle_types.mojom-blink.cc is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#endif

#include "ui/gfx/mojom/native_handle_types.mojom-blink.h"

#include <math.h>
#include <stdint.h>
#include <utility>

#include "base/debug/alias.h"
#include "base/hash/md5_constexpr.h"
#include "base/run_loop.h"
#include "base/strings/string_number_conversions.h"
#include "base/trace_event/trace_event.h"
#include "base/trace_event/typed_macros.h"
#include "mojo/public/cpp/bindings/lib/generated_code_util.h"
#include "mojo/public/cpp/bindings/lib/message_internal.h"
#include "mojo/public/cpp/bindings/lib/send_message_helper.h"
#include "mojo/public/cpp/bindings/lib/proxy_to_responder.h"
#include "mojo/public/cpp/bindings/lib/serialization_util.h"
#include "mojo/public/cpp/bindings/lib/unserialized_message_context.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/mojo_buildflags.h"
#include "mojo/public/interfaces/bindings/interface_control_messages.mojom.h"
#include "third_party/perfetto/include/perfetto/tracing/traced_value.h"

#include "ui/gfx/mojom/native_handle_types.mojom-params-data.h"
#include "ui/gfx/mojom/native_handle_types.mojom-shared-message-ids.h"

#include "ui/gfx/mojom/native_handle_types.mojom-blink-import-headers.h"
#include "ui/gfx/mojom/native_handle_types.mojom-blink-test-utils.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef UI_GFX_MOJOM_NATIVE_HANDLE_TYPES_MOJOM_BLINK_JUMBO_H_
#define UI_GFX_MOJOM_NATIVE_HANDLE_TYPES_MOJOM_BLINK_JUMBO_H_
#endif



namespace gfx {
namespace mojom {
namespace blink {
AHardwareBufferHandle::AHardwareBufferHandle()
    : buffer_handle(),
      tracking_pipe() {}

AHardwareBufferHandle::AHardwareBufferHandle(
    ::mojo::PlatformHandle buffer_handle_in,
    ::mojo::ScopedMessagePipeHandle tracking_pipe_in)
    : buffer_handle(std::move(buffer_handle_in)),
      tracking_pipe(std::move(tracking_pipe_in)) {}

AHardwareBufferHandle::~AHardwareBufferHandle() = default;

void AHardwareBufferHandle::WriteIntoTrace(
    perfetto::TracedValue traced_context) const {
  [[maybe_unused]] auto dict = std::move(traced_context).WriteDictionary();
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "buffer_handle"), this->buffer_handle,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type ::mojo::PlatformHandle>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "tracking_pipe"), this->tracking_pipe,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type ::mojo::ScopedMessagePipeHandle>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
}

bool AHardwareBufferHandle::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
GpuMemoryBufferPlatformHandle::GpuMemoryBufferPlatformHandle() : tag_(Tag::kSharedMemoryHandle) {
  data_.shared_memory_handle = new ::base::UnsafeSharedMemoryRegion;
}

GpuMemoryBufferPlatformHandle::~GpuMemoryBufferPlatformHandle() {
  DestroyActive();
}


void GpuMemoryBufferPlatformHandle::set_shared_memory_handle(
    ::base::UnsafeSharedMemoryRegion shared_memory_handle) {
  if (tag_ == Tag::kSharedMemoryHandle) {
    *(data_.shared_memory_handle) = std::move(shared_memory_handle);
  } else {
    DestroyActive();
    tag_ = Tag::kSharedMemoryHandle;
    data_.shared_memory_handle = new ::base::UnsafeSharedMemoryRegion(
        std::move(shared_memory_handle));
  }
}
void GpuMemoryBufferPlatformHandle::set_android_hardware_buffer_handle(
    AHardwareBufferHandlePtr android_hardware_buffer_handle) {
  if (tag_ == Tag::kAndroidHardwareBufferHandle) {
    *(data_.android_hardware_buffer_handle) = std::move(android_hardware_buffer_handle);
  } else {
    DestroyActive();
    tag_ = Tag::kAndroidHardwareBufferHandle;
    data_.android_hardware_buffer_handle = new AHardwareBufferHandlePtr(
        std::move(android_hardware_buffer_handle));
  }
}

void GpuMemoryBufferPlatformHandle::DestroyActive() {
  switch (tag_) {

    case Tag::kSharedMemoryHandle:

      delete data_.shared_memory_handle;
      break;
    case Tag::kAndroidHardwareBufferHandle:

      delete data_.android_hardware_buffer_handle;
      break;
  }
}

bool GpuMemoryBufferPlatformHandle::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context, false);
}


}  // namespace blink
}  // namespace mojom
}  // namespace gfx


namespace mojo {


// static
bool StructTraits<::gfx::mojom::blink::AHardwareBufferHandle::DataView, ::gfx::mojom::blink::AHardwareBufferHandlePtr>::Read(
    ::gfx::mojom::blink::AHardwareBufferHandle::DataView input,
    ::gfx::mojom::blink::AHardwareBufferHandlePtr* output) {
  bool success = true;
  ::gfx::mojom::blink::AHardwareBufferHandlePtr result(::gfx::mojom::blink::AHardwareBufferHandle::New());
  
      if (success)
        result->buffer_handle = input.TakeBufferHandle();
      if (success)
        result->tracking_pipe = input.TakeTrackingPipe();
  *output = std::move(result);
  return success;
}

// static
bool UnionTraits<::gfx::mojom::blink::GpuMemoryBufferPlatformHandle::DataView, ::gfx::mojom::blink::GpuMemoryBufferPlatformHandlePtr>::Read(
    ::gfx::mojom::blink::GpuMemoryBufferPlatformHandle::DataView input,
    ::gfx::mojom::blink::GpuMemoryBufferPlatformHandlePtr* output) {
  using UnionType = ::gfx::mojom::blink::GpuMemoryBufferPlatformHandle;
  using Tag = UnionType::Tag;

  switch (input.tag()) {
    case Tag::kSharedMemoryHandle: {
      ::base::UnsafeSharedMemoryRegion result_shared_memory_handle;
      if (!input.ReadSharedMemoryHandle(&result_shared_memory_handle))
        return false;

      *output = UnionType::NewSharedMemoryHandle(
          std::move(result_shared_memory_handle));
      break;
    }
    case Tag::kAndroidHardwareBufferHandle: {
      ::gfx::mojom::blink::AHardwareBufferHandlePtr result_android_hardware_buffer_handle;
      if (!input.ReadAndroidHardwareBufferHandle(&result_android_hardware_buffer_handle))
        return false;

      *output = UnionType::NewAndroidHardwareBufferHandle(
          std::move(result_android_hardware_buffer_handle));
      break;
    }
    default:

      return false;
  }
  return true;
}

}  // namespace mojo


// Symbols declared in the -test-utils.h header are defined here instead of a
// separate .cc file to save compile time.


namespace gfx {
namespace mojom {
namespace blink {




}  // namespace blink
}  // namespace mojom
}  // namespace gfx


#if defined(__clang__)
#pragma clang diagnostic pop
#endif