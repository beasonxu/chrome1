// third_party/blink/public/mojom/loader/transferrable_url_loader.mojom.cc is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#endif

#include "third_party/blink/public/mojom/loader/transferrable_url_loader.mojom.h"

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

#include "third_party/blink/public/mojom/loader/transferrable_url_loader.mojom-params-data.h"
#include "third_party/blink/public/mojom/loader/transferrable_url_loader.mojom-shared-message-ids.h"

#include "third_party/blink/public/mojom/loader/transferrable_url_loader.mojom-import-headers.h"
#include "third_party/blink/public/mojom/loader/transferrable_url_loader.mojom-test-utils.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_LOADER_TRANSFERRABLE_URL_LOADER_MOJOM_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_LOADER_TRANSFERRABLE_URL_LOADER_MOJOM_JUMBO_H_
#endif



namespace blink {
namespace mojom {
TransferrableURLLoader::TransferrableURLLoader()
    : url(),
      url_loader(),
      url_loader_client(),
      head(),
      body() {}

TransferrableURLLoader::TransferrableURLLoader(
    const ::GURL& url_in,
    ::mojo::PendingRemote<::network::mojom::URLLoader> url_loader_in,
    ::mojo::PendingReceiver<::network::mojom::URLLoaderClient> url_loader_client_in,
    ::network::mojom::URLResponseHeadPtr head_in,
    ::mojo::ScopedDataPipeConsumerHandle body_in)
    : url(std::move(url_in)),
      url_loader(std::move(url_loader_in)),
      url_loader_client(std::move(url_loader_client_in)),
      head(std::move(head_in)),
      body(std::move(body_in)) {}

TransferrableURLLoader::~TransferrableURLLoader() = default;

void TransferrableURLLoader::WriteIntoTrace(
    perfetto::TracedValue traced_context) const {
  [[maybe_unused]] auto dict = std::move(traced_context).WriteDictionary();
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "url"), this->url,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type const ::GURL&>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "url_loader"), this->url_loader,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type ::mojo::PendingRemote<::network::mojom::URLLoader>>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "url_loader_client"), this->url_loader_client,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type ::mojo::PendingReceiver<::network::mojom::URLLoaderClient>>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "head"), this->head,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type ::network::mojom::URLResponseHeadPtr>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "body"), this->body,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type ::mojo::ScopedDataPipeConsumerHandle>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
}

bool TransferrableURLLoader::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}


}  // namespace mojom
}  // namespace blink


namespace mojo {


// static
bool StructTraits<::blink::mojom::TransferrableURLLoader::DataView, ::blink::mojom::TransferrableURLLoaderPtr>::Read(
    ::blink::mojom::TransferrableURLLoader::DataView input,
    ::blink::mojom::TransferrableURLLoaderPtr* output) {
  bool success = true;
  ::blink::mojom::TransferrableURLLoaderPtr result(::blink::mojom::TransferrableURLLoader::New());
  
      if (success && !input.ReadUrl(&result->url))
        success = false;
      if (success) {
        result->url_loader =
            input.TakeUrlLoader<decltype(result->url_loader)>();
      }
      if (success) {
        result->url_loader_client =
            input.TakeUrlLoaderClient<decltype(result->url_loader_client)>();
      }
      if (success && !input.ReadHead(&result->head))
        success = false;
      if (success)
        result->body = input.TakeBody();
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