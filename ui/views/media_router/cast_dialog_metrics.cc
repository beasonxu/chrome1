// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "chrome/browser/ui/views/media_router/cast_dialog_metrics.h"

#include "base/metrics/histogram_macros.h"
#include "chrome/browser/profiles/profile.h"
#include "chrome/browser/ui/media_router/ui_media_sink.h"
#include "chrome/common/pref_names.h"
#include "components/media_router/common/mojom/media_route_provider_id.mojom-shared.h"
#include "components/media_router/common/pref_names.h"
#include "components/prefs/pref_service.h"

namespace media_router {

using mojom::MediaRouteProviderId;

namespace {

DialogActivationLocationAndCastMode GetActivationLocationAndCastMode(
    MediaRouterDialogActivationLocation activation_location,
    MediaCastMode cast_mode,
    bool is_icon_pinned) {
  switch (activation_location) {
    case MediaRouterDialogActivationLocation::TOOLBAR:
      if (is_icon_pinned) {
        switch (cast_mode) {
          case MediaCastMode::PRESENTATION:
            return DialogActivationLocationAndCastMode::
                kPinnedIconAndPresentation;
          case MediaCastMode::TAB_MIRROR:
            return DialogActivationLocationAndCastMode::kPinnedIconAndTabMirror;
          case MediaCastMode::DESKTOP_MIRROR:
            return DialogActivationLocationAndCastMode::
                kPinnedIconAndDesktopMirror;
        }
      } else {
        switch (cast_mode) {
          case MediaCastMode::PRESENTATION:
            return DialogActivationLocationAndCastMode::
                kEphemeralIconAndPresentation;
          case MediaCastMode::TAB_MIRROR:
            return DialogActivationLocationAndCastMode::
                kEphemeralIconAndTabMirror;
          case MediaCastMode::DESKTOP_MIRROR:
            return DialogActivationLocationAndCastMode::
                kEphemeralIconAndDesktopMirror;
        }
      }
      break;
    case MediaRouterDialogActivationLocation::CONTEXTUAL_MENU:
      switch (cast_mode) {
        case MediaCastMode::PRESENTATION:
          return DialogActivationLocationAndCastMode::
              kContextMenuAndPresentation;
        case MediaCastMode::TAB_MIRROR:
          return DialogActivationLocationAndCastMode::kContextMenuAndTabMirror;
        case MediaCastMode::DESKTOP_MIRROR:
          return DialogActivationLocationAndCastMode::
              kContextMenuAndDesktopMirror;
      }
      break;
    case MediaRouterDialogActivationLocation::PAGE:
      switch (cast_mode) {
        case MediaCastMode::PRESENTATION:
          return DialogActivationLocationAndCastMode::kPageAndPresentation;
        case MediaCastMode::TAB_MIRROR:
          return DialogActivationLocationAndCastMode::kPageAndTabMirror;
        case MediaCastMode::DESKTOP_MIRROR:
          return DialogActivationLocationAndCastMode::kPageAndDesktopMirror;
      }
      break;
    case MediaRouterDialogActivationLocation::APP_MENU:
      switch (cast_mode) {
        case MediaCastMode::PRESENTATION:
          return DialogActivationLocationAndCastMode::kAppMenuAndPresentation;
        case MediaCastMode::TAB_MIRROR:
          return DialogActivationLocationAndCastMode::kAppMenuAndTabMirror;
        case MediaCastMode::DESKTOP_MIRROR:
          return DialogActivationLocationAndCastMode::kAppMenuAndDesktopMirror;
      }
      break;
    case MediaRouterDialogActivationLocation::SHARING_HUB:
      switch (cast_mode) {
        case MediaCastMode::PRESENTATION:
          return DialogActivationLocationAndCastMode::
              kSharingHubAndPresentation;
        case MediaCastMode::TAB_MIRROR:
          return DialogActivationLocationAndCastMode::kSharingHubAndTabMirror;
        case MediaCastMode::DESKTOP_MIRROR:
          return DialogActivationLocationAndCastMode::
              kSharingHubAndDesktopMirror;
      }
      break;
    // |OVERFLOW_MENU| refers to extension icons hidden in the app menu. That
    // mode is no longer available for the Cast toolbar icon.
    case MediaRouterDialogActivationLocation::OVERFLOW_MENU:
    case MediaRouterDialogActivationLocation::SYSTEM_TRAY:
    case MediaRouterDialogActivationLocation::TOTAL_COUNT:
      break;
  }
  NOTREACHED();
  return DialogActivationLocationAndCastMode::kMaxValue;
}

}  // namespace

CastDialogMetrics::CastDialogMetrics(
    const base::Time& initialization_time,
    MediaRouterDialogActivationLocation activation_location,
    Profile* profile)
    : initialization_time_(initialization_time),
      activation_location_(activation_location),
      is_icon_pinned_(
          profile->GetPrefs()->GetBoolean(::prefs::kShowCastIconInToolbar)) {
  MediaRouterMetrics::RecordIconStateAtDialogOpen(is_icon_pinned_);
}

CastDialogMetrics::~CastDialogMetrics() = default;

void CastDialogMetrics::OnSinksLoaded(const base::Time& sinks_load_time) {
  if (!sinks_load_time_.is_null())
    return;
  MediaRouterMetrics::RecordMediaRouterDialogLoaded(sinks_load_time -
                                                    initialization_time_);
  sinks_load_time_ = sinks_load_time;
}

void CastDialogMetrics::OnPaint(const base::Time& paint_time) {
  if (!paint_time_.is_null())
    return;
  MediaRouterMetrics::RecordMediaRouterDialogPaint(paint_time -
                                                   initialization_time_);
  paint_time_ = paint_time;
}

void CastDialogMetrics::OnStartCasting(const base::Time& start_time,
                                       int selected_sink_index,
                                       MediaCastMode cast_mode,
                                       SinkIconType icon_type,
                                       bool has_cast_and_dial) {
  DCHECK(!sinks_load_time_.is_null());
  MediaRouterMetrics::RecordStartRouteDeviceIndex(selected_sink_index);
  if (!first_action_recorded_) {
    MediaRouterMetrics::RecordStartLocalSessionLatency(start_time -
                                                       sinks_load_time_);
  }
  MaybeRecordFirstAction(MediaRouterUserAction::START_LOCAL);
  MaybeRecordActivationLocationAndCastMode(cast_mode);
  MediaRouterMetrics::RecordMediaSinkTypeForCastDialog(icon_type);
  if (has_cast_and_dial) {
    MediaRouterMetrics::RecordMediaSinkTypeWhenCastAndDialPresent(
        icon_type, UiType::kCastDialog);
  }
}

void CastDialogMetrics::OnStopCasting(bool is_local_route) {
  if (is_local_route) {
    MediaRouterMetrics::RecordStopLocalRoute();
    MaybeRecordFirstAction(MediaRouterUserAction::STOP_LOCAL);
  } else {
    MediaRouterMetrics::RecordStopRemoteRoute();
    MaybeRecordFirstAction(MediaRouterUserAction::STOP_REMOTE);
  }
}

void CastDialogMetrics::OnCastModeSelected() {
  MaybeRecordFirstAction(MediaRouterUserAction::CHANGE_MODE);
}

void CastDialogMetrics::OnCloseDialog(const base::Time& close_time) {
  if (!first_action_recorded_ && !paint_time_.is_null())
    MediaRouterMetrics::RecordCloseDialogLatency(close_time - paint_time_);
  MaybeRecordFirstAction(MediaRouterUserAction::CLOSE);
}

void CastDialogMetrics::OnRecordSinkCount(
    const std::vector<CastDialogSinkButton*>& sink_buttons) {
  media_router::MediaRouterMetrics::RecordDeviceCount(sink_buttons.size());

  std::map<MediaRouteProviderId, std::map<bool, int>> counts = {
      {MediaRouteProviderId::CAST, {{true, 0}, {false, 0}}},
      {MediaRouteProviderId::DIAL, {{true, 0}, {false, 0}}},
      {MediaRouteProviderId::WIRED_DISPLAY, {{true, 0}, {false, 0}}}};
  for (const CastDialogSinkButton* sink_button : sink_buttons) {
    if (sink_button->sink().provider != MediaRouteProviderId::TEST) {
      counts.at(sink_button->sink().provider).at(sink_button->GetEnabled())++;
    }
  }
  for (auto provider : {MediaRouteProviderId::CAST, MediaRouteProviderId::DIAL,
                        MediaRouteProviderId::WIRED_DISPLAY}) {
    for (bool is_available : {true, false}) {
      int count = counts.at(provider).at(is_available);
      media_router::MediaRouterMetrics::RecordCastDialogDeviceCount(
          activation_location_, provider, is_available, count);
    }
  }
}

void CastDialogMetrics::MaybeRecordFirstAction(MediaRouterUserAction action) {
  if (first_action_recorded_)
    return;
  MediaRouterMetrics::RecordMediaRouterInitialUserAction(action);
  first_action_recorded_ = true;
}

void CastDialogMetrics::MaybeRecordActivationLocationAndCastMode(
    MediaCastMode cast_mode) {
  if (activation_location_and_cast_mode_recorded_)
    return;
  UMA_HISTOGRAM_ENUMERATION(
      "MediaRouter.Ui.Dialog.ActivationLocationAndCastMode",
      GetActivationLocationAndCastMode(activation_location_, cast_mode,
                                       is_icon_pinned_));
  activation_location_and_cast_mode_recorded_ = true;
}

}  // namespace media_router
