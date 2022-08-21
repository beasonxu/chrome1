// services/network/public/mojom/http_cache_backend_file_operations.mojom-blink-forward.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_HTTP_CACHE_BACKEND_FILE_OPERATIONS_MOJOM_BLINK_FORWARD_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_HTTP_CACHE_BACKEND_FILE_OPERATIONS_MOJOM_BLINK_FORWARD_H_

#include <stdint.h>

#include "mojo/public/cpp/bindings/struct_forward.h"

#include "mojo/public/cpp/bindings/deprecated_interface_types_forward.h"


#include "mojo/public/interfaces/bindings/native_struct.mojom-forward.h"




namespace network {
namespace mojom {

enum class HttpCacheBackendOpenFileFlags : int32_t;

enum class HttpCacheBackendDeleteFileMode : int32_t;
class FileEnumeratorInterfaceBase;
class HttpCacheBackendFileOperationsInterfaceBase;
class HttpCacheBackendFileOperationsFactoryInterfaceBase;
}  // namespace network
}  // namespace mojom


namespace network {
namespace mojom {
namespace blink {
// Aliases for definition in the parent namespace.
using HttpCacheBackendOpenFileFlags = HttpCacheBackendOpenFileFlags;
using HttpCacheBackendDeleteFileMode = HttpCacheBackendDeleteFileMode;
using FileEnumeratorInterfaceBase = FileEnumeratorInterfaceBase;
using HttpCacheBackendFileOperationsInterfaceBase = HttpCacheBackendFileOperationsInterfaceBase;
using HttpCacheBackendFileOperationsFactoryInterfaceBase = HttpCacheBackendFileOperationsFactoryInterfaceBase;
class FileEnumerationEntry;
using FileEnumerationEntryPtr = mojo::StructPtr<FileEnumerationEntry>;

class FileEnumerator;

class HttpCacheBackendFileOperations;

class HttpCacheBackendFileOperationsFactory;




}  // namespace blink
}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_HTTP_CACHE_BACKEND_FILE_OPERATIONS_MOJOM_BLINK_FORWARD_H_