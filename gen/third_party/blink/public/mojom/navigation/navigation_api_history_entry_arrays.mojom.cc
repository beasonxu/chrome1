// third_party/blink/public/mojom/navigation/navigation_api_history_entry_arrays.mojom.cc is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#endif

#include "third_party/blink/public/mojom/navigation/navigation_api_history_entry_arrays.mojom.h"

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

#include "third_party/blink/public/mojom/navigation/navigation_api_history_entry_arrays.mojom-params-data.h"
#include "third_party/blink/public/mojom/navigation/navigation_api_history_entry_arrays.mojom-shared-message-ids.h"

#include "third_party/blink/public/mojom/navigation/navigation_api_history_entry_arrays.mojom-import-headers.h"
#include "third_party/blink/public/mojom/navigation/navigation_api_history_entry_arrays.mojom-test-utils.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_NAVIGATION_NAVIGATION_API_HISTORY_ENTRY_ARRAYS_MOJOM_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_NAVIGATION_NAVIGATION_API_HISTORY_ENTRY_ARRAYS_MOJOM_JUMBO_H_
#endif



namespace blink {
namespace mojom {
NavigationApiHistoryEntry::NavigationApiHistoryEntry()
    : key(),
      id(),
      url(),
      item_sequence_number(),
      document_sequence_number(),
      state() {}

NavigationApiHistoryEntry::NavigationApiHistoryEntry(
    const ::std::u16string& key_in,
    const ::std::u16string& id_in,
    const ::std::u16string& url_in,
    int64_t item_sequence_number_in,
    int64_t document_sequence_number_in,
    const absl::optional<::std::u16string>& state_in)
    : key(std::move(key_in)),
      id(std::move(id_in)),
      url(std::move(url_in)),
      item_sequence_number(std::move(item_sequence_number_in)),
      document_sequence_number(std::move(document_sequence_number_in)),
      state(std::move(state_in)) {}

NavigationApiHistoryEntry::~NavigationApiHistoryEntry() = default;

void NavigationApiHistoryEntry::WriteIntoTrace(
    perfetto::TracedValue traced_context) const {
  [[maybe_unused]] auto dict = std::move(traced_context).WriteDictionary();
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "key"), this->key,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type const ::std::u16string&>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "id"), this->id,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type const ::std::u16string&>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "url"), this->url,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type const ::std::u16string&>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "item_sequence_number"), this->item_sequence_number,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type int64_t>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "document_sequence_number"), this->document_sequence_number,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type int64_t>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "state"), this->state,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type const absl::optional<::std::u16string>&>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
}

bool NavigationApiHistoryEntry::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
NavigationApiHistoryEntryArrays::NavigationApiHistoryEntryArrays()
    : back_entries(),
      forward_entries() {}

NavigationApiHistoryEntryArrays::NavigationApiHistoryEntryArrays(
    std::vector<NavigationApiHistoryEntryPtr> back_entries_in,
    std::vector<NavigationApiHistoryEntryPtr> forward_entries_in)
    : back_entries(std::move(back_entries_in)),
      forward_entries(std::move(forward_entries_in)) {}

NavigationApiHistoryEntryArrays::~NavigationApiHistoryEntryArrays() = default;

void NavigationApiHistoryEntryArrays::WriteIntoTrace(
    perfetto::TracedValue traced_context) const {
  [[maybe_unused]] auto dict = std::move(traced_context).WriteDictionary();
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "back_entries"), this->back_entries,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type std::vector<NavigationApiHistoryEntryPtr>>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "forward_entries"), this->forward_entries,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type std::vector<NavigationApiHistoryEntryPtr>>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
}

bool NavigationApiHistoryEntryArrays::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}


}  // namespace mojom
}  // namespace blink


namespace mojo {


// static
bool StructTraits<::blink::mojom::NavigationApiHistoryEntry::DataView, ::blink::mojom::NavigationApiHistoryEntryPtr>::Read(
    ::blink::mojom::NavigationApiHistoryEntry::DataView input,
    ::blink::mojom::NavigationApiHistoryEntryPtr* output) {
  bool success = true;
  ::blink::mojom::NavigationApiHistoryEntryPtr result(::blink::mojom::NavigationApiHistoryEntry::New());
  
      if (success && !input.ReadKey(&result->key))
        success = false;
      if (success && !input.ReadId(&result->id))
        success = false;
      if (success && !input.ReadUrl(&result->url))
        success = false;
      if (success)
        result->item_sequence_number = input.item_sequence_number();
      if (success)
        result->document_sequence_number = input.document_sequence_number();
      if (success && !input.ReadState(&result->state))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::blink::mojom::NavigationApiHistoryEntryArrays::DataView, ::blink::mojom::NavigationApiHistoryEntryArraysPtr>::Read(
    ::blink::mojom::NavigationApiHistoryEntryArrays::DataView input,
    ::blink::mojom::NavigationApiHistoryEntryArraysPtr* output) {
  bool success = true;
  ::blink::mojom::NavigationApiHistoryEntryArraysPtr result(::blink::mojom::NavigationApiHistoryEntryArrays::New());
  
      if (success && !input.ReadBackEntries(&result->back_entries))
        success = false;
      if (success && !input.ReadForwardEntries(&result->forward_entries))
        success = false;
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