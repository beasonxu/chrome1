// services/video_capture/public/mojom/video_source.mojom-shared-internal.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIDEO_CAPTURE_PUBLIC_MOJOM_VIDEO_SOURCE_MOJOM_SHARED_INTERNAL_H_
#define SERVICES_VIDEO_CAPTURE_PUBLIC_MOJOM_VIDEO_SOURCE_MOJOM_SHARED_INTERNAL_H_
#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "media/capture/mojom/image_capture.mojom-shared-internal.h"
#include "media/capture/mojom/video_capture_types.mojom-shared-internal.h"
#include "services/video_capture/public/mojom/video_frame_handler.mojom-shared-internal.h"
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
class CreatePushSubscriptionResultCode_Data;

struct CreatePushSubscriptionSuccessCode_Data {
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


class  CreatePushSubscriptionResultCode_Data {
 public:
  // Used to identify Mojom Union Data Classes.
  typedef void MojomUnionDataType;

  CreatePushSubscriptionResultCode_Data() = default;
  // Do nothing in the destructor since it won't be called when it is a
  // non-inlined union.
  ~CreatePushSubscriptionResultCode_Data() = default;

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context,
                       bool inlined);

  bool is_null() const { return size == 0; }

  void set_null() {
    size = 0U;
    tag = static_cast<CreatePushSubscriptionResultCode_Tag>(0);
    data.unknown = 0U;
  }

  // TODO(crbug.com/1148486): SHOUTY_CASE values are being deprecated per C++ code style
  // guidelines (https://google.github.io/styleguide/cppguide.html#Enumerator_Names),
  // please use kCamelCase values instead.  Cleanup NULL_VALUE, BOOL_VALUE, INT_VALUE, etc.
  // generation once codebase is transitioned to kNullValue, kBoolValue, kIntValue, etc.
  enum class CreatePushSubscriptionResultCode_Tag : uint32_t {

    
    kSuccessCode,
    
    kErrorCode,
  };

  // A note on layout:
  // "Each non-static data member is allocated as if it were the sole member of
  // a struct." - Section 9.5.2 ISO/IEC 14882:2011 (The C++ Spec)
  union MOJO_ALIGNAS(8) Union_ {
    Union_() : unknown(0) {}
    int32_t f_success_code;
    int32_t f_error_code;
    uint64_t unknown;
  };

  uint32_t size;
  CreatePushSubscriptionResultCode_Tag tag;
  Union_ data;
};
static_assert(sizeof(CreatePushSubscriptionResultCode_Data) == mojo::internal::kUnionDataSize,
              "Bad sizeof(CreatePushSubscriptionResultCode_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace video_capture

#endif  // SERVICES_VIDEO_CAPTURE_PUBLIC_MOJOM_VIDEO_SOURCE_MOJOM_SHARED_INTERNAL_H_