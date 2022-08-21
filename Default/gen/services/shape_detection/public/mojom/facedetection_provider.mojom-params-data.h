// services/shape_detection/public/mojom/facedetection_provider.mojom-params-data.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_SHAPE_DETECTION_PUBLIC_MOJOM_FACEDETECTION_PROVIDER_MOJOM_PARAMS_DATA_H_
#define SERVICES_SHAPE_DETECTION_PUBLIC_MOJOM_FACEDETECTION_PROVIDER_MOJOM_PARAMS_DATA_H_

#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#endif
namespace shape_detection {
namespace mojom {
namespace internal {

class ValidationContext;
class  FaceDetectionProvider_CreateFaceDetection_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data receiver;
  uint8_t pad0_[4];
  mojo::internal::Pointer<::shape_detection::mojom::internal::FaceDetectorOptions_Data> options;

 private:
  friend class mojo::internal::MessageFragment<FaceDetectionProvider_CreateFaceDetection_Params_Data>;

  FaceDetectionProvider_CreateFaceDetection_Params_Data();
  ~FaceDetectionProvider_CreateFaceDetection_Params_Data() = delete;
};
static_assert(sizeof(FaceDetectionProvider_CreateFaceDetection_Params_Data) == 24,
              "Bad sizeof(FaceDetectionProvider_CreateFaceDetection_Params_Data)");

}  // namespace internal


class FaceDetectionProvider_CreateFaceDetection_ParamsDataView {
 public:
  FaceDetectionProvider_CreateFaceDetection_ParamsDataView() = default;

  FaceDetectionProvider_CreateFaceDetection_ParamsDataView(
      internal::FaceDetectionProvider_CreateFaceDetection_Params_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeReceiver() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<mojo::InterfaceRequestDataView<::shape_detection::mojom::FaceDetectionInterfaceBase>>(
            &data_->receiver, &result, message_);
    DCHECK(ret);
    return result;
  }
  inline void GetOptionsDataView(
      ::shape_detection::mojom::FaceDetectorOptionsDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadOptions(UserType* output) {
    
    auto* pointer = data_->options.Get();
    return mojo::internal::Deserialize<::shape_detection::mojom::FaceDetectorOptionsDataView>(
        pointer, output, message_);
  }
 private:
  internal::FaceDetectionProvider_CreateFaceDetection_Params_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};


inline void FaceDetectionProvider_CreateFaceDetection_ParamsDataView::GetOptionsDataView(
    ::shape_detection::mojom::FaceDetectorOptionsDataView* output) {
  auto pointer = data_->options.Get();
  *output = ::shape_detection::mojom::FaceDetectorOptionsDataView(pointer, message_);
}

}  // namespace mojom
}  // namespace shape_detection

#if defined(__clang__)
#pragma clang diagnostic pop
#endif

#endif  // SERVICES_SHAPE_DETECTION_PUBLIC_MOJOM_FACEDETECTION_PROVIDER_MOJOM_PARAMS_DATA_H_