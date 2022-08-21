// components/metrics/public/mojom/single_sample_metrics.mojom.cc is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#endif

#include "components/metrics/public/mojom/single_sample_metrics.mojom.h"

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

#include "components/metrics/public/mojom/single_sample_metrics.mojom-params-data.h"
#include "components/metrics/public/mojom/single_sample_metrics.mojom-shared-message-ids.h"

#include "components/metrics/public/mojom/single_sample_metrics.mojom-import-headers.h"
#include "components/metrics/public/mojom/single_sample_metrics.mojom-test-utils.h"


#ifndef COMPONENTS_METRICS_PUBLIC_MOJOM_SINGLE_SAMPLE_METRICS_MOJOM_JUMBO_H_
#define COMPONENTS_METRICS_PUBLIC_MOJOM_SINGLE_SAMPLE_METRICS_MOJOM_JUMBO_H_
#endif



namespace metrics {
namespace mojom {
const char SingleSampleMetricsProvider::Name_[] = "metrics.mojom.SingleSampleMetricsProvider";

SingleSampleMetricsProvider::IPCStableHashFunction SingleSampleMetricsProvider::MessageToMethodInfo_(mojo::Message& message) {
#if !BUILDFLAG(IS_FUCHSIA)
  switch (message.name()) {
    case internal::kSingleSampleMetricsProvider_AcquireSingleSampleMetric_Name: {
      return &SingleSampleMetricsProvider::AcquireSingleSampleMetric_Sym::IPCStableHash;
    }
  }
#endif  // !BUILDFLAG(IS_FUCHSIA)
  return nullptr;
}


const char* SingleSampleMetricsProvider::MessageToMethodName_(mojo::Message& message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  bool is_response = message.has_flag(mojo::Message::kFlagIsResponse);
  if (!is_response) {
    switch (message.name()) {
      case internal::kSingleSampleMetricsProvider_AcquireSingleSampleMetric_Name:
            return "Receive metrics::mojom::SingleSampleMetricsProvider::AcquireSingleSampleMetric";
    }
  } else {
    switch (message.name()) {
      case internal::kSingleSampleMetricsProvider_AcquireSingleSampleMetric_Name:
            return "Receive reply metrics::mojom::SingleSampleMetricsProvider::AcquireSingleSampleMetric";
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
uint32_t SingleSampleMetricsProvider::AcquireSingleSampleMetric_Sym::IPCStableHash() {
  // This method's address is used for indetifiying the mojo method name after
  // symbolization. So each IPCStableHash should have a unique address.
  // We cannot use NO_CODE_FOLDING() here - it relies on the uniqueness of
  // __LINE__ value, which is not unique accross different mojo modules.
  // The code below is very similar to NO_CODE_FOLDING, but it uses a unique
  // hash instead of __LINE__.
  constexpr uint32_t kHash = base::MD5Hash32Constexpr(
          "(Impl)metrics::mojom::SingleSampleMetricsProvider::AcquireSingleSampleMetric");
  const uint32_t hash = kHash;
  base::debug::Alias(&hash);
  return hash;
}
# endif // !BUILDFLAG(IS_FUCHSIA)

SingleSampleMetricsProviderProxy::SingleSampleMetricsProviderProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void SingleSampleMetricsProviderProxy::AcquireSingleSampleMetric(
    const std::string& in_histogram_name, int32_t in_min, int32_t in_max, uint32_t in_bucket_count, int32_t in_flags, ::mojo::PendingReceiver<SingleSampleMetric> in_receiver) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1(
    "mojom", "Send metrics::mojom::SingleSampleMetricsProvider::AcquireSingleSampleMetric", "input_parameters",
    [&](perfetto::TracedValue context){
      auto dict = std::move(context).WriteDictionary();
      perfetto::WriteIntoTracedValueWithFallback(
           dict.AddItem("histogram_name"), in_histogram_name,
                        "<value of type const std::string&>");
      perfetto::WriteIntoTracedValueWithFallback(
           dict.AddItem("min"), in_min,
                        "<value of type int32_t>");
      perfetto::WriteIntoTracedValueWithFallback(
           dict.AddItem("max"), in_max,
                        "<value of type int32_t>");
      perfetto::WriteIntoTracedValueWithFallback(
           dict.AddItem("bucket_count"), in_bucket_count,
                        "<value of type uint32_t>");
      perfetto::WriteIntoTracedValueWithFallback(
           dict.AddItem("flags"), in_flags,
                        "<value of type int32_t>");
      perfetto::WriteIntoTracedValueWithFallback(
           dict.AddItem("receiver"), in_receiver,
                        "<value of type ::mojo::PendingReceiver<SingleSampleMetric>>");
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
      internal::kSingleSampleMetricsProvider_AcquireSingleSampleMetric_Name, kFlags, 0, 0, nullptr);
  mojo::internal::MessageFragment<
      ::metrics::mojom::internal::SingleSampleMetricsProvider_AcquireSingleSampleMetric_Params_Data> params(
          message);
  params.Allocate();
  mojo::internal::MessageFragment<
      typename decltype(params->histogram_name)::BaseType> histogram_name_fragment(
          params.message());
  mojo::internal::Serialize<mojo::StringDataView>(
      in_histogram_name, histogram_name_fragment);
  params->histogram_name.Set(
      histogram_name_fragment.is_null() ? nullptr : histogram_name_fragment.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->histogram_name.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null histogram_name in SingleSampleMetricsProvider.AcquireSingleSampleMetric request");
  params->min = in_min;
  params->max = in_max;
  params->bucket_count = in_bucket_count;
  params->flags = in_flags;
  mojo::internal::Serialize<mojo::InterfaceRequestDataView<::metrics::mojom::SingleSampleMetricInterfaceBase>>(
      in_receiver, &params->receiver, &params.message());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->receiver),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid receiver in SingleSampleMetricsProvider.AcquireSingleSampleMetric request");

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(SingleSampleMetricsProvider::Name_);
  message.set_method_name("AcquireSingleSampleMetric");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ::mojo::internal::SendMojoMessage(*receiver_, message);
}

// static
bool SingleSampleMetricsProviderStubDispatch::Accept(
    SingleSampleMetricsProvider* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kSingleSampleMetricsProvider_AcquireSingleSampleMetric_Name: {

      DCHECK(message->is_serialized());
      internal::SingleSampleMetricsProvider_AcquireSingleSampleMetric_Params_Data* params =
          reinterpret_cast<internal::SingleSampleMetricsProvider_AcquireSingleSampleMetric_Params_Data*>(
              message->mutable_payload());
      
      bool success = true;
      std::string p_histogram_name{};
      int32_t p_min{};
      int32_t p_max{};
      uint32_t p_bucket_count{};
      int32_t p_flags{};
      ::mojo::PendingReceiver<SingleSampleMetric> p_receiver{};
      SingleSampleMetricsProvider_AcquireSingleSampleMetric_ParamsDataView input_data_view(params, message);
      
      if (success && !input_data_view.ReadHistogramName(&p_histogram_name))
        success = false;
      if (success)
        p_min = input_data_view.min();
      if (success)
        p_max = input_data_view.max();
      if (success)
        p_bucket_count = input_data_view.bucket_count();
      if (success)
        p_flags = input_data_view.flags();
      if (success) {
        p_receiver =
            input_data_view.TakeReceiver<decltype(p_receiver)>();
      }
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            SingleSampleMetricsProvider::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->AcquireSingleSampleMetric(
std::move(p_histogram_name), 
std::move(p_min), 
std::move(p_max), 
std::move(p_bucket_count), 
std::move(p_flags), 
std::move(p_receiver));
      return true;
    }
  }
  return false;
}

// static
bool SingleSampleMetricsProviderStubDispatch::AcceptWithResponder(
    SingleSampleMetricsProvider* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  [[maybe_unused]] const bool message_is_sync =
      message->has_flag(mojo::Message::kFlagIsSync);
  [[maybe_unused]] const uint64_t request_id = message->request_id();
  switch (message->header()->name) {
    case internal::kSingleSampleMetricsProvider_AcquireSingleSampleMetric_Name: {
      break;
    }
  }
  return false;
}


static const mojo::internal::GenericValidationInfo kSingleSampleMetricsProviderValidationInfo[] = {
    {&internal::SingleSampleMetricsProvider_AcquireSingleSampleMetric_Params_Data::Validate,
     nullptr /* no response */},
};

bool SingleSampleMetricsProviderRequestValidator::Accept(mojo::Message* message) {
  const char* name = ::metrics::mojom::SingleSampleMetricsProvider::Name_;
  return mojo::internal::ValidateRequestGenericPacked(message, name, kSingleSampleMetricsProviderValidationInfo);
}

const char SingleSampleMetric::Name_[] = "metrics.mojom.SingleSampleMetric";

SingleSampleMetric::IPCStableHashFunction SingleSampleMetric::MessageToMethodInfo_(mojo::Message& message) {
#if !BUILDFLAG(IS_FUCHSIA)
  switch (message.name()) {
    case internal::kSingleSampleMetric_SetSample_Name: {
      return &SingleSampleMetric::SetSample_Sym::IPCStableHash;
    }
  }
#endif  // !BUILDFLAG(IS_FUCHSIA)
  return nullptr;
}


const char* SingleSampleMetric::MessageToMethodName_(mojo::Message& message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  bool is_response = message.has_flag(mojo::Message::kFlagIsResponse);
  if (!is_response) {
    switch (message.name()) {
      case internal::kSingleSampleMetric_SetSample_Name:
            return "Receive metrics::mojom::SingleSampleMetric::SetSample";
    }
  } else {
    switch (message.name()) {
      case internal::kSingleSampleMetric_SetSample_Name:
            return "Receive reply metrics::mojom::SingleSampleMetric::SetSample";
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
uint32_t SingleSampleMetric::SetSample_Sym::IPCStableHash() {
  // This method's address is used for indetifiying the mojo method name after
  // symbolization. So each IPCStableHash should have a unique address.
  // We cannot use NO_CODE_FOLDING() here - it relies on the uniqueness of
  // __LINE__ value, which is not unique accross different mojo modules.
  // The code below is very similar to NO_CODE_FOLDING, but it uses a unique
  // hash instead of __LINE__.
  constexpr uint32_t kHash = base::MD5Hash32Constexpr(
          "(Impl)metrics::mojom::SingleSampleMetric::SetSample");
  const uint32_t hash = kHash;
  base::debug::Alias(&hash);
  return hash;
}
# endif // !BUILDFLAG(IS_FUCHSIA)

SingleSampleMetricProxy::SingleSampleMetricProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void SingleSampleMetricProxy::SetSample(
    int32_t in_sample) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1(
    "mojom", "Send metrics::mojom::SingleSampleMetric::SetSample", "input_parameters",
    [&](perfetto::TracedValue context){
      auto dict = std::move(context).WriteDictionary();
      perfetto::WriteIntoTracedValueWithFallback(
           dict.AddItem("sample"), in_sample,
                        "<value of type int32_t>");
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
      internal::kSingleSampleMetric_SetSample_Name, kFlags, 0, 0, nullptr);
  mojo::internal::MessageFragment<
      ::metrics::mojom::internal::SingleSampleMetric_SetSample_Params_Data> params(
          message);
  params.Allocate();
  params->sample = in_sample;

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(SingleSampleMetric::Name_);
  message.set_method_name("SetSample");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ::mojo::internal::SendMojoMessage(*receiver_, message);
}

// static
bool SingleSampleMetricStubDispatch::Accept(
    SingleSampleMetric* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kSingleSampleMetric_SetSample_Name: {

      DCHECK(message->is_serialized());
      internal::SingleSampleMetric_SetSample_Params_Data* params =
          reinterpret_cast<internal::SingleSampleMetric_SetSample_Params_Data*>(
              message->mutable_payload());
      
      bool success = true;
      int32_t p_sample{};
      SingleSampleMetric_SetSample_ParamsDataView input_data_view(params, message);
      
      if (success)
        p_sample = input_data_view.sample();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            SingleSampleMetric::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SetSample(
std::move(p_sample));
      return true;
    }
  }
  return false;
}

// static
bool SingleSampleMetricStubDispatch::AcceptWithResponder(
    SingleSampleMetric* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  [[maybe_unused]] const bool message_is_sync =
      message->has_flag(mojo::Message::kFlagIsSync);
  [[maybe_unused]] const uint64_t request_id = message->request_id();
  switch (message->header()->name) {
    case internal::kSingleSampleMetric_SetSample_Name: {
      break;
    }
  }
  return false;
}


static const mojo::internal::GenericValidationInfo kSingleSampleMetricValidationInfo[] = {
    {&internal::SingleSampleMetric_SetSample_Params_Data::Validate,
     nullptr /* no response */},
};

bool SingleSampleMetricRequestValidator::Accept(mojo::Message* message) {
  const char* name = ::metrics::mojom::SingleSampleMetric::Name_;
  return mojo::internal::ValidateRequestGenericPacked(message, name, kSingleSampleMetricValidationInfo);
}



}  // namespace mojom
}  // namespace metrics


namespace mojo {

}  // namespace mojo


// Symbols declared in the -test-utils.h header are defined here instead of a
// separate .cc file to save compile time.


namespace metrics {
namespace mojom {


void SingleSampleMetricsProviderInterceptorForTesting::AcquireSingleSampleMetric(const std::string& histogram_name, int32_t min, int32_t max, uint32_t bucket_count, int32_t flags, ::mojo::PendingReceiver<SingleSampleMetric> receiver) {
  GetForwardingInterface()->AcquireSingleSampleMetric(std::move(histogram_name), std::move(min), std::move(max), std::move(bucket_count), std::move(flags), std::move(receiver));
}
SingleSampleMetricsProviderAsyncWaiter::SingleSampleMetricsProviderAsyncWaiter(
    SingleSampleMetricsProvider* proxy) : proxy_(proxy) {}

SingleSampleMetricsProviderAsyncWaiter::~SingleSampleMetricsProviderAsyncWaiter() = default;




void SingleSampleMetricInterceptorForTesting::SetSample(int32_t sample) {
  GetForwardingInterface()->SetSample(std::move(sample));
}
SingleSampleMetricAsyncWaiter::SingleSampleMetricAsyncWaiter(
    SingleSampleMetric* proxy) : proxy_(proxy) {}

SingleSampleMetricAsyncWaiter::~SingleSampleMetricAsyncWaiter() = default;






}  // namespace mojom
}  // namespace metrics


#if defined(__clang__)
#pragma clang diagnostic pop
#endif