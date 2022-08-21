// services/network/public/mojom/http_cache_backend_file_operations.mojom-shared.cc is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "services/network/public/mojom/http_cache_backend_file_operations.mojom-shared.h"

// Used to support stream output operator for enums.
// TODO(dcheng): Consider omitting this somehow if not needed.
#include <ostream>
#include <utility>

#include "base/strings/stringprintf.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"
#include "third_party/perfetto/include/perfetto/tracing/traced_value.h"

#include "services/network/public/mojom/http_cache_backend_file_operations.mojom-params-data.h"
namespace network {
namespace mojom {

static NOINLINE const char* HttpCacheBackendOpenFileFlagsToStringHelper(HttpCacheBackendOpenFileFlags value) {
  // Defined in a helper function to ensure that Clang generates a lookup table.
  switch(value) {
    case HttpCacheBackendOpenFileFlags::kOpenAndRead:
      return "kOpenAndRead";
    case HttpCacheBackendOpenFileFlags::kCreateAndWrite:
      return "kCreateAndWrite";
    case HttpCacheBackendOpenFileFlags::kCreateAlwaysWriteWinShareDelete:
      return "kCreateAlwaysWriteWinShareDelete";
    case HttpCacheBackendOpenFileFlags::kOpenReadWriteWinShareDelete:
      return "kOpenReadWriteWinShareDelete";
    case HttpCacheBackendOpenFileFlags::kCreateReadWriteWinShareDelete:
      return "kCreateReadWriteWinShareDelete";
    case HttpCacheBackendOpenFileFlags::kOpenReadWinShareDeleteWinSequentialScan:
      return "kOpenReadWinShareDeleteWinSequentialScan";
    default:
      return nullptr;
  }
}

std::string HttpCacheBackendOpenFileFlagsToString(HttpCacheBackendOpenFileFlags value) {
  const char *str = HttpCacheBackendOpenFileFlagsToStringHelper(value);
  if (!str) {
    return base::StringPrintf("Unknown HttpCacheBackendOpenFileFlags value: %i", static_cast<int32_t>(value));
  }
  return str;
}

std::ostream& operator<<(std::ostream& os, HttpCacheBackendOpenFileFlags value) {
  return os << HttpCacheBackendOpenFileFlagsToString(value);
}

static NOINLINE const char* HttpCacheBackendDeleteFileModeToStringHelper(HttpCacheBackendDeleteFileMode value) {
  // Defined in a helper function to ensure that Clang generates a lookup table.
  switch(value) {
    case HttpCacheBackendDeleteFileMode::kDefault:
      return "kDefault";
    case HttpCacheBackendDeleteFileMode::kEnsureImmediateAvailability:
      return "kEnsureImmediateAvailability";
    default:
      return nullptr;
  }
}

std::string HttpCacheBackendDeleteFileModeToString(HttpCacheBackendDeleteFileMode value) {
  const char *str = HttpCacheBackendDeleteFileModeToStringHelper(value);
  if (!str) {
    return base::StringPrintf("Unknown HttpCacheBackendDeleteFileMode value: %i", static_cast<int32_t>(value));
  }
  return str;
}

std::ostream& operator<<(std::ostream& os, HttpCacheBackendDeleteFileMode value) {
  return os << HttpCacheBackendDeleteFileModeToString(value);
}

namespace internal {


// static
bool FileEnumerationEntry_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;
  if (!ValidateUnversionedStructHeaderAndSizeAndClaimMemory(
          data, 40, validation_context)) {
    return false;
  }

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  [[maybe_unused]] const FileEnumerationEntry_Data* object =
      static_cast<const FileEnumerationEntry_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->path, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->path, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->last_accessed, 3, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->last_accessed, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->last_modified, 4, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->last_modified, validation_context))
    return false;

  return true;
}

FileEnumerationEntry_Data::FileEnumerationEntry_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool FileEnumerator_GetNext_Params_Data::Validate(
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
  [[maybe_unused]] const FileEnumerator_GetNext_Params_Data* object =
      static_cast<const FileEnumerator_GetNext_Params_Data*>(data);

  return true;
}

FileEnumerator_GetNext_Params_Data::FileEnumerator_GetNext_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool FileEnumerator_GetNext_ResponseParams_Data::Validate(
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
  [[maybe_unused]] const FileEnumerator_GetNext_ResponseParams_Data* object =
      static_cast<const FileEnumerator_GetNext_ResponseParams_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->entries, 1, validation_context)) {
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

FileEnumerator_GetNext_ResponseParams_Data::FileEnumerator_GetNext_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool HttpCacheBackendFileOperations_CreateDirectory_Params_Data::Validate(
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
  [[maybe_unused]] const HttpCacheBackendFileOperations_CreateDirectory_Params_Data* object =
      static_cast<const HttpCacheBackendFileOperations_CreateDirectory_Params_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->path, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->path, validation_context))
    return false;

  return true;
}

HttpCacheBackendFileOperations_CreateDirectory_Params_Data::HttpCacheBackendFileOperations_CreateDirectory_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool HttpCacheBackendFileOperations_CreateDirectory_ResponseParams_Data::Validate(
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
  [[maybe_unused]] const HttpCacheBackendFileOperations_CreateDirectory_ResponseParams_Data* object =
      static_cast<const HttpCacheBackendFileOperations_CreateDirectory_ResponseParams_Data*>(data);

  return true;
}

HttpCacheBackendFileOperations_CreateDirectory_ResponseParams_Data::HttpCacheBackendFileOperations_CreateDirectory_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool HttpCacheBackendFileOperations_PathExists_Params_Data::Validate(
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
  [[maybe_unused]] const HttpCacheBackendFileOperations_PathExists_Params_Data* object =
      static_cast<const HttpCacheBackendFileOperations_PathExists_Params_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->path, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->path, validation_context))
    return false;

  return true;
}

HttpCacheBackendFileOperations_PathExists_Params_Data::HttpCacheBackendFileOperations_PathExists_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool HttpCacheBackendFileOperations_PathExists_ResponseParams_Data::Validate(
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
  [[maybe_unused]] const HttpCacheBackendFileOperations_PathExists_ResponseParams_Data* object =
      static_cast<const HttpCacheBackendFileOperations_PathExists_ResponseParams_Data*>(data);

  return true;
}

HttpCacheBackendFileOperations_PathExists_ResponseParams_Data::HttpCacheBackendFileOperations_PathExists_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool HttpCacheBackendFileOperations_DirectoryExists_Params_Data::Validate(
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
  [[maybe_unused]] const HttpCacheBackendFileOperations_DirectoryExists_Params_Data* object =
      static_cast<const HttpCacheBackendFileOperations_DirectoryExists_Params_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->path, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->path, validation_context))
    return false;

  return true;
}

HttpCacheBackendFileOperations_DirectoryExists_Params_Data::HttpCacheBackendFileOperations_DirectoryExists_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool HttpCacheBackendFileOperations_DirectoryExists_ResponseParams_Data::Validate(
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
  [[maybe_unused]] const HttpCacheBackendFileOperations_DirectoryExists_ResponseParams_Data* object =
      static_cast<const HttpCacheBackendFileOperations_DirectoryExists_ResponseParams_Data*>(data);

  return true;
}

HttpCacheBackendFileOperations_DirectoryExists_ResponseParams_Data::HttpCacheBackendFileOperations_DirectoryExists_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool HttpCacheBackendFileOperations_OpenFile_Params_Data::Validate(
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
  [[maybe_unused]] const HttpCacheBackendFileOperations_OpenFile_Params_Data* object =
      static_cast<const HttpCacheBackendFileOperations_OpenFile_Params_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->path, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->path, validation_context))
    return false;


  if (!::network::mojom::internal::HttpCacheBackendOpenFileFlags_Data
        ::Validate(object->flags, validation_context))
    return false;

  return true;
}

HttpCacheBackendFileOperations_OpenFile_Params_Data::HttpCacheBackendFileOperations_OpenFile_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool HttpCacheBackendFileOperations_OpenFile_ResponseParams_Data::Validate(
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
  [[maybe_unused]] const HttpCacheBackendFileOperations_OpenFile_ResponseParams_Data* object =
      static_cast<const HttpCacheBackendFileOperations_OpenFile_ResponseParams_Data*>(data);

  if (!mojo::internal::ValidateStruct(object->file, validation_context))
    return false;


  if (!::mojo_base::mojom::internal::FileError_Data
        ::Validate(object->error, validation_context))
    return false;

  return true;
}

HttpCacheBackendFileOperations_OpenFile_ResponseParams_Data::HttpCacheBackendFileOperations_OpenFile_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool HttpCacheBackendFileOperations_DeleteFile_Params_Data::Validate(
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
  [[maybe_unused]] const HttpCacheBackendFileOperations_DeleteFile_Params_Data* object =
      static_cast<const HttpCacheBackendFileOperations_DeleteFile_Params_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->path, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->path, validation_context))
    return false;


  if (!::network::mojom::internal::HttpCacheBackendDeleteFileMode_Data
        ::Validate(object->mode, validation_context))
    return false;

  return true;
}

HttpCacheBackendFileOperations_DeleteFile_Params_Data::HttpCacheBackendFileOperations_DeleteFile_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool HttpCacheBackendFileOperations_DeleteFile_ResponseParams_Data::Validate(
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
  [[maybe_unused]] const HttpCacheBackendFileOperations_DeleteFile_ResponseParams_Data* object =
      static_cast<const HttpCacheBackendFileOperations_DeleteFile_ResponseParams_Data*>(data);

  return true;
}

HttpCacheBackendFileOperations_DeleteFile_ResponseParams_Data::HttpCacheBackendFileOperations_DeleteFile_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool HttpCacheBackendFileOperations_RenameFile_Params_Data::Validate(
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
  [[maybe_unused]] const HttpCacheBackendFileOperations_RenameFile_Params_Data* object =
      static_cast<const HttpCacheBackendFileOperations_RenameFile_Params_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->from_path, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->from_path, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->to_path, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->to_path, validation_context))
    return false;

  return true;
}

HttpCacheBackendFileOperations_RenameFile_Params_Data::HttpCacheBackendFileOperations_RenameFile_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool HttpCacheBackendFileOperations_RenameFile_ResponseParams_Data::Validate(
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
  [[maybe_unused]] const HttpCacheBackendFileOperations_RenameFile_ResponseParams_Data* object =
      static_cast<const HttpCacheBackendFileOperations_RenameFile_ResponseParams_Data*>(data);


  if (!::mojo_base::mojom::internal::FileError_Data
        ::Validate(object->error, validation_context))
    return false;

  return true;
}

HttpCacheBackendFileOperations_RenameFile_ResponseParams_Data::HttpCacheBackendFileOperations_RenameFile_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool HttpCacheBackendFileOperations_GetFileInfo_Params_Data::Validate(
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
  [[maybe_unused]] const HttpCacheBackendFileOperations_GetFileInfo_Params_Data* object =
      static_cast<const HttpCacheBackendFileOperations_GetFileInfo_Params_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->path, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->path, validation_context))
    return false;

  return true;
}

HttpCacheBackendFileOperations_GetFileInfo_Params_Data::HttpCacheBackendFileOperations_GetFileInfo_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool HttpCacheBackendFileOperations_GetFileInfo_ResponseParams_Data::Validate(
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
  [[maybe_unused]] const HttpCacheBackendFileOperations_GetFileInfo_ResponseParams_Data* object =
      static_cast<const HttpCacheBackendFileOperations_GetFileInfo_ResponseParams_Data*>(data);

  if (!mojo::internal::ValidateStruct(object->info, validation_context))
    return false;

  return true;
}

HttpCacheBackendFileOperations_GetFileInfo_ResponseParams_Data::HttpCacheBackendFileOperations_GetFileInfo_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool HttpCacheBackendFileOperations_EnumerateFiles_Params_Data::Validate(
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
  [[maybe_unused]] const HttpCacheBackendFileOperations_EnumerateFiles_Params_Data* object =
      static_cast<const HttpCacheBackendFileOperations_EnumerateFiles_Params_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->path, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->path, validation_context))
    return false;

  if (!mojo::internal::ValidateHandleOrInterfaceNonNullable(
          object->receiver, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateHandleOrInterface(object->receiver,
                                                 validation_context)) {
    return false;
  }

  return true;
}

HttpCacheBackendFileOperations_EnumerateFiles_Params_Data::HttpCacheBackendFileOperations_EnumerateFiles_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool HttpCacheBackendFileOperations_CleanupDirectory_Params_Data::Validate(
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
  [[maybe_unused]] const HttpCacheBackendFileOperations_CleanupDirectory_Params_Data* object =
      static_cast<const HttpCacheBackendFileOperations_CleanupDirectory_Params_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->path, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->path, validation_context))
    return false;

  return true;
}

HttpCacheBackendFileOperations_CleanupDirectory_Params_Data::HttpCacheBackendFileOperations_CleanupDirectory_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool HttpCacheBackendFileOperations_CleanupDirectory_ResponseParams_Data::Validate(
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
  [[maybe_unused]] const HttpCacheBackendFileOperations_CleanupDirectory_ResponseParams_Data* object =
      static_cast<const HttpCacheBackendFileOperations_CleanupDirectory_ResponseParams_Data*>(data);

  return true;
}

HttpCacheBackendFileOperations_CleanupDirectory_ResponseParams_Data::HttpCacheBackendFileOperations_CleanupDirectory_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool HttpCacheBackendFileOperationsFactory_Create_Params_Data::Validate(
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
  [[maybe_unused]] const HttpCacheBackendFileOperationsFactory_Create_Params_Data* object =
      static_cast<const HttpCacheBackendFileOperationsFactory_Create_Params_Data*>(data);

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

HttpCacheBackendFileOperationsFactory_Create_Params_Data::HttpCacheBackendFileOperationsFactory_Create_Params_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace network

namespace perfetto {

// static
void TraceFormatTraits<::network::mojom::HttpCacheBackendOpenFileFlags>::WriteIntoTrace(
   perfetto::TracedValue context, ::network::mojom::HttpCacheBackendOpenFileFlags value) {
  return std::move(context).WriteString(::network::mojom::HttpCacheBackendOpenFileFlagsToString(value));
}

} // namespace perfetto

namespace perfetto {

// static
void TraceFormatTraits<::network::mojom::HttpCacheBackendDeleteFileMode>::WriteIntoTrace(
   perfetto::TracedValue context, ::network::mojom::HttpCacheBackendDeleteFileMode value) {
  return std::move(context).WriteString(::network::mojom::HttpCacheBackendDeleteFileModeToString(value));
}

} // namespace perfetto