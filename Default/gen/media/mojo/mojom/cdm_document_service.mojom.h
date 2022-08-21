// media/mojo/mojom/cdm_document_service.mojom.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_MOJOM_CDM_DOCUMENT_SERVICE_MOJOM_H_
#define MEDIA_MOJO_MOJOM_CDM_DOCUMENT_SERVICE_MOJOM_H_

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

#include "media/mojo/mojom/cdm_document_service.mojom-shared.h"
#include "media/mojo/mojom/cdm_document_service.mojom-forward.h"
#include "mojo/public/mojom/base/unguessable_token.mojom-forward.h"
#include "mojo/public/mojom/base/file_path.mojom-forward.h"
#include "media/mojo/mojom/media_types.mojom-forward.h"
#include <string>
#include <vector>

#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/raw_ptr_impl_ref_traits.h"






namespace media {
namespace mojom {

class CdmDocumentServiceProxy;

template <typename ImplRefTraits>
class CdmDocumentServiceStub;

class CdmDocumentServiceRequestValidator;
class CdmDocumentServiceResponseValidator;


class  CdmDocumentService
    : public CdmDocumentServiceInterfaceBase {
 public:
  using IPCStableHashFunction = uint32_t(*)();

  static const char Name_[];
  static IPCStableHashFunction MessageToMethodInfo_(mojo::Message& message);
  static const char* MessageToMethodName_(mojo::Message& message);
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;
  static constexpr bool HasUninterruptableMethods_ = false;

  using Base_ = CdmDocumentServiceInterfaceBase;
  using Proxy_ = CdmDocumentServiceProxy;

  template <typename ImplRefTraits>
  using Stub_ = CdmDocumentServiceStub<ImplRefTraits>;

  using RequestValidator_ = CdmDocumentServiceRequestValidator;
  using ResponseValidator_ = CdmDocumentServiceResponseValidator;
  enum MethodMinVersions : uint32_t {
    kChallengePlatformMinVersion = 0,
    kGetStorageIdMinVersion = 0,
  };

// crbug.com/1340245 - this causes binary size bloat on Fuchsia, and we're OK
// with not having this data in traces there.
#if !BUILDFLAG(IS_FUCHSIA)
  struct ChallengePlatform_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct GetStorageId_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
#endif // !BUILDFLAG(IS_FUCHSIA)
  virtual ~CdmDocumentService() = default;


  using ChallengePlatformCallback = base::OnceCallback<void(bool, const std::string&, const std::string&, const std::string&)>;
  
  virtual void ChallengePlatform(const std::string& service_id, const std::string& challenge, ChallengePlatformCallback callback) = 0;


  using GetStorageIdCallback = base::OnceCallback<void(uint32_t, const std::vector<uint8_t>&)>;
  
  virtual void GetStorageId(uint32_t version, GetStorageIdCallback callback) = 0;
};



class  CdmDocumentServiceProxy
    : public CdmDocumentService {
 public:
  using InterfaceType = CdmDocumentService;

  explicit CdmDocumentServiceProxy(mojo::MessageReceiverWithResponder* receiver);
  
  void ChallengePlatform(const std::string& service_id, const std::string& challenge, ChallengePlatformCallback callback) final;
  
  void GetStorageId(uint32_t version, GetStorageIdCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  CdmDocumentServiceStubDispatch {
 public:
  static bool Accept(CdmDocumentService* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      CdmDocumentService* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<CdmDocumentService>>
class CdmDocumentServiceStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  CdmDocumentServiceStub() = default;
  ~CdmDocumentServiceStub() override = default;

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return CdmDocumentServiceStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return CdmDocumentServiceStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  CdmDocumentServiceRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  CdmDocumentServiceResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace media

namespace mojo {

}  // namespace mojo

#endif  // MEDIA_MOJO_MOJOM_CDM_DOCUMENT_SERVICE_MOJOM_H_