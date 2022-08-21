// services/viz/privileged/mojom/compositing/begin_frame_observer.mojom.cc is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#endif

#include "services/viz/privileged/mojom/compositing/begin_frame_observer.mojom.h"

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

#include "services/viz/privileged/mojom/compositing/begin_frame_observer.mojom-params-data.h"
#include "services/viz/privileged/mojom/compositing/begin_frame_observer.mojom-shared-message-ids.h"

#include "services/viz/privileged/mojom/compositing/begin_frame_observer.mojom-import-headers.h"
#include "services/viz/privileged/mojom/compositing/begin_frame_observer.mojom-test-utils.h"


#ifndef SERVICES_VIZ_PRIVILEGED_MOJOM_COMPOSITING_BEGIN_FRAME_OBSERVER_MOJOM_JUMBO_H_
#define SERVICES_VIZ_PRIVILEGED_MOJOM_COMPOSITING_BEGIN_FRAME_OBSERVER_MOJOM_JUMBO_H_
#include "services/viz/public/cpp/compositing/begin_frame_args_mojom_traits.h"
#endif



namespace viz {
namespace mojom {
const char BeginFrameObserver::Name_[] = "viz.mojom.BeginFrameObserver";

BeginFrameObserver::IPCStableHashFunction BeginFrameObserver::MessageToMethodInfo_(mojo::Message& message) {
#if !BUILDFLAG(IS_FUCHSIA)
  switch (message.name()) {
    case internal::kBeginFrameObserver_OnStandaloneBeginFrame_Name: {
      return &BeginFrameObserver::OnStandaloneBeginFrame_Sym::IPCStableHash;
    }
  }
#endif  // !BUILDFLAG(IS_FUCHSIA)
  return nullptr;
}


const char* BeginFrameObserver::MessageToMethodName_(mojo::Message& message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  bool is_response = message.has_flag(mojo::Message::kFlagIsResponse);
  if (!is_response) {
    switch (message.name()) {
      case internal::kBeginFrameObserver_OnStandaloneBeginFrame_Name:
            return "Receive viz::mojom::BeginFrameObserver::OnStandaloneBeginFrame";
    }
  } else {
    switch (message.name()) {
      case internal::kBeginFrameObserver_OnStandaloneBeginFrame_Name:
            return "Receive reply viz::mojom::BeginFrameObserver::OnStandaloneBeginFrame";
    }
  }
  return "Receive unknown mojo message";
#else
  bool is_response = message.has_flag(mojo::Message::kFlagIsResponse);
  if (is_response) {
    return "Receive mojo reply";
  } else {
    return "Receive mojo message";
  }
#endif // BUILDFLAG(MOJO_TRACE_ENABLED)
}

#if !BUILDFLAG(IS_FUCHSIA)
uint32_t BeginFrameObserver::OnStandaloneBeginFrame_Sym::IPCStableHash() {
  // This method's address is used for indetifiying the mojo method name after
  // symbolization. So each IPCStableHash should have a unique address.
  // We cannot use NO_CODE_FOLDING() here - it relies on the uniqueness of
  // __LINE__ value, which is not unique accross different mojo modules.
  // The code below is very similar to NO_CODE_FOLDING, but it uses a unique
  // hash instead of __LINE__.
  constexpr uint32_t kHash = base::MD5Hash32Constexpr(
          "(Impl)viz::mojom::BeginFrameObserver::OnStandaloneBeginFrame");
  const uint32_t hash = kHash;
  base::debug::Alias(&hash);
  return hash;
}
# endif // !BUILDFLAG(IS_FUCHSIA)

BeginFrameObserverProxy::BeginFrameObserverProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void BeginFrameObserverProxy::OnStandaloneBeginFrame(
    const ::viz::BeginFrameArgs& in_args) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1(
    "mojom", "Send viz::mojom::BeginFrameObserver::OnStandaloneBeginFrame", "input_parameters",
    [&](perfetto::TracedValue context){
      auto dict = std::move(context).WriteDictionary();
      perfetto::WriteIntoTracedValueWithFallback(
           dict.AddItem("args"), in_args,
                        "<value of type const ::viz::BeginFrameArgs&>");
   });
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  const bool kAllowInterrupt = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0) |
      ((kAllowInterrupt) ? 0 : mojo::Message::kFlagNoInterrupt);
  
  mojo::Message message(
      internal::kBeginFrameObserver_OnStandaloneBeginFrame_Name, kFlags, 0, 0, nullptr);
  mojo::internal::MessageFragment<
      ::viz::mojom::internal::BeginFrameObserver_OnStandaloneBeginFrame_Params_Data> params(
          message);
  params.Allocate();
  mojo::internal::MessageFragment<
      typename decltype(params->args)::BaseType> args_fragment(
          params.message());
  mojo::internal::Serialize<::viz::mojom::BeginFrameArgsDataView>(
      in_args, args_fragment);
  params->args.Set(
      args_fragment.is_null() ? nullptr : args_fragment.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->args.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null args in BeginFrameObserver.OnStandaloneBeginFrame request");

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(BeginFrameObserver::Name_);
  message.set_method_name("OnStandaloneBeginFrame");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ::mojo::internal::SendMojoMessage(*receiver_, message);
}

// static
bool BeginFrameObserverStubDispatch::Accept(
    BeginFrameObserver* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kBeginFrameObserver_OnStandaloneBeginFrame_Name: {

      DCHECK(message->is_serialized());
      internal::BeginFrameObserver_OnStandaloneBeginFrame_Params_Data* params =
          reinterpret_cast<internal::BeginFrameObserver_OnStandaloneBeginFrame_Params_Data*>(
              message->mutable_payload());
      
      bool success = true;
      ::viz::BeginFrameArgs p_args{};
      BeginFrameObserver_OnStandaloneBeginFrame_ParamsDataView input_data_view(params, message);
      
      if (success && !input_data_view.ReadArgs(&p_args))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            BeginFrameObserver::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnStandaloneBeginFrame(
std::move(p_args));
      return true;
    }
  }
  return false;
}

// static
bool BeginFrameObserverStubDispatch::AcceptWithResponder(
    BeginFrameObserver* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  [[maybe_unused]] const bool message_is_sync =
      message->has_flag(mojo::Message::kFlagIsSync);
  [[maybe_unused]] const uint64_t request_id = message->request_id();
  switch (message->header()->name) {
    case internal::kBeginFrameObserver_OnStandaloneBeginFrame_Name: {
      break;
    }
  }
  return false;
}


static const mojo::internal::GenericValidationInfo kBeginFrameObserverValidationInfo[] = {
    {&internal::BeginFrameObserver_OnStandaloneBeginFrame_Params_Data::Validate,
     nullptr /* no response */},
};

bool BeginFrameObserverRequestValidator::Accept(mojo::Message* message) {
  const char* name = ::viz::mojom::BeginFrameObserver::Name_;
  return mojo::internal::ValidateRequestGenericPacked(message, name, kBeginFrameObserverValidationInfo);
}



}  // namespace mojom
}  // namespace viz


namespace mojo {

}  // namespace mojo


// Symbols declared in the -test-utils.h header are defined here instead of a
// separate .cc file to save compile time.


namespace viz {
namespace mojom {


void BeginFrameObserverInterceptorForTesting::OnStandaloneBeginFrame(const ::viz::BeginFrameArgs& args) {
  GetForwardingInterface()->OnStandaloneBeginFrame(std::move(args));
}
BeginFrameObserverAsyncWaiter::BeginFrameObserverAsyncWaiter(
    BeginFrameObserver* proxy) : proxy_(proxy) {}

BeginFrameObserverAsyncWaiter::~BeginFrameObserverAsyncWaiter() = default;






}  // namespace mojom
}  // namespace viz


#if defined(__clang__)
#pragma clang diagnostic pop
#endif