// third_party/blink/public/mojom/cookie_store/cookie_store.mojom.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_COOKIE_STORE_COOKIE_STORE_MOJOM_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_COOKIE_STORE_COOKIE_STORE_MOJOM_H_

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

#include "third_party/blink/public/mojom/cookie_store/cookie_store.mojom-shared.h"
#include "third_party/blink/public/mojom/cookie_store/cookie_store.mojom-forward.h"
#include "services/network/public/mojom/restricted_cookie_manager.mojom-forward.h"
#include "url/mojom/url.mojom.h"
#include <string>
#include <vector>

#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/raw_ptr_impl_ref_traits.h"


#include "third_party/blink/public/common/common_export.h"




namespace blink {
namespace mojom {

class CookieStoreProxy;

template <typename ImplRefTraits>
class CookieStoreStub;

class CookieStoreRequestValidator;
class CookieStoreResponseValidator;


class BLINK_COMMON_EXPORT CookieStore
    : public CookieStoreInterfaceBase {
 public:
  using IPCStableHashFunction = uint32_t(*)();

  static const char Name_[];
  static IPCStableHashFunction MessageToMethodInfo_(mojo::Message& message);
  static const char* MessageToMethodName_(mojo::Message& message);
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;
  static constexpr bool HasUninterruptableMethods_ = false;

  using Base_ = CookieStoreInterfaceBase;
  using Proxy_ = CookieStoreProxy;

  template <typename ImplRefTraits>
  using Stub_ = CookieStoreStub<ImplRefTraits>;

  using RequestValidator_ = CookieStoreRequestValidator;
  using ResponseValidator_ = CookieStoreResponseValidator;
  enum MethodMinVersions : uint32_t {
    kAddSubscriptionsMinVersion = 0,
    kRemoveSubscriptionsMinVersion = 0,
    kGetSubscriptionsMinVersion = 0,
  };

// crbug.com/1340245 - this causes binary size bloat on Fuchsia, and we're OK
// with not having this data in traces there.
#if !BUILDFLAG(IS_FUCHSIA)
  struct AddSubscriptions_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct RemoveSubscriptions_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct GetSubscriptions_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
#endif // !BUILDFLAG(IS_FUCHSIA)
  virtual ~CookieStore() = default;


  using AddSubscriptionsCallback = base::OnceCallback<void(bool)>;
  
  virtual void AddSubscriptions(int64_t service_worker_registration_id, std::vector<CookieChangeSubscriptionPtr> subscription, AddSubscriptionsCallback callback) = 0;


  using RemoveSubscriptionsCallback = base::OnceCallback<void(bool)>;
  
  virtual void RemoveSubscriptions(int64_t service_worker_registration_id, std::vector<CookieChangeSubscriptionPtr> subscription, RemoveSubscriptionsCallback callback) = 0;


  using GetSubscriptionsCallback = base::OnceCallback<void(std::vector<CookieChangeSubscriptionPtr>, bool)>;
  
  virtual void GetSubscriptions(int64_t service_worker_registration_id, GetSubscriptionsCallback callback) = 0;
};



class BLINK_COMMON_EXPORT CookieStoreProxy
    : public CookieStore {
 public:
  using InterfaceType = CookieStore;

  explicit CookieStoreProxy(mojo::MessageReceiverWithResponder* receiver);
  
  void AddSubscriptions(int64_t service_worker_registration_id, std::vector<CookieChangeSubscriptionPtr> subscription, AddSubscriptionsCallback callback) final;
  
  void RemoveSubscriptions(int64_t service_worker_registration_id, std::vector<CookieChangeSubscriptionPtr> subscription, RemoveSubscriptionsCallback callback) final;
  
  void GetSubscriptions(int64_t service_worker_registration_id, GetSubscriptionsCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class BLINK_COMMON_EXPORT CookieStoreStubDispatch {
 public:
  static bool Accept(CookieStore* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      CookieStore* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<CookieStore>>
class CookieStoreStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  CookieStoreStub() = default;
  ~CookieStoreStub() override = default;

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return CookieStoreStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return CookieStoreStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_COMMON_EXPORT CookieStoreRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_COMMON_EXPORT CookieStoreResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};








class BLINK_COMMON_EXPORT CookieChangeSubscription {
 public:
  template <typename T>
  using EnableIfSame = std::enable_if_t<std::is_same<CookieChangeSubscription, T>::value>;
  using DataView = CookieChangeSubscriptionDataView;
  using Data_ = internal::CookieChangeSubscription_Data;

  template <typename... Args>
  static CookieChangeSubscriptionPtr New(Args&&... args) {
    return CookieChangeSubscriptionPtr(
        absl::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static CookieChangeSubscriptionPtr From(const U& u) {
    return mojo::TypeConverter<CookieChangeSubscriptionPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, CookieChangeSubscription>::Convert(*this);
  }


  CookieChangeSubscription();

  CookieChangeSubscription(
      const ::GURL& url,
      ::network::mojom::CookieMatchType match_type,
      const std::string& name);


  ~CookieChangeSubscription();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = CookieChangeSubscriptionPtr>
  CookieChangeSubscriptionPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T, CookieChangeSubscription::EnableIfSame<T>* = nullptr>
  bool Equals(const T& other) const;

  template <typename T, CookieChangeSubscription::EnableIfSame<T>* = nullptr>
  bool operator==(const T& rhs) const { return Equals(rhs); }
  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        CookieChangeSubscription::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        CookieChangeSubscription::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::CookieChangeSubscription_UnserializedMessageContext<
            UserType, CookieChangeSubscription::DataView>>(0, 0, std::move(input)),
        MOJO_CREATE_MESSAGE_FLAG_NONE);
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    mojo::Message message;
    return mojo::internal::DeserializeImpl<CookieChangeSubscription::DataView>(
        message, data, data_num_bytes, output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return CookieChangeSubscription::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::CookieChangeSubscription_UnserializedMessageContext<
            UserType, CookieChangeSubscription::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<CookieChangeSubscription::DataView>(
        input, input.payload(), input.payload_num_bytes(), output, Validate);
  }

  
  ::GURL url;
  
  ::network::mojom::CookieMatchType match_type;
  
  std::string name;

  // Serialise this struct into a trace.
  void WriteIntoTrace(perfetto::TracedValue traced_context) const;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

// The comparison operators are templates, so they are only instantiated if they
// are used. Thus, the bindings generator does not need to know whether
// comparison operators are available for members.
template <typename T, CookieChangeSubscription::EnableIfSame<T>* = nullptr>
bool operator<(const T& lhs, const T& rhs);

template <typename T, CookieChangeSubscription::EnableIfSame<T>* = nullptr>
bool operator<=(const T& lhs, const T& rhs) {
  return !(rhs < lhs);
}

template <typename T, CookieChangeSubscription::EnableIfSame<T>* = nullptr>
bool operator>(const T& lhs, const T& rhs) {
  return rhs < lhs;
}

template <typename T, CookieChangeSubscription::EnableIfSame<T>* = nullptr>
bool operator>=(const T& lhs, const T& rhs) {
  return !(lhs < rhs);
}

template <typename StructPtrType>
CookieChangeSubscriptionPtr CookieChangeSubscription::Clone() const {
  return New(
      mojo::Clone(url),
      mojo::Clone(match_type),
      mojo::Clone(name)
  );
}

template <typename T, CookieChangeSubscription::EnableIfSame<T>*>
bool CookieChangeSubscription::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->url, other_struct.url))
    return false;
  if (!mojo::Equals(this->match_type, other_struct.match_type))
    return false;
  if (!mojo::Equals(this->name, other_struct.name))
    return false;
  return true;
}

template <typename T, CookieChangeSubscription::EnableIfSame<T>*>
bool operator<(const T& lhs, const T& rhs) {
  if (lhs.url < rhs.url)
    return true;
  if (rhs.url < lhs.url)
    return false;
  if (lhs.match_type < rhs.match_type)
    return true;
  if (rhs.match_type < lhs.match_type)
    return false;
  if (lhs.name < rhs.name)
    return true;
  if (rhs.name < lhs.name)
    return false;
  return false;
}


}  // namespace mojom
}  // namespace blink

namespace mojo {


template <>
struct BLINK_COMMON_EXPORT StructTraits<::blink::mojom::CookieChangeSubscription::DataView,
                                         ::blink::mojom::CookieChangeSubscriptionPtr> {
  static bool IsNull(const ::blink::mojom::CookieChangeSubscriptionPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::CookieChangeSubscriptionPtr* output) { output->reset(); }

  static const decltype(::blink::mojom::CookieChangeSubscription::url)& url(
      const ::blink::mojom::CookieChangeSubscriptionPtr& input) {
    return input->url;
  }

  static decltype(::blink::mojom::CookieChangeSubscription::match_type) match_type(
      const ::blink::mojom::CookieChangeSubscriptionPtr& input) {
    return input->match_type;
  }

  static const decltype(::blink::mojom::CookieChangeSubscription::name)& name(
      const ::blink::mojom::CookieChangeSubscriptionPtr& input) {
    return input->name;
  }

  static bool Read(::blink::mojom::CookieChangeSubscription::DataView input, ::blink::mojom::CookieChangeSubscriptionPtr* output);
};

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_COOKIE_STORE_COOKIE_STORE_MOJOM_H_