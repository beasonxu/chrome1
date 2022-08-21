// services/viz/public/mojom/compositing/frame_deadline.mojom-shared-internal.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIZ_PUBLIC_MOJOM_COMPOSITING_FRAME_DEADLINE_MOJOM_SHARED_INTERNAL_H_
#define SERVICES_VIZ_PUBLIC_MOJOM_COMPOSITING_FRAME_DEADLINE_MOJOM_SHARED_INTERNAL_H_
#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/mojom/base/time.mojom-shared-internal.h"
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
class FrameDeadline_Data;

#pragma pack(push, 1)
class  FrameDeadline_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeTicks_Data> frame_start_time;
  uint32_t deadline_in_frames;
  uint8_t use_default_lower_bound_deadline : 1;
  uint8_t pad2_[3];
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeDelta_Data> frame_interval;

 private:
  friend class mojo::internal::MessageFragment<FrameDeadline_Data>;

  FrameDeadline_Data();
  ~FrameDeadline_Data() = delete;
};
static_assert(sizeof(FrameDeadline_Data) == 32,
              "Bad sizeof(FrameDeadline_Data)");
// Used by FrameDeadline::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct FrameDeadline_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  FrameDeadline_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~FrameDeadline_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::Message& message) override {
    mojo::internal::MessageFragment<FrameDeadline_Data> fragment(message);
    mojo::internal::Serialize<DataView>(user_data_, fragment);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    FrameDeadline_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace viz

#endif  // SERVICES_VIZ_PUBLIC_MOJOM_COMPOSITING_FRAME_DEADLINE_MOJOM_SHARED_INTERNAL_H_