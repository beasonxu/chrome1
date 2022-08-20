// components/services/storage/public/mojom/filesystem/directory.mojom-shared.cc is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "components/services/storage/public/mojom/filesystem/directory.mojom-shared.h"

// Used to support stream output operator for enums.
// TODO(dcheng): Consider omitting this somehow if not needed.
#include <ostream>
#include <utility>

#include "base/strings/stringprintf.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"
#include "third_party/perfetto/include/perfetto/tracing/traced_value.h"

#include "components/services/storage/public/mojom/filesystem/directory.mojom-params-data.h"
namespace storage {
namespace mojom {

static NOINLINE const char* GetEntriesModeToStringHelper(GetEntriesMode value) {
  // Defined in a helper function to ensure that Clang generates a lookup table.
  switch(value) {
    case GetEntriesMode::kFilesOnly:
      return "kFilesOnly";
    case GetEntriesMode::kFilesAndDirectories:
      return "kFilesAndDirectories";
    default:
      return nullptr;
  }
}

std::string GetEntriesModeToString(GetEntriesMode value) {
  const char *str = GetEntriesModeToStringHelper(value);
  if (!str) {
    return base::StringPrintf("Unknown GetEntriesMode value: %i", static_cast<int32_t>(value));
  }
  return str;
}

std::ostream& operator<<(std::ostream& os, GetEntriesMode value) {
  return os << GetEntriesModeToString(value);
}

static NOINLINE const char* FileOpenModeToStringHelper(FileOpenMode value) {
  // Defined in a helper function to ensure that Clang generates a lookup table.
  switch(value) {
    case FileOpenMode::kOpenIfExists:
      return "kOpenIfExists";
    case FileOpenMode::kCreateAndOpenOnlyIfNotExists:
      return "kCreateAndOpenOnlyIfNotExists";
    case FileOpenMode::kAlwaysOpen:
      return "kAlwaysOpen";
    case FileOpenMode::kAlwaysCreate:
      return "kAlwaysCreate";
    case FileOpenMode::kOpenIfExistsAndTruncate:
      return "kOpenIfExistsAndTruncate";
    default:
      return nullptr;
  }
}

std::string FileOpenModeToString(FileOpenMode value) {
  const char *str = FileOpenModeToStringHelper(value);
  if (!str) {
    return base::StringPrintf("Unknown FileOpenMode value: %i", static_cast<int32_t>(value));
  }
  return str;
}

std::ostream& operator<<(std::ostream& os, FileOpenMode value) {
  return os << FileOpenModeToString(value);
}

static NOINLINE const char* FileReadAccessToStringHelper(FileReadAccess value) {
  // Defined in a helper function to ensure that Clang generates a lookup table.
  switch(value) {
    case FileReadAccess::kReadNotAllowed:
      return "kReadNotAllowed";
    case FileReadAccess::kReadAllowed:
      return "kReadAllowed";
    default:
      return nullptr;
  }
}

std::string FileReadAccessToString(FileReadAccess value) {
  const char *str = FileReadAccessToStringHelper(value);
  if (!str) {
    return base::StringPrintf("Unknown FileReadAccess value: %i", static_cast<int32_t>(value));
  }
  return str;
}

std::ostream& operator<<(std::ostream& os, FileReadAccess value) {
  return os << FileReadAccessToString(value);
}

static NOINLINE const char* FileWriteAccessToStringHelper(FileWriteAccess value) {
  // Defined in a helper function to ensure that Clang generates a lookup table.
  switch(value) {
    case FileWriteAccess::kWriteNotAllowed:
      return "kWriteNotAllowed";
    case FileWriteAccess::kWriteAllowed:
      return "kWriteAllowed";
    case FileWriteAccess::kAppendOnly:
      return "kAppendOnly";
    default:
      return nullptr;
  }
}

std::string FileWriteAccessToString(FileWriteAccess value) {
  const char *str = FileWriteAccessToStringHelper(value);
  if (!str) {
    return base::StringPrintf("Unknown FileWriteAccess value: %i", static_cast<int32_t>(value));
  }
  return str;
}

std::ostream& operator<<(std::ostream& os, FileWriteAccess value) {
  return os << FileWriteAccessToString(value);
}

namespace internal {


// static
bool StrictRelativePath_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;
  if (!ValidateUnversionedStructHeaderAndSizeAndClaimMemory(
          data, 16, validation_context)) {
    return false;
  }

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  [[maybe_unused]] const StrictRelativePath_Data* object =
      static_cast<const StrictRelativePath_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->path, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->path, validation_context))
    return false;

  return true;
}

StrictRelativePath_Data::StrictRelativePath_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PathAccessInfo_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;
  if (!ValidateUnversionedStructHeaderAndSizeAndClaimMemory(
          data, 16, validation_context)) {
    return false;
  }

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  [[maybe_unused]] const PathAccessInfo_Data* object =
      static_cast<const PathAccessInfo_Data*>(data);

  return true;
}

PathAccessInfo_Data::PathAccessInfo_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool FileLock_Release_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;
  if (!ValidateUnversionedStructHeaderAndSizeAndClaimMemory(
          data, 8, validation_context)) {
    return false;
  }

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  [[maybe_unused]] const FileLock_Release_Params_Data* object =
      static_cast<const FileLock_Release_Params_Data*>(data);

  return true;
}

FileLock_Release_Params_Data::FileLock_Release_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool FileLock_Release_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;
  if (!ValidateUnversionedStructHeaderAndSizeAndClaimMemory(
          data, 16, validation_context)) {
    return false;
  }

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  [[maybe_unused]] const FileLock_Release_ResponseParams_Data* object =
      static_cast<const FileLock_Release_ResponseParams_Data*>(data);


  if (!::mojo_base::mojom::internal::FileError_Data
        ::Validate(object->error, validation_context))
    return false;

  return true;
}

FileLock_Release_ResponseParams_Data::FileLock_Release_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool Directory_Clone_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;
  if (!ValidateUnversionedStructHeaderAndSizeAndClaimMemory(
          data, 16, validation_context)) {
    return false;
  }

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  [[maybe_unused]] const Directory_Clone_Params_Data* object =
      static_cast<const Directory_Clone_Params_Data*>(data);

  if (!mojo::internal::ValidateHandleOrInterfaceNonNullable(
          object->receiver, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateHandleOrInterface(object->receiver,
                                                 validation_context)) {
    return false;
  }

  return true;
}

Directory_Clone_Params_Data::Directory_Clone_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool Directory_PathExists_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;
  if (!ValidateUnversionedStructHeaderAndSizeAndClaimMemory(
          data, 16, validation_context)) {
    return false;
  }

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  [[maybe_unused]] const Directory_PathExists_Params_Data* object =
      static_cast<const Directory_PathExists_Params_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->path, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->path, validation_context))
    return false;

  return true;
}

Directory_PathExists_Params_Data::Directory_PathExists_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool Directory_PathExists_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;
  if (!ValidateUnversionedStructHeaderAndSizeAndClaimMemory(
          data, 16, validation_context)) {
    return false;
  }

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  [[maybe_unused]] const Directory_PathExists_ResponseParams_Data* object =
      static_cast<const Directory_PathExists_ResponseParams_Data*>(data);

  return true;
}

Directory_PathExists_ResponseParams_Data::Directory_PathExists_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool Directory_GetEntries_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;
  if (!ValidateUnversionedStructHeaderAndSizeAndClaimMemory(
          data, 24, validation_context)) {
    return false;
  }

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  [[maybe_unused]] const Directory_GetEntries_Params_Data* object =
      static_cast<const Directory_GetEntries_Params_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->path, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->path, validation_context))
    return false;


  if (!::storage::mojom::internal::GetEntriesMode_Data
        ::Validate(object->mode, validation_context))
    return false;

  return true;
}

Directory_GetEntries_Params_Data::Directory_GetEntries_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool Directory_GetEntries_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;
  if (!ValidateUnversionedStructHeaderAndSizeAndClaimMemory(
          data, 24, validation_context)) {
    return false;
  }

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  [[maybe_unused]] const Directory_GetEntries_ResponseParams_Data* object =
      static_cast<const Directory_GetEntries_ResponseParams_Data*>(data);


  if (!::mojo_base::mojom::internal::FileError_Data
        ::Validate(object->error, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->entries, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams entries_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->entries, validation_context,
                                         &entries_validate_params)) {
    return false;
  }

  return true;
}

Directory_GetEntries_ResponseParams_Data::Directory_GetEntries_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool Directory_OpenFile_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;
  if (!ValidateUnversionedStructHeaderAndSizeAndClaimMemory(
          data, 32, validation_context)) {
    return false;
  }

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  [[maybe_unused]] const Directory_OpenFile_Params_Data* object =
      static_cast<const Directory_OpenFile_Params_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->path, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->path, validation_context))
    return false;


  if (!::storage::mojom::internal::FileOpenMode_Data
        ::Validate(object->mode, validation_context))
    return false;


  if (!::storage::mojom::internal::FileReadAccess_Data
        ::Validate(object->read_access, validation_context))
    return false;


  if (!::storage::mojom::internal::FileWriteAccess_Data
        ::Validate(object->write_access, validation_context))
    return false;

  return true;
}

Directory_OpenFile_Params_Data::Directory_OpenFile_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool Directory_OpenFile_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;
  if (!ValidateUnversionedStructHeaderAndSizeAndClaimMemory(
          data, 24, validation_context)) {
    return false;
  }

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  [[maybe_unused]] const Directory_OpenFile_ResponseParams_Data* object =
      static_cast<const Directory_OpenFile_ResponseParams_Data*>(data);


  if (!::mojo_base::mojom::internal::FileError_Data
        ::Validate(object->error, validation_context))
    return false;

  if (!mojo::internal::ValidateStruct(object->file, validation_context))
    return false;

  return true;
}

Directory_OpenFile_ResponseParams_Data::Directory_OpenFile_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool Directory_WriteFileAtomically_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;
  if (!ValidateUnversionedStructHeaderAndSizeAndClaimMemory(
          data, 24, validation_context)) {
    return false;
  }

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  [[maybe_unused]] const Directory_WriteFileAtomically_Params_Data* object =
      static_cast<const Directory_WriteFileAtomically_Params_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->path, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->path, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->contents, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->contents, validation_context))
    return false;

  return true;
}

Directory_WriteFileAtomically_Params_Data::Directory_WriteFileAtomically_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool Directory_WriteFileAtomically_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;
  if (!ValidateUnversionedStructHeaderAndSizeAndClaimMemory(
          data, 16, validation_context)) {
    return false;
  }

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  [[maybe_unused]] const Directory_WriteFileAtomically_ResponseParams_Data* object =
      static_cast<const Directory_WriteFileAtomically_ResponseParams_Data*>(data);

  return true;
}

Directory_WriteFileAtomically_ResponseParams_Data::Directory_WriteFileAtomically_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool Directory_CreateDirectory_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;
  if (!ValidateUnversionedStructHeaderAndSizeAndClaimMemory(
          data, 16, validation_context)) {
    return false;
  }

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  [[maybe_unused]] const Directory_CreateDirectory_Params_Data* object =
      static_cast<const Directory_CreateDirectory_Params_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->path, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->path, validation_context))
    return false;

  return true;
}

Directory_CreateDirectory_Params_Data::Directory_CreateDirectory_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool Directory_CreateDirectory_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;
  if (!ValidateUnversionedStructHeaderAndSizeAndClaimMemory(
          data, 16, validation_context)) {
    return false;
  }

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  [[maybe_unused]] const Directory_CreateDirectory_ResponseParams_Data* object =
      static_cast<const Directory_CreateDirectory_ResponseParams_Data*>(data);


  if (!::mojo_base::mojom::internal::FileError_Data
        ::Validate(object->error, validation_context))
    return false;

  return true;
}

Directory_CreateDirectory_ResponseParams_Data::Directory_CreateDirectory_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool Directory_DeleteFile_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;
  if (!ValidateUnversionedStructHeaderAndSizeAndClaimMemory(
          data, 16, validation_context)) {
    return false;
  }

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  [[maybe_unused]] const Directory_DeleteFile_Params_Data* object =
      static_cast<const Directory_DeleteFile_Params_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->path, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->path, validation_context))
    return false;

  return true;
}

Directory_DeleteFile_Params_Data::Directory_DeleteFile_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool Directory_DeleteFile_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;
  if (!ValidateUnversionedStructHeaderAndSizeAndClaimMemory(
          data, 16, validation_context)) {
    return false;
  }

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  [[maybe_unused]] const Directory_DeleteFile_ResponseParams_Data* object =
      static_cast<const Directory_DeleteFile_ResponseParams_Data*>(data);

  return true;
}

Directory_DeleteFile_ResponseParams_Data::Directory_DeleteFile_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool Directory_DeletePathRecursively_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;
  if (!ValidateUnversionedStructHeaderAndSizeAndClaimMemory(
          data, 16, validation_context)) {
    return false;
  }

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  [[maybe_unused]] const Directory_DeletePathRecursively_Params_Data* object =
      static_cast<const Directory_DeletePathRecursively_Params_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->path, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->path, validation_context))
    return false;

  return true;
}

Directory_DeletePathRecursively_Params_Data::Directory_DeletePathRecursively_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool Directory_DeletePathRecursively_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;
  if (!ValidateUnversionedStructHeaderAndSizeAndClaimMemory(
          data, 16, validation_context)) {
    return false;
  }

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  [[maybe_unused]] const Directory_DeletePathRecursively_ResponseParams_Data* object =
      static_cast<const Directory_DeletePathRecursively_ResponseParams_Data*>(data);

  return true;
}

Directory_DeletePathRecursively_ResponseParams_Data::Directory_DeletePathRecursively_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool Directory_GetFileInfo_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;
  if (!ValidateUnversionedStructHeaderAndSizeAndClaimMemory(
          data, 16, validation_context)) {
    return false;
  }

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  [[maybe_unused]] const Directory_GetFileInfo_Params_Data* object =
      static_cast<const Directory_GetFileInfo_Params_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->path, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->path, validation_context))
    return false;

  return true;
}

Directory_GetFileInfo_Params_Data::Directory_GetFileInfo_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool Directory_GetFileInfo_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;
  if (!ValidateUnversionedStructHeaderAndSizeAndClaimMemory(
          data, 16, validation_context)) {
    return false;
  }

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  [[maybe_unused]] const Directory_GetFileInfo_ResponseParams_Data* object =
      static_cast<const Directory_GetFileInfo_ResponseParams_Data*>(data);

  if (!mojo::internal::ValidateStruct(object->info, validation_context))
    return false;

  return true;
}

Directory_GetFileInfo_ResponseParams_Data::Directory_GetFileInfo_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool Directory_GetPathAccess_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;
  if (!ValidateUnversionedStructHeaderAndSizeAndClaimMemory(
          data, 16, validation_context)) {
    return false;
  }

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  [[maybe_unused]] const Directory_GetPathAccess_Params_Data* object =
      static_cast<const Directory_GetPathAccess_Params_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->path, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->path, validation_context))
    return false;

  return true;
}

Directory_GetPathAccess_Params_Data::Directory_GetPathAccess_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool Directory_GetPathAccess_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;
  if (!ValidateUnversionedStructHeaderAndSizeAndClaimMemory(
          data, 16, validation_context)) {
    return false;
  }

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  [[maybe_unused]] const Directory_GetPathAccess_ResponseParams_Data* object =
      static_cast<const Directory_GetPathAccess_ResponseParams_Data*>(data);

  if (!mojo::internal::ValidateStruct(object->info, validation_context))
    return false;

  return true;
}

Directory_GetPathAccess_ResponseParams_Data::Directory_GetPathAccess_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool Directory_GetMaximumPathComponentLength_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;
  if (!ValidateUnversionedStructHeaderAndSizeAndClaimMemory(
          data, 16, validation_context)) {
    return false;
  }

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  [[maybe_unused]] const Directory_GetMaximumPathComponentLength_Params_Data* object =
      static_cast<const Directory_GetMaximumPathComponentLength_Params_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->path, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->path, validation_context))
    return false;

  return true;
}

Directory_GetMaximumPathComponentLength_Params_Data::Directory_GetMaximumPathComponentLength_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool Directory_GetMaximumPathComponentLength_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;
  if (!ValidateUnversionedStructHeaderAndSizeAndClaimMemory(
          data, 16, validation_context)) {
    return false;
  }

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  [[maybe_unused]] const Directory_GetMaximumPathComponentLength_ResponseParams_Data* object =
      static_cast<const Directory_GetMaximumPathComponentLength_ResponseParams_Data*>(data);

  return true;
}

Directory_GetMaximumPathComponentLength_ResponseParams_Data::Directory_GetMaximumPathComponentLength_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool Directory_RenameFile_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;
  if (!ValidateUnversionedStructHeaderAndSizeAndClaimMemory(
          data, 24, validation_context)) {
    return false;
  }

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  [[maybe_unused]] const Directory_RenameFile_Params_Data* object =
      static_cast<const Directory_RenameFile_Params_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->old_path, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->old_path, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->new_path, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->new_path, validation_context))
    return false;

  return true;
}

Directory_RenameFile_Params_Data::Directory_RenameFile_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool Directory_RenameFile_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;
  if (!ValidateUnversionedStructHeaderAndSizeAndClaimMemory(
          data, 16, validation_context)) {
    return false;
  }

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  [[maybe_unused]] const Directory_RenameFile_ResponseParams_Data* object =
      static_cast<const Directory_RenameFile_ResponseParams_Data*>(data);


  if (!::mojo_base::mojom::internal::FileError_Data
        ::Validate(object->error, validation_context))
    return false;

  return true;
}

Directory_RenameFile_ResponseParams_Data::Directory_RenameFile_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool Directory_LockFile_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;
  if (!ValidateUnversionedStructHeaderAndSizeAndClaimMemory(
          data, 16, validation_context)) {
    return false;
  }

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  [[maybe_unused]] const Directory_LockFile_Params_Data* object =
      static_cast<const Directory_LockFile_Params_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->path, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->path, validation_context))
    return false;

  return true;
}

Directory_LockFile_Params_Data::Directory_LockFile_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool Directory_LockFile_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;
  if (!ValidateUnversionedStructHeaderAndSizeAndClaimMemory(
          data, 24, validation_context)) {
    return false;
  }

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  [[maybe_unused]] const Directory_LockFile_ResponseParams_Data* object =
      static_cast<const Directory_LockFile_ResponseParams_Data*>(data);


  if (!::mojo_base::mojom::internal::FileError_Data
        ::Validate(object->error, validation_context))
    return false;

  if (!mojo::internal::ValidateHandleOrInterface(object->lock,
                                                 validation_context)) {
    return false;
  }

  return true;
}

Directory_LockFile_ResponseParams_Data::Directory_LockFile_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool Directory_SetOpenedFileLength_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;
  if (!ValidateUnversionedStructHeaderAndSizeAndClaimMemory(
          data, 24, validation_context)) {
    return false;
  }

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  [[maybe_unused]] const Directory_SetOpenedFileLength_Params_Data* object =
      static_cast<const Directory_SetOpenedFileLength_Params_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->file, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->file, validation_context))
    return false;

  return true;
}

Directory_SetOpenedFileLength_Params_Data::Directory_SetOpenedFileLength_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool Directory_SetOpenedFileLength_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;
  if (!ValidateUnversionedStructHeaderAndSizeAndClaimMemory(
          data, 24, validation_context)) {
    return false;
  }

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  [[maybe_unused]] const Directory_SetOpenedFileLength_ResponseParams_Data* object =
      static_cast<const Directory_SetOpenedFileLength_ResponseParams_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->file, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->file, validation_context))
    return false;

  return true;
}

Directory_SetOpenedFileLength_ResponseParams_Data::Directory_SetOpenedFileLength_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace storage

namespace perfetto {

// static
void TraceFormatTraits<::storage::mojom::GetEntriesMode>::WriteIntoTrace(
   perfetto::TracedValue context, ::storage::mojom::GetEntriesMode value) {
  return std::move(context).WriteString(::storage::mojom::GetEntriesModeToString(value));
}

} // namespace perfetto

namespace perfetto {

// static
void TraceFormatTraits<::storage::mojom::FileOpenMode>::WriteIntoTrace(
   perfetto::TracedValue context, ::storage::mojom::FileOpenMode value) {
  return std::move(context).WriteString(::storage::mojom::FileOpenModeToString(value));
}

} // namespace perfetto

namespace perfetto {

// static
void TraceFormatTraits<::storage::mojom::FileReadAccess>::WriteIntoTrace(
   perfetto::TracedValue context, ::storage::mojom::FileReadAccess value) {
  return std::move(context).WriteString(::storage::mojom::FileReadAccessToString(value));
}

} // namespace perfetto

namespace perfetto {

// static
void TraceFormatTraits<::storage::mojom::FileWriteAccess>::WriteIntoTrace(
   perfetto::TracedValue context, ::storage::mojom::FileWriteAccess value) {
  return std::move(context).WriteString(::storage::mojom::FileWriteAccessToString(value));
}

} // namespace perfetto