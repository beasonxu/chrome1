// services/network/public/mojom/network_interface.mojom.cc is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#endif

#include "services/network/public/mojom/network_interface.mojom.h"

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

#include "services/network/public/mojom/network_interface.mojom-params-data.h"
#include "services/network/public/mojom/network_interface.mojom-shared-message-ids.h"

#include "services/network/public/mojom/network_interface.mojom-import-headers.h"
#include "services/network/public/mojom/network_interface.mojom-test-utils.h"


#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_INTERFACE_MOJOM_JUMBO_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_INTERFACE_MOJOM_JUMBO_H_
#endif



namespace network {
namespace mojom {
NetworkInterface::NetworkInterface()
    : name(),
      friendly_name(),
      interface_index(),
      type(),
      address(),
      prefix_length(),
      ip_address_attributes() {}

NetworkInterface::NetworkInterface(
    const std::string& name_in,
    const std::string& friendly_name_in,
    uint32_t interface_index_in,
    ::network::mojom::ConnectionType type_in,
    const ::net::IPAddress& address_in,
    uint32_t prefix_length_in,
    int32_t ip_address_attributes_in)
    : name(std::move(name_in)),
      friendly_name(std::move(friendly_name_in)),
      interface_index(std::move(interface_index_in)),
      type(std::move(type_in)),
      address(std::move(address_in)),
      prefix_length(std::move(prefix_length_in)),
      ip_address_attributes(std::move(ip_address_attributes_in)) {}

NetworkInterface::~NetworkInterface() = default;

void NetworkInterface::WriteIntoTrace(
    perfetto::TracedValue traced_context) const {
  [[maybe_unused]] auto dict = std::move(traced_context).WriteDictionary();
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "name"), this->name,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type const std::string&>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "friendly_name"), this->friendly_name,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type const std::string&>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "interface_index"), this->interface_index,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type uint32_t>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "type"), this->type,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type ::network::mojom::ConnectionType>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "address"), this->address,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type const ::net::IPAddress&>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "prefix_length"), this->prefix_length,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type uint32_t>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "ip_address_attributes"), this->ip_address_attributes,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type int32_t>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
}

bool NetworkInterface::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}


}  // namespace mojom
}  // namespace network


namespace mojo {


// static
bool StructTraits<::network::mojom::NetworkInterface::DataView, ::network::mojom::NetworkInterfacePtr>::Read(
    ::network::mojom::NetworkInterface::DataView input,
    ::network::mojom::NetworkInterfacePtr* output) {
  bool success = true;
  ::network::mojom::NetworkInterfacePtr result(::network::mojom::NetworkInterface::New());
  
      if (success && !input.ReadName(&result->name))
        success = false;
      if (success && !input.ReadFriendlyName(&result->friendly_name))
        success = false;
      if (success)
        result->interface_index = input.interface_index();
      if (success && !input.ReadType(&result->type))
        success = false;
      if (success && !input.ReadAddress(&result->address))
        success = false;
      if (success)
        result->prefix_length = input.prefix_length();
      if (success)
        result->ip_address_attributes = input.ip_address_attributes();
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