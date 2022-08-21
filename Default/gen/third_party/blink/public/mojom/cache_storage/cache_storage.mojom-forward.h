// third_party/blink/public/mojom/cache_storage/cache_storage.mojom-forward.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_CACHE_STORAGE_CACHE_STORAGE_MOJOM_FORWARD_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_CACHE_STORAGE_CACHE_STORAGE_MOJOM_FORWARD_H_

#include <stdint.h>

#include "mojo/public/cpp/bindings/struct_forward.h"

#include "mojo/public/cpp/bindings/deprecated_interface_types_forward.h"


#include "mojo/public/interfaces/bindings/native_struct.mojom-forward.h"



namespace mojo {
enum class NativeEnum;
}  // namespace mojo


namespace blink {
namespace mojom {
class CacheStorageVerboseErrorDataView;

class CacheQueryOptionsDataView;

class MultiCacheQueryOptionsDataView;

class BatchOperationDataView;

class EagerResponseDataView;

class CacheEntryDataView;

class OpenResultDataView;
class MatchResultDataView;
class MatchAllResultDataView;
class GetAllMatchedEntriesResultDataView;
class CacheKeysResultDataView;

enum class CacheStorageError : int32_t;

enum class OperationType : int32_t;
class CacheStorageVerboseError;
using CacheStorageVerboseErrorPtr = mojo::InlinedStructPtr<CacheStorageVerboseError>;

class CacheQueryOptions;
using CacheQueryOptionsPtr = mojo::InlinedStructPtr<CacheQueryOptions>;

class MultiCacheQueryOptions;
using MultiCacheQueryOptionsPtr = mojo::StructPtr<MultiCacheQueryOptions>;

class BatchOperation;
using BatchOperationPtr = mojo::StructPtr<BatchOperation>;

class EagerResponse;
using EagerResponsePtr = mojo::StructPtr<EagerResponse>;

class CacheEntry;
using CacheEntryPtr = mojo::StructPtr<CacheEntry>;

class OpenResult;

using OpenResultPtr = mojo::StructPtr<OpenResult>;

class MatchResult;

using MatchResultPtr = mojo::StructPtr<MatchResult>;

class MatchAllResult;

using MatchAllResultPtr = mojo::StructPtr<MatchAllResult>;

class GetAllMatchedEntriesResult;

using GetAllMatchedEntriesResultPtr = mojo::StructPtr<GetAllMatchedEntriesResult>;

class CacheKeysResult;

using CacheKeysResultPtr = mojo::StructPtr<CacheKeysResult>;

class CacheStorageCache;

class CacheStorage;




}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_CACHE_STORAGE_CACHE_STORAGE_MOJOM_FORWARD_H_