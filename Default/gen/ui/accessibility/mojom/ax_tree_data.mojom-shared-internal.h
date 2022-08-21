// ui/accessibility/mojom/ax_tree_data.mojom-shared-internal.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_ACCESSIBILITY_MOJOM_AX_TREE_DATA_MOJOM_SHARED_INTERNAL_H_
#define UI_ACCESSIBILITY_MOJOM_AX_TREE_DATA_MOJOM_SHARED_INTERNAL_H_
#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "ui/accessibility/ax_enums.mojom-shared-internal.h"
#include "ui/accessibility/mojom/ax_tree_id.mojom-shared-internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"



namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace ax {
namespace mojom {
namespace internal {
class AXTreeData_Data;

#pragma pack(push, 1)
class  AXTreeData_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  ::ax::mojom::internal::AXTreeID_Data tree_id;
  ::ax::mojom::internal::AXTreeID_Data parent_tree_id;
  ::ax::mojom::internal::AXTreeID_Data focused_tree_id;
  mojo::internal::Pointer<mojo::internal::String_Data> doctype;
  uint8_t loaded : 1;
  uint8_t sel_is_backward : 1;
  uint8_t pad5_[3];
  float loading_progress;
  mojo::internal::Pointer<mojo::internal::String_Data> mimetype;
  mojo::internal::Pointer<mojo::internal::String_Data> title;
  mojo::internal::Pointer<mojo::internal::String_Data> url;
  int32_t focus_id;
  int32_t sel_anchor_object_id;
  int32_t sel_anchor_offset;
  int32_t sel_anchor_affinity;
  int32_t sel_focus_object_id;
  int32_t sel_focus_offset;
  int32_t sel_focus_affinity;
  int32_t root_scroller_id;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<mojo::internal::String_Data>>> metadata;

 private:
  friend class mojo::internal::MessageFragment<AXTreeData_Data>;

  AXTreeData_Data();
  ~AXTreeData_Data() = delete;
};
static_assert(sizeof(AXTreeData_Data) == 136,
              "Bad sizeof(AXTreeData_Data)");
// Used by AXTreeData::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct AXTreeData_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  AXTreeData_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~AXTreeData_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::Message& message) override {
    mojo::internal::MessageFragment<AXTreeData_Data> fragment(message);
    mojo::internal::Serialize<DataView>(user_data_, fragment);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    AXTreeData_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace ax

#endif  // UI_ACCESSIBILITY_MOJOM_AX_TREE_DATA_MOJOM_SHARED_INTERNAL_H_