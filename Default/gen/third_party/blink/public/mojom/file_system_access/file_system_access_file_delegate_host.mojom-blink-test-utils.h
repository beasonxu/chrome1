// third_party/blink/public/mojom/file_system_access/file_system_access_file_delegate_host.mojom-blink-test-utils.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_FILE_SYSTEM_ACCESS_FILE_SYSTEM_ACCESS_FILE_DELEGATE_HOST_MOJOM_BLINK_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_FILE_SYSTEM_ACCESS_FILE_SYSTEM_ACCESS_FILE_DELEGATE_HOST_MOJOM_BLINK_TEST_UTILS_H_

#include "third_party/blink/public/mojom/file_system_access/file_system_access_file_delegate_host.mojom-blink.h"
#include "third_party/blink/renderer/platform/platform_export.h"


namespace blink {
namespace mojom {
namespace blink {


class PLATFORM_EXPORT FileSystemAccessFileDelegateHostInterceptorForTesting : public FileSystemAccessFileDelegateHost {
  virtual FileSystemAccessFileDelegateHost* GetForwardingInterface() = 0;
  void Read(int64_t offset, int32_t bytes_to_read, ReadCallback callback) override;
  void Write(int64_t offset, ::mojo::ScopedDataPipeConsumerHandle data, WriteCallback callback) override;
  void GetLength(GetLengthCallback callback) override;
  void SetLength(int64_t length, SetLengthCallback callback) override;
};
class PLATFORM_EXPORT FileSystemAccessFileDelegateHostAsyncWaiter {
 public:
  explicit FileSystemAccessFileDelegateHostAsyncWaiter(FileSystemAccessFileDelegateHost* proxy);

  FileSystemAccessFileDelegateHostAsyncWaiter(const FileSystemAccessFileDelegateHostAsyncWaiter&) = delete;
  FileSystemAccessFileDelegateHostAsyncWaiter& operator=(const FileSystemAccessFileDelegateHostAsyncWaiter&) = delete;

  ~FileSystemAccessFileDelegateHostAsyncWaiter();
  void Read(
      int64_t offset, int32_t bytes_to_read, absl::optional<::mojo_base::BigBuffer>* out_data, ::base::File::Error* out_error, int32_t* out_bytes_read);
  void Write(
      int64_t offset, ::mojo::ScopedDataPipeConsumerHandle data, ::base::File::Error* out_error, int32_t* out_bytes_written);
  void GetLength(
      ::base::File::Error* out_error, uint64_t* out_length);
  void SetLength(
      int64_t length, ::base::File::Error* out_error);

 private:
  FileSystemAccessFileDelegateHost* const proxy_;
};




}  // namespace blink
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_FILE_SYSTEM_ACCESS_FILE_SYSTEM_ACCESS_FILE_DELEGATE_HOST_MOJOM_BLINK_TEST_UTILS_H_