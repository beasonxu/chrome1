// third_party/blink/public/mojom/service_worker/service_worker_worker_client_registry.mojom-params-data.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_WORKER_CLIENT_REGISTRY_MOJOM_PARAMS_DATA_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_WORKER_CLIENT_REGISTRY_MOJOM_PARAMS_DATA_H_

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
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ServiceWorkerWorkerClientRegistry_RegisterWorkerClient_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Interface_Data client;

 private:
  friend class mojo::internal::MessageFragment<ServiceWorkerWorkerClientRegistry_RegisterWorkerClient_Params_Data>;

  ServiceWorkerWorkerClientRegistry_RegisterWorkerClient_Params_Data();
  ~ServiceWorkerWorkerClientRegistry_RegisterWorkerClient_Params_Data() = delete;
};
static_assert(sizeof(ServiceWorkerWorkerClientRegistry_RegisterWorkerClient_Params_Data) == 16,
              "Bad sizeof(ServiceWorkerWorkerClientRegistry_RegisterWorkerClient_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ServiceWorkerWorkerClientRegistry_CloneWorkerClientRegistry_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data host;
  uint8_t padfinal_[4];

 private:
  friend class mojo::internal::MessageFragment<ServiceWorkerWorkerClientRegistry_CloneWorkerClientRegistry_Params_Data>;

  ServiceWorkerWorkerClientRegistry_CloneWorkerClientRegistry_Params_Data();
  ~ServiceWorkerWorkerClientRegistry_CloneWorkerClientRegistry_Params_Data() = delete;
};
static_assert(sizeof(ServiceWorkerWorkerClientRegistry_CloneWorkerClientRegistry_Params_Data) == 16,
              "Bad sizeof(ServiceWorkerWorkerClientRegistry_CloneWorkerClientRegistry_Params_Data)");

}  // namespace internal


class ServiceWorkerWorkerClientRegistry_RegisterWorkerClient_ParamsDataView {
 public:
  ServiceWorkerWorkerClientRegistry_RegisterWorkerClient_ParamsDataView() = default;

  ServiceWorkerWorkerClientRegistry_RegisterWorkerClient_ParamsDataView(
      internal::ServiceWorkerWorkerClientRegistry_RegisterWorkerClient_Params_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeClient() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<mojo::InterfacePtrDataView<::blink::mojom::ServiceWorkerWorkerClientInterfaceBase>>(
            &data_->client, &result, message_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::ServiceWorkerWorkerClientRegistry_RegisterWorkerClient_Params_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



class ServiceWorkerWorkerClientRegistry_CloneWorkerClientRegistry_ParamsDataView {
 public:
  ServiceWorkerWorkerClientRegistry_CloneWorkerClientRegistry_ParamsDataView() = default;

  ServiceWorkerWorkerClientRegistry_CloneWorkerClientRegistry_ParamsDataView(
      internal::ServiceWorkerWorkerClientRegistry_CloneWorkerClientRegistry_Params_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeHost() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<mojo::InterfaceRequestDataView<::blink::mojom::ServiceWorkerWorkerClientRegistryInterfaceBase>>(
            &data_->host, &result, message_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::ServiceWorkerWorkerClientRegistry_CloneWorkerClientRegistry_Params_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};





}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#endif

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_WORKER_CLIENT_REGISTRY_MOJOM_PARAMS_DATA_H_