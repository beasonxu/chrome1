// media/mojo/mojom/video_decode_perf_history.mojom-blink.cc is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#endif

#include "media/mojo/mojom/video_decode_perf_history.mojom-blink.h"

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

#include "media/mojo/mojom/video_decode_perf_history.mojom-params-data.h"
#include "media/mojo/mojom/video_decode_perf_history.mojom-shared-message-ids.h"

#include "media/mojo/mojom/video_decode_perf_history.mojom-blink-import-headers.h"
#include "media/mojo/mojom/video_decode_perf_history.mojom-blink-test-utils.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef MEDIA_MOJO_MOJOM_VIDEO_DECODE_PERF_HISTORY_MOJOM_BLINK_JUMBO_H_
#define MEDIA_MOJO_MOJOM_VIDEO_DECODE_PERF_HISTORY_MOJOM_BLINK_JUMBO_H_
#endif



namespace media {
namespace mojom {
namespace blink {
const char VideoDecodePerfHistory::Name_[] = "media.mojom.VideoDecodePerfHistory";

VideoDecodePerfHistory::IPCStableHashFunction VideoDecodePerfHistory::MessageToMethodInfo_(mojo::Message& message) {
#if !BUILDFLAG(IS_FUCHSIA)
  switch (message.name()) {
    case internal::kVideoDecodePerfHistory_GetPerfInfo_Name: {
      return &VideoDecodePerfHistory::GetPerfInfo_Sym::IPCStableHash;
    }
  }
#endif  // !BUILDFLAG(IS_FUCHSIA)
  return nullptr;
}


const char* VideoDecodePerfHistory::MessageToMethodName_(mojo::Message& message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  bool is_response = message.has_flag(mojo::Message::kFlagIsResponse);
  if (!is_response) {
    switch (message.name()) {
      case internal::kVideoDecodePerfHistory_GetPerfInfo_Name:
            return "Receive media::mojom::VideoDecodePerfHistory::GetPerfInfo";
    }
  } else {
    switch (message.name()) {
      case internal::kVideoDecodePerfHistory_GetPerfInfo_Name:
            return "Receive reply media::mojom::VideoDecodePerfHistory::GetPerfInfo";
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
uint32_t VideoDecodePerfHistory::GetPerfInfo_Sym::IPCStableHash() {
  // This method's address is used for indetifiying the mojo method name after
  // symbolization. So each IPCStableHash should have a unique address.
  // We cannot use NO_CODE_FOLDING() here - it relies on the uniqueness of
  // __LINE__ value, which is not unique accross different mojo modules.
  // The code below is very similar to NO_CODE_FOLDING, but it uses a unique
  // hash instead of __LINE__.
  constexpr uint32_t kHash = base::MD5Hash32Constexpr(
          "(Impl)media::mojom::VideoDecodePerfHistory::GetPerfInfo");
  const uint32_t hash = kHash;
  base::debug::Alias(&hash);
  return hash;
}
# endif // !BUILDFLAG(IS_FUCHSIA)

class VideoDecodePerfHistory_GetPerfInfo_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  VideoDecodePerfHistory_GetPerfInfo_ForwardToCallback(
      VideoDecodePerfHistory::GetPerfInfoCallback callback
      ) : callback_(std::move(callback)) {
  }

  VideoDecodePerfHistory_GetPerfInfo_ForwardToCallback(const VideoDecodePerfHistory_GetPerfInfo_ForwardToCallback&) = delete;
  VideoDecodePerfHistory_GetPerfInfo_ForwardToCallback& operator=(const VideoDecodePerfHistory_GetPerfInfo_ForwardToCallback&) = delete;

  bool Accept(mojo::Message* message) override;
 private:
  VideoDecodePerfHistory::GetPerfInfoCallback callback_;
};

VideoDecodePerfHistoryProxy::VideoDecodePerfHistoryProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void VideoDecodePerfHistoryProxy::GetPerfInfo(
    ::media::mojom::blink::PredictionFeaturesPtr in_features, GetPerfInfoCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1(
    "mojom", "Send media::mojom::VideoDecodePerfHistory::GetPerfInfo", "input_parameters",
    [&](perfetto::TracedValue context){
      auto dict = std::move(context).WriteDictionary();
      perfetto::WriteIntoTracedValueWithFallback(
           dict.AddItem("features"), in_features,
                        "<value of type ::media::mojom::blink::PredictionFeaturesPtr>");
   });
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  const bool kAllowInterrupt = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0) |
      ((kAllowInterrupt) ? 0 : mojo::Message::kFlagNoInterrupt);
  
  mojo::Message message(
      internal::kVideoDecodePerfHistory_GetPerfInfo_Name, kFlags, 0, 0, nullptr);
  mojo::internal::MessageFragment<
      ::media::mojom::internal::VideoDecodePerfHistory_GetPerfInfo_Params_Data> params(
          message);
  params.Allocate();
  mojo::internal::MessageFragment<
      typename decltype(params->features)::BaseType> features_fragment(
          params.message());
  mojo::internal::Serialize<::media::mojom::PredictionFeaturesDataView>(
      in_features, features_fragment);
  params->features.Set(
      features_fragment.is_null() ? nullptr : features_fragment.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->features.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null features in VideoDecodePerfHistory.GetPerfInfo request");

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(VideoDecodePerfHistory::Name_);
  message.set_method_name("GetPerfInfo");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new VideoDecodePerfHistory_GetPerfInfo_ForwardToCallback(
          std::move(callback)));
  ::mojo::internal::SendMojoMessage(*receiver_, message, std::move(responder));
}
class VideoDecodePerfHistory_GetPerfInfo_ProxyToResponder : public ::mojo::internal::ProxyToResponder {
 public:
  static VideoDecodePerfHistory::GetPerfInfoCallback CreateCallback(
      ::mojo::Message& message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<VideoDecodePerfHistory_GetPerfInfo_ProxyToResponder> proxy(
        new VideoDecodePerfHistory_GetPerfInfo_ProxyToResponder(
            message, std::move(responder)));
    return base::BindOnce(&VideoDecodePerfHistory_GetPerfInfo_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~VideoDecodePerfHistory_GetPerfInfo_ProxyToResponder() {
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
  VideoDecodePerfHistory_GetPerfInfo_ProxyToResponder(
      ::mojo::Message& message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : ::mojo::internal::ProxyToResponder(message, std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "VideoDecodePerfHistory::GetPerfInfoCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      bool in_is_smooth, bool in_is_power_efficient);
};

bool VideoDecodePerfHistory_GetPerfInfo_ForwardToCallback::Accept(
    mojo::Message* message) {

  DCHECK(message->is_serialized());
  internal::VideoDecodePerfHistory_GetPerfInfo_ResponseParams_Data* params =
      reinterpret_cast<
          internal::VideoDecodePerfHistory_GetPerfInfo_ResponseParams_Data*>(
              message->mutable_payload());
  
  bool success = true;
  bool p_is_smooth{};
  bool p_is_power_efficient{};
  VideoDecodePerfHistory_GetPerfInfo_ResponseParamsDataView input_data_view(params, message);
  
  if (success)
    p_is_smooth = input_data_view.is_smooth();
  if (success)
    p_is_power_efficient = input_data_view.is_power_efficient();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        VideoDecodePerfHistory::Name_, 0, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_is_smooth), 
std::move(p_is_power_efficient));
  return true;
}

void VideoDecodePerfHistory_GetPerfInfo_ProxyToResponder::Run(
    bool in_is_smooth, bool in_is_power_efficient) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1(
    "mojom", "Send reply media::mojom::VideoDecodePerfHistory::GetPerfInfo", "async_response_parameters",
    [&](perfetto::TracedValue context){
      auto dict = std::move(context).WriteDictionary();
      perfetto::WriteIntoTracedValueWithFallback(
           dict.AddItem("is_smooth"), in_is_smooth,
                        "<value of type bool>");
      perfetto::WriteIntoTracedValueWithFallback(
           dict.AddItem("is_power_efficient"), in_is_power_efficient,
                        "<value of type bool>");
   });
#endif
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0) |
      ((true) ? 0 : mojo::Message::kFlagNoInterrupt);
  
  mojo::Message message(
      internal::kVideoDecodePerfHistory_GetPerfInfo_Name, kFlags, 0, 0, nullptr);
  mojo::internal::MessageFragment<
      ::media::mojom::internal::VideoDecodePerfHistory_GetPerfInfo_ResponseParams_Data> params(
          message);
  params.Allocate();
  params->is_smooth = in_is_smooth;
  params->is_power_efficient = in_is_power_efficient;

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(VideoDecodePerfHistory::Name_);
  message.set_method_name("GetPerfInfo");
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
bool VideoDecodePerfHistoryStubDispatch::Accept(
    VideoDecodePerfHistory* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kVideoDecodePerfHistory_GetPerfInfo_Name: {
      break;
    }
  }
  return false;
}

// static
bool VideoDecodePerfHistoryStubDispatch::AcceptWithResponder(
    VideoDecodePerfHistory* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  [[maybe_unused]] const bool message_is_sync =
      message->has_flag(mojo::Message::kFlagIsSync);
  [[maybe_unused]] const uint64_t request_id = message->request_id();
  switch (message->header()->name) {
    case internal::kVideoDecodePerfHistory_GetPerfInfo_Name: {

      internal::VideoDecodePerfHistory_GetPerfInfo_Params_Data* params =
          reinterpret_cast<
              internal::VideoDecodePerfHistory_GetPerfInfo_Params_Data*>(
                  message->mutable_payload());
      
      bool success = true;
      ::media::mojom::blink::PredictionFeaturesPtr p_features{};
      VideoDecodePerfHistory_GetPerfInfo_ParamsDataView input_data_view(params, message);
      
      if (success && !input_data_view.ReadFeatures(&p_features))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            VideoDecodePerfHistory::Name_, 0, false);
        return false;
      }
      VideoDecodePerfHistory::GetPerfInfoCallback callback =
          VideoDecodePerfHistory_GetPerfInfo_ProxyToResponder::CreateCallback(
              *message, std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->GetPerfInfo(
std::move(p_features), std::move(callback));
      return true;
    }
  }
  return false;
}


static const mojo::internal::GenericValidationInfo kVideoDecodePerfHistoryValidationInfo[] = {
    {&internal::VideoDecodePerfHistory_GetPerfInfo_Params_Data::Validate,
     &internal::VideoDecodePerfHistory_GetPerfInfo_ResponseParams_Data::Validate},
};

bool VideoDecodePerfHistoryRequestValidator::Accept(mojo::Message* message) {
  const char* name = ::media::mojom::blink::VideoDecodePerfHistory::Name_;
  return mojo::internal::ValidateRequestGenericPacked(message, name, kVideoDecodePerfHistoryValidationInfo);
}

bool VideoDecodePerfHistoryResponseValidator::Accept(mojo::Message* message) {
  const char* name = ::media::mojom::blink::VideoDecodePerfHistory::Name_;
  return mojo::internal::ValidateResponseGenericPacked(message, name, kVideoDecodePerfHistoryValidationInfo);
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


void VideoDecodePerfHistoryInterceptorForTesting::GetPerfInfo(::media::mojom::blink::PredictionFeaturesPtr features, GetPerfInfoCallback callback) {
  GetForwardingInterface()->GetPerfInfo(std::move(features), std::move(callback));
}
VideoDecodePerfHistoryAsyncWaiter::VideoDecodePerfHistoryAsyncWaiter(
    VideoDecodePerfHistory* proxy) : proxy_(proxy) {}

VideoDecodePerfHistoryAsyncWaiter::~VideoDecodePerfHistoryAsyncWaiter() = default;

void VideoDecodePerfHistoryAsyncWaiter::GetPerfInfo(
    ::media::mojom::blink::PredictionFeaturesPtr features, bool* out_is_smooth, bool* out_is_power_efficient) {
  base::RunLoop loop;
  proxy_->GetPerfInfo(std::move(features),
      base::BindOnce(
          [](base::RunLoop* loop,
             bool* out_is_smooth
,
             bool* out_is_power_efficient
,
             bool is_smooth,
             bool is_power_efficient) {*out_is_smooth = std::move(is_smooth);*out_is_power_efficient = std::move(is_power_efficient);
            loop->Quit();
          },
          &loop,
          out_is_smooth,
          out_is_power_efficient));
  loop.Run();
}





}  // namespace blink
}  // namespace mojom
}  // namespace media


#if defined(__clang__)
#pragma clang diagnostic pop
#endif