// third_party/blink/public/mojom/service_worker/service_worker_registration_options.mojom-shared-internal.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_REGISTRATION_OPTIONS_MOJOM_SHARED_INTERNAL_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_REGISTRATION_OPTIONS_MOJOM_SHARED_INTERNAL_H_
#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "third_party/blink/public/mojom/script/script_type.mojom-shared-internal.h"
#include "url/mojom/url.mojom-shared-internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"
#include "base/component_export.h"



namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace blink {
namespace mojom {
namespace internal {
class ServiceWorkerRegistrationOptions_Data;

struct ServiceWorkerUpdateViaCache_Data {
 public:
  static bool constexpr kIsExtensible = false;

  static bool IsKnownValue(int32_t value) {
    switch (value) {
      case 0:
      case 1:
      case 2:
        return true;
    }
    return false;
  }

  static bool Validate(int32_t value,
                       mojo::internal::ValidationContext* validation_context) {
    if (kIsExtensible || IsKnownValue(value))
      return true;

    ReportValidationError(validation_context,
                          mojo::internal::VALIDATION_ERROR_UNKNOWN_ENUM_VALUE);
    return false;
  }
};

#pragma pack(push, 1)
class COMPONENT_EXPORT(SERVICE_WORKER_STORAGE_MOJOM_SHARED) ServiceWorkerRegistrationOptions_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> scope;
  int32_t type;
  int32_t update_via_cache;

 private:
  friend class mojo::internal::MessageFragment<ServiceWorkerRegistrationOptions_Data>;

  ServiceWorkerRegistrationOptions_Data();
  ~ServiceWorkerRegistrationOptions_Data() = delete;
};
static_assert(sizeof(ServiceWorkerRegistrationOptions_Data) == 24,
              "Bad sizeof(ServiceWorkerRegistrationOptions_Data)");
// Used by ServiceWorkerRegistrationOptions::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct ServiceWorkerRegistrationOptions_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  ServiceWorkerRegistrationOptions_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~ServiceWorkerRegistrationOptions_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::Message& message) override {
    mojo::internal::MessageFragment<ServiceWorkerRegistrationOptions_Data> fragment(message);
    mojo::internal::Serialize<DataView>(user_data_, fragment);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    ServiceWorkerRegistrationOptions_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_REGISTRATION_OPTIONS_MOJOM_SHARED_INTERNAL_H_