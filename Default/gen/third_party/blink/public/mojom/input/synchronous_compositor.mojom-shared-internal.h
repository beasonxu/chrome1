// third_party/blink/public/mojom/input/synchronous_compositor.mojom-shared-internal.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_INPUT_SYNCHRONOUS_COMPOSITOR_MOJOM_SHARED_INTERNAL_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_INPUT_SYNCHRONOUS_COMPOSITOR_MOJOM_SHARED_INTERNAL_H_
#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/mojom/base/shared_memory.mojom-shared-internal.h"
#include "mojo/public/mojom/base/time.mojom-shared-internal.h"
#include "services/viz/public/mojom/compositing/begin_frame_args.mojom-shared-internal.h"
#include "services/viz/public/mojom/compositing/compositor_frame.mojom-shared-internal.h"
#include "services/viz/public/mojom/compositing/compositor_frame_metadata.mojom-shared-internal.h"
#include "services/viz/public/mojom/compositing/frame_timing_details.mojom-shared-internal.h"
#include "services/viz/public/mojom/compositing/local_surface_id.mojom-shared-internal.h"
#include "services/viz/public/mojom/compositing/returned_resource.mojom-shared-internal.h"
#include "services/viz/public/mojom/hit_test/hit_test_region_list.mojom-shared-internal.h"
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
namespace blink {
namespace mojom {
namespace internal {
class SyncCompositorDemandDrawHwParams_Data;
class SyncCompositorDemandDrawSwParams_Data;
class SyncCompositorCommonRendererParams_Data;

#pragma pack(push, 1)
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) SyncCompositorDemandDrawHwParams_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::gfx::mojom::internal::Size_Data> viewport_size;
  mojo::internal::Pointer<::gfx::mojom::internal::Rect_Data> viewport_rect_for_tile_priority;
  mojo::internal::Pointer<::gfx::mojom::internal::Transform_Data> transform_for_tile_priority;
  uint8_t need_new_local_surface_id : 1;
  uint8_t padfinal_[7];

 private:
  friend class mojo::internal::MessageFragment<SyncCompositorDemandDrawHwParams_Data>;

  SyncCompositorDemandDrawHwParams_Data();
  ~SyncCompositorDemandDrawHwParams_Data() = delete;
};
static_assert(sizeof(SyncCompositorDemandDrawHwParams_Data) == 40,
              "Bad sizeof(SyncCompositorDemandDrawHwParams_Data)");
// Used by SyncCompositorDemandDrawHwParams::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct SyncCompositorDemandDrawHwParams_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  SyncCompositorDemandDrawHwParams_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~SyncCompositorDemandDrawHwParams_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::Message& message) override {
    mojo::internal::MessageFragment<SyncCompositorDemandDrawHwParams_Data> fragment(message);
    mojo::internal::Serialize<DataView>(user_data_, fragment);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    SyncCompositorDemandDrawHwParams_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) SyncCompositorDemandDrawSwParams_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::gfx::mojom::internal::Size_Data> size;
  mojo::internal::Pointer<::gfx::mojom::internal::Rect_Data> clip;
  mojo::internal::Pointer<::gfx::mojom::internal::Transform_Data> transform;

 private:
  friend class mojo::internal::MessageFragment<SyncCompositorDemandDrawSwParams_Data>;

  SyncCompositorDemandDrawSwParams_Data();
  ~SyncCompositorDemandDrawSwParams_Data() = delete;
};
static_assert(sizeof(SyncCompositorDemandDrawSwParams_Data) == 32,
              "Bad sizeof(SyncCompositorDemandDrawSwParams_Data)");
// Used by SyncCompositorDemandDrawSwParams::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct SyncCompositorDemandDrawSwParams_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  SyncCompositorDemandDrawSwParams_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~SyncCompositorDemandDrawSwParams_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::Message& message) override {
    mojo::internal::MessageFragment<SyncCompositorDemandDrawSwParams_Data> fragment(message);
    mojo::internal::Serialize<DataView>(user_data_, fragment);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    SyncCompositorDemandDrawSwParams_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) SyncCompositorCommonRendererParams_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t version;
  float page_scale_factor;
  mojo::internal::Pointer<::gfx::mojom::internal::PointF_Data> total_scroll_offset;
  mojo::internal::Pointer<::gfx::mojom::internal::PointF_Data> max_scroll_offset;
  mojo::internal::Pointer<::gfx::mojom::internal::SizeF_Data> scrollable_size;
  float min_page_scale_factor;
  float max_page_scale_factor;
  uint32_t need_invalidate_count;
  uint8_t invalidate_needs_draw : 1;
  uint8_t pad8_[3];
  uint32_t did_activate_pending_tree_count;
  uint8_t padfinal_[4];

 private:
  friend class mojo::internal::MessageFragment<SyncCompositorCommonRendererParams_Data>;

  SyncCompositorCommonRendererParams_Data();
  ~SyncCompositorCommonRendererParams_Data() = delete;
};
static_assert(sizeof(SyncCompositorCommonRendererParams_Data) == 64,
              "Bad sizeof(SyncCompositorCommonRendererParams_Data)");
// Used by SyncCompositorCommonRendererParams::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct SyncCompositorCommonRendererParams_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  SyncCompositorCommonRendererParams_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~SyncCompositorCommonRendererParams_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::Message& message) override {
    mojo::internal::MessageFragment<SyncCompositorCommonRendererParams_Data> fragment(message);
    mojo::internal::Serialize<DataView>(user_data_, fragment);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    SyncCompositorCommonRendererParams_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_INPUT_SYNCHRONOUS_COMPOSITOR_MOJOM_SHARED_INTERNAL_H_