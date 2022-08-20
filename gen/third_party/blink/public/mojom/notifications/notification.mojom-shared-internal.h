// third_party/blink/public/mojom/notifications/notification.mojom-shared-internal.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_NOTIFICATIONS_NOTIFICATION_MOJOM_SHARED_INTERNAL_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_NOTIFICATIONS_NOTIFICATION_MOJOM_SHARED_INTERNAL_H_
#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/mojom/base/string16.mojom-shared-internal.h"
#include "mojo/public/mojom/base/time.mojom-shared-internal.h"
#include "skia/public/mojom/bitmap.mojom-shared-internal.h"
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
class NotificationAction_Data;
class NotificationData_Data;
class NotificationResources_Data;

struct NotificationDirection_Data {
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

struct NotificationActionType_Data {
 public:
  static bool constexpr kIsExtensible = false;

  static bool IsKnownValue(int32_t value) {
    switch (value) {
      case 0:
      case 1:
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
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) NotificationAction_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t type;
  uint8_t pad0_[4];
  mojo::internal::Pointer<mojo::internal::String_Data> action;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> title;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> icon;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> placeholder;

 private:
  friend class mojo::internal::MessageFragment<NotificationAction_Data>;

  NotificationAction_Data();
  ~NotificationAction_Data() = delete;
};
static_assert(sizeof(NotificationAction_Data) == 48,
              "Bad sizeof(NotificationAction_Data)");
// Used by NotificationAction::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct NotificationAction_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  NotificationAction_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~NotificationAction_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::Message& message) override {
    mojo::internal::MessageFragment<NotificationAction_Data> fragment(message);
    mojo::internal::Serialize<DataView>(user_data_, fragment);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    NotificationAction_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) NotificationData_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> title;
  int32_t direction;
  uint8_t renotify : 1;
  uint8_t silent : 1;
  uint8_t require_interaction : 1;
  uint8_t pad4_[3];
  mojo::internal::Pointer<mojo::internal::String_Data> lang;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> body;
  mojo::internal::Pointer<mojo::internal::String_Data> tag;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> image;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> icon;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> badge;
  mojo::internal::Pointer<mojo::internal::Array_Data<int32_t>> vibration_pattern;
  double timestamp;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> data;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::NotificationAction_Data>>> actions;
  mojo::internal::Pointer<::mojo_base::mojom::internal::Time_Data> show_trigger_timestamp;

 private:
  friend class mojo::internal::MessageFragment<NotificationData_Data>;

  NotificationData_Data();
  ~NotificationData_Data() = delete;
};
static_assert(sizeof(NotificationData_Data) == 112,
              "Bad sizeof(NotificationData_Data)");
// Used by NotificationData::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct NotificationData_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  NotificationData_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~NotificationData_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::Message& message) override {
    mojo::internal::MessageFragment<NotificationData_Data> fragment(message);
    mojo::internal::Serialize<DataView>(user_data_, fragment);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    NotificationData_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) NotificationResources_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::skia::mojom::internal::BitmapN32_Data> image;
  mojo::internal::Pointer<::skia::mojom::internal::BitmapN32_Data> icon;
  mojo::internal::Pointer<::skia::mojom::internal::BitmapN32_Data> badge;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::skia::mojom::internal::BitmapN32_Data>>> action_icons;

 private:
  friend class mojo::internal::MessageFragment<NotificationResources_Data>;

  NotificationResources_Data();
  ~NotificationResources_Data() = delete;
};
static_assert(sizeof(NotificationResources_Data) == 40,
              "Bad sizeof(NotificationResources_Data)");
// Used by NotificationResources::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct NotificationResources_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  NotificationResources_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~NotificationResources_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::Message& message) override {
    mojo::internal::MessageFragment<NotificationResources_Data> fragment(message);
    mojo::internal::Serialize<DataView>(user_data_, fragment);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    NotificationResources_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_NOTIFICATIONS_NOTIFICATION_MOJOM_SHARED_INTERNAL_H_