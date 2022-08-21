// chrome/browser/ui/webui/segmentation_internals/segmentation_internals.mojom-shared-internal.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_BROWSER_UI_WEBUI_SEGMENTATION_INTERNALS_SEGMENTATION_INTERNALS_MOJOM_SHARED_INTERNAL_H_
#define CHROME_BROWSER_UI_WEBUI_SEGMENTATION_INTERNALS_SEGMENTATION_INTERNALS_MOJOM_SHARED_INTERNAL_H_
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
namespace segmentation_internals {
namespace mojom {
namespace internal {
class ServiceStatus_Data;
class SegmentInfo_Data;
class ClientInfo_Data;

#pragma pack(push, 1)
class  ServiceStatus_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t is_initialized : 1;
  uint8_t pad0_[3];
  int32_t intialization_status;

 private:
  friend class mojo::internal::MessageFragment<ServiceStatus_Data>;

  ServiceStatus_Data();
  ~ServiceStatus_Data() = delete;
};
static_assert(sizeof(ServiceStatus_Data) == 16,
              "Bad sizeof(ServiceStatus_Data)");
// Used by ServiceStatus::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct ServiceStatus_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  ServiceStatus_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~ServiceStatus_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::Message& message) override {
    mojo::internal::MessageFragment<ServiceStatus_Data> fragment(message);
    mojo::internal::Serialize<DataView>(user_data_, fragment);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    ServiceStatus_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  SegmentInfo_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> segment_name;
  int32_t segment_id;
  uint8_t can_execute_segment : 1;
  uint8_t pad2_[3];
  mojo::internal::Pointer<mojo::internal::String_Data> segment_data;
  mojo::internal::Pointer<mojo::internal::String_Data> prediction_result;

 private:
  friend class mojo::internal::MessageFragment<SegmentInfo_Data>;

  SegmentInfo_Data();
  ~SegmentInfo_Data() = delete;
};
static_assert(sizeof(SegmentInfo_Data) == 40,
              "Bad sizeof(SegmentInfo_Data)");
// Used by SegmentInfo::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct SegmentInfo_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  SegmentInfo_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~SegmentInfo_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::Message& message) override {
    mojo::internal::MessageFragment<SegmentInfo_Data> fragment(message);
    mojo::internal::Serialize<DataView>(user_data_, fragment);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    SegmentInfo_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  ClientInfo_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> segmentation_key;
  mojo::internal::Pointer<mojo::internal::String_Data> selected_segment;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::SegmentInfo_Data>>> segment_info;

 private:
  friend class mojo::internal::MessageFragment<ClientInfo_Data>;

  ClientInfo_Data();
  ~ClientInfo_Data() = delete;
};
static_assert(sizeof(ClientInfo_Data) == 32,
              "Bad sizeof(ClientInfo_Data)");
// Used by ClientInfo::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct ClientInfo_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  ClientInfo_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~ClientInfo_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::Message& message) override {
    mojo::internal::MessageFragment<ClientInfo_Data> fragment(message);
    mojo::internal::Serialize<DataView>(user_data_, fragment);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    ClientInfo_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace segmentation_internals

#endif  // CHROME_BROWSER_UI_WEBUI_SEGMENTATION_INTERNALS_SEGMENTATION_INTERNALS_MOJOM_SHARED_INTERNAL_H_