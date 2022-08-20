// third_party/blink/public/mojom/service_worker/service_worker_stream_handle.mojom-params-data.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_STREAM_HANDLE_MOJOM_PARAMS_DATA_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_STREAM_HANDLE_MOJOM_PARAMS_DATA_H_

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
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ServiceWorkerStreamCallback_OnCompleted_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  friend class mojo::internal::MessageFragment<ServiceWorkerStreamCallback_OnCompleted_Params_Data>;

  ServiceWorkerStreamCallback_OnCompleted_Params_Data();
  ~ServiceWorkerStreamCallback_OnCompleted_Params_Data() = delete;
};
static_assert(sizeof(ServiceWorkerStreamCallback_OnCompleted_Params_Data) == 8,
              "Bad sizeof(ServiceWorkerStreamCallback_OnCompleted_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ServiceWorkerStreamCallback_OnAborted_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  friend class mojo::internal::MessageFragment<ServiceWorkerStreamCallback_OnAborted_Params_Data>;

  ServiceWorkerStreamCallback_OnAborted_Params_Data();
  ~ServiceWorkerStreamCallback_OnAborted_Params_Data() = delete;
};
static_assert(sizeof(ServiceWorkerStreamCallback_OnAborted_Params_Data) == 8,
              "Bad sizeof(ServiceWorkerStreamCallback_OnAborted_Params_Data)");

}  // namespace internal


class ServiceWorkerStreamCallback_OnCompleted_ParamsDataView {
 public:
  ServiceWorkerStreamCallback_OnCompleted_ParamsDataView() = default;

  ServiceWorkerStreamCallback_OnCompleted_ParamsDataView(
      internal::ServiceWorkerStreamCallback_OnCompleted_Params_Data* data,
      mojo::Message* message)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::ServiceWorkerStreamCallback_OnCompleted_Params_Data* data_ = nullptr;
};



class ServiceWorkerStreamCallback_OnAborted_ParamsDataView {
 public:
  ServiceWorkerStreamCallback_OnAborted_ParamsDataView() = default;

  ServiceWorkerStreamCallback_OnAborted_ParamsDataView(
      internal::ServiceWorkerStreamCallback_OnAborted_Params_Data* data,
      mojo::Message* message)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::ServiceWorkerStreamCallback_OnAborted_Params_Data* data_ = nullptr;
};





}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#endif

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_STREAM_HANDLE_MOJOM_PARAMS_DATA_H_