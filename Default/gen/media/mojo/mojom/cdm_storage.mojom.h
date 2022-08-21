// media/mojo/mojom/cdm_storage.mojom.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_MOJOM_CDM_STORAGE_MOJOM_H_
#define MEDIA_MOJO_MOJOM_CDM_STORAGE_MOJOM_H_

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

#include "media/mojo/mojom/cdm_storage.mojom-shared.h"
#include "media/mojo/mojom/cdm_storage.mojom-forward.h"
#include "mojo/public/mojom/base/file.mojom-forward.h"
#include <string>
#include <vector>

#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/raw_ptr_impl_ref_traits.h"






namespace media {
namespace mojom {

class CdmStorageProxy;

template <typename ImplRefTraits>
class CdmStorageStub;

class CdmStorageRequestValidator;
class CdmStorageResponseValidator;


class  CdmStorage
    : public CdmStorageInterfaceBase {
 public:
  using IPCStableHashFunction = uint32_t(*)();

  static const char Name_[];
  static IPCStableHashFunction MessageToMethodInfo_(mojo::Message& message);
  static const char* MessageToMethodName_(mojo::Message& message);
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = true;
  static constexpr bool HasSyncMethods_ = false;
  static constexpr bool HasUninterruptableMethods_ = false;

  using Base_ = CdmStorageInterfaceBase;
  using Proxy_ = CdmStorageProxy;

  template <typename ImplRefTraits>
  using Stub_ = CdmStorageStub<ImplRefTraits>;

  using RequestValidator_ = CdmStorageRequestValidator;
  using ResponseValidator_ = CdmStorageResponseValidator;
  enum MethodMinVersions : uint32_t {
    kOpenMinVersion = 0,
  };

// crbug.com/1340245 - this causes binary size bloat on Fuchsia, and we're OK
// with not having this data in traces there.
#if !BUILDFLAG(IS_FUCHSIA)
  struct Open_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
#endif // !BUILDFLAG(IS_FUCHSIA)
  
  using Status = CdmStorage_Status;
  virtual ~CdmStorage() = default;


  using OpenCallback = base::OnceCallback<void(CdmStorage::Status, ::mojo::PendingAssociatedRemote<CdmFile>)>;
  
  virtual void Open(const std::string& file_name, OpenCallback callback) = 0;
};

class CdmFileProxy;

template <typename ImplRefTraits>
class CdmFileStub;

class CdmFileRequestValidator;
class CdmFileResponseValidator;


class  CdmFile
    : public CdmFileInterfaceBase {
 public:
  using IPCStableHashFunction = uint32_t(*)();

  static const char Name_[];
  static IPCStableHashFunction MessageToMethodInfo_(mojo::Message& message);
  static const char* MessageToMethodName_(mojo::Message& message);
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;
  static constexpr bool HasUninterruptableMethods_ = false;

  using Base_ = CdmFileInterfaceBase;
  using Proxy_ = CdmFileProxy;

  template <typename ImplRefTraits>
  using Stub_ = CdmFileStub<ImplRefTraits>;

  using RequestValidator_ = CdmFileRequestValidator;
  using ResponseValidator_ = CdmFileResponseValidator;
  enum MethodMinVersions : uint32_t {
    kReadMinVersion = 0,
    kWriteMinVersion = 0,
  };

// crbug.com/1340245 - this causes binary size bloat on Fuchsia, and we're OK
// with not having this data in traces there.
#if !BUILDFLAG(IS_FUCHSIA)
  struct Read_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct Write_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
#endif // !BUILDFLAG(IS_FUCHSIA)
  
  using Status = CdmFile_Status;
  virtual ~CdmFile() = default;


  using ReadCallback = base::OnceCallback<void(CdmFile::Status, const std::vector<uint8_t>&)>;
  
  virtual void Read(ReadCallback callback) = 0;


  using WriteCallback = base::OnceCallback<void(CdmFile::Status)>;
  
  virtual void Write(const std::vector<uint8_t>& data, WriteCallback callback) = 0;
};



class  CdmStorageProxy
    : public CdmStorage {
 public:
  using InterfaceType = CdmStorage;

  explicit CdmStorageProxy(mojo::MessageReceiverWithResponder* receiver);
  
  void Open(const std::string& file_name, OpenCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};



class  CdmFileProxy
    : public CdmFile {
 public:
  using InterfaceType = CdmFile;

  explicit CdmFileProxy(mojo::MessageReceiverWithResponder* receiver);
  
  void Read(ReadCallback callback) final;
  
  void Write(const std::vector<uint8_t>& data, WriteCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  CdmStorageStubDispatch {
 public:
  static bool Accept(CdmStorage* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      CdmStorage* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<CdmStorage>>
class CdmStorageStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  CdmStorageStub() = default;
  ~CdmStorageStub() override = default;

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return CdmStorageStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return CdmStorageStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  CdmFileStubDispatch {
 public:
  static bool Accept(CdmFile* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      CdmFile* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<CdmFile>>
class CdmFileStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  CdmFileStub() = default;
  ~CdmFileStub() override = default;

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return CdmFileStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return CdmFileStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  CdmStorageRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  CdmFileRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  CdmStorageResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  CdmFileResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace media

namespace mojo {

}  // namespace mojo

#endif  // MEDIA_MOJO_MOJOM_CDM_STORAGE_MOJOM_H_