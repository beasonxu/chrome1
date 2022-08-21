// third_party/blink/public/mojom/file_system_access/file_system_access_transfer_token.mojom.cc is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#endif

#include "third_party/blink/public/mojom/file_system_access/file_system_access_transfer_token.mojom.h"

#include <math.h>
#include <stdint.h>
#include <utility>

#include "base/debug/alias.h"
#include "base/hash/md5_constexpr.h"
#include "base/run_loop.h"
#include "base/strings/string_number_conversions.h"
#include "base/trace_event/trace_event.h"
#include "base/trace_event/typed_macros.h"
#include "mojo/public/cpp/bindings/lib/generated_code_util.h"
#include "mojo/public/cpp/bindings/lib/message_internal.h"
#include "mojo/public/cpp/bindings/lib/send_message_helper.h"
#include "mojo/public/cpp/bindings/lib/proxy_to_responder.h"
#include "mojo/public/cpp/bindings/lib/serialization_util.h"
#include "mojo/public/cpp/bindings/lib/unserialized_message_context.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/mojo_buildflags.h"
#include "mojo/public/interfaces/bindings/interface_control_messages.mojom.h"
#include "third_party/perfetto/include/perfetto/tracing/traced_value.h"

#include "third_party/blink/public/mojom/file_system_access/file_system_access_transfer_token.mojom-params-data.h"
#include "third_party/blink/public/mojom/file_system_access/file_system_access_transfer_token.mojom-shared-message-ids.h"

#include "third_party/blink/public/mojom/file_system_access/file_system_access_transfer_token.mojom-import-headers.h"
#include "third_party/blink/public/mojom/file_system_access/file_system_access_transfer_token.mojom-test-utils.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_FILE_SYSTEM_ACCESS_FILE_SYSTEM_ACCESS_TRANSFER_TOKEN_MOJOM_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_FILE_SYSTEM_ACCESS_FILE_SYSTEM_ACCESS_TRANSFER_TOKEN_MOJOM_JUMBO_H_
#endif



namespace blink {
namespace mojom {
const char FileSystemAccessTransferToken::Name_[] = "blink.mojom.FileSystemAccessTransferToken";

FileSystemAccessTransferToken::IPCStableHashFunction FileSystemAccessTransferToken::MessageToMethodInfo_(mojo::Message& message) {
#if !BUILDFLAG(IS_FUCHSIA)
  switch (message.name()) {
    case internal::kFileSystemAccessTransferToken_GetInternalID_Name: {
      return &FileSystemAccessTransferToken::GetInternalID_Sym::IPCStableHash;
    }
    case internal::kFileSystemAccessTransferToken_Clone_Name: {
      return &FileSystemAccessTransferToken::Clone_Sym::IPCStableHash;
    }
  }
#endif  // !BUILDFLAG(IS_FUCHSIA)
  return nullptr;
}


const char* FileSystemAccessTransferToken::MessageToMethodName_(mojo::Message& message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  bool is_response = message.has_flag(mojo::Message::kFlagIsResponse);
  if (!is_response) {
    switch (message.name()) {
      case internal::kFileSystemAccessTransferToken_GetInternalID_Name:
            return "Receive blink::mojom::FileSystemAccessTransferToken::GetInternalID";
      case internal::kFileSystemAccessTransferToken_Clone_Name:
            return "Receive blink::mojom::FileSystemAccessTransferToken::Clone";
    }
  } else {
    switch (message.name()) {
      case internal::kFileSystemAccessTransferToken_GetInternalID_Name:
            return "Receive reply blink::mojom::FileSystemAccessTransferToken::GetInternalID";
      case internal::kFileSystemAccessTransferToken_Clone_Name:
            return "Receive reply blink::mojom::FileSystemAccessTransferToken::Clone";
    }
  }
  return "Receive unknown mojo message";
#else
  bool is_response = message.has_flag(mojo::Message::kFlagIsResponse);
  if (is_response) {
    return "Receive mojo reply";
  } else {
    return "Receive mojo message";
  }
#endif // BUILDFLAG(MOJO_TRACE_ENABLED)
}

#if !BUILDFLAG(IS_FUCHSIA)
uint32_t FileSystemAccessTransferToken::GetInternalID_Sym::IPCStableHash() {
  // This method's address is used for indetifiying the mojo method name after
  // symbolization. So each IPCStableHash should have a unique address.
  // We cannot use NO_CODE_FOLDING() here - it relies on the uniqueness of
  // __LINE__ value, which is not unique accross different mojo modules.
  // The code below is very similar to NO_CODE_FOLDING, but it uses a unique
  // hash instead of __LINE__.
  constexpr uint32_t kHash = base::MD5Hash32Constexpr(
          "(Impl)blink::mojom::FileSystemAccessTransferToken::GetInternalID");
  const uint32_t hash = kHash;
  base::debug::Alias(&hash);
  return hash;
}
uint32_t FileSystemAccessTransferToken::Clone_Sym::IPCStableHash() {
  // This method's address is used for indetifiying the mojo method name after
  // symbolization. So each IPCStableHash should have a unique address.
  // We cannot use NO_CODE_FOLDING() here - it relies on the uniqueness of
  // __LINE__ value, which is not unique accross different mojo modules.
  // The code below is very similar to NO_CODE_FOLDING, but it uses a unique
  // hash instead of __LINE__.
  constexpr uint32_t kHash = base::MD5Hash32Constexpr(
          "(Impl)blink::mojom::FileSystemAccessTransferToken::Clone");
  const uint32_t hash = kHash;
  base::debug::Alias(&hash);
  return hash;
}
# endif // !BUILDFLAG(IS_FUCHSIA)

class FileSystemAccessTransferToken_GetInternalID_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  FileSystemAccessTransferToken_GetInternalID_ForwardToCallback(
      FileSystemAccessTransferToken::GetInternalIDCallback callback
      ) : callback_(std::move(callback)) {
  }

  FileSystemAccessTransferToken_GetInternalID_ForwardToCallback(const FileSystemAccessTransferToken_GetInternalID_ForwardToCallback&) = delete;
  FileSystemAccessTransferToken_GetInternalID_ForwardToCallback& operator=(const FileSystemAccessTransferToken_GetInternalID_ForwardToCallback&) = delete;

  bool Accept(mojo::Message* message) override;
 private:
  FileSystemAccessTransferToken::GetInternalIDCallback callback_;
};

FileSystemAccessTransferTokenProxy::FileSystemAccessTransferTokenProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void FileSystemAccessTransferTokenProxy::GetInternalID(
    GetInternalIDCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "Send blink::mojom::FileSystemAccessTransferToken::GetInternalID");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  const bool kAllowInterrupt = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0) |
      ((kAllowInterrupt) ? 0 : mojo::Message::kFlagNoInterrupt);
  
  mojo::Message message(
      internal::kFileSystemAccessTransferToken_GetInternalID_Name, kFlags, 0, 0, nullptr);
  mojo::internal::MessageFragment<
      ::blink::mojom::internal::FileSystemAccessTransferToken_GetInternalID_Params_Data> params(
          message);
  params.Allocate();

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(FileSystemAccessTransferToken::Name_);
  message.set_method_name("GetInternalID");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new FileSystemAccessTransferToken_GetInternalID_ForwardToCallback(
          std::move(callback)));
  ::mojo::internal::SendMojoMessage(*receiver_, message, std::move(responder));
}

void FileSystemAccessTransferTokenProxy::Clone(
    ::mojo::PendingReceiver<FileSystemAccessTransferToken> in_token_clone) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1(
    "mojom", "Send blink::mojom::FileSystemAccessTransferToken::Clone", "input_parameters",
    [&](perfetto::TracedValue context){
      auto dict = std::move(context).WriteDictionary();
      perfetto::WriteIntoTracedValueWithFallback(
           dict.AddItem("token_clone"), in_token_clone,
                        "<value of type ::mojo::PendingReceiver<FileSystemAccessTransferToken>>");
   });
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  const bool kAllowInterrupt = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0) |
      ((kAllowInterrupt) ? 0 : mojo::Message::kFlagNoInterrupt);
  
  mojo::Message message(
      internal::kFileSystemAccessTransferToken_Clone_Name, kFlags, 0, 0, nullptr);
  mojo::internal::MessageFragment<
      ::blink::mojom::internal::FileSystemAccessTransferToken_Clone_Params_Data> params(
          message);
  params.Allocate();
  mojo::internal::Serialize<mojo::InterfaceRequestDataView<::blink::mojom::FileSystemAccessTransferTokenInterfaceBase>>(
      in_token_clone, &params->token_clone, &params.message());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->token_clone),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid token_clone in FileSystemAccessTransferToken.Clone request");

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(FileSystemAccessTransferToken::Name_);
  message.set_method_name("Clone");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ::mojo::internal::SendMojoMessage(*receiver_, message);
}
class FileSystemAccessTransferToken_GetInternalID_ProxyToResponder : public ::mojo::internal::ProxyToResponder {
 public:
  static FileSystemAccessTransferToken::GetInternalIDCallback CreateCallback(
      ::mojo::Message& message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<FileSystemAccessTransferToken_GetInternalID_ProxyToResponder> proxy(
        new FileSystemAccessTransferToken_GetInternalID_ProxyToResponder(
            message, std::move(responder)));
    return base::BindOnce(&FileSystemAccessTransferToken_GetInternalID_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~FileSystemAccessTransferToken_GetInternalID_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
  }

 private:
  FileSystemAccessTransferToken_GetInternalID_ProxyToResponder(
      ::mojo::Message& message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : ::mojo::internal::ProxyToResponder(message, std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "FileSystemAccessTransferToken::GetInternalIDCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      const ::base::UnguessableToken& in_id);
};

bool FileSystemAccessTransferToken_GetInternalID_ForwardToCallback::Accept(
    mojo::Message* message) {

  DCHECK(message->is_serialized());
  internal::FileSystemAccessTransferToken_GetInternalID_ResponseParams_Data* params =
      reinterpret_cast<
          internal::FileSystemAccessTransferToken_GetInternalID_ResponseParams_Data*>(
              message->mutable_payload());
  
  bool success = true;
  ::base::UnguessableToken p_id{};
  FileSystemAccessTransferToken_GetInternalID_ResponseParamsDataView input_data_view(params, message);
  
  if (success && !input_data_view.ReadId(&p_id))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        FileSystemAccessTransferToken::Name_, 0, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_id));
  return true;
}

void FileSystemAccessTransferToken_GetInternalID_ProxyToResponder::Run(
    const ::base::UnguessableToken& in_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1(
    "mojom", "Send reply blink::mojom::FileSystemAccessTransferToken::GetInternalID", "async_response_parameters",
    [&](perfetto::TracedValue context){
      auto dict = std::move(context).WriteDictionary();
      perfetto::WriteIntoTracedValueWithFallback(
           dict.AddItem("id"), in_id,
                        "<value of type const ::base::UnguessableToken&>");
   });
#endif
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0) |
      ((true) ? 0 : mojo::Message::kFlagNoInterrupt);
  
  mojo::Message message(
      internal::kFileSystemAccessTransferToken_GetInternalID_Name, kFlags, 0, 0, nullptr);
  mojo::internal::MessageFragment<
      ::blink::mojom::internal::FileSystemAccessTransferToken_GetInternalID_ResponseParams_Data> params(
          message);
  params.Allocate();
  mojo::internal::MessageFragment<
      typename decltype(params->id)::BaseType> id_fragment(
          params.message());
  mojo::internal::Serialize<::mojo_base::mojom::UnguessableTokenDataView>(
      in_id, id_fragment);
  params->id.Set(
      id_fragment.is_null() ? nullptr : id_fragment.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null id in ");

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(FileSystemAccessTransferToken::Name_);
  message.set_method_name("GetInternalID");
#endif

  message.set_request_id(request_id_);
  message.set_trace_nonce(trace_nonce_);
  ::mojo::internal::SendMojoMessage(*responder_, message);
  // SendMojoMessage() fails silently if the responder connection is closed,
  // or if the message is malformed.
  //
  // TODO(darin): If Accept() returns false due to a malformed message, that
  // may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool FileSystemAccessTransferTokenStubDispatch::Accept(
    FileSystemAccessTransferToken* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kFileSystemAccessTransferToken_GetInternalID_Name: {
      break;
    }
    case internal::kFileSystemAccessTransferToken_Clone_Name: {

      DCHECK(message->is_serialized());
      internal::FileSystemAccessTransferToken_Clone_Params_Data* params =
          reinterpret_cast<internal::FileSystemAccessTransferToken_Clone_Params_Data*>(
              message->mutable_payload());
      
      bool success = true;
      ::mojo::PendingReceiver<FileSystemAccessTransferToken> p_token_clone{};
      FileSystemAccessTransferToken_Clone_ParamsDataView input_data_view(params, message);
      
      if (success) {
        p_token_clone =
            input_data_view.TakeTokenClone<decltype(p_token_clone)>();
      }
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            FileSystemAccessTransferToken::Name_, 1, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Clone(
std::move(p_token_clone));
      return true;
    }
  }
  return false;
}

// static
bool FileSystemAccessTransferTokenStubDispatch::AcceptWithResponder(
    FileSystemAccessTransferToken* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  [[maybe_unused]] const bool message_is_sync =
      message->has_flag(mojo::Message::kFlagIsSync);
  [[maybe_unused]] const uint64_t request_id = message->request_id();
  switch (message->header()->name) {
    case internal::kFileSystemAccessTransferToken_GetInternalID_Name: {

      internal::FileSystemAccessTransferToken_GetInternalID_Params_Data* params =
          reinterpret_cast<
              internal::FileSystemAccessTransferToken_GetInternalID_Params_Data*>(
                  message->mutable_payload());
      
      bool success = true;
      FileSystemAccessTransferToken_GetInternalID_ParamsDataView input_data_view(params, message);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            FileSystemAccessTransferToken::Name_, 0, false);
        return false;
      }
      FileSystemAccessTransferToken::GetInternalIDCallback callback =
          FileSystemAccessTransferToken_GetInternalID_ProxyToResponder::CreateCallback(
              *message, std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->GetInternalID(std::move(callback));
      return true;
    }
    case internal::kFileSystemAccessTransferToken_Clone_Name: {
      break;
    }
  }
  return false;
}


static const mojo::internal::GenericValidationInfo kFileSystemAccessTransferTokenValidationInfo[] = {
    {&internal::FileSystemAccessTransferToken_GetInternalID_Params_Data::Validate,
     &internal::FileSystemAccessTransferToken_GetInternalID_ResponseParams_Data::Validate},
    {&internal::FileSystemAccessTransferToken_Clone_Params_Data::Validate,
     nullptr /* no response */},
};

bool FileSystemAccessTransferTokenRequestValidator::Accept(mojo::Message* message) {
  const char* name = ::blink::mojom::FileSystemAccessTransferToken::Name_;
  return mojo::internal::ValidateRequestGenericPacked(message, name, kFileSystemAccessTransferTokenValidationInfo);
}

bool FileSystemAccessTransferTokenResponseValidator::Accept(mojo::Message* message) {
  const char* name = ::blink::mojom::FileSystemAccessTransferToken::Name_;
  return mojo::internal::ValidateResponseGenericPacked(message, name, kFileSystemAccessTransferTokenValidationInfo);
}


}  // namespace mojom
}  // namespace blink


namespace mojo {

}  // namespace mojo


// Symbols declared in the -test-utils.h header are defined here instead of a
// separate .cc file to save compile time.


namespace blink {
namespace mojom {


void FileSystemAccessTransferTokenInterceptorForTesting::GetInternalID(GetInternalIDCallback callback) {
  GetForwardingInterface()->GetInternalID(std::move(callback));
}
void FileSystemAccessTransferTokenInterceptorForTesting::Clone(::mojo::PendingReceiver<FileSystemAccessTransferToken> token_clone) {
  GetForwardingInterface()->Clone(std::move(token_clone));
}
FileSystemAccessTransferTokenAsyncWaiter::FileSystemAccessTransferTokenAsyncWaiter(
    FileSystemAccessTransferToken* proxy) : proxy_(proxy) {}

FileSystemAccessTransferTokenAsyncWaiter::~FileSystemAccessTransferTokenAsyncWaiter() = default;

void FileSystemAccessTransferTokenAsyncWaiter::GetInternalID(
    ::base::UnguessableToken* out_id) {
  base::RunLoop loop;
  proxy_->GetInternalID(
      base::BindOnce(
          [](base::RunLoop* loop,
             ::base::UnguessableToken* out_id
,
             const ::base::UnguessableToken& id) {*out_id = std::move(id);
            loop->Quit();
          },
          &loop,
          out_id));
  loop.Run();
}





}  // namespace mojom
}  // namespace blink


#if defined(__clang__)
#pragma clang diagnostic pop
#endif