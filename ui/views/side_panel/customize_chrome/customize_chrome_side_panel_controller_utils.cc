// Copyright 2022 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "chrome/browser/ui/side_panel/customize_chrome/customize_chrome_side_panel_controller_utils.h"

#include "chrome/browser/ui/views/side_panel/customize_chrome/customize_chrome_side_panel_controller.h"

namespace customize_chrome {

std::unique_ptr<CustomizeChromeTabHelper::Delegate> CreateDelegate() {
  return std::make_unique<CustomizeChromeSidePanelController>();
}

}  // namespace customize_chrome
