// media/mojo/mojom/demuxer_stream.mojom-blink.cc is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#endif

#include "media/mojo/mojom/demuxer_stream.mojom-blink.h"

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

#include "media/mojo/mojom/demuxer_stream.mojom-params-data.h"
#include "media/mojo/mojom/demuxer_stream.mojom-shared-message-ids.h"

#include "media/mojo/mojom/demuxer_stream.mojom-blink-import-headers.h"
#include "media/mojo/mojom/demuxer_stream.mojom-blink-test-utils.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef MEDIA_MOJO_MOJOM_DEMUXER_STREAM_MOJOM_BLINK_JUMBO_H_
#define MEDIA_MOJO_MOJOM_DEMUXER_STREAM_MOJOM_BLINK_JUMBO_H_
#endif



namespace media {
namespace mojom {
namespace blink {
const char DemuxerStream::Name_[] = "media.mojom.DemuxerStream";

DemuxerStream::IPCStableHashFunction DemuxerStream::MessageToMethodInfo_(mojo::Message& message) {
#if !BUILDFLAG(IS_FUCHSIA)
  switch (message.name()) {
    case internal::kDemuxerStream_Initialize_Name: {
      return &DemuxerStream::Initialize_Sym::IPCStableHash;
    }
    case internal::kDemuxerStream_Read_Name: {
      return &DemuxerStream::Read_Sym::IPCStableHash;
    }
    case internal::kDemuxerStream_EnableBitstreamConverter_Name: {
      return &DemuxerStream::EnableBitstreamConverter_Sym::IPCStableHash;
    }
  }
#endif  // !BUILDFLAG(IS_FUCHSIA)
  return nullptr;
}


const char* DemuxerStream::MessageToMethodName_(mojo::Message& message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  bool is_response = message.has_flag(mojo::Message::kFlagIsResponse);
  if (!is_response) {
    switch (message.name()) {
      case internal::kDemuxerStream_Initialize_Name:
            return "Receive media::mojom::DemuxerStream::Initialize";
      case internal::kDemuxerStream_Read_Name:
            return "Receive media::mojom::DemuxerStream::Read";
      case internal::kDemuxerStream_EnableBitstreamConverter_Name:
            return "Receive media::mojom::DemuxerStream::EnableBitstreamConverter";
    }
  } else {
    switch (message.name()) {
      case internal::kDemuxerStream_Initialize_Name:
            return "Receive reply media::mojom::DemuxerStream::Initialize";
      case internal::kDemuxerStream_Read_Name:
            return "Receive reply media::mojom::DemuxerStream::Read";
      case internal::kDemuxerStream_EnableBitstreamConverter_Name:
            return "Receive reply media::mojom::DemuxerStream::EnableBitstreamConverter";
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
uint32_t DemuxerStream::Initialize_Sym::IPCStableHash() {
  // This method's address is used for indetifiying the mojo method name after
  // symbolization. So each IPCStableHash should have a unique address.
  // We cannot use NO_CODE_FOLDING() here - it relies on the uniqueness of
  // __LINE__ value, which is not unique accross different mojo modules.
  // The code below is very similar to NO_CODE_FOLDING, but it uses a unique
  // hash instead of __LINE__.
  constexpr uint32_t kHash = base::MD5Hash32Constexpr(
          "(Impl)media::mojom::DemuxerStream::Initialize");
  const uint32_t hash = kHash;
  base::debug::Alias(&hash);
  return hash;
}
uint32_t DemuxerStream::Read_Sym::IPCStableHash() {
  // This method's address is used for indetifiying the mojo method name after
  // symbolization. So each IPCStableHash should have a unique address.
  // We cannot use NO_CODE_FOLDING() here - it relies on the uniqueness of
  // __LINE__ value, which is not unique accross different mojo modules.
  // The code below is very similar to NO_CODE_FOLDING, but it uses a unique
  // hash instead of __LINE__.
  constexpr uint32_t kHash = base::MD5Hash32Constexpr(
          "(Impl)media::mojom::DemuxerStream::Read");
  const uint32_t hash = kHash;
  base::debug::Alias(&hash);
  return hash;
}
uint32_t DemuxerStream::EnableBitstreamConverter_Sym::IPCStableHash() {
  // This method's address is used for indetifiying the mojo method name after
  // symbolization. So each IPCStableHash should have a unique address.
  // We cannot use NO_CODE_FOLDING() here - it relies on the uniqueness of
  // __LINE__ value, which is not unique accross different mojo modules.
  // The code below is very similar to NO_CODE_FOLDING, but it uses a unique
  // hash instead of __LINE__.
  constexpr uint32_t kHash = base::MD5Hash32Constexpr(
          "(Impl)media::mojom::DemuxerStream::EnableBitstreamConverter");
  const uint32_t hash = kHash;
  base::debug::Alias(&hash);
  return hash;
}
# endif // !BUILDFLAG(IS_FUCHSIA)

class DemuxerStream_Initialize_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  DemuxerStream_Initialize_ForwardToCallback(
      DemuxerStream::InitializeCallback callback
      ) : callback_(std::move(callback)) {
  }

  DemuxerStream_Initialize_ForwardToCallback(const DemuxerStream_Initialize_ForwardToCallback&) = delete;
  DemuxerStream_Initialize_ForwardToCallback& operator=(const DemuxerStream_Initialize_ForwardToCallback&) = delete;

  bool Accept(mojo::Message* message) override;
 private:
  DemuxerStream::InitializeCallback callback_;
};

class DemuxerStream_Read_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  DemuxerStream_Read_ForwardToCallback(
      DemuxerStream::ReadCallback callback
      ) : callback_(std::move(callback)) {
  }

  DemuxerStream_Read_ForwardToCallback(const DemuxerStream_Read_ForwardToCallback&) = delete;
  DemuxerStream_Read_ForwardToCallback& operator=(const DemuxerStream_Read_ForwardToCallback&) = delete;

  bool Accept(mojo::Message* message) override;
 private:
  DemuxerStream::ReadCallback callback_;
};

DemuxerStreamProxy::DemuxerStreamProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void DemuxerStreamProxy::Initialize(
    InitializeCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "Send media::mojom::DemuxerStream::Initialize");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  const bool kAllowInterrupt = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0) |
      ((kAllowInterrupt) ? 0 : mojo::Message::kFlagNoInterrupt);
  
  mojo::Message message(
      internal::kDemuxerStream_Initialize_Name, kFlags, 0, 0, nullptr);
  mojo::internal::MessageFragment<
      ::media::mojom::internal::DemuxerStream_Initialize_Params_Data> params(
          message);
  params.Allocate();

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(DemuxerStream::Name_);
  message.set_method_name("Initialize");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new DemuxerStream_Initialize_ForwardToCallback(
          std::move(callback)));
  ::mojo::internal::SendMojoMessage(*receiver_, message, std::move(responder));
}

void DemuxerStreamProxy::Read(
    ReadCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "Send media::mojom::DemuxerStream::Read");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  const bool kAllowInterrupt = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0) |
      ((kAllowInterrupt) ? 0 : mojo::Message::kFlagNoInterrupt);
  
  mojo::Message message(
      internal::kDemuxerStream_Read_Name, kFlags, 0, 0, nullptr);
  mojo::internal::MessageFragment<
      ::media::mojom::internal::DemuxerStream_Read_Params_Data> params(
          message);
  params.Allocate();

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(DemuxerStream::Name_);
  message.set_method_name("Read");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new DemuxerStream_Read_ForwardToCallback(
          std::move(callback)));
  ::mojo::internal::SendMojoMessage(*receiver_, message, std::move(responder));
}

void DemuxerStreamProxy::EnableBitstreamConverter(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "Send media::mojom::DemuxerStream::EnableBitstreamConverter");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  const bool kAllowInterrupt = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0) |
      ((kAllowInterrupt) ? 0 : mojo::Message::kFlagNoInterrupt);
  
  mojo::Message message(
      internal::kDemuxerStream_EnableBitstreamConverter_Name, kFlags, 0, 0, nullptr);
  mojo::internal::MessageFragment<
      ::media::mojom::internal::DemuxerStream_EnableBitstreamConverter_Params_Data> params(
          message);
  params.Allocate();

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(DemuxerStream::Name_);
  message.set_method_name("EnableBitstreamConverter");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ::mojo::internal::SendMojoMessage(*receiver_, message);
}
class DemuxerStream_Initialize_ProxyToResponder : public ::mojo::internal::ProxyToResponder {
 public:
  static DemuxerStream::InitializeCallback CreateCallback(
      ::mojo::Message& message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<DemuxerStream_Initialize_ProxyToResponder> proxy(
        new DemuxerStream_Initialize_ProxyToResponder(
            message, std::move(responder)));
    return base::BindOnce(&DemuxerStream_Initialize_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~DemuxerStream_Initialize_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
  }

 private:
  DemuxerStream_Initialize_ProxyToResponder(
      ::mojo::Message& message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : ::mojo::internal::ProxyToResponder(message, std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "DemuxerStream::InitializeCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      DemuxerStream::Type in_type, ::mojo::ScopedDataPipeConsumerHandle in_pipe, ::media::mojom::blink::AudioDecoderConfigPtr in_audio_config, ::media::mojom::blink::VideoDecoderConfigPtr in_video_config);
};

bool DemuxerStream_Initialize_ForwardToCallback::Accept(
    mojo::Message* message) {

  DCHECK(message->is_serialized());
  internal::DemuxerStream_Initialize_ResponseParams_Data* params =
      reinterpret_cast<
          internal::DemuxerStream_Initialize_ResponseParams_Data*>(
              message->mutable_payload());
  
  bool success = true;
  DemuxerStream::Type p_type{};
  ::mojo::ScopedDataPipeConsumerHandle p_pipe{};
  ::media::mojom::blink::AudioDecoderConfigPtr p_audio_config{};
  ::media::mojom::blink::VideoDecoderConfigPtr p_video_config{};
  DemuxerStream_Initialize_ResponseParamsDataView input_data_view(params, message);
  
  if (success && !input_data_view.ReadType(&p_type))
    success = false;
  if (success)
    p_pipe = input_data_view.TakePipe();
  if (success && !input_data_view.ReadAudioConfig(&p_audio_config))
    success = false;
  if (success && !input_data_view.ReadVideoConfig(&p_video_config))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        DemuxerStream::Name_, 0, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_type), 
std::move(p_pipe), 
std::move(p_audio_config), 
std::move(p_video_config));
  return true;
}

void DemuxerStream_Initialize_ProxyToResponder::Run(
    DemuxerStream::Type in_type, ::mojo::ScopedDataPipeConsumerHandle in_pipe, ::media::mojom::blink::AudioDecoderConfigPtr in_audio_config, ::media::mojom::blink::VideoDecoderConfigPtr in_video_config) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1(
    "mojom", "Send reply media::mojom::DemuxerStream::Initialize", "async_response_parameters",
    [&](perfetto::TracedValue context){
      auto dict = std::move(context).WriteDictionary();
      perfetto::WriteIntoTracedValueWithFallback(
           dict.AddItem("type"), in_type,
                        "<value of type DemuxerStream::Type>");
      perfetto::WriteIntoTracedValueWithFallback(
           dict.AddItem("pipe"), in_pipe,
                        "<value of type ::mojo::ScopedDataPipeConsumerHandle>");
      perfetto::WriteIntoTracedValueWithFallback(
           dict.AddItem("audio_config"), in_audio_config,
                        "<value of type ::media::mojom::blink::AudioDecoderConfigPtr>");
      perfetto::WriteIntoTracedValueWithFallback(
           dict.AddItem("video_config"), in_video_config,
                        "<value of type ::media::mojom::blink::VideoDecoderConfigPtr>");
   });
#endif
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0) |
      ((true) ? 0 : mojo::Message::kFlagNoInterrupt);
  
  mojo::Message message(
      internal::kDemuxerStream_Initialize_Name, kFlags, 0, 0, nullptr);
  mojo::internal::MessageFragment<
      ::media::mojom::internal::DemuxerStream_Initialize_ResponseParams_Data> params(
          message);
  params.Allocate();
  mojo::internal::Serialize<::media::mojom::DemuxerStream_Type>(
      in_type, &params->type);
  mojo::internal::Serialize<mojo::ScopedDataPipeConsumerHandle>(
      in_pipe, &params->pipe, &params.message());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->pipe),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid pipe in ");
  mojo::internal::MessageFragment<
      typename decltype(params->audio_config)::BaseType> audio_config_fragment(
          params.message());
  mojo::internal::Serialize<::media::mojom::AudioDecoderConfigDataView>(
      in_audio_config, audio_config_fragment);
  params->audio_config.Set(
      audio_config_fragment.is_null() ? nullptr : audio_config_fragment.data());
  mojo::internal::MessageFragment<
      typename decltype(params->video_config)::BaseType> video_config_fragment(
          params.message());
  mojo::internal::Serialize<::media::mojom::VideoDecoderConfigDataView>(
      in_video_config, video_config_fragment);
  params->video_config.Set(
      video_config_fragment.is_null() ? nullptr : video_config_fragment.data());

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(DemuxerStream::Name_);
  message.set_method_name("Initialize");
#endif

  message.set_request_id(request_id_);
  message.set_trace_nonce(trace_nonce_);
  ::mojo::internal::SendMojoMessage(*responder_, message);
  // SendMojoMessage() fails silently if the responder connection is closed,
  // or if the message is malformed.
  //
  // TODO(darin): If Accept() returns false due to a malformed message, that
  // may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class DemuxerStream_Read_ProxyToResponder : public ::mojo::internal::ProxyToResponder {
 public:
  static DemuxerStream::ReadCallback CreateCallback(
      ::mojo::Message& message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<DemuxerStream_Read_ProxyToResponder> proxy(
        new DemuxerStream_Read_ProxyToResponder(
            message, std::move(responder)));
    return base::BindOnce(&DemuxerStream_Read_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~DemuxerStream_Read_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
  }

 private:
  DemuxerStream_Read_ProxyToResponder(
      ::mojo::Message& message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : ::mojo::internal::ProxyToResponder(message, std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "DemuxerStream::ReadCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      DemuxerStream::Status in_status, ::media::mojom::blink::DecoderBufferPtr in_buffer, ::media::mojom::blink::AudioDecoderConfigPtr in_audio_config, ::media::mojom::blink::VideoDecoderConfigPtr in_video_config);
};

bool DemuxerStream_Read_ForwardToCallback::Accept(
    mojo::Message* message) {

  DCHECK(message->is_serialized());
  internal::DemuxerStream_Read_ResponseParams_Data* params =
      reinterpret_cast<
          internal::DemuxerStream_Read_ResponseParams_Data*>(
              message->mutable_payload());
  
  bool success = true;
  DemuxerStream::Status p_status{};
  ::media::mojom::blink::DecoderBufferPtr p_buffer{};
  ::media::mojom::blink::AudioDecoderConfigPtr p_audio_config{};
  ::media::mojom::blink::VideoDecoderConfigPtr p_video_config{};
  DemuxerStream_Read_ResponseParamsDataView input_data_view(params, message);
  
  if (success && !input_data_view.ReadStatus(&p_status))
    success = false;
  if (success && !input_data_view.ReadBuffer(&p_buffer))
    success = false;
  if (success && !input_data_view.ReadAudioConfig(&p_audio_config))
    success = false;
  if (success && !input_data_view.ReadVideoConfig(&p_video_config))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        DemuxerStream::Name_, 1, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_status), 
std::move(p_buffer), 
std::move(p_audio_config), 
std::move(p_video_config));
  return true;
}

void DemuxerStream_Read_ProxyToResponder::Run(
    DemuxerStream::Status in_status, ::media::mojom::blink::DecoderBufferPtr in_buffer, ::media::mojom::blink::AudioDecoderConfigPtr in_audio_config, ::media::mojom::blink::VideoDecoderConfigPtr in_video_config) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1(
    "mojom", "Send reply media::mojom::DemuxerStream::Read", "async_response_parameters",
    [&](perfetto::TracedValue context){
      auto dict = std::move(context).WriteDictionary();
      perfetto::WriteIntoTracedValueWithFallback(
           dict.AddItem("status"), in_status,
                        "<value of type DemuxerStream::Status>");
      perfetto::WriteIntoTracedValueWithFallback(
           dict.AddItem("buffer"), in_buffer,
                        "<value of type ::media::mojom::blink::DecoderBufferPtr>");
      perfetto::WriteIntoTracedValueWithFallback(
           dict.AddItem("audio_config"), in_audio_config,
                        "<value of type ::media::mojom::blink::AudioDecoderConfigPtr>");
      perfetto::WriteIntoTracedValueWithFallback(
           dict.AddItem("video_config"), in_video_config,
                        "<value of type ::media::mojom::blink::VideoDecoderConfigPtr>");
   });
#endif
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0) |
      ((true) ? 0 : mojo::Message::kFlagNoInterrupt);
  
  mojo::Message message(
      internal::kDemuxerStream_Read_Name, kFlags, 0, 0, nullptr);
  mojo::internal::MessageFragment<
      ::media::mojom::internal::DemuxerStream_Read_ResponseParams_Data> params(
          message);
  params.Allocate();
  mojo::internal::Serialize<::media::mojom::DemuxerStream_Status>(
      in_status, &params->status);
  mojo::internal::MessageFragment<
      typename decltype(params->buffer)::BaseType> buffer_fragment(
          params.message());
  mojo::internal::Serialize<::media::mojom::DecoderBufferDataView>(
      in_buffer, buffer_fragment);
  params->buffer.Set(
      buffer_fragment.is_null() ? nullptr : buffer_fragment.data());
  mojo::internal::MessageFragment<
      typename decltype(params->audio_config)::BaseType> audio_config_fragment(
          params.message());
  mojo::internal::Serialize<::media::mojom::AudioDecoderConfigDataView>(
      in_audio_config, audio_config_fragment);
  params->audio_config.Set(
      audio_config_fragment.is_null() ? nullptr : audio_config_fragment.data());
  mojo::internal::MessageFragment<
      typename decltype(params->video_config)::BaseType> video_config_fragment(
          params.message());
  mojo::internal::Serialize<::media::mojom::VideoDecoderConfigDataView>(
      in_video_config, video_config_fragment);
  params->video_config.Set(
      video_config_fragment.is_null() ? nullptr : video_config_fragment.data());

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(DemuxerStream::Name_);
  message.set_method_name("Read");
#endif

  message.set_request_id(request_id_);
  message.set_trace_nonce(trace_nonce_);
  ::mojo::internal::SendMojoMessage(*responder_, message);
  // SendMojoMessage() fails silently if the responder connection is closed,
  // or if the message is malformed.
  //
  // TODO(darin): If Accept() returns false due to a malformed message, that
  // may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool DemuxerStreamStubDispatch::Accept(
    DemuxerStream* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kDemuxerStream_Initialize_Name: {
      break;
    }
    case internal::kDemuxerStream_Read_Name: {
      break;
    }
    case internal::kDemuxerStream_EnableBitstreamConverter_Name: {

      DCHECK(message->is_serialized());
      internal::DemuxerStream_EnableBitstreamConverter_Params_Data* params =
          reinterpret_cast<internal::DemuxerStream_EnableBitstreamConverter_Params_Data*>(
              message->mutable_payload());
      
      bool success = true;
      DemuxerStream_EnableBitstreamConverter_ParamsDataView input_data_view(params, message);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            DemuxerStream::Name_, 2, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->EnableBitstreamConverter();
      return true;
    }
  }
  return false;
}

// static
bool DemuxerStreamStubDispatch::AcceptWithResponder(
    DemuxerStream* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  [[maybe_unused]] const bool message_is_sync =
      message->has_flag(mojo::Message::kFlagIsSync);
  [[maybe_unused]] const uint64_t request_id = message->request_id();
  switch (message->header()->name) {
    case internal::kDemuxerStream_Initialize_Name: {

      internal::DemuxerStream_Initialize_Params_Data* params =
          reinterpret_cast<
              internal::DemuxerStream_Initialize_Params_Data*>(
                  message->mutable_payload());
      
      bool success = true;
      DemuxerStream_Initialize_ParamsDataView input_data_view(params, message);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            DemuxerStream::Name_, 0, false);
        return false;
      }
      DemuxerStream::InitializeCallback callback =
          DemuxerStream_Initialize_ProxyToResponder::CreateCallback(
              *message, std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Initialize(std::move(callback));
      return true;
    }
    case internal::kDemuxerStream_Read_Name: {

      internal::DemuxerStream_Read_Params_Data* params =
          reinterpret_cast<
              internal::DemuxerStream_Read_Params_Data*>(
                  message->mutable_payload());
      
      bool success = true;
      DemuxerStream_Read_ParamsDataView input_data_view(params, message);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            DemuxerStream::Name_, 1, false);
        return false;
      }
      DemuxerStream::ReadCallback callback =
          DemuxerStream_Read_ProxyToResponder::CreateCallback(
              *message, std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Read(std::move(callback));
      return true;
    }
    case internal::kDemuxerStream_EnableBitstreamConverter_Name: {
      break;
    }
  }
  return false;
}


static const mojo::internal::GenericValidationInfo kDemuxerStreamValidationInfo[] = {
    {&internal::DemuxerStream_Initialize_Params_Data::Validate,
     &internal::DemuxerStream_Initialize_ResponseParams_Data::Validate},
    {&internal::DemuxerStream_Read_Params_Data::Validate,
     &internal::DemuxerStream_Read_ResponseParams_Data::Validate},
    {&internal::DemuxerStream_EnableBitstreamConverter_Params_Data::Validate,
     nullptr /* no response */},
};

bool DemuxerStreamRequestValidator::Accept(mojo::Message* message) {
  const char* name = ::media::mojom::blink::DemuxerStream::Name_;
  return mojo::internal::ValidateRequestGenericPacked(message, name, kDemuxerStreamValidationInfo);
}

bool DemuxerStreamResponseValidator::Accept(mojo::Message* message) {
  const char* name = ::media::mojom::blink::DemuxerStream::Name_;
  return mojo::internal::ValidateResponseGenericPacked(message, name, kDemuxerStreamValidationInfo);
}


}  // namespace blink
}  // namespace mojom
}  // namespace media


namespace mojo {

}  // namespace mojo


// Symbols declared in the -test-utils.h header are defined here instead of a
// separate .cc file to save compile time.


namespace media {
namespace mojom {
namespace blink {


void DemuxerStreamInterceptorForTesting::Initialize(InitializeCallback callback) {
  GetForwardingInterface()->Initialize(std::move(callback));
}
void DemuxerStreamInterceptorForTesting::Read(ReadCallback callback) {
  GetForwardingInterface()->Read(std::move(callback));
}
void DemuxerStreamInterceptorForTesting::EnableBitstreamConverter() {
  GetForwardingInterface()->EnableBitstreamConverter();
}
DemuxerStreamAsyncWaiter::DemuxerStreamAsyncWaiter(
    DemuxerStream* proxy) : proxy_(proxy) {}

DemuxerStreamAsyncWaiter::~DemuxerStreamAsyncWaiter() = default;

void DemuxerStreamAsyncWaiter::Initialize(
    DemuxerStream::Type* out_type, ::mojo::ScopedDataPipeConsumerHandle* out_pipe, ::media::mojom::blink::AudioDecoderConfigPtr* out_audio_config, ::media::mojom::blink::VideoDecoderConfigPtr* out_video_config) {
  base::RunLoop loop;
  proxy_->Initialize(
      base::BindOnce(
          [](base::RunLoop* loop,
             DemuxerStream::Type* out_type
,
             ::mojo::ScopedDataPipeConsumerHandle* out_pipe
,
             ::media::mojom::blink::AudioDecoderConfigPtr* out_audio_config
,
             ::media::mojom::blink::VideoDecoderConfigPtr* out_video_config
,
             DemuxerStream::Type type,
             ::mojo::ScopedDataPipeConsumerHandle pipe,
             ::media::mojom::blink::AudioDecoderConfigPtr audio_config,
             ::media::mojom::blink::VideoDecoderConfigPtr video_config) {*out_type = std::move(type);*out_pipe = std::move(pipe);*out_audio_config = std::move(audio_config);*out_video_config = std::move(video_config);
            loop->Quit();
          },
          &loop,
          out_type,
          out_pipe,
          out_audio_config,
          out_video_config));
  loop.Run();
}
void DemuxerStreamAsyncWaiter::Read(
    DemuxerStream::Status* out_status, ::media::mojom::blink::DecoderBufferPtr* out_buffer, ::media::mojom::blink::AudioDecoderConfigPtr* out_audio_config, ::media::mojom::blink::VideoDecoderConfigPtr* out_video_config) {
  base::RunLoop loop;
  proxy_->Read(
      base::BindOnce(
          [](base::RunLoop* loop,
             DemuxerStream::Status* out_status
,
             ::media::mojom::blink::DecoderBufferPtr* out_buffer
,
             ::media::mojom::blink::AudioDecoderConfigPtr* out_audio_config
,
             ::media::mojom::blink::VideoDecoderConfigPtr* out_video_config
,
             DemuxerStream::Status status,
             ::media::mojom::blink::DecoderBufferPtr buffer,
             ::media::mojom::blink::AudioDecoderConfigPtr audio_config,
             ::media::mojom::blink::VideoDecoderConfigPtr video_config) {*out_status = std::move(status);*out_buffer = std::move(buffer);*out_audio_config = std::move(audio_config);*out_video_config = std::move(video_config);
            loop->Quit();
          },
          &loop,
          out_status,
          out_buffer,
          out_audio_config,
          out_video_config));
  loop.Run();
}





}  // namespace blink
}  // namespace mojom
}  // namespace media


#if defined(__clang__)
#pragma clang diagnostic pop
#endif