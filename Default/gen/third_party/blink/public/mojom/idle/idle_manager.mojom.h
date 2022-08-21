// third_party/blink/public/mojom/idle/idle_manager.mojom.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_IDLE_IDLE_MANAGER_MOJOM_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_IDLE_IDLE_MANAGER_MOJOM_H_

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

#include "third_party/blink/public/mojom/idle/idle_manager.mojom-shared.h"
#include "third_party/blink/public/mojom/idle/idle_manager.mojom-forward.h"
#include "mojo/public/mojom/base/time.mojom.h"
#include <string>
#include <vector>

#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/raw_ptr_impl_ref_traits.h"


#include "third_party/blink/public/common/common_export.h"




namespace blink {
namespace mojom {

class IdleMonitorProxy;

template <typename ImplRefTraits>
class IdleMonitorStub;

class IdleMonitorRequestValidator;


class BLINK_COMMON_EXPORT IdleMonitor
    : public IdleMonitorInterfaceBase {
 public:
  using IPCStableHashFunction = uint32_t(*)();

  static const char Name_[];
  static IPCStableHashFunction MessageToMethodInfo_(mojo::Message& message);
  static const char* MessageToMethodName_(mojo::Message& message);
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;
  static constexpr bool HasUninterruptableMethods_ = false;

  using Base_ = IdleMonitorInterfaceBase;
  using Proxy_ = IdleMonitorProxy;

  template <typename ImplRefTraits>
  using Stub_ = IdleMonitorStub<ImplRefTraits>;

  using RequestValidator_ = IdleMonitorRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kUpdateMinVersion = 0,
  };

// crbug.com/1340245 - this causes binary size bloat on Fuchsia, and we're OK
// with not having this data in traces there.
#if !BUILDFLAG(IS_FUCHSIA)
  struct Update_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
#endif // !BUILDFLAG(IS_FUCHSIA)
  virtual ~IdleMonitor() = default;

  
  virtual void Update(IdleStatePtr state, bool is_overridden_by_devtools) = 0;
};

class IdleManagerProxy;

template <typename ImplRefTraits>
class IdleManagerStub;

class IdleManagerRequestValidator;
class IdleManagerResponseValidator;


class BLINK_COMMON_EXPORT IdleManager
    : public IdleManagerInterfaceBase {
 public:
  using IPCStableHashFunction = uint32_t(*)();

  static const char Name_[];
  static IPCStableHashFunction MessageToMethodInfo_(mojo::Message& message);
  static const char* MessageToMethodName_(mojo::Message& message);
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;
  static constexpr bool HasUninterruptableMethods_ = false;

  using Base_ = IdleManagerInterfaceBase;
  using Proxy_ = IdleManagerProxy;

  template <typename ImplRefTraits>
  using Stub_ = IdleManagerStub<ImplRefTraits>;

  using RequestValidator_ = IdleManagerRequestValidator;
  using ResponseValidator_ = IdleManagerResponseValidator;
  enum MethodMinVersions : uint32_t {
    kAddMonitorMinVersion = 0,
  };

// crbug.com/1340245 - this causes binary size bloat on Fuchsia, and we're OK
// with not having this data in traces there.
#if !BUILDFLAG(IS_FUCHSIA)
  struct AddMonitor_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
#endif // !BUILDFLAG(IS_FUCHSIA)
  
  static constexpr uint32_t kUserInputThresholdMs = 60000U;
  virtual ~IdleManager() = default;


  using AddMonitorCallback = base::OnceCallback<void(IdleManagerError, IdleStatePtr)>;
  
  virtual void AddMonitor(::mojo::PendingRemote<IdleMonitor> monitor, AddMonitorCallback callback) = 0;
};



class BLINK_COMMON_EXPORT IdleMonitorProxy
    : public IdleMonitor {
 public:
  using InterfaceType = IdleMonitor;

  explicit IdleMonitorProxy(mojo::MessageReceiverWithResponder* receiver);
  
  void Update(IdleStatePtr state, bool is_overridden_by_devtools) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};



class BLINK_COMMON_EXPORT IdleManagerProxy
    : public IdleManager {
 public:
  using InterfaceType = IdleManager;

  explicit IdleManagerProxy(mojo::MessageReceiverWithResponder* receiver);
  
  void AddMonitor(::mojo::PendingRemote<IdleMonitor> monitor, AddMonitorCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class BLINK_COMMON_EXPORT IdleMonitorStubDispatch {
 public:
  static bool Accept(IdleMonitor* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      IdleMonitor* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<IdleMonitor>>
class IdleMonitorStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  IdleMonitorStub() = default;
  ~IdleMonitorStub() override = default;

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return IdleMonitorStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return IdleMonitorStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_COMMON_EXPORT IdleManagerStubDispatch {
 public:
  static bool Accept(IdleManager* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      IdleManager* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<IdleManager>>
class IdleManagerStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  IdleManagerStub() = default;
  ~IdleManagerStub() override = default;

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return IdleManagerStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return IdleManagerStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_COMMON_EXPORT IdleMonitorRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_COMMON_EXPORT IdleManagerRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_COMMON_EXPORT IdleManagerResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};








class BLINK_COMMON_EXPORT IdleState {
 public:
  template <typename T>
  using EnableIfSame = std::enable_if_t<std::is_same<IdleState, T>::value>;
  using DataView = IdleStateDataView;
  using Data_ = internal::IdleState_Data;

  template <typename... Args>
  static IdleStatePtr New(Args&&... args) {
    return IdleStatePtr(
        absl::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static IdleStatePtr From(const U& u) {
    return mojo::TypeConverter<IdleStatePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, IdleState>::Convert(*this);
  }


  IdleState();

  IdleState(
      absl::optional<::base::TimeDelta> idle_time,
      bool screen_locked);


  ~IdleState();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = IdleStatePtr>
  IdleStatePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T, IdleState::EnableIfSame<T>* = nullptr>
  bool Equals(const T& other) const;

  template <typename T, IdleState::EnableIfSame<T>* = nullptr>
  bool operator==(const T& rhs) const { return Equals(rhs); }
  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        IdleState::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        IdleState::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::IdleState_UnserializedMessageContext<
            UserType, IdleState::DataView>>(0, 0, std::move(input)),
        MOJO_CREATE_MESSAGE_FLAG_NONE);
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    mojo::Message message;
    return mojo::internal::DeserializeImpl<IdleState::DataView>(
        message, data, data_num_bytes, output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return IdleState::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::IdleState_UnserializedMessageContext<
            UserType, IdleState::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<IdleState::DataView>(
        input, input.payload(), input.payload_num_bytes(), output, Validate);
  }

  
  absl::optional<::base::TimeDelta> idle_time;
  
  bool screen_locked;

  // Serialise this struct into a trace.
  void WriteIntoTrace(perfetto::TracedValue traced_context) const;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

// The comparison operators are templates, so they are only instantiated if they
// are used. Thus, the bindings generator does not need to know whether
// comparison operators are available for members.
template <typename T, IdleState::EnableIfSame<T>* = nullptr>
bool operator<(const T& lhs, const T& rhs);

template <typename T, IdleState::EnableIfSame<T>* = nullptr>
bool operator<=(const T& lhs, const T& rhs) {
  return !(rhs < lhs);
}

template <typename T, IdleState::EnableIfSame<T>* = nullptr>
bool operator>(const T& lhs, const T& rhs) {
  return rhs < lhs;
}

template <typename T, IdleState::EnableIfSame<T>* = nullptr>
bool operator>=(const T& lhs, const T& rhs) {
  return !(lhs < rhs);
}

template <typename StructPtrType>
IdleStatePtr IdleState::Clone() const {
  return New(
      mojo::Clone(idle_time),
      mojo::Clone(screen_locked)
  );
}

template <typename T, IdleState::EnableIfSame<T>*>
bool IdleState::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->idle_time, other_struct.idle_time))
    return false;
  if (!mojo::Equals(this->screen_locked, other_struct.screen_locked))
    return false;
  return true;
}

template <typename T, IdleState::EnableIfSame<T>*>
bool operator<(const T& lhs, const T& rhs) {
  if (lhs.idle_time < rhs.idle_time)
    return true;
  if (rhs.idle_time < lhs.idle_time)
    return false;
  if (lhs.screen_locked < rhs.screen_locked)
    return true;
  if (rhs.screen_locked < lhs.screen_locked)
    return false;
  return false;
}


}  // namespace mojom
}  // namespace blink

namespace mojo {


template <>
struct BLINK_COMMON_EXPORT StructTraits<::blink::mojom::IdleState::DataView,
                                         ::blink::mojom::IdleStatePtr> {
  static bool IsNull(const ::blink::mojom::IdleStatePtr& input) { return !input; }
  static void SetToNull(::blink::mojom::IdleStatePtr* output) { output->reset(); }

  static const decltype(::blink::mojom::IdleState::idle_time)& idle_time(
      const ::blink::mojom::IdleStatePtr& input) {
    return input->idle_time;
  }

  static decltype(::blink::mojom::IdleState::screen_locked) screen_locked(
      const ::blink::mojom::IdleStatePtr& input) {
    return input->screen_locked;
  }

  static bool Read(::blink::mojom::IdleState::DataView input, ::blink::mojom::IdleStatePtr* output);
};

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_IDLE_IDLE_MANAGER_MOJOM_H_