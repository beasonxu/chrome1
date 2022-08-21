// services/network/public/mojom/address_list.mojom-blink.cc is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#endif

#include "services/network/public/mojom/address_list.mojom-blink.h"

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

#include "services/network/public/mojom/address_list.mojom-params-data.h"
#include "services/network/public/mojom/address_list.mojom-shared-message-ids.h"

#include "services/network/public/mojom/address_list.mojom-blink-import-headers.h"
#include "services/network/public/mojom/address_list.mojom-blink-test-utils.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_ADDRESS_LIST_MOJOM_BLINK_JUMBO_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_ADDRESS_LIST_MOJOM_BLINK_JUMBO_H_
#endif



namespace network {
namespace mojom {
namespace blink {
AddressList::AddressList()
    : addresses(),
      dns_aliases() {}

AddressList::AddressList(
    WTF::Vector<::net::IPEndPoint> addresses_in,
    WTF::Vector<WTF::String> dns_aliases_in)
    : addresses(std::move(addresses_in)),
      dns_aliases(std::move(dns_aliases_in)) {}

AddressList::~AddressList() = default;

void AddressList::WriteIntoTrace(
    perfetto::TracedValue traced_context) const {
  [[maybe_unused]] auto dict = std::move(traced_context).WriteDictionary();
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "addresses"), this->addresses,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type const WTF::Vector<::net::IPEndPoint>&>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "dns_aliases"), this->dns_aliases,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type const WTF::Vector<WTF::String>&>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
}

bool AddressList::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}


}  // namespace blink
}  // namespace mojom
}  // namespace network


namespace mojo {


// static
bool StructTraits<::network::mojom::blink::AddressList::DataView, ::network::mojom::blink::AddressListPtr>::Read(
    ::network::mojom::blink::AddressList::DataView input,
    ::network::mojom::blink::AddressListPtr* output) {
  bool success = true;
  ::network::mojom::blink::AddressListPtr result(::network::mojom::blink::AddressList::New());
  
      if (success && !input.ReadAddresses(&result->addresses))
        success = false;
      if (success && !input.ReadDnsAliases(&result->dns_aliases))
        success = false;
  *output = std::move(result);
  return success;
}

}  // namespace mojo


// Symbols declared in the -test-utils.h header are defined here instead of a
// separate .cc file to save compile time.


namespace network {
namespace mojom {
namespace blink {




}  // namespace blink
}  // namespace mojom
}  // namespace network


#if defined(__clang__)
#pragma clang diagnostic pop
#endif