// third_party/blink/public/mojom/messaging/user_activation_snapshot.mojom-shared-internal.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_MESSAGING_USER_ACTIVATION_SNAPSHOT_MOJOM_SHARED_INTERNAL_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_MESSAGING_USER_ACTIVATION_SNAPSHOT_MOJOM_SHARED_INTERNAL_H_
#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
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
class UserActivationSnapshot_Data;

#pragma pack(push, 1)
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) UserActivationSnapshot_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t has_been_active : 1;
  uint8_t was_active : 1;
  uint8_t padfinal_[7];

 private:
  friend class mojo::internal::MessageFragment<UserActivationSnapshot_Data>;

  UserActivationSnapshot_Data();
  ~UserActivationSnapshot_Data() = delete;
};
static_assert(sizeof(UserActivationSnapshot_Data) == 16,
              "Bad sizeof(UserActivationSnapshot_Data)");
// Used by UserActivationSnapshot::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct UserActivationSnapshot_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  UserActivationSnapshot_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~UserActivationSnapshot_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::Message& message) override {
    mojo::internal::MessageFragment<UserActivationSnapshot_Data> fragment(message);
    mojo::internal::Serialize<DataView>(user_data_, fragment);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    UserActivationSnapshot_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_MESSAGING_USER_ACTIVATION_SNAPSHOT_MOJOM_SHARED_INTERNAL_H_