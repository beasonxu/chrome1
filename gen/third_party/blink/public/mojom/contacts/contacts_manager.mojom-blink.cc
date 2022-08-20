// third_party/blink/public/mojom/contacts/contacts_manager.mojom-blink.cc is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#endif

#include "third_party/blink/public/mojom/contacts/contacts_manager.mojom-blink.h"

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

#include "third_party/blink/public/mojom/contacts/contacts_manager.mojom-params-data.h"
#include "third_party/blink/public/mojom/contacts/contacts_manager.mojom-shared-message-ids.h"

#include "third_party/blink/public/mojom/contacts/contacts_manager.mojom-blink-import-headers.h"
#include "third_party/blink/public/mojom/contacts/contacts_manager.mojom-blink-test-utils.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_CONTACTS_CONTACTS_MANAGER_MOJOM_BLINK_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_CONTACTS_CONTACTS_MANAGER_MOJOM_BLINK_JUMBO_H_
#endif



namespace blink {
namespace mojom {
namespace blink {
ContactIconBlob::ContactIconBlob()
    : mime_type(),
      data() {}

ContactIconBlob::ContactIconBlob(
    const WTF::String& mime_type_in,
    WTF::Vector<uint8_t> data_in)
    : mime_type(std::move(mime_type_in)),
      data(std::move(data_in)) {}

ContactIconBlob::~ContactIconBlob() = default;

void ContactIconBlob::WriteIntoTrace(
    perfetto::TracedValue traced_context) const {
  [[maybe_unused]] auto dict = std::move(traced_context).WriteDictionary();
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "mime_type"), this->mime_type,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type const WTF::String&>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "data"), this->data,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type const WTF::Vector<uint8_t>&>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
}

bool ContactIconBlob::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
ContactInfo::ContactInfo()
    : name(),
      email(),
      tel(),
      address(),
      icon() {}

ContactInfo::ContactInfo(
    absl::optional<WTF::Vector<WTF::String>> name_in,
    absl::optional<WTF::Vector<WTF::String>> email_in,
    absl::optional<WTF::Vector<WTF::String>> tel_in,
    absl::optional<WTF::Vector<::payments::mojom::blink::PaymentAddressPtr>> address_in,
    absl::optional<WTF::Vector<ContactIconBlobPtr>> icon_in)
    : name(std::move(name_in)),
      email(std::move(email_in)),
      tel(std::move(tel_in)),
      address(std::move(address_in)),
      icon(std::move(icon_in)) {}

ContactInfo::~ContactInfo() = default;

void ContactInfo::WriteIntoTrace(
    perfetto::TracedValue traced_context) const {
  [[maybe_unused]] auto dict = std::move(traced_context).WriteDictionary();
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "name"), this->name,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type const absl::optional<WTF::Vector<WTF::String>>&>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "email"), this->email,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type const absl::optional<WTF::Vector<WTF::String>>&>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "tel"), this->tel,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type const absl::optional<WTF::Vector<WTF::String>>&>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "address"), this->address,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type absl::optional<WTF::Vector<::payments::mojom::blink::PaymentAddressPtr>>>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "icon"), this->icon,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type absl::optional<WTF::Vector<ContactIconBlobPtr>>>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
}

bool ContactInfo::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char ContactsManager::Name_[] = "blink.mojom.ContactsManager";

ContactsManager::IPCStableHashFunction ContactsManager::MessageToMethodInfo_(mojo::Message& message) {
#if !BUILDFLAG(IS_FUCHSIA)
  switch (message.name()) {
    case internal::kContactsManager_Select_Name: {
      return &ContactsManager::Select_Sym::IPCStableHash;
    }
  }
#endif  // !BUILDFLAG(IS_FUCHSIA)
  return nullptr;
}


const char* ContactsManager::MessageToMethodName_(mojo::Message& message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  bool is_response = message.has_flag(mojo::Message::kFlagIsResponse);
  if (!is_response) {
    switch (message.name()) {
      case internal::kContactsManager_Select_Name:
            return "Receive blink::mojom::ContactsManager::Select";
    }
  } else {
    switch (message.name()) {
      case internal::kContactsManager_Select_Name:
            return "Receive reply blink::mojom::ContactsManager::Select";
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
uint32_t ContactsManager::Select_Sym::IPCStableHash() {
  // This method's address is used for indetifiying the mojo method name after
  // symbolization. So each IPCStableHash should have a unique address.
  // We cannot use NO_CODE_FOLDING() here - it relies on the uniqueness of
  // __LINE__ value, which is not unique accross different mojo modules.
  // The code below is very similar to NO_CODE_FOLDING, but it uses a unique
  // hash instead of __LINE__.
  constexpr uint32_t kHash = base::MD5Hash32Constexpr(
          "(Impl)blink::mojom::ContactsManager::Select");
  const uint32_t hash = kHash;
  base::debug::Alias(&hash);
  return hash;
}
# endif // !BUILDFLAG(IS_FUCHSIA)

class ContactsManager_Select_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  ContactsManager_Select_ForwardToCallback(
      ContactsManager::SelectCallback callback
      ) : callback_(std::move(callback)) {
  }

  ContactsManager_Select_ForwardToCallback(const ContactsManager_Select_ForwardToCallback&) = delete;
  ContactsManager_Select_ForwardToCallback& operator=(const ContactsManager_Select_ForwardToCallback&) = delete;

  bool Accept(mojo::Message* message) override;
 private:
  ContactsManager::SelectCallback callback_;
};

ContactsManagerProxy::ContactsManagerProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void ContactsManagerProxy::Select(
    bool in_multiple, bool in_include_names, bool in_include_emails, bool in_include_tel, bool in_include_addresses, bool in_include_icons, SelectCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1(
    "mojom", "Send blink::mojom::ContactsManager::Select", "input_parameters",
    [&](perfetto::TracedValue context){
      auto dict = std::move(context).WriteDictionary();
      perfetto::WriteIntoTracedValueWithFallback(
           dict.AddItem("multiple"), in_multiple,
                        "<value of type bool>");
      perfetto::WriteIntoTracedValueWithFallback(
           dict.AddItem("include_names"), in_include_names,
                        "<value of type bool>");
      perfetto::WriteIntoTracedValueWithFallback(
           dict.AddItem("include_emails"), in_include_emails,
                        "<value of type bool>");
      perfetto::WriteIntoTracedValueWithFallback(
           dict.AddItem("include_tel"), in_include_tel,
                        "<value of type bool>");
      perfetto::WriteIntoTracedValueWithFallback(
           dict.AddItem("include_addresses"), in_include_addresses,
                        "<value of type bool>");
      perfetto::WriteIntoTracedValueWithFallback(
           dict.AddItem("include_icons"), in_include_icons,
                        "<value of type bool>");
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
      internal::kContactsManager_Select_Name, kFlags, 0, 0, nullptr);
  mojo::internal::MessageFragment<
      ::blink::mojom::internal::ContactsManager_Select_Params_Data> params(
          message);
  params.Allocate();
  params->multiple = in_multiple;
  params->include_names = in_include_names;
  params->include_emails = in_include_emails;
  params->include_tel = in_include_tel;
  params->include_addresses = in_include_addresses;
  params->include_icons = in_include_icons;

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ContactsManager::Name_);
  message.set_method_name("Select");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new ContactsManager_Select_ForwardToCallback(
          std::move(callback)));
  ::mojo::internal::SendMojoMessage(*receiver_, message, std::move(responder));
}
class ContactsManager_Select_ProxyToResponder : public ::mojo::internal::ProxyToResponder {
 public:
  static ContactsManager::SelectCallback CreateCallback(
      ::mojo::Message& message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<ContactsManager_Select_ProxyToResponder> proxy(
        new ContactsManager_Select_ProxyToResponder(
            message, std::move(responder)));
    return base::BindOnce(&ContactsManager_Select_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~ContactsManager_Select_ProxyToResponder() {
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
  ContactsManager_Select_ProxyToResponder(
      ::mojo::Message& message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : ::mojo::internal::ProxyToResponder(message, std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "ContactsManager::SelectCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      absl::optional<WTF::Vector<ContactInfoPtr>> in_contacts);
};

bool ContactsManager_Select_ForwardToCallback::Accept(
    mojo::Message* message) {

  DCHECK(message->is_serialized());
  internal::ContactsManager_Select_ResponseParams_Data* params =
      reinterpret_cast<
          internal::ContactsManager_Select_ResponseParams_Data*>(
              message->mutable_payload());
  
  bool success = true;
  absl::optional<WTF::Vector<ContactInfoPtr>> p_contacts{};
  ContactsManager_Select_ResponseParamsDataView input_data_view(params, message);
  
  if (success && !input_data_view.ReadContacts(&p_contacts))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        ContactsManager::Name_, 0, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_contacts));
  return true;
}

void ContactsManager_Select_ProxyToResponder::Run(
    absl::optional<WTF::Vector<ContactInfoPtr>> in_contacts) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1(
    "mojom", "Send reply blink::mojom::ContactsManager::Select", "async_response_parameters",
    [&](perfetto::TracedValue context){
      auto dict = std::move(context).WriteDictionary();
      perfetto::WriteIntoTracedValueWithFallback(
           dict.AddItem("contacts"), in_contacts,
                        "<value of type absl::optional<WTF::Vector<ContactInfoPtr>>>");
   });
#endif
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0) |
      ((true) ? 0 : mojo::Message::kFlagNoInterrupt);
  
  mojo::Message message(
      internal::kContactsManager_Select_Name, kFlags, 0, 0, nullptr);
  mojo::internal::MessageFragment<
      ::blink::mojom::internal::ContactsManager_Select_ResponseParams_Data> params(
          message);
  params.Allocate();
  mojo::internal::MessageFragment<
      typename decltype(params->contacts)::BaseType>
      contacts_fragment(params.message());
  const mojo::internal::ContainerValidateParams contacts_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::blink::mojom::ContactInfoDataView>>(
      in_contacts, contacts_fragment, &contacts_validate_params);
  params->contacts.Set(
      contacts_fragment.is_null() ? nullptr : contacts_fragment.data());

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ContactsManager::Name_);
  message.set_method_name("Select");
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
bool ContactsManagerStubDispatch::Accept(
    ContactsManager* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kContactsManager_Select_Name: {
      break;
    }
  }
  return false;
}

// static
bool ContactsManagerStubDispatch::AcceptWithResponder(
    ContactsManager* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  [[maybe_unused]] const bool message_is_sync =
      message->has_flag(mojo::Message::kFlagIsSync);
  [[maybe_unused]] const uint64_t request_id = message->request_id();
  switch (message->header()->name) {
    case internal::kContactsManager_Select_Name: {

      internal::ContactsManager_Select_Params_Data* params =
          reinterpret_cast<
              internal::ContactsManager_Select_Params_Data*>(
                  message->mutable_payload());
      
      bool success = true;
      bool p_multiple{};
      bool p_include_names{};
      bool p_include_emails{};
      bool p_include_tel{};
      bool p_include_addresses{};
      bool p_include_icons{};
      ContactsManager_Select_ParamsDataView input_data_view(params, message);
      
      if (success)
        p_multiple = input_data_view.multiple();
      if (success)
        p_include_names = input_data_view.include_names();
      if (success)
        p_include_emails = input_data_view.include_emails();
      if (success)
        p_include_tel = input_data_view.include_tel();
      if (success)
        p_include_addresses = input_data_view.include_addresses();
      if (success)
        p_include_icons = input_data_view.include_icons();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ContactsManager::Name_, 0, false);
        return false;
      }
      ContactsManager::SelectCallback callback =
          ContactsManager_Select_ProxyToResponder::CreateCallback(
              *message, std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Select(
std::move(p_multiple), 
std::move(p_include_names), 
std::move(p_include_emails), 
std::move(p_include_tel), 
std::move(p_include_addresses), 
std::move(p_include_icons), std::move(callback));
      return true;
    }
  }
  return false;
}


static const mojo::internal::GenericValidationInfo kContactsManagerValidationInfo[] = {
    {&internal::ContactsManager_Select_Params_Data::Validate,
     &internal::ContactsManager_Select_ResponseParams_Data::Validate},
};

bool ContactsManagerRequestValidator::Accept(mojo::Message* message) {
  const char* name = ::blink::mojom::blink::ContactsManager::Name_;
  return mojo::internal::ValidateRequestGenericPacked(message, name, kContactsManagerValidationInfo);
}

bool ContactsManagerResponseValidator::Accept(mojo::Message* message) {
  const char* name = ::blink::mojom::blink::ContactsManager::Name_;
  return mojo::internal::ValidateResponseGenericPacked(message, name, kContactsManagerValidationInfo);
}


}  // namespace blink
}  // namespace mojom
}  // namespace blink


namespace mojo {


// static
bool StructTraits<::blink::mojom::blink::ContactIconBlob::DataView, ::blink::mojom::blink::ContactIconBlobPtr>::Read(
    ::blink::mojom::blink::ContactIconBlob::DataView input,
    ::blink::mojom::blink::ContactIconBlobPtr* output) {
  bool success = true;
  ::blink::mojom::blink::ContactIconBlobPtr result(::blink::mojom::blink::ContactIconBlob::New());
  
      if (success && !input.ReadMimeType(&result->mime_type))
        success = false;
      if (success && !input.ReadData(&result->data))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::blink::mojom::blink::ContactInfo::DataView, ::blink::mojom::blink::ContactInfoPtr>::Read(
    ::blink::mojom::blink::ContactInfo::DataView input,
    ::blink::mojom::blink::ContactInfoPtr* output) {
  bool success = true;
  ::blink::mojom::blink::ContactInfoPtr result(::blink::mojom::blink::ContactInfo::New());
  
      if (success && !input.ReadName(&result->name))
        success = false;
      if (success && !input.ReadEmail(&result->email))
        success = false;
      if (success && !input.ReadTel(&result->tel))
        success = false;
      if (success && !input.ReadAddress(&result->address))
        success = false;
      if (success && !input.ReadIcon(&result->icon))
        success = false;
  *output = std::move(result);
  return success;
}

}  // namespace mojo


// Symbols declared in the -test-utils.h header are defined here instead of a
// separate .cc file to save compile time.


namespace blink {
namespace mojom {
namespace blink {


void ContactsManagerInterceptorForTesting::Select(bool multiple, bool include_names, bool include_emails, bool include_tel, bool include_addresses, bool include_icons, SelectCallback callback) {
  GetForwardingInterface()->Select(std::move(multiple), std::move(include_names), std::move(include_emails), std::move(include_tel), std::move(include_addresses), std::move(include_icons), std::move(callback));
}
ContactsManagerAsyncWaiter::ContactsManagerAsyncWaiter(
    ContactsManager* proxy) : proxy_(proxy) {}

ContactsManagerAsyncWaiter::~ContactsManagerAsyncWaiter() = default;

void ContactsManagerAsyncWaiter::Select(
    bool multiple, bool include_names, bool include_emails, bool include_tel, bool include_addresses, bool include_icons, absl::optional<WTF::Vector<ContactInfoPtr>>* out_contacts) {
  base::RunLoop loop;
  proxy_->Select(std::move(multiple),std::move(include_names),std::move(include_emails),std::move(include_tel),std::move(include_addresses),std::move(include_icons),
      base::BindOnce(
          [](base::RunLoop* loop,
             absl::optional<WTF::Vector<ContactInfoPtr>>* out_contacts
,
             absl::optional<WTF::Vector<ContactInfoPtr>> contacts) {*out_contacts = std::move(contacts);
            loop->Quit();
          },
          &loop,
          out_contacts));
  loop.Run();
}





}  // namespace blink
}  // namespace mojom
}  // namespace blink


#if defined(__clang__)
#pragma clang diagnostic pop
#endif