// third_party/blink/public/mojom/oom_intervention/oom_intervention.mojom-blink.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_OOM_INTERVENTION_OOM_INTERVENTION_MOJOM_BLINK_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_OOM_INTERVENTION_OOM_INTERVENTION_MOJOM_BLINK_H_

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

#include "third_party/blink/public/mojom/oom_intervention/oom_intervention.mojom-shared.h"
#include "third_party/blink/public/mojom/oom_intervention/oom_intervention.mojom-blink-forward.h"
#include "mojo/public/mojom/base/shared_memory.mojom-blink-forward.h"

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

class OomInterventionHostProxy;

template <typename ImplRefTraits>
class OomInterventionHostStub;

class OomInterventionHostRequestValidator;


class PLATFORM_EXPORT OomInterventionHost
    : public OomInterventionHostInterfaceBase {
 public:
  using IPCStableHashFunction = uint32_t(*)();

  static const char Name_[];
  static IPCStableHashFunction MessageToMethodInfo_(mojo::Message& message);
  static const char* MessageToMethodName_(mojo::Message& message);
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;
  static constexpr bool HasUninterruptableMethods_ = false;

  using Base_ = OomInterventionHostInterfaceBase;
  using Proxy_ = OomInterventionHostProxy;

  template <typename ImplRefTraits>
  using Stub_ = OomInterventionHostStub<ImplRefTraits>;

  using RequestValidator_ = OomInterventionHostRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kOnHighMemoryUsageMinVersion = 0,
  };

// crbug.com/1340245 - this causes binary size bloat on Fuchsia, and we're OK
// with not having this data in traces there.
#if !BUILDFLAG(IS_FUCHSIA)
  struct OnHighMemoryUsage_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
#endif // !BUILDFLAG(IS_FUCHSIA)
  virtual ~OomInterventionHost() = default;

  
  virtual void OnHighMemoryUsage() = 0;
};

class OomInterventionProxy;

template <typename ImplRefTraits>
class OomInterventionStub;

class OomInterventionRequestValidator;


class PLATFORM_EXPORT OomIntervention
    : public OomInterventionInterfaceBase {
 public:
  using IPCStableHashFunction = uint32_t(*)();

  static const char Name_[];
  static IPCStableHashFunction MessageToMethodInfo_(mojo::Message& message);
  static const char* MessageToMethodName_(mojo::Message& message);
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;
  static constexpr bool HasUninterruptableMethods_ = false;

  using Base_ = OomInterventionInterfaceBase;
  using Proxy_ = OomInterventionProxy;

  template <typename ImplRefTraits>
  using Stub_ = OomInterventionStub<ImplRefTraits>;

  using RequestValidator_ = OomInterventionRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kStartDetectionMinVersion = 0,
  };

// crbug.com/1340245 - this causes binary size bloat on Fuchsia, and we're OK
// with not having this data in traces there.
#if !BUILDFLAG(IS_FUCHSIA)
  struct StartDetection_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
#endif // !BUILDFLAG(IS_FUCHSIA)
  virtual ~OomIntervention() = default;

  
  virtual void StartDetection(::mojo::PendingRemote<OomInterventionHost> host, DetectionArgsPtr detection_args, bool renderer_pause_enabled, bool navigate_ads_enabled, bool purge_v8_memory_enabled) = 0;
};



class PLATFORM_EXPORT OomInterventionHostProxy
    : public OomInterventionHost {
 public:
  using InterfaceType = OomInterventionHost;

  explicit OomInterventionHostProxy(mojo::MessageReceiverWithResponder* receiver);
  
  void OnHighMemoryUsage() final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};



class PLATFORM_EXPORT OomInterventionProxy
    : public OomIntervention {
 public:
  using InterfaceType = OomIntervention;

  explicit OomInterventionProxy(mojo::MessageReceiverWithResponder* receiver);
  
  void StartDetection(::mojo::PendingRemote<OomInterventionHost> host, DetectionArgsPtr detection_args, bool renderer_pause_enabled, bool navigate_ads_enabled, bool purge_v8_memory_enabled) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class PLATFORM_EXPORT OomInterventionHostStubDispatch {
 public:
  static bool Accept(OomInterventionHost* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      OomInterventionHost* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<OomInterventionHost>>
class OomInterventionHostStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  OomInterventionHostStub() = default;
  ~OomInterventionHostStub() override = default;

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return OomInterventionHostStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return OomInterventionHostStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class PLATFORM_EXPORT OomInterventionStubDispatch {
 public:
  static bool Accept(OomIntervention* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      OomIntervention* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<OomIntervention>>
class OomInterventionStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  OomInterventionStub() = default;
  ~OomInterventionStub() override = default;

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return OomInterventionStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return OomInterventionStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class PLATFORM_EXPORT OomInterventionHostRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class PLATFORM_EXPORT OomInterventionRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





class PLATFORM_EXPORT DetectionArgs {
 public:
  template <typename T>
  using EnableIfSame = std::enable_if_t<std::is_same<DetectionArgs, T>::value>;
  using DataView = DetectionArgsDataView;
  using Data_ = internal::DetectionArgs_Data;

  template <typename... Args>
  static DetectionArgsPtr New(Args&&... args) {
    return DetectionArgsPtr(
        absl::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static DetectionArgsPtr From(const U& u) {
    return mojo::TypeConverter<DetectionArgsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, DetectionArgs>::Convert(*this);
  }


  DetectionArgs();

  DetectionArgs(
      uint64_t blink_workload_threshold,
      uint64_t private_footprint_threshold,
      uint64_t swap_threshold,
      uint64_t virtual_memory_thresold);


  ~DetectionArgs();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = DetectionArgsPtr>
  DetectionArgsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T, DetectionArgs::EnableIfSame<T>* = nullptr>
  bool Equals(const T& other) const;

  template <typename T, DetectionArgs::EnableIfSame<T>* = nullptr>
  bool operator==(const T& rhs) const { return Equals(rhs); }
  size_t Hash(size_t seed) const;
  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        DetectionArgs::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        DetectionArgs::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::DetectionArgs_UnserializedMessageContext<
            UserType, DetectionArgs::DataView>>(0, 0, std::move(input)),
        MOJO_CREATE_MESSAGE_FLAG_NONE);
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    mojo::Message message;
    return mojo::internal::DeserializeImpl<DetectionArgs::DataView>(
        message, data, data_num_bytes, output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return DetectionArgs::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::DetectionArgs_UnserializedMessageContext<
            UserType, DetectionArgs::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<DetectionArgs::DataView>(
        input, input.payload(), input.payload_num_bytes(), output, Validate);
  }

  
  uint64_t blink_workload_threshold;
  
  uint64_t private_footprint_threshold;
  
  uint64_t swap_threshold;
  
  uint64_t virtual_memory_thresold;

  // Serialise this struct into a trace.
  void WriteIntoTrace(perfetto::TracedValue traced_context) const;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

// The comparison operators are templates, so they are only instantiated if they
// are used. Thus, the bindings generator does not need to know whether
// comparison operators are available for members.
template <typename T, DetectionArgs::EnableIfSame<T>* = nullptr>
bool operator<(const T& lhs, const T& rhs);

template <typename T, DetectionArgs::EnableIfSame<T>* = nullptr>
bool operator<=(const T& lhs, const T& rhs) {
  return !(rhs < lhs);
}

template <typename T, DetectionArgs::EnableIfSame<T>* = nullptr>
bool operator>(const T& lhs, const T& rhs) {
  return rhs < lhs;
}

template <typename T, DetectionArgs::EnableIfSame<T>* = nullptr>
bool operator>=(const T& lhs, const T& rhs) {
  return !(lhs < rhs);
}




template <typename StructPtrType>
DetectionArgsPtr DetectionArgs::Clone() const {
  return New(
      mojo::Clone(blink_workload_threshold),
      mojo::Clone(private_footprint_threshold),
      mojo::Clone(swap_threshold),
      mojo::Clone(virtual_memory_thresold)
  );
}

template <typename T, DetectionArgs::EnableIfSame<T>*>
bool DetectionArgs::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->blink_workload_threshold, other_struct.blink_workload_threshold))
    return false;
  if (!mojo::Equals(this->private_footprint_threshold, other_struct.private_footprint_threshold))
    return false;
  if (!mojo::Equals(this->swap_threshold, other_struct.swap_threshold))
    return false;
  if (!mojo::Equals(this->virtual_memory_thresold, other_struct.virtual_memory_thresold))
    return false;
  return true;
}

template <typename T, DetectionArgs::EnableIfSame<T>*>
bool operator<(const T& lhs, const T& rhs) {
  if (lhs.blink_workload_threshold < rhs.blink_workload_threshold)
    return true;
  if (rhs.blink_workload_threshold < lhs.blink_workload_threshold)
    return false;
  if (lhs.private_footprint_threshold < rhs.private_footprint_threshold)
    return true;
  if (rhs.private_footprint_threshold < lhs.private_footprint_threshold)
    return false;
  if (lhs.swap_threshold < rhs.swap_threshold)
    return true;
  if (rhs.swap_threshold < lhs.swap_threshold)
    return false;
  if (lhs.virtual_memory_thresold < rhs.virtual_memory_thresold)
    return true;
  if (rhs.virtual_memory_thresold < lhs.virtual_memory_thresold)
    return false;
  return false;
}


}  // namespace blink
}  // namespace mojom
}  // namespace blink

namespace mojo {


template <>
struct PLATFORM_EXPORT StructTraits<::blink::mojom::blink::DetectionArgs::DataView,
                                         ::blink::mojom::blink::DetectionArgsPtr> {
  static bool IsNull(const ::blink::mojom::blink::DetectionArgsPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::blink::DetectionArgsPtr* output) { output->reset(); }

  static decltype(::blink::mojom::blink::DetectionArgs::blink_workload_threshold) blink_workload_threshold(
      const ::blink::mojom::blink::DetectionArgsPtr& input) {
    return input->blink_workload_threshold;
  }

  static decltype(::blink::mojom::blink::DetectionArgs::private_footprint_threshold) private_footprint_threshold(
      const ::blink::mojom::blink::DetectionArgsPtr& input) {
    return input->private_footprint_threshold;
  }

  static decltype(::blink::mojom::blink::DetectionArgs::swap_threshold) swap_threshold(
      const ::blink::mojom::blink::DetectionArgsPtr& input) {
    return input->swap_threshold;
  }

  static decltype(::blink::mojom::blink::DetectionArgs::virtual_memory_thresold) virtual_memory_thresold(
      const ::blink::mojom::blink::DetectionArgsPtr& input) {
    return input->virtual_memory_thresold;
  }

  static bool Read(::blink::mojom::blink::DetectionArgs::DataView input, ::blink::mojom::blink::DetectionArgsPtr* output);
};

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_OOM_INTERVENTION_OOM_INTERVENTION_MOJOM_BLINK_H_