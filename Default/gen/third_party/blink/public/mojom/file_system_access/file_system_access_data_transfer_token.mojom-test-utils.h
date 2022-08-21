// third_party/blink/public/mojom/file_system_access/file_system_access_data_transfer_token.mojom-test-utils.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_FILE_SYSTEM_ACCESS_FILE_SYSTEM_ACCESS_DATA_TRANSFER_TOKEN_MOJOM_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_FILE_SYSTEM_ACCESS_FILE_SYSTEM_ACCESS_DATA_TRANSFER_TOKEN_MOJOM_TEST_UTILS_H_

#include "third_party/blink/public/mojom/file_system_access/file_system_access_data_transfer_token.mojom.h"
#include "third_party/blink/public/common/common_export.h"


namespace blink {
namespace mojom {


class BLINK_COMMON_EXPORT FileSystemAccessDataTransferTokenInterceptorForTesting : public FileSystemAccessDataTransferToken {
  virtual FileSystemAccessDataTransferToken* GetForwardingInterface() = 0;
  void GetInternalId(GetInternalIdCallback callback) override;
  void Clone(::mojo::PendingReceiver<FileSystemAccessDataTransferToken> token_clone) override;
};
class BLINK_COMMON_EXPORT FileSystemAccessDataTransferTokenAsyncWaiter {
 public:
  explicit FileSystemAccessDataTransferTokenAsyncWaiter(FileSystemAccessDataTransferToken* proxy);

  FileSystemAccessDataTransferTokenAsyncWaiter(const FileSystemAccessDataTransferTokenAsyncWaiter&) = delete;
  FileSystemAccessDataTransferTokenAsyncWaiter& operator=(const FileSystemAccessDataTransferTokenAsyncWaiter&) = delete;

  ~FileSystemAccessDataTransferTokenAsyncWaiter();
  void GetInternalId(
      ::base::UnguessableToken* out_id);

 private:
  FileSystemAccessDataTransferToken* const proxy_;
};




}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_FILE_SYSTEM_ACCESS_FILE_SYSTEM_ACCESS_DATA_TRANSFER_TOKEN_MOJOM_TEST_UTILS_H_