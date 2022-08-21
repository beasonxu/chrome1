// chrome/common/draggable_regions.mojom-test-utils.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_COMMON_DRAGGABLE_REGIONS_MOJOM_TEST_UTILS_H_
#define CHROME_COMMON_DRAGGABLE_REGIONS_MOJOM_TEST_UTILS_H_

#include "chrome/common/draggable_regions.mojom.h"


namespace chrome {
namespace mojom {


class  DraggableRegionsInterceptorForTesting : public DraggableRegions {
  virtual DraggableRegions* GetForwardingInterface() = 0;
  void UpdateDraggableRegions(std::vector<DraggableRegionPtr> draggable_region) override;
};
class  DraggableRegionsAsyncWaiter {
 public:
  explicit DraggableRegionsAsyncWaiter(DraggableRegions* proxy);

  DraggableRegionsAsyncWaiter(const DraggableRegionsAsyncWaiter&) = delete;
  DraggableRegionsAsyncWaiter& operator=(const DraggableRegionsAsyncWaiter&) = delete;

  ~DraggableRegionsAsyncWaiter();

 private:
  DraggableRegions* const proxy_;
};




}  // namespace mojom
}  // namespace chrome

#endif  // CHROME_COMMON_DRAGGABLE_REGIONS_MOJOM_TEST_UTILS_H_