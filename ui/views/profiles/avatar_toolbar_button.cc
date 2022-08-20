// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "chrome/browser/ui/views/profiles/avatar_toolbar_button.h"

#include <vector>

#include "base/check.h"
#include "base/compiler_specific.h"
#include "base/feature_list.h"
#include "base/notreached.h"
#include "base/observer_list.h"
#include "base/threading/thread_task_runner_handle.h"
#include "base/time/time.h"
#include "build/chromeos_buildflags.h"
#include "chrome/app/chrome_command_ids.h"
#include "chrome/app/vector_icons/vector_icons.h"
#include "chrome/browser/profiles/avatar_menu.h"
#include "chrome/browser/profiles/profile_avatar_icon_util.h"
#include "chrome/browser/sync/sync_ui_util.h"
#include "chrome/browser/themes/theme_properties.h"
#include "chrome/browser/ui/browser.h"
#include "chrome/browser/ui/browser_element_identifiers.h"
#include "chrome/browser/ui/browser_window.h"
#include "chrome/browser/ui/color/chrome_color_id.h"
#include "chrome/browser/ui/layout_constants.h"
#include "chrome/browser/ui/ui_features.h"
#include "chrome/browser/ui/view_ids.h"
#include "chrome/browser/ui/views/chrome_layout_provider.h"
#include "chrome/browser/ui/views/frame/browser_view.h"
#include "chrome/browser/ui/views/profiles/avatar_toolbar_button_delegate.h"
#include "chrome/browser/ui/views/toolbar/toolbar_ink_drop_util.h"
#include "chrome/grit/generated_resources.h"
#include "components/feature_engagement/public/feature_constants.h"
#include "components/feature_engagement/public/tracker.h"
#include "components/user_education/common/user_education_class_properties.h"
#include "ui/base/l10n/l10n_util.h"
#include "ui/base/metadata/metadata_impl_macros.h"
#include "ui/base/models/menu_model.h"
#include "ui/base/theme_provider.h"
#include "ui/gfx/color_palette.h"
#include "ui/gfx/image/image.h"
#include "ui/gfx/paint_vector_icon.h"
#include "ui/views/accessibility/view_accessibility.h"
#include "ui/views/controls/button/button_controller.h"
#include "ui/views/controls/button/label_button_border.h"
#include "ui/views/view_class_properties.h"

namespace {

// Note that the non-touchable icon size is larger than the default to make the
// avatar icon easier to read.
constexpr int kIconSizeForNonTouchUi = 22;

}  // namespace

// static
base::TimeDelta AvatarToolbarButton::g_iph_min_delay_after_creation =
    base::Seconds(2);

AvatarToolbarButton::AvatarToolbarButton(BrowserView* browser_view)
    : AvatarToolbarButton(browser_view, nullptr) {}

AvatarToolbarButton::AvatarToolbarButton(BrowserView* browser_view,
                                         ToolbarIconContainerView* parent)
    : ToolbarButton(base::BindRepeating(&AvatarToolbarButton::ButtonPressed,
                                        base::Unretained(this))),
      browser_(browser_view->browser()),
      parent_(parent),
      creation_time_(base::TimeTicks::Now()) {
  delegate_ =
      std::make_unique<AvatarToolbarButtonDelegate>(this, browser_->profile());

  // Activate on press for left-mouse-button only to mimic other MenuButtons
  // without drag-drop actions (specifically the adjacent browser menu).
  button_controller()->set_notify_action(
      views::ButtonController::NotifyAction::kOnPress);
  SetTriggerableEventFlags(ui::EF_LEFT_MOUSE_BUTTON);

  SetID(VIEW_ID_AVATAR_BUTTON);
  SetProperty(views::kElementIdentifierKey, kAvatarButtonElementId);

  // The avatar should not flip with RTL UI. This does not affect text rendering
  // and LabelButton image/label placement is still flipped like usual.
  SetFlipCanvasOnPaintForRTLUI(false);

  GetViewAccessibility().OverrideHasPopup(ax::mojom::HasPopup::kMenu);

  // For consistency with identity representation, we need to have the avatar on
  // the left and the (potential) user name on the right.
  SetHorizontalAlignment(gfx::ALIGN_LEFT);

  // TODO(crbug.com/922525): DCHECK(parent_) instead of the if, once we always
  // have a parent.
  if (parent_)
    parent_->AddObserver(this);
}

AvatarToolbarButton::~AvatarToolbarButton() {
  // TODO(crbug.com/922525): Remove the if, once we always have a parent.
  if (parent_)
    parent_->RemoveObserver(this);
}

void AvatarToolbarButton::UpdateIcon() {
  // If widget isn't set, the button doesn't have access to the theme provider
  // to set colors. Defer updating until AddedToWidget(). This may get called as
  // a result of OnUserIdentityChanged() called from the constructor when the
  // button is not yet added to the ToolbarView's hierarchy.
  if (!GetWidget())
    return;

  gfx::Image gaia_account_image = delegate_->GetGaiaAccountImage();
  for (auto state : kButtonStates)
    SetImageModel(state, GetAvatarIcon(state, gaia_account_image));
  delegate_->MaybeShowIdentityAnimation(gaia_account_image);

  SetInsets();
}

void AvatarToolbarButton::Layout() {
  ToolbarButton::Layout();

  // TODO(crbug.com/1094566): this is a hack to avoid mismatch between avatar
  // bitmap scaling and DIP->canvas pixel scaling in fractional DIP scaling
  // modes (125%, 133%, etc.) that can cause the right-hand or bottom pixel row
  // of the avatar image to be sliced off at certain specific browser sizes and
  // configurations.
  //
  // In order to solve this, we increase the width and height of the image by 1
  // after layout, so the rest of the layout is before. Since the profile image
  // uses transparency, visually this does not cause any change in cases where
  // the bug doesn't manifest.
  image()->SetHorizontalAlignment(views::ImageView::Alignment::kLeading);
  image()->SetVerticalAlignment(views::ImageView::Alignment::kLeading);
  gfx::Size image_size = image()->GetImage().size();
  image_size.Enlarge(1, 1);
  image()->SetSize(image_size);
}

void AvatarToolbarButton::UpdateText() {
  absl::optional<SkColor> color;
  std::u16string text;

  const auto* const color_provider = GetColorProvider();
  switch (delegate_->GetState()) {
    case State::kIncognitoProfile: {
      const int incognito_window_count = delegate_->GetWindowCount();
      SetAccessibleName(l10n_util::GetPluralStringFUTF16(
          IDS_INCOGNITO_BUBBLE_ACCESSIBLE_TITLE, incognito_window_count));
      text = l10n_util::GetPluralStringFUTF16(IDS_AVATAR_BUTTON_INCOGNITO,
                                              incognito_window_count);
      break;
    }
    case State::kAnimatedUserIdentity: {
      text = delegate_->GetShortProfileName();
      break;
    }
    case State::kSyncError:
      color = color_provider->GetColor(kColorAvatarButtonHighlightSyncError);
      text = l10n_util::GetStringUTF16(IDS_AVATAR_BUTTON_SYNC_ERROR);
      break;
    case State::kSyncPaused:
      color = color_provider->GetColor(kColorAvatarButtonHighlightSyncPaused);
      text = l10n_util::GetStringUTF16(IDS_AVATAR_BUTTON_SYNC_PAUSED);
      break;
    case State::kGuestSession: {
#if BUILDFLAG(IS_CHROMEOS_ASH)
      // On ChromeOS all windows are either Guest or not Guest and the Guest
      // avatar button is not actionable. Showing the number of open windows is
      // not as helpful as on other desktop platforms. Please see
      // crbug.com/1178520.
      const int guest_window_count = 1;
#else
      const int guest_window_count = delegate_->GetWindowCount();
#endif
      SetAccessibleName(l10n_util::GetPluralStringFUTF16(
          IDS_GUEST_BUBBLE_ACCESSIBLE_TITLE, guest_window_count));
      text = l10n_util::GetPluralStringFUTF16(IDS_AVATAR_BUTTON_GUEST,
                                              guest_window_count);
      break;
    }
    case State::kNormal:
      if (delegate_->IsHighlightAnimationVisible()) {
        color = color_provider->GetColor(kColorAvatarButtonHighlightNormal);
      }
      break;
  }

  SetInsets();
  SetTooltipText(GetAvatarTooltipText());
  SetHighlight(text, color);

  // TODO(crbug.com/1078221): this is a hack because toolbar buttons don't
  // correctly calculate their preferred size until they've been laid out once
  // or twice, because they modify their own borders and insets in response to
  // their size and have their own preferred size caching mechanic. These should
  // both ideally be handled with a modern layout manager instead.
  //
  // In the meantime, to ensure that correct (or nearly correct) bounds are set,
  // we will force a resize then invalidate layout to let the layout manager
  // take over.
  SizeToPreferredSize();
  InvalidateLayout();
}

void AvatarToolbarButton::ShowAvatarHighlightAnimation() {
  delegate_->ShowHighlightAnimation();
}

void AvatarToolbarButton::AddObserver(Observer* observer) {
  observer_list_.AddObserver(observer);
}

void AvatarToolbarButton::RemoveObserver(Observer* observer) {
  observer_list_.RemoveObserver(observer);
}

void AvatarToolbarButton::NotifyHighlightAnimationFinished() {
  for (AvatarToolbarButton::Observer& observer : observer_list_)
    observer.OnAvatarHighlightAnimationFinished();
}

void AvatarToolbarButton::MaybeShowProfileSwitchIPH() {
  // If the tracker is already initialized, the callback is called immediately.
  auto* const promo_controller =
      BrowserFeaturePromoController::GetForView(this);
  if (promo_controller) {
    promo_controller->feature_engagement_tracker()->AddOnInitializedCallback(
        base::BindOnce(
            &AvatarToolbarButton::MaybeShowProfileSwitchIPHInitialized,
            weak_ptr_factory_.GetWeakPtr()));
  }
}

void AvatarToolbarButton::OnMouseExited(const ui::MouseEvent& event) {
  delegate_->OnMouseExited();
  ToolbarButton::OnMouseExited(event);
}

void AvatarToolbarButton::OnBlur() {
  delegate_->OnBlur();
  ToolbarButton::OnBlur();
}

void AvatarToolbarButton::OnThemeChanged() {
  ToolbarButton::OnThemeChanged();
  UpdateText();
}

void AvatarToolbarButton::OnHighlightChanged() {
  DCHECK(parent_);
  delegate_->OnHighlightChanged();
}

// static
void AvatarToolbarButton::SetIPHMinDelayAfterCreationForTesting(
    base::TimeDelta delay) {
  g_iph_min_delay_after_creation = delay;
}

void AvatarToolbarButton::ButtonPressed() {
  browser_->window()->ShowAvatarBubbleFromAvatarButton(
      /*is_source_accelerator=*/false);
}

void AvatarToolbarButton::AfterPropertyChange(const void* key,
                                              int64_t old_value) {
  if (key == user_education::kHasInProductHelpPromoKey)
    delegate_->SetHasInProductHelpPromo(
        GetProperty(user_education::kHasInProductHelpPromoKey));
  ToolbarButton::AfterPropertyChange(key, old_value);
}

std::u16string AvatarToolbarButton::GetAvatarTooltipText() const {
  switch (delegate_->GetState()) {
    case State::kIncognitoProfile:
      return l10n_util::GetStringUTF16(IDS_AVATAR_BUTTON_INCOGNITO_TOOLTIP);
    case State::kGuestSession:
      return l10n_util::GetStringUTF16(IDS_AVATAR_BUTTON_GUEST_TOOLTIP);
    case State::kAnimatedUserIdentity:
      return delegate_->GetShortProfileName();
    // kSyncPaused is just a type of sync error with different color, but should
    // still use GetAvatarSyncErrorDescription() as tooltip.
    case State::kSyncError:
    case State::kSyncPaused: {
      absl::optional<AvatarSyncErrorType> error =
          delegate_->GetAvatarSyncErrorType();
      DCHECK(error);
      return l10n_util::GetStringFUTF16(
          IDS_AVATAR_BUTTON_SYNC_ERROR_TOOLTIP,
          delegate_->GetShortProfileName(),
          GetAvatarSyncErrorDescription(*error,
                                        delegate_->IsSyncFeatureEnabled()));
    }
    case State::kNormal:
      return delegate_->GetProfileName();
  }
  NOTREACHED();
  return std::u16string();
}

ui::ImageModel AvatarToolbarButton::GetAvatarIcon(
    ButtonState state,
    const gfx::Image& gaia_account_image) const {
  const int icon_size = ui::TouchUiController::Get()->touch_ui()
                            ? kDefaultTouchableIconSize
                            : kIconSizeForNonTouchUi;
  SkColor icon_color = GetForegroundColor(state);

  switch (delegate_->GetState()) {
    case State::kIncognitoProfile:
      return ui::ImageModel::FromVectorIcon(kIncognitoIcon, icon_color,
                                            icon_size);
    case State::kGuestSession:
      return profiles::GetGuestAvatar(icon_size);
    case State::kAnimatedUserIdentity:
    case State::kSyncError:
    // TODO(crbug.com/1191411): If sync-the-feature is disabled, the icon should
    // be different.
    case State::kSyncPaused:
    case State::kNormal:
      return ui::ImageModel::FromImage(profiles::GetSizedAvatarIcon(
          delegate_->GetProfileAvatarImage(gaia_account_image, icon_size),
          icon_size, icon_size, profiles::SHAPE_CIRCLE));
  }
  NOTREACHED();
  return ui::ImageModel();
}

void AvatarToolbarButton::SetInsets() {
  // In non-touch mode we use a larger-than-normal icon size for avatars so we
  // need to compensate it by smaller insets.
  const bool touch_ui = ui::TouchUiController::Get()->touch_ui();
  gfx::Insets layout_insets(
      touch_ui ? 0 : (kDefaultIconSize - kIconSizeForNonTouchUi) / 2);
  SetLayoutInsetDelta(layout_insets);
}

void AvatarToolbarButton::MaybeShowProfileSwitchIPHInitialized(bool success) {
  if (!success)
    return;  // IPH system initialization failed.

  // Prevent showing the promo right when the browser was created. Wait a small
  // delay for a smoother animation.
  base::TimeDelta time_since_creation = base::TimeTicks::Now() - creation_time_;
  if (time_since_creation < g_iph_min_delay_after_creation) {
    base::ThreadTaskRunnerHandle::Get()->PostDelayedTask(
        FROM_HERE,
        base::BindOnce(
            &AvatarToolbarButton::MaybeShowProfileSwitchIPHInitialized,
            weak_ptr_factory_.GetWeakPtr(), /*success=*/true),
        g_iph_min_delay_after_creation - time_since_creation);
    return;
  }

  auto* const promo_controller =
      BrowserFeaturePromoController::GetForView(this);
  DCHECK(promo_controller->feature_engagement_tracker()->IsInitialized());
  promo_controller->MaybeShowPromo(
      feature_engagement::kIPHProfileSwitchFeature);
}

BEGIN_METADATA(AvatarToolbarButton, ToolbarButton)
END_METADATA
