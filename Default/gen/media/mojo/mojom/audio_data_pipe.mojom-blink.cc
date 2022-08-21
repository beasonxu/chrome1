// media/mojo/mojom/audio_data_pipe.mojom-blink.cc is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#endif

#include "media/mojo/mojom/audio_data_pipe.mojom-blink.h"

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

#include "media/mojo/mojom/audio_data_pipe.mojom-params-data.h"
#include "media/mojo/mojom/audio_data_pipe.mojom-shared-message-ids.h"

#include "media/mojo/mojom/audio_data_pipe.mojom-blink-import-headers.h"
#include "media/mojo/mojom/audio_data_pipe.mojom-blink-test-utils.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef MEDIA_MOJO_MOJOM_AUDIO_DATA_PIPE_MOJOM_BLINK_JUMBO_H_
#define MEDIA_MOJO_MOJOM_AUDIO_DATA_PIPE_MOJOM_BLINK_JUMBO_H_
#endif



namespace media {
namespace mojom {
namespace blink {
ReadWriteAudioDataPipe::ReadWriteAudioDataPipe()
    : shared_memory(),
      socket() {}

ReadWriteAudioDataPipe::ReadWriteAudioDataPipe(
    ::base::UnsafeSharedMemoryRegion shared_memory_in,
    ::mojo::PlatformHandle socket_in)
    : shared_memory(std::move(shared_memory_in)),
      socket(std::move(socket_in)) {}

ReadWriteAudioDataPipe::~ReadWriteAudioDataPipe() = default;

void ReadWriteAudioDataPipe::WriteIntoTrace(
    perfetto::TracedValue traced_context) const {
  [[maybe_unused]] auto dict = std::move(traced_context).WriteDictionary();
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "shared_memory"), this->shared_memory,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type ::base::UnsafeSharedMemoryRegion>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "socket"), this->socket,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type ::mojo::PlatformHandle>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
}

bool ReadWriteAudioDataPipe::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
ReadOnlyAudioDataPipe::ReadOnlyAudioDataPipe()
    : shared_memory(),
      socket() {}

ReadOnlyAudioDataPipe::ReadOnlyAudioDataPipe(
    ::base::ReadOnlySharedMemoryRegion shared_memory_in,
    ::mojo::PlatformHandle socket_in)
    : shared_memory(std::move(shared_memory_in)),
      socket(std::move(socket_in)) {}

ReadOnlyAudioDataPipe::~ReadOnlyAudioDataPipe() = default;

void ReadOnlyAudioDataPipe::WriteIntoTrace(
    perfetto::TracedValue traced_context) const {
  [[maybe_unused]] auto dict = std::move(traced_context).WriteDictionary();
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "shared_memory"), this->shared_memory,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type ::base::ReadOnlySharedMemoryRegion>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "socket"), this->socket,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type ::mojo::PlatformHandle>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
}

bool ReadOnlyAudioDataPipe::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}


}  // namespace blink
}  // namespace mojom
}  // namespace media


namespace mojo {


// static
bool StructTraits<::media::mojom::blink::ReadWriteAudioDataPipe::DataView, ::media::mojom::blink::ReadWriteAudioDataPipePtr>::Read(
    ::media::mojom::blink::ReadWriteAudioDataPipe::DataView input,
    ::media::mojom::blink::ReadWriteAudioDataPipePtr* output) {
  bool success = true;
  ::media::mojom::blink::ReadWriteAudioDataPipePtr result(::media::mojom::blink::ReadWriteAudioDataPipe::New());
  
      if (success && !input.ReadSharedMemory(&result->shared_memory))
        success = false;
      if (success)
        result->socket = input.TakeSocket();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::media::mojom::blink::ReadOnlyAudioDataPipe::DataView, ::media::mojom::blink::ReadOnlyAudioDataPipePtr>::Read(
    ::media::mojom::blink::ReadOnlyAudioDataPipe::DataView input,
    ::media::mojom::blink::ReadOnlyAudioDataPipePtr* output) {
  bool success = true;
  ::media::mojom::blink::ReadOnlyAudioDataPipePtr result(::media::mojom::blink::ReadOnlyAudioDataPipe::New());
  
      if (success && !input.ReadSharedMemory(&result->shared_memory))
        success = false;
      if (success)
        result->socket = input.TakeSocket();
  *output = std::move(result);
  return success;
}

}  // namespace mojo


// Symbols declared in the -test-utils.h header are defined here instead of a
// separate .cc file to save compile time.


namespace media {
namespace mojom {
namespace blink {




}  // namespace blink
}  // namespace mojom
}  // namespace media


#if defined(__clang__)
#pragma clang diagnostic pop
#endif