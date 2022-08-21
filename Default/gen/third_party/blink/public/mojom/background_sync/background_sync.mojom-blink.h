// third_party/blink/public/mojom/background_sync/background_sync.mojom-blink.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_BACKGROUND_SYNC_BACKGROUND_SYNC_MOJOM_BLINK_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_BACKGROUND_SYNC_BACKGROUND_SYNC_MOJOM_BLINK_H_

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

#include "third_party/blink/public/mojom/background_sync/background_sync.mojom-shared.h"
#include "third_party/blink/public/mojom/background_sync/background_sync.mojom-blink-forward.h"

#include "mojo/public/cpp/bindings/lib/wtf_clone_equals_util.h"
#include "mojo/public/cpp/bindings/lib/wtf_hash_util.h"
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/raw_ptr_impl_ref_traits.h"


#include "third_party/blink/renderer/platform/platform_export.h"




namespace WTF {
struct blink_mojom_internal_BackgroundSyncError_DataHashFn {
  static unsigned GetHash(const ::blink::mojom::BackgroundSyncError& value) {
    using utype = std::underlying_type<::blink::mojom::BackgroundSyncError>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::blink::mojom::BackgroundSyncError& left, const ::blink::mojom::BackgroundSyncError& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::blink::mojom::BackgroundSyncError>
    : public GenericHashTraits<::blink::mojom::BackgroundSyncError> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool kEmptyValueIsZero = false;
  static ::blink::mojom::BackgroundSyncError EmptyValue() { return static_cast<::blink::mojom::BackgroundSyncError>(-1000000); }
  static void ConstructDeletedValue(::blink::mojom::BackgroundSyncError& slot, bool) {
    slot = static_cast<::blink::mojom::BackgroundSyncError>(-1000001);
  }
  static bool IsDeletedValue(const ::blink::mojom::BackgroundSyncError& value) {
    return value == static_cast<::blink::mojom::BackgroundSyncError>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct blink_mojom_internal_BackgroundSyncState_DataHashFn {
  static unsigned GetHash(const ::blink::mojom::BackgroundSyncState& value) {
    using utype = std::underlying_type<::blink::mojom::BackgroundSyncState>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::blink::mojom::BackgroundSyncState& left, const ::blink::mojom::BackgroundSyncState& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::blink::mojom::BackgroundSyncState>
    : public GenericHashTraits<::blink::mojom::BackgroundSyncState> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool kEmptyValueIsZero = false;
  static ::blink::mojom::BackgroundSyncState EmptyValue() { return static_cast<::blink::mojom::BackgroundSyncState>(-1000000); }
  static void ConstructDeletedValue(::blink::mojom::BackgroundSyncState& slot, bool) {
    slot = static_cast<::blink::mojom::BackgroundSyncState>(-1000001);
  }
  static bool IsDeletedValue(const ::blink::mojom::BackgroundSyncState& value) {
    return value == static_cast<::blink::mojom::BackgroundSyncState>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct blink_mojom_internal_BackgroundSyncEventLastChance_DataHashFn {
  static unsigned GetHash(const ::blink::mojom::BackgroundSyncEventLastChance& value) {
    using utype = std::underlying_type<::blink::mojom::BackgroundSyncEventLastChance>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::blink::mojom::BackgroundSyncEventLastChance& left, const ::blink::mojom::BackgroundSyncEventLastChance& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::blink::mojom::BackgroundSyncEventLastChance>
    : public GenericHashTraits<::blink::mojom::BackgroundSyncEventLastChance> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool kEmptyValueIsZero = false;
  static ::blink::mojom::BackgroundSyncEventLastChance EmptyValue() { return static_cast<::blink::mojom::BackgroundSyncEventLastChance>(-1000000); }
  static void ConstructDeletedValue(::blink::mojom::BackgroundSyncEventLastChance& slot, bool) {
    slot = static_cast<::blink::mojom::BackgroundSyncEventLastChance>(-1000001);
  }
  static bool IsDeletedValue(const ::blink::mojom::BackgroundSyncEventLastChance& value) {
    return value == static_cast<::blink::mojom::BackgroundSyncEventLastChance>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct blink_mojom_internal_BackgroundSyncType_DataHashFn {
  static unsigned GetHash(const ::blink::mojom::BackgroundSyncType& value) {
    using utype = std::underlying_type<::blink::mojom::BackgroundSyncType>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::blink::mojom::BackgroundSyncType& left, const ::blink::mojom::BackgroundSyncType& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::blink::mojom::BackgroundSyncType>
    : public GenericHashTraits<::blink::mojom::BackgroundSyncType> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool kEmptyValueIsZero = false;
  static ::blink::mojom::BackgroundSyncType EmptyValue() { return static_cast<::blink::mojom::BackgroundSyncType>(-1000000); }
  static void ConstructDeletedValue(::blink::mojom::BackgroundSyncType& slot, bool) {
    slot = static_cast<::blink::mojom::BackgroundSyncType>(-1000001);
  }
  static bool IsDeletedValue(const ::blink::mojom::BackgroundSyncType& value) {
    return value == static_cast<::blink::mojom::BackgroundSyncType>(-1000001);
  }
};
}  // namespace WTF


namespace blink {
namespace mojom {
namespace blink {

class OneShotBackgroundSyncServiceProxy;

template <typename ImplRefTraits>
class OneShotBackgroundSyncServiceStub;

class OneShotBackgroundSyncServiceRequestValidator;
class OneShotBackgroundSyncServiceResponseValidator;


class PLATFORM_EXPORT OneShotBackgroundSyncService
    : public OneShotBackgroundSyncServiceInterfaceBase {
 public:
  using IPCStableHashFunction = uint32_t(*)();

  static const char Name_[];
  static IPCStableHashFunction MessageToMethodInfo_(mojo::Message& message);
  static const char* MessageToMethodName_(mojo::Message& message);
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;
  static constexpr bool HasUninterruptableMethods_ = false;

  using Base_ = OneShotBackgroundSyncServiceInterfaceBase;
  using Proxy_ = OneShotBackgroundSyncServiceProxy;

  template <typename ImplRefTraits>
  using Stub_ = OneShotBackgroundSyncServiceStub<ImplRefTraits>;

  using RequestValidator_ = OneShotBackgroundSyncServiceRequestValidator;
  using ResponseValidator_ = OneShotBackgroundSyncServiceResponseValidator;
  enum MethodMinVersions : uint32_t {
    kRegisterMinVersion = 0,
    kDidResolveRegistrationMinVersion = 0,
    kGetRegistrationsMinVersion = 0,
  };

// crbug.com/1340245 - this causes binary size bloat on Fuchsia, and we're OK
// with not having this data in traces there.
#if !BUILDFLAG(IS_FUCHSIA)
  struct Register_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct DidResolveRegistration_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct GetRegistrations_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
#endif // !BUILDFLAG(IS_FUCHSIA)
  virtual ~OneShotBackgroundSyncService() = default;


  using RegisterCallback = base::OnceCallback<void(BackgroundSyncError, SyncRegistrationOptionsPtr)>;
  
  virtual void Register(SyncRegistrationOptionsPtr options, int64_t service_worker_registration_id, RegisterCallback callback) = 0;

  
  virtual void DidResolveRegistration(BackgroundSyncRegistrationInfoPtr registration_info) = 0;


  using GetRegistrationsCallback = base::OnceCallback<void(BackgroundSyncError, WTF::Vector<SyncRegistrationOptionsPtr>)>;
  
  virtual void GetRegistrations(int64_t service_worker_registration_id, GetRegistrationsCallback callback) = 0;
};

class PeriodicBackgroundSyncServiceProxy;

template <typename ImplRefTraits>
class PeriodicBackgroundSyncServiceStub;

class PeriodicBackgroundSyncServiceRequestValidator;
class PeriodicBackgroundSyncServiceResponseValidator;


class PLATFORM_EXPORT PeriodicBackgroundSyncService
    : public PeriodicBackgroundSyncServiceInterfaceBase {
 public:
  using IPCStableHashFunction = uint32_t(*)();

  static const char Name_[];
  static IPCStableHashFunction MessageToMethodInfo_(mojo::Message& message);
  static const char* MessageToMethodName_(mojo::Message& message);
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;
  static constexpr bool HasUninterruptableMethods_ = false;

  using Base_ = PeriodicBackgroundSyncServiceInterfaceBase;
  using Proxy_ = PeriodicBackgroundSyncServiceProxy;

  template <typename ImplRefTraits>
  using Stub_ = PeriodicBackgroundSyncServiceStub<ImplRefTraits>;

  using RequestValidator_ = PeriodicBackgroundSyncServiceRequestValidator;
  using ResponseValidator_ = PeriodicBackgroundSyncServiceResponseValidator;
  enum MethodMinVersions : uint32_t {
    kRegisterMinVersion = 0,
    kUnregisterMinVersion = 0,
    kGetRegistrationsMinVersion = 0,
  };

// crbug.com/1340245 - this causes binary size bloat on Fuchsia, and we're OK
// with not having this data in traces there.
#if !BUILDFLAG(IS_FUCHSIA)
  struct Register_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct Unregister_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct GetRegistrations_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
#endif // !BUILDFLAG(IS_FUCHSIA)
  virtual ~PeriodicBackgroundSyncService() = default;


  using RegisterCallback = base::OnceCallback<void(BackgroundSyncError, SyncRegistrationOptionsPtr)>;
  
  virtual void Register(SyncRegistrationOptionsPtr options, int64_t service_worker_registration_id, RegisterCallback callback) = 0;


  using UnregisterCallback = base::OnceCallback<void(BackgroundSyncError)>;
  
  virtual void Unregister(int64_t service_worker_registration_id, const WTF::String& tag, UnregisterCallback callback) = 0;


  using GetRegistrationsCallback = base::OnceCallback<void(BackgroundSyncError, WTF::Vector<SyncRegistrationOptionsPtr>)>;
  
  virtual void GetRegistrations(int64_t service_worker_registration_id, GetRegistrationsCallback callback) = 0;
};



class PLATFORM_EXPORT OneShotBackgroundSyncServiceProxy
    : public OneShotBackgroundSyncService {
 public:
  using InterfaceType = OneShotBackgroundSyncService;

  explicit OneShotBackgroundSyncServiceProxy(mojo::MessageReceiverWithResponder* receiver);
  
  void Register(SyncRegistrationOptionsPtr options, int64_t service_worker_registration_id, RegisterCallback callback) final;
  
  void DidResolveRegistration(BackgroundSyncRegistrationInfoPtr registration_info) final;
  
  void GetRegistrations(int64_t service_worker_registration_id, GetRegistrationsCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};



class PLATFORM_EXPORT PeriodicBackgroundSyncServiceProxy
    : public PeriodicBackgroundSyncService {
 public:
  using InterfaceType = PeriodicBackgroundSyncService;

  explicit PeriodicBackgroundSyncServiceProxy(mojo::MessageReceiverWithResponder* receiver);
  
  void Register(SyncRegistrationOptionsPtr options, int64_t service_worker_registration_id, RegisterCallback callback) final;
  
  void Unregister(int64_t service_worker_registration_id, const WTF::String& tag, UnregisterCallback callback) final;
  
  void GetRegistrations(int64_t service_worker_registration_id, GetRegistrationsCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class PLATFORM_EXPORT OneShotBackgroundSyncServiceStubDispatch {
 public:
  static bool Accept(OneShotBackgroundSyncService* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      OneShotBackgroundSyncService* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<OneShotBackgroundSyncService>>
class OneShotBackgroundSyncServiceStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  OneShotBackgroundSyncServiceStub() = default;
  ~OneShotBackgroundSyncServiceStub() override = default;

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return OneShotBackgroundSyncServiceStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return OneShotBackgroundSyncServiceStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class PLATFORM_EXPORT PeriodicBackgroundSyncServiceStubDispatch {
 public:
  static bool Accept(PeriodicBackgroundSyncService* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      PeriodicBackgroundSyncService* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<PeriodicBackgroundSyncService>>
class PeriodicBackgroundSyncServiceStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  PeriodicBackgroundSyncServiceStub() = default;
  ~PeriodicBackgroundSyncServiceStub() override = default;

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return PeriodicBackgroundSyncServiceStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return PeriodicBackgroundSyncServiceStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class PLATFORM_EXPORT OneShotBackgroundSyncServiceRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class PLATFORM_EXPORT PeriodicBackgroundSyncServiceRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class PLATFORM_EXPORT OneShotBackgroundSyncServiceResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class PLATFORM_EXPORT PeriodicBackgroundSyncServiceResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





class PLATFORM_EXPORT SyncRegistrationOptions {
 public:
  template <typename T>
  using EnableIfSame = std::enable_if_t<std::is_same<SyncRegistrationOptions, T>::value>;
  using DataView = SyncRegistrationOptionsDataView;
  using Data_ = internal::SyncRegistrationOptions_Data;

  template <typename... Args>
  static SyncRegistrationOptionsPtr New(Args&&... args) {
    return SyncRegistrationOptionsPtr(
        absl::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static SyncRegistrationOptionsPtr From(const U& u) {
    return mojo::TypeConverter<SyncRegistrationOptionsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, SyncRegistrationOptions>::Convert(*this);
  }


  SyncRegistrationOptions();

  SyncRegistrationOptions(
      const WTF::String& tag,
      int64_t min_interval);


  ~SyncRegistrationOptions();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = SyncRegistrationOptionsPtr>
  SyncRegistrationOptionsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T, SyncRegistrationOptions::EnableIfSame<T>* = nullptr>
  bool Equals(const T& other) const;

  template <typename T, SyncRegistrationOptions::EnableIfSame<T>* = nullptr>
  bool operator==(const T& rhs) const { return Equals(rhs); }
  size_t Hash(size_t seed) const;
  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        SyncRegistrationOptions::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        SyncRegistrationOptions::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::SyncRegistrationOptions_UnserializedMessageContext<
            UserType, SyncRegistrationOptions::DataView>>(0, 0, std::move(input)),
        MOJO_CREATE_MESSAGE_FLAG_NONE);
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    mojo::Message message;
    return mojo::internal::DeserializeImpl<SyncRegistrationOptions::DataView>(
        message, data, data_num_bytes, output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return SyncRegistrationOptions::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::SyncRegistrationOptions_UnserializedMessageContext<
            UserType, SyncRegistrationOptions::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<SyncRegistrationOptions::DataView>(
        input, input.payload(), input.payload_num_bytes(), output, Validate);
  }

  
  WTF::String tag;
  
  int64_t min_interval;

  // Serialise this struct into a trace.
  void WriteIntoTrace(perfetto::TracedValue traced_context) const;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

// The comparison operators are templates, so they are only instantiated if they
// are used. Thus, the bindings generator does not need to know whether
// comparison operators are available for members.
template <typename T, SyncRegistrationOptions::EnableIfSame<T>* = nullptr>
bool operator<(const T& lhs, const T& rhs);

template <typename T, SyncRegistrationOptions::EnableIfSame<T>* = nullptr>
bool operator<=(const T& lhs, const T& rhs) {
  return !(rhs < lhs);
}

template <typename T, SyncRegistrationOptions::EnableIfSame<T>* = nullptr>
bool operator>(const T& lhs, const T& rhs) {
  return rhs < lhs;
}

template <typename T, SyncRegistrationOptions::EnableIfSame<T>* = nullptr>
bool operator>=(const T& lhs, const T& rhs) {
  return !(lhs < rhs);
}





class PLATFORM_EXPORT BackgroundSyncRegistrationInfo {
 public:
  template <typename T>
  using EnableIfSame = std::enable_if_t<std::is_same<BackgroundSyncRegistrationInfo, T>::value>;
  using DataView = BackgroundSyncRegistrationInfoDataView;
  using Data_ = internal::BackgroundSyncRegistrationInfo_Data;

  template <typename... Args>
  static BackgroundSyncRegistrationInfoPtr New(Args&&... args) {
    return BackgroundSyncRegistrationInfoPtr(
        absl::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static BackgroundSyncRegistrationInfoPtr From(const U& u) {
    return mojo::TypeConverter<BackgroundSyncRegistrationInfoPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, BackgroundSyncRegistrationInfo>::Convert(*this);
  }


  BackgroundSyncRegistrationInfo();

  BackgroundSyncRegistrationInfo(
      int64_t service_worker_registration_id,
      const WTF::String& tag,
      BackgroundSyncType sync_type);


  ~BackgroundSyncRegistrationInfo();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = BackgroundSyncRegistrationInfoPtr>
  BackgroundSyncRegistrationInfoPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T, BackgroundSyncRegistrationInfo::EnableIfSame<T>* = nullptr>
  bool Equals(const T& other) const;

  template <typename T, BackgroundSyncRegistrationInfo::EnableIfSame<T>* = nullptr>
  bool operator==(const T& rhs) const { return Equals(rhs); }
  size_t Hash(size_t seed) const;
  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        BackgroundSyncRegistrationInfo::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        BackgroundSyncRegistrationInfo::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::BackgroundSyncRegistrationInfo_UnserializedMessageContext<
            UserType, BackgroundSyncRegistrationInfo::DataView>>(0, 0, std::move(input)),
        MOJO_CREATE_MESSAGE_FLAG_NONE);
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    mojo::Message message;
    return mojo::internal::DeserializeImpl<BackgroundSyncRegistrationInfo::DataView>(
        message, data, data_num_bytes, output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return BackgroundSyncRegistrationInfo::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::BackgroundSyncRegistrationInfo_UnserializedMessageContext<
            UserType, BackgroundSyncRegistrationInfo::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<BackgroundSyncRegistrationInfo::DataView>(
        input, input.payload(), input.payload_num_bytes(), output, Validate);
  }

  
  int64_t service_worker_registration_id;
  
  WTF::String tag;
  
  BackgroundSyncType sync_type;

  // Serialise this struct into a trace.
  void WriteIntoTrace(perfetto::TracedValue traced_context) const;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

// The comparison operators are templates, so they are only instantiated if they
// are used. Thus, the bindings generator does not need to know whether
// comparison operators are available for members.
template <typename T, BackgroundSyncRegistrationInfo::EnableIfSame<T>* = nullptr>
bool operator<(const T& lhs, const T& rhs);

template <typename T, BackgroundSyncRegistrationInfo::EnableIfSame<T>* = nullptr>
bool operator<=(const T& lhs, const T& rhs) {
  return !(rhs < lhs);
}

template <typename T, BackgroundSyncRegistrationInfo::EnableIfSame<T>* = nullptr>
bool operator>(const T& lhs, const T& rhs) {
  return rhs < lhs;
}

template <typename T, BackgroundSyncRegistrationInfo::EnableIfSame<T>* = nullptr>
bool operator>=(const T& lhs, const T& rhs) {
  return !(lhs < rhs);
}





template <typename StructPtrType>
SyncRegistrationOptionsPtr SyncRegistrationOptions::Clone() const {
  return New(
      mojo::Clone(tag),
      mojo::Clone(min_interval)
  );
}

template <typename T, SyncRegistrationOptions::EnableIfSame<T>*>
bool SyncRegistrationOptions::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->tag, other_struct.tag))
    return false;
  if (!mojo::Equals(this->min_interval, other_struct.min_interval))
    return false;
  return true;
}

template <typename T, SyncRegistrationOptions::EnableIfSame<T>*>
bool operator<(const T& lhs, const T& rhs) {
  if (lhs.tag < rhs.tag)
    return true;
  if (rhs.tag < lhs.tag)
    return false;
  if (lhs.min_interval < rhs.min_interval)
    return true;
  if (rhs.min_interval < lhs.min_interval)
    return false;
  return false;
}
template <typename StructPtrType>
BackgroundSyncRegistrationInfoPtr BackgroundSyncRegistrationInfo::Clone() const {
  return New(
      mojo::Clone(service_worker_registration_id),
      mojo::Clone(tag),
      mojo::Clone(sync_type)
  );
}

template <typename T, BackgroundSyncRegistrationInfo::EnableIfSame<T>*>
bool BackgroundSyncRegistrationInfo::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->service_worker_registration_id, other_struct.service_worker_registration_id))
    return false;
  if (!mojo::Equals(this->tag, other_struct.tag))
    return false;
  if (!mojo::Equals(this->sync_type, other_struct.sync_type))
    return false;
  return true;
}

template <typename T, BackgroundSyncRegistrationInfo::EnableIfSame<T>*>
bool operator<(const T& lhs, const T& rhs) {
  if (lhs.service_worker_registration_id < rhs.service_worker_registration_id)
    return true;
  if (rhs.service_worker_registration_id < lhs.service_worker_registration_id)
    return false;
  if (lhs.tag < rhs.tag)
    return true;
  if (rhs.tag < lhs.tag)
    return false;
  if (lhs.sync_type < rhs.sync_type)
    return true;
  if (rhs.sync_type < lhs.sync_type)
    return false;
  return false;
}


}  // namespace blink
}  // namespace mojom
}  // namespace blink

namespace mojo {


template <>
struct PLATFORM_EXPORT StructTraits<::blink::mojom::blink::SyncRegistrationOptions::DataView,
                                         ::blink::mojom::blink::SyncRegistrationOptionsPtr> {
  static bool IsNull(const ::blink::mojom::blink::SyncRegistrationOptionsPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::blink::SyncRegistrationOptionsPtr* output) { output->reset(); }

  static const decltype(::blink::mojom::blink::SyncRegistrationOptions::tag)& tag(
      const ::blink::mojom::blink::SyncRegistrationOptionsPtr& input) {
    return input->tag;
  }

  static decltype(::blink::mojom::blink::SyncRegistrationOptions::min_interval) min_interval(
      const ::blink::mojom::blink::SyncRegistrationOptionsPtr& input) {
    return input->min_interval;
  }

  static bool Read(::blink::mojom::blink::SyncRegistrationOptions::DataView input, ::blink::mojom::blink::SyncRegistrationOptionsPtr* output);
};


template <>
struct PLATFORM_EXPORT StructTraits<::blink::mojom::blink::BackgroundSyncRegistrationInfo::DataView,
                                         ::blink::mojom::blink::BackgroundSyncRegistrationInfoPtr> {
  static bool IsNull(const ::blink::mojom::blink::BackgroundSyncRegistrationInfoPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::blink::BackgroundSyncRegistrationInfoPtr* output) { output->reset(); }

  static decltype(::blink::mojom::blink::BackgroundSyncRegistrationInfo::service_worker_registration_id) service_worker_registration_id(
      const ::blink::mojom::blink::BackgroundSyncRegistrationInfoPtr& input) {
    return input->service_worker_registration_id;
  }

  static const decltype(::blink::mojom::blink::BackgroundSyncRegistrationInfo::tag)& tag(
      const ::blink::mojom::blink::BackgroundSyncRegistrationInfoPtr& input) {
    return input->tag;
  }

  static decltype(::blink::mojom::blink::BackgroundSyncRegistrationInfo::sync_type) sync_type(
      const ::blink::mojom::blink::BackgroundSyncRegistrationInfoPtr& input) {
    return input->sync_type;
  }

  static bool Read(::blink::mojom::blink::BackgroundSyncRegistrationInfo::DataView input, ::blink::mojom::blink::BackgroundSyncRegistrationInfoPtr* output);
};

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_BACKGROUND_SYNC_BACKGROUND_SYNC_MOJOM_BLINK_H_