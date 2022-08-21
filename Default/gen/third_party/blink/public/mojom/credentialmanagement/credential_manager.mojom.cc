// third_party/blink/public/mojom/credentialmanagement/credential_manager.mojom.cc is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#endif

#include "third_party/blink/public/mojom/credentialmanagement/credential_manager.mojom.h"

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

#include "third_party/blink/public/mojom/credentialmanagement/credential_manager.mojom-params-data.h"
#include "third_party/blink/public/mojom/credentialmanagement/credential_manager.mojom-shared-message-ids.h"

#include "third_party/blink/public/mojom/credentialmanagement/credential_manager.mojom-import-headers.h"
#include "third_party/blink/public/mojom/credentialmanagement/credential_manager.mojom-test-utils.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_CREDENTIALMANAGEMENT_CREDENTIAL_MANAGER_MOJOM_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_CREDENTIALMANAGEMENT_CREDENTIAL_MANAGER_MOJOM_JUMBO_H_
#endif



namespace blink {
namespace mojom {
CredentialInfo::CredentialInfo()
    : type(),
      id(),
      name(),
      icon(),
      password(),
      federation() {}

CredentialInfo::CredentialInfo(
    ::password_manager::CredentialType type_in,
    const absl::optional<::std::u16string>& id_in,
    const absl::optional<::std::u16string>& name_in,
    const ::GURL& icon_in,
    const absl::optional<::std::u16string>& password_in,
    const ::url::Origin& federation_in)
    : type(std::move(type_in)),
      id(std::move(id_in)),
      name(std::move(name_in)),
      icon(std::move(icon_in)),
      password(std::move(password_in)),
      federation(std::move(federation_in)) {}

CredentialInfo::~CredentialInfo() = default;

void CredentialInfo::WriteIntoTrace(
    perfetto::TracedValue traced_context) const {
  [[maybe_unused]] auto dict = std::move(traced_context).WriteDictionary();
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "type"), this->type,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type ::password_manager::CredentialType>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "id"), this->id,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type const absl::optional<::std::u16string>&>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "name"), this->name,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type const absl::optional<::std::u16string>&>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "icon"), this->icon,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type const ::GURL&>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "password"), this->password,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type const absl::optional<::std::u16string>&>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "federation"), this->federation,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type const ::url::Origin&>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
}

bool CredentialInfo::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char CredentialManager::Name_[] = "blink.mojom.CredentialManager";

CredentialManager::IPCStableHashFunction CredentialManager::MessageToMethodInfo_(mojo::Message& message) {
#if !BUILDFLAG(IS_FUCHSIA)
  switch (message.name()) {
    case internal::kCredentialManager_Store_Name: {
      return &CredentialManager::Store_Sym::IPCStableHash;
    }
    case internal::kCredentialManager_PreventSilentAccess_Name: {
      return &CredentialManager::PreventSilentAccess_Sym::IPCStableHash;
    }
    case internal::kCredentialManager_Get_Name: {
      return &CredentialManager::Get_Sym::IPCStableHash;
    }
  }
#endif  // !BUILDFLAG(IS_FUCHSIA)
  return nullptr;
}


const char* CredentialManager::MessageToMethodName_(mojo::Message& message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  bool is_response = message.has_flag(mojo::Message::kFlagIsResponse);
  if (!is_response) {
    switch (message.name()) {
      case internal::kCredentialManager_Store_Name:
            return "Receive blink::mojom::CredentialManager::Store";
      case internal::kCredentialManager_PreventSilentAccess_Name:
            return "Receive blink::mojom::CredentialManager::PreventSilentAccess";
      case internal::kCredentialManager_Get_Name:
            return "Receive blink::mojom::CredentialManager::Get";
    }
  } else {
    switch (message.name()) {
      case internal::kCredentialManager_Store_Name:
            return "Receive reply blink::mojom::CredentialManager::Store";
      case internal::kCredentialManager_PreventSilentAccess_Name:
            return "Receive reply blink::mojom::CredentialManager::PreventSilentAccess";
      case internal::kCredentialManager_Get_Name:
            return "Receive reply blink::mojom::CredentialManager::Get";
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
uint32_t CredentialManager::Store_Sym::IPCStableHash() {
  // This method's address is used for indetifiying the mojo method name after
  // symbolization. So each IPCStableHash should have a unique address.
  // We cannot use NO_CODE_FOLDING() here - it relies on the uniqueness of
  // __LINE__ value, which is not unique accross different mojo modules.
  // The code below is very similar to NO_CODE_FOLDING, but it uses a unique
  // hash instead of __LINE__.
  constexpr uint32_t kHash = base::MD5Hash32Constexpr(
          "(Impl)blink::mojom::CredentialManager::Store");
  const uint32_t hash = kHash;
  base::debug::Alias(&hash);
  return hash;
}
uint32_t CredentialManager::PreventSilentAccess_Sym::IPCStableHash() {
  // This method's address is used for indetifiying the mojo method name after
  // symbolization. So each IPCStableHash should have a unique address.
  // We cannot use NO_CODE_FOLDING() here - it relies on the uniqueness of
  // __LINE__ value, which is not unique accross different mojo modules.
  // The code below is very similar to NO_CODE_FOLDING, but it uses a unique
  // hash instead of __LINE__.
  constexpr uint32_t kHash = base::MD5Hash32Constexpr(
          "(Impl)blink::mojom::CredentialManager::PreventSilentAccess");
  const uint32_t hash = kHash;
  base::debug::Alias(&hash);
  return hash;
}
uint32_t CredentialManager::Get_Sym::IPCStableHash() {
  // This method's address is used for indetifiying the mojo method name after
  // symbolization. So each IPCStableHash should have a unique address.
  // We cannot use NO_CODE_FOLDING() here - it relies on the uniqueness of
  // __LINE__ value, which is not unique accross different mojo modules.
  // The code below is very similar to NO_CODE_FOLDING, but it uses a unique
  // hash instead of __LINE__.
  constexpr uint32_t kHash = base::MD5Hash32Constexpr(
          "(Impl)blink::mojom::CredentialManager::Get");
  const uint32_t hash = kHash;
  base::debug::Alias(&hash);
  return hash;
}
# endif // !BUILDFLAG(IS_FUCHSIA)

class CredentialManager_Store_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  CredentialManager_Store_ForwardToCallback(
      CredentialManager::StoreCallback callback
      ) : callback_(std::move(callback)) {
  }

  CredentialManager_Store_ForwardToCallback(const CredentialManager_Store_ForwardToCallback&) = delete;
  CredentialManager_Store_ForwardToCallback& operator=(const CredentialManager_Store_ForwardToCallback&) = delete;

  bool Accept(mojo::Message* message) override;
 private:
  CredentialManager::StoreCallback callback_;
};

class CredentialManager_PreventSilentAccess_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  CredentialManager_PreventSilentAccess_ForwardToCallback(
      CredentialManager::PreventSilentAccessCallback callback
      ) : callback_(std::move(callback)) {
  }

  CredentialManager_PreventSilentAccess_ForwardToCallback(const CredentialManager_PreventSilentAccess_ForwardToCallback&) = delete;
  CredentialManager_PreventSilentAccess_ForwardToCallback& operator=(const CredentialManager_PreventSilentAccess_ForwardToCallback&) = delete;

  bool Accept(mojo::Message* message) override;
 private:
  CredentialManager::PreventSilentAccessCallback callback_;
};

class CredentialManager_Get_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  CredentialManager_Get_ForwardToCallback(
      CredentialManager::GetCallback callback
      ) : callback_(std::move(callback)) {
  }

  CredentialManager_Get_ForwardToCallback(const CredentialManager_Get_ForwardToCallback&) = delete;
  CredentialManager_Get_ForwardToCallback& operator=(const CredentialManager_Get_ForwardToCallback&) = delete;

  bool Accept(mojo::Message* message) override;
 private:
  CredentialManager::GetCallback callback_;
};

CredentialManagerProxy::CredentialManagerProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void CredentialManagerProxy::Store(
    const ::password_manager::CredentialInfo& in_credential, StoreCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1(
    "mojom", "Send blink::mojom::CredentialManager::Store", "input_parameters",
    [&](perfetto::TracedValue context){
      auto dict = std::move(context).WriteDictionary();
      perfetto::WriteIntoTracedValueWithFallback(
           dict.AddItem("credential"), in_credential,
                        "<value of type const ::password_manager::CredentialInfo&>");
   });
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  const bool kAllowInterrupt = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0) |
      ((kAllowInterrupt) ? 0 : mojo::Message::kFlagNoInterrupt);
  
  mojo::Message message(
      internal::kCredentialManager_Store_Name, kFlags, 0, 0, nullptr);
  mojo::internal::MessageFragment<
      ::blink::mojom::internal::CredentialManager_Store_Params_Data> params(
          message);
  params.Allocate();
  mojo::internal::MessageFragment<
      typename decltype(params->credential)::BaseType> credential_fragment(
          params.message());
  mojo::internal::Serialize<::blink::mojom::CredentialInfoDataView>(
      in_credential, credential_fragment);
  params->credential.Set(
      credential_fragment.is_null() ? nullptr : credential_fragment.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->credential.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null credential in CredentialManager.Store request");

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(CredentialManager::Name_);
  message.set_method_name("Store");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new CredentialManager_Store_ForwardToCallback(
          std::move(callback)));
  ::mojo::internal::SendMojoMessage(*receiver_, message, std::move(responder));
}

void CredentialManagerProxy::PreventSilentAccess(
    PreventSilentAccessCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "Send blink::mojom::CredentialManager::PreventSilentAccess");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  const bool kAllowInterrupt = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0) |
      ((kAllowInterrupt) ? 0 : mojo::Message::kFlagNoInterrupt);
  
  mojo::Message message(
      internal::kCredentialManager_PreventSilentAccess_Name, kFlags, 0, 0, nullptr);
  mojo::internal::MessageFragment<
      ::blink::mojom::internal::CredentialManager_PreventSilentAccess_Params_Data> params(
          message);
  params.Allocate();

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(CredentialManager::Name_);
  message.set_method_name("PreventSilentAccess");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new CredentialManager_PreventSilentAccess_ForwardToCallback(
          std::move(callback)));
  ::mojo::internal::SendMojoMessage(*receiver_, message, std::move(responder));
}

void CredentialManagerProxy::Get(
    ::password_manager::CredentialMediationRequirement in_mediation, bool in_include_passwords, const std::vector<::GURL>& in_federations, GetCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1(
    "mojom", "Send blink::mojom::CredentialManager::Get", "input_parameters",
    [&](perfetto::TracedValue context){
      auto dict = std::move(context).WriteDictionary();
      perfetto::WriteIntoTracedValueWithFallback(
           dict.AddItem("mediation"), in_mediation,
                        "<value of type ::password_manager::CredentialMediationRequirement>");
      perfetto::WriteIntoTracedValueWithFallback(
           dict.AddItem("include_passwords"), in_include_passwords,
                        "<value of type bool>");
      perfetto::WriteIntoTracedValueWithFallback(
           dict.AddItem("federations"), in_federations,
                        "<value of type const std::vector<::GURL>&>");
   });
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  const bool kAllowInterrupt = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0) |
      ((kAllowInterrupt) ? 0 : mojo::Message::kFlagNoInterrupt);
  
  mojo::Message message(
      internal::kCredentialManager_Get_Name, kFlags, 0, 0, nullptr);
  mojo::internal::MessageFragment<
      ::blink::mojom::internal::CredentialManager_Get_Params_Data> params(
          message);
  params.Allocate();
  mojo::internal::Serialize<::blink::mojom::CredentialMediationRequirement>(
      in_mediation, &params->mediation);
  params->include_passwords = in_include_passwords;
  mojo::internal::MessageFragment<
      typename decltype(params->federations)::BaseType>
      federations_fragment(params.message());
  const mojo::internal::ContainerValidateParams federations_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::url::mojom::UrlDataView>>(
      in_federations, federations_fragment, &federations_validate_params);
  params->federations.Set(
      federations_fragment.is_null() ? nullptr : federations_fragment.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->federations.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null federations in CredentialManager.Get request");

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(CredentialManager::Name_);
  message.set_method_name("Get");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new CredentialManager_Get_ForwardToCallback(
          std::move(callback)));
  ::mojo::internal::SendMojoMessage(*receiver_, message, std::move(responder));
}
class CredentialManager_Store_ProxyToResponder : public ::mojo::internal::ProxyToResponder {
 public:
  static CredentialManager::StoreCallback CreateCallback(
      ::mojo::Message& message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<CredentialManager_Store_ProxyToResponder> proxy(
        new CredentialManager_Store_ProxyToResponder(
            message, std::move(responder)));
    return base::BindOnce(&CredentialManager_Store_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~CredentialManager_Store_ProxyToResponder() {
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
  CredentialManager_Store_ProxyToResponder(
      ::mojo::Message& message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : ::mojo::internal::ProxyToResponder(message, std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "CredentialManager::StoreCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      );
};

bool CredentialManager_Store_ForwardToCallback::Accept(
    mojo::Message* message) {

  DCHECK(message->is_serialized());
  internal::CredentialManager_Store_ResponseParams_Data* params =
      reinterpret_cast<
          internal::CredentialManager_Store_ResponseParams_Data*>(
              message->mutable_payload());
  
  bool success = true;
  CredentialManager_Store_ResponseParamsDataView input_data_view(params, message);
  
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        CredentialManager::Name_, 0, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run();
  return true;
}

void CredentialManager_Store_ProxyToResponder::Run(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "Send reply blink::mojom::CredentialManager::Store");
#endif
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0) |
      ((true) ? 0 : mojo::Message::kFlagNoInterrupt);
  
  mojo::Message message(
      internal::kCredentialManager_Store_Name, kFlags, 0, 0, nullptr);
  mojo::internal::MessageFragment<
      ::blink::mojom::internal::CredentialManager_Store_ResponseParams_Data> params(
          message);
  params.Allocate();

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(CredentialManager::Name_);
  message.set_method_name("Store");
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
class CredentialManager_PreventSilentAccess_ProxyToResponder : public ::mojo::internal::ProxyToResponder {
 public:
  static CredentialManager::PreventSilentAccessCallback CreateCallback(
      ::mojo::Message& message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<CredentialManager_PreventSilentAccess_ProxyToResponder> proxy(
        new CredentialManager_PreventSilentAccess_ProxyToResponder(
            message, std::move(responder)));
    return base::BindOnce(&CredentialManager_PreventSilentAccess_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~CredentialManager_PreventSilentAccess_ProxyToResponder() {
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
  CredentialManager_PreventSilentAccess_ProxyToResponder(
      ::mojo::Message& message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : ::mojo::internal::ProxyToResponder(message, std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "CredentialManager::PreventSilentAccessCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      );
};

bool CredentialManager_PreventSilentAccess_ForwardToCallback::Accept(
    mojo::Message* message) {

  DCHECK(message->is_serialized());
  internal::CredentialManager_PreventSilentAccess_ResponseParams_Data* params =
      reinterpret_cast<
          internal::CredentialManager_PreventSilentAccess_ResponseParams_Data*>(
              message->mutable_payload());
  
  bool success = true;
  CredentialManager_PreventSilentAccess_ResponseParamsDataView input_data_view(params, message);
  
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        CredentialManager::Name_, 1, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run();
  return true;
}

void CredentialManager_PreventSilentAccess_ProxyToResponder::Run(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "Send reply blink::mojom::CredentialManager::PreventSilentAccess");
#endif
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0) |
      ((true) ? 0 : mojo::Message::kFlagNoInterrupt);
  
  mojo::Message message(
      internal::kCredentialManager_PreventSilentAccess_Name, kFlags, 0, 0, nullptr);
  mojo::internal::MessageFragment<
      ::blink::mojom::internal::CredentialManager_PreventSilentAccess_ResponseParams_Data> params(
          message);
  params.Allocate();

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(CredentialManager::Name_);
  message.set_method_name("PreventSilentAccess");
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
class CredentialManager_Get_ProxyToResponder : public ::mojo::internal::ProxyToResponder {
 public:
  static CredentialManager::GetCallback CreateCallback(
      ::mojo::Message& message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<CredentialManager_Get_ProxyToResponder> proxy(
        new CredentialManager_Get_ProxyToResponder(
            message, std::move(responder)));
    return base::BindOnce(&CredentialManager_Get_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~CredentialManager_Get_ProxyToResponder() {
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
  CredentialManager_Get_ProxyToResponder(
      ::mojo::Message& message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : ::mojo::internal::ProxyToResponder(message, std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "CredentialManager::GetCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      ::password_manager::CredentialManagerError in_error, const absl::optional<::password_manager::CredentialInfo>& in_credential);
};

bool CredentialManager_Get_ForwardToCallback::Accept(
    mojo::Message* message) {

  DCHECK(message->is_serialized());
  internal::CredentialManager_Get_ResponseParams_Data* params =
      reinterpret_cast<
          internal::CredentialManager_Get_ResponseParams_Data*>(
              message->mutable_payload());
  
  bool success = true;
  ::password_manager::CredentialManagerError p_error{};
  absl::optional<::password_manager::CredentialInfo> p_credential{};
  CredentialManager_Get_ResponseParamsDataView input_data_view(params, message);
  
  if (success && !input_data_view.ReadError(&p_error))
    success = false;
  if (success && !input_data_view.ReadCredential(&p_credential))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        CredentialManager::Name_, 2, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_error), 
std::move(p_credential));
  return true;
}

void CredentialManager_Get_ProxyToResponder::Run(
    ::password_manager::CredentialManagerError in_error, const absl::optional<::password_manager::CredentialInfo>& in_credential) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1(
    "mojom", "Send reply blink::mojom::CredentialManager::Get", "async_response_parameters",
    [&](perfetto::TracedValue context){
      auto dict = std::move(context).WriteDictionary();
      perfetto::WriteIntoTracedValueWithFallback(
           dict.AddItem("error"), in_error,
                        "<value of type ::password_manager::CredentialManagerError>");
      perfetto::WriteIntoTracedValueWithFallback(
           dict.AddItem("credential"), in_credential,
                        "<value of type const absl::optional<::password_manager::CredentialInfo>&>");
   });
#endif
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0) |
      ((true) ? 0 : mojo::Message::kFlagNoInterrupt);
  
  mojo::Message message(
      internal::kCredentialManager_Get_Name, kFlags, 0, 0, nullptr);
  mojo::internal::MessageFragment<
      ::blink::mojom::internal::CredentialManager_Get_ResponseParams_Data> params(
          message);
  params.Allocate();
  mojo::internal::Serialize<::blink::mojom::CredentialManagerError>(
      in_error, &params->error);
  mojo::internal::MessageFragment<
      typename decltype(params->credential)::BaseType> credential_fragment(
          params.message());
  mojo::internal::Serialize<::blink::mojom::CredentialInfoDataView>(
      in_credential, credential_fragment);
  params->credential.Set(
      credential_fragment.is_null() ? nullptr : credential_fragment.data());

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(CredentialManager::Name_);
  message.set_method_name("Get");
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
bool CredentialManagerStubDispatch::Accept(
    CredentialManager* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kCredentialManager_Store_Name: {
      break;
    }
    case internal::kCredentialManager_PreventSilentAccess_Name: {
      break;
    }
    case internal::kCredentialManager_Get_Name: {
      break;
    }
  }
  return false;
}

// static
bool CredentialManagerStubDispatch::AcceptWithResponder(
    CredentialManager* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  [[maybe_unused]] const bool message_is_sync =
      message->has_flag(mojo::Message::kFlagIsSync);
  [[maybe_unused]] const uint64_t request_id = message->request_id();
  switch (message->header()->name) {
    case internal::kCredentialManager_Store_Name: {

      internal::CredentialManager_Store_Params_Data* params =
          reinterpret_cast<
              internal::CredentialManager_Store_Params_Data*>(
                  message->mutable_payload());
      
      bool success = true;
      ::password_manager::CredentialInfo p_credential{};
      CredentialManager_Store_ParamsDataView input_data_view(params, message);
      
      if (success && !input_data_view.ReadCredential(&p_credential))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            CredentialManager::Name_, 0, false);
        return false;
      }
      CredentialManager::StoreCallback callback =
          CredentialManager_Store_ProxyToResponder::CreateCallback(
              *message, std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Store(
std::move(p_credential), std::move(callback));
      return true;
    }
    case internal::kCredentialManager_PreventSilentAccess_Name: {

      internal::CredentialManager_PreventSilentAccess_Params_Data* params =
          reinterpret_cast<
              internal::CredentialManager_PreventSilentAccess_Params_Data*>(
                  message->mutable_payload());
      
      bool success = true;
      CredentialManager_PreventSilentAccess_ParamsDataView input_data_view(params, message);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            CredentialManager::Name_, 1, false);
        return false;
      }
      CredentialManager::PreventSilentAccessCallback callback =
          CredentialManager_PreventSilentAccess_ProxyToResponder::CreateCallback(
              *message, std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->PreventSilentAccess(std::move(callback));
      return true;
    }
    case internal::kCredentialManager_Get_Name: {

      internal::CredentialManager_Get_Params_Data* params =
          reinterpret_cast<
              internal::CredentialManager_Get_Params_Data*>(
                  message->mutable_payload());
      
      bool success = true;
      ::password_manager::CredentialMediationRequirement p_mediation{};
      bool p_include_passwords{};
      std::vector<::GURL> p_federations{};
      CredentialManager_Get_ParamsDataView input_data_view(params, message);
      
      if (success && !input_data_view.ReadMediation(&p_mediation))
        success = false;
      if (success)
        p_include_passwords = input_data_view.include_passwords();
      if (success && !input_data_view.ReadFederations(&p_federations))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            CredentialManager::Name_, 2, false);
        return false;
      }
      CredentialManager::GetCallback callback =
          CredentialManager_Get_ProxyToResponder::CreateCallback(
              *message, std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Get(
std::move(p_mediation), 
std::move(p_include_passwords), 
std::move(p_federations), std::move(callback));
      return true;
    }
  }
  return false;
}


static const mojo::internal::GenericValidationInfo kCredentialManagerValidationInfo[] = {
    {&internal::CredentialManager_Store_Params_Data::Validate,
     &internal::CredentialManager_Store_ResponseParams_Data::Validate},
    {&internal::CredentialManager_PreventSilentAccess_Params_Data::Validate,
     &internal::CredentialManager_PreventSilentAccess_ResponseParams_Data::Validate},
    {&internal::CredentialManager_Get_Params_Data::Validate,
     &internal::CredentialManager_Get_ResponseParams_Data::Validate},
};

bool CredentialManagerRequestValidator::Accept(mojo::Message* message) {
  const char* name = ::blink::mojom::CredentialManager::Name_;
  return mojo::internal::ValidateRequestGenericPacked(message, name, kCredentialManagerValidationInfo);
}

bool CredentialManagerResponseValidator::Accept(mojo::Message* message) {
  const char* name = ::blink::mojom::CredentialManager::Name_;
  return mojo::internal::ValidateResponseGenericPacked(message, name, kCredentialManagerValidationInfo);
}


}  // namespace mojom
}  // namespace blink


namespace mojo {


// static
bool StructTraits<::blink::mojom::CredentialInfo::DataView, ::blink::mojom::CredentialInfoPtr>::Read(
    ::blink::mojom::CredentialInfo::DataView input,
    ::blink::mojom::CredentialInfoPtr* output) {
  bool success = true;
  ::blink::mojom::CredentialInfoPtr result(::blink::mojom::CredentialInfo::New());
  
      if (success && !input.ReadType(&result->type))
        success = false;
      if (success && !input.ReadId(&result->id))
        success = false;
      if (success && !input.ReadName(&result->name))
        success = false;
      if (success && !input.ReadIcon(&result->icon))
        success = false;
      if (success && !input.ReadPassword(&result->password))
        success = false;
      if (success && !input.ReadFederation(&result->federation))
        success = false;
  *output = std::move(result);
  return success;
}

}  // namespace mojo


// Symbols declared in the -test-utils.h header are defined here instead of a
// separate .cc file to save compile time.


namespace blink {
namespace mojom {


void CredentialManagerInterceptorForTesting::Store(const ::password_manager::CredentialInfo& credential, StoreCallback callback) {
  GetForwardingInterface()->Store(std::move(credential), std::move(callback));
}
void CredentialManagerInterceptorForTesting::PreventSilentAccess(PreventSilentAccessCallback callback) {
  GetForwardingInterface()->PreventSilentAccess(std::move(callback));
}
void CredentialManagerInterceptorForTesting::Get(::password_manager::CredentialMediationRequirement mediation, bool include_passwords, const std::vector<::GURL>& federations, GetCallback callback) {
  GetForwardingInterface()->Get(std::move(mediation), std::move(include_passwords), std::move(federations), std::move(callback));
}
CredentialManagerAsyncWaiter::CredentialManagerAsyncWaiter(
    CredentialManager* proxy) : proxy_(proxy) {}

CredentialManagerAsyncWaiter::~CredentialManagerAsyncWaiter() = default;

void CredentialManagerAsyncWaiter::Store(
    const ::password_manager::CredentialInfo& credential) {
  base::RunLoop loop;
  proxy_->Store(std::move(credential),
      base::BindOnce(
          [](base::RunLoop* loop) {
            loop->Quit();
          },
          &loop));
  loop.Run();
}
void CredentialManagerAsyncWaiter::PreventSilentAccess(
    ) {
  base::RunLoop loop;
  proxy_->PreventSilentAccess(
      base::BindOnce(
          [](base::RunLoop* loop) {
            loop->Quit();
          },
          &loop));
  loop.Run();
}
void CredentialManagerAsyncWaiter::Get(
    ::password_manager::CredentialMediationRequirement mediation, bool include_passwords, const std::vector<::GURL>& federations, ::password_manager::CredentialManagerError* out_error, absl::optional<::password_manager::CredentialInfo>* out_credential) {
  base::RunLoop loop;
  proxy_->Get(std::move(mediation),std::move(include_passwords),std::move(federations),
      base::BindOnce(
          [](base::RunLoop* loop,
             ::password_manager::CredentialManagerError* out_error
,
             absl::optional<::password_manager::CredentialInfo>* out_credential
,
             ::password_manager::CredentialManagerError error,
             const absl::optional<::password_manager::CredentialInfo>& credential) {*out_error = std::move(error);*out_credential = std::move(credential);
            loop->Quit();
          },
          &loop,
          out_error,
          out_credential));
  loop.Run();
}





}  // namespace mojom
}  // namespace blink


#if defined(__clang__)
#pragma clang diagnostic pop
#endif