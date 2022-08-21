// third_party/blink/public/mojom/blob/serialized_blob.mojom.cc is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#endif

#include "third_party/blink/public/mojom/blob/serialized_blob.mojom.h"

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

#include "third_party/blink/public/mojom/blob/serialized_blob.mojom-params-data.h"
#include "third_party/blink/public/mojom/blob/serialized_blob.mojom-shared-message-ids.h"

#include "third_party/blink/public/mojom/blob/serialized_blob.mojom-import-headers.h"
#include "third_party/blink/public/mojom/blob/serialized_blob.mojom-test-utils.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_BLOB_SERIALIZED_BLOB_MOJOM_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_BLOB_SERIALIZED_BLOB_MOJOM_JUMBO_H_
#endif



namespace blink {
namespace mojom {
SerializedBlob::SerializedBlob()
    : uuid(),
      content_type(),
      size(),
      blob() {}

SerializedBlob::SerializedBlob(
    const std::string& uuid_in,
    const std::string& content_type_in,
    uint64_t size_in,
    ::mojo::PendingRemote<::blink::mojom::Blob> blob_in)
    : uuid(std::move(uuid_in)),
      content_type(std::move(content_type_in)),
      size(std::move(size_in)),
      blob(std::move(blob_in)) {}

SerializedBlob::~SerializedBlob() = default;

void SerializedBlob::WriteIntoTrace(
    perfetto::TracedValue traced_context) const {
  [[maybe_unused]] auto dict = std::move(traced_context).WriteDictionary();
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "uuid"), this->uuid,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type const std::string&>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "content_type"), this->content_type,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type const std::string&>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "size"), this->size,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type uint64_t>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "blob"), this->blob,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type ::mojo::PendingRemote<::blink::mojom::Blob>>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
}

bool SerializedBlob::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}


}  // namespace mojom
}  // namespace blink


namespace mojo {


// static
bool StructTraits<::blink::mojom::SerializedBlob::DataView, ::blink::mojom::SerializedBlobPtr>::Read(
    ::blink::mojom::SerializedBlob::DataView input,
    ::blink::mojom::SerializedBlobPtr* output) {
  bool success = true;
  ::blink::mojom::SerializedBlobPtr result(::blink::mojom::SerializedBlob::New());
  
      if (success && !input.ReadUuid(&result->uuid))
        success = false;
      if (success && !input.ReadContentType(&result->content_type))
        success = false;
      if (success)
        result->size = input.size();
      if (success) {
        result->blob =
            input.TakeBlob<decltype(result->blob)>();
      }
  *output = std::move(result);
  return success;
}

}  // namespace mojo


// Symbols declared in the -test-utils.h header are defined here instead of a
// separate .cc file to save compile time.


namespace blink {
namespace mojom {




}  // namespace mojom
}  // namespace blink


#if defined(__clang__)
#pragma clang diagnostic pop
#endif