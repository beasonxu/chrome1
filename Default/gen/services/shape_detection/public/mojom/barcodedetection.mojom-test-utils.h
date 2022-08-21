// services/shape_detection/public/mojom/barcodedetection.mojom-test-utils.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_SHAPE_DETECTION_PUBLIC_MOJOM_BARCODEDETECTION_MOJOM_TEST_UTILS_H_
#define SERVICES_SHAPE_DETECTION_PUBLIC_MOJOM_BARCODEDETECTION_MOJOM_TEST_UTILS_H_

#include "services/shape_detection/public/mojom/barcodedetection.mojom.h"


namespace shape_detection {
namespace mojom {


class  BarcodeDetectionInterceptorForTesting : public BarcodeDetection {
  virtual BarcodeDetection* GetForwardingInterface() = 0;
  void Detect(const ::SkBitmap& bitmap_data, DetectCallback callback) override;
};
class  BarcodeDetectionAsyncWaiter {
 public:
  explicit BarcodeDetectionAsyncWaiter(BarcodeDetection* proxy);

  BarcodeDetectionAsyncWaiter(const BarcodeDetectionAsyncWaiter&) = delete;
  BarcodeDetectionAsyncWaiter& operator=(const BarcodeDetectionAsyncWaiter&) = delete;

  ~BarcodeDetectionAsyncWaiter();
  void Detect(
      const ::SkBitmap& bitmap_data, std::vector<BarcodeDetectionResultPtr>* out_results);

 private:
  BarcodeDetection* const proxy_;
};




}  // namespace mojom
}  // namespace shape_detection

#endif  // SERVICES_SHAPE_DETECTION_PUBLIC_MOJOM_BARCODEDETECTION_MOJOM_TEST_UTILS_H_