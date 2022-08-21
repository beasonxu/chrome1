// third_party/blink/public/mojom/user_agent/user_agent_metadata.mojom.cc is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#endif

#include "third_party/blink/public/mojom/user_agent/user_agent_metadata.mojom.h"

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

#include "third_party/blink/public/mojom/user_agent/user_agent_metadata.mojom-params-data.h"
#include "third_party/blink/public/mojom/user_agent/user_agent_metadata.mojom-shared-message-ids.h"

#include "third_party/blink/public/mojom/user_agent/user_agent_metadata.mojom-import-headers.h"
#include "third_party/blink/public/mojom/user_agent/user_agent_metadata.mojom-test-utils.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_USER_AGENT_USER_AGENT_METADATA_MOJOM_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_USER_AGENT_USER_AGENT_METADATA_MOJOM_JUMBO_H_
#endif



namespace blink {
namespace mojom {
UserAgentBrandVersion::UserAgentBrandVersion()
    : brand(),
      version() {}

UserAgentBrandVersion::UserAgentBrandVersion(
    const std::string& brand_in,
    const std::string& version_in)
    : brand(std::move(brand_in)),
      version(std::move(version_in)) {}

UserAgentBrandVersion::~UserAgentBrandVersion() = default;

void UserAgentBrandVersion::WriteIntoTrace(
    perfetto::TracedValue traced_context) const {
  [[maybe_unused]] auto dict = std::move(traced_context).WriteDictionary();
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "brand"), this->brand,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type const std::string&>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "version"), this->version,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type const std::string&>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
}

bool UserAgentBrandVersion::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
UserAgentMetadata::UserAgentMetadata()
    : brand_version_list(),
      brand_full_version_list(),
      full_version(),
      platform(),
      platform_version(),
      architecture(),
      model(),
      mobile(),
      bitness(),
      wow64() {}

UserAgentMetadata::UserAgentMetadata(
    std::vector<::blink::UserAgentBrandVersion> brand_version_list_in,
    std::vector<::blink::UserAgentBrandVersion> brand_full_version_list_in,
    const std::string& full_version_in,
    const std::string& platform_in,
    const std::string& platform_version_in,
    const std::string& architecture_in,
    const std::string& model_in,
    bool mobile_in,
    const std::string& bitness_in,
    bool wow64_in)
    : brand_version_list(std::move(brand_version_list_in)),
      brand_full_version_list(std::move(brand_full_version_list_in)),
      full_version(std::move(full_version_in)),
      platform(std::move(platform_in)),
      platform_version(std::move(platform_version_in)),
      architecture(std::move(architecture_in)),
      model(std::move(model_in)),
      mobile(std::move(mobile_in)),
      bitness(std::move(bitness_in)),
      wow64(std::move(wow64_in)) {}

UserAgentMetadata::~UserAgentMetadata() = default;

void UserAgentMetadata::WriteIntoTrace(
    perfetto::TracedValue traced_context) const {
  [[maybe_unused]] auto dict = std::move(traced_context).WriteDictionary();
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "brand_version_list"), this->brand_version_list,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type const std::vector<::blink::UserAgentBrandVersion>&>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "brand_full_version_list"), this->brand_full_version_list,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type const std::vector<::blink::UserAgentBrandVersion>&>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "full_version"), this->full_version,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type const std::string&>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "platform"), this->platform,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type const std::string&>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "platform_version"), this->platform_version,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type const std::string&>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "architecture"), this->architecture,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type const std::string&>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "model"), this->model,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type const std::string&>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "mobile"), this->mobile,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type bool>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "bitness"), this->bitness,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type const std::string&>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "wow64"), this->wow64,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type bool>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
}

bool UserAgentMetadata::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
UserAgentOverride::UserAgentOverride()
    : ua_string_override(),
      ua_metadata_override() {}

UserAgentOverride::UserAgentOverride(
    const std::string& ua_string_override_in,
    const absl::optional<::blink::UserAgentMetadata>& ua_metadata_override_in)
    : ua_string_override(std::move(ua_string_override_in)),
      ua_metadata_override(std::move(ua_metadata_override_in)) {}

UserAgentOverride::~UserAgentOverride() = default;

void UserAgentOverride::WriteIntoTrace(
    perfetto::TracedValue traced_context) const {
  [[maybe_unused]] auto dict = std::move(traced_context).WriteDictionary();
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "ua_string_override"), this->ua_string_override,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type const std::string&>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "ua_metadata_override"), this->ua_metadata_override,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type const absl::optional<::blink::UserAgentMetadata>&>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
}

bool UserAgentOverride::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}


}  // namespace mojom
}  // namespace blink


namespace mojo {


// static
bool StructTraits<::blink::mojom::UserAgentBrandVersion::DataView, ::blink::mojom::UserAgentBrandVersionPtr>::Read(
    ::blink::mojom::UserAgentBrandVersion::DataView input,
    ::blink::mojom::UserAgentBrandVersionPtr* output) {
  bool success = true;
  ::blink::mojom::UserAgentBrandVersionPtr result(::blink::mojom::UserAgentBrandVersion::New());
  
      if (success && !input.ReadBrand(&result->brand))
        success = false;
      if (success && !input.ReadVersion(&result->version))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::blink::mojom::UserAgentMetadata::DataView, ::blink::mojom::UserAgentMetadataPtr>::Read(
    ::blink::mojom::UserAgentMetadata::DataView input,
    ::blink::mojom::UserAgentMetadataPtr* output) {
  bool success = true;
  ::blink::mojom::UserAgentMetadataPtr result(::blink::mojom::UserAgentMetadata::New());
  
      if (success && !input.ReadBrandVersionList(&result->brand_version_list))
        success = false;
      if (success && !input.ReadBrandFullVersionList(&result->brand_full_version_list))
        success = false;
      if (success && !input.ReadFullVersion(&result->full_version))
        success = false;
      if (success && !input.ReadPlatform(&result->platform))
        success = false;
      if (success && !input.ReadPlatformVersion(&result->platform_version))
        success = false;
      if (success && !input.ReadArchitecture(&result->architecture))
        success = false;
      if (success && !input.ReadModel(&result->model))
        success = false;
      if (success)
        result->mobile = input.mobile();
      if (success && !input.ReadBitness(&result->bitness))
        success = false;
      if (success)
        result->wow64 = input.wow64();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::blink::mojom::UserAgentOverride::DataView, ::blink::mojom::UserAgentOverridePtr>::Read(
    ::blink::mojom::UserAgentOverride::DataView input,
    ::blink::mojom::UserAgentOverridePtr* output) {
  bool success = true;
  ::blink::mojom::UserAgentOverridePtr result(::blink::mojom::UserAgentOverride::New());
  
      if (success && !input.ReadUaStringOverride(&result->ua_string_override))
        success = false;
      if (success && !input.ReadUaMetadataOverride(&result->ua_metadata_override))
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