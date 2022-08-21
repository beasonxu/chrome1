// services/network/public/mojom/network_param.mojom.cc is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#endif

#include "services/network/public/mojom/network_param.mojom.h"

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

#include "services/network/public/mojom/network_param.mojom-params-data.h"
#include "services/network/public/mojom/network_param.mojom-shared-message-ids.h"

#include "services/network/public/mojom/network_param.mojom-import-headers.h"
#include "services/network/public/mojom/network_param.mojom-test-utils.h"


#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_PARAM_MOJOM_JUMBO_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_PARAM_MOJOM_JUMBO_H_
#endif



namespace network {
namespace mojom {
AuthChallengeInfo::AuthChallengeInfo()
    : is_proxy(),
      challenger(),
      scheme(),
      realm(),
      challenge(),
      path() {}

AuthChallengeInfo::AuthChallengeInfo(
    bool is_proxy_in,
    const ::url::SchemeHostPort& challenger_in,
    const std::string& scheme_in,
    const std::string& realm_in,
    const std::string& challenge_in,
    const std::string& path_in)
    : is_proxy(std::move(is_proxy_in)),
      challenger(std::move(challenger_in)),
      scheme(std::move(scheme_in)),
      realm(std::move(realm_in)),
      challenge(std::move(challenge_in)),
      path(std::move(path_in)) {}

AuthChallengeInfo::~AuthChallengeInfo() = default;

void AuthChallengeInfo::WriteIntoTrace(
    perfetto::TracedValue traced_context) const {
  [[maybe_unused]] auto dict = std::move(traced_context).WriteDictionary();
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "is_proxy"), this->is_proxy,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type bool>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "challenger"), this->challenger,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type const ::url::SchemeHostPort&>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "scheme"), this->scheme,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type const std::string&>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "realm"), this->realm,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type const std::string&>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "challenge"), this->challenge,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type const std::string&>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "path"), this->path,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type const std::string&>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
}

bool AuthChallengeInfo::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
HttpVersion::HttpVersion()
    : major_value(),
      minor_value() {}

HttpVersion::HttpVersion(
    uint16_t major_value_in,
    uint16_t minor_value_in)
    : major_value(std::move(major_value_in)),
      minor_value(std::move(minor_value_in)) {}

HttpVersion::~HttpVersion() = default;

void HttpVersion::WriteIntoTrace(
    perfetto::TracedValue traced_context) const {
  [[maybe_unused]] auto dict = std::move(traced_context).WriteDictionary();
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "major_value"), this->major_value,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type uint16_t>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "minor_value"), this->minor_value,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type uint16_t>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
}

bool HttpVersion::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
ResolveErrorInfo::ResolveErrorInfo()
    : error(),
      is_secure_network_error(false) {}

ResolveErrorInfo::ResolveErrorInfo(
    int32_t error_in,
    bool is_secure_network_error_in)
    : error(std::move(error_in)),
      is_secure_network_error(std::move(is_secure_network_error_in)) {}

ResolveErrorInfo::~ResolveErrorInfo() = default;

void ResolveErrorInfo::WriteIntoTrace(
    perfetto::TracedValue traced_context) const {
  [[maybe_unused]] auto dict = std::move(traced_context).WriteDictionary();
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "error"), this->error,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type int32_t>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "is_secure_network_error"), this->is_secure_network_error,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type bool>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
}

bool ResolveErrorInfo::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}


}  // namespace mojom
}  // namespace network


namespace mojo {


// static
bool StructTraits<::network::mojom::AuthChallengeInfo::DataView, ::network::mojom::AuthChallengeInfoPtr>::Read(
    ::network::mojom::AuthChallengeInfo::DataView input,
    ::network::mojom::AuthChallengeInfoPtr* output) {
  bool success = true;
  ::network::mojom::AuthChallengeInfoPtr result(::network::mojom::AuthChallengeInfo::New());
  
      if (success)
        result->is_proxy = input.is_proxy();
      if (success && !input.ReadChallenger(&result->challenger))
        success = false;
      if (success && !input.ReadScheme(&result->scheme))
        success = false;
      if (success && !input.ReadRealm(&result->realm))
        success = false;
      if (success && !input.ReadChallenge(&result->challenge))
        success = false;
      if (success && !input.ReadPath(&result->path))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::network::mojom::HttpVersion::DataView, ::network::mojom::HttpVersionPtr>::Read(
    ::network::mojom::HttpVersion::DataView input,
    ::network::mojom::HttpVersionPtr* output) {
  bool success = true;
  ::network::mojom::HttpVersionPtr result(::network::mojom::HttpVersion::New());
  
      if (success)
        result->major_value = input.major_value();
      if (success)
        result->minor_value = input.minor_value();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::network::mojom::ResolveErrorInfo::DataView, ::network::mojom::ResolveErrorInfoPtr>::Read(
    ::network::mojom::ResolveErrorInfo::DataView input,
    ::network::mojom::ResolveErrorInfoPtr* output) {
  bool success = true;
  ::network::mojom::ResolveErrorInfoPtr result(::network::mojom::ResolveErrorInfo::New());
  
      if (success)
        result->error = input.error();
      if (success)
        result->is_secure_network_error = input.is_secure_network_error();
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