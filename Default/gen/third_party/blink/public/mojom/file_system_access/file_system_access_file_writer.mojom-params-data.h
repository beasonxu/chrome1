// third_party/blink/public/mojom/file_system_access/file_system_access_file_writer.mojom-params-data.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_FILE_SYSTEM_ACCESS_FILE_SYSTEM_ACCESS_FILE_WRITER_MOJOM_PARAMS_DATA_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_FILE_SYSTEM_ACCESS_FILE_SYSTEM_ACCESS_FILE_WRITER_MOJOM_PARAMS_DATA_H_

#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#endif
namespace blink {
namespace mojom {
namespace internal {

class ValidationContext;
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) FileSystemAccessFileWriter_Write_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint64_t offset;
  mojo::internal::Handle_Data stream;
  uint8_t padfinal_[4];

 private:
  friend class mojo::internal::MessageFragment<FileSystemAccessFileWriter_Write_Params_Data>;

  FileSystemAccessFileWriter_Write_Params_Data();
  ~FileSystemAccessFileWriter_Write_Params_Data() = delete;
};
static_assert(sizeof(FileSystemAccessFileWriter_Write_Params_Data) == 24,
              "Bad sizeof(FileSystemAccessFileWriter_Write_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) FileSystemAccessFileWriter_Write_ResponseParams_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::blink::mojom::internal::FileSystemAccessError_Data> result;
  uint64_t bytes_written;

 private:
  friend class mojo::internal::MessageFragment<FileSystemAccessFileWriter_Write_ResponseParams_Data>;

  FileSystemAccessFileWriter_Write_ResponseParams_Data();
  ~FileSystemAccessFileWriter_Write_ResponseParams_Data() = delete;
};
static_assert(sizeof(FileSystemAccessFileWriter_Write_ResponseParams_Data) == 24,
              "Bad sizeof(FileSystemAccessFileWriter_Write_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) FileSystemAccessFileWriter_Truncate_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint64_t length;

 private:
  friend class mojo::internal::MessageFragment<FileSystemAccessFileWriter_Truncate_Params_Data>;

  FileSystemAccessFileWriter_Truncate_Params_Data();
  ~FileSystemAccessFileWriter_Truncate_Params_Data() = delete;
};
static_assert(sizeof(FileSystemAccessFileWriter_Truncate_Params_Data) == 16,
              "Bad sizeof(FileSystemAccessFileWriter_Truncate_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) FileSystemAccessFileWriter_Truncate_ResponseParams_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::blink::mojom::internal::FileSystemAccessError_Data> result;

 private:
  friend class mojo::internal::MessageFragment<FileSystemAccessFileWriter_Truncate_ResponseParams_Data>;

  FileSystemAccessFileWriter_Truncate_ResponseParams_Data();
  ~FileSystemAccessFileWriter_Truncate_ResponseParams_Data() = delete;
};
static_assert(sizeof(FileSystemAccessFileWriter_Truncate_ResponseParams_Data) == 16,
              "Bad sizeof(FileSystemAccessFileWriter_Truncate_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) FileSystemAccessFileWriter_Close_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  friend class mojo::internal::MessageFragment<FileSystemAccessFileWriter_Close_Params_Data>;

  FileSystemAccessFileWriter_Close_Params_Data();
  ~FileSystemAccessFileWriter_Close_Params_Data() = delete;
};
static_assert(sizeof(FileSystemAccessFileWriter_Close_Params_Data) == 8,
              "Bad sizeof(FileSystemAccessFileWriter_Close_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) FileSystemAccessFileWriter_Close_ResponseParams_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::blink::mojom::internal::FileSystemAccessError_Data> result;

 private:
  friend class mojo::internal::MessageFragment<FileSystemAccessFileWriter_Close_ResponseParams_Data>;

  FileSystemAccessFileWriter_Close_ResponseParams_Data();
  ~FileSystemAccessFileWriter_Close_ResponseParams_Data() = delete;
};
static_assert(sizeof(FileSystemAccessFileWriter_Close_ResponseParams_Data) == 16,
              "Bad sizeof(FileSystemAccessFileWriter_Close_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) FileSystemAccessFileWriter_Abort_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  friend class mojo::internal::MessageFragment<FileSystemAccessFileWriter_Abort_Params_Data>;

  FileSystemAccessFileWriter_Abort_Params_Data();
  ~FileSystemAccessFileWriter_Abort_Params_Data() = delete;
};
static_assert(sizeof(FileSystemAccessFileWriter_Abort_Params_Data) == 8,
              "Bad sizeof(FileSystemAccessFileWriter_Abort_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) FileSystemAccessFileWriter_Abort_ResponseParams_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::blink::mojom::internal::FileSystemAccessError_Data> result;

 private:
  friend class mojo::internal::MessageFragment<FileSystemAccessFileWriter_Abort_ResponseParams_Data>;

  FileSystemAccessFileWriter_Abort_ResponseParams_Data();
  ~FileSystemAccessFileWriter_Abort_ResponseParams_Data() = delete;
};
static_assert(sizeof(FileSystemAccessFileWriter_Abort_ResponseParams_Data) == 16,
              "Bad sizeof(FileSystemAccessFileWriter_Abort_ResponseParams_Data)");

}  // namespace internal


class FileSystemAccessFileWriter_Write_ParamsDataView {
 public:
  FileSystemAccessFileWriter_Write_ParamsDataView() = default;

  FileSystemAccessFileWriter_Write_ParamsDataView(
      internal::FileSystemAccessFileWriter_Write_Params_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  uint64_t offset() const {
    return data_->offset;
  }
  mojo::ScopedDataPipeConsumerHandle TakeStream() {
    mojo::ScopedDataPipeConsumerHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedDataPipeConsumerHandle>(
            &data_->stream, &result, message_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::FileSystemAccessFileWriter_Write_Params_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



class FileSystemAccessFileWriter_Write_ResponseParamsDataView {
 public:
  FileSystemAccessFileWriter_Write_ResponseParamsDataView() = default;

  FileSystemAccessFileWriter_Write_ResponseParamsDataView(
      internal::FileSystemAccessFileWriter_Write_ResponseParams_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  inline void GetResultDataView(
      ::blink::mojom::FileSystemAccessErrorDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadResult(UserType* output) {
    
    auto* pointer = data_->result.Get();
    return mojo::internal::Deserialize<::blink::mojom::FileSystemAccessErrorDataView>(
        pointer, output, message_);
  }
  uint64_t bytes_written() const {
    return data_->bytes_written;
  }
 private:
  internal::FileSystemAccessFileWriter_Write_ResponseParams_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



class FileSystemAccessFileWriter_Truncate_ParamsDataView {
 public:
  FileSystemAccessFileWriter_Truncate_ParamsDataView() = default;

  FileSystemAccessFileWriter_Truncate_ParamsDataView(
      internal::FileSystemAccessFileWriter_Truncate_Params_Data* data,
      mojo::Message* message)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint64_t length() const {
    return data_->length;
  }
 private:
  internal::FileSystemAccessFileWriter_Truncate_Params_Data* data_ = nullptr;
};



class FileSystemAccessFileWriter_Truncate_ResponseParamsDataView {
 public:
  FileSystemAccessFileWriter_Truncate_ResponseParamsDataView() = default;

  FileSystemAccessFileWriter_Truncate_ResponseParamsDataView(
      internal::FileSystemAccessFileWriter_Truncate_ResponseParams_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  inline void GetResultDataView(
      ::blink::mojom::FileSystemAccessErrorDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadResult(UserType* output) {
    
    auto* pointer = data_->result.Get();
    return mojo::internal::Deserialize<::blink::mojom::FileSystemAccessErrorDataView>(
        pointer, output, message_);
  }
 private:
  internal::FileSystemAccessFileWriter_Truncate_ResponseParams_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



class FileSystemAccessFileWriter_Close_ParamsDataView {
 public:
  FileSystemAccessFileWriter_Close_ParamsDataView() = default;

  FileSystemAccessFileWriter_Close_ParamsDataView(
      internal::FileSystemAccessFileWriter_Close_Params_Data* data,
      mojo::Message* message)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::FileSystemAccessFileWriter_Close_Params_Data* data_ = nullptr;
};



class FileSystemAccessFileWriter_Close_ResponseParamsDataView {
 public:
  FileSystemAccessFileWriter_Close_ResponseParamsDataView() = default;

  FileSystemAccessFileWriter_Close_ResponseParamsDataView(
      internal::FileSystemAccessFileWriter_Close_ResponseParams_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  inline void GetResultDataView(
      ::blink::mojom::FileSystemAccessErrorDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadResult(UserType* output) {
    
    auto* pointer = data_->result.Get();
    return mojo::internal::Deserialize<::blink::mojom::FileSystemAccessErrorDataView>(
        pointer, output, message_);
  }
 private:
  internal::FileSystemAccessFileWriter_Close_ResponseParams_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



class FileSystemAccessFileWriter_Abort_ParamsDataView {
 public:
  FileSystemAccessFileWriter_Abort_ParamsDataView() = default;

  FileSystemAccessFileWriter_Abort_ParamsDataView(
      internal::FileSystemAccessFileWriter_Abort_Params_Data* data,
      mojo::Message* message)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::FileSystemAccessFileWriter_Abort_Params_Data* data_ = nullptr;
};



class FileSystemAccessFileWriter_Abort_ResponseParamsDataView {
 public:
  FileSystemAccessFileWriter_Abort_ResponseParamsDataView() = default;

  FileSystemAccessFileWriter_Abort_ResponseParamsDataView(
      internal::FileSystemAccessFileWriter_Abort_ResponseParams_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  inline void GetResultDataView(
      ::blink::mojom::FileSystemAccessErrorDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadResult(UserType* output) {
    
    auto* pointer = data_->result.Get();
    return mojo::internal::Deserialize<::blink::mojom::FileSystemAccessErrorDataView>(
        pointer, output, message_);
  }
 private:
  internal::FileSystemAccessFileWriter_Abort_ResponseParams_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};




inline void FileSystemAccessFileWriter_Write_ResponseParamsDataView::GetResultDataView(
    ::blink::mojom::FileSystemAccessErrorDataView* output) {
  auto pointer = data_->result.Get();
  *output = ::blink::mojom::FileSystemAccessErrorDataView(pointer, message_);
}




inline void FileSystemAccessFileWriter_Truncate_ResponseParamsDataView::GetResultDataView(
    ::blink::mojom::FileSystemAccessErrorDataView* output) {
  auto pointer = data_->result.Get();
  *output = ::blink::mojom::FileSystemAccessErrorDataView(pointer, message_);
}




inline void FileSystemAccessFileWriter_Close_ResponseParamsDataView::GetResultDataView(
    ::blink::mojom::FileSystemAccessErrorDataView* output) {
  auto pointer = data_->result.Get();
  *output = ::blink::mojom::FileSystemAccessErrorDataView(pointer, message_);
}




inline void FileSystemAccessFileWriter_Abort_ResponseParamsDataView::GetResultDataView(
    ::blink::mojom::FileSystemAccessErrorDataView* output) {
  auto pointer = data_->result.Get();
  *output = ::blink::mojom::FileSystemAccessErrorDataView(pointer, message_);
}

}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#endif

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_FILE_SYSTEM_ACCESS_FILE_SYSTEM_ACCESS_FILE_WRITER_MOJOM_PARAMS_DATA_H_