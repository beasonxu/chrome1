// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Copied and modified from
// https://chromium.googlesource.com/chromium/src/+/a3f9d4fac81fc86065d867ab08fa4912ddf662c7/headless/lib/browser/devtools_api/domain_type_conversions_h.template
// Modifications include namespace and path.

#ifndef COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPE_CONVERSIONS_STORAGE_H_
#define COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPE_CONVERSIONS_STORAGE_H_

#include "base/notreached.h"
#include "components/autofill_assistant/browser/devtools/devtools/domains/types_storage.h"
#include "components/autofill_assistant/browser/devtools/value_conversions.h"

namespace autofill_assistant {
namespace internal {


template <>
struct FromValue<storage::StorageType> {
  static storage::StorageType Parse(const base::Value& value, ErrorReporter* errors) {
    if (!value.is_string()) {
      errors->AddError("string enum value expected");
      return storage::StorageType::APPCACHE;
    }
    if (value.GetString() == "appcache")
      return storage::StorageType::APPCACHE;
    if (value.GetString() == "cookies")
      return storage::StorageType::COOKIES;
    if (value.GetString() == "file_systems")
      return storage::StorageType::FILE_SYSTEMS;
    if (value.GetString() == "indexeddb")
      return storage::StorageType::INDEXEDDB;
    if (value.GetString() == "local_storage")
      return storage::StorageType::LOCAL_STORAGE;
    if (value.GetString() == "shader_cache")
      return storage::StorageType::SHADER_CACHE;
    if (value.GetString() == "websql")
      return storage::StorageType::WEBSQL;
    if (value.GetString() == "service_workers")
      return storage::StorageType::SERVICE_WORKERS;
    if (value.GetString() == "cache_storage")
      return storage::StorageType::CACHE_STORAGE;
    if (value.GetString() == "interest_groups")
      return storage::StorageType::INTEREST_GROUPS;
    if (value.GetString() == "all")
      return storage::StorageType::ALL;
    if (value.GetString() == "other")
      return storage::StorageType::OTHER;
    errors->AddError("invalid enum value");
    return storage::StorageType::APPCACHE;
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const storage::StorageType& value, T*) {
  switch (value) {
    case storage::StorageType::APPCACHE:
      return std::make_unique<base::Value>("appcache");
    case storage::StorageType::COOKIES:
      return std::make_unique<base::Value>("cookies");
    case storage::StorageType::FILE_SYSTEMS:
      return std::make_unique<base::Value>("file_systems");
    case storage::StorageType::INDEXEDDB:
      return std::make_unique<base::Value>("indexeddb");
    case storage::StorageType::LOCAL_STORAGE:
      return std::make_unique<base::Value>("local_storage");
    case storage::StorageType::SHADER_CACHE:
      return std::make_unique<base::Value>("shader_cache");
    case storage::StorageType::WEBSQL:
      return std::make_unique<base::Value>("websql");
    case storage::StorageType::SERVICE_WORKERS:
      return std::make_unique<base::Value>("service_workers");
    case storage::StorageType::CACHE_STORAGE:
      return std::make_unique<base::Value>("cache_storage");
    case storage::StorageType::INTEREST_GROUPS:
      return std::make_unique<base::Value>("interest_groups");
    case storage::StorageType::ALL:
      return std::make_unique<base::Value>("all");
    case storage::StorageType::OTHER:
      return std::make_unique<base::Value>("other");
  };
  NOTREACHED();
  return nullptr;
}

template <>
struct FromValue<storage::UsageForType> {
  static std::unique_ptr<storage::UsageForType> Parse(const base::Value& value, ErrorReporter* errors) {
    return storage::UsageForType::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const storage::UsageForType& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<storage::TrustTokens> {
  static std::unique_ptr<storage::TrustTokens> Parse(const base::Value& value, ErrorReporter* errors) {
    return storage::TrustTokens::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const storage::TrustTokens& value, T*) {
  return value.Serialize();
}

template <>
struct FromValue<storage::InterestGroupAccessType> {
  static storage::InterestGroupAccessType Parse(const base::Value& value, ErrorReporter* errors) {
    if (!value.is_string()) {
      errors->AddError("string enum value expected");
      return storage::InterestGroupAccessType::JOIN;
    }
    if (value.GetString() == "join")
      return storage::InterestGroupAccessType::JOIN;
    if (value.GetString() == "leave")
      return storage::InterestGroupAccessType::LEAVE;
    if (value.GetString() == "update")
      return storage::InterestGroupAccessType::UPDATE;
    if (value.GetString() == "bid")
      return storage::InterestGroupAccessType::BID;
    if (value.GetString() == "win")
      return storage::InterestGroupAccessType::WIN;
    errors->AddError("invalid enum value");
    return storage::InterestGroupAccessType::JOIN;
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const storage::InterestGroupAccessType& value, T*) {
  switch (value) {
    case storage::InterestGroupAccessType::JOIN:
      return std::make_unique<base::Value>("join");
    case storage::InterestGroupAccessType::LEAVE:
      return std::make_unique<base::Value>("leave");
    case storage::InterestGroupAccessType::UPDATE:
      return std::make_unique<base::Value>("update");
    case storage::InterestGroupAccessType::BID:
      return std::make_unique<base::Value>("bid");
    case storage::InterestGroupAccessType::WIN:
      return std::make_unique<base::Value>("win");
  };
  NOTREACHED();
  return nullptr;
}

template <>
struct FromValue<storage::InterestGroupAd> {
  static std::unique_ptr<storage::InterestGroupAd> Parse(const base::Value& value, ErrorReporter* errors) {
    return storage::InterestGroupAd::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const storage::InterestGroupAd& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<storage::InterestGroupDetails> {
  static std::unique_ptr<storage::InterestGroupDetails> Parse(const base::Value& value, ErrorReporter* errors) {
    return storage::InterestGroupDetails::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const storage::InterestGroupDetails& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<storage::GetStorageKeyForFrameParams> {
  static std::unique_ptr<storage::GetStorageKeyForFrameParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return storage::GetStorageKeyForFrameParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const storage::GetStorageKeyForFrameParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<storage::GetStorageKeyForFrameResult> {
  static std::unique_ptr<storage::GetStorageKeyForFrameResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return storage::GetStorageKeyForFrameResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const storage::GetStorageKeyForFrameResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<storage::ClearDataForOriginParams> {
  static std::unique_ptr<storage::ClearDataForOriginParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return storage::ClearDataForOriginParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const storage::ClearDataForOriginParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<storage::ClearDataForOriginResult> {
  static std::unique_ptr<storage::ClearDataForOriginResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return storage::ClearDataForOriginResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const storage::ClearDataForOriginResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<storage::ClearDataForStorageKeyParams> {
  static std::unique_ptr<storage::ClearDataForStorageKeyParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return storage::ClearDataForStorageKeyParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const storage::ClearDataForStorageKeyParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<storage::ClearDataForStorageKeyResult> {
  static std::unique_ptr<storage::ClearDataForStorageKeyResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return storage::ClearDataForStorageKeyResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const storage::ClearDataForStorageKeyResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<storage::GetCookiesParams> {
  static std::unique_ptr<storage::GetCookiesParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return storage::GetCookiesParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const storage::GetCookiesParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<storage::GetCookiesResult> {
  static std::unique_ptr<storage::GetCookiesResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return storage::GetCookiesResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const storage::GetCookiesResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<storage::SetCookiesParams> {
  static std::unique_ptr<storage::SetCookiesParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return storage::SetCookiesParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const storage::SetCookiesParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<storage::SetCookiesResult> {
  static std::unique_ptr<storage::SetCookiesResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return storage::SetCookiesResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const storage::SetCookiesResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<storage::ClearCookiesParams> {
  static std::unique_ptr<storage::ClearCookiesParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return storage::ClearCookiesParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const storage::ClearCookiesParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<storage::ClearCookiesResult> {
  static std::unique_ptr<storage::ClearCookiesResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return storage::ClearCookiesResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const storage::ClearCookiesResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<storage::GetUsageAndQuotaParams> {
  static std::unique_ptr<storage::GetUsageAndQuotaParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return storage::GetUsageAndQuotaParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const storage::GetUsageAndQuotaParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<storage::GetUsageAndQuotaResult> {
  static std::unique_ptr<storage::GetUsageAndQuotaResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return storage::GetUsageAndQuotaResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const storage::GetUsageAndQuotaResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<storage::OverrideQuotaForOriginParams> {
  static std::unique_ptr<storage::OverrideQuotaForOriginParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return storage::OverrideQuotaForOriginParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const storage::OverrideQuotaForOriginParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<storage::OverrideQuotaForOriginResult> {
  static std::unique_ptr<storage::OverrideQuotaForOriginResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return storage::OverrideQuotaForOriginResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const storage::OverrideQuotaForOriginResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<storage::TrackCacheStorageForOriginParams> {
  static std::unique_ptr<storage::TrackCacheStorageForOriginParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return storage::TrackCacheStorageForOriginParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const storage::TrackCacheStorageForOriginParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<storage::TrackCacheStorageForOriginResult> {
  static std::unique_ptr<storage::TrackCacheStorageForOriginResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return storage::TrackCacheStorageForOriginResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const storage::TrackCacheStorageForOriginResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<storage::TrackIndexedDBForOriginParams> {
  static std::unique_ptr<storage::TrackIndexedDBForOriginParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return storage::TrackIndexedDBForOriginParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const storage::TrackIndexedDBForOriginParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<storage::TrackIndexedDBForOriginResult> {
  static std::unique_ptr<storage::TrackIndexedDBForOriginResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return storage::TrackIndexedDBForOriginResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const storage::TrackIndexedDBForOriginResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<storage::TrackIndexedDBForStorageKeyParams> {
  static std::unique_ptr<storage::TrackIndexedDBForStorageKeyParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return storage::TrackIndexedDBForStorageKeyParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const storage::TrackIndexedDBForStorageKeyParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<storage::TrackIndexedDBForStorageKeyResult> {
  static std::unique_ptr<storage::TrackIndexedDBForStorageKeyResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return storage::TrackIndexedDBForStorageKeyResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const storage::TrackIndexedDBForStorageKeyResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<storage::UntrackCacheStorageForOriginParams> {
  static std::unique_ptr<storage::UntrackCacheStorageForOriginParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return storage::UntrackCacheStorageForOriginParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const storage::UntrackCacheStorageForOriginParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<storage::UntrackCacheStorageForOriginResult> {
  static std::unique_ptr<storage::UntrackCacheStorageForOriginResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return storage::UntrackCacheStorageForOriginResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const storage::UntrackCacheStorageForOriginResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<storage::UntrackIndexedDBForOriginParams> {
  static std::unique_ptr<storage::UntrackIndexedDBForOriginParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return storage::UntrackIndexedDBForOriginParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const storage::UntrackIndexedDBForOriginParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<storage::UntrackIndexedDBForOriginResult> {
  static std::unique_ptr<storage::UntrackIndexedDBForOriginResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return storage::UntrackIndexedDBForOriginResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const storage::UntrackIndexedDBForOriginResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<storage::UntrackIndexedDBForStorageKeyParams> {
  static std::unique_ptr<storage::UntrackIndexedDBForStorageKeyParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return storage::UntrackIndexedDBForStorageKeyParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const storage::UntrackIndexedDBForStorageKeyParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<storage::UntrackIndexedDBForStorageKeyResult> {
  static std::unique_ptr<storage::UntrackIndexedDBForStorageKeyResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return storage::UntrackIndexedDBForStorageKeyResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const storage::UntrackIndexedDBForStorageKeyResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<storage::GetTrustTokensParams> {
  static std::unique_ptr<storage::GetTrustTokensParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return storage::GetTrustTokensParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const storage::GetTrustTokensParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<storage::GetTrustTokensResult> {
  static std::unique_ptr<storage::GetTrustTokensResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return storage::GetTrustTokensResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const storage::GetTrustTokensResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<storage::ClearTrustTokensParams> {
  static std::unique_ptr<storage::ClearTrustTokensParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return storage::ClearTrustTokensParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const storage::ClearTrustTokensParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<storage::ClearTrustTokensResult> {
  static std::unique_ptr<storage::ClearTrustTokensResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return storage::ClearTrustTokensResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const storage::ClearTrustTokensResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<storage::GetInterestGroupDetailsParams> {
  static std::unique_ptr<storage::GetInterestGroupDetailsParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return storage::GetInterestGroupDetailsParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const storage::GetInterestGroupDetailsParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<storage::GetInterestGroupDetailsResult> {
  static std::unique_ptr<storage::GetInterestGroupDetailsResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return storage::GetInterestGroupDetailsResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const storage::GetInterestGroupDetailsResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<storage::SetInterestGroupTrackingParams> {
  static std::unique_ptr<storage::SetInterestGroupTrackingParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return storage::SetInterestGroupTrackingParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const storage::SetInterestGroupTrackingParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<storage::SetInterestGroupTrackingResult> {
  static std::unique_ptr<storage::SetInterestGroupTrackingResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return storage::SetInterestGroupTrackingResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const storage::SetInterestGroupTrackingResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<storage::CacheStorageContentUpdatedParams> {
  static std::unique_ptr<storage::CacheStorageContentUpdatedParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return storage::CacheStorageContentUpdatedParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const storage::CacheStorageContentUpdatedParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<storage::CacheStorageListUpdatedParams> {
  static std::unique_ptr<storage::CacheStorageListUpdatedParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return storage::CacheStorageListUpdatedParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const storage::CacheStorageListUpdatedParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<storage::IndexedDBContentUpdatedParams> {
  static std::unique_ptr<storage::IndexedDBContentUpdatedParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return storage::IndexedDBContentUpdatedParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const storage::IndexedDBContentUpdatedParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<storage::IndexedDBListUpdatedParams> {
  static std::unique_ptr<storage::IndexedDBListUpdatedParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return storage::IndexedDBListUpdatedParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const storage::IndexedDBListUpdatedParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<storage::InterestGroupAccessedParams> {
  static std::unique_ptr<storage::InterestGroupAccessedParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return storage::InterestGroupAccessedParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const storage::InterestGroupAccessedParams& value, T*) {
  return value.Serialize();
}


}  // namespace internal
}  // namespace autofill_assistant

#endif  // COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPE_CONVERSIONS_STORAGE_H_
