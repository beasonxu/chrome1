// third_party/blink/public/mojom/mobile_metrics/mobile_friendliness.mojom-shared-internal.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_MOBILE_METRICS_MOBILE_FRIENDLINESS_MOJOM_SHARED_INTERNAL_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_MOBILE_METRICS_MOBILE_FRIENDLINESS_MOJOM_SHARED_INTERNAL_H_
#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"



namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace blink {
namespace mojom {
namespace internal {
class MobileFriendliness_Data;

#pragma pack(push, 1)
class  MobileFriendliness_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t viewport_device_width : 1;
  uint8_t allow_user_zoom : 1;
  uint8_t pad1_[3];
  int32_t viewport_initial_scale_x10;
  int32_t viewport_hardcoded_width;
  int32_t small_text_ratio;
  int32_t text_content_outside_viewport_percentage;
  int32_t bad_tap_targets_ratio;

 private:
  friend class mojo::internal::MessageFragment<MobileFriendliness_Data>;

  MobileFriendliness_Data();
  ~MobileFriendliness_Data() = delete;
};
static_assert(sizeof(MobileFriendliness_Data) == 32,
              "Bad sizeof(MobileFriendliness_Data)");
// Used by MobileFriendliness::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct MobileFriendliness_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  MobileFriendliness_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~MobileFriendliness_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::Message& message) override {
    mojo::internal::MessageFragment<MobileFriendliness_Data> fragment(message);
    mojo::internal::Serialize<DataView>(user_data_, fragment);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    MobileFriendliness_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_MOBILE_METRICS_MOBILE_FRIENDLINESS_MOJOM_SHARED_INTERNAL_H_