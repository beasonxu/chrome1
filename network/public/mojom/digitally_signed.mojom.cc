// services/network/public/mojom/digitally_signed.mojom.cc is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#endif

#include "services/network/public/mojom/digitally_signed.mojom.h"

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

#include "services/network/public/mojom/digitally_signed.mojom-params-data.h"
#include "services/network/public/mojom/digitally_signed.mojom-shared-message-ids.h"

#include "services/network/public/mojom/digitally_signed.mojom-import-headers.h"
#include "services/network/public/mojom/digitally_signed.mojom-test-utils.h"


#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_DIGITALLY_SIGNED_MOJOM_JUMBO_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_DIGITALLY_SIGNED_MOJOM_JUMBO_H_
#endif



namespace network {
namespace mojom {
DigitallySigned::DigitallySigned()
    : hash_algorithm(),
      signature_algorithm(),
      signature() {}

DigitallySigned::DigitallySigned(
    ::net::ct::DigitallySigned::HashAlgorithm hash_algorithm_in,
    ::net::ct::DigitallySigned::SignatureAlgorithm signature_algorithm_in,
    std::vector<uint8_t> signature_in)
    : hash_algorithm(std::move(hash_algorithm_in)),
      signature_algorithm(std::move(signature_algorithm_in)),
      signature(std::move(signature_in)) {}

DigitallySigned::~DigitallySigned() = default;

void DigitallySigned::WriteIntoTrace(
    perfetto::TracedValue traced_context) const {
  [[maybe_unused]] auto dict = std::move(traced_context).WriteDictionary();
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "hash_algorithm"), this->hash_algorithm,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type ::net::ct::DigitallySigned::HashAlgorithm>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "signature_algorithm"), this->signature_algorithm,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type ::net::ct::DigitallySigned::SignatureAlgorithm>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "signature"), this->signature,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type const std::vector<uint8_t>&>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
}

bool DigitallySigned::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}


}  // namespace mojom
}  // namespace network


namespace mojo {


// static
bool StructTraits<::network::mojom::DigitallySigned::DataView, ::network::mojom::DigitallySignedPtr>::Read(
    ::network::mojom::DigitallySigned::DataView input,
    ::network::mojom::DigitallySignedPtr* output) {
  bool success = true;
  ::network::mojom::DigitallySignedPtr result(::network::mojom::DigitallySigned::New());
  
      if (success && !input.ReadHashAlgorithm(&result->hash_algorithm))
        success = false;
      if (success && !input.ReadSignatureAlgorithm(&result->signature_algorithm))
        success = false;
      if (success && !input.ReadSignature(&result->signature))
        success = false;
  *output = std::move(result);
  return success;
}

}  // namespace mojo


// Symbols declared in the -test-utils.h header are defined here instead of a
// separate .cc file to save compile time.


namespace network {
namespace mojom {




}  // namespace mojom
}  // namespace network


#if defined(__clang__)
#pragma clang diagnostic pop
#endif