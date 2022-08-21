// third_party/blink/public/mojom/worker/shared_worker_connector.mojom-params-data.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_SHARED_WORKER_CONNECTOR_MOJOM_PARAMS_DATA_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_SHARED_WORKER_CONNECTOR_MOJOM_PARAMS_DATA_H_

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
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) SharedWorkerConnector_Connect_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::blink::mojom::internal::SharedWorkerInfo_Data> info;
  mojo::internal::Interface_Data client;
  int32_t creation_context_type;
  uint8_t pad2_[4];
  mojo::internal::Pointer<::blink::mojom::internal::MessagePortDescriptor_Data> message_port;
  mojo::internal::Interface_Data blob_url_token;
  int64_t client_ukm_source_id;

 private:
  friend class mojo::internal::MessageFragment<SharedWorkerConnector_Connect_Params_Data>;

  SharedWorkerConnector_Connect_Params_Data();
  ~SharedWorkerConnector_Connect_Params_Data() = delete;
};
static_assert(sizeof(SharedWorkerConnector_Connect_Params_Data) == 56,
              "Bad sizeof(SharedWorkerConnector_Connect_Params_Data)");

}  // namespace internal


class SharedWorkerConnector_Connect_ParamsDataView {
 public:
  SharedWorkerConnector_Connect_ParamsDataView() = default;

  SharedWorkerConnector_Connect_ParamsDataView(
      internal::SharedWorkerConnector_Connect_Params_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  inline void GetInfoDataView(
      ::blink::mojom::SharedWorkerInfoDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadInfo(UserType* output) {
    
    auto* pointer = data_->info.Get();
    return mojo::internal::Deserialize<::blink::mojom::SharedWorkerInfoDataView>(
        pointer, output, message_);
  }
  template <typename UserType>
  UserType TakeClient() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<mojo::InterfacePtrDataView<::blink::mojom::SharedWorkerClientInterfaceBase>>(
            &data_->client, &result, message_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  [[nodiscard]] bool ReadCreationContextType(UserType* output) const {
    auto data_value = data_->creation_context_type;
    return mojo::internal::Deserialize<::blink::mojom::SharedWorkerCreationContextType>(
        data_value, output);
  }
  ::blink::mojom::SharedWorkerCreationContextType creation_context_type() const {
    return ::mojo::internal::ToKnownEnumValueHelper(
          static_cast<::blink::mojom::SharedWorkerCreationContextType>(data_->creation_context_type));
  }
  inline void GetMessagePortDataView(
      ::blink::mojom::MessagePortDescriptorDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadMessagePort(UserType* output) {
    
    auto* pointer = data_->message_port.Get();
    return mojo::internal::Deserialize<::blink::mojom::MessagePortDescriptorDataView>(
        pointer, output, message_);
  }
  template <typename UserType>
  UserType TakeBlobUrlToken() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<mojo::InterfacePtrDataView<::blink::mojom::BlobURLTokenInterfaceBase>>(
            &data_->blob_url_token, &result, message_);
    DCHECK(ret);
    return result;
  }
  int64_t client_ukm_source_id() const {
    return data_->client_ukm_source_id;
  }
 private:
  internal::SharedWorkerConnector_Connect_Params_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};


inline void SharedWorkerConnector_Connect_ParamsDataView::GetInfoDataView(
    ::blink::mojom::SharedWorkerInfoDataView* output) {
  auto pointer = data_->info.Get();
  *output = ::blink::mojom::SharedWorkerInfoDataView(pointer, message_);
}
inline void SharedWorkerConnector_Connect_ParamsDataView::GetMessagePortDataView(
    ::blink::mojom::MessagePortDescriptorDataView* output) {
  auto pointer = data_->message_port.Get();
  *output = ::blink::mojom::MessagePortDescriptorDataView(pointer, message_);
}

}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#endif

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_SHARED_WORKER_CONNECTOR_MOJOM_PARAMS_DATA_H_