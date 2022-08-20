// third_party/blink/public/mojom/worker/subresource_loader_updater.mojom-params-data.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_SUBRESOURCE_LOADER_UPDATER_MOJOM_PARAMS_DATA_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_SUBRESOURCE_LOADER_UPDATER_MOJOM_PARAMS_DATA_H_

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
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) SubresourceLoaderUpdater_UpdateSubresourceLoaderFactories_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::blink::mojom::internal::URLLoaderFactoryBundle_Data> subresource_loader_factories;

 private:
  friend class mojo::internal::MessageFragment<SubresourceLoaderUpdater_UpdateSubresourceLoaderFactories_Params_Data>;

  SubresourceLoaderUpdater_UpdateSubresourceLoaderFactories_Params_Data();
  ~SubresourceLoaderUpdater_UpdateSubresourceLoaderFactories_Params_Data() = delete;
};
static_assert(sizeof(SubresourceLoaderUpdater_UpdateSubresourceLoaderFactories_Params_Data) == 16,
              "Bad sizeof(SubresourceLoaderUpdater_UpdateSubresourceLoaderFactories_Params_Data)");

}  // namespace internal


class SubresourceLoaderUpdater_UpdateSubresourceLoaderFactories_ParamsDataView {
 public:
  SubresourceLoaderUpdater_UpdateSubresourceLoaderFactories_ParamsDataView() = default;

  SubresourceLoaderUpdater_UpdateSubresourceLoaderFactories_ParamsDataView(
      internal::SubresourceLoaderUpdater_UpdateSubresourceLoaderFactories_Params_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  inline void GetSubresourceLoaderFactoriesDataView(
      ::blink::mojom::URLLoaderFactoryBundleDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadSubresourceLoaderFactories(UserType* output) {
    
    auto* pointer = data_->subresource_loader_factories.Get();
    return mojo::internal::Deserialize<::blink::mojom::URLLoaderFactoryBundleDataView>(
        pointer, output, message_);
  }
 private:
  internal::SubresourceLoaderUpdater_UpdateSubresourceLoaderFactories_Params_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};


inline void SubresourceLoaderUpdater_UpdateSubresourceLoaderFactories_ParamsDataView::GetSubresourceLoaderFactoriesDataView(
    ::blink::mojom::URLLoaderFactoryBundleDataView* output) {
  auto pointer = data_->subresource_loader_factories.Get();
  *output = ::blink::mojom::URLLoaderFactoryBundleDataView(pointer, message_);
}

}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#endif

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_SUBRESOURCE_LOADER_UPDATER_MOJOM_PARAMS_DATA_H_