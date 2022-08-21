// services/viz/public/mojom/compositing/compositing_mode_watcher.mojom-blink.cc is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#endif

#include "services/viz/public/mojom/compositing/compositing_mode_watcher.mojom-blink.h"

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

#include "services/viz/public/mojom/compositing/compositing_mode_watcher.mojom-params-data.h"
#include "services/viz/public/mojom/compositing/compositing_mode_watcher.mojom-shared-message-ids.h"

#include "services/viz/public/mojom/compositing/compositing_mode_watcher.mojom-blink-import-headers.h"
#include "services/viz/public/mojom/compositing/compositing_mode_watcher.mojom-blink-test-utils.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef SERVICES_VIZ_PUBLIC_MOJOM_COMPOSITING_COMPOSITING_MODE_WATCHER_MOJOM_BLINK_JUMBO_H_
#define SERVICES_VIZ_PUBLIC_MOJOM_COMPOSITING_COMPOSITING_MODE_WATCHER_MOJOM_BLINK_JUMBO_H_
#endif



namespace viz {
namespace mojom {
namespace blink {
const char CompositingModeWatcher::Name_[] = "viz.mojom.CompositingModeWatcher";

CompositingModeWatcher::IPCStableHashFunction CompositingModeWatcher::MessageToMethodInfo_(mojo::Message& message) {
#if !BUILDFLAG(IS_FUCHSIA)
  switch (message.name()) {
    case internal::kCompositingModeWatcher_CompositingModeFallbackToSoftware_Name: {
      return &CompositingModeWatcher::CompositingModeFallbackToSoftware_Sym::IPCStableHash;
    }
  }
#endif  // !BUILDFLAG(IS_FUCHSIA)
  return nullptr;
}


const char* CompositingModeWatcher::MessageToMethodName_(mojo::Message& message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  bool is_response = message.has_flag(mojo::Message::kFlagIsResponse);
  if (!is_response) {
    switch (message.name()) {
      case internal::kCompositingModeWatcher_CompositingModeFallbackToSoftware_Name:
            return "Receive viz::mojom::CompositingModeWatcher::CompositingModeFallbackToSoftware";
    }
  } else {
    switch (message.name()) {
      case internal::kCompositingModeWatcher_CompositingModeFallbackToSoftware_Name:
            return "Receive reply viz::mojom::CompositingModeWatcher::CompositingModeFallbackToSoftware";
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
uint32_t CompositingModeWatcher::CompositingModeFallbackToSoftware_Sym::IPCStableHash() {
  // This method's address is used for indetifiying the mojo method name after
  // symbolization. So each IPCStableHash should have a unique address.
  // We cannot use NO_CODE_FOLDING() here - it relies on the uniqueness of
  // __LINE__ value, which is not unique accross different mojo modules.
  // The code below is very similar to NO_CODE_FOLDING, but it uses a unique
  // hash instead of __LINE__.
  constexpr uint32_t kHash = base::MD5Hash32Constexpr(
          "(Impl)viz::mojom::CompositingModeWatcher::CompositingModeFallbackToSoftware");
  const uint32_t hash = kHash;
  base::debug::Alias(&hash);
  return hash;
}
# endif // !BUILDFLAG(IS_FUCHSIA)

CompositingModeWatcherProxy::CompositingModeWatcherProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void CompositingModeWatcherProxy::CompositingModeFallbackToSoftware(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "Send viz::mojom::CompositingModeWatcher::CompositingModeFallbackToSoftware");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  const bool kAllowInterrupt = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0) |
      ((kAllowInterrupt) ? 0 : mojo::Message::kFlagNoInterrupt);
  
  mojo::Message message(
      internal::kCompositingModeWatcher_CompositingModeFallbackToSoftware_Name, kFlags, 0, 0, nullptr);
  mojo::internal::MessageFragment<
      ::viz::mojom::internal::CompositingModeWatcher_CompositingModeFallbackToSoftware_Params_Data> params(
          message);
  params.Allocate();

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(CompositingModeWatcher::Name_);
  message.set_method_name("CompositingModeFallbackToSoftware");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ::mojo::internal::SendMojoMessage(*receiver_, message);
}

// static
bool CompositingModeWatcherStubDispatch::Accept(
    CompositingModeWatcher* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kCompositingModeWatcher_CompositingModeFallbackToSoftware_Name: {

      DCHECK(message->is_serialized());
      internal::CompositingModeWatcher_CompositingModeFallbackToSoftware_Params_Data* params =
          reinterpret_cast<internal::CompositingModeWatcher_CompositingModeFallbackToSoftware_Params_Data*>(
              message->mutable_payload());
      
      bool success = true;
      CompositingModeWatcher_CompositingModeFallbackToSoftware_ParamsDataView input_data_view(params, message);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            CompositingModeWatcher::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->CompositingModeFallbackToSoftware();
      return true;
    }
  }
  return false;
}

// static
bool CompositingModeWatcherStubDispatch::AcceptWithResponder(
    CompositingModeWatcher* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  [[maybe_unused]] const bool message_is_sync =
      message->has_flag(mojo::Message::kFlagIsSync);
  [[maybe_unused]] const uint64_t request_id = message->request_id();
  switch (message->header()->name) {
    case internal::kCompositingModeWatcher_CompositingModeFallbackToSoftware_Name: {
      break;
    }
  }
  return false;
}


static const mojo::internal::GenericValidationInfo kCompositingModeWatcherValidationInfo[] = {
    {&internal::CompositingModeWatcher_CompositingModeFallbackToSoftware_Params_Data::Validate,
     nullptr /* no response */},
};

bool CompositingModeWatcherRequestValidator::Accept(mojo::Message* message) {
  const char* name = ::viz::mojom::blink::CompositingModeWatcher::Name_;
  return mojo::internal::ValidateRequestGenericPacked(message, name, kCompositingModeWatcherValidationInfo);
}

const char CompositingModeReporter::Name_[] = "viz.mojom.CompositingModeReporter";

CompositingModeReporter::IPCStableHashFunction CompositingModeReporter::MessageToMethodInfo_(mojo::Message& message) {
#if !BUILDFLAG(IS_FUCHSIA)
  switch (message.name()) {
    case internal::kCompositingModeReporter_AddCompositingModeWatcher_Name: {
      return &CompositingModeReporter::AddCompositingModeWatcher_Sym::IPCStableHash;
    }
  }
#endif  // !BUILDFLAG(IS_FUCHSIA)
  return nullptr;
}


const char* CompositingModeReporter::MessageToMethodName_(mojo::Message& message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  bool is_response = message.has_flag(mojo::Message::kFlagIsResponse);
  if (!is_response) {
    switch (message.name()) {
      case internal::kCompositingModeReporter_AddCompositingModeWatcher_Name:
            return "Receive viz::mojom::CompositingModeReporter::AddCompositingModeWatcher";
    }
  } else {
    switch (message.name()) {
      case internal::kCompositingModeReporter_AddCompositingModeWatcher_Name:
            return "Receive reply viz::mojom::CompositingModeReporter::AddCompositingModeWatcher";
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
uint32_t CompositingModeReporter::AddCompositingModeWatcher_Sym::IPCStableHash() {
  // This method's address is used for indetifiying the mojo method name after
  // symbolization. So each IPCStableHash should have a unique address.
  // We cannot use NO_CODE_FOLDING() here - it relies on the uniqueness of
  // __LINE__ value, which is not unique accross different mojo modules.
  // The code below is very similar to NO_CODE_FOLDING, but it uses a unique
  // hash instead of __LINE__.
  constexpr uint32_t kHash = base::MD5Hash32Constexpr(
          "(Impl)viz::mojom::CompositingModeReporter::AddCompositingModeWatcher");
  const uint32_t hash = kHash;
  base::debug::Alias(&hash);
  return hash;
}
# endif // !BUILDFLAG(IS_FUCHSIA)

CompositingModeReporterProxy::CompositingModeReporterProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void CompositingModeReporterProxy::AddCompositingModeWatcher(
    ::mojo::PendingRemote<CompositingModeWatcher> in_watcher) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1(
    "mojom", "Send viz::mojom::CompositingModeReporter::AddCompositingModeWatcher", "input_parameters",
    [&](perfetto::TracedValue context){
      auto dict = std::move(context).WriteDictionary();
      perfetto::WriteIntoTracedValueWithFallback(
           dict.AddItem("watcher"), in_watcher,
                        "<value of type ::mojo::PendingRemote<CompositingModeWatcher>>");
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
      internal::kCompositingModeReporter_AddCompositingModeWatcher_Name, kFlags, 0, 0, nullptr);
  mojo::internal::MessageFragment<
      ::viz::mojom::internal::CompositingModeReporter_AddCompositingModeWatcher_Params_Data> params(
          message);
  params.Allocate();
  mojo::internal::Serialize<mojo::InterfacePtrDataView<::viz::mojom::CompositingModeWatcherInterfaceBase>>(
      in_watcher, &params->watcher, &params.message());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->watcher),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid watcher in CompositingModeReporter.AddCompositingModeWatcher request");

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(CompositingModeReporter::Name_);
  message.set_method_name("AddCompositingModeWatcher");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ::mojo::internal::SendMojoMessage(*receiver_, message);
}

// static
bool CompositingModeReporterStubDispatch::Accept(
    CompositingModeReporter* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kCompositingModeReporter_AddCompositingModeWatcher_Name: {

      DCHECK(message->is_serialized());
      internal::CompositingModeReporter_AddCompositingModeWatcher_Params_Data* params =
          reinterpret_cast<internal::CompositingModeReporter_AddCompositingModeWatcher_Params_Data*>(
              message->mutable_payload());
      
      bool success = true;
      ::mojo::PendingRemote<CompositingModeWatcher> p_watcher{};
      CompositingModeReporter_AddCompositingModeWatcher_ParamsDataView input_data_view(params, message);
      
      if (success) {
        p_watcher =
            input_data_view.TakeWatcher<decltype(p_watcher)>();
      }
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            CompositingModeReporter::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->AddCompositingModeWatcher(
std::move(p_watcher));
      return true;
    }
  }
  return false;
}

// static
bool CompositingModeReporterStubDispatch::AcceptWithResponder(
    CompositingModeReporter* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  [[maybe_unused]] const bool message_is_sync =
      message->has_flag(mojo::Message::kFlagIsSync);
  [[maybe_unused]] const uint64_t request_id = message->request_id();
  switch (message->header()->name) {
    case internal::kCompositingModeReporter_AddCompositingModeWatcher_Name: {
      break;
    }
  }
  return false;
}


static const mojo::internal::GenericValidationInfo kCompositingModeReporterValidationInfo[] = {
    {&internal::CompositingModeReporter_AddCompositingModeWatcher_Params_Data::Validate,
     nullptr /* no response */},
};

bool CompositingModeReporterRequestValidator::Accept(mojo::Message* message) {
  const char* name = ::viz::mojom::blink::CompositingModeReporter::Name_;
  return mojo::internal::ValidateRequestGenericPacked(message, name, kCompositingModeReporterValidationInfo);
}



}  // namespace blink
}  // namespace mojom
}  // namespace viz


namespace mojo {

}  // namespace mojo


// Symbols declared in the -test-utils.h header are defined here instead of a
// separate .cc file to save compile time.


namespace viz {
namespace mojom {
namespace blink {


void CompositingModeWatcherInterceptorForTesting::CompositingModeFallbackToSoftware() {
  GetForwardingInterface()->CompositingModeFallbackToSoftware();
}
CompositingModeWatcherAsyncWaiter::CompositingModeWatcherAsyncWaiter(
    CompositingModeWatcher* proxy) : proxy_(proxy) {}

CompositingModeWatcherAsyncWaiter::~CompositingModeWatcherAsyncWaiter() = default;




void CompositingModeReporterInterceptorForTesting::AddCompositingModeWatcher(::mojo::PendingRemote<CompositingModeWatcher> watcher) {
  GetForwardingInterface()->AddCompositingModeWatcher(std::move(watcher));
}
CompositingModeReporterAsyncWaiter::CompositingModeReporterAsyncWaiter(
    CompositingModeReporter* proxy) : proxy_(proxy) {}

CompositingModeReporterAsyncWaiter::~CompositingModeReporterAsyncWaiter() = default;






}  // namespace blink
}  // namespace mojom
}  // namespace viz


#if defined(__clang__)
#pragma clang diagnostic pop
#endif