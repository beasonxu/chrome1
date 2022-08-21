// media/mojo/mojom/remoting.mojom.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_MOJOM_REMOTING_MOJOM_H_
#define MEDIA_MOJO_MOJOM_REMOTING_MOJOM_H_

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

#include "media/mojo/mojom/remoting.mojom-shared.h"
#include "media/mojo/mojom/remoting.mojom-forward.h"
#include "media/mojo/mojom/media_types.mojom-forward.h"
#include "media/mojo/mojom/remoting_common.mojom-forward.h"
#include "ui/gfx/geometry/mojom/geometry.mojom.h"
#include <string>
#include <vector>

#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/raw_ptr_impl_ref_traits.h"






namespace media {
namespace mojom {

class RemoterFactoryProxy;

template <typename ImplRefTraits>
class RemoterFactoryStub;

class RemoterFactoryRequestValidator;


class  RemoterFactory
    : public RemoterFactoryInterfaceBase {
 public:
  using IPCStableHashFunction = uint32_t(*)();

  static const char Name_[];
  static IPCStableHashFunction MessageToMethodInfo_(mojo::Message& message);
  static const char* MessageToMethodName_(mojo::Message& message);
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;
  static constexpr bool HasUninterruptableMethods_ = false;

  using Base_ = RemoterFactoryInterfaceBase;
  using Proxy_ = RemoterFactoryProxy;

  template <typename ImplRefTraits>
  using Stub_ = RemoterFactoryStub<ImplRefTraits>;

  using RequestValidator_ = RemoterFactoryRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kCreateMinVersion = 0,
  };

// crbug.com/1340245 - this causes binary size bloat on Fuchsia, and we're OK
// with not having this data in traces there.
#if !BUILDFLAG(IS_FUCHSIA)
  struct Create_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
#endif // !BUILDFLAG(IS_FUCHSIA)
  virtual ~RemoterFactory() = default;

  
  virtual void Create(::mojo::PendingRemote<RemotingSource> source, ::mojo::PendingReceiver<Remoter> remoter) = 0;
};

class RemotingDataStreamSenderProxy;

template <typename ImplRefTraits>
class RemotingDataStreamSenderStub;

class RemotingDataStreamSenderRequestValidator;


class  RemotingDataStreamSender
    : public RemotingDataStreamSenderInterfaceBase {
 public:
  using IPCStableHashFunction = uint32_t(*)();

  static const char Name_[];
  static IPCStableHashFunction MessageToMethodInfo_(mojo::Message& message);
  static const char* MessageToMethodName_(mojo::Message& message);
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;
  static constexpr bool HasUninterruptableMethods_ = false;

  using Base_ = RemotingDataStreamSenderInterfaceBase;
  using Proxy_ = RemotingDataStreamSenderProxy;

  template <typename ImplRefTraits>
  using Stub_ = RemotingDataStreamSenderStub<ImplRefTraits>;

  using RequestValidator_ = RemotingDataStreamSenderRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kSendFrameMinVersion = 0,
    kCancelInFlightDataMinVersion = 0,
  };

// crbug.com/1340245 - this causes binary size bloat on Fuchsia, and we're OK
// with not having this data in traces there.
#if !BUILDFLAG(IS_FUCHSIA)
  struct SendFrame_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct CancelInFlightData_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
#endif // !BUILDFLAG(IS_FUCHSIA)
  virtual ~RemotingDataStreamSender() = default;

  
  virtual void SendFrame(uint32_t frame_size) = 0;

  
  virtual void CancelInFlightData() = 0;
};

class RemoterProxy;

template <typename ImplRefTraits>
class RemoterStub;

class RemoterRequestValidator;
class RemoterResponseValidator;


class  Remoter
    : public RemoterInterfaceBase {
 public:
  using IPCStableHashFunction = uint32_t(*)();

  static const char Name_[];
  static IPCStableHashFunction MessageToMethodInfo_(mojo::Message& message);
  static const char* MessageToMethodName_(mojo::Message& message);
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;
  static constexpr bool HasUninterruptableMethods_ = false;

  using Base_ = RemoterInterfaceBase;
  using Proxy_ = RemoterProxy;

  template <typename ImplRefTraits>
  using Stub_ = RemoterStub<ImplRefTraits>;

  using RequestValidator_ = RemoterRequestValidator;
  using ResponseValidator_ = RemoterResponseValidator;
  enum MethodMinVersions : uint32_t {
    kStartMinVersion = 0,
    kStartDataStreamsMinVersion = 0,
    kStopMinVersion = 0,
    kSendMessageToSinkMinVersion = 0,
    kEstimateTransmissionCapacityMinVersion = 0,
  };

// crbug.com/1340245 - this causes binary size bloat on Fuchsia, and we're OK
// with not having this data in traces there.
#if !BUILDFLAG(IS_FUCHSIA)
  struct Start_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct StartDataStreams_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct Stop_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct SendMessageToSink_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct EstimateTransmissionCapacity_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
#endif // !BUILDFLAG(IS_FUCHSIA)
  virtual ~Remoter() = default;

  
  virtual void Start() = 0;

  
  virtual void StartDataStreams(::mojo::ScopedDataPipeConsumerHandle audio_pipe, ::mojo::ScopedDataPipeConsumerHandle video_pipe, ::mojo::PendingReceiver<RemotingDataStreamSender> audio_sender, ::mojo::PendingReceiver<RemotingDataStreamSender> video_sender) = 0;

  
  virtual void Stop(::media::mojom::RemotingStopReason reason) = 0;

  
  virtual void SendMessageToSink(const std::vector<uint8_t>& message) = 0;


  using EstimateTransmissionCapacityCallback = base::OnceCallback<void(double)>;
  
  virtual void EstimateTransmissionCapacity(EstimateTransmissionCapacityCallback callback) = 0;
};

class RemotingSourceProxy;

template <typename ImplRefTraits>
class RemotingSourceStub;

class RemotingSourceRequestValidator;


class  RemotingSource
    : public RemotingSourceInterfaceBase {
 public:
  using IPCStableHashFunction = uint32_t(*)();

  static const char Name_[];
  static IPCStableHashFunction MessageToMethodInfo_(mojo::Message& message);
  static const char* MessageToMethodName_(mojo::Message& message);
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;
  static constexpr bool HasUninterruptableMethods_ = false;

  using Base_ = RemotingSourceInterfaceBase;
  using Proxy_ = RemotingSourceProxy;

  template <typename ImplRefTraits>
  using Stub_ = RemotingSourceStub<ImplRefTraits>;

  using RequestValidator_ = RemotingSourceRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kOnSinkAvailableMinVersion = 0,
    kOnSinkGoneMinVersion = 0,
    kOnStartedMinVersion = 0,
    kOnStartFailedMinVersion = 0,
    kOnMessageFromSinkMinVersion = 0,
    kOnStoppedMinVersion = 0,
  };

// crbug.com/1340245 - this causes binary size bloat on Fuchsia, and we're OK
// with not having this data in traces there.
#if !BUILDFLAG(IS_FUCHSIA)
  struct OnSinkAvailable_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct OnSinkGone_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct OnStarted_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct OnStartFailed_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct OnMessageFromSink_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct OnStopped_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
#endif // !BUILDFLAG(IS_FUCHSIA)
  virtual ~RemotingSource() = default;

  
  virtual void OnSinkAvailable(::media::mojom::RemotingSinkMetadataPtr metadata) = 0;

  
  virtual void OnSinkGone() = 0;

  
  virtual void OnStarted() = 0;

  
  virtual void OnStartFailed(::media::mojom::RemotingStartFailReason reason) = 0;

  
  virtual void OnMessageFromSink(const std::vector<uint8_t>& message) = 0;

  
  virtual void OnStopped(::media::mojom::RemotingStopReason reason) = 0;
};

class RemoteeProxy;

template <typename ImplRefTraits>
class RemoteeStub;

class RemoteeRequestValidator;


class  Remotee
    : public RemoteeInterfaceBase {
 public:
  using IPCStableHashFunction = uint32_t(*)();

  static const char Name_[];
  static IPCStableHashFunction MessageToMethodInfo_(mojo::Message& message);
  static const char* MessageToMethodName_(mojo::Message& message);
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;
  static constexpr bool HasUninterruptableMethods_ = false;

  using Base_ = RemoteeInterfaceBase;
  using Proxy_ = RemoteeProxy;

  template <typename ImplRefTraits>
  using Stub_ = RemoteeStub<ImplRefTraits>;

  using RequestValidator_ = RemoteeRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kOnRemotingSinkReadyMinVersion = 0,
    kSendMessageToSourceMinVersion = 0,
    kStartDataStreamsMinVersion = 0,
    kOnFlushUntilMinVersion = 0,
    kOnVideoNaturalSizeChangeMinVersion = 0,
  };

// crbug.com/1340245 - this causes binary size bloat on Fuchsia, and we're OK
// with not having this data in traces there.
#if !BUILDFLAG(IS_FUCHSIA)
  struct OnRemotingSinkReady_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct SendMessageToSource_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct StartDataStreams_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct OnFlushUntil_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct OnVideoNaturalSizeChange_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
#endif // !BUILDFLAG(IS_FUCHSIA)
  virtual ~Remotee() = default;

  
  virtual void OnRemotingSinkReady(::mojo::PendingRemote<RemotingSink> sink) = 0;

  
  virtual void SendMessageToSource(const std::vector<uint8_t>& message) = 0;

  
  virtual void StartDataStreams(::mojo::PendingRemote<RemotingDataStreamReceiver> audio_stream, ::mojo::PendingRemote<RemotingDataStreamReceiver> video_stream) = 0;

  
  virtual void OnFlushUntil(uint32_t audio_frame_count, uint32_t video_frame_count) = 0;

  
  virtual void OnVideoNaturalSizeChange(const ::gfx::Size& size) = 0;
};

class RemotingSinkProxy;

template <typename ImplRefTraits>
class RemotingSinkStub;

class RemotingSinkRequestValidator;


class  RemotingSink
    : public RemotingSinkInterfaceBase {
 public:
  using IPCStableHashFunction = uint32_t(*)();

  static const char Name_[];
  static IPCStableHashFunction MessageToMethodInfo_(mojo::Message& message);
  static const char* MessageToMethodName_(mojo::Message& message);
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;
  static constexpr bool HasUninterruptableMethods_ = false;

  using Base_ = RemotingSinkInterfaceBase;
  using Proxy_ = RemotingSinkProxy;

  template <typename ImplRefTraits>
  using Stub_ = RemotingSinkStub<ImplRefTraits>;

  using RequestValidator_ = RemotingSinkRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kOnMessageFromSourceMinVersion = 0,
  };

// crbug.com/1340245 - this causes binary size bloat on Fuchsia, and we're OK
// with not having this data in traces there.
#if !BUILDFLAG(IS_FUCHSIA)
  struct OnMessageFromSource_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
#endif // !BUILDFLAG(IS_FUCHSIA)
  virtual ~RemotingSink() = default;

  
  virtual void OnMessageFromSource(const std::vector<uint8_t>& message) = 0;
};

class RemotingDataStreamReceiverProxy;

template <typename ImplRefTraits>
class RemotingDataStreamReceiverStub;

class RemotingDataStreamReceiverRequestValidator;


class  RemotingDataStreamReceiver
    : public RemotingDataStreamReceiverInterfaceBase {
 public:
  using IPCStableHashFunction = uint32_t(*)();

  static const char Name_[];
  static IPCStableHashFunction MessageToMethodInfo_(mojo::Message& message);
  static const char* MessageToMethodName_(mojo::Message& message);
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;
  static constexpr bool HasUninterruptableMethods_ = false;

  using Base_ = RemotingDataStreamReceiverInterfaceBase;
  using Proxy_ = RemotingDataStreamReceiverProxy;

  template <typename ImplRefTraits>
  using Stub_ = RemotingDataStreamReceiverStub<ImplRefTraits>;

  using RequestValidator_ = RemotingDataStreamReceiverRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kInitializeDataPipeMinVersion = 0,
    kReceiveFrameMinVersion = 0,
    kFlushUntilMinVersion = 0,
  };

// crbug.com/1340245 - this causes binary size bloat on Fuchsia, and we're OK
// with not having this data in traces there.
#if !BUILDFLAG(IS_FUCHSIA)
  struct InitializeDataPipe_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct ReceiveFrame_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct FlushUntil_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
#endif // !BUILDFLAG(IS_FUCHSIA)
  virtual ~RemotingDataStreamReceiver() = default;

  
  virtual void InitializeDataPipe(::mojo::ScopedDataPipeConsumerHandle data_pipe) = 0;

  
  virtual void ReceiveFrame(uint32_t frame_count, ::media::mojom::DecoderBufferPtr buffer) = 0;

  
  virtual void FlushUntil(uint32_t frame_count) = 0;
};



class  RemoterFactoryProxy
    : public RemoterFactory {
 public:
  using InterfaceType = RemoterFactory;

  explicit RemoterFactoryProxy(mojo::MessageReceiverWithResponder* receiver);
  
  void Create(::mojo::PendingRemote<RemotingSource> source, ::mojo::PendingReceiver<Remoter> remoter) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};



class  RemotingDataStreamSenderProxy
    : public RemotingDataStreamSender {
 public:
  using InterfaceType = RemotingDataStreamSender;

  explicit RemotingDataStreamSenderProxy(mojo::MessageReceiverWithResponder* receiver);
  
  void SendFrame(uint32_t frame_size) final;
  
  void CancelInFlightData() final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};



class  RemoterProxy
    : public Remoter {
 public:
  using InterfaceType = Remoter;

  explicit RemoterProxy(mojo::MessageReceiverWithResponder* receiver);
  
  void Start() final;
  
  void StartDataStreams(::mojo::ScopedDataPipeConsumerHandle audio_pipe, ::mojo::ScopedDataPipeConsumerHandle video_pipe, ::mojo::PendingReceiver<RemotingDataStreamSender> audio_sender, ::mojo::PendingReceiver<RemotingDataStreamSender> video_sender) final;
  
  void Stop(::media::mojom::RemotingStopReason reason) final;
  
  void SendMessageToSink(const std::vector<uint8_t>& message) final;
  
  void EstimateTransmissionCapacity(EstimateTransmissionCapacityCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};



class  RemotingSourceProxy
    : public RemotingSource {
 public:
  using InterfaceType = RemotingSource;

  explicit RemotingSourceProxy(mojo::MessageReceiverWithResponder* receiver);
  
  void OnSinkAvailable(::media::mojom::RemotingSinkMetadataPtr metadata) final;
  
  void OnSinkGone() final;
  
  void OnStarted() final;
  
  void OnStartFailed(::media::mojom::RemotingStartFailReason reason) final;
  
  void OnMessageFromSink(const std::vector<uint8_t>& message) final;
  
  void OnStopped(::media::mojom::RemotingStopReason reason) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};



class  RemoteeProxy
    : public Remotee {
 public:
  using InterfaceType = Remotee;

  explicit RemoteeProxy(mojo::MessageReceiverWithResponder* receiver);
  
  void OnRemotingSinkReady(::mojo::PendingRemote<RemotingSink> sink) final;
  
  void SendMessageToSource(const std::vector<uint8_t>& message) final;
  
  void StartDataStreams(::mojo::PendingRemote<RemotingDataStreamReceiver> audio_stream, ::mojo::PendingRemote<RemotingDataStreamReceiver> video_stream) final;
  
  void OnFlushUntil(uint32_t audio_frame_count, uint32_t video_frame_count) final;
  
  void OnVideoNaturalSizeChange(const ::gfx::Size& size) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};



class  RemotingSinkProxy
    : public RemotingSink {
 public:
  using InterfaceType = RemotingSink;

  explicit RemotingSinkProxy(mojo::MessageReceiverWithResponder* receiver);
  
  void OnMessageFromSource(const std::vector<uint8_t>& message) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};



class  RemotingDataStreamReceiverProxy
    : public RemotingDataStreamReceiver {
 public:
  using InterfaceType = RemotingDataStreamReceiver;

  explicit RemotingDataStreamReceiverProxy(mojo::MessageReceiverWithResponder* receiver);
  
  void InitializeDataPipe(::mojo::ScopedDataPipeConsumerHandle data_pipe) final;
  
  void ReceiveFrame(uint32_t frame_count, ::media::mojom::DecoderBufferPtr buffer) final;
  
  void FlushUntil(uint32_t frame_count) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  RemoterFactoryStubDispatch {
 public:
  static bool Accept(RemoterFactory* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      RemoterFactory* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<RemoterFactory>>
class RemoterFactoryStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  RemoterFactoryStub() = default;
  ~RemoterFactoryStub() override = default;

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return RemoterFactoryStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return RemoterFactoryStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  RemotingDataStreamSenderStubDispatch {
 public:
  static bool Accept(RemotingDataStreamSender* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      RemotingDataStreamSender* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<RemotingDataStreamSender>>
class RemotingDataStreamSenderStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  RemotingDataStreamSenderStub() = default;
  ~RemotingDataStreamSenderStub() override = default;

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return RemotingDataStreamSenderStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return RemotingDataStreamSenderStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  RemoterStubDispatch {
 public:
  static bool Accept(Remoter* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      Remoter* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<Remoter>>
class RemoterStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  RemoterStub() = default;
  ~RemoterStub() override = default;

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return RemoterStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return RemoterStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  RemotingSourceStubDispatch {
 public:
  static bool Accept(RemotingSource* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      RemotingSource* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<RemotingSource>>
class RemotingSourceStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  RemotingSourceStub() = default;
  ~RemotingSourceStub() override = default;

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return RemotingSourceStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return RemotingSourceStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  RemoteeStubDispatch {
 public:
  static bool Accept(Remotee* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      Remotee* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<Remotee>>
class RemoteeStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  RemoteeStub() = default;
  ~RemoteeStub() override = default;

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return RemoteeStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return RemoteeStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  RemotingSinkStubDispatch {
 public:
  static bool Accept(RemotingSink* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      RemotingSink* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<RemotingSink>>
class RemotingSinkStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  RemotingSinkStub() = default;
  ~RemotingSinkStub() override = default;

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return RemotingSinkStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return RemotingSinkStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  RemotingDataStreamReceiverStubDispatch {
 public:
  static bool Accept(RemotingDataStreamReceiver* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      RemotingDataStreamReceiver* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<RemotingDataStreamReceiver>>
class RemotingDataStreamReceiverStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  RemotingDataStreamReceiverStub() = default;
  ~RemotingDataStreamReceiverStub() override = default;

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return RemotingDataStreamReceiverStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return RemotingDataStreamReceiverStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  RemoterFactoryRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  RemotingDataStreamSenderRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  RemoterRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  RemotingSourceRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  RemoteeRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  RemotingSinkRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  RemotingDataStreamReceiverRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  RemoterResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace media

namespace mojo {

}  // namespace mojo

#endif  // MEDIA_MOJO_MOJOM_REMOTING_MOJOM_H_