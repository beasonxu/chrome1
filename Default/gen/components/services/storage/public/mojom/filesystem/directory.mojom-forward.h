// components/services/storage/public/mojom/filesystem/directory.mojom-forward.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_SERVICES_STORAGE_PUBLIC_MOJOM_FILESYSTEM_DIRECTORY_MOJOM_FORWARD_H_
#define COMPONENTS_SERVICES_STORAGE_PUBLIC_MOJOM_FILESYSTEM_DIRECTORY_MOJOM_FORWARD_H_

#include <stdint.h>

#include "mojo/public/cpp/bindings/struct_forward.h"

#include "mojo/public/cpp/bindings/deprecated_interface_types_forward.h"


#include "mojo/public/interfaces/bindings/native_struct.mojom-forward.h"






namespace storage {
namespace mojom {
class StrictRelativePathDataView;

class PathAccessInfoDataView;


enum class GetEntriesMode : int32_t;

enum class FileOpenMode : int32_t;

enum class FileReadAccess : int32_t;

enum class FileWriteAccess : int32_t;
class StrictRelativePath;
using StrictRelativePathPtr = mojo::StructPtr<StrictRelativePath>;

class PathAccessInfo;
using PathAccessInfoPtr = mojo::InlinedStructPtr<PathAccessInfo>;

class FileLock;

class Directory;




}  // namespace mojom
}  // namespace storage

#endif  // COMPONENTS_SERVICES_STORAGE_PUBLIC_MOJOM_FILESYSTEM_DIRECTORY_MOJOM_FORWARD_H_