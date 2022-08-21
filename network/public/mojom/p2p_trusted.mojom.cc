// services/network/public/mojom/p2p_trusted.mojom.cc is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#endif

#include "services/network/public/mojom/p2p_trusted.mojom.h"

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

#include "services/network/public/mojom/p2p_trusted.mojom-params-data.h"
#include "services/network/public/mojom/p2p_trusted.mojom-shared-message-ids.h"

#include "services/network/public/mojom/p2p_trusted.mojom-import-headers.h"
#include "services/network/public/mojom/p2p_trusted.mojom-test-utils.h"


#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_P2P_TRUSTED_MOJOM_JUMBO_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_P2P_TRUSTED_MOJOM_JUMBO_H_
#endif



namespace network {
namespace mojom {
const char P2PTrustedSocketManagerClient::Name_[] = "network.mojom.P2PTrustedSocketManagerClient";

P2PTrustedSocketManagerClient::IPCStableHashFunction P2PTrustedSocketManagerClient::MessageToMethodInfo_(mojo::Message& message) {
#if !BUILDFLAG(IS_FUCHSIA)
  switch (message.name()) {
    case internal::kP2PTrustedSocketManagerClient_InvalidSocketPortRangeRequested_Name: {
      return &P2PTrustedSocketManagerClient::InvalidSocketPortRangeRequested_Sym::IPCStableHash;
    }
    case internal::kP2PTrustedSocketManagerClient_DumpPacket_Name: {
      return &P2PTrustedSocketManagerClient::DumpPacket_Sym::IPCStableHash;
    }
  }
#endif  // !BUILDFLAG(IS_FUCHSIA)
  return nullptr;
}


const char* P2PTrustedSocketManagerClient::MessageToMethodName_(mojo::Message& message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  bool is_response = message.has_flag(mojo::Message::kFlagIsResponse);
  if (!is_response) {
    switch (message.name()) {
      case internal::kP2PTrustedSocketManagerClient_InvalidSocketPortRangeRequested_Name:
            return "Receive network::mojom::P2PTrustedSocketManagerClient::InvalidSocketPortRangeRequested";
      case internal::kP2PTrustedSocketManagerClient_DumpPacket_Name:
            return "Receive network::mojom::P2PTrustedSocketManagerClient::DumpPacket";
    }
  } else {
    switch (message.name()) {
      case internal::kP2PTrustedSocketManagerClient_InvalidSocketPortRangeRequested_Name:
            return "Receive reply network::mojom::P2PTrustedSocketManagerClient::InvalidSocketPortRangeRequested";
      case internal::kP2PTrustedSocketManagerClient_DumpPacket_Name:
            return "Receive reply network::mojom::P2PTrustedSocketManagerClient::DumpPacket";
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
uint32_t P2PTrustedSocketManagerClient::InvalidSocketPortRangeRequested_Sym::IPCStableHash() {
  // This method's address is used for indetifiying the mojo method name after
  // symbolization. So each IPCStableHash should have a unique address.
  // We cannot use NO_CODE_FOLDING() here - it relies on the uniqueness of
  // __LINE__ value, which is not unique accross different mojo modules.
  // The code below is very similar to NO_CODE_FOLDING, but it uses a unique
  // hash instead of __LINE__.
  constexpr uint32_t kHash = base::MD5Hash32Constexpr(
          "(Impl)network::mojom::P2PTrustedSocketManagerClient::InvalidSocketPortRangeRequested");
  const uint32_t hash = kHash;
  base::debug::Alias(&hash);
  return hash;
}
uint32_t P2PTrustedSocketManagerClient::DumpPacket_Sym::IPCStableHash() {
  // This method's address is used for indetifiying the mojo method name after
  // symbolization. So each IPCStableHash should have a unique address.
  // We cannot use NO_CODE_FOLDING() here - it relies on the uniqueness of
  // __LINE__ value, which is not unique accross different mojo modules.
  // The code below is very similar to NO_CODE_FOLDING, but it uses a unique
  // hash instead of __LINE__.
  constexpr uint32_t kHash = base::MD5Hash32Constexpr(
          "(Impl)network::mojom::P2PTrustedSocketManagerClient::DumpPacket");
  const uint32_t hash = kHash;
  base::debug::Alias(&hash);
  return hash;
}
# endif // !BUILDFLAG(IS_FUCHSIA)

P2PTrustedSocketManagerClientProxy::P2PTrustedSocketManagerClientProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void P2PTrustedSocketManagerClientProxy::InvalidSocketPortRangeRequested(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "Send network::mojom::P2PTrustedSocketManagerClient::InvalidSocketPortRangeRequested");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  const bool kAllowInterrupt = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0) |
      ((kAllowInterrupt) ? 0 : mojo::Message::kFlagNoInterrupt);
  
  mojo::Message message(
      internal::kP2PTrustedSocketManagerClient_InvalidSocketPortRangeRequested_Name, kFlags, 0, 0, nullptr);
  mojo::internal::MessageFragment<
      ::network::mojom::internal::P2PTrustedSocketManagerClient_InvalidSocketPortRangeRequested_Params_Data> params(
          message);
  params.Allocate();

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(P2PTrustedSocketManagerClient::Name_);
  message.set_method_name("InvalidSocketPortRangeRequested");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ::mojo::internal::SendMojoMessage(*receiver_, message);
}

void P2PTrustedSocketManagerClientProxy::DumpPacket(
    const std::vector<uint8_t>& in_packet_header, uint64_t in_packet_length, bool in_incoming) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1(
    "mojom", "Send network::mojom::P2PTrustedSocketManagerClient::DumpPacket", "input_parameters",
    [&](perfetto::TracedValue context){
      auto dict = std::move(context).WriteDictionary();
      perfetto::WriteIntoTracedValueWithFallback(
           dict.AddItem("packet_header"), in_packet_header,
                        "<value of type const std::vector<uint8_t>&>");
      perfetto::WriteIntoTracedValueWithFallback(
           dict.AddItem("packet_length"), in_packet_length,
                        "<value of type uint64_t>");
      perfetto::WriteIntoTracedValueWithFallback(
           dict.AddItem("incoming"), in_incoming,
                        "<value of type bool>");
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
      internal::kP2PTrustedSocketManagerClient_DumpPacket_Name, kFlags, 0, 0, nullptr);
  mojo::internal::MessageFragment<
      ::network::mojom::internal::P2PTrustedSocketManagerClient_DumpPacket_Params_Data> params(
          message);
  params.Allocate();
  mojo::internal::MessageFragment<
      typename decltype(params->packet_header)::BaseType>
      packet_header_fragment(params.message());
  const mojo::internal::ContainerValidateParams packet_header_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
      in_packet_header, packet_header_fragment, &packet_header_validate_params);
  params->packet_header.Set(
      packet_header_fragment.is_null() ? nullptr : packet_header_fragment.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->packet_header.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null packet_header in P2PTrustedSocketManagerClient.DumpPacket request");
  params->packet_length = in_packet_length;
  params->incoming = in_incoming;

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(P2PTrustedSocketManagerClient::Name_);
  message.set_method_name("DumpPacket");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ::mojo::internal::SendMojoMessage(*receiver_, message);
}

// static
bool P2PTrustedSocketManagerClientStubDispatch::Accept(
    P2PTrustedSocketManagerClient* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kP2PTrustedSocketManagerClient_InvalidSocketPortRangeRequested_Name: {

      DCHECK(message->is_serialized());
      internal::P2PTrustedSocketManagerClient_InvalidSocketPortRangeRequested_Params_Data* params =
          reinterpret_cast<internal::P2PTrustedSocketManagerClient_InvalidSocketPortRangeRequested_Params_Data*>(
              message->mutable_payload());
      
      bool success = true;
      P2PTrustedSocketManagerClient_InvalidSocketPortRangeRequested_ParamsDataView input_data_view(params, message);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            P2PTrustedSocketManagerClient::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->InvalidSocketPortRangeRequested();
      return true;
    }
    case internal::kP2PTrustedSocketManagerClient_DumpPacket_Name: {

      DCHECK(message->is_serialized());
      internal::P2PTrustedSocketManagerClient_DumpPacket_Params_Data* params =
          reinterpret_cast<internal::P2PTrustedSocketManagerClient_DumpPacket_Params_Data*>(
              message->mutable_payload());
      
      bool success = true;
      std::vector<uint8_t> p_packet_header{};
      uint64_t p_packet_length{};
      bool p_incoming{};
      P2PTrustedSocketManagerClient_DumpPacket_ParamsDataView input_data_view(params, message);
      
      if (success && !input_data_view.ReadPacketHeader(&p_packet_header))
        success = false;
      if (success)
        p_packet_length = input_data_view.packet_length();
      if (success)
        p_incoming = input_data_view.incoming();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            P2PTrustedSocketManagerClient::Name_, 1, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->DumpPacket(
std::move(p_packet_header), 
std::move(p_packet_length), 
std::move(p_incoming));
      return true;
    }
  }
  return false;
}

// static
bool P2PTrustedSocketManagerClientStubDispatch::AcceptWithResponder(
    P2PTrustedSocketManagerClient* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  [[maybe_unused]] const bool message_is_sync =
      message->has_flag(mojo::Message::kFlagIsSync);
  [[maybe_unused]] const uint64_t request_id = message->request_id();
  switch (message->header()->name) {
    case internal::kP2PTrustedSocketManagerClient_InvalidSocketPortRangeRequested_Name: {
      break;
    }
    case internal::kP2PTrustedSocketManagerClient_DumpPacket_Name: {
      break;
    }
  }
  return false;
}


static const mojo::internal::GenericValidationInfo kP2PTrustedSocketManagerClientValidationInfo[] = {
    {&internal::P2PTrustedSocketManagerClient_InvalidSocketPortRangeRequested_Params_Data::Validate,
     nullptr /* no response */},
    {&internal::P2PTrustedSocketManagerClient_DumpPacket_Params_Data::Validate,
     nullptr /* no response */},
};

bool P2PTrustedSocketManagerClientRequestValidator::Accept(mojo::Message* message) {
  const char* name = ::network::mojom::P2PTrustedSocketManagerClient::Name_;
  return mojo::internal::ValidateRequestGenericPacked(message, name, kP2PTrustedSocketManagerClientValidationInfo);
}

const char P2PTrustedSocketManager::Name_[] = "network.mojom.P2PTrustedSocketManager";

P2PTrustedSocketManager::IPCStableHashFunction P2PTrustedSocketManager::MessageToMethodInfo_(mojo::Message& message) {
#if !BUILDFLAG(IS_FUCHSIA)
  switch (message.name()) {
    case internal::kP2PTrustedSocketManager_StartRtpDump_Name: {
      return &P2PTrustedSocketManager::StartRtpDump_Sym::IPCStableHash;
    }
    case internal::kP2PTrustedSocketManager_StopRtpDump_Name: {
      return &P2PTrustedSocketManager::StopRtpDump_Sym::IPCStableHash;
    }
    case internal::kP2PTrustedSocketManager_PauseNetworkChangeNotifications_Name: {
      return &P2PTrustedSocketManager::PauseNetworkChangeNotifications_Sym::IPCStableHash;
    }
    case internal::kP2PTrustedSocketManager_ResumeNetworkChangeNotifications_Name: {
      return &P2PTrustedSocketManager::ResumeNetworkChangeNotifications_Sym::IPCStableHash;
    }
  }
#endif  // !BUILDFLAG(IS_FUCHSIA)
  return nullptr;
}


const char* P2PTrustedSocketManager::MessageToMethodName_(mojo::Message& message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  bool is_response = message.has_flag(mojo::Message::kFlagIsResponse);
  if (!is_response) {
    switch (message.name()) {
      case internal::kP2PTrustedSocketManager_StartRtpDump_Name:
            return "Receive network::mojom::P2PTrustedSocketManager::StartRtpDump";
      case internal::kP2PTrustedSocketManager_StopRtpDump_Name:
            return "Receive network::mojom::P2PTrustedSocketManager::StopRtpDump";
      case internal::kP2PTrustedSocketManager_PauseNetworkChangeNotifications_Name:
            return "Receive network::mojom::P2PTrustedSocketManager::PauseNetworkChangeNotifications";
      case internal::kP2PTrustedSocketManager_ResumeNetworkChangeNotifications_Name:
            return "Receive network::mojom::P2PTrustedSocketManager::ResumeNetworkChangeNotifications";
    }
  } else {
    switch (message.name()) {
      case internal::kP2PTrustedSocketManager_StartRtpDump_Name:
            return "Receive reply network::mojom::P2PTrustedSocketManager::StartRtpDump";
      case internal::kP2PTrustedSocketManager_StopRtpDump_Name:
            return "Receive reply network::mojom::P2PTrustedSocketManager::StopRtpDump";
      case internal::kP2PTrustedSocketManager_PauseNetworkChangeNotifications_Name:
            return "Receive reply network::mojom::P2PTrustedSocketManager::PauseNetworkChangeNotifications";
      case internal::kP2PTrustedSocketManager_ResumeNetworkChangeNotifications_Name:
            return "Receive reply network::mojom::P2PTrustedSocketManager::ResumeNetworkChangeNotifications";
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
uint32_t P2PTrustedSocketManager::StartRtpDump_Sym::IPCStableHash() {
  // This method's address is used for indetifiying the mojo method name after
  // symbolization. So each IPCStableHash should have a unique address.
  // We cannot use NO_CODE_FOLDING() here - it relies on the uniqueness of
  // __LINE__ value, which is not unique accross different mojo modules.
  // The code below is very similar to NO_CODE_FOLDING, but it uses a unique
  // hash instead of __LINE__.
  constexpr uint32_t kHash = base::MD5Hash32Constexpr(
          "(Impl)network::mojom::P2PTrustedSocketManager::StartRtpDump");
  const uint32_t hash = kHash;
  base::debug::Alias(&hash);
  return hash;
}
uint32_t P2PTrustedSocketManager::StopRtpDump_Sym::IPCStableHash() {
  // This method's address is used for indetifiying the mojo method name after
  // symbolization. So each IPCStableHash should have a unique address.
  // We cannot use NO_CODE_FOLDING() here - it relies on the uniqueness of
  // __LINE__ value, which is not unique accross different mojo modules.
  // The code below is very similar to NO_CODE_FOLDING, but it uses a unique
  // hash instead of __LINE__.
  constexpr uint32_t kHash = base::MD5Hash32Constexpr(
          "(Impl)network::mojom::P2PTrustedSocketManager::StopRtpDump");
  const uint32_t hash = kHash;
  base::debug::Alias(&hash);
  return hash;
}
uint32_t P2PTrustedSocketManager::PauseNetworkChangeNotifications_Sym::IPCStableHash() {
  // This method's address is used for indetifiying the mojo method name after
  // symbolization. So each IPCStableHash should have a unique address.
  // We cannot use NO_CODE_FOLDING() here - it relies on the uniqueness of
  // __LINE__ value, which is not unique accross different mojo modules.
  // The code below is very similar to NO_CODE_FOLDING, but it uses a unique
  // hash instead of __LINE__.
  constexpr uint32_t kHash = base::MD5Hash32Constexpr(
          "(Impl)network::mojom::P2PTrustedSocketManager::PauseNetworkChangeNotifications");
  const uint32_t hash = kHash;
  base::debug::Alias(&hash);
  return hash;
}
uint32_t P2PTrustedSocketManager::ResumeNetworkChangeNotifications_Sym::IPCStableHash() {
  // This method's address is used for indetifiying the mojo method name after
  // symbolization. So each IPCStableHash should have a unique address.
  // We cannot use NO_CODE_FOLDING() here - it relies on the uniqueness of
  // __LINE__ value, which is not unique accross different mojo modules.
  // The code below is very similar to NO_CODE_FOLDING, but it uses a unique
  // hash instead of __LINE__.
  constexpr uint32_t kHash = base::MD5Hash32Constexpr(
          "(Impl)network::mojom::P2PTrustedSocketManager::ResumeNetworkChangeNotifications");
  const uint32_t hash = kHash;
  base::debug::Alias(&hash);
  return hash;
}
# endif // !BUILDFLAG(IS_FUCHSIA)

P2PTrustedSocketManagerProxy::P2PTrustedSocketManagerProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void P2PTrustedSocketManagerProxy::StartRtpDump(
    bool in_incoming, bool in_outgoing) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1(
    "mojom", "Send network::mojom::P2PTrustedSocketManager::StartRtpDump", "input_parameters",
    [&](perfetto::TracedValue context){
      auto dict = std::move(context).WriteDictionary();
      perfetto::WriteIntoTracedValueWithFallback(
           dict.AddItem("incoming"), in_incoming,
                        "<value of type bool>");
      perfetto::WriteIntoTracedValueWithFallback(
           dict.AddItem("outgoing"), in_outgoing,
                        "<value of type bool>");
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
      internal::kP2PTrustedSocketManager_StartRtpDump_Name, kFlags, 0, 0, nullptr);
  mojo::internal::MessageFragment<
      ::network::mojom::internal::P2PTrustedSocketManager_StartRtpDump_Params_Data> params(
          message);
  params.Allocate();
  params->incoming = in_incoming;
  params->outgoing = in_outgoing;

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(P2PTrustedSocketManager::Name_);
  message.set_method_name("StartRtpDump");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ::mojo::internal::SendMojoMessage(*receiver_, message);
}

void P2PTrustedSocketManagerProxy::StopRtpDump(
    bool in_incoming, bool in_outgoing) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1(
    "mojom", "Send network::mojom::P2PTrustedSocketManager::StopRtpDump", "input_parameters",
    [&](perfetto::TracedValue context){
      auto dict = std::move(context).WriteDictionary();
      perfetto::WriteIntoTracedValueWithFallback(
           dict.AddItem("incoming"), in_incoming,
                        "<value of type bool>");
      perfetto::WriteIntoTracedValueWithFallback(
           dict.AddItem("outgoing"), in_outgoing,
                        "<value of type bool>");
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
      internal::kP2PTrustedSocketManager_StopRtpDump_Name, kFlags, 0, 0, nullptr);
  mojo::internal::MessageFragment<
      ::network::mojom::internal::P2PTrustedSocketManager_StopRtpDump_Params_Data> params(
          message);
  params.Allocate();
  params->incoming = in_incoming;
  params->outgoing = in_outgoing;

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(P2PTrustedSocketManager::Name_);
  message.set_method_name("StopRtpDump");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ::mojo::internal::SendMojoMessage(*receiver_, message);
}

void P2PTrustedSocketManagerProxy::PauseNetworkChangeNotifications(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "Send network::mojom::P2PTrustedSocketManager::PauseNetworkChangeNotifications");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  const bool kAllowInterrupt = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0) |
      ((kAllowInterrupt) ? 0 : mojo::Message::kFlagNoInterrupt);
  
  mojo::Message message(
      internal::kP2PTrustedSocketManager_PauseNetworkChangeNotifications_Name, kFlags, 0, 0, nullptr);
  mojo::internal::MessageFragment<
      ::network::mojom::internal::P2PTrustedSocketManager_PauseNetworkChangeNotifications_Params_Data> params(
          message);
  params.Allocate();

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(P2PTrustedSocketManager::Name_);
  message.set_method_name("PauseNetworkChangeNotifications");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ::mojo::internal::SendMojoMessage(*receiver_, message);
}

void P2PTrustedSocketManagerProxy::ResumeNetworkChangeNotifications(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "Send network::mojom::P2PTrustedSocketManager::ResumeNetworkChangeNotifications");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  const bool kAllowInterrupt = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0) |
      ((kAllowInterrupt) ? 0 : mojo::Message::kFlagNoInterrupt);
  
  mojo::Message message(
      internal::kP2PTrustedSocketManager_ResumeNetworkChangeNotifications_Name, kFlags, 0, 0, nullptr);
  mojo::internal::MessageFragment<
      ::network::mojom::internal::P2PTrustedSocketManager_ResumeNetworkChangeNotifications_Params_Data> params(
          message);
  params.Allocate();

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(P2PTrustedSocketManager::Name_);
  message.set_method_name("ResumeNetworkChangeNotifications");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ::mojo::internal::SendMojoMessage(*receiver_, message);
}

// static
bool P2PTrustedSocketManagerStubDispatch::Accept(
    P2PTrustedSocketManager* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kP2PTrustedSocketManager_StartRtpDump_Name: {

      DCHECK(message->is_serialized());
      internal::P2PTrustedSocketManager_StartRtpDump_Params_Data* params =
          reinterpret_cast<internal::P2PTrustedSocketManager_StartRtpDump_Params_Data*>(
              message->mutable_payload());
      
      bool success = true;
      bool p_incoming{};
      bool p_outgoing{};
      P2PTrustedSocketManager_StartRtpDump_ParamsDataView input_data_view(params, message);
      
      if (success)
        p_incoming = input_data_view.incoming();
      if (success)
        p_outgoing = input_data_view.outgoing();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            P2PTrustedSocketManager::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->StartRtpDump(
std::move(p_incoming), 
std::move(p_outgoing));
      return true;
    }
    case internal::kP2PTrustedSocketManager_StopRtpDump_Name: {

      DCHECK(message->is_serialized());
      internal::P2PTrustedSocketManager_StopRtpDump_Params_Data* params =
          reinterpret_cast<internal::P2PTrustedSocketManager_StopRtpDump_Params_Data*>(
              message->mutable_payload());
      
      bool success = true;
      bool p_incoming{};
      bool p_outgoing{};
      P2PTrustedSocketManager_StopRtpDump_ParamsDataView input_data_view(params, message);
      
      if (success)
        p_incoming = input_data_view.incoming();
      if (success)
        p_outgoing = input_data_view.outgoing();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            P2PTrustedSocketManager::Name_, 1, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->StopRtpDump(
std::move(p_incoming), 
std::move(p_outgoing));
      return true;
    }
    case internal::kP2PTrustedSocketManager_PauseNetworkChangeNotifications_Name: {

      DCHECK(message->is_serialized());
      internal::P2PTrustedSocketManager_PauseNetworkChangeNotifications_Params_Data* params =
          reinterpret_cast<internal::P2PTrustedSocketManager_PauseNetworkChangeNotifications_Params_Data*>(
              message->mutable_payload());
      
      bool success = true;
      P2PTrustedSocketManager_PauseNetworkChangeNotifications_ParamsDataView input_data_view(params, message);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            P2PTrustedSocketManager::Name_, 2, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->PauseNetworkChangeNotifications();
      return true;
    }
    case internal::kP2PTrustedSocketManager_ResumeNetworkChangeNotifications_Name: {

      DCHECK(message->is_serialized());
      internal::P2PTrustedSocketManager_ResumeNetworkChangeNotifications_Params_Data* params =
          reinterpret_cast<internal::P2PTrustedSocketManager_ResumeNetworkChangeNotifications_Params_Data*>(
              message->mutable_payload());
      
      bool success = true;
      P2PTrustedSocketManager_ResumeNetworkChangeNotifications_ParamsDataView input_data_view(params, message);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            P2PTrustedSocketManager::Name_, 3, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->ResumeNetworkChangeNotifications();
      return true;
    }
  }
  return false;
}

// static
bool P2PTrustedSocketManagerStubDispatch::AcceptWithResponder(
    P2PTrustedSocketManager* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  [[maybe_unused]] const bool message_is_sync =
      message->has_flag(mojo::Message::kFlagIsSync);
  [[maybe_unused]] const uint64_t request_id = message->request_id();
  switch (message->header()->name) {
    case internal::kP2PTrustedSocketManager_StartRtpDump_Name: {
      break;
    }
    case internal::kP2PTrustedSocketManager_StopRtpDump_Name: {
      break;
    }
    case internal::kP2PTrustedSocketManager_PauseNetworkChangeNotifications_Name: {
      break;
    }
    case internal::kP2PTrustedSocketManager_ResumeNetworkChangeNotifications_Name: {
      break;
    }
  }
  return false;
}


static const mojo::internal::GenericValidationInfo kP2PTrustedSocketManagerValidationInfo[] = {
    {&internal::P2PTrustedSocketManager_StartRtpDump_Params_Data::Validate,
     nullptr /* no response */},
    {&internal::P2PTrustedSocketManager_StopRtpDump_Params_Data::Validate,
     nullptr /* no response */},
    {&internal::P2PTrustedSocketManager_PauseNetworkChangeNotifications_Params_Data::Validate,
     nullptr /* no response */},
    {&internal::P2PTrustedSocketManager_ResumeNetworkChangeNotifications_Params_Data::Validate,
     nullptr /* no response */},
};

bool P2PTrustedSocketManagerRequestValidator::Accept(mojo::Message* message) {
  const char* name = ::network::mojom::P2PTrustedSocketManager::Name_;
  return mojo::internal::ValidateRequestGenericPacked(message, name, kP2PTrustedSocketManagerValidationInfo);
}



}  // namespace mojom
}  // namespace network


namespace mojo {

}  // namespace mojo


// Symbols declared in the -test-utils.h header are defined here instead of a
// separate .cc file to save compile time.


namespace network {
namespace mojom {


void P2PTrustedSocketManagerClientInterceptorForTesting::InvalidSocketPortRangeRequested() {
  GetForwardingInterface()->InvalidSocketPortRangeRequested();
}
void P2PTrustedSocketManagerClientInterceptorForTesting::DumpPacket(const std::vector<uint8_t>& packet_header, uint64_t packet_length, bool incoming) {
  GetForwardingInterface()->DumpPacket(std::move(packet_header), std::move(packet_length), std::move(incoming));
}
P2PTrustedSocketManagerClientAsyncWaiter::P2PTrustedSocketManagerClientAsyncWaiter(
    P2PTrustedSocketManagerClient* proxy) : proxy_(proxy) {}

P2PTrustedSocketManagerClientAsyncWaiter::~P2PTrustedSocketManagerClientAsyncWaiter() = default;




void P2PTrustedSocketManagerInterceptorForTesting::StartRtpDump(bool incoming, bool outgoing) {
  GetForwardingInterface()->StartRtpDump(std::move(incoming), std::move(outgoing));
}
void P2PTrustedSocketManagerInterceptorForTesting::StopRtpDump(bool incoming, bool outgoing) {
  GetForwardingInterface()->StopRtpDump(std::move(incoming), std::move(outgoing));
}
void P2PTrustedSocketManagerInterceptorForTesting::PauseNetworkChangeNotifications() {
  GetForwardingInterface()->PauseNetworkChangeNotifications();
}
void P2PTrustedSocketManagerInterceptorForTesting::ResumeNetworkChangeNotifications() {
  GetForwardingInterface()->ResumeNetworkChangeNotifications();
}
P2PTrustedSocketManagerAsyncWaiter::P2PTrustedSocketManagerAsyncWaiter(
    P2PTrustedSocketManager* proxy) : proxy_(proxy) {}

P2PTrustedSocketManagerAsyncWaiter::~P2PTrustedSocketManagerAsyncWaiter() = default;






}  // namespace mojom
}  // namespace network


#if defined(__clang__)
#pragma clang diagnostic pop
#endif