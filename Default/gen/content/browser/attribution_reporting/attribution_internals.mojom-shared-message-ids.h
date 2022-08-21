// content/browser/attribution_reporting/attribution_internals.mojom-shared-message-ids.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_BROWSER_ATTRIBUTION_REPORTING_ATTRIBUTION_INTERNALS_MOJOM_SHARED_MESSAGE_IDS_H_
#define CONTENT_BROWSER_ATTRIBUTION_REPORTING_ATTRIBUTION_INTERNALS_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace attribution_internals {
namespace mojom {

namespace internal {


constexpr uint32_t kObserver_OnSourcesChanged_Name = 0;
constexpr uint32_t kObserver_OnReportsChanged_Name = 1;
constexpr uint32_t kObserver_OnSourceRejectedOrDeactivated_Name = 2;
constexpr uint32_t kObserver_OnReportSent_Name = 3;
constexpr uint32_t kObserver_OnReportDropped_Name = 4;
constexpr uint32_t kObserver_OnTriggerHandled_Name = 5;
constexpr uint32_t kHandler_IsAttributionReportingEnabled_Name = 0;
constexpr uint32_t kHandler_GetActiveSources_Name = 1;
constexpr uint32_t kHandler_GetReports_Name = 2;
constexpr uint32_t kHandler_SendReports_Name = 3;
constexpr uint32_t kHandler_ClearStorage_Name = 4;
constexpr uint32_t kHandler_AddObserver_Name = 5;

}  // namespace internal
}  // namespace mojom
}  // namespace attribution_internals

#endif  // CONTENT_BROWSER_ATTRIBUTION_REPORTING_ATTRIBUTION_INTERNALS_MOJOM_SHARED_MESSAGE_IDS_H_