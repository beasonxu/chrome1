// services/viz/public/mojom/compositing/frame_timing_details.mojom-shared-internal.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIZ_PUBLIC_MOJOM_COMPOSITING_FRAME_TIMING_DETAILS_MOJOM_SHARED_INTERNAL_H_
#define SERVICES_VIZ_PUBLIC_MOJOM_COMPOSITING_FRAME_TIMING_DETAILS_MOJOM_SHARED_INTERNAL_H_
#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/mojom/base/time.mojom-shared-internal.h"
#include "ui/gfx/mojom/presentation_feedback.mojom-shared-internal.h"
#include "ui/gfx/mojom/swap_timings.mojom-shared-internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"



namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace viz {
namespace mojom {
namespace internal {
class FrameTimingDetails_Data;

#pragma pack(push, 1)
class  FrameTimingDetails_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeTicks_Data> received_compositor_frame_timestamp;
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeTicks_Data> draw_start_timestamp;
  mojo::internal::Pointer<::gfx::mojom::internal::SwapTimings_Data> swap_timings;
  mojo::internal::Pointer<::gfx::mojom::internal::PresentationFeedback_Data> presentation_feedback;

 private:
  friend class mojo::internal::MessageFragment<FrameTimingDetails_Data>;

  FrameTimingDetails_Data();
  ~FrameTimingDetails_Data() = delete;
};
static_assert(sizeof(FrameTimingDetails_Data) == 40,
              "Bad sizeof(FrameTimingDetails_Data)");
// Used by FrameTimingDetails::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct FrameTimingDetails_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  FrameTimingDetails_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~FrameTimingDetails_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::Message& message) override {
    mojo::internal::MessageFragment<FrameTimingDetails_Data> fragment(message);
    mojo::internal::Serialize<DataView>(user_data_, fragment);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    FrameTimingDetails_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace viz

#endif  // SERVICES_VIZ_PUBLIC_MOJOM_COMPOSITING_FRAME_TIMING_DETAILS_MOJOM_SHARED_INTERNAL_H_