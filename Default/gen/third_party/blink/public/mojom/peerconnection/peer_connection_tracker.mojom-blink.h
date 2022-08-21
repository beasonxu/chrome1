// third_party/blink/public/mojom/peerconnection/peer_connection_tracker.mojom-blink.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_PEERCONNECTION_PEER_CONNECTION_TRACKER_MOJOM_BLINK_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_PEERCONNECTION_PEER_CONNECTION_TRACKER_MOJOM_BLINK_H_

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

#include "third_party/blink/public/mojom/peerconnection/peer_connection_tracker.mojom-shared.h"
#include "third_party/blink/public/mojom/peerconnection/peer_connection_tracker.mojom-blink-forward.h"
#include "mojo/public/mojom/base/values.mojom-blink.h"

#include "mojo/public/cpp/bindings/lib/wtf_clone_equals_util.h"
#include "mojo/public/cpp/bindings/lib/wtf_hash_util.h"
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/raw_ptr_impl_ref_traits.h"


#include "third_party/blink/renderer/platform/platform_export.h"




namespace WTF {
struct blink_mojom_internal_DeviceThermalState_DataHashFn {
  static unsigned GetHash(const ::blink::mojom::DeviceThermalState& value) {
    using utype = std::underlying_type<::blink::mojom::DeviceThermalState>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::blink::mojom::DeviceThermalState& left, const ::blink::mojom::DeviceThermalState& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::blink::mojom::DeviceThermalState>
    : public GenericHashTraits<::blink::mojom::DeviceThermalState> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool kEmptyValueIsZero = false;
  static ::blink::mojom::DeviceThermalState EmptyValue() { return static_cast<::blink::mojom::DeviceThermalState>(-1000000); }
  static void ConstructDeletedValue(::blink::mojom::DeviceThermalState& slot, bool) {
    slot = static_cast<::blink::mojom::DeviceThermalState>(-1000001);
  }
  static bool IsDeletedValue(const ::blink::mojom::DeviceThermalState& value) {
    return value == static_cast<::blink::mojom::DeviceThermalState>(-1000001);
  }
};
}  // namespace WTF


namespace blink {
namespace mojom {
namespace blink {

class PeerConnectionManagerProxy;

template <typename ImplRefTraits>
class PeerConnectionManagerStub;

class PeerConnectionManagerRequestValidator;


class PLATFORM_EXPORT PeerConnectionManager
    : public PeerConnectionManagerInterfaceBase {
 public:
  using IPCStableHashFunction = uint32_t(*)();

  static const char Name_[];
  static IPCStableHashFunction MessageToMethodInfo_(mojo::Message& message);
  static const char* MessageToMethodName_(mojo::Message& message);
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;
  static constexpr bool HasUninterruptableMethods_ = false;

  using Base_ = PeerConnectionManagerInterfaceBase;
  using Proxy_ = PeerConnectionManagerProxy;

  template <typename ImplRefTraits>
  using Stub_ = PeerConnectionManagerStub<ImplRefTraits>;

  using RequestValidator_ = PeerConnectionManagerRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kOnSuspendMinVersion = 0,
    kOnThermalStateChangeMinVersion = 0,
    kOnSpeedLimitChangeMinVersion = 0,
    kStartEventLogMinVersion = 0,
    kStopEventLogMinVersion = 0,
    kGetStandardStatsMinVersion = 0,
    kGetLegacyStatsMinVersion = 0,
  };

// crbug.com/1340245 - this causes binary size bloat on Fuchsia, and we're OK
// with not having this data in traces there.
#if !BUILDFLAG(IS_FUCHSIA)
  struct OnSuspend_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct OnThermalStateChange_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct OnSpeedLimitChange_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct StartEventLog_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct StopEventLog_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct GetStandardStats_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct GetLegacyStats_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
#endif // !BUILDFLAG(IS_FUCHSIA)
  virtual ~PeerConnectionManager() = default;

  
  virtual void OnSuspend() = 0;

  
  virtual void OnThermalStateChange(DeviceThermalState thermal_state) = 0;

  
  virtual void OnSpeedLimitChange(int32_t speed_limit) = 0;

  
  virtual void StartEventLog(int32_t peer_connection_local_id, int32_t output_period_ms) = 0;

  
  virtual void StopEventLog(int32_t peer_connection_local_id) = 0;

  
  virtual void GetStandardStats() = 0;

  
  virtual void GetLegacyStats() = 0;
};

class PeerConnectionTrackerHostProxy;

template <typename ImplRefTraits>
class PeerConnectionTrackerHostStub;

class PeerConnectionTrackerHostRequestValidator;


class PLATFORM_EXPORT PeerConnectionTrackerHost
    : public PeerConnectionTrackerHostInterfaceBase {
 public:
  using IPCStableHashFunction = uint32_t(*)();

  static const char Name_[];
  static IPCStableHashFunction MessageToMethodInfo_(mojo::Message& message);
  static const char* MessageToMethodName_(mojo::Message& message);
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;
  static constexpr bool HasUninterruptableMethods_ = false;

  using Base_ = PeerConnectionTrackerHostInterfaceBase;
  using Proxy_ = PeerConnectionTrackerHostProxy;

  template <typename ImplRefTraits>
  using Stub_ = PeerConnectionTrackerHostStub<ImplRefTraits>;

  using RequestValidator_ = PeerConnectionTrackerHostRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kAddPeerConnectionMinVersion = 0,
    kRemovePeerConnectionMinVersion = 0,
    kUpdatePeerConnectionMinVersion = 0,
    kOnPeerConnectionSessionIdSetMinVersion = 0,
    kGetUserMediaMinVersion = 0,
    kGetUserMediaSuccessMinVersion = 0,
    kGetUserMediaFailureMinVersion = 0,
    kWebRtcEventLogWriteMinVersion = 0,
    kAddStandardStatsMinVersion = 0,
    kAddLegacyStatsMinVersion = 0,
  };

// crbug.com/1340245 - this causes binary size bloat on Fuchsia, and we're OK
// with not having this data in traces there.
#if !BUILDFLAG(IS_FUCHSIA)
  struct AddPeerConnection_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct RemovePeerConnection_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct UpdatePeerConnection_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct OnPeerConnectionSessionIdSet_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct GetUserMedia_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct GetUserMediaSuccess_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct GetUserMediaFailure_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct WebRtcEventLogWrite_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct AddStandardStats_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct AddLegacyStats_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
#endif // !BUILDFLAG(IS_FUCHSIA)
  virtual ~PeerConnectionTrackerHost() = default;

  
  virtual void AddPeerConnection(PeerConnectionInfoPtr info) = 0;

  
  virtual void RemovePeerConnection(int32_t lid) = 0;

  
  virtual void UpdatePeerConnection(int32_t lid, const WTF::String& type, const WTF::String& value) = 0;

  
  virtual void OnPeerConnectionSessionIdSet(int32_t lid, const WTF::String& session_id) = 0;

  
  virtual void GetUserMedia(int32_t request_id, bool audio, bool video, const WTF::String& audio_constraints, const WTF::String& video_constraints) = 0;

  
  virtual void GetUserMediaSuccess(int32_t request_id, const WTF::String& stream_id, const WTF::String& audio_track_info, const WTF::String& video_track_info) = 0;

  
  virtual void GetUserMediaFailure(int32_t request_id, const WTF::String& error, const WTF::String& error_message) = 0;

  
  virtual void WebRtcEventLogWrite(int32_t lid, const WTF::Vector<uint8_t>& output) = 0;

  
  virtual void AddStandardStats(int32_t lid, ::base::Value::List value) = 0;

  
  virtual void AddLegacyStats(int32_t lid, ::base::Value::List value) = 0;
};



class PLATFORM_EXPORT PeerConnectionManagerProxy
    : public PeerConnectionManager {
 public:
  using InterfaceType = PeerConnectionManager;

  explicit PeerConnectionManagerProxy(mojo::MessageReceiverWithResponder* receiver);
  
  void OnSuspend() final;
  
  void OnThermalStateChange(DeviceThermalState thermal_state) final;
  
  void OnSpeedLimitChange(int32_t speed_limit) final;
  
  void StartEventLog(int32_t peer_connection_local_id, int32_t output_period_ms) final;
  
  void StopEventLog(int32_t peer_connection_local_id) final;
  
  void GetStandardStats() final;
  
  void GetLegacyStats() final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};



class PLATFORM_EXPORT PeerConnectionTrackerHostProxy
    : public PeerConnectionTrackerHost {
 public:
  using InterfaceType = PeerConnectionTrackerHost;

  explicit PeerConnectionTrackerHostProxy(mojo::MessageReceiverWithResponder* receiver);
  
  void AddPeerConnection(PeerConnectionInfoPtr info) final;
  
  void RemovePeerConnection(int32_t lid) final;
  
  void UpdatePeerConnection(int32_t lid, const WTF::String& type, const WTF::String& value) final;
  
  void OnPeerConnectionSessionIdSet(int32_t lid, const WTF::String& session_id) final;
  
  void GetUserMedia(int32_t request_id, bool audio, bool video, const WTF::String& audio_constraints, const WTF::String& video_constraints) final;
  
  void GetUserMediaSuccess(int32_t request_id, const WTF::String& stream_id, const WTF::String& audio_track_info, const WTF::String& video_track_info) final;
  
  void GetUserMediaFailure(int32_t request_id, const WTF::String& error, const WTF::String& error_message) final;
  
  void WebRtcEventLogWrite(int32_t lid, const WTF::Vector<uint8_t>& output) final;
  
  void AddStandardStats(int32_t lid, ::base::Value::List value) final;
  
  void AddLegacyStats(int32_t lid, ::base::Value::List value) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class PLATFORM_EXPORT PeerConnectionManagerStubDispatch {
 public:
  static bool Accept(PeerConnectionManager* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      PeerConnectionManager* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<PeerConnectionManager>>
class PeerConnectionManagerStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  PeerConnectionManagerStub() = default;
  ~PeerConnectionManagerStub() override = default;

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return PeerConnectionManagerStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return PeerConnectionManagerStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class PLATFORM_EXPORT PeerConnectionTrackerHostStubDispatch {
 public:
  static bool Accept(PeerConnectionTrackerHost* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      PeerConnectionTrackerHost* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<PeerConnectionTrackerHost>>
class PeerConnectionTrackerHostStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  PeerConnectionTrackerHostStub() = default;
  ~PeerConnectionTrackerHostStub() override = default;

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return PeerConnectionTrackerHostStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return PeerConnectionTrackerHostStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class PLATFORM_EXPORT PeerConnectionManagerRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class PLATFORM_EXPORT PeerConnectionTrackerHostRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





class PLATFORM_EXPORT PeerConnectionInfo {
 public:
  template <typename T>
  using EnableIfSame = std::enable_if_t<std::is_same<PeerConnectionInfo, T>::value>;
  using DataView = PeerConnectionInfoDataView;
  using Data_ = internal::PeerConnectionInfo_Data;

  template <typename... Args>
  static PeerConnectionInfoPtr New(Args&&... args) {
    return PeerConnectionInfoPtr(
        absl::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static PeerConnectionInfoPtr From(const U& u) {
    return mojo::TypeConverter<PeerConnectionInfoPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, PeerConnectionInfo>::Convert(*this);
  }


  PeerConnectionInfo();

  PeerConnectionInfo(
      int32_t lid,
      const WTF::String& rtc_configuration,
      const WTF::String& constraints,
      const WTF::String& url);


  ~PeerConnectionInfo();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = PeerConnectionInfoPtr>
  PeerConnectionInfoPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T, PeerConnectionInfo::EnableIfSame<T>* = nullptr>
  bool Equals(const T& other) const;

  template <typename T, PeerConnectionInfo::EnableIfSame<T>* = nullptr>
  bool operator==(const T& rhs) const { return Equals(rhs); }
  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        PeerConnectionInfo::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        PeerConnectionInfo::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::PeerConnectionInfo_UnserializedMessageContext<
            UserType, PeerConnectionInfo::DataView>>(0, 0, std::move(input)),
        MOJO_CREATE_MESSAGE_FLAG_NONE);
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    mojo::Message message;
    return mojo::internal::DeserializeImpl<PeerConnectionInfo::DataView>(
        message, data, data_num_bytes, output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return PeerConnectionInfo::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::PeerConnectionInfo_UnserializedMessageContext<
            UserType, PeerConnectionInfo::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<PeerConnectionInfo::DataView>(
        input, input.payload(), input.payload_num_bytes(), output, Validate);
  }

  
  int32_t lid;
  
  WTF::String rtc_configuration;
  
  WTF::String constraints;
  
  WTF::String url;

  // Serialise this struct into a trace.
  void WriteIntoTrace(perfetto::TracedValue traced_context) const;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

// The comparison operators are templates, so they are only instantiated if they
// are used. Thus, the bindings generator does not need to know whether
// comparison operators are available for members.
template <typename T, PeerConnectionInfo::EnableIfSame<T>* = nullptr>
bool operator<(const T& lhs, const T& rhs);

template <typename T, PeerConnectionInfo::EnableIfSame<T>* = nullptr>
bool operator<=(const T& lhs, const T& rhs) {
  return !(rhs < lhs);
}

template <typename T, PeerConnectionInfo::EnableIfSame<T>* = nullptr>
bool operator>(const T& lhs, const T& rhs) {
  return rhs < lhs;
}

template <typename T, PeerConnectionInfo::EnableIfSame<T>* = nullptr>
bool operator>=(const T& lhs, const T& rhs) {
  return !(lhs < rhs);
}




template <typename StructPtrType>
PeerConnectionInfoPtr PeerConnectionInfo::Clone() const {
  return New(
      mojo::Clone(lid),
      mojo::Clone(rtc_configuration),
      mojo::Clone(constraints),
      mojo::Clone(url)
  );
}

template <typename T, PeerConnectionInfo::EnableIfSame<T>*>
bool PeerConnectionInfo::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->lid, other_struct.lid))
    return false;
  if (!mojo::Equals(this->rtc_configuration, other_struct.rtc_configuration))
    return false;
  if (!mojo::Equals(this->constraints, other_struct.constraints))
    return false;
  if (!mojo::Equals(this->url, other_struct.url))
    return false;
  return true;
}

template <typename T, PeerConnectionInfo::EnableIfSame<T>*>
bool operator<(const T& lhs, const T& rhs) {
  if (lhs.lid < rhs.lid)
    return true;
  if (rhs.lid < lhs.lid)
    return false;
  if (lhs.rtc_configuration < rhs.rtc_configuration)
    return true;
  if (rhs.rtc_configuration < lhs.rtc_configuration)
    return false;
  if (lhs.constraints < rhs.constraints)
    return true;
  if (rhs.constraints < lhs.constraints)
    return false;
  if (lhs.url < rhs.url)
    return true;
  if (rhs.url < lhs.url)
    return false;
  return false;
}


}  // namespace blink
}  // namespace mojom
}  // namespace blink

namespace mojo {


template <>
struct PLATFORM_EXPORT StructTraits<::blink::mojom::blink::PeerConnectionInfo::DataView,
                                         ::blink::mojom::blink::PeerConnectionInfoPtr> {
  static bool IsNull(const ::blink::mojom::blink::PeerConnectionInfoPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::blink::PeerConnectionInfoPtr* output) { output->reset(); }

  static decltype(::blink::mojom::blink::PeerConnectionInfo::lid) lid(
      const ::blink::mojom::blink::PeerConnectionInfoPtr& input) {
    return input->lid;
  }

  static const decltype(::blink::mojom::blink::PeerConnectionInfo::rtc_configuration)& rtc_configuration(
      const ::blink::mojom::blink::PeerConnectionInfoPtr& input) {
    return input->rtc_configuration;
  }

  static const decltype(::blink::mojom::blink::PeerConnectionInfo::constraints)& constraints(
      const ::blink::mojom::blink::PeerConnectionInfoPtr& input) {
    return input->constraints;
  }

  static const decltype(::blink::mojom::blink::PeerConnectionInfo::url)& url(
      const ::blink::mojom::blink::PeerConnectionInfoPtr& input) {
    return input->url;
  }

  static bool Read(::blink::mojom::blink::PeerConnectionInfo::DataView input, ::blink::mojom::blink::PeerConnectionInfoPtr* output);
};

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_PEERCONNECTION_PEER_CONNECTION_TRACKER_MOJOM_BLINK_H_