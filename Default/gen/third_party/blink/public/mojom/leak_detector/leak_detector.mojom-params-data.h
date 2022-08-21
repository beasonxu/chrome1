// third_party/blink/public/mojom/leak_detector/leak_detector.mojom-params-data.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_LEAK_DETECTOR_LEAK_DETECTOR_MOJOM_PARAMS_DATA_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_LEAK_DETECTOR_LEAK_DETECTOR_MOJOM_PARAMS_DATA_H_

#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#endif
namespace blink {
namespace mojom {
namespace internal {

class ValidationContext;
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) LeakDetector_PerformLeakDetection_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  friend class mojo::internal::MessageFragment<LeakDetector_PerformLeakDetection_Params_Data>;

  LeakDetector_PerformLeakDetection_Params_Data();
  ~LeakDetector_PerformLeakDetection_Params_Data() = delete;
};
static_assert(sizeof(LeakDetector_PerformLeakDetection_Params_Data) == 8,
              "Bad sizeof(LeakDetector_PerformLeakDetection_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) LeakDetector_PerformLeakDetection_ResponseParams_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::LeakDetectionResult_Data> result;

 private:
  friend class mojo::internal::MessageFragment<LeakDetector_PerformLeakDetection_ResponseParams_Data>;

  LeakDetector_PerformLeakDetection_ResponseParams_Data();
  ~LeakDetector_PerformLeakDetection_ResponseParams_Data() = delete;
};
static_assert(sizeof(LeakDetector_PerformLeakDetection_ResponseParams_Data) == 16,
              "Bad sizeof(LeakDetector_PerformLeakDetection_ResponseParams_Data)");

}  // namespace internal


class LeakDetector_PerformLeakDetection_ParamsDataView {
 public:
  LeakDetector_PerformLeakDetection_ParamsDataView() = default;

  LeakDetector_PerformLeakDetection_ParamsDataView(
      internal::LeakDetector_PerformLeakDetection_Params_Data* data,
      mojo::Message* message)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::LeakDetector_PerformLeakDetection_Params_Data* data_ = nullptr;
};



class LeakDetector_PerformLeakDetection_ResponseParamsDataView {
 public:
  LeakDetector_PerformLeakDetection_ResponseParamsDataView() = default;

  LeakDetector_PerformLeakDetection_ResponseParamsDataView(
      internal::LeakDetector_PerformLeakDetection_ResponseParams_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  inline void GetResultDataView(
      LeakDetectionResultDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadResult(UserType* output) {
    
static_assert(
    mojo::internal::IsValidUserTypeForOptionalValue<
        ::blink::mojom::LeakDetectionResultDataView, UserType>(),
    "Attempting to read the optional `result` field into a type which "
    "cannot represent a null value. Either wrap the destination object "
    "with absl::optional, ensure that any corresponding "
    "{Struct/Union/Array/String}Traits define the necessary IsNull and "
    "SetToNull methods, or use `MaybeReadResult` instead "
    "of `ReadResult if you're fine with null values being "
    "silently ignored in this case.");
    auto* pointer = data_->result.Get();
    return mojo::internal::Deserialize<::blink::mojom::LeakDetectionResultDataView>(
        pointer, output, message_);
  }
 private:
  internal::LeakDetector_PerformLeakDetection_ResponseParams_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};




inline void LeakDetector_PerformLeakDetection_ResponseParamsDataView::GetResultDataView(
    LeakDetectionResultDataView* output) {
  auto pointer = data_->result.Get();
  *output = LeakDetectionResultDataView(pointer, message_);
}

}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#endif

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_LEAK_DETECTOR_LEAK_DETECTOR_MOJOM_PARAMS_DATA_H_