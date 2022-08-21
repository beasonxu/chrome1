// services/viz/public/mojom/compositing/video_detector_observer.mojom.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIZ_PUBLIC_MOJOM_COMPOSITING_VIDEO_DETECTOR_OBSERVER_MOJOM_H_
#define SERVICES_VIZ_PUBLIC_MOJOM_COMPOSITING_VIDEO_DETECTOR_OBSERVER_MOJOM_H_

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

#include "services/viz/public/mojom/compositing/video_detector_observer.mojom-shared.h"
#include "services/viz/public/mojom/compositing/video_detector_observer.mojom-forward.h"
#include <string>
#include <vector>

#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/raw_ptr_impl_ref_traits.h"






namespace viz {
namespace mojom {

class VideoDetectorObserverProxy;

template <typename ImplRefTraits>
class VideoDetectorObserverStub;

class VideoDetectorObserverRequestValidator;


class  VideoDetectorObserver
    : public VideoDetectorObserverInterfaceBase {
 public:
  using IPCStableHashFunction = uint32_t(*)();

  static const char Name_[];
  static IPCStableHashFunction MessageToMethodInfo_(mojo::Message& message);
  static const char* MessageToMethodName_(mojo::Message& message);
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;
  static constexpr bool HasUninterruptableMethods_ = false;

  using Base_ = VideoDetectorObserverInterfaceBase;
  using Proxy_ = VideoDetectorObserverProxy;

  template <typename ImplRefTraits>
  using Stub_ = VideoDetectorObserverStub<ImplRefTraits>;

  using RequestValidator_ = VideoDetectorObserverRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kOnVideoActivityStartedMinVersion = 0,
    kOnVideoActivityEndedMinVersion = 0,
  };

// crbug.com/1340245 - this causes binary size bloat on Fuchsia, and we're OK
// with not having this data in traces there.
#if !BUILDFLAG(IS_FUCHSIA)
  struct OnVideoActivityStarted_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct OnVideoActivityEnded_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
#endif // !BUILDFLAG(IS_FUCHSIA)
  virtual ~VideoDetectorObserver() = default;

  
  virtual void OnVideoActivityStarted() = 0;

  
  virtual void OnVideoActivityEnded() = 0;
};



class  VideoDetectorObserverProxy
    : public VideoDetectorObserver {
 public:
  using InterfaceType = VideoDetectorObserver;

  explicit VideoDetectorObserverProxy(mojo::MessageReceiverWithResponder* receiver);
  
  void OnVideoActivityStarted() final;
  
  void OnVideoActivityEnded() final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  VideoDetectorObserverStubDispatch {
 public:
  static bool Accept(VideoDetectorObserver* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      VideoDetectorObserver* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<VideoDetectorObserver>>
class VideoDetectorObserverStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  VideoDetectorObserverStub() = default;
  ~VideoDetectorObserverStub() override = default;

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return VideoDetectorObserverStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return VideoDetectorObserverStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  VideoDetectorObserverRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace viz

namespace mojo {

}  // namespace mojo

#endif  // SERVICES_VIZ_PUBLIC_MOJOM_COMPOSITING_VIDEO_DETECTOR_OBSERVER_MOJOM_H_