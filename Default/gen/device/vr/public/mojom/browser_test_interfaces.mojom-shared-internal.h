// device/vr/public/mojom/browser_test_interfaces.mojom-shared-internal.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef DEVICE_VR_PUBLIC_MOJOM_BROWSER_TEST_INTERFACES_MOJOM_SHARED_INTERNAL_H_
#define DEVICE_VR_PUBLIC_MOJOM_BROWSER_TEST_INTERFACES_MOJOM_SHARED_INTERNAL_H_
#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "ui/gfx/geometry/mojom/geometry.mojom-shared-internal.h"
#include "ui/gfx/mojom/transform.mojom-shared-internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"
#include "base/component_export.h"



namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace device_test {
namespace mojom {
namespace internal {
class Color_Data;
class ViewData_Data;
class PoseFrameData_Data;
class ProjectionRaw_Data;
class DeviceConfig_Data;
class ControllerAxisData_Data;
class ControllerFrameData_Data;
class EventData_Data;

struct Eye_Data {
 public:
  static bool constexpr kIsExtensible = false;

  static bool IsKnownValue(int32_t value) {
    switch (value) {
      case 1:
      case 2:
      case 3:
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

struct TrackedDeviceClass_Data {
 public:
  static bool constexpr kIsExtensible = false;

  static bool IsKnownValue(int32_t value) {
    switch (value) {
      case 0:
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
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

struct ControllerRole_Data {
 public:
  static bool constexpr kIsExtensible = false;

  static bool IsKnownValue(int32_t value) {
    switch (value) {
      case 0:
      case 1:
      case 2:
      case 3:
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

struct EventType_Data {
 public:
  static bool constexpr kIsExtensible = false;

  static bool IsKnownValue(int32_t value) {
    switch (value) {
      case 0:
      case 1:
      case 2:
      case 3:
      case 4:
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

struct InteractionProfileType_Data {
 public:
  static bool constexpr kIsExtensible = false;

  static bool IsKnownValue(int32_t value) {
    switch (value) {
      case 0:
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
      case 7:
      case 8:
      case 9:
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
class COMPONENT_EXPORT(DEVICE_VR_TEST_MOJO_BINDINGS_SHARED) Color_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t r;
  uint8_t g;
  uint8_t b;
  uint8_t a;
  uint8_t padfinal_[4];

 private:
  friend class mojo::internal::MessageFragment<Color_Data>;

  Color_Data();
  ~Color_Data() = delete;
};
static_assert(sizeof(Color_Data) == 16,
              "Bad sizeof(Color_Data)");
// Used by Color::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct Color_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  Color_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~Color_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::Message& message) override {
    mojo::internal::MessageFragment<Color_Data> fragment(message);
    mojo::internal::Serialize<DataView>(user_data_, fragment);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    Color_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(DEVICE_VR_TEST_MOJO_BINDINGS_SHARED) ViewData_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::Color_Data> color;
  int32_t eye;
  uint8_t pad1_[4];
  mojo::internal::Pointer<::gfx::mojom::internal::Rect_Data> viewport;

 private:
  friend class mojo::internal::MessageFragment<ViewData_Data>;

  ViewData_Data();
  ~ViewData_Data() = delete;
};
static_assert(sizeof(ViewData_Data) == 32,
              "Bad sizeof(ViewData_Data)");
// Used by ViewData::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct ViewData_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  ViewData_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~ViewData_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::Message& message) override {
    mojo::internal::MessageFragment<ViewData_Data> fragment(message);
    mojo::internal::Serialize<DataView>(user_data_, fragment);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    ViewData_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(DEVICE_VR_TEST_MOJO_BINDINGS_SHARED) PoseFrameData_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::gfx::mojom::internal::Transform_Data> device_to_origin;

 private:
  friend class mojo::internal::MessageFragment<PoseFrameData_Data>;

  PoseFrameData_Data();
  ~PoseFrameData_Data() = delete;
};
static_assert(sizeof(PoseFrameData_Data) == 16,
              "Bad sizeof(PoseFrameData_Data)");
// Used by PoseFrameData::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct PoseFrameData_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  PoseFrameData_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~PoseFrameData_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::Message& message) override {
    mojo::internal::MessageFragment<PoseFrameData_Data> fragment(message);
    mojo::internal::Serialize<DataView>(user_data_, fragment);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    PoseFrameData_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(DEVICE_VR_TEST_MOJO_BINDINGS_SHARED) ProjectionRaw_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  float left;
  float right;
  float top;
  float bottom;

 private:
  friend class mojo::internal::MessageFragment<ProjectionRaw_Data>;

  ProjectionRaw_Data();
  ~ProjectionRaw_Data() = delete;
};
static_assert(sizeof(ProjectionRaw_Data) == 24,
              "Bad sizeof(ProjectionRaw_Data)");
// Used by ProjectionRaw::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct ProjectionRaw_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  ProjectionRaw_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~ProjectionRaw_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::Message& message) override {
    mojo::internal::MessageFragment<ProjectionRaw_Data> fragment(message);
    mojo::internal::Serialize<DataView>(user_data_, fragment);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    ProjectionRaw_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(DEVICE_VR_TEST_MOJO_BINDINGS_SHARED) DeviceConfig_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  float interpupillary_distance;
  uint8_t pad0_[4];
  mojo::internal::Pointer<internal::ProjectionRaw_Data> projection_left;
  mojo::internal::Pointer<internal::ProjectionRaw_Data> projection_right;

 private:
  friend class mojo::internal::MessageFragment<DeviceConfig_Data>;

  DeviceConfig_Data();
  ~DeviceConfig_Data() = delete;
};
static_assert(sizeof(DeviceConfig_Data) == 32,
              "Bad sizeof(DeviceConfig_Data)");
// Used by DeviceConfig::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct DeviceConfig_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  DeviceConfig_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~DeviceConfig_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::Message& message) override {
    mojo::internal::MessageFragment<DeviceConfig_Data> fragment(message);
    mojo::internal::Serialize<DataView>(user_data_, fragment);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    DeviceConfig_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(DEVICE_VR_TEST_MOJO_BINDINGS_SHARED) ControllerAxisData_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  float x;
  float y;
  uint8_t axis_type;
  uint8_t padfinal_[7];

 private:
  friend class mojo::internal::MessageFragment<ControllerAxisData_Data>;

  ControllerAxisData_Data();
  ~ControllerAxisData_Data() = delete;
};
static_assert(sizeof(ControllerAxisData_Data) == 24,
              "Bad sizeof(ControllerAxisData_Data)");
// Used by ControllerAxisData::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct ControllerAxisData_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  ControllerAxisData_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~ControllerAxisData_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::Message& message) override {
    mojo::internal::MessageFragment<ControllerAxisData_Data> fragment(message);
    mojo::internal::Serialize<DataView>(user_data_, fragment);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    ControllerAxisData_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(DEVICE_VR_TEST_MOJO_BINDINGS_SHARED) ControllerFrameData_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t packet_number;
  int32_t role;
  uint64_t buttons_pressed;
  uint64_t buttons_touched;
  uint64_t supported_buttons;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::ControllerAxisData_Data>>> axis_data;
  mojo::internal::Pointer<internal::PoseFrameData_Data> pose_data;
  uint8_t is_valid : 1;
  uint8_t padfinal_[7];

 private:
  friend class mojo::internal::MessageFragment<ControllerFrameData_Data>;

  ControllerFrameData_Data();
  ~ControllerFrameData_Data() = delete;
};
static_assert(sizeof(ControllerFrameData_Data) == 64,
              "Bad sizeof(ControllerFrameData_Data)");
// Used by ControllerFrameData::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct ControllerFrameData_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  ControllerFrameData_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~ControllerFrameData_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::Message& message) override {
    mojo::internal::MessageFragment<ControllerFrameData_Data> fragment(message);
    mojo::internal::Serialize<DataView>(user_data_, fragment);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    ControllerFrameData_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(DEVICE_VR_TEST_MOJO_BINDINGS_SHARED) EventData_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t type;
  int32_t interaction_profile;

 private:
  friend class mojo::internal::MessageFragment<EventData_Data>;

  EventData_Data();
  ~EventData_Data() = delete;
};
static_assert(sizeof(EventData_Data) == 16,
              "Bad sizeof(EventData_Data)");
// Used by EventData::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct EventData_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  EventData_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~EventData_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::Message& message) override {
    mojo::internal::MessageFragment<EventData_Data> fragment(message);
    mojo::internal::Serialize<DataView>(user_data_, fragment);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    EventData_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace device_test

#endif  // DEVICE_VR_PUBLIC_MOJOM_BROWSER_TEST_INTERFACES_MOJOM_SHARED_INTERNAL_H_