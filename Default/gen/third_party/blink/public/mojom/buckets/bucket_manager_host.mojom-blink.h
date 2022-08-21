// third_party/blink/public/mojom/buckets/bucket_manager_host.mojom-blink.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_BUCKETS_BUCKET_MANAGER_HOST_MOJOM_BLINK_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_BUCKETS_BUCKET_MANAGER_HOST_MOJOM_BLINK_H_

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

#include "third_party/blink/public/mojom/buckets/bucket_manager_host.mojom-shared.h"
#include "third_party/blink/public/mojom/buckets/bucket_manager_host.mojom-blink-forward.h"
#include "mojo/public/mojom/base/time.mojom-blink.h"
#include "third_party/blink/public/mojom/indexeddb/indexeddb.mojom-blink-forward.h"
#include "third_party/blink/public/mojom/locks/lock_manager.mojom-blink-forward.h"

#include "mojo/public/cpp/bindings/lib/wtf_clone_equals_util.h"
#include "mojo/public/cpp/bindings/lib/wtf_hash_util.h"
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/raw_ptr_impl_ref_traits.h"


#include "third_party/blink/renderer/modules/modules_export.h"




namespace WTF {
struct blink_mojom_internal_BucketDurability_DataHashFn {
  static unsigned GetHash(const ::blink::mojom::BucketDurability& value) {
    using utype = std::underlying_type<::blink::mojom::BucketDurability>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::blink::mojom::BucketDurability& left, const ::blink::mojom::BucketDurability& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::blink::mojom::BucketDurability>
    : public GenericHashTraits<::blink::mojom::BucketDurability> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool kEmptyValueIsZero = false;
  static ::blink::mojom::BucketDurability EmptyValue() { return static_cast<::blink::mojom::BucketDurability>(-1000000); }
  static void ConstructDeletedValue(::blink::mojom::BucketDurability& slot, bool) {
    slot = static_cast<::blink::mojom::BucketDurability>(-1000001);
  }
  static bool IsDeletedValue(const ::blink::mojom::BucketDurability& value) {
    return value == static_cast<::blink::mojom::BucketDurability>(-1000001);
  }
};
}  // namespace WTF


namespace blink {
namespace mojom {
namespace blink {

class BucketHostProxy;

template <typename ImplRefTraits>
class BucketHostStub;

class BucketHostRequestValidator;
class BucketHostResponseValidator;


class MODULES_EXPORT BucketHost
    : public BucketHostInterfaceBase {
 public:
  using IPCStableHashFunction = uint32_t(*)();

  static const char Name_[];
  static IPCStableHashFunction MessageToMethodInfo_(mojo::Message& message);
  static const char* MessageToMethodName_(mojo::Message& message);
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;
  static constexpr bool HasUninterruptableMethods_ = false;

  using Base_ = BucketHostInterfaceBase;
  using Proxy_ = BucketHostProxy;

  template <typename ImplRefTraits>
  using Stub_ = BucketHostStub<ImplRefTraits>;

  using RequestValidator_ = BucketHostRequestValidator;
  using ResponseValidator_ = BucketHostResponseValidator;
  enum MethodMinVersions : uint32_t {
    kPersistMinVersion = 0,
    kPersistedMinVersion = 0,
    kEstimateMinVersion = 0,
    kDurabilityMinVersion = 0,
    kSetExpiresMinVersion = 0,
    kExpiresMinVersion = 0,
    kGetIdbFactoryMinVersion = 0,
    kGetLockManagerMinVersion = 0,
  };

// crbug.com/1340245 - this causes binary size bloat on Fuchsia, and we're OK
// with not having this data in traces there.
#if !BUILDFLAG(IS_FUCHSIA)
  struct Persist_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct Persisted_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct Estimate_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct Durability_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct SetExpires_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct Expires_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct GetIdbFactory_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct GetLockManager_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
#endif // !BUILDFLAG(IS_FUCHSIA)
  virtual ~BucketHost() = default;


  using PersistCallback = base::OnceCallback<void(bool, bool)>;
  
  virtual void Persist(PersistCallback callback) = 0;


  using PersistedCallback = base::OnceCallback<void(bool, bool)>;
  
  virtual void Persisted(PersistedCallback callback) = 0;


  using EstimateCallback = base::OnceCallback<void(int64_t, int64_t, bool)>;
  
  virtual void Estimate(EstimateCallback callback) = 0;


  using DurabilityCallback = base::OnceCallback<void(BucketDurability, bool)>;
  
  virtual void Durability(DurabilityCallback callback) = 0;


  using SetExpiresCallback = base::OnceCallback<void(bool)>;
  
  virtual void SetExpires(::base::Time expires, SetExpiresCallback callback) = 0;


  using ExpiresCallback = base::OnceCallback<void(absl::optional<::base::Time>, bool)>;
  
  virtual void Expires(ExpiresCallback callback) = 0;

  
  virtual void GetIdbFactory(::mojo::PendingReceiver<::blink::mojom::blink::IDBFactory> idb_factory) = 0;

  
  virtual void GetLockManager(::mojo::PendingReceiver<::blink::mojom::blink::LockManager> lock_manager) = 0;
};

class BucketManagerHostProxy;

template <typename ImplRefTraits>
class BucketManagerHostStub;

class BucketManagerHostRequestValidator;
class BucketManagerHostResponseValidator;


class MODULES_EXPORT BucketManagerHost
    : public BucketManagerHostInterfaceBase {
 public:
  using IPCStableHashFunction = uint32_t(*)();

  static const char Name_[];
  static IPCStableHashFunction MessageToMethodInfo_(mojo::Message& message);
  static const char* MessageToMethodName_(mojo::Message& message);
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;
  static constexpr bool HasUninterruptableMethods_ = false;

  using Base_ = BucketManagerHostInterfaceBase;
  using Proxy_ = BucketManagerHostProxy;

  template <typename ImplRefTraits>
  using Stub_ = BucketManagerHostStub<ImplRefTraits>;

  using RequestValidator_ = BucketManagerHostRequestValidator;
  using ResponseValidator_ = BucketManagerHostResponseValidator;
  enum MethodMinVersions : uint32_t {
    kOpenBucketMinVersion = 0,
    kKeysMinVersion = 0,
    kDeleteBucketMinVersion = 0,
  };

// crbug.com/1340245 - this causes binary size bloat on Fuchsia, and we're OK
// with not having this data in traces there.
#if !BUILDFLAG(IS_FUCHSIA)
  struct OpenBucket_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct Keys_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct DeleteBucket_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
#endif // !BUILDFLAG(IS_FUCHSIA)
  virtual ~BucketManagerHost() = default;


  using OpenBucketCallback = base::OnceCallback<void(::mojo::PendingRemote<BucketHost>)>;
  
  virtual void OpenBucket(const WTF::String& name, BucketPoliciesPtr policy, OpenBucketCallback callback) = 0;


  using KeysCallback = base::OnceCallback<void(const WTF::Vector<WTF::String>&, bool)>;
  
  virtual void Keys(KeysCallback callback) = 0;


  using DeleteBucketCallback = base::OnceCallback<void(bool)>;
  
  virtual void DeleteBucket(const WTF::String& name, DeleteBucketCallback callback) = 0;
};



class MODULES_EXPORT BucketHostProxy
    : public BucketHost {
 public:
  using InterfaceType = BucketHost;

  explicit BucketHostProxy(mojo::MessageReceiverWithResponder* receiver);
  
  void Persist(PersistCallback callback) final;
  
  void Persisted(PersistedCallback callback) final;
  
  void Estimate(EstimateCallback callback) final;
  
  void Durability(DurabilityCallback callback) final;
  
  void SetExpires(::base::Time expires, SetExpiresCallback callback) final;
  
  void Expires(ExpiresCallback callback) final;
  
  void GetIdbFactory(::mojo::PendingReceiver<::blink::mojom::blink::IDBFactory> idb_factory) final;
  
  void GetLockManager(::mojo::PendingReceiver<::blink::mojom::blink::LockManager> lock_manager) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};



class MODULES_EXPORT BucketManagerHostProxy
    : public BucketManagerHost {
 public:
  using InterfaceType = BucketManagerHost;

  explicit BucketManagerHostProxy(mojo::MessageReceiverWithResponder* receiver);
  
  void OpenBucket(const WTF::String& name, BucketPoliciesPtr policy, OpenBucketCallback callback) final;
  
  void Keys(KeysCallback callback) final;
  
  void DeleteBucket(const WTF::String& name, DeleteBucketCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class MODULES_EXPORT BucketHostStubDispatch {
 public:
  static bool Accept(BucketHost* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      BucketHost* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<BucketHost>>
class BucketHostStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  BucketHostStub() = default;
  ~BucketHostStub() override = default;

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return BucketHostStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return BucketHostStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class MODULES_EXPORT BucketManagerHostStubDispatch {
 public:
  static bool Accept(BucketManagerHost* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      BucketManagerHost* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<BucketManagerHost>>
class BucketManagerHostStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  BucketManagerHostStub() = default;
  ~BucketManagerHostStub() override = default;

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return BucketManagerHostStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return BucketManagerHostStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class MODULES_EXPORT BucketHostRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class MODULES_EXPORT BucketManagerHostRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class MODULES_EXPORT BucketHostResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class MODULES_EXPORT BucketManagerHostResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};








class MODULES_EXPORT BucketPolicies {
 public:
  template <typename T>
  using EnableIfSame = std::enable_if_t<std::is_same<BucketPolicies, T>::value>;
  using DataView = BucketPoliciesDataView;
  using Data_ = internal::BucketPolicies_Data;

  template <typename... Args>
  static BucketPoliciesPtr New(Args&&... args) {
    return BucketPoliciesPtr(
        absl::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static BucketPoliciesPtr From(const U& u) {
    return mojo::TypeConverter<BucketPoliciesPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, BucketPolicies>::Convert(*this);
  }


  BucketPolicies();

  BucketPolicies(
      bool persisted,
      bool has_persisted,
      BucketDurability durability,
      bool has_durability,
      int64_t quota,
      bool has_quota,
      absl::optional<::base::Time> expires);


  ~BucketPolicies();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = BucketPoliciesPtr>
  BucketPoliciesPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T, BucketPolicies::EnableIfSame<T>* = nullptr>
  bool Equals(const T& other) const;

  template <typename T, BucketPolicies::EnableIfSame<T>* = nullptr>
  bool operator==(const T& rhs) const { return Equals(rhs); }
  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        BucketPolicies::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        BucketPolicies::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::BucketPolicies_UnserializedMessageContext<
            UserType, BucketPolicies::DataView>>(0, 0, std::move(input)),
        MOJO_CREATE_MESSAGE_FLAG_NONE);
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    mojo::Message message;
    return mojo::internal::DeserializeImpl<BucketPolicies::DataView>(
        message, data, data_num_bytes, output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return BucketPolicies::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::BucketPolicies_UnserializedMessageContext<
            UserType, BucketPolicies::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<BucketPolicies::DataView>(
        input, input.payload(), input.payload_num_bytes(), output, Validate);
  }

  
  bool persisted;
  
  bool has_persisted;
  
  BucketDurability durability;
  
  bool has_durability;
  
  int64_t quota;
  
  bool has_quota;
  
  absl::optional<::base::Time> expires;

  // Serialise this struct into a trace.
  void WriteIntoTrace(perfetto::TracedValue traced_context) const;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

// The comparison operators are templates, so they are only instantiated if they
// are used. Thus, the bindings generator does not need to know whether
// comparison operators are available for members.
template <typename T, BucketPolicies::EnableIfSame<T>* = nullptr>
bool operator<(const T& lhs, const T& rhs);

template <typename T, BucketPolicies::EnableIfSame<T>* = nullptr>
bool operator<=(const T& lhs, const T& rhs) {
  return !(rhs < lhs);
}

template <typename T, BucketPolicies::EnableIfSame<T>* = nullptr>
bool operator>(const T& lhs, const T& rhs) {
  return rhs < lhs;
}

template <typename T, BucketPolicies::EnableIfSame<T>* = nullptr>
bool operator>=(const T& lhs, const T& rhs) {
  return !(lhs < rhs);
}

template <typename StructPtrType>
BucketPoliciesPtr BucketPolicies::Clone() const {
  return New(
      mojo::Clone(persisted),
      mojo::Clone(has_persisted),
      mojo::Clone(durability),
      mojo::Clone(has_durability),
      mojo::Clone(quota),
      mojo::Clone(has_quota),
      mojo::Clone(expires)
  );
}

template <typename T, BucketPolicies::EnableIfSame<T>*>
bool BucketPolicies::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->persisted, other_struct.persisted))
    return false;
  if (!mojo::Equals(this->has_persisted, other_struct.has_persisted))
    return false;
  if (!mojo::Equals(this->durability, other_struct.durability))
    return false;
  if (!mojo::Equals(this->has_durability, other_struct.has_durability))
    return false;
  if (!mojo::Equals(this->quota, other_struct.quota))
    return false;
  if (!mojo::Equals(this->has_quota, other_struct.has_quota))
    return false;
  if (!mojo::Equals(this->expires, other_struct.expires))
    return false;
  return true;
}

template <typename T, BucketPolicies::EnableIfSame<T>*>
bool operator<(const T& lhs, const T& rhs) {
  if (lhs.persisted < rhs.persisted)
    return true;
  if (rhs.persisted < lhs.persisted)
    return false;
  if (lhs.has_persisted < rhs.has_persisted)
    return true;
  if (rhs.has_persisted < lhs.has_persisted)
    return false;
  if (lhs.durability < rhs.durability)
    return true;
  if (rhs.durability < lhs.durability)
    return false;
  if (lhs.has_durability < rhs.has_durability)
    return true;
  if (rhs.has_durability < lhs.has_durability)
    return false;
  if (lhs.quota < rhs.quota)
    return true;
  if (rhs.quota < lhs.quota)
    return false;
  if (lhs.has_quota < rhs.has_quota)
    return true;
  if (rhs.has_quota < lhs.has_quota)
    return false;
  if (lhs.expires < rhs.expires)
    return true;
  if (rhs.expires < lhs.expires)
    return false;
  return false;
}


}  // namespace blink
}  // namespace mojom
}  // namespace blink

namespace mojo {


template <>
struct MODULES_EXPORT StructTraits<::blink::mojom::blink::BucketPolicies::DataView,
                                         ::blink::mojom::blink::BucketPoliciesPtr> {
  static bool IsNull(const ::blink::mojom::blink::BucketPoliciesPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::blink::BucketPoliciesPtr* output) { output->reset(); }

  static decltype(::blink::mojom::blink::BucketPolicies::persisted) persisted(
      const ::blink::mojom::blink::BucketPoliciesPtr& input) {
    return input->persisted;
  }

  static decltype(::blink::mojom::blink::BucketPolicies::has_persisted) has_persisted(
      const ::blink::mojom::blink::BucketPoliciesPtr& input) {
    return input->has_persisted;
  }

  static decltype(::blink::mojom::blink::BucketPolicies::durability) durability(
      const ::blink::mojom::blink::BucketPoliciesPtr& input) {
    return input->durability;
  }

  static decltype(::blink::mojom::blink::BucketPolicies::has_durability) has_durability(
      const ::blink::mojom::blink::BucketPoliciesPtr& input) {
    return input->has_durability;
  }

  static decltype(::blink::mojom::blink::BucketPolicies::quota) quota(
      const ::blink::mojom::blink::BucketPoliciesPtr& input) {
    return input->quota;
  }

  static decltype(::blink::mojom::blink::BucketPolicies::has_quota) has_quota(
      const ::blink::mojom::blink::BucketPoliciesPtr& input) {
    return input->has_quota;
  }

  static const decltype(::blink::mojom::blink::BucketPolicies::expires)& expires(
      const ::blink::mojom::blink::BucketPoliciesPtr& input) {
    return input->expires;
  }

  static bool Read(::blink::mojom::blink::BucketPolicies::DataView input, ::blink::mojom::blink::BucketPoliciesPtr* output);
};

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_BUCKETS_BUCKET_MANAGER_HOST_MOJOM_BLINK_H_