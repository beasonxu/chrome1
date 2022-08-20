// components/services/filesystem/public/mojom/directory.mojom-blink.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_SERVICES_FILESYSTEM_PUBLIC_MOJOM_DIRECTORY_MOJOM_BLINK_H_
#define COMPONENTS_SERVICES_FILESYSTEM_PUBLIC_MOJOM_DIRECTORY_MOJOM_BLINK_H_

#include <stdint.h>

#include <limits>
#include <type_traits>
#include <utility>

#include "third_party/abseil-cpp/absl/types/optional.h"
#include "mojo/public/cpp/bindings/clone_traits.h"
#include "mojo/public/cpp/bindings/equals_traits.h"
#include "mojo/public/cpp/bindings/lib/serialization.h"
#include "mojo/public/cpp/bindings/struct_ptr.h"
#include "mojo/public/cpp/bindings/struct_traits.h"
#include "mojo/public/cpp/bindings/union_traits.h"

#include "third_party/perfetto/include/perfetto/tracing/traced_value_forward.h"

#include "components/services/filesystem/public/mojom/directory.mojom-shared.h"
#include "components/services/filesystem/public/mojom/directory.mojom-blink-forward.h"
#include "components/services/filesystem/public/mojom/types.mojom-blink-forward.h"
#include "mojo/public/mojom/base/file.mojom-blink.h"
#include "mojo/public/mojom/base/file_error.mojom-blink.h"

#include "mojo/public/cpp/bindings/lib/wtf_clone_equals_util.h"
#include "mojo/public/cpp/bindings/lib/wtf_hash_util.h"
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/raw_ptr_impl_ref_traits.h"






namespace filesystem {
namespace mojom {
namespace blink {

class DirectoryProxy;

template <typename ImplRefTraits>
class DirectoryStub;

class DirectoryRequestValidator;
class DirectoryResponseValidator;


class  Directory
    : public DirectoryInterfaceBase {
 public:
  using IPCStableHashFunction = uint32_t(*)();

  static const char Name_[];
  static IPCStableHashFunction MessageToMethodInfo_(mojo::Message& message);
  static const char* MessageToMethodName_(mojo::Message& message);
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = true;
  static constexpr bool HasUninterruptableMethods_ = false;

  using Base_ = DirectoryInterfaceBase;
  using Proxy_ = DirectoryProxy;

  template <typename ImplRefTraits>
  using Stub_ = DirectoryStub<ImplRefTraits>;

  using RequestValidator_ = DirectoryRequestValidator;
  using ResponseValidator_ = DirectoryResponseValidator;
  enum MethodMinVersions : uint32_t {
    kReadMinVersion = 0,
    kOpenFileHandleMinVersion = 0,
    kOpenFileHandlesMinVersion = 0,
    kOpenDirectoryMinVersion = 0,
    kRenameMinVersion = 0,
    kReplaceMinVersion = 0,
    kDeleteMinVersion = 0,
    kExistsMinVersion = 0,
    kIsWritableMinVersion = 0,
    kFlushMinVersion = 0,
    kStatFileMinVersion = 0,
    kCloneMinVersion = 0,
    kReadEntireFileMinVersion = 0,
    kWriteFileMinVersion = 0,
  };

// crbug.com/1340245 - this causes binary size bloat on Fuchsia, and we're OK
// with not having this data in traces there.
#if !BUILDFLAG(IS_FUCHSIA)
  struct Read_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct OpenFileHandle_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct OpenFileHandles_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct OpenDirectory_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct Rename_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct Replace_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct Delete_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct Exists_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct IsWritable_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct Flush_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct StatFile_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct Clone_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct ReadEntireFile_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct WriteFile_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
#endif // !BUILDFLAG(IS_FUCHSIA)
  virtual ~Directory() = default;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  
  virtual bool Read(::base::File::Error* out_error, absl::optional<WTF::Vector<::filesystem::mojom::blink::DirectoryEntryPtr>>* out_directory_contents);

  using ReadCallback = base::OnceCallback<void(::base::File::Error, absl::optional<WTF::Vector<::filesystem::mojom::blink::DirectoryEntryPtr>>)>;
  
  virtual void Read(ReadCallback callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  
  virtual bool OpenFileHandle(const WTF::String& path, uint32_t open_flags, ::base::File::Error* out_error, ::base::File* out_file_handle);

  using OpenFileHandleCallback = base::OnceCallback<void(::base::File::Error, ::base::File)>;
  
  virtual void OpenFileHandle(const WTF::String& path, uint32_t open_flags, OpenFileHandleCallback callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  
  virtual bool OpenFileHandles(WTF::Vector<FileOpenDetailsPtr> files, WTF::Vector<FileOpenResultPtr>* out_results);

  using OpenFileHandlesCallback = base::OnceCallback<void(WTF::Vector<FileOpenResultPtr>)>;
  
  virtual void OpenFileHandles(WTF::Vector<FileOpenDetailsPtr> files, OpenFileHandlesCallback callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  
  virtual bool OpenDirectory(const WTF::String& path, ::mojo::PendingReceiver<Directory> directory, uint32_t open_flags, ::base::File::Error* out_error);

  using OpenDirectoryCallback = base::OnceCallback<void(::base::File::Error)>;
  
  virtual void OpenDirectory(const WTF::String& path, ::mojo::PendingReceiver<Directory> directory, uint32_t open_flags, OpenDirectoryCallback callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  
  virtual bool Rename(const WTF::String& path, const WTF::String& new_path, ::base::File::Error* out_error);

  using RenameCallback = base::OnceCallback<void(::base::File::Error)>;
  
  virtual void Rename(const WTF::String& path, const WTF::String& new_path, RenameCallback callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  
  virtual bool Replace(const WTF::String& path, const WTF::String& new_path, ::base::File::Error* out_error);

  using ReplaceCallback = base::OnceCallback<void(::base::File::Error)>;
  
  virtual void Replace(const WTF::String& path, const WTF::String& new_path, ReplaceCallback callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  
  virtual bool Delete(const WTF::String& path, uint32_t delete_flags, ::base::File::Error* out_error);

  using DeleteCallback = base::OnceCallback<void(::base::File::Error)>;
  
  virtual void Delete(const WTF::String& path, uint32_t delete_flags, DeleteCallback callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  
  virtual bool Exists(const WTF::String& path, ::base::File::Error* out_error, bool* out_exists);

  using ExistsCallback = base::OnceCallback<void(::base::File::Error, bool)>;
  
  virtual void Exists(const WTF::String& path, ExistsCallback callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  
  virtual bool IsWritable(const WTF::String& path, ::base::File::Error* out_error, bool* out_is_writable);

  using IsWritableCallback = base::OnceCallback<void(::base::File::Error, bool)>;
  
  virtual void IsWritable(const WTF::String& path, IsWritableCallback callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  
  virtual bool Flush(::base::File::Error* out_error);

  using FlushCallback = base::OnceCallback<void(::base::File::Error)>;
  
  virtual void Flush(FlushCallback callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  
  virtual bool StatFile(const WTF::String& path, ::base::File::Error* out_error, ::filesystem::mojom::blink::FileInformationPtr* out_file_information);

  using StatFileCallback = base::OnceCallback<void(::base::File::Error, ::filesystem::mojom::blink::FileInformationPtr)>;
  
  virtual void StatFile(const WTF::String& path, StatFileCallback callback) = 0;

  
  virtual void Clone(::mojo::PendingReceiver<Directory> directory) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  
  virtual bool ReadEntireFile(const WTF::String& path, ::base::File::Error* out_error, WTF::Vector<uint8_t>* out_data);

  using ReadEntireFileCallback = base::OnceCallback<void(::base::File::Error, const WTF::Vector<uint8_t>&)>;
  
  virtual void ReadEntireFile(const WTF::String& path, ReadEntireFileCallback callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  
  virtual bool WriteFile(const WTF::String& path, const WTF::Vector<uint8_t>& data, ::base::File::Error* out_error);

  using WriteFileCallback = base::OnceCallback<void(::base::File::Error)>;
  
  virtual void WriteFile(const WTF::String& path, const WTF::Vector<uint8_t>& data, WriteFileCallback callback) = 0;
};



class  DirectoryProxy
    : public Directory {
 public:
  using InterfaceType = Directory;

  explicit DirectoryProxy(mojo::MessageReceiverWithResponder* receiver);
  
  bool Read(::base::File::Error* out_error, absl::optional<WTF::Vector<::filesystem::mojom::blink::DirectoryEntryPtr>>* out_directory_contents) final;
  
  void Read(ReadCallback callback) final;
  
  bool OpenFileHandle(const WTF::String& path, uint32_t open_flags, ::base::File::Error* out_error, ::base::File* out_file_handle) final;
  
  void OpenFileHandle(const WTF::String& path, uint32_t open_flags, OpenFileHandleCallback callback) final;
  
  bool OpenFileHandles(WTF::Vector<FileOpenDetailsPtr> files, WTF::Vector<FileOpenResultPtr>* out_results) final;
  
  void OpenFileHandles(WTF::Vector<FileOpenDetailsPtr> files, OpenFileHandlesCallback callback) final;
  
  bool OpenDirectory(const WTF::String& path, ::mojo::PendingReceiver<Directory> directory, uint32_t open_flags, ::base::File::Error* out_error) final;
  
  void OpenDirectory(const WTF::String& path, ::mojo::PendingReceiver<Directory> directory, uint32_t open_flags, OpenDirectoryCallback callback) final;
  
  bool Rename(const WTF::String& path, const WTF::String& new_path, ::base::File::Error* out_error) final;
  
  void Rename(const WTF::String& path, const WTF::String& new_path, RenameCallback callback) final;
  
  bool Replace(const WTF::String& path, const WTF::String& new_path, ::base::File::Error* out_error) final;
  
  void Replace(const WTF::String& path, const WTF::String& new_path, ReplaceCallback callback) final;
  
  bool Delete(const WTF::String& path, uint32_t delete_flags, ::base::File::Error* out_error) final;
  
  void Delete(const WTF::String& path, uint32_t delete_flags, DeleteCallback callback) final;
  
  bool Exists(const WTF::String& path, ::base::File::Error* out_error, bool* out_exists) final;
  
  void Exists(const WTF::String& path, ExistsCallback callback) final;
  
  bool IsWritable(const WTF::String& path, ::base::File::Error* out_error, bool* out_is_writable) final;
  
  void IsWritable(const WTF::String& path, IsWritableCallback callback) final;
  
  bool Flush(::base::File::Error* out_error) final;
  
  void Flush(FlushCallback callback) final;
  
  bool StatFile(const WTF::String& path, ::base::File::Error* out_error, ::filesystem::mojom::blink::FileInformationPtr* out_file_information) final;
  
  void StatFile(const WTF::String& path, StatFileCallback callback) final;
  
  void Clone(::mojo::PendingReceiver<Directory> directory) final;
  
  bool ReadEntireFile(const WTF::String& path, ::base::File::Error* out_error, WTF::Vector<uint8_t>* out_data) final;
  
  void ReadEntireFile(const WTF::String& path, ReadEntireFileCallback callback) final;
  
  bool WriteFile(const WTF::String& path, const WTF::Vector<uint8_t>& data, ::base::File::Error* out_error) final;
  
  void WriteFile(const WTF::String& path, const WTF::Vector<uint8_t>& data, WriteFileCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  DirectoryStubDispatch {
 public:
  static bool Accept(Directory* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      Directory* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<Directory>>
class DirectoryStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  DirectoryStub() = default;
  ~DirectoryStub() override = default;

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return DirectoryStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return DirectoryStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  DirectoryRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  DirectoryResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





class  FileOpenDetails {
 public:
  template <typename T>
  using EnableIfSame = std::enable_if_t<std::is_same<FileOpenDetails, T>::value>;
  using DataView = FileOpenDetailsDataView;
  using Data_ = internal::FileOpenDetails_Data;

  template <typename... Args>
  static FileOpenDetailsPtr New(Args&&... args) {
    return FileOpenDetailsPtr(
        absl::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static FileOpenDetailsPtr From(const U& u) {
    return mojo::TypeConverter<FileOpenDetailsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, FileOpenDetails>::Convert(*this);
  }


  FileOpenDetails();

  FileOpenDetails(
      const WTF::String& path,
      uint32_t open_flags);


  ~FileOpenDetails();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = FileOpenDetailsPtr>
  FileOpenDetailsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T, FileOpenDetails::EnableIfSame<T>* = nullptr>
  bool Equals(const T& other) const;

  template <typename T, FileOpenDetails::EnableIfSame<T>* = nullptr>
  bool operator==(const T& rhs) const { return Equals(rhs); }
  size_t Hash(size_t seed) const;
  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        FileOpenDetails::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        FileOpenDetails::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::FileOpenDetails_UnserializedMessageContext<
            UserType, FileOpenDetails::DataView>>(0, 0, std::move(input)),
        MOJO_CREATE_MESSAGE_FLAG_NONE);
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    mojo::Message message;
    return mojo::internal::DeserializeImpl<FileOpenDetails::DataView>(
        message, data, data_num_bytes, output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return FileOpenDetails::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::FileOpenDetails_UnserializedMessageContext<
            UserType, FileOpenDetails::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<FileOpenDetails::DataView>(
        input, input.payload(), input.payload_num_bytes(), output, Validate);
  }

  
  WTF::String path;
  
  uint32_t open_flags;

  // Serialise this struct into a trace.
  void WriteIntoTrace(perfetto::TracedValue traced_context) const;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

// The comparison operators are templates, so they are only instantiated if they
// are used. Thus, the bindings generator does not need to know whether
// comparison operators are available for members.
template <typename T, FileOpenDetails::EnableIfSame<T>* = nullptr>
bool operator<(const T& lhs, const T& rhs);

template <typename T, FileOpenDetails::EnableIfSame<T>* = nullptr>
bool operator<=(const T& lhs, const T& rhs) {
  return !(rhs < lhs);
}

template <typename T, FileOpenDetails::EnableIfSame<T>* = nullptr>
bool operator>(const T& lhs, const T& rhs) {
  return rhs < lhs;
}

template <typename T, FileOpenDetails::EnableIfSame<T>* = nullptr>
bool operator>=(const T& lhs, const T& rhs) {
  return !(lhs < rhs);
}









class  FileOpenResult {
 public:
  template <typename T>
  using EnableIfSame = std::enable_if_t<std::is_same<FileOpenResult, T>::value>;
  using DataView = FileOpenResultDataView;
  using Data_ = internal::FileOpenResult_Data;

  template <typename... Args>
  static FileOpenResultPtr New(Args&&... args) {
    return FileOpenResultPtr(
        absl::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static FileOpenResultPtr From(const U& u) {
    return mojo::TypeConverter<FileOpenResultPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, FileOpenResult>::Convert(*this);
  }


  FileOpenResult();

  FileOpenResult(
      const WTF::String& path,
      ::base::File::Error error,
      ::base::File file_handle);

FileOpenResult(const FileOpenResult&) = delete;
FileOpenResult& operator=(const FileOpenResult&) = delete;

  ~FileOpenResult();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = FileOpenResultPtr>
  FileOpenResultPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T, FileOpenResult::EnableIfSame<T>* = nullptr>
  bool Equals(const T& other) const;

  template <typename T, FileOpenResult::EnableIfSame<T>* = nullptr>
  bool operator==(const T& rhs) const { return Equals(rhs); }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        FileOpenResult::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::FileOpenResult_UnserializedMessageContext<
            UserType, FileOpenResult::DataView>>(0, 0, std::move(input)),
        MOJO_CREATE_MESSAGE_FLAG_NONE);
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    mojo::Message message;
    return mojo::internal::DeserializeImpl<FileOpenResult::DataView>(
        message, data, data_num_bytes, output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return FileOpenResult::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::FileOpenResult_UnserializedMessageContext<
            UserType, FileOpenResult::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<FileOpenResult::DataView>(
        input, input.payload(), input.payload_num_bytes(), output, Validate);
  }

  
  WTF::String path;
  
  ::base::File::Error error;
  
  ::base::File file_handle;

  // Serialise this struct into a trace.
  void WriteIntoTrace(perfetto::TracedValue traced_context) const;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

// The comparison operators are templates, so they are only instantiated if they
// are used. Thus, the bindings generator does not need to know whether
// comparison operators are available for members.
template <typename T, FileOpenResult::EnableIfSame<T>* = nullptr>
bool operator<(const T& lhs, const T& rhs);

template <typename T, FileOpenResult::EnableIfSame<T>* = nullptr>
bool operator<=(const T& lhs, const T& rhs) {
  return !(rhs < lhs);
}

template <typename T, FileOpenResult::EnableIfSame<T>* = nullptr>
bool operator>(const T& lhs, const T& rhs) {
  return rhs < lhs;
}

template <typename T, FileOpenResult::EnableIfSame<T>* = nullptr>
bool operator>=(const T& lhs, const T& rhs) {
  return !(lhs < rhs);
}

template <typename StructPtrType>
FileOpenDetailsPtr FileOpenDetails::Clone() const {
  return New(
      mojo::Clone(path),
      mojo::Clone(open_flags)
  );
}

template <typename T, FileOpenDetails::EnableIfSame<T>*>
bool FileOpenDetails::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->path, other_struct.path))
    return false;
  if (!mojo::Equals(this->open_flags, other_struct.open_flags))
    return false;
  return true;
}

template <typename T, FileOpenDetails::EnableIfSame<T>*>
bool operator<(const T& lhs, const T& rhs) {
  if (lhs.path < rhs.path)
    return true;
  if (rhs.path < lhs.path)
    return false;
  if (lhs.open_flags < rhs.open_flags)
    return true;
  if (rhs.open_flags < lhs.open_flags)
    return false;
  return false;
}
template <typename StructPtrType>
FileOpenResultPtr FileOpenResult::Clone() const {
  return New(
      mojo::Clone(path),
      mojo::Clone(error),
      mojo::Clone(file_handle)
  );
}

template <typename T, FileOpenResult::EnableIfSame<T>*>
bool FileOpenResult::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->path, other_struct.path))
    return false;
  if (!mojo::Equals(this->error, other_struct.error))
    return false;
  if (!mojo::Equals(this->file_handle, other_struct.file_handle))
    return false;
  return true;
}

template <typename T, FileOpenResult::EnableIfSame<T>*>
bool operator<(const T& lhs, const T& rhs) {
  if (lhs.path < rhs.path)
    return true;
  if (rhs.path < lhs.path)
    return false;
  if (lhs.error < rhs.error)
    return true;
  if (rhs.error < lhs.error)
    return false;
  if (lhs.file_handle < rhs.file_handle)
    return true;
  if (rhs.file_handle < lhs.file_handle)
    return false;
  return false;
}


}  // namespace blink
}  // namespace mojom
}  // namespace filesystem

namespace mojo {


template <>
struct  StructTraits<::filesystem::mojom::blink::FileOpenDetails::DataView,
                                         ::filesystem::mojom::blink::FileOpenDetailsPtr> {
  static bool IsNull(const ::filesystem::mojom::blink::FileOpenDetailsPtr& input) { return !input; }
  static void SetToNull(::filesystem::mojom::blink::FileOpenDetailsPtr* output) { output->reset(); }

  static const decltype(::filesystem::mojom::blink::FileOpenDetails::path)& path(
      const ::filesystem::mojom::blink::FileOpenDetailsPtr& input) {
    return input->path;
  }

  static decltype(::filesystem::mojom::blink::FileOpenDetails::open_flags) open_flags(
      const ::filesystem::mojom::blink::FileOpenDetailsPtr& input) {
    return input->open_flags;
  }

  static bool Read(::filesystem::mojom::blink::FileOpenDetails::DataView input, ::filesystem::mojom::blink::FileOpenDetailsPtr* output);
};


template <>
struct  StructTraits<::filesystem::mojom::blink::FileOpenResult::DataView,
                                         ::filesystem::mojom::blink::FileOpenResultPtr> {
  static bool IsNull(const ::filesystem::mojom::blink::FileOpenResultPtr& input) { return !input; }
  static void SetToNull(::filesystem::mojom::blink::FileOpenResultPtr* output) { output->reset(); }

  static const decltype(::filesystem::mojom::blink::FileOpenResult::path)& path(
      const ::filesystem::mojom::blink::FileOpenResultPtr& input) {
    return input->path;
  }

  static decltype(::filesystem::mojom::blink::FileOpenResult::error) error(
      const ::filesystem::mojom::blink::FileOpenResultPtr& input) {
    return input->error;
  }

  static  decltype(::filesystem::mojom::blink::FileOpenResult::file_handle)& file_handle(
       ::filesystem::mojom::blink::FileOpenResultPtr& input) {
    return input->file_handle;
  }

  static bool Read(::filesystem::mojom::blink::FileOpenResult::DataView input, ::filesystem::mojom::blink::FileOpenResultPtr* output);
};

}  // namespace mojo

#endif  // COMPONENTS_SERVICES_FILESYSTEM_PUBLIC_MOJOM_DIRECTORY_MOJOM_BLINK_H_