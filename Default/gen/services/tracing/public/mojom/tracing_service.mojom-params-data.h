// services/tracing/public/mojom/tracing_service.mojom-params-data.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_TRACING_PUBLIC_MOJOM_TRACING_SERVICE_MOJOM_PARAMS_DATA_H_
#define SERVICES_TRACING_PUBLIC_MOJOM_TRACING_SERVICE_MOJOM_PARAMS_DATA_H_

#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#endif
namespace tracing {
namespace mojom {
namespace internal {

class ValidationContext;
class COMPONENT_EXPORT(TRACING_MOJOM_SHARED) TracingService_Initialize_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::ClientInfo_Data>>> clients;

 private:
  friend class mojo::internal::MessageFragment<TracingService_Initialize_Params_Data>;

  TracingService_Initialize_Params_Data();
  ~TracingService_Initialize_Params_Data() = delete;
};
static_assert(sizeof(TracingService_Initialize_Params_Data) == 16,
              "Bad sizeof(TracingService_Initialize_Params_Data)");
class COMPONENT_EXPORT(TRACING_MOJOM_SHARED) TracingService_AddClient_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::ClientInfo_Data> client;

 private:
  friend class mojo::internal::MessageFragment<TracingService_AddClient_Params_Data>;

  TracingService_AddClient_Params_Data();
  ~TracingService_AddClient_Params_Data() = delete;
};
static_assert(sizeof(TracingService_AddClient_Params_Data) == 16,
              "Bad sizeof(TracingService_AddClient_Params_Data)");
class COMPONENT_EXPORT(TRACING_MOJOM_SHARED) TracingService_BindConsumerHost_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data receiver;
  uint8_t padfinal_[4];

 private:
  friend class mojo::internal::MessageFragment<TracingService_BindConsumerHost_Params_Data>;

  TracingService_BindConsumerHost_Params_Data();
  ~TracingService_BindConsumerHost_Params_Data() = delete;
};
static_assert(sizeof(TracingService_BindConsumerHost_Params_Data) == 16,
              "Bad sizeof(TracingService_BindConsumerHost_Params_Data)");

}  // namespace internal


class TracingService_Initialize_ParamsDataView {
 public:
  TracingService_Initialize_ParamsDataView() = default;

  TracingService_Initialize_ParamsDataView(
      internal::TracingService_Initialize_Params_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  inline void GetClientsDataView(
      mojo::ArrayDataView<ClientInfoDataView>* output);

  template <typename UserType>
  [[nodiscard]] bool ReadClients(UserType* output) {
    
    auto* pointer = data_->clients.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::tracing::mojom::ClientInfoDataView>>(
        pointer, output, message_);
  }
 private:
  internal::TracingService_Initialize_Params_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



class TracingService_AddClient_ParamsDataView {
 public:
  TracingService_AddClient_ParamsDataView() = default;

  TracingService_AddClient_ParamsDataView(
      internal::TracingService_AddClient_Params_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  inline void GetClientDataView(
      ClientInfoDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadClient(UserType* output) {
    
    auto* pointer = data_->client.Get();
    return mojo::internal::Deserialize<::tracing::mojom::ClientInfoDataView>(
        pointer, output, message_);
  }
 private:
  internal::TracingService_AddClient_Params_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



class TracingService_BindConsumerHost_ParamsDataView {
 public:
  TracingService_BindConsumerHost_ParamsDataView() = default;

  TracingService_BindConsumerHost_ParamsDataView(
      internal::TracingService_BindConsumerHost_Params_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeReceiver() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<mojo::InterfaceRequestDataView<::tracing::mojom::ConsumerHostInterfaceBase>>(
            &data_->receiver, &result, message_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::TracingService_BindConsumerHost_Params_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};


inline void TracingService_Initialize_ParamsDataView::GetClientsDataView(
    mojo::ArrayDataView<ClientInfoDataView>* output) {
  auto pointer = data_->clients.Get();
  *output = mojo::ArrayDataView<ClientInfoDataView>(pointer, message_);
}


inline void TracingService_AddClient_ParamsDataView::GetClientDataView(
    ClientInfoDataView* output) {
  auto pointer = data_->client.Get();
  *output = ClientInfoDataView(pointer, message_);
}



}  // namespace mojom
}  // namespace tracing

#if defined(__clang__)
#pragma clang diagnostic pop
#endif

#endif  // SERVICES_TRACING_PUBLIC_MOJOM_TRACING_SERVICE_MOJOM_PARAMS_DATA_H_