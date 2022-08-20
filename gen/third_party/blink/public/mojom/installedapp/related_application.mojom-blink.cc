// third_party/blink/public/mojom/installedapp/related_application.mojom-blink.cc is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#endif

#include "third_party/blink/public/mojom/installedapp/related_application.mojom-blink.h"

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

#include "third_party/blink/public/mojom/installedapp/related_application.mojom-params-data.h"
#include "third_party/blink/public/mojom/installedapp/related_application.mojom-shared-message-ids.h"

#include "third_party/blink/public/mojom/installedapp/related_application.mojom-blink-import-headers.h"
#include "third_party/blink/public/mojom/installedapp/related_application.mojom-blink-test-utils.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_INSTALLEDAPP_RELATED_APPLICATION_MOJOM_BLINK_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_INSTALLEDAPP_RELATED_APPLICATION_MOJOM_BLINK_JUMBO_H_
#endif



namespace blink {
namespace mojom {
namespace blink {
RelatedApplication::RelatedApplication()
    : platform(),
      url(),
      id(),
      version() {}

RelatedApplication::RelatedApplication(
    const WTF::String& platform_in,
    const WTF::String& url_in,
    const WTF::String& id_in,
    const WTF::String& version_in)
    : platform(std::move(platform_in)),
      url(std::move(url_in)),
      id(std::move(id_in)),
      version(std::move(version_in)) {}

RelatedApplication::~RelatedApplication() = default;

void RelatedApplication::WriteIntoTrace(
    perfetto::TracedValue traced_context) const {
  [[maybe_unused]] auto dict = std::move(traced_context).WriteDictionary();
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "platform"), this->platform,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type const WTF::String&>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "url"), this->url,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type const WTF::String&>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "id"), this->id,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type const WTF::String&>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "version"), this->version,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type const WTF::String&>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
}

bool RelatedApplication::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}


}  // namespace blink
}  // namespace mojom
}  // namespace blink


namespace mojo {


// static
bool StructTraits<::blink::mojom::blink::RelatedApplication::DataView, ::blink::mojom::blink::RelatedApplicationPtr>::Read(
    ::blink::mojom::blink::RelatedApplication::DataView input,
    ::blink::mojom::blink::RelatedApplicationPtr* output) {
  bool success = true;
  ::blink::mojom::blink::RelatedApplicationPtr result(::blink::mojom::blink::RelatedApplication::New());
  
      if (success && !input.ReadPlatform(&result->platform))
        success = false;
      if (success && !input.ReadUrl(&result->url))
        success = false;
      if (success && !input.ReadId(&result->id))
        success = false;
      if (success && !input.ReadVersion(&result->version))
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