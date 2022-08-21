// third_party/blink/public/mojom/file_system_access/file_system_access_data_transfer_token.mojom.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_FILE_SYSTEM_ACCESS_FILE_SYSTEM_ACCESS_DATA_TRANSFER_TOKEN_MOJOM_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_FILE_SYSTEM_ACCESS_FILE_SYSTEM_ACCESS_DATA_TRANSFER_TOKEN_MOJOM_H_

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

#include "third_party/blink/public/mojom/file_system_access/file_system_access_data_transfer_token.mojom-shared.h"
#include "third_party/blink/public/mojom/file_system_access/file_system_access_data_transfer_token.mojom-forward.h"
#include "mojo/public/mojom/base/unguessable_token.mojom.h"
#include <string>
#include <vector>

#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/raw_ptr_impl_ref_traits.h"


#include "third_party/blink/public/common/common_export.h"




namespace blink {
namespace mojom {

class FileSystemAccessDataTransferTokenProxy;

template <typename ImplRefTraits>
class FileSystemAccessDataTransferTokenStub;

class FileSystemAccessDataTransferTokenRequestValidator;
class FileSystemAccessDataTransferTokenResponseValidator;


class BLINK_COMMON_EXPORT FileSystemAccessDataTransferToken
    : public FileSystemAccessDataTransferTokenInterfaceBase {
 public:
  using IPCStableHashFunction = uint32_t(*)();

  static const char Name_[];
  static IPCStableHashFunction MessageToMethodInfo_(mojo::Message& message);
  static const char* MessageToMethodName_(mojo::Message& message);
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;
  static constexpr bool HasUninterruptableMethods_ = false;

  using Base_ = FileSystemAccessDataTransferTokenInterfaceBase;
  using Proxy_ = FileSystemAccessDataTransferTokenProxy;

  template <typename ImplRefTraits>
  using Stub_ = FileSystemAccessDataTransferTokenStub<ImplRefTraits>;

  using RequestValidator_ = FileSystemAccessDataTransferTokenRequestValidator;
  using ResponseValidator_ = FileSystemAccessDataTransferTokenResponseValidator;
  enum MethodMinVersions : uint32_t {
    kGetInternalIdMinVersion = 0,
    kCloneMinVersion = 0,
  };

// crbug.com/1340245 - this causes binary size bloat on Fuchsia, and we're OK
// with not having this data in traces there.
#if !BUILDFLAG(IS_FUCHSIA)
  struct GetInternalId_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct Clone_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
#endif // !BUILDFLAG(IS_FUCHSIA)
  virtual ~FileSystemAccessDataTransferToken() = default;


  using GetInternalIdCallback = base::OnceCallback<void(const ::base::UnguessableToken&)>;
  
  virtual void GetInternalId(GetInternalIdCallback callback) = 0;

  
  virtual void Clone(::mojo::PendingReceiver<FileSystemAccessDataTransferToken> token_clone) = 0;
};



class BLINK_COMMON_EXPORT FileSystemAccessDataTransferTokenProxy
    : public FileSystemAccessDataTransferToken {
 public:
  using InterfaceType = FileSystemAccessDataTransferToken;

  explicit FileSystemAccessDataTransferTokenProxy(mojo::MessageReceiverWithResponder* receiver);
  
  void GetInternalId(GetInternalIdCallback callback) final;
  
  void Clone(::mojo::PendingReceiver<FileSystemAccessDataTransferToken> token_clone) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class BLINK_COMMON_EXPORT FileSystemAccessDataTransferTokenStubDispatch {
 public:
  static bool Accept(FileSystemAccessDataTransferToken* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      FileSystemAccessDataTransferToken* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<FileSystemAccessDataTransferToken>>
class FileSystemAccessDataTransferTokenStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  FileSystemAccessDataTransferTokenStub() = default;
  ~FileSystemAccessDataTransferTokenStub() override = default;

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return FileSystemAccessDataTransferTokenStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return FileSystemAccessDataTransferTokenStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_COMMON_EXPORT FileSystemAccessDataTransferTokenRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_COMMON_EXPORT FileSystemAccessDataTransferTokenResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace blink

namespace mojo {

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_FILE_SYSTEM_ACCESS_FILE_SYSTEM_ACCESS_DATA_TRANSFER_TOKEN_MOJOM_H_