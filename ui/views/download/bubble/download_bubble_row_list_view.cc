// Copyright 2022 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "chrome/browser/ui/views/download/bubble/download_bubble_row_list_view.h"

#include "base/metrics/histogram_functions.h"
#include "base/strings/strcat.h"
#include "chrome/browser/download/bubble/download_bubble_prefs.h"
#include "chrome/browser/ui/browser.h"
#include "chrome/browser/ui/color/chrome_color_id.h"
#include "chrome/browser/ui/layout_constants.h"
#include "chrome/browser/ui/views/chrome_layout_provider.h"
#include "chrome/grit/generated_resources.h"
#include "components/vector_icons/vector_icons.h"
#include "ui/base/l10n/l10n_util.h"
#include "ui/base/metadata/metadata_impl_macros.h"
#include "ui/color/color_provider.h"
#include "ui/views/background.h"
#include "ui/views/border.h"
#include "ui/views/controls/image_view.h"
#include "ui/views/controls/label.h"
#include "ui/views/layout/box_layout.h"
#include "ui/views/layout/box_layout_view.h"
#include "ui/views/vector_icons.h"

DownloadBubbleRowListView::DownloadBubbleRowListView(bool is_partial_view,
                                                     Browser* browser)
    : is_partial_view_(is_partial_view),
      creation_time_(base::Time::Now()),
      browser_(browser) {
  SetOrientation(views::LayoutOrientation::kVertical);
  if (IsIncognitoInfoRowEnabled()) {
    auto* header_info_row =
        AddChildView(std::make_unique<views::BoxLayoutView>());
    header_info_row->SetOrientation(views::BoxLayout::Orientation::kHorizontal);
    header_info_row->SetBetweenChildSpacing(
        ChromeLayoutProvider::Get()->GetDistanceMetric(
            views::DISTANCE_RELATED_LABEL_HORIZONTAL));
    header_info_row->SetCrossAxisAlignment(
        views::BoxLayout::CrossAxisAlignment::kStart);
    header_info_row->SetBorder(
        views::CreateEmptyBorder(GetLayoutInsets(DOWNLOAD_ROW)));
    header_info_row->SetBackground(views::CreateThemedRoundedRectBackground(
        kColorDownloadBubbleInfoBackground,
        ChromeLayoutProvider::Get()->GetCornerRadiusMetric(
            views::Emphasis::kHigh)));

    info_icon_ =
        header_info_row->AddChildView(std::make_unique<views::ImageView>());
    info_icon_->SetBorder(
        views::CreateEmptyBorder(GetLayoutInsets(DOWNLOAD_ICON)));
    info_icon_->SetImage(ui::ImageModel::FromVectorIcon(
        views::kInfoIcon, kColorDownloadBubbleInfoIcon,
        GetLayoutConstant(DOWNLOAD_ICON_SIZE)));

    auto* info_label =
        header_info_row->AddChildView(std::make_unique<views::Label>(
            l10n_util::GetStringUTF16(
                IDS_DOWNLOAD_BUBBLE_INCOGNITO_INFORMATION_ROW),
            views::style::CONTEXT_DIALOG_BODY_TEXT,
            views::style::STYLE_PRIMARY));
    info_label->SetHorizontalAlignment(gfx::HorizontalAlignment::ALIGN_LEFT);
    info_label->SetMultiLine(true);

    // TODO(bhatiarohit): As noted in https://crbug.com/1340937#c3, the layout
    // seems to have an issue with multi-line labels. As a workaround, give the
    // label the fixed size width. The side margin is added twice, once in the
    // bubble, and then for each row.
    const int side_margin = GetLayoutInsets(DOWNLOAD_ROW).width();
    const int icon_label_spacing =
        ChromeLayoutProvider::Get()->GetDistanceMetric(
            views::DISTANCE_RELATED_LABEL_HORIZONTAL);
    const int bubble_width = ChromeLayoutProvider::Get()->GetDistanceMetric(
        views::DISTANCE_BUBBLE_PREFERRED_WIDTH);
    const int min_label_width =
        bubble_width - side_margin * 2 - GetLayoutConstant(DOWNLOAD_ICON_SIZE) -
        GetLayoutInsets(DOWNLOAD_ICON).width() - icon_label_spacing;
    info_label->SizeToFit(min_label_width);
  }
}

DownloadBubbleRowListView::~DownloadBubbleRowListView() {
  base::UmaHistogramMediumTimes(
      base::StrCat({"Download.Bubble.", is_partial_view_ ? "Partial" : "Full",
                    "View.VisibleTime"}),
      base::Time::Now() - creation_time_);
}

bool DownloadBubbleRowListView::IsIncognitoInfoRowEnabled() {
  Profile* profile = browser_->profile();
  return download::IsDownloadBubbleV2Enabled(profile) &&
         profile->IsOffTheRecord();
}

BEGIN_METADATA(DownloadBubbleRowListView, views::FlexLayoutView)
END_METADATA
