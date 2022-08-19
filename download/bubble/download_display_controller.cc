// Copyright 2021 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
#include "chrome/browser/download/bubble/download_display_controller.h"

#include "base/numerics/safe_conversions.h"
#include "base/time/time.h"
#include "base/timer/timer.h"
#include "chrome/browser/download/bubble/download_bubble_controller.h"
#include "chrome/browser/download/bubble/download_bubble_prefs.h"
#include "chrome/browser/download/bubble/download_display.h"
#include "chrome/browser/download/bubble/download_icon_state.h"
#include "chrome/browser/download/download_item_model.h"
#include "chrome/browser/download/download_prefs.h"
#include "chrome/browser/ui/browser.h"
#include "chrome/browser/ui/browser_window.h"
#include "chrome/browser/ui/download/download_item_mode.h"
#include "chrome/browser/ui/exclusive_access/exclusive_access_bubble_type.h"
#include "chrome/browser/ui/exclusive_access/exclusive_access_context.h"
#include "chrome/browser/ui/exclusive_access/exclusive_access_manager.h"
#include "components/offline_items_collection/core/offline_item.h"
#include "components/offline_items_collection/core/offline_item_state.h"

namespace {

using DownloadIconState = download::DownloadIconState;

// The amount of time for the toolbar icon to be visible after a download is
// completed.
constexpr base::TimeDelta kToolbarIconVisibilityTimeInterval = base::Hours(24);

// The amount of time for the toolbar icon to stay active after a download is
// completed. If the download completed while full screen, the timer is started
// after user comes out of the full screen.
constexpr base::TimeDelta kToolbarIconActiveTimeInterval = base::Minutes(1);

// From the button UI's perspective, whether the download is considered in
// progress.
bool IsModelInProgress(const DownloadUIModel* model) {
  // Consider dangerous downloads as completed, because we don't want to
  // encourage users to interact with them. However, consider downloads pending
  // scanning as in progress, because we do want users to scan potential
  // dangerous downloads.
  if (model->IsDangerous() &&
      model->GetDangerType() !=
          download::DOWNLOAD_DANGER_TYPE_PROMPT_FOR_SCANNING) {
    return false;
  }
  return model->GetState() == download::DownloadItem::IN_PROGRESS;
}

bool HasDeepScanningDownload(
    std::vector<std::unique_ptr<DownloadUIModel>>& all_models) {
  for (const auto& model : all_models) {
    if (model->GetDangerType() ==
            download::DOWNLOAD_DANGER_TYPE_ASYNC_SCANNING &&
        model->GetState() != download::DownloadItem::CANCELLED) {
      return true;
    }
  }
  return false;
}

int InProgressDownloadCount(
    std::vector<std::unique_ptr<DownloadUIModel>>& all_models) {
  int in_progress_count = 0;
  for (const auto& model : all_models) {
    if (IsModelInProgress(model.get())) {
      in_progress_count++;
    }
  }
  return in_progress_count;
}
}  // namespace

DownloadDisplayController::DownloadDisplayController(
    DownloadDisplay* display,
    Browser* browser,
    DownloadBubbleUIController* bubble_controller)
    : display_(display),
      browser_(browser),
      download_manager_(browser_->profile()->GetDownloadManager()),
      download_notifier_(download_manager_, this),
      bubble_controller_(bubble_controller) {
  bubble_controller_->InitOfflineItems(
      this,
      base::BindOnce(&DownloadDisplayController::MaybeShowButtonWhenCreated,
                     weak_factory_.GetWeakPtr()));
}

DownloadDisplayController::~DownloadDisplayController() = default;

void DownloadDisplayController::OnNewItem(bool show_details) {
  if (!download::ShouldShowDownloadBubble(browser_->profile())) {
    return;
  }

  std::vector<std::unique_ptr<DownloadUIModel>> all_models =
      bubble_controller_->GetAllItemsToDisplay();
  UpdateToolbarButtonState(all_models);
  if (show_details) {
    if (browser_->window()->IsFullscreen()) {
      browser_->exclusive_access_manager()
          ->context()
          ->UpdateExclusiveAccessExitBubbleContent(
              GURL(), EXCLUSIVE_ACCESS_BUBBLE_TYPE_DOWNLOAD_STARTED,
              ExclusiveAccessBubbleHideCallback(),
              /*force_update=*/false);
    } else if (download::ShouldShowDetailsAutomatically(browser_->profile())) {
      display_->ShowDetails();
    }
  }
}

void DownloadDisplayController::OnUpdatedItem(bool is_done,
                                              bool show_details_if_done) {
  if (!download::ShouldShowDownloadBubble(browser_->profile())) {
    return;
  }
  if (is_done) {
    ScheduleToolbarDisappearance(kToolbarIconVisibilityTimeInterval);
    if (show_details_if_done) {
      if (browser_->window()->IsFullscreen()) {
        download_completed_while_fullscreen_ = true;
      } else if (download::ShouldShowDetailsAutomatically(
                     browser_->profile())) {
        display_->ShowDetails();
      }
    }
  }
  std::vector<std::unique_ptr<DownloadUIModel>> all_models =
      bubble_controller_->GetAllItemsToDisplay();
  UpdateToolbarButtonState(all_models);
}

void DownloadDisplayController::OnRemovedItem(const ContentId& id) {
  if (!download::ShouldShowDownloadBubble(browser_->profile())) {
    return;
  }
  std::vector<std::unique_ptr<DownloadUIModel>> all_models =
      bubble_controller_->GetAllItemsToDisplay();
  // Hide the button if there is only one download item left and that item is
  // about to be removed.
  if (all_models.size() == 1 && all_models[0]->GetContentId() == id) {
    HideToolbarButton();
    return;
  }
  UpdateToolbarButtonState(all_models);
}

void DownloadDisplayController::OnManagerGoingDown(
    content::DownloadManager* manager) {
  if (download_manager_ == manager) {
    download_manager_ = nullptr;
  }
}

void DownloadDisplayController::OnButtonPressed() {
  // If the current state is kComplete, set the icon to inactive because of the
  // user action.
  if (icon_info_.icon_state == DownloadIconState::kComplete) {
    icon_info_.is_active = false;
  }
  display_->UpdateDownloadIcon();
}

void DownloadDisplayController::ShowToolbarButton() {
  if (!display_->IsShowing()) {
    display_->Enable();
    display_->Show();
  }
}

void DownloadDisplayController::HideToolbarButton() {
  if (display_->IsShowing()) {
    display_->Hide();
  }
}

void DownloadDisplayController::HideBubble() {
  if (display_->IsShowingDetails()) {
    display_->HideDetails();
  }
}

void DownloadDisplayController::ListenToFullScreenChanges() {
  observation_.Observe(
      browser_->exclusive_access_manager()->fullscreen_controller());
}

void DownloadDisplayController::OnFullscreenStateChanged() {
  if (browser_->window()->IsFullscreen())
    return;

  std::vector<std::unique_ptr<DownloadUIModel>> all_models =
      bubble_controller_->GetAllItemsToDisplay();
  UpdateToolbarButtonState(all_models);
  int in_progress_count = InProgressDownloadCount(all_models);
  if (in_progress_count > 0 &&
      download::ShouldShowDetailsAutomatically(browser_->profile())) {
    display_->ShowDetails();
  }
}

void DownloadDisplayController::UpdateToolbarButtonState(
    std::vector<std::unique_ptr<DownloadUIModel>>& all_models) {
  if (all_models.empty()) {
    HideToolbarButton();
    return;
  }
  int in_progress_count = InProgressDownloadCount(all_models);
  bool has_deep_scanning_download = HasDeepScanningDownload(all_models);

  if (in_progress_count > 0) {
    ShowToolbarButton();
    icon_info_.icon_state = DownloadIconState::kProgress;
    icon_info_.is_active = true;
  } else {
    icon_info_.icon_state = DownloadIconState::kComplete;
    if (HasRecentCompleteDownload(
            kToolbarIconActiveTimeInterval,
            GetLastCompleteTime(bubble_controller_->GetOfflineItems()))) {
      icon_info_.is_active = true;
      ScheduleToolbarInactive(kToolbarIconActiveTimeInterval);
    } else if (!browser_->window()->IsFullscreen() &&
               download_completed_while_fullscreen_) {
      icon_info_.is_active = true;
      ScheduleToolbarInactive(kToolbarIconActiveTimeInterval);
      download_completed_while_fullscreen_ = false;
    } else {
      icon_info_.is_active = false;
    }
  }

  if (has_deep_scanning_download) {
    icon_info_.icon_state = DownloadIconState::kDeepScanning;
  }

  display_->UpdateDownloadIcon();
}

void DownloadDisplayController::UpdateDownloadIconToInactive() {
  icon_info_.is_active = false;
  display_->UpdateDownloadIcon();
}

void DownloadDisplayController::ScheduleToolbarDisappearance(
    base::TimeDelta interval) {
  icon_disappearance_timer_.Stop();
  icon_disappearance_timer_.Start(
      FROM_HERE, interval, this, &DownloadDisplayController::HideToolbarButton);
}

void DownloadDisplayController::ScheduleToolbarInactive(
    base::TimeDelta interval) {
  icon_inactive_timer_.Stop();
  icon_inactive_timer_.Start(
      FROM_HERE, interval, this,
      &DownloadDisplayController::UpdateDownloadIconToInactive);
}

base::Time DownloadDisplayController::GetLastCompleteTime(
    const offline_items_collection::OfflineContentAggregator::OfflineItemList&
        offline_items) {
  base::Time last_time = DownloadPrefs::FromDownloadManager(download_manager_)
                             ->GetLastCompleteTime();
  for (const auto& offline_item : offline_items) {
    if (last_time < offline_item.completion_time)
      last_time = offline_item.completion_time;
  }
  return last_time;
}

void DownloadDisplayController::MaybeShowButtonWhenCreated() {
  if (!download::ShouldShowDownloadBubble(browser_->profile())) {
    return;
  }
  base::Time last_complete_time =
      GetLastCompleteTime(bubble_controller_->GetOfflineItems());
  if (!HasRecentCompleteDownload(kToolbarIconVisibilityTimeInterval,
                                 last_complete_time)) {
    return;
  }
  if (bubble_controller_->GetAllItemsToDisplay().empty()) {
    return;
  }
  // If the last download complete time is less than
  // `kToolbarIconVisibilityTimeInterval` ago, show the button
  // immediately.
  ShowToolbarButton();
  icon_info_.icon_state = DownloadIconState::kComplete;
  // The initial state should be inactive, because there is no active
  // download.
  icon_info_.is_active = false;
  display_->UpdateDownloadIcon();
  ScheduleToolbarDisappearance(kToolbarIconVisibilityTimeInterval -
                               (base::Time::Now() - last_complete_time));
}

bool DownloadDisplayController::HasRecentCompleteDownload(
    base::TimeDelta interval,
    base::Time last_complete_time) {
  base::Time current_time = base::Time::Now();
  base::TimeDelta time_since_last_completion =
      current_time - last_complete_time;
  // Also check that the current time is not smaller than the last complete
  // time, this can happen if the system clock has moved backward.
  return time_since_last_completion < interval &&
         current_time >= last_complete_time;
}

DownloadDisplayController::IconInfo DownloadDisplayController::GetIconInfo() {
  return icon_info_;
}

DownloadDisplayController::ProgressInfo
DownloadDisplayController::GetProgress() {
  ProgressInfo progress_info;
  std::vector<std::unique_ptr<DownloadUIModel>> all_models =
      bubble_controller_->GetAllItemsToDisplay();
  int64_t received_bytes = 0;
  int64_t total_bytes = 0;

  for (const auto& model : all_models) {
    if (IsModelInProgress(model.get())) {
      ++progress_info.download_count;
      if (model->GetTotalBytes() <= 0) {
        // There may or may not be more data coming down this pipe.
        progress_info.progress_certain = false;
      } else {
        received_bytes += model->GetCompletedBytes();
        total_bytes += model->GetTotalBytes();
      }
    }
  }

  if (total_bytes > 0) {
    progress_info.progress_percentage =
        base::ClampFloor(received_bytes * 100.0 / total_bytes);
  }
  return progress_info;
}
