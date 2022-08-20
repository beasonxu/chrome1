// Copyright 2022 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_BROWSER_UI_VIEWS_SIDE_PANEL_LENS_LENS_UNIFIED_SIDE_PANEL_VIEW_H_
#define CHROME_BROWSER_UI_VIEWS_SIDE_PANEL_LENS_LENS_UNIFIED_SIDE_PANEL_VIEW_H_

#include "base/memory/raw_ptr.h"
#include "base/memory/weak_ptr.h"
#include "chrome/browser/ui/views/frame/browser_view.h"
#include "content/public/browser/navigation_handle.h"
#include "ui/views/layout/flex_layout_view.h"

namespace content {
class WebContents;
}  // namespace content

namespace views {
class Separator;
class WebView;
class MdTextButton;
}  // namespace views

namespace lens {

// Owns the lens webview and navigates to a google lens URL when requested. Its
// owned by the side panel registry.
class LensUnifiedSidePanelView : public views::FlexLayoutView,
                                 public content::WebContentsObserver,
                                 public content::WebContentsDelegate {
 public:
  explicit LensUnifiedSidePanelView(BrowserView* browser_view);
  LensUnifiedSidePanelView(const LensUnifiedSidePanelView&) = delete;
  LensUnifiedSidePanelView& operator=(const LensUnifiedSidePanelView&) = delete;
  ~LensUnifiedSidePanelView() override;

  // views::View
  void OnBoundsChanged(const gfx::Rect& previous_bounds) override;

  content::WebContents* GetWebContents();

  void OpenUrl(const content::OpenURLParams& params);

  // Loads the Lens website if the side panel view is ready with a width.
  void MaybeLoadURLWithParams();

  // Opens current view URL in a new chrome tab and closes the side panel
  void LoadResultsInNewTab();

  base::WeakPtr<LensUnifiedSidePanelView> GetWeakPtr() {
    return weak_factory_.GetWeakPtr();
  }

  bool IsLaunchButtonEnabledForTesting();

 private:
  void CreateAndInstallFooter();

  // Shows / hides the lens results and the loading view to avoid showing
  // loading artifacts. If the visible bool is false, show loading view else
  // show lens results view.
  void SetContentVisible(bool visible);

  // content::WebContentsObserver:
  void LoadProgressChanged(double progress) override;

  // content::WebContentsDelegate:
  bool HandleContextMenu(content::RenderFrameHost& render_frame_host,
                         const content::ContextMenuParams& params) override;

  // content::WebContentsObserver:
  void DidOpenRequestedURL(content::WebContents* new_contents,
                           content::RenderFrameHost* source_render_frame_host,
                           const GURL& url,
                           const content::Referrer& referrer,
                           WindowOpenDisposition disposition,
                           ui::PageTransition transition,
                           bool started_from_context_menu,
                           bool renderer_initiated) override;

  raw_ptr<BrowserView> browser_view_;
  raw_ptr<views::Separator> separator_;
  raw_ptr<views::WebView> loading_indicator_web_view_;
  raw_ptr<views::WebView> web_view_;
  raw_ptr<views::MdTextButton> launch_button_;

  // Copy of the most recent URL params to open.
  std::unique_ptr<content::OpenURLParams> side_panel_url_params_;

  base::WeakPtrFactory<LensUnifiedSidePanelView> weak_factory_{this};
};

}  // namespace lens

#endif  // CHROME_BROWSER_UI_VIEWS_SIDE_PANEL_LENS_LENS_UNIFIED_SIDE_PANEL_VIEW_H_
