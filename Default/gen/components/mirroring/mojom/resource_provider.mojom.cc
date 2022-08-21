// components/mirroring/mojom/resource_provider.mojom.cc is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#endif

#include "components/mirroring/mojom/resource_provider.mojom.h"

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

#include "components/mirroring/mojom/resource_provider.mojom-params-data.h"
#include "components/mirroring/mojom/resource_provider.mojom-shared-message-ids.h"

#include "components/mirroring/mojom/resource_provider.mojom-import-headers.h"
#include "components/mirroring/mojom/resource_provider.mojom-test-utils.h"


#ifndef COMPONENTS_MIRRORING_MOJOM_RESOURCE_PROVIDER_MOJOM_JUMBO_H_
#define COMPONENTS_MIRRORING_MOJOM_RESOURCE_PROVIDER_MOJOM_JUMBO_H_
#endif



namespace mirroring {
namespace mojom {
const char AudioStreamCreatorClient::Name_[] = "mirroring.mojom.AudioStreamCreatorClient";

AudioStreamCreatorClient::IPCStableHashFunction AudioStreamCreatorClient::MessageToMethodInfo_(mojo::Message& message) {
#if !BUILDFLAG(IS_FUCHSIA)
  switch (message.name()) {
    case internal::kAudioStreamCreatorClient_StreamCreated_Name: {
      return &AudioStreamCreatorClient::StreamCreated_Sym::IPCStableHash;
    }
  }
#endif  // !BUILDFLAG(IS_FUCHSIA)
  return nullptr;
}


const char* AudioStreamCreatorClient::MessageToMethodName_(mojo::Message& message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  bool is_response = message.has_flag(mojo::Message::kFlagIsResponse);
  if (!is_response) {
    switch (message.name()) {
      case internal::kAudioStreamCreatorClient_StreamCreated_Name:
            return "Receive mirroring::mojom::AudioStreamCreatorClient::StreamCreated";
    }
  } else {
    switch (message.name()) {
      case internal::kAudioStreamCreatorClient_StreamCreated_Name:
            return "Receive reply mirroring::mojom::AudioStreamCreatorClient::StreamCreated";
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
uint32_t AudioStreamCreatorClient::StreamCreated_Sym::IPCStableHash() {
  // This method's address is used for indetifiying the mojo method name after
  // symbolization. So each IPCStableHash should have a unique address.
  // We cannot use NO_CODE_FOLDING() here - it relies on the uniqueness of
  // __LINE__ value, which is not unique accross different mojo modules.
  // The code below is very similar to NO_CODE_FOLDING, but it uses a unique
  // hash instead of __LINE__.
  constexpr uint32_t kHash = base::MD5Hash32Constexpr(
          "(Impl)mirroring::mojom::AudioStreamCreatorClient::StreamCreated");
  const uint32_t hash = kHash;
  base::debug::Alias(&hash);
  return hash;
}
# endif // !BUILDFLAG(IS_FUCHSIA)

AudioStreamCreatorClientProxy::AudioStreamCreatorClientProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void AudioStreamCreatorClientProxy::StreamCreated(
    ::mojo::PendingRemote<::media::mojom::AudioInputStream> in_stream, ::mojo::PendingReceiver<::media::mojom::AudioInputStreamClient> in_client_receiver, ::media::mojom::ReadOnlyAudioDataPipePtr in_data_pipe) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1(
    "mojom", "Send mirroring::mojom::AudioStreamCreatorClient::StreamCreated", "input_parameters",
    [&](perfetto::TracedValue context){
      auto dict = std::move(context).WriteDictionary();
      perfetto::WriteIntoTracedValueWithFallback(
           dict.AddItem("stream"), in_stream,
                        "<value of type ::mojo::PendingRemote<::media::mojom::AudioInputStream>>");
      perfetto::WriteIntoTracedValueWithFallback(
           dict.AddItem("client_receiver"), in_client_receiver,
                        "<value of type ::mojo::PendingReceiver<::media::mojom::AudioInputStreamClient>>");
      perfetto::WriteIntoTracedValueWithFallback(
           dict.AddItem("data_pipe"), in_data_pipe,
                        "<value of type ::media::mojom::ReadOnlyAudioDataPipePtr>");
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
      internal::kAudioStreamCreatorClient_StreamCreated_Name, kFlags, 0, 0, nullptr);
  mojo::internal::MessageFragment<
      ::mirroring::mojom::internal::AudioStreamCreatorClient_StreamCreated_Params_Data> params(
          message);
  params.Allocate();
  mojo::internal::Serialize<mojo::InterfacePtrDataView<::media::mojom::AudioInputStreamInterfaceBase>>(
      in_stream, &params->stream, &params.message());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->stream),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid stream in AudioStreamCreatorClient.StreamCreated request");
  mojo::internal::Serialize<mojo::InterfaceRequestDataView<::media::mojom::AudioInputStreamClientInterfaceBase>>(
      in_client_receiver, &params->client_receiver, &params.message());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->client_receiver),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid client_receiver in AudioStreamCreatorClient.StreamCreated request");
  mojo::internal::MessageFragment<
      typename decltype(params->data_pipe)::BaseType> data_pipe_fragment(
          params.message());
  mojo::internal::Serialize<::media::mojom::ReadOnlyAudioDataPipeDataView>(
      in_data_pipe, data_pipe_fragment);
  params->data_pipe.Set(
      data_pipe_fragment.is_null() ? nullptr : data_pipe_fragment.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->data_pipe.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null data_pipe in AudioStreamCreatorClient.StreamCreated request");

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(AudioStreamCreatorClient::Name_);
  message.set_method_name("StreamCreated");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ::mojo::internal::SendMojoMessage(*receiver_, message);
}

// static
bool AudioStreamCreatorClientStubDispatch::Accept(
    AudioStreamCreatorClient* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kAudioStreamCreatorClient_StreamCreated_Name: {

      DCHECK(message->is_serialized());
      internal::AudioStreamCreatorClient_StreamCreated_Params_Data* params =
          reinterpret_cast<internal::AudioStreamCreatorClient_StreamCreated_Params_Data*>(
              message->mutable_payload());
      
      bool success = true;
      ::mojo::PendingRemote<::media::mojom::AudioInputStream> p_stream{};
      ::mojo::PendingReceiver<::media::mojom::AudioInputStreamClient> p_client_receiver{};
      ::media::mojom::ReadOnlyAudioDataPipePtr p_data_pipe{};
      AudioStreamCreatorClient_StreamCreated_ParamsDataView input_data_view(params, message);
      
      if (success) {
        p_stream =
            input_data_view.TakeStream<decltype(p_stream)>();
      }
      if (success) {
        p_client_receiver =
            input_data_view.TakeClientReceiver<decltype(p_client_receiver)>();
      }
      if (success && !input_data_view.ReadDataPipe(&p_data_pipe))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            AudioStreamCreatorClient::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->StreamCreated(
std::move(p_stream), 
std::move(p_client_receiver), 
std::move(p_data_pipe));
      return true;
    }
  }
  return false;
}

// static
bool AudioStreamCreatorClientStubDispatch::AcceptWithResponder(
    AudioStreamCreatorClient* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  [[maybe_unused]] const bool message_is_sync =
      message->has_flag(mojo::Message::kFlagIsSync);
  [[maybe_unused]] const uint64_t request_id = message->request_id();
  switch (message->header()->name) {
    case internal::kAudioStreamCreatorClient_StreamCreated_Name: {
      break;
    }
  }
  return false;
}


static const mojo::internal::GenericValidationInfo kAudioStreamCreatorClientValidationInfo[] = {
    {&internal::AudioStreamCreatorClient_StreamCreated_Params_Data::Validate,
     nullptr /* no response */},
};

bool AudioStreamCreatorClientRequestValidator::Accept(mojo::Message* message) {
  const char* name = ::mirroring::mojom::AudioStreamCreatorClient::Name_;
  return mojo::internal::ValidateRequestGenericPacked(message, name, kAudioStreamCreatorClientValidationInfo);
}

const char ResourceProvider::Name_[] = "mirroring.mojom.ResourceProvider";

ResourceProvider::IPCStableHashFunction ResourceProvider::MessageToMethodInfo_(mojo::Message& message) {
#if !BUILDFLAG(IS_FUCHSIA)
  switch (message.name()) {
    case internal::kResourceProvider_BindGpu_Name: {
      return &ResourceProvider::BindGpu_Sym::IPCStableHash;
    }
    case internal::kResourceProvider_GetVideoCaptureHost_Name: {
      return &ResourceProvider::GetVideoCaptureHost_Sym::IPCStableHash;
    }
    case internal::kResourceProvider_GetNetworkContext_Name: {
      return &ResourceProvider::GetNetworkContext_Sym::IPCStableHash;
    }
    case internal::kResourceProvider_CreateAudioStream_Name: {
      return &ResourceProvider::CreateAudioStream_Sym::IPCStableHash;
    }
    case internal::kResourceProvider_ConnectToRemotingSource_Name: {
      return &ResourceProvider::ConnectToRemotingSource_Sym::IPCStableHash;
    }
  }
#endif  // !BUILDFLAG(IS_FUCHSIA)
  return nullptr;
}


const char* ResourceProvider::MessageToMethodName_(mojo::Message& message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  bool is_response = message.has_flag(mojo::Message::kFlagIsResponse);
  if (!is_response) {
    switch (message.name()) {
      case internal::kResourceProvider_BindGpu_Name:
            return "Receive mirroring::mojom::ResourceProvider::BindGpu";
      case internal::kResourceProvider_GetVideoCaptureHost_Name:
            return "Receive mirroring::mojom::ResourceProvider::GetVideoCaptureHost";
      case internal::kResourceProvider_GetNetworkContext_Name:
            return "Receive mirroring::mojom::ResourceProvider::GetNetworkContext";
      case internal::kResourceProvider_CreateAudioStream_Name:
            return "Receive mirroring::mojom::ResourceProvider::CreateAudioStream";
      case internal::kResourceProvider_ConnectToRemotingSource_Name:
            return "Receive mirroring::mojom::ResourceProvider::ConnectToRemotingSource";
    }
  } else {
    switch (message.name()) {
      case internal::kResourceProvider_BindGpu_Name:
            return "Receive reply mirroring::mojom::ResourceProvider::BindGpu";
      case internal::kResourceProvider_GetVideoCaptureHost_Name:
            return "Receive reply mirroring::mojom::ResourceProvider::GetVideoCaptureHost";
      case internal::kResourceProvider_GetNetworkContext_Name:
            return "Receive reply mirroring::mojom::ResourceProvider::GetNetworkContext";
      case internal::kResourceProvider_CreateAudioStream_Name:
            return "Receive reply mirroring::mojom::ResourceProvider::CreateAudioStream";
      case internal::kResourceProvider_ConnectToRemotingSource_Name:
            return "Receive reply mirroring::mojom::ResourceProvider::ConnectToRemotingSource";
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
uint32_t ResourceProvider::BindGpu_Sym::IPCStableHash() {
  // This method's address is used for indetifiying the mojo method name after
  // symbolization. So each IPCStableHash should have a unique address.
  // We cannot use NO_CODE_FOLDING() here - it relies on the uniqueness of
  // __LINE__ value, which is not unique accross different mojo modules.
  // The code below is very similar to NO_CODE_FOLDING, but it uses a unique
  // hash instead of __LINE__.
  constexpr uint32_t kHash = base::MD5Hash32Constexpr(
          "(Impl)mirroring::mojom::ResourceProvider::BindGpu");
  const uint32_t hash = kHash;
  base::debug::Alias(&hash);
  return hash;
}
uint32_t ResourceProvider::GetVideoCaptureHost_Sym::IPCStableHash() {
  // This method's address is used for indetifiying the mojo method name after
  // symbolization. So each IPCStableHash should have a unique address.
  // We cannot use NO_CODE_FOLDING() here - it relies on the uniqueness of
  // __LINE__ value, which is not unique accross different mojo modules.
  // The code below is very similar to NO_CODE_FOLDING, but it uses a unique
  // hash instead of __LINE__.
  constexpr uint32_t kHash = base::MD5Hash32Constexpr(
          "(Impl)mirroring::mojom::ResourceProvider::GetVideoCaptureHost");
  const uint32_t hash = kHash;
  base::debug::Alias(&hash);
  return hash;
}
uint32_t ResourceProvider::GetNetworkContext_Sym::IPCStableHash() {
  // This method's address is used for indetifiying the mojo method name after
  // symbolization. So each IPCStableHash should have a unique address.
  // We cannot use NO_CODE_FOLDING() here - it relies on the uniqueness of
  // __LINE__ value, which is not unique accross different mojo modules.
  // The code below is very similar to NO_CODE_FOLDING, but it uses a unique
  // hash instead of __LINE__.
  constexpr uint32_t kHash = base::MD5Hash32Constexpr(
          "(Impl)mirroring::mojom::ResourceProvider::GetNetworkContext");
  const uint32_t hash = kHash;
  base::debug::Alias(&hash);
  return hash;
}
uint32_t ResourceProvider::CreateAudioStream_Sym::IPCStableHash() {
  // This method's address is used for indetifiying the mojo method name after
  // symbolization. So each IPCStableHash should have a unique address.
  // We cannot use NO_CODE_FOLDING() here - it relies on the uniqueness of
  // __LINE__ value, which is not unique accross different mojo modules.
  // The code below is very similar to NO_CODE_FOLDING, but it uses a unique
  // hash instead of __LINE__.
  constexpr uint32_t kHash = base::MD5Hash32Constexpr(
          "(Impl)mirroring::mojom::ResourceProvider::CreateAudioStream");
  const uint32_t hash = kHash;
  base::debug::Alias(&hash);
  return hash;
}
uint32_t ResourceProvider::ConnectToRemotingSource_Sym::IPCStableHash() {
  // This method's address is used for indetifiying the mojo method name after
  // symbolization. So each IPCStableHash should have a unique address.
  // We cannot use NO_CODE_FOLDING() here - it relies on the uniqueness of
  // __LINE__ value, which is not unique accross different mojo modules.
  // The code below is very similar to NO_CODE_FOLDING, but it uses a unique
  // hash instead of __LINE__.
  constexpr uint32_t kHash = base::MD5Hash32Constexpr(
          "(Impl)mirroring::mojom::ResourceProvider::ConnectToRemotingSource");
  const uint32_t hash = kHash;
  base::debug::Alias(&hash);
  return hash;
}
# endif // !BUILDFLAG(IS_FUCHSIA)

ResourceProviderProxy::ResourceProviderProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void ResourceProviderProxy::BindGpu(
    ::mojo::PendingReceiver<::viz::mojom::Gpu> in_receiver) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1(
    "mojom", "Send mirroring::mojom::ResourceProvider::BindGpu", "input_parameters",
    [&](perfetto::TracedValue context){
      auto dict = std::move(context).WriteDictionary();
      perfetto::WriteIntoTracedValueWithFallback(
           dict.AddItem("receiver"), in_receiver,
                        "<value of type ::mojo::PendingReceiver<::viz::mojom::Gpu>>");
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
      internal::kResourceProvider_BindGpu_Name, kFlags, 0, 0, nullptr);
  mojo::internal::MessageFragment<
      ::mirroring::mojom::internal::ResourceProvider_BindGpu_Params_Data> params(
          message);
  params.Allocate();
  mojo::internal::Serialize<mojo::InterfaceRequestDataView<::viz::mojom::GpuInterfaceBase>>(
      in_receiver, &params->receiver, &params.message());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->receiver),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid receiver in ResourceProvider.BindGpu request");

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ResourceProvider::Name_);
  message.set_method_name("BindGpu");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ::mojo::internal::SendMojoMessage(*receiver_, message);
}

void ResourceProviderProxy::GetVideoCaptureHost(
    ::mojo::PendingReceiver<::media::mojom::VideoCaptureHost> in_receiver) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1(
    "mojom", "Send mirroring::mojom::ResourceProvider::GetVideoCaptureHost", "input_parameters",
    [&](perfetto::TracedValue context){
      auto dict = std::move(context).WriteDictionary();
      perfetto::WriteIntoTracedValueWithFallback(
           dict.AddItem("receiver"), in_receiver,
                        "<value of type ::mojo::PendingReceiver<::media::mojom::VideoCaptureHost>>");
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
      internal::kResourceProvider_GetVideoCaptureHost_Name, kFlags, 0, 0, nullptr);
  mojo::internal::MessageFragment<
      ::mirroring::mojom::internal::ResourceProvider_GetVideoCaptureHost_Params_Data> params(
          message);
  params.Allocate();
  mojo::internal::Serialize<mojo::InterfaceRequestDataView<::media::mojom::VideoCaptureHostInterfaceBase>>(
      in_receiver, &params->receiver, &params.message());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->receiver),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid receiver in ResourceProvider.GetVideoCaptureHost request");

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ResourceProvider::Name_);
  message.set_method_name("GetVideoCaptureHost");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ::mojo::internal::SendMojoMessage(*receiver_, message);
}

void ResourceProviderProxy::GetNetworkContext(
    ::mojo::PendingReceiver<::network::mojom::NetworkContext> in_receiver) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1(
    "mojom", "Send mirroring::mojom::ResourceProvider::GetNetworkContext", "input_parameters",
    [&](perfetto::TracedValue context){
      auto dict = std::move(context).WriteDictionary();
      perfetto::WriteIntoTracedValueWithFallback(
           dict.AddItem("receiver"), in_receiver,
                        "<value of type ::mojo::PendingReceiver<::network::mojom::NetworkContext>>");
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
      internal::kResourceProvider_GetNetworkContext_Name, kFlags, 0, 0, nullptr);
  mojo::internal::MessageFragment<
      ::mirroring::mojom::internal::ResourceProvider_GetNetworkContext_Params_Data> params(
          message);
  params.Allocate();
  mojo::internal::Serialize<mojo::InterfaceRequestDataView<::network::mojom::NetworkContextInterfaceBase>>(
      in_receiver, &params->receiver, &params.message());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->receiver),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid receiver in ResourceProvider.GetNetworkContext request");

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ResourceProvider::Name_);
  message.set_method_name("GetNetworkContext");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ::mojo::internal::SendMojoMessage(*receiver_, message);
}

void ResourceProviderProxy::CreateAudioStream(
    ::mojo::PendingRemote<AudioStreamCreatorClient> in_client, const ::media::AudioParameters& in_param, uint32_t in_shared_memory_count) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1(
    "mojom", "Send mirroring::mojom::ResourceProvider::CreateAudioStream", "input_parameters",
    [&](perfetto::TracedValue context){
      auto dict = std::move(context).WriteDictionary();
      perfetto::WriteIntoTracedValueWithFallback(
           dict.AddItem("client"), in_client,
                        "<value of type ::mojo::PendingRemote<AudioStreamCreatorClient>>");
      perfetto::WriteIntoTracedValueWithFallback(
           dict.AddItem("param"), in_param,
                        "<value of type const ::media::AudioParameters&>");
      perfetto::WriteIntoTracedValueWithFallback(
           dict.AddItem("shared_memory_count"), in_shared_memory_count,
                        "<value of type uint32_t>");
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
      internal::kResourceProvider_CreateAudioStream_Name, kFlags, 0, 0, nullptr);
  mojo::internal::MessageFragment<
      ::mirroring::mojom::internal::ResourceProvider_CreateAudioStream_Params_Data> params(
          message);
  params.Allocate();
  mojo::internal::Serialize<mojo::InterfacePtrDataView<::mirroring::mojom::AudioStreamCreatorClientInterfaceBase>>(
      in_client, &params->client, &params.message());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->client),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid client in ResourceProvider.CreateAudioStream request");
  mojo::internal::MessageFragment<
      typename decltype(params->param)::BaseType> param_fragment(
          params.message());
  mojo::internal::Serialize<::media::mojom::AudioParametersDataView>(
      in_param, param_fragment);
  params->param.Set(
      param_fragment.is_null() ? nullptr : param_fragment.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->param.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null param in ResourceProvider.CreateAudioStream request");
  params->shared_memory_count = in_shared_memory_count;

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ResourceProvider::Name_);
  message.set_method_name("CreateAudioStream");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ::mojo::internal::SendMojoMessage(*receiver_, message);
}

void ResourceProviderProxy::ConnectToRemotingSource(
    ::mojo::PendingRemote<::media::mojom::Remoter> in_remoter, ::mojo::PendingReceiver<::media::mojom::RemotingSource> in_receiver) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1(
    "mojom", "Send mirroring::mojom::ResourceProvider::ConnectToRemotingSource", "input_parameters",
    [&](perfetto::TracedValue context){
      auto dict = std::move(context).WriteDictionary();
      perfetto::WriteIntoTracedValueWithFallback(
           dict.AddItem("remoter"), in_remoter,
                        "<value of type ::mojo::PendingRemote<::media::mojom::Remoter>>");
      perfetto::WriteIntoTracedValueWithFallback(
           dict.AddItem("receiver"), in_receiver,
                        "<value of type ::mojo::PendingReceiver<::media::mojom::RemotingSource>>");
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
      internal::kResourceProvider_ConnectToRemotingSource_Name, kFlags, 0, 0, nullptr);
  mojo::internal::MessageFragment<
      ::mirroring::mojom::internal::ResourceProvider_ConnectToRemotingSource_Params_Data> params(
          message);
  params.Allocate();
  mojo::internal::Serialize<mojo::InterfacePtrDataView<::media::mojom::RemoterInterfaceBase>>(
      in_remoter, &params->remoter, &params.message());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->remoter),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid remoter in ResourceProvider.ConnectToRemotingSource request");
  mojo::internal::Serialize<mojo::InterfaceRequestDataView<::media::mojom::RemotingSourceInterfaceBase>>(
      in_receiver, &params->receiver, &params.message());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->receiver),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid receiver in ResourceProvider.ConnectToRemotingSource request");

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ResourceProvider::Name_);
  message.set_method_name("ConnectToRemotingSource");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ::mojo::internal::SendMojoMessage(*receiver_, message);
}

// static
bool ResourceProviderStubDispatch::Accept(
    ResourceProvider* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kResourceProvider_BindGpu_Name: {

      DCHECK(message->is_serialized());
      internal::ResourceProvider_BindGpu_Params_Data* params =
          reinterpret_cast<internal::ResourceProvider_BindGpu_Params_Data*>(
              message->mutable_payload());
      
      bool success = true;
      ::mojo::PendingReceiver<::viz::mojom::Gpu> p_receiver{};
      ResourceProvider_BindGpu_ParamsDataView input_data_view(params, message);
      
      if (success) {
        p_receiver =
            input_data_view.TakeReceiver<decltype(p_receiver)>();
      }
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ResourceProvider::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->BindGpu(
std::move(p_receiver));
      return true;
    }
    case internal::kResourceProvider_GetVideoCaptureHost_Name: {

      DCHECK(message->is_serialized());
      internal::ResourceProvider_GetVideoCaptureHost_Params_Data* params =
          reinterpret_cast<internal::ResourceProvider_GetVideoCaptureHost_Params_Data*>(
              message->mutable_payload());
      
      bool success = true;
      ::mojo::PendingReceiver<::media::mojom::VideoCaptureHost> p_receiver{};
      ResourceProvider_GetVideoCaptureHost_ParamsDataView input_data_view(params, message);
      
      if (success) {
        p_receiver =
            input_data_view.TakeReceiver<decltype(p_receiver)>();
      }
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ResourceProvider::Name_, 1, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->GetVideoCaptureHost(
std::move(p_receiver));
      return true;
    }
    case internal::kResourceProvider_GetNetworkContext_Name: {

      DCHECK(message->is_serialized());
      internal::ResourceProvider_GetNetworkContext_Params_Data* params =
          reinterpret_cast<internal::ResourceProvider_GetNetworkContext_Params_Data*>(
              message->mutable_payload());
      
      bool success = true;
      ::mojo::PendingReceiver<::network::mojom::NetworkContext> p_receiver{};
      ResourceProvider_GetNetworkContext_ParamsDataView input_data_view(params, message);
      
      if (success) {
        p_receiver =
            input_data_view.TakeReceiver<decltype(p_receiver)>();
      }
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ResourceProvider::Name_, 2, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->GetNetworkContext(
std::move(p_receiver));
      return true;
    }
    case internal::kResourceProvider_CreateAudioStream_Name: {

      DCHECK(message->is_serialized());
      internal::ResourceProvider_CreateAudioStream_Params_Data* params =
          reinterpret_cast<internal::ResourceProvider_CreateAudioStream_Params_Data*>(
              message->mutable_payload());
      
      bool success = true;
      ::mojo::PendingRemote<AudioStreamCreatorClient> p_client{};
      ::media::AudioParameters p_param{};
      uint32_t p_shared_memory_count{};
      ResourceProvider_CreateAudioStream_ParamsDataView input_data_view(params, message);
      
      if (success) {
        p_client =
            input_data_view.TakeClient<decltype(p_client)>();
      }
      if (success && !input_data_view.ReadParam(&p_param))
        success = false;
      if (success)
        p_shared_memory_count = input_data_view.shared_memory_count();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ResourceProvider::Name_, 3, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->CreateAudioStream(
std::move(p_client), 
std::move(p_param), 
std::move(p_shared_memory_count));
      return true;
    }
    case internal::kResourceProvider_ConnectToRemotingSource_Name: {

      DCHECK(message->is_serialized());
      internal::ResourceProvider_ConnectToRemotingSource_Params_Data* params =
          reinterpret_cast<internal::ResourceProvider_ConnectToRemotingSource_Params_Data*>(
              message->mutable_payload());
      
      bool success = true;
      ::mojo::PendingRemote<::media::mojom::Remoter> p_remoter{};
      ::mojo::PendingReceiver<::media::mojom::RemotingSource> p_receiver{};
      ResourceProvider_ConnectToRemotingSource_ParamsDataView input_data_view(params, message);
      
      if (success) {
        p_remoter =
            input_data_view.TakeRemoter<decltype(p_remoter)>();
      }
      if (success) {
        p_receiver =
            input_data_view.TakeReceiver<decltype(p_receiver)>();
      }
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ResourceProvider::Name_, 4, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->ConnectToRemotingSource(
std::move(p_remoter), 
std::move(p_receiver));
      return true;
    }
  }
  return false;
}

// static
bool ResourceProviderStubDispatch::AcceptWithResponder(
    ResourceProvider* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  [[maybe_unused]] const bool message_is_sync =
      message->has_flag(mojo::Message::kFlagIsSync);
  [[maybe_unused]] const uint64_t request_id = message->request_id();
  switch (message->header()->name) {
    case internal::kResourceProvider_BindGpu_Name: {
      break;
    }
    case internal::kResourceProvider_GetVideoCaptureHost_Name: {
      break;
    }
    case internal::kResourceProvider_GetNetworkContext_Name: {
      break;
    }
    case internal::kResourceProvider_CreateAudioStream_Name: {
      break;
    }
    case internal::kResourceProvider_ConnectToRemotingSource_Name: {
      break;
    }
  }
  return false;
}


static const mojo::internal::GenericValidationInfo kResourceProviderValidationInfo[] = {
    {&internal::ResourceProvider_BindGpu_Params_Data::Validate,
     nullptr /* no response */},
    {&internal::ResourceProvider_GetVideoCaptureHost_Params_Data::Validate,
     nullptr /* no response */},
    {&internal::ResourceProvider_GetNetworkContext_Params_Data::Validate,
     nullptr /* no response */},
    {&internal::ResourceProvider_CreateAudioStream_Params_Data::Validate,
     nullptr /* no response */},
    {&internal::ResourceProvider_ConnectToRemotingSource_Params_Data::Validate,
     nullptr /* no response */},
};

bool ResourceProviderRequestValidator::Accept(mojo::Message* message) {
  const char* name = ::mirroring::mojom::ResourceProvider::Name_;
  return mojo::internal::ValidateRequestGenericPacked(message, name, kResourceProviderValidationInfo);
}



}  // namespace mojom
}  // namespace mirroring


namespace mojo {

}  // namespace mojo


// Symbols declared in the -test-utils.h header are defined here instead of a
// separate .cc file to save compile time.


namespace mirroring {
namespace mojom {


void AudioStreamCreatorClientInterceptorForTesting::StreamCreated(::mojo::PendingRemote<::media::mojom::AudioInputStream> stream, ::mojo::PendingReceiver<::media::mojom::AudioInputStreamClient> client_receiver, ::media::mojom::ReadOnlyAudioDataPipePtr data_pipe) {
  GetForwardingInterface()->StreamCreated(std::move(stream), std::move(client_receiver), std::move(data_pipe));
}
AudioStreamCreatorClientAsyncWaiter::AudioStreamCreatorClientAsyncWaiter(
    AudioStreamCreatorClient* proxy) : proxy_(proxy) {}

AudioStreamCreatorClientAsyncWaiter::~AudioStreamCreatorClientAsyncWaiter() = default;




void ResourceProviderInterceptorForTesting::BindGpu(::mojo::PendingReceiver<::viz::mojom::Gpu> receiver) {
  GetForwardingInterface()->BindGpu(std::move(receiver));
}
void ResourceProviderInterceptorForTesting::GetVideoCaptureHost(::mojo::PendingReceiver<::media::mojom::VideoCaptureHost> receiver) {
  GetForwardingInterface()->GetVideoCaptureHost(std::move(receiver));
}
void ResourceProviderInterceptorForTesting::GetNetworkContext(::mojo::PendingReceiver<::network::mojom::NetworkContext> receiver) {
  GetForwardingInterface()->GetNetworkContext(std::move(receiver));
}
void ResourceProviderInterceptorForTesting::CreateAudioStream(::mojo::PendingRemote<AudioStreamCreatorClient> client, const ::media::AudioParameters& param, uint32_t shared_memory_count) {
  GetForwardingInterface()->CreateAudioStream(std::move(client), std::move(param), std::move(shared_memory_count));
}
void ResourceProviderInterceptorForTesting::ConnectToRemotingSource(::mojo::PendingRemote<::media::mojom::Remoter> remoter, ::mojo::PendingReceiver<::media::mojom::RemotingSource> receiver) {
  GetForwardingInterface()->ConnectToRemotingSource(std::move(remoter), std::move(receiver));
}
ResourceProviderAsyncWaiter::ResourceProviderAsyncWaiter(
    ResourceProvider* proxy) : proxy_(proxy) {}

ResourceProviderAsyncWaiter::~ResourceProviderAsyncWaiter() = default;






}  // namespace mojom
}  // namespace mirroring


#if defined(__clang__)
#pragma clang diagnostic pop
#endif