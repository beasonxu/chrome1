// third_party/blink/public/mojom/service_worker/service_worker_provider.mojom-shared.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_PROVIDER_MOJOM_SHARED_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_PROVIDER_MOJOM_SHARED_H_

#include <stdint.h>

#include <functional>
#include <iosfwd>
#include <type_traits>
#include <utility>
#include "mojo/public/cpp/bindings/array_data_view.h"
#include "mojo/public/cpp/bindings/enum_traits.h"
#include "mojo/public/cpp/bindings/interface_data_view.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/serialization.h"
#include "mojo/public/cpp/bindings/map_data_view.h"
#include "mojo/public/cpp/bindings/string_data_view.h"

#include "third_party/perfetto/include/perfetto/tracing/traced_value_forward.h"

#include "third_party/blink/public/mojom/service_worker/service_worker_provider.mojom-shared-internal.h"
#include "services/network/public/mojom/url_loader_factory.mojom-shared.h"
#include "third_party/blink/public/mojom/browser_interface_broker.mojom-shared.h"
#include "third_party/blink/public/mojom/cache_storage/cache_storage.mojom-shared.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_container.mojom-shared.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_container_type.mojom-shared.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_object.mojom-shared.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_worker_client.mojom-shared.h"
#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "base/component_export.h"




namespace blink {
namespace mojom {
class ServiceWorkerProviderInfoForStartWorkerDataView;



}  // namespace mojom
}  // namespace blink

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::blink::mojom::ServiceWorkerProviderInfoForStartWorkerDataView> {
  using Data = ::blink::mojom::internal::ServiceWorkerProviderInfoForStartWorker_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::kStruct;
};

}  // namespace internal
}  // namespace mojo


namespace blink {
namespace mojom {


class ServiceWorkerProviderInfoForStartWorkerDataView {
 public:
  ServiceWorkerProviderInfoForStartWorkerDataView() = default;

  ServiceWorkerProviderInfoForStartWorkerDataView(
      internal::ServiceWorkerProviderInfoForStartWorker_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeHostRemote() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::ServiceWorkerContainerHostAssociatedPtrInfoDataView>(
            &data_->host_remote, &result, message_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeScriptLoaderFactoryRemote() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<mojo::InterfacePtrDataView<::network::mojom::URLLoaderFactoryInterfaceBase>>(
            &data_->script_loader_factory_remote, &result, message_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeCacheStorage() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<mojo::InterfacePtrDataView<::blink::mojom::CacheStorageInterfaceBase>>(
            &data_->cache_storage, &result, message_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeBrowserInterfaceBroker() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<mojo::InterfacePtrDataView<::blink::mojom::BrowserInterfaceBrokerInterfaceBase>>(
            &data_->browser_interface_broker, &result, message_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::ServiceWorkerProviderInfoForStartWorker_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



}  // namespace mojom
}  // namespace blink

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::ServiceWorkerProviderInfoForStartWorkerDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::ServiceWorkerProviderInfoForStartWorkerDataView, UserType>;

  static void Serialize(
      MaybeConstUserType& input,
      mojo::internal::MessageFragment<::blink::mojom::internal::ServiceWorkerProviderInfoForStartWorker_Data>& fragment) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    fragment.Allocate();
    decltype(Traits::host_remote(input)) in_host_remote = Traits::host_remote(input);
    mojo::internal::Serialize<::blink::mojom::ServiceWorkerContainerHostAssociatedPtrInfoDataView>(
        in_host_remote, &fragment->host_remote, &fragment.message());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !mojo::internal::IsHandleOrInterfaceValid(fragment->host_remote),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_INTERFACE_ID,
        "invalid host_remote in ServiceWorkerProviderInfoForStartWorker struct");
    decltype(Traits::script_loader_factory_remote(input)) in_script_loader_factory_remote = Traits::script_loader_factory_remote(input);
    mojo::internal::Serialize<mojo::InterfacePtrDataView<::network::mojom::URLLoaderFactoryInterfaceBase>>(
        in_script_loader_factory_remote, &fragment->script_loader_factory_remote, &fragment.message());
    decltype(Traits::cache_storage(input)) in_cache_storage = Traits::cache_storage(input);
    mojo::internal::Serialize<mojo::InterfacePtrDataView<::blink::mojom::CacheStorageInterfaceBase>>(
        in_cache_storage, &fragment->cache_storage, &fragment.message());
    decltype(Traits::browser_interface_broker(input)) in_browser_interface_broker = Traits::browser_interface_broker(input);
    mojo::internal::Serialize<mojo::InterfacePtrDataView<::blink::mojom::BrowserInterfaceBrokerInterfaceBase>>(
        in_browser_interface_broker, &fragment->browser_interface_broker, &fragment.message());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !mojo::internal::IsHandleOrInterfaceValid(fragment->browser_interface_broker),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
        "invalid browser_interface_broker in ServiceWorkerProviderInfoForStartWorker struct");
  }

  static bool Deserialize(::blink::mojom::internal::ServiceWorkerProviderInfoForStartWorker_Data* input,
                          UserType* output,
                          Message* message) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::ServiceWorkerProviderInfoForStartWorkerDataView data_view(input, message);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace blink {
namespace mojom {




}  // namespace mojom
}  // namespace blink

// Declare TraceFormatTraits for enums, which should be defined in ::perfetto
// namespace.

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_PROVIDER_MOJOM_SHARED_H_