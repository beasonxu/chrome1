// Copyright 2022 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_BROWSER_UI_VIEWS_SIDE_PANEL_SIDE_PANEL_RESIZE_AREA_H_
#define CHROME_BROWSER_UI_VIEWS_SIDE_PANEL_SIDE_PANEL_RESIZE_AREA_H_

#include "chrome/browser/ui/views/side_panel/side_panel.h"
#include "ui/views/controls/image_view.h"
#include "ui/views/controls/resize_area.h"

namespace views {

// Keyboard-accessible drag handle icon intended to be drawn on top of a
// SidePanelResizeArea.
class SidePanelResizeHandle : public ImageView {
 public:
  METADATA_HEADER(SidePanelResizeHandle);

  SidePanelResizeHandle();

  void GetAccessibleNodeData(ui::AXNodeData* node_data) override;
  void OnThemeChanged() override;
};

// ResizeArea with custom Layout override to draw on top of the Side Panel
// border, and responsiveness to key events via a focusable
// SidePanelResizeHandle.
class SidePanelResizeArea : public ResizeArea {
 public:
  METADATA_HEADER(SidePanelResizeArea);

  explicit SidePanelResizeArea(SidePanel* side_panel);

  bool OnKeyPressed(const ui::KeyEvent& event) override;
  void Layout() override;

 private:
  raw_ptr<SidePanel> side_panel_;
  raw_ptr<ImageView> resize_handle_;
};

}  // namespace views

#endif  // CHROME_BROWSER_UI_VIEWS_SIDE_PANEL_SIDE_PANEL_RESIZE_AREA_H_
