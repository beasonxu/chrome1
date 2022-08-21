// mojo/public/mojom/base/shared_memory.mojom.cc is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#endif

#include "mojo/public/mojom/base/shared_memory.mojom.h"

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

#include "mojo/public/mojom/base/shared_memory.mojom-params-data.h"
#include "mojo/public/mojom/base/shared_memory.mojom-shared-message-ids.h"

#include "mojo/public/mojom/base/shared_memory.mojom-import-headers.h"
#include "mojo/public/mojom/base/shared_memory.mojom-test-utils.h"


#ifndef MOJO_PUBLIC_MOJOM_BASE_SHARED_MEMORY_MOJOM_JUMBO_H_
#define MOJO_PUBLIC_MOJOM_BASE_SHARED_MEMORY_MOJOM_JUMBO_H_
#endif



namespace mojo_base {
namespace mojom {
ReadOnlySharedMemoryRegion::ReadOnlySharedMemoryRegion()
    : buffer() {}

ReadOnlySharedMemoryRegion::ReadOnlySharedMemoryRegion(
    ::mojo::ScopedSharedBufferHandle buffer_in)
    : buffer(std::move(buffer_in)) {}

ReadOnlySharedMemoryRegion::~ReadOnlySharedMemoryRegion() = default;

void ReadOnlySharedMemoryRegion::WriteIntoTrace(
    perfetto::TracedValue traced_context) const {
  [[maybe_unused]] auto dict = std::move(traced_context).WriteDictionary();
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "buffer"), this->buffer,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type ::mojo::ScopedSharedBufferHandle>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
}

bool ReadOnlySharedMemoryRegion::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
WritableSharedMemoryRegion::WritableSharedMemoryRegion()
    : buffer() {}

WritableSharedMemoryRegion::WritableSharedMemoryRegion(
    ::mojo::ScopedSharedBufferHandle buffer_in)
    : buffer(std::move(buffer_in)) {}

WritableSharedMemoryRegion::~WritableSharedMemoryRegion() = default;

void WritableSharedMemoryRegion::WriteIntoTrace(
    perfetto::TracedValue traced_context) const {
  [[maybe_unused]] auto dict = std::move(traced_context).WriteDictionary();
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "buffer"), this->buffer,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type ::mojo::ScopedSharedBufferHandle>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
}

bool WritableSharedMemoryRegion::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
UnsafeSharedMemoryRegion::UnsafeSharedMemoryRegion()
    : buffer() {}

UnsafeSharedMemoryRegion::UnsafeSharedMemoryRegion(
    ::mojo::ScopedSharedBufferHandle buffer_in)
    : buffer(std::move(buffer_in)) {}

UnsafeSharedMemoryRegion::~UnsafeSharedMemoryRegion() = default;

void UnsafeSharedMemoryRegion::WriteIntoTrace(
    perfetto::TracedValue traced_context) const {
  [[maybe_unused]] auto dict = std::move(traced_context).WriteDictionary();
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "buffer"), this->buffer,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type ::mojo::ScopedSharedBufferHandle>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
}

bool UnsafeSharedMemoryRegion::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}


}  // namespace mojom
}  // namespace mojo_base


namespace mojo {


// static
bool StructTraits<::mojo_base::mojom::ReadOnlySharedMemoryRegion::DataView, ::mojo_base::mojom::ReadOnlySharedMemoryRegionPtr>::Read(
    ::mojo_base::mojom::ReadOnlySharedMemoryRegion::DataView input,
    ::mojo_base::mojom::ReadOnlySharedMemoryRegionPtr* output) {
  bool success = true;
  ::mojo_base::mojom::ReadOnlySharedMemoryRegionPtr result(::mojo_base::mojom::ReadOnlySharedMemoryRegion::New());
  
      if (success)
        result->buffer = input.TakeBuffer();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::mojo_base::mojom::WritableSharedMemoryRegion::DataView, ::mojo_base::mojom::WritableSharedMemoryRegionPtr>::Read(
    ::mojo_base::mojom::WritableSharedMemoryRegion::DataView input,
    ::mojo_base::mojom::WritableSharedMemoryRegionPtr* output) {
  bool success = true;
  ::mojo_base::mojom::WritableSharedMemoryRegionPtr result(::mojo_base::mojom::WritableSharedMemoryRegion::New());
  
      if (success)
        result->buffer = input.TakeBuffer();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::mojo_base::mojom::UnsafeSharedMemoryRegion::DataView, ::mojo_base::mojom::UnsafeSharedMemoryRegionPtr>::Read(
    ::mojo_base::mojom::UnsafeSharedMemoryRegion::DataView input,
    ::mojo_base::mojom::UnsafeSharedMemoryRegionPtr* output) {
  bool success = true;
  ::mojo_base::mojom::UnsafeSharedMemoryRegionPtr result(::mojo_base::mojom::UnsafeSharedMemoryRegion::New());
  
      if (success)
        result->buffer = input.TakeBuffer();
  *output = std::move(result);
  return success;
}

}  // namespace mojo


// Symbols declared in the -test-utils.h header are defined here instead of a
// separate .cc file to save compile time.


namespace mojo_base {
namespace mojom {




}  // namespace mojom
}  // namespace mojo_base


#if defined(__clang__)
#pragma clang diagnostic pop
#endif