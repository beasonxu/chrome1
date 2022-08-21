// components/services/filesystem/public/mojom/directory.mojom-shared.cc is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "components/services/filesystem/public/mojom/directory.mojom-shared.h"

// Used to support stream output operator for enums.
// TODO(dcheng): Consider omitting this somehow if not needed.
#include <ostream>
#include <utility>

#include "base/strings/stringprintf.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"
#include "third_party/perfetto/include/perfetto/tracing/traced_value.h"

#include "components/services/filesystem/public/mojom/directory.mojom-params-data.h"
namespace filesystem {
namespace mojom {

namespace internal {


// static
bool FileOpenDetails_Data::Validate(
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
  [[maybe_unused]] const FileOpenDetails_Data* object =
      static_cast<const FileOpenDetails_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->path, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams path_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->path, validation_context,
                                         &path_validate_params)) {
    return false;
  }

  return true;
}

FileOpenDetails_Data::FileOpenDetails_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool FileOpenResult_Data::Validate(
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
  [[maybe_unused]] const FileOpenResult_Data* object =
      static_cast<const FileOpenResult_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->path, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams path_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->path, validation_context,
                                         &path_validate_params)) {
    return false;
  }


  if (!::mojo_base::mojom::internal::FileError_Data
        ::Validate(object->error, validation_context))
    return false;

  if (!mojo::internal::ValidateStruct(object->file_handle, validation_context))
    return false;

  return true;
}

FileOpenResult_Data::FileOpenResult_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool Directory_Read_Params_Data::Validate(
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
  [[maybe_unused]] const Directory_Read_Params_Data* object =
      static_cast<const Directory_Read_Params_Data*>(data);

  return true;
}

Directory_Read_Params_Data::Directory_Read_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool Directory_Read_ResponseParams_Data::Validate(
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
  [[maybe_unused]] const Directory_Read_ResponseParams_Data* object =
      static_cast<const Directory_Read_ResponseParams_Data*>(data);


  if (!::mojo_base::mojom::internal::FileError_Data
        ::Validate(object->error, validation_context))
    return false;

  const mojo::internal::ContainerValidateParams directory_contents_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->directory_contents, validation_context,
                                         &directory_contents_validate_params)) {
    return false;
  }

  return true;
}

Directory_Read_ResponseParams_Data::Directory_Read_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool Directory_OpenFileHandle_Params_Data::Validate(
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
  [[maybe_unused]] const Directory_OpenFileHandle_Params_Data* object =
      static_cast<const Directory_OpenFileHandle_Params_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->path, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams path_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->path, validation_context,
                                         &path_validate_params)) {
    return false;
  }

  return true;
}

Directory_OpenFileHandle_Params_Data::Directory_OpenFileHandle_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool Directory_OpenFileHandle_ResponseParams_Data::Validate(
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
  [[maybe_unused]] const Directory_OpenFileHandle_ResponseParams_Data* object =
      static_cast<const Directory_OpenFileHandle_ResponseParams_Data*>(data);


  if (!::mojo_base::mojom::internal::FileError_Data
        ::Validate(object->error, validation_context))
    return false;

  if (!mojo::internal::ValidateStruct(object->file_handle, validation_context))
    return false;

  return true;
}

Directory_OpenFileHandle_ResponseParams_Data::Directory_OpenFileHandle_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool Directory_OpenFileHandles_Params_Data::Validate(
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
  [[maybe_unused]] const Directory_OpenFileHandles_Params_Data* object =
      static_cast<const Directory_OpenFileHandles_Params_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->files, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams files_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->files, validation_context,
                                         &files_validate_params)) {
    return false;
  }

  return true;
}

Directory_OpenFileHandles_Params_Data::Directory_OpenFileHandles_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool Directory_OpenFileHandles_ResponseParams_Data::Validate(
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
  [[maybe_unused]] const Directory_OpenFileHandles_ResponseParams_Data* object =
      static_cast<const Directory_OpenFileHandles_ResponseParams_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->results, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams results_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->results, validation_context,
                                         &results_validate_params)) {
    return false;
  }

  return true;
}

Directory_OpenFileHandles_ResponseParams_Data::Directory_OpenFileHandles_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool Directory_OpenDirectory_Params_Data::Validate(
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
  [[maybe_unused]] const Directory_OpenDirectory_Params_Data* object =
      static_cast<const Directory_OpenDirectory_Params_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->path, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams path_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->path, validation_context,
                                         &path_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidateHandleOrInterface(object->directory,
                                                 validation_context)) {
    return false;
  }

  return true;
}

Directory_OpenDirectory_Params_Data::Directory_OpenDirectory_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool Directory_OpenDirectory_ResponseParams_Data::Validate(
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
  [[maybe_unused]] const Directory_OpenDirectory_ResponseParams_Data* object =
      static_cast<const Directory_OpenDirectory_ResponseParams_Data*>(data);


  if (!::mojo_base::mojom::internal::FileError_Data
        ::Validate(object->error, validation_context))
    return false;

  return true;
}

Directory_OpenDirectory_ResponseParams_Data::Directory_OpenDirectory_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool Directory_Rename_Params_Data::Validate(
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
  [[maybe_unused]] const Directory_Rename_Params_Data* object =
      static_cast<const Directory_Rename_Params_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->path, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams path_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->path, validation_context,
                                         &path_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->new_path, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams new_path_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->new_path, validation_context,
                                         &new_path_validate_params)) {
    return false;
  }

  return true;
}

Directory_Rename_Params_Data::Directory_Rename_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool Directory_Rename_ResponseParams_Data::Validate(
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
  [[maybe_unused]] const Directory_Rename_ResponseParams_Data* object =
      static_cast<const Directory_Rename_ResponseParams_Data*>(data);


  if (!::mojo_base::mojom::internal::FileError_Data
        ::Validate(object->error, validation_context))
    return false;

  return true;
}

Directory_Rename_ResponseParams_Data::Directory_Rename_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool Directory_Replace_Params_Data::Validate(
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
  [[maybe_unused]] const Directory_Replace_Params_Data* object =
      static_cast<const Directory_Replace_Params_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->path, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams path_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->path, validation_context,
                                         &path_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->new_path, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams new_path_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->new_path, validation_context,
                                         &new_path_validate_params)) {
    return false;
  }

  return true;
}

Directory_Replace_Params_Data::Directory_Replace_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool Directory_Replace_ResponseParams_Data::Validate(
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
  [[maybe_unused]] const Directory_Replace_ResponseParams_Data* object =
      static_cast<const Directory_Replace_ResponseParams_Data*>(data);


  if (!::mojo_base::mojom::internal::FileError_Data
        ::Validate(object->error, validation_context))
    return false;

  return true;
}

Directory_Replace_ResponseParams_Data::Directory_Replace_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool Directory_Delete_Params_Data::Validate(
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
  [[maybe_unused]] const Directory_Delete_Params_Data* object =
      static_cast<const Directory_Delete_Params_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->path, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams path_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->path, validation_context,
                                         &path_validate_params)) {
    return false;
  }

  return true;
}

Directory_Delete_Params_Data::Directory_Delete_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool Directory_Delete_ResponseParams_Data::Validate(
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
  [[maybe_unused]] const Directory_Delete_ResponseParams_Data* object =
      static_cast<const Directory_Delete_ResponseParams_Data*>(data);


  if (!::mojo_base::mojom::internal::FileError_Data
        ::Validate(object->error, validation_context))
    return false;

  return true;
}

Directory_Delete_ResponseParams_Data::Directory_Delete_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool Directory_Exists_Params_Data::Validate(
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
  [[maybe_unused]] const Directory_Exists_Params_Data* object =
      static_cast<const Directory_Exists_Params_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->path, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams path_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->path, validation_context,
                                         &path_validate_params)) {
    return false;
  }

  return true;
}

Directory_Exists_Params_Data::Directory_Exists_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool Directory_Exists_ResponseParams_Data::Validate(
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
  [[maybe_unused]] const Directory_Exists_ResponseParams_Data* object =
      static_cast<const Directory_Exists_ResponseParams_Data*>(data);


  if (!::mojo_base::mojom::internal::FileError_Data
        ::Validate(object->error, validation_context))
    return false;

  return true;
}

Directory_Exists_ResponseParams_Data::Directory_Exists_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool Directory_IsWritable_Params_Data::Validate(
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
  [[maybe_unused]] const Directory_IsWritable_Params_Data* object =
      static_cast<const Directory_IsWritable_Params_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->path, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams path_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->path, validation_context,
                                         &path_validate_params)) {
    return false;
  }

  return true;
}

Directory_IsWritable_Params_Data::Directory_IsWritable_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool Directory_IsWritable_ResponseParams_Data::Validate(
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
  [[maybe_unused]] const Directory_IsWritable_ResponseParams_Data* object =
      static_cast<const Directory_IsWritable_ResponseParams_Data*>(data);


  if (!::mojo_base::mojom::internal::FileError_Data
        ::Validate(object->error, validation_context))
    return false;

  return true;
}

Directory_IsWritable_ResponseParams_Data::Directory_IsWritable_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool Directory_Flush_Params_Data::Validate(
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
  [[maybe_unused]] const Directory_Flush_Params_Data* object =
      static_cast<const Directory_Flush_Params_Data*>(data);

  return true;
}

Directory_Flush_Params_Data::Directory_Flush_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool Directory_Flush_ResponseParams_Data::Validate(
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
  [[maybe_unused]] const Directory_Flush_ResponseParams_Data* object =
      static_cast<const Directory_Flush_ResponseParams_Data*>(data);


  if (!::mojo_base::mojom::internal::FileError_Data
        ::Validate(object->error, validation_context))
    return false;

  return true;
}

Directory_Flush_ResponseParams_Data::Directory_Flush_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool Directory_StatFile_Params_Data::Validate(
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
  [[maybe_unused]] const Directory_StatFile_Params_Data* object =
      static_cast<const Directory_StatFile_Params_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->path, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams path_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->path, validation_context,
                                         &path_validate_params)) {
    return false;
  }

  return true;
}

Directory_StatFile_Params_Data::Directory_StatFile_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool Directory_StatFile_ResponseParams_Data::Validate(
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
  [[maybe_unused]] const Directory_StatFile_ResponseParams_Data* object =
      static_cast<const Directory_StatFile_ResponseParams_Data*>(data);


  if (!::mojo_base::mojom::internal::FileError_Data
        ::Validate(object->error, validation_context))
    return false;

  if (!mojo::internal::ValidateStruct(object->file_information, validation_context))
    return false;

  return true;
}

Directory_StatFile_ResponseParams_Data::Directory_StatFile_ResponseParams_Data()
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
          object->directory, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateHandleOrInterface(object->directory,
                                                 validation_context)) {
    return false;
  }

  return true;
}

Directory_Clone_Params_Data::Directory_Clone_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool Directory_ReadEntireFile_Params_Data::Validate(
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
  [[maybe_unused]] const Directory_ReadEntireFile_Params_Data* object =
      static_cast<const Directory_ReadEntireFile_Params_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->path, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams path_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->path, validation_context,
                                         &path_validate_params)) {
    return false;
  }

  return true;
}

Directory_ReadEntireFile_Params_Data::Directory_ReadEntireFile_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool Directory_ReadEntireFile_ResponseParams_Data::Validate(
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
  [[maybe_unused]] const Directory_ReadEntireFile_ResponseParams_Data* object =
      static_cast<const Directory_ReadEntireFile_ResponseParams_Data*>(data);


  if (!::mojo_base::mojom::internal::FileError_Data
        ::Validate(object->error, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->data, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams data_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->data, validation_context,
                                         &data_validate_params)) {
    return false;
  }

  return true;
}

Directory_ReadEntireFile_ResponseParams_Data::Directory_ReadEntireFile_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool Directory_WriteFile_Params_Data::Validate(
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
  [[maybe_unused]] const Directory_WriteFile_Params_Data* object =
      static_cast<const Directory_WriteFile_Params_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->path, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams path_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->path, validation_context,
                                         &path_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->data, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams data_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->data, validation_context,
                                         &data_validate_params)) {
    return false;
  }

  return true;
}

Directory_WriteFile_Params_Data::Directory_WriteFile_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool Directory_WriteFile_ResponseParams_Data::Validate(
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
  [[maybe_unused]] const Directory_WriteFile_ResponseParams_Data* object =
      static_cast<const Directory_WriteFile_ResponseParams_Data*>(data);


  if (!::mojo_base::mojom::internal::FileError_Data
        ::Validate(object->error, validation_context))
    return false;

  return true;
}

Directory_WriteFile_ResponseParams_Data::Directory_WriteFile_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace filesystem