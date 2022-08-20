// Copyright 2021 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_BROWSER_UI_VIEWS_PAGE_INFO_PAGE_INFO_VIEW_FACTORY_H_
#define CHROME_BROWSER_UI_VIEWS_PAGE_INFO_PAGE_INFO_VIEW_FACTORY_H_

#include "base/memory/raw_ptr.h"
#include "components/page_info/page_info.h"
#include "components/page_info/page_info_ui.h"
#include "ui/base/models/image_model.h"
#include "ui/views/view.h"

namespace page_info {
namespace proto {
class SiteInfo;
}
}  // namespace page_info

class ChromePageInfoUiDelegate;
class PageInfo;
class PageInfoNavigationHandler;
class PageInfoHistoryController;

// A factory class that creates pages and individual views for page info.
class PageInfoViewFactory {
 public:
  PageInfoViewFactory(PageInfo* presenter,
                      ChromePageInfoUiDelegate* ui_delegate,
                      PageInfoNavigationHandler* navigation_handler,
                      PageInfoHistoryController* history_controller);

  // Bubble width constraints.
  static constexpr int kMinBubbleWidth = 320;
  static constexpr int kMaxBubbleWidth = 1000;

  enum PageInfoViewID {
    VIEW_ID_PAGE_INFO_NONE = 0,
    VIEW_ID_PAGE_INFO_BUTTON_CHANGE_PASSWORD,
    VIEW_ID_PAGE_INFO_BUTTON_ALLOWLIST_PASSWORD_REUSE,
    VIEW_ID_PAGE_INFO_LABEL_EV_CERTIFICATE_DETAILS,
    VIEW_ID_PAGE_INFO_LINK_OR_BUTTON_COOKIE_DIALOG,
    VIEW_ID_PAGE_INFO_LINK_OR_BUTTON_COOKIES_SUBPAGE,
    VIEW_ID_PAGE_INFO_COOKIES_DESCRIPTION_LABEL,
    VIEW_ID_PAGE_INFO_LINK_OR_BUTTON_FPS_SETTINGS,
    VIEW_ID_PAGE_INFO_LINK_OR_BUTTON_SITE_SETTINGS,
    VIEW_ID_PAGE_INFO_LINK_OR_BUTTON_CERTIFICATE_VIEWER,
    VIEW_ID_PAGE_INFO_BUTTON_END_VR,
    VIEW_ID_PAGE_INFO_HOVER_BUTTON_VR_PRESENTATION,
    VIEW_ID_PAGE_INFO_BUTTON_LEAVE_SITE,
    VIEW_ID_PAGE_INFO_BUTTON_IGNORE_WARNING,
    VIEW_ID_PAGE_INFO_LINK_OR_BUTTON_SECURITY_INFORMATION,
    VIEW_ID_PAGE_INFO_PERMISSION_VIEW,
    VIEW_ID_PAGE_INFO_SECURITY_SUMMARY_LABEL,
    VIEW_ID_PAGE_INFO_SECURITY_DETAILS_LABEL,
    VIEW_ID_PAGE_INFO_BACK_BUTTON,
    VIEW_ID_PAGE_INFO_CLOSE_BUTTON,
    VIEW_ID_PAGE_INFO_CURRENT_VIEW,
    VIEW_ID_PAGE_INFO_RESET_PERMISSIONS_BUTTON,
    VIEW_ID_PAGE_INFO_ABOUT_THIS_SITE_BUTTON,
    VIEW_ID_PAGE_INFO_HISTORY_BUTTON,
    VIEW_ID_PAGE_INFO_AD_PERSONALIZATION_BUTTON,
    VIEW_ID_PAGE_INFO_MORE_ABOUT_THIS_PAGE_BUTTON,
  };

  // Creates a separator view with padding on top and bottom. Use with flex
  // layout only.
  [[nodiscard]] static std::unique_ptr<views::View> CreateSeparator();

  // Creates a label container view with padding on left and right side.
  // Supports multiple multiline labels in a column (ex. title and subtitle
  // labels). Use with flex layout only.
  [[nodiscard]] static std::unique_ptr<views::View> CreateLabelWrapper();

  // Returns icons for the given PageInfo::PermissionInfo |info|. If |info|'s
  // current setting is CONTENT_SETTING_DEFAULT, it will return the icon for
  // |info|'s default setting.
  static const ui::ImageModel GetPermissionIcon(
      const PageInfo::PermissionInfo& info);

  // Returns the icon for the given object |info|.
  static const ui::ImageModel GetChosenObjectIcon(
      const PageInfoUI::ChosenObjectInfo& info,
      bool deleted);

  // Returns the icon for the page's certificate when it's valid.
  static const ui::ImageModel GetValidCertificateIcon();

  // Returns the icon for the page's certificate when it's invalid.
  static const ui::ImageModel GetInvalidCertificateIcon();

  // Returns the icon for the button / link to Site settings.
  static const ui::ImageModel GetSiteSettingsIcon();

  // Returns the icon for VR settings.
  static const ui::ImageModel GetVrSettingsIcon();

  // Returns the icon for a button which opens an external dialog or page (ex.
  // cookies dialog or site settings page).
  static const ui::ImageModel GetLaunchIcon();

  // Returns the not secure state icon for the SecurityInformationView.
  static const ui::ImageModel GetConnectionNotSecureIcon();

  // Returns the icon for the secure connection button.
  static const ui::ImageModel GetConnectionSecureIcon();

  // Returns the icon for a button which opens a subpage within page info.
  static const ui::ImageModel GetOpenSubpageIcon();

  // Returns the icon for a permission in a state not managed by the user.
  static const ui::ImageModel GetManagedPermissionIcon(
      const PageInfo::PermissionInfo& info);

  // Returns the icon for 'About this site' button.
  static const ui::ImageModel GetAboutThisSiteIcon();

  // Returns the icon for 'About this page' button.
  static const ui::ImageModel GetAboutThisPageIcon();

  // Returns the icon for the history button.
  static const ui::ImageModel GetHistoryIcon();

  // Returns the icon for the 'Ad personalization' button.
  static const ui::ImageModel GetAdPersonalizationIcon();

  [[nodiscard]] std::unique_ptr<views::View> CreateMainPageView(
      base::OnceClosure initialized_callback);
  [[nodiscard]] std::unique_ptr<views::View> CreateSecurityPageView();
  [[nodiscard]] std::unique_ptr<views::View> CreatePermissionPageView(
      ContentSettingsType type);
  [[nodiscard]] std::unique_ptr<views::View> CreateAboutThisSitePageView(
      const page_info::proto::SiteInfo& info);
  [[nodiscard]] std::unique_ptr<views::View> CreateAdPersonalizationPageView();
  [[nodiscard]] std::unique_ptr<views::View> CreateCookiesPageView();

 private:
  // Creates a subpage header with back button that opens the main page, a
  // title label with text |title|, an optional subtitle label with text
  // |subtitle| if |subtitle| is not empty and close button that closes the
  // bubble.
  // *------------------------------------------------*
  // | Back | |title|                           Close |
  // |------------------------------------------------|
  // |      | |subtitle|
  // *-------------------------------------------------*
  [[nodiscard]] std::unique_ptr<views::View> CreateSubpageHeader(
      std::u16string title,
      std::u16string subtitle);

  raw_ptr<PageInfo> presenter_;
  raw_ptr<ChromePageInfoUiDelegate> ui_delegate_;
  raw_ptr<PageInfoNavigationHandler> navigation_handler_;
  raw_ptr<PageInfoHistoryController> history_controller_;
};

#endif  // CHROME_BROWSER_UI_VIEWS_PAGE_INFO_PAGE_INFO_VIEW_FACTORY_H_
