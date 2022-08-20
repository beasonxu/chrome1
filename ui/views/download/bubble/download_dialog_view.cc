// Copyright 2022 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "chrome/browser/ui/views/download/bubble/download_dialog_view.h"
#include "base/logging.h"
#include "chrome/app/vector_icons/vector_icons.h"
#include "chrome/browser/ui/chrome_pages.h"
#include "chrome/browser/ui/layout_constants.h"
#include "chrome/browser/ui/views/accessibility/non_accessible_image_view.h"
#include "chrome/browser/ui/views/chrome_layout_provider.h"
#include "chrome/browser/ui/views/download/bubble/download_bubble_row_list_view.h"
#include "chrome/grit/generated_resources.h"
#include "components/vector_icons/vector_icons.h"
#include "ui/base/l10n/l10n_util.h"
#include "ui/base/metadata/metadata_impl_macros.h"
#include "ui/color/color_provider.h"
#include "ui/gfx/paint_vector_icon.h"
#include "ui/resources/grit/ui_resources.h"
#include "ui/strings/grit/ui_strings.h"
#include "ui/views/controls/button/image_button.h"
#include "ui/views/controls/button/image_button_factory.h"
#include "ui/views/controls/highlight_path_generator.h"
#include "ui/views/controls/image_view.h"
#include "ui/views/controls/link.h"
#include "ui/views/controls/styled_label.h"
#include "ui/views/layout/box_layout.h"
#include "ui/views/layout/box_layout_view.h"
#include "ui/views/layout/flex_layout.h"
#include "ui/views/layout/flex_layout_types.h"
#include "ui/views/layout/flex_layout_view.h"
#include "ui/views/layout/layout_provider.h"
#include "ui/views/view.h"
#include "ui/views/view_class_properties.h"
#include "ui/views/widget/widget.h"
#include "ui/views/window/vector_icons/vector_icons.h"

void DownloadDialogView::CloseBubble() {
  navigation_handler_->CloseDialog(
      views::Widget::ClosedReason::kCloseButtonClicked);
}

void DownloadDialogView::ShowAllDownloads() {
  chrome::ShowDownloads(browser_);
}

void DownloadDialogView::AddHeader() {
  auto* header = AddChildView(std::make_unique<views::FlexLayoutView>());
  header->SetOrientation(views::LayoutOrientation::kHorizontal);
  header->SetBorder(views::CreateEmptyBorder(GetLayoutInsets(DOWNLOAD_ROW)));

  auto* title = header->AddChildView(std::make_unique<views::Label>(
      l10n_util::GetStringUTF16(IDS_DOWNLOAD_BUBBLE_HEADER_TEXT),
      views::style::CONTEXT_DIALOG_TITLE, views::style::STYLE_PRIMARY));
  title->SetProperty(
      views::kFlexBehaviorKey,
      views::FlexSpecification(views::MinimumFlexSizeRule::kScaleToZero,
                               views::MaximumFlexSizeRule::kUnbounded,
                               /*adjust_height_for_width=*/true));
  title->SetHorizontalAlignment(gfx::ALIGN_LEFT);

  auto* close_button =
      header->AddChildView(views::CreateVectorImageButtonWithNativeTheme(
          base::BindRepeating(&DownloadDialogView::CloseBubble,
                              base::Unretained(this)),
          vector_icons::kCloseRoundedIcon,
          GetLayoutConstant(DOWNLOAD_ICON_SIZE)));
  InstallCircleHighlightPathGenerator(close_button);
  close_button->SetTooltipText(l10n_util::GetStringUTF16(IDS_APP_CLOSE));
  close_button->SetProperty(views::kCrossAxisAlignmentKey,
                            views::LayoutAlignment::kStart);
}

void DownloadDialogView::AddFooter() {
  auto* footer = AddChildView(std::make_unique<views::View>());
  footer->SetLayoutManager(std::make_unique<views::FlexLayout>())
      ->SetOrientation(views::LayoutOrientation::kHorizontal);
  footer->SetBorder(views::CreateEmptyBorder(GetLayoutInsets(DOWNLOAD_ROW)));

  footer_link_ = footer->AddChildView(std::make_unique<views::Link>(
      l10n_util::GetStringUTF16(IDS_DOWNLOAD_BUBBLE_FOOTER_LINK),
      views::style::CONTEXT_DIALOG_BODY_TEXT, views::style::STYLE_PRIMARY));
  footer_link_->SetProperty(
      views::kFlexBehaviorKey,
      views::FlexSpecification(views::MinimumFlexSizeRule::kScaleToZero,
                               views::MaximumFlexSizeRule::kUnbounded,
                               /*adjust_height_for_width=*/true)
          .WithWeight(1));
  footer_link_->SetHorizontalAlignment(gfx::ALIGN_LEFT);
  footer_link_->SetCallback(base::BindRepeating(
      &DownloadDialogView::ShowAllDownloads, base::Unretained(this)));
  footer_link_->SetForceUnderline(false);

  auto* icon = footer->AddChildView(std::make_unique<NonAccessibleImageView>());
  icon->SetImage(
      ui::ImageModel::FromVectorIcon(kDownloadToolbarButtonIcon, ui::kColorIcon,
                                     GetLayoutConstant(DOWNLOAD_ICON_SIZE)));
  icon->SetBorder(views::CreateEmptyBorder(GetLayoutInsets(DOWNLOAD_ICON)));
  icon->SetProperty(views::kCrossAxisAlignmentKey,
                    views::LayoutAlignment::kStart);
}

void DownloadDialogView::OnThemeChanged() {
  views::View::OnThemeChanged();
  footer_link_->SetEnabledColor(views::style::GetColor(
      *this, footer_link_->GetTextContext(), footer_link_->GetTextStyle()));
}

DownloadDialogView::DownloadDialogView(
    raw_ptr<Browser> browser,
    std::unique_ptr<views::View> row_list_scroll_view,
    DownloadBubbleNavigationHandler* navigation_handler)
    : navigation_handler_(navigation_handler), browser_(browser) {
  SetLayoutManager(std::make_unique<views::FlexLayout>())
      ->SetOrientation(views::LayoutOrientation::kVertical);
  AddHeader();
  AddChildView(std::move(row_list_scroll_view));
  AddFooter();
}

BEGIN_METADATA(DownloadDialogView, views::View)
END_METADATA
