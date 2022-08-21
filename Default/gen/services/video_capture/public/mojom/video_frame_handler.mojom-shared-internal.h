// services/video_capture/public/mojom/video_frame_handler.mojom-shared-internal.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIDEO_CAPTURE_PUBLIC_MOJOM_VIDEO_FRAME_HANDLER_MOJOM_SHARED_INTERNAL_H_
#define SERVICES_VIDEO_CAPTURE_PUBLIC_MOJOM_VIDEO_FRAME_HANDLER_MOJOM_SHARED_INTERNAL_H_
#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "media/capture/mojom/video_capture_buffer.mojom-shared-internal.h"
#include "media/capture/mojom/video_capture_types.mojom-shared-internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"



namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace video_capture {
namespace mojom {
namespace internal {
class ReadyFrameInBuffer_Data;

#pragma pack(push, 1)
class  ReadyFrameInBuffer_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t buffer_id;
  int32_t frame_feedback_id;
  mojo::internal::Pointer<::media::mojom::internal::VideoFrameInfo_Data> frame_info;

 private:
  friend class mojo::internal::MessageFragment<ReadyFrameInBuffer_Data>;

  ReadyFrameInBuffer_Data();
  ~ReadyFrameInBuffer_Data() = delete;
};
static_assert(sizeof(ReadyFrameInBuffer_Data) == 24,
              "Bad sizeof(ReadyFrameInBuffer_Data)");
// Used by ReadyFrameInBuffer::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct ReadyFrameInBuffer_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  ReadyFrameInBuffer_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~ReadyFrameInBuffer_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::Message& message) override {
    mojo::internal::MessageFragment<ReadyFrameInBuffer_Data> fragment(message);
    mojo::internal::Serialize<DataView>(user_data_, fragment);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    ReadyFrameInBuffer_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace video_capture

#endif  // SERVICES_VIDEO_CAPTURE_PUBLIC_MOJOM_VIDEO_FRAME_HANDLER_MOJOM_SHARED_INTERNAL_H_