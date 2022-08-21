// ui/base/mojom/window_open_disposition.mojom.cc is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#endif

#include "ui/base/mojom/window_open_disposition.mojom.h"

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

#include "ui/base/mojom/window_open_disposition.mojom-params-data.h"
#include "ui/base/mojom/window_open_disposition.mojom-shared-message-ids.h"

#include "ui/base/mojom/window_open_disposition.mojom-import-headers.h"
#include "ui/base/mojom/window_open_disposition.mojom-test-utils.h"


#ifndef UI_BASE_MOJOM_WINDOW_OPEN_DISPOSITION_MOJOM_JUMBO_H_
#define UI_BASE_MOJOM_WINDOW_OPEN_DISPOSITION_MOJOM_JUMBO_H_
#endif



namespace ui {
namespace mojom {
ClickModifiers::ClickModifiers()
    : middle_button(),
      alt_key(),
      ctrl_key(),
      meta_key(),
      shift_key() {}

ClickModifiers::ClickModifiers(
    bool middle_button_in,
    bool alt_key_in,
    bool ctrl_key_in,
    bool meta_key_in,
    bool shift_key_in)
    : middle_button(std::move(middle_button_in)),
      alt_key(std::move(alt_key_in)),
      ctrl_key(std::move(ctrl_key_in)),
      meta_key(std::move(meta_key_in)),
      shift_key(std::move(shift_key_in)) {}

ClickModifiers::~ClickModifiers() = default;
size_t ClickModifiers::Hash(size_t seed) const {
  seed = mojo::internal::Hash(seed, this->middle_button);
  seed = mojo::internal::Hash(seed, this->alt_key);
  seed = mojo::internal::Hash(seed, this->ctrl_key);
  seed = mojo::internal::Hash(seed, this->meta_key);
  seed = mojo::internal::Hash(seed, this->shift_key);
  return seed;
}

void ClickModifiers::WriteIntoTrace(
    perfetto::TracedValue traced_context) const {
  [[maybe_unused]] auto dict = std::move(traced_context).WriteDictionary();
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "middle_button"), this->middle_button,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type bool>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "alt_key"), this->alt_key,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type bool>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "ctrl_key"), this->ctrl_key,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type bool>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "meta_key"), this->meta_key,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type bool>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "shift_key"), this->shift_key,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type bool>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
}

bool ClickModifiers::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}


}  // namespace mojom
}  // namespace ui


namespace mojo {


// static
bool StructTraits<::ui::mojom::ClickModifiers::DataView, ::ui::mojom::ClickModifiersPtr>::Read(
    ::ui::mojom::ClickModifiers::DataView input,
    ::ui::mojom::ClickModifiersPtr* output) {
  bool success = true;
  ::ui::mojom::ClickModifiersPtr result(::ui::mojom::ClickModifiers::New());
  
      if (success)
        result->middle_button = input.middle_button();
      if (success)
        result->alt_key = input.alt_key();
      if (success)
        result->ctrl_key = input.ctrl_key();
      if (success)
        result->meta_key = input.meta_key();
      if (success)
        result->shift_key = input.shift_key();
  *output = std::move(result);
  return success;
}

}  // namespace mojo


// Symbols declared in the -test-utils.h header are defined here instead of a
// separate .cc file to save compile time.


namespace ui {
namespace mojom {




}  // namespace mojom
}  // namespace ui


#if defined(__clang__)
#pragma clang diagnostic pop
#endif