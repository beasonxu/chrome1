// third_party/blink/public/mojom/contacts/contacts_manager.mojom-blink.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_CONTACTS_CONTACTS_MANAGER_MOJOM_BLINK_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_CONTACTS_CONTACTS_MANAGER_MOJOM_BLINK_H_

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

#include "third_party/blink/public/mojom/contacts/contacts_manager.mojom-shared.h"
#include "third_party/blink/public/mojom/contacts/contacts_manager.mojom-blink-forward.h"
#include "components/payments/mojom/payment_request_data.mojom-blink.h"

#include "mojo/public/cpp/bindings/lib/wtf_clone_equals_util.h"
#include "mojo/public/cpp/bindings/lib/wtf_hash_util.h"
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/raw_ptr_impl_ref_traits.h"


#include "third_party/blink/renderer/platform/platform_export.h"




namespace blink {
namespace mojom {
namespace blink {

class ContactsManagerProxy;

template <typename ImplRefTraits>
class ContactsManagerStub;

class ContactsManagerRequestValidator;
class ContactsManagerResponseValidator;


class PLATFORM_EXPORT ContactsManager
    : public ContactsManagerInterfaceBase {
 public:
  using IPCStableHashFunction = uint32_t(*)();

  static const char Name_[];
  static IPCStableHashFunction MessageToMethodInfo_(mojo::Message& message);
  static const char* MessageToMethodName_(mojo::Message& message);
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;
  static constexpr bool HasUninterruptableMethods_ = false;

  using Base_ = ContactsManagerInterfaceBase;
  using Proxy_ = ContactsManagerProxy;

  template <typename ImplRefTraits>
  using Stub_ = ContactsManagerStub<ImplRefTraits>;

  using RequestValidator_ = ContactsManagerRequestValidator;
  using ResponseValidator_ = ContactsManagerResponseValidator;
  enum MethodMinVersions : uint32_t {
    kSelectMinVersion = 0,
  };

// crbug.com/1340245 - this causes binary size bloat on Fuchsia, and we're OK
// with not having this data in traces there.
#if !BUILDFLAG(IS_FUCHSIA)
  struct Select_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
#endif // !BUILDFLAG(IS_FUCHSIA)
  virtual ~ContactsManager() = default;


  using SelectCallback = base::OnceCallback<void(absl::optional<WTF::Vector<ContactInfoPtr>>)>;
  
  virtual void Select(bool multiple, bool include_names, bool include_emails, bool include_tel, bool include_addresses, bool include_icons, SelectCallback callback) = 0;
};



class PLATFORM_EXPORT ContactsManagerProxy
    : public ContactsManager {
 public:
  using InterfaceType = ContactsManager;

  explicit ContactsManagerProxy(mojo::MessageReceiverWithResponder* receiver);
  
  void Select(bool multiple, bool include_names, bool include_emails, bool include_tel, bool include_addresses, bool include_icons, SelectCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class PLATFORM_EXPORT ContactsManagerStubDispatch {
 public:
  static bool Accept(ContactsManager* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      ContactsManager* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<ContactsManager>>
class ContactsManagerStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  ContactsManagerStub() = default;
  ~ContactsManagerStub() override = default;

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ContactsManagerStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ContactsManagerStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class PLATFORM_EXPORT ContactsManagerRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class PLATFORM_EXPORT ContactsManagerResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};









class PLATFORM_EXPORT ContactIconBlob {
 public:
  template <typename T>
  using EnableIfSame = std::enable_if_t<std::is_same<ContactIconBlob, T>::value>;
  using DataView = ContactIconBlobDataView;
  using Data_ = internal::ContactIconBlob_Data;

  template <typename... Args>
  static ContactIconBlobPtr New(Args&&... args) {
    return ContactIconBlobPtr(
        absl::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static ContactIconBlobPtr From(const U& u) {
    return mojo::TypeConverter<ContactIconBlobPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, ContactIconBlob>::Convert(*this);
  }


  ContactIconBlob();

  ContactIconBlob(
      const WTF::String& mime_type,
      WTF::Vector<uint8_t> data);


  ~ContactIconBlob();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = ContactIconBlobPtr>
  ContactIconBlobPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T, ContactIconBlob::EnableIfSame<T>* = nullptr>
  bool Equals(const T& other) const;

  template <typename T, ContactIconBlob::EnableIfSame<T>* = nullptr>
  bool operator==(const T& rhs) const { return Equals(rhs); }
  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        ContactIconBlob::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        ContactIconBlob::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::ContactIconBlob_UnserializedMessageContext<
            UserType, ContactIconBlob::DataView>>(0, 0, std::move(input)),
        MOJO_CREATE_MESSAGE_FLAG_NONE);
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    mojo::Message message;
    return mojo::internal::DeserializeImpl<ContactIconBlob::DataView>(
        message, data, data_num_bytes, output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return ContactIconBlob::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::ContactIconBlob_UnserializedMessageContext<
            UserType, ContactIconBlob::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<ContactIconBlob::DataView>(
        input, input.payload(), input.payload_num_bytes(), output, Validate);
  }

  
  WTF::String mime_type;
  
  WTF::Vector<uint8_t> data;

  // Serialise this struct into a trace.
  void WriteIntoTrace(perfetto::TracedValue traced_context) const;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

// The comparison operators are templates, so they are only instantiated if they
// are used. Thus, the bindings generator does not need to know whether
// comparison operators are available for members.
template <typename T, ContactIconBlob::EnableIfSame<T>* = nullptr>
bool operator<(const T& lhs, const T& rhs);

template <typename T, ContactIconBlob::EnableIfSame<T>* = nullptr>
bool operator<=(const T& lhs, const T& rhs) {
  return !(rhs < lhs);
}

template <typename T, ContactIconBlob::EnableIfSame<T>* = nullptr>
bool operator>(const T& lhs, const T& rhs) {
  return rhs < lhs;
}

template <typename T, ContactIconBlob::EnableIfSame<T>* = nullptr>
bool operator>=(const T& lhs, const T& rhs) {
  return !(lhs < rhs);
}





class PLATFORM_EXPORT ContactInfo {
 public:
  template <typename T>
  using EnableIfSame = std::enable_if_t<std::is_same<ContactInfo, T>::value>;
  using DataView = ContactInfoDataView;
  using Data_ = internal::ContactInfo_Data;

  template <typename... Args>
  static ContactInfoPtr New(Args&&... args) {
    return ContactInfoPtr(
        absl::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static ContactInfoPtr From(const U& u) {
    return mojo::TypeConverter<ContactInfoPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, ContactInfo>::Convert(*this);
  }


  ContactInfo();

  ContactInfo(
      absl::optional<WTF::Vector<WTF::String>> name,
      absl::optional<WTF::Vector<WTF::String>> email,
      absl::optional<WTF::Vector<WTF::String>> tel,
      absl::optional<WTF::Vector<::payments::mojom::blink::PaymentAddressPtr>> address,
      absl::optional<WTF::Vector<ContactIconBlobPtr>> icon);

ContactInfo(const ContactInfo&) = delete;
ContactInfo& operator=(const ContactInfo&) = delete;

  ~ContactInfo();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = ContactInfoPtr>
  ContactInfoPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T, ContactInfo::EnableIfSame<T>* = nullptr>
  bool Equals(const T& other) const;

  template <typename T, ContactInfo::EnableIfSame<T>* = nullptr>
  bool operator==(const T& rhs) const { return Equals(rhs); }
  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        ContactInfo::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        ContactInfo::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::ContactInfo_UnserializedMessageContext<
            UserType, ContactInfo::DataView>>(0, 0, std::move(input)),
        MOJO_CREATE_MESSAGE_FLAG_NONE);
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    mojo::Message message;
    return mojo::internal::DeserializeImpl<ContactInfo::DataView>(
        message, data, data_num_bytes, output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return ContactInfo::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::ContactInfo_UnserializedMessageContext<
            UserType, ContactInfo::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<ContactInfo::DataView>(
        input, input.payload(), input.payload_num_bytes(), output, Validate);
  }

  
  absl::optional<WTF::Vector<WTF::String>> name;
  
  absl::optional<WTF::Vector<WTF::String>> email;
  
  absl::optional<WTF::Vector<WTF::String>> tel;
  
  absl::optional<WTF::Vector<::payments::mojom::blink::PaymentAddressPtr>> address;
  
  absl::optional<WTF::Vector<ContactIconBlobPtr>> icon;

  // Serialise this struct into a trace.
  void WriteIntoTrace(perfetto::TracedValue traced_context) const;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

// The comparison operators are templates, so they are only instantiated if they
// are used. Thus, the bindings generator does not need to know whether
// comparison operators are available for members.
template <typename T, ContactInfo::EnableIfSame<T>* = nullptr>
bool operator<(const T& lhs, const T& rhs);

template <typename T, ContactInfo::EnableIfSame<T>* = nullptr>
bool operator<=(const T& lhs, const T& rhs) {
  return !(rhs < lhs);
}

template <typename T, ContactInfo::EnableIfSame<T>* = nullptr>
bool operator>(const T& lhs, const T& rhs) {
  return rhs < lhs;
}

template <typename T, ContactInfo::EnableIfSame<T>* = nullptr>
bool operator>=(const T& lhs, const T& rhs) {
  return !(lhs < rhs);
}

template <typename StructPtrType>
ContactIconBlobPtr ContactIconBlob::Clone() const {
  return New(
      mojo::Clone(mime_type),
      mojo::Clone(data)
  );
}

template <typename T, ContactIconBlob::EnableIfSame<T>*>
bool ContactIconBlob::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->mime_type, other_struct.mime_type))
    return false;
  if (!mojo::Equals(this->data, other_struct.data))
    return false;
  return true;
}

template <typename T, ContactIconBlob::EnableIfSame<T>*>
bool operator<(const T& lhs, const T& rhs) {
  if (lhs.mime_type < rhs.mime_type)
    return true;
  if (rhs.mime_type < lhs.mime_type)
    return false;
  if (lhs.data < rhs.data)
    return true;
  if (rhs.data < lhs.data)
    return false;
  return false;
}
template <typename StructPtrType>
ContactInfoPtr ContactInfo::Clone() const {
  return New(
      mojo::Clone(name),
      mojo::Clone(email),
      mojo::Clone(tel),
      mojo::Clone(address),
      mojo::Clone(icon)
  );
}

template <typename T, ContactInfo::EnableIfSame<T>*>
bool ContactInfo::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->name, other_struct.name))
    return false;
  if (!mojo::Equals(this->email, other_struct.email))
    return false;
  if (!mojo::Equals(this->tel, other_struct.tel))
    return false;
  if (!mojo::Equals(this->address, other_struct.address))
    return false;
  if (!mojo::Equals(this->icon, other_struct.icon))
    return false;
  return true;
}

template <typename T, ContactInfo::EnableIfSame<T>*>
bool operator<(const T& lhs, const T& rhs) {
  if (lhs.name < rhs.name)
    return true;
  if (rhs.name < lhs.name)
    return false;
  if (lhs.email < rhs.email)
    return true;
  if (rhs.email < lhs.email)
    return false;
  if (lhs.tel < rhs.tel)
    return true;
  if (rhs.tel < lhs.tel)
    return false;
  if (lhs.address < rhs.address)
    return true;
  if (rhs.address < lhs.address)
    return false;
  if (lhs.icon < rhs.icon)
    return true;
  if (rhs.icon < lhs.icon)
    return false;
  return false;
}


}  // namespace blink
}  // namespace mojom
}  // namespace blink

namespace mojo {


template <>
struct PLATFORM_EXPORT StructTraits<::blink::mojom::blink::ContactIconBlob::DataView,
                                         ::blink::mojom::blink::ContactIconBlobPtr> {
  static bool IsNull(const ::blink::mojom::blink::ContactIconBlobPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::blink::ContactIconBlobPtr* output) { output->reset(); }

  static const decltype(::blink::mojom::blink::ContactIconBlob::mime_type)& mime_type(
      const ::blink::mojom::blink::ContactIconBlobPtr& input) {
    return input->mime_type;
  }

  static const decltype(::blink::mojom::blink::ContactIconBlob::data)& data(
      const ::blink::mojom::blink::ContactIconBlobPtr& input) {
    return input->data;
  }

  static bool Read(::blink::mojom::blink::ContactIconBlob::DataView input, ::blink::mojom::blink::ContactIconBlobPtr* output);
};


template <>
struct PLATFORM_EXPORT StructTraits<::blink::mojom::blink::ContactInfo::DataView,
                                         ::blink::mojom::blink::ContactInfoPtr> {
  static bool IsNull(const ::blink::mojom::blink::ContactInfoPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::blink::ContactInfoPtr* output) { output->reset(); }

  static const decltype(::blink::mojom::blink::ContactInfo::name)& name(
      const ::blink::mojom::blink::ContactInfoPtr& input) {
    return input->name;
  }

  static const decltype(::blink::mojom::blink::ContactInfo::email)& email(
      const ::blink::mojom::blink::ContactInfoPtr& input) {
    return input->email;
  }

  static const decltype(::blink::mojom::blink::ContactInfo::tel)& tel(
      const ::blink::mojom::blink::ContactInfoPtr& input) {
    return input->tel;
  }

  static const decltype(::blink::mojom::blink::ContactInfo::address)& address(
      const ::blink::mojom::blink::ContactInfoPtr& input) {
    return input->address;
  }

  static const decltype(::blink::mojom::blink::ContactInfo::icon)& icon(
      const ::blink::mojom::blink::ContactInfoPtr& input) {
    return input->icon;
  }

  static bool Read(::blink::mojom::blink::ContactInfo::DataView input, ::blink::mojom::blink::ContactInfoPtr* output);
};

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_CONTACTS_CONTACTS_MANAGER_MOJOM_BLINK_H_