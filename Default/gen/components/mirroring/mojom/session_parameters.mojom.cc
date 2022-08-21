// components/mirroring/mojom/session_parameters.mojom.cc is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#endif

#include "components/mirroring/mojom/session_parameters.mojom.h"

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

#include "components/mirroring/mojom/session_parameters.mojom-params-data.h"
#include "components/mirroring/mojom/session_parameters.mojom-shared-message-ids.h"

#include "components/mirroring/mojom/session_parameters.mojom-import-headers.h"
#include "components/mirroring/mojom/session_parameters.mojom-test-utils.h"


#ifndef COMPONENTS_MIRRORING_MOJOM_SESSION_PARAMETERS_MOJOM_JUMBO_H_
#define COMPONENTS_MIRRORING_MOJOM_SESSION_PARAMETERS_MOJOM_JUMBO_H_
#endif



namespace mirroring {
namespace mojom {
SessionParameters::SessionParameters()
    : type(),
      receiver_address(),
      receiver_model_name(),
      target_playout_delay() {}

SessionParameters::SessionParameters(
    SessionType type_in,
    const ::net::IPAddress& receiver_address_in,
    const std::string& receiver_model_name_in,
    absl::optional<::base::TimeDelta> target_playout_delay_in)
    : type(std::move(type_in)),
      receiver_address(std::move(receiver_address_in)),
      receiver_model_name(std::move(receiver_model_name_in)),
      target_playout_delay(std::move(target_playout_delay_in)) {}

SessionParameters::~SessionParameters() = default;

void SessionParameters::WriteIntoTrace(
    perfetto::TracedValue traced_context) const {
  [[maybe_unused]] auto dict = std::move(traced_context).WriteDictionary();
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "type"), this->type,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type SessionType>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "receiver_address"), this->receiver_address,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type const ::net::IPAddress&>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "receiver_model_name"), this->receiver_model_name,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type const std::string&>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "target_playout_delay"), this->target_playout_delay,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type absl::optional<::base::TimeDelta>>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
}

bool SessionParameters::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}


}  // namespace mojom
}  // namespace mirroring


namespace mojo {


// static
bool StructTraits<::mirroring::mojom::SessionParameters::DataView, ::mirroring::mojom::SessionParametersPtr>::Read(
    ::mirroring::mojom::SessionParameters::DataView input,
    ::mirroring::mojom::SessionParametersPtr* output) {
  bool success = true;
  ::mirroring::mojom::SessionParametersPtr result(::mirroring::mojom::SessionParameters::New());
  
      if (success && !input.ReadType(&result->type))
        success = false;
      if (success && !input.ReadReceiverAddress(&result->receiver_address))
        success = false;
      if (success && !input.ReadReceiverModelName(&result->receiver_model_name))
        success = false;
      if (success && !input.ReadTargetPlayoutDelay(&result->target_playout_delay))
        success = false;
  *output = std::move(result);
  return success;
}

}  // namespace mojo


// Symbols declared in the -test-utils.h header are defined here instead of a
// separate .cc file to save compile time.


namespace mirroring {
namespace mojom {




}  // namespace mojom
}  // namespace mirroring


#if defined(__clang__)
#pragma clang diagnostic pop
#endif