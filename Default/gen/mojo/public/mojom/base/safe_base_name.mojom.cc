// mojo/public/mojom/base/safe_base_name.mojom.cc is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#endif

#include "mojo/public/mojom/base/safe_base_name.mojom.h"

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

#include "mojo/public/mojom/base/safe_base_name.mojom-params-data.h"
#include "mojo/public/mojom/base/safe_base_name.mojom-shared-message-ids.h"

#include "mojo/public/mojom/base/safe_base_name.mojom-import-headers.h"
#include "mojo/public/mojom/base/safe_base_name.mojom-test-utils.h"


#ifndef MOJO_PUBLIC_MOJOM_BASE_SAFE_BASE_NAME_MOJOM_JUMBO_H_
#define MOJO_PUBLIC_MOJOM_BASE_SAFE_BASE_NAME_MOJOM_JUMBO_H_
#endif



namespace mojo_base {
namespace mojom {
SafeBaseName::SafeBaseName()
    : path() {}

SafeBaseName::SafeBaseName(
    const ::base::FilePath& path_in)
    : path(std::move(path_in)) {}

SafeBaseName::~SafeBaseName() = default;

void SafeBaseName::WriteIntoTrace(
    perfetto::TracedValue traced_context) const {
  [[maybe_unused]] auto dict = std::move(traced_context).WriteDictionary();
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "path"), this->path,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type const ::base::FilePath&>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
}

bool SafeBaseName::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}


}  // namespace mojom
}  // namespace mojo_base


namespace mojo {


// static
bool StructTraits<::mojo_base::mojom::SafeBaseName::DataView, ::mojo_base::mojom::SafeBaseNamePtr>::Read(
    ::mojo_base::mojom::SafeBaseName::DataView input,
    ::mojo_base::mojom::SafeBaseNamePtr* output) {
  bool success = true;
  ::mojo_base::mojom::SafeBaseNamePtr result(::mojo_base::mojom::SafeBaseName::New());
  
      if (success && !input.ReadPath(&result->path))
        success = false;
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