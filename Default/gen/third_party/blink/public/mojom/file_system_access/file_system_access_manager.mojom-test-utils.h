// third_party/blink/public/mojom/file_system_access/file_system_access_manager.mojom-test-utils.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_FILE_SYSTEM_ACCESS_FILE_SYSTEM_ACCESS_MANAGER_MOJOM_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_FILE_SYSTEM_ACCESS_FILE_SYSTEM_ACCESS_MANAGER_MOJOM_TEST_UTILS_H_

#include "third_party/blink/public/mojom/file_system_access/file_system_access_manager.mojom.h"
#include "third_party/blink/public/common/common_export.h"


namespace blink {
namespace mojom {


class BLINK_COMMON_EXPORT FileSystemAccessManagerInterceptorForTesting : public FileSystemAccessManager {
  virtual FileSystemAccessManager* GetForwardingInterface() = 0;
  void GetSandboxedFileSystem(GetSandboxedFileSystemCallback callback) override;
  void ChooseEntries(FilePickerOptionsPtr options, CommonFilePickerOptionsPtr common_options, ChooseEntriesCallback callback) override;
  void GetFileHandleFromToken(::mojo::PendingRemote<::blink::mojom::FileSystemAccessTransferToken> token, ::mojo::PendingReceiver<::blink::mojom::FileSystemAccessFileHandle> file_handle) override;
  void GetDirectoryHandleFromToken(::mojo::PendingRemote<::blink::mojom::FileSystemAccessTransferToken> token, ::mojo::PendingReceiver<::blink::mojom::FileSystemAccessDirectoryHandle> directory_handle) override;
  void GetEntryFromDataTransferToken(::mojo::PendingRemote<::blink::mojom::FileSystemAccessDataTransferToken> token, GetEntryFromDataTransferTokenCallback callback) override;
};
class BLINK_COMMON_EXPORT FileSystemAccessManagerAsyncWaiter {
 public:
  explicit FileSystemAccessManagerAsyncWaiter(FileSystemAccessManager* proxy);

  FileSystemAccessManagerAsyncWaiter(const FileSystemAccessManagerAsyncWaiter&) = delete;
  FileSystemAccessManagerAsyncWaiter& operator=(const FileSystemAccessManagerAsyncWaiter&) = delete;

  ~FileSystemAccessManagerAsyncWaiter();
  void GetSandboxedFileSystem(
      ::blink::mojom::FileSystemAccessErrorPtr* out_result, ::mojo::PendingRemote<::blink::mojom::FileSystemAccessDirectoryHandle>* out_directory);
  void ChooseEntries(
      FilePickerOptionsPtr options, CommonFilePickerOptionsPtr common_options, ::blink::mojom::FileSystemAccessErrorPtr* out_result, std::vector<::blink::mojom::FileSystemAccessEntryPtr>* out_entries);
  void GetEntryFromDataTransferToken(
      ::mojo::PendingRemote<::blink::mojom::FileSystemAccessDataTransferToken> token, ::blink::mojom::FileSystemAccessEntryPtr* out_entry);

 private:
  FileSystemAccessManager* const proxy_;
};




}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_FILE_SYSTEM_ACCESS_FILE_SYSTEM_ACCESS_MANAGER_MOJOM_TEST_UTILS_H_