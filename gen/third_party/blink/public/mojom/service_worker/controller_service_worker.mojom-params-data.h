// third_party/blink/public/mojom/service_worker/controller_service_worker.mojom-params-data.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_CONTROLLER_SERVICE_WORKER_MOJOM_PARAMS_DATA_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_CONTROLLER_SERVICE_WORKER_MOJOM_PARAMS_DATA_H_

#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#endif
namespace blink {
namespace mojom {
namespace internal {

class ValidationContext;
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ControllerServiceWorker_DispatchFetchEventForSubresource_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::blink::mojom::internal::DispatchFetchEventParams_Data> params;
  mojo::internal::Interface_Data response_callback;

 private:
  friend class mojo::internal::MessageFragment<ControllerServiceWorker_DispatchFetchEventForSubresource_Params_Data>;

  ControllerServiceWorker_DispatchFetchEventForSubresource_Params_Data();
  ~ControllerServiceWorker_DispatchFetchEventForSubresource_Params_Data() = delete;
};
static_assert(sizeof(ControllerServiceWorker_DispatchFetchEventForSubresource_Params_Data) == 24,
              "Bad sizeof(ControllerServiceWorker_DispatchFetchEventForSubresource_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ControllerServiceWorker_DispatchFetchEventForSubresource_ResponseParams_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t status;
  uint8_t padfinal_[4];

 private:
  friend class mojo::internal::MessageFragment<ControllerServiceWorker_DispatchFetchEventForSubresource_ResponseParams_Data>;

  ControllerServiceWorker_DispatchFetchEventForSubresource_ResponseParams_Data();
  ~ControllerServiceWorker_DispatchFetchEventForSubresource_ResponseParams_Data() = delete;
};
static_assert(sizeof(ControllerServiceWorker_DispatchFetchEventForSubresource_ResponseParams_Data) == 16,
              "Bad sizeof(ControllerServiceWorker_DispatchFetchEventForSubresource_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ControllerServiceWorker_Clone_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data receiver;
  uint8_t pad0_[4];
  mojo::internal::Pointer<::network::mojom::internal::CrossOriginEmbedderPolicy_Data> cross_origin_embedder_policy;
  mojo::internal::Interface_Data coep_reporter;

 private:
  friend class mojo::internal::MessageFragment<ControllerServiceWorker_Clone_Params_Data>;

  ControllerServiceWorker_Clone_Params_Data();
  ~ControllerServiceWorker_Clone_Params_Data() = delete;
};
static_assert(sizeof(ControllerServiceWorker_Clone_Params_Data) == 32,
              "Bad sizeof(ControllerServiceWorker_Clone_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ControllerServiceWorkerConnector_UpdateController_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Interface_Data controller;

 private:
  friend class mojo::internal::MessageFragment<ControllerServiceWorkerConnector_UpdateController_Params_Data>;

  ControllerServiceWorkerConnector_UpdateController_Params_Data();
  ~ControllerServiceWorkerConnector_UpdateController_Params_Data() = delete;
};
static_assert(sizeof(ControllerServiceWorkerConnector_UpdateController_Params_Data) == 16,
              "Bad sizeof(ControllerServiceWorkerConnector_UpdateController_Params_Data)");

}  // namespace internal


class ControllerServiceWorker_DispatchFetchEventForSubresource_ParamsDataView {
 public:
  ControllerServiceWorker_DispatchFetchEventForSubresource_ParamsDataView() = default;

  ControllerServiceWorker_DispatchFetchEventForSubresource_ParamsDataView(
      internal::ControllerServiceWorker_DispatchFetchEventForSubresource_Params_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  inline void GetParamsDataView(
      ::blink::mojom::DispatchFetchEventParamsDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadParams(UserType* output) {
    
    auto* pointer = data_->params.Get();
    return mojo::internal::Deserialize<::blink::mojom::DispatchFetchEventParamsDataView>(
        pointer, output, message_);
  }
  template <typename UserType>
  UserType TakeResponseCallback() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<mojo::InterfacePtrDataView<::blink::mojom::ServiceWorkerFetchResponseCallbackInterfaceBase>>(
            &data_->response_callback, &result, message_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::ControllerServiceWorker_DispatchFetchEventForSubresource_Params_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



class ControllerServiceWorker_DispatchFetchEventForSubresource_ResponseParamsDataView {
 public:
  ControllerServiceWorker_DispatchFetchEventForSubresource_ResponseParamsDataView() = default;

  ControllerServiceWorker_DispatchFetchEventForSubresource_ResponseParamsDataView(
      internal::ControllerServiceWorker_DispatchFetchEventForSubresource_ResponseParams_Data* data,
      mojo::Message* message)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  [[nodiscard]] bool ReadStatus(UserType* output) const {
    auto data_value = data_->status;
    return mojo::internal::Deserialize<::blink::mojom::ServiceWorkerEventStatus>(
        data_value, output);
  }
  ::blink::mojom::ServiceWorkerEventStatus status() const {
    return ::mojo::internal::ToKnownEnumValueHelper(
          static_cast<::blink::mojom::ServiceWorkerEventStatus>(data_->status));
  }
 private:
  internal::ControllerServiceWorker_DispatchFetchEventForSubresource_ResponseParams_Data* data_ = nullptr;
};



class ControllerServiceWorker_Clone_ParamsDataView {
 public:
  ControllerServiceWorker_Clone_ParamsDataView() = default;

  ControllerServiceWorker_Clone_ParamsDataView(
      internal::ControllerServiceWorker_Clone_Params_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeReceiver() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<mojo::InterfaceRequestDataView<::blink::mojom::ControllerServiceWorkerInterfaceBase>>(
            &data_->receiver, &result, message_);
    DCHECK(ret);
    return result;
  }
  inline void GetCrossOriginEmbedderPolicyDataView(
      ::network::mojom::CrossOriginEmbedderPolicyDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadCrossOriginEmbedderPolicy(UserType* output) {
    
    auto* pointer = data_->cross_origin_embedder_policy.Get();
    return mojo::internal::Deserialize<::network::mojom::CrossOriginEmbedderPolicyDataView>(
        pointer, output, message_);
  }
  template <typename UserType>
  UserType TakeCoepReporter() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<mojo::InterfacePtrDataView<::network::mojom::CrossOriginEmbedderPolicyReporterInterfaceBase>>(
            &data_->coep_reporter, &result, message_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::ControllerServiceWorker_Clone_Params_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



class ControllerServiceWorkerConnector_UpdateController_ParamsDataView {
 public:
  ControllerServiceWorkerConnector_UpdateController_ParamsDataView() = default;

  ControllerServiceWorkerConnector_UpdateController_ParamsDataView(
      internal::ControllerServiceWorkerConnector_UpdateController_Params_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeController() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<mojo::InterfacePtrDataView<::blink::mojom::ControllerServiceWorkerInterfaceBase>>(
            &data_->controller, &result, message_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::ControllerServiceWorkerConnector_UpdateController_Params_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};


inline void ControllerServiceWorker_DispatchFetchEventForSubresource_ParamsDataView::GetParamsDataView(
    ::blink::mojom::DispatchFetchEventParamsDataView* output) {
  auto pointer = data_->params.Get();
  *output = ::blink::mojom::DispatchFetchEventParamsDataView(pointer, message_);
}




inline void ControllerServiceWorker_Clone_ParamsDataView::GetCrossOriginEmbedderPolicyDataView(
    ::network::mojom::CrossOriginEmbedderPolicyDataView* output) {
  auto pointer = data_->cross_origin_embedder_policy.Get();
  *output = ::network::mojom::CrossOriginEmbedderPolicyDataView(pointer, message_);
}



}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#endif

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_CONTROLLER_SERVICE_WORKER_MOJOM_PARAMS_DATA_H_