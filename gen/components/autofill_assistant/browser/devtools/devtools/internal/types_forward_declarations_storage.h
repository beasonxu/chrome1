// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Copied and modified from
// https://chromium.googlesource.com/chromium/src/+/a3f9d4fac81fc86065d867ab08fa4912ddf662c7/headless/lib/browser/devtools_api/domain_types_forward_declarations_h.template
// Modifications include namespace and path.

#ifndef COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPES_FORWARD_DECLARATIONS_STORAGE_H_
#define COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPES_FORWARD_DECLARATIONS_STORAGE_H_

#include "base/values.h"

namespace autofill_assistant {

namespace storage {
class UsageForType;
class TrustTokens;
class InterestGroupAd;
class InterestGroupDetails;
class GetStorageKeyForFrameParams;
class GetStorageKeyForFrameResult;
class ClearDataForOriginParams;
class ClearDataForOriginResult;
class ClearDataForStorageKeyParams;
class ClearDataForStorageKeyResult;
class GetCookiesParams;
class GetCookiesResult;
class SetCookiesParams;
class SetCookiesResult;
class ClearCookiesParams;
class ClearCookiesResult;
class GetUsageAndQuotaParams;
class GetUsageAndQuotaResult;
class OverrideQuotaForOriginParams;
class OverrideQuotaForOriginResult;
class TrackCacheStorageForOriginParams;
class TrackCacheStorageForOriginResult;
class TrackIndexedDBForOriginParams;
class TrackIndexedDBForOriginResult;
class TrackIndexedDBForStorageKeyParams;
class TrackIndexedDBForStorageKeyResult;
class UntrackCacheStorageForOriginParams;
class UntrackCacheStorageForOriginResult;
class UntrackIndexedDBForOriginParams;
class UntrackIndexedDBForOriginResult;
class UntrackIndexedDBForStorageKeyParams;
class UntrackIndexedDBForStorageKeyResult;
class GetTrustTokensParams;
class GetTrustTokensResult;
class ClearTrustTokensParams;
class ClearTrustTokensResult;
class GetInterestGroupDetailsParams;
class GetInterestGroupDetailsResult;
class SetInterestGroupTrackingParams;
class SetInterestGroupTrackingResult;
class CacheStorageContentUpdatedParams;
class CacheStorageListUpdatedParams;
class IndexedDBContentUpdatedParams;
class IndexedDBListUpdatedParams;
class InterestGroupAccessedParams;

enum class StorageType {
  APPCACHE,
  COOKIES,
  FILE_SYSTEMS,
  INDEXEDDB,
  LOCAL_STORAGE,
  SHADER_CACHE,
  WEBSQL,
  SERVICE_WORKERS,
  CACHE_STORAGE,
  INTEREST_GROUPS,
  ALL,
  OTHER
};

enum class InterestGroupAccessType {
  JOIN,
  LEAVE,
  UPDATE,
  BID,
  WIN
};

}  // namespace storage

}  // namespace autofill_assistant

#endif  // COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPES_FORWARD_DECLARATIONS_STORAGE_H_
