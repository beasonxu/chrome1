// Copyright 2022 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "chrome/browser/download/bubble/download_bubble_prefs.h"

#include "base/feature_list.h"
#include "build/chromeos_buildflags.h"
#include "chrome/browser/download/download_core_service.h"
#include "chrome/browser/download/download_core_service_factory.h"
#include "chrome/browser/enterprise/connectors/connectors_service.h"
#include "chrome/common/pref_names.h"
#include "components/prefs/pref_service.h"
#include "components/safe_browsing/core/common/features.h"

namespace download {

bool IsDownloadBubbleEnabled(Profile* profile) {
// Download bubble won't replace the old download notification in
// Ash. See https://crbug.com/1323505.
#if BUILDFLAG(IS_CHROMEOS_ASH)
  return false;
#else
  if (!base::FeatureList::IsEnabled(safe_browsing::kDownloadBubble)) {
    return false;
  }

  PrefService* prefs = profile->GetPrefs();

  // If the download bubble policy is managed by enterprise admins and it is
  // set to false, disable download bubble.
  if (prefs->IsManagedPreference(prefs::kDownloadBubbleEnabled) &&
      !prefs->GetBoolean(prefs::kDownloadBubbleEnabled)) {
    return false;
  }

  return true;
#endif  // BUILDFLAG(IS_CHROMEOS_ASH)
}

bool IsDownloadBubbleV2Enabled(Profile* profile) {
  return IsDownloadBubbleEnabled(profile) &&
         base::FeatureList::IsEnabled(safe_browsing::kDownloadBubbleV2);
}

bool ShouldShowDownloadBubble(Profile* profile) {
  // If the download UI is disabled by at least one extension, do not show the
  // bubble and the toolbar icon.
  return DownloadCoreServiceFactory::GetForBrowserContext(
             profile->GetOriginalProfile())
      ->IsDownloadUiEnabled();
}

bool ShouldShowDetailsAutomatically(Profile* profile) {
  // Do not show details automatically if this download is observed by at least
  // one extension. This is to avoid conflicts between the download bubble and
  // the extension bubble.
  return !DownloadCoreServiceFactory::GetForBrowserContext(
              profile->GetOriginalProfile())
              ->IsDownloadObservedByExtension();
}

bool IsDownloadConnectorEnabled(Profile* profile) {
  auto* connector_service =
      enterprise_connectors::ConnectorsServiceFactory::GetForBrowserContext(
          profile);
  return connector_service &&
         connector_service->IsConnectorEnabled(
             enterprise_connectors::AnalysisConnector::FILE_DOWNLOADED);
}

}  // namespace download
