// third_party/blink/public/mojom/ad_tagging/ad_evidence.mojom-blink.cc is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#endif

#include "third_party/blink/public/mojom/ad_tagging/ad_evidence.mojom-blink.h"

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

#include "third_party/blink/public/mojom/ad_tagging/ad_evidence.mojom-params-data.h"
#include "third_party/blink/public/mojom/ad_tagging/ad_evidence.mojom-shared-message-ids.h"

#include "third_party/blink/public/mojom/ad_tagging/ad_evidence.mojom-blink-import-headers.h"
#include "third_party/blink/public/mojom/ad_tagging/ad_evidence.mojom-blink-test-utils.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_AD_TAGGING_AD_EVIDENCE_MOJOM_BLINK_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_AD_TAGGING_AD_EVIDENCE_MOJOM_BLINK_JUMBO_H_
#endif



namespace blink {
namespace mojom {
namespace blink {
FrameAdEvidence::FrameAdEvidence()
    : is_complete(),
      parent_is_ad(),
      latest_filter_list_result(FilterListResult::kNotChecked),
      most_restrictive_filter_list_result(FilterListResult::kNotChecked),
      created_by_ad_script(FrameCreationStackEvidence::kNotCreatedByAdScript) {}

FrameAdEvidence::FrameAdEvidence(
    bool is_complete_in,
    bool parent_is_ad_in,
    FilterListResult latest_filter_list_result_in,
    FilterListResult most_restrictive_filter_list_result_in,
    FrameCreationStackEvidence created_by_ad_script_in)
    : is_complete(std::move(is_complete_in)),
      parent_is_ad(std::move(parent_is_ad_in)),
      latest_filter_list_result(std::move(latest_filter_list_result_in)),
      most_restrictive_filter_list_result(std::move(most_restrictive_filter_list_result_in)),
      created_by_ad_script(std::move(created_by_ad_script_in)) {}

FrameAdEvidence::~FrameAdEvidence() = default;

void FrameAdEvidence::WriteIntoTrace(
    perfetto::TracedValue traced_context) const {
  [[maybe_unused]] auto dict = std::move(traced_context).WriteDictionary();
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "is_complete"), this->is_complete,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type bool>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "parent_is_ad"), this->parent_is_ad,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type bool>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "latest_filter_list_result"), this->latest_filter_list_result,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type FilterListResult>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "most_restrictive_filter_list_result"), this->most_restrictive_filter_list_result,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type FilterListResult>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "created_by_ad_script"), this->created_by_ad_script,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type FrameCreationStackEvidence>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
}

bool FrameAdEvidence::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}


}  // namespace blink
}  // namespace mojom
}  // namespace blink


namespace mojo {


// static
bool StructTraits<::blink::mojom::blink::FrameAdEvidence::DataView, ::blink::mojom::blink::FrameAdEvidencePtr>::Read(
    ::blink::mojom::blink::FrameAdEvidence::DataView input,
    ::blink::mojom::blink::FrameAdEvidencePtr* output) {
  bool success = true;
  ::blink::mojom::blink::FrameAdEvidencePtr result(::blink::mojom::blink::FrameAdEvidence::New());
  
      if (success)
        result->is_complete = input.is_complete();
      if (success)
        result->parent_is_ad = input.parent_is_ad();
      if (success && !input.ReadLatestFilterListResult(&result->latest_filter_list_result))
        success = false;
      if (success && !input.ReadMostRestrictiveFilterListResult(&result->most_restrictive_filter_list_result))
        success = false;
      if (success && !input.ReadCreatedByAdScript(&result->created_by_ad_script))
        success = false;
  *output = std::move(result);
  return success;
}

}  // namespace mojo


// Symbols declared in the -test-utils.h header are defined here instead of a
// separate .cc file to save compile time.


namespace blink {
namespace mojom {
namespace blink {




}  // namespace blink
}  // namespace mojom
}  // namespace blink


#if defined(__clang__)
#pragma clang diagnostic pop
#endif