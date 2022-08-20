// third_party/blink/public/mojom/picture_in_picture/picture_in_picture.mojom.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_PICTURE_IN_PICTURE_PICTURE_IN_PICTURE_MOJOM_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_PICTURE_IN_PICTURE_PICTURE_IN_PICTURE_MOJOM_H_

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

#include "third_party/blink/public/mojom/picture_in_picture/picture_in_picture.mojom-shared.h"
#include "third_party/blink/public/mojom/picture_in_picture/picture_in_picture.mojom-forward.h"
#include "media/mojo/mojom/media_player.mojom-forward.h"
#include "services/viz/public/mojom/compositing/surface_id.mojom.h"
#include "ui/gfx/geometry/mojom/geometry.mojom.h"
#include <string>
#include <vector>

#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/raw_ptr_impl_ref_traits.h"


#include "third_party/blink/public/common/common_export.h"




namespace blink {
namespace mojom {

class PictureInPictureSessionObserverProxy;

template <typename ImplRefTraits>
class PictureInPictureSessionObserverStub;

class PictureInPictureSessionObserverRequestValidator;


class BLINK_COMMON_EXPORT PictureInPictureSessionObserver
    : public PictureInPictureSessionObserverInterfaceBase {
 public:
  using IPCStableHashFunction = uint32_t(*)();

  static const char Name_[];
  static IPCStableHashFunction MessageToMethodInfo_(mojo::Message& message);
  static const char* MessageToMethodName_(mojo::Message& message);
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;
  static constexpr bool HasUninterruptableMethods_ = false;

  using Base_ = PictureInPictureSessionObserverInterfaceBase;
  using Proxy_ = PictureInPictureSessionObserverProxy;

  template <typename ImplRefTraits>
  using Stub_ = PictureInPictureSessionObserverStub<ImplRefTraits>;

  using RequestValidator_ = PictureInPictureSessionObserverRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kOnWindowSizeChangedMinVersion = 0,
    kOnStoppedMinVersion = 0,
  };

// crbug.com/1340245 - this causes binary size bloat on Fuchsia, and we're OK
// with not having this data in traces there.
#if !BUILDFLAG(IS_FUCHSIA)
  struct OnWindowSizeChanged_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct OnStopped_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
#endif // !BUILDFLAG(IS_FUCHSIA)
  virtual ~PictureInPictureSessionObserver() = default;

  
  virtual void OnWindowSizeChanged(const ::gfx::Size& size) = 0;

  
  virtual void OnStopped() = 0;
};

class PictureInPictureSessionProxy;

template <typename ImplRefTraits>
class PictureInPictureSessionStub;

class PictureInPictureSessionRequestValidator;
class PictureInPictureSessionResponseValidator;


class BLINK_COMMON_EXPORT PictureInPictureSession
    : public PictureInPictureSessionInterfaceBase {
 public:
  using IPCStableHashFunction = uint32_t(*)();

  static const char Name_[];
  static IPCStableHashFunction MessageToMethodInfo_(mojo::Message& message);
  static const char* MessageToMethodName_(mojo::Message& message);
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = true;
  static constexpr bool HasSyncMethods_ = false;
  static constexpr bool HasUninterruptableMethods_ = false;

  using Base_ = PictureInPictureSessionInterfaceBase;
  using Proxy_ = PictureInPictureSessionProxy;

  template <typename ImplRefTraits>
  using Stub_ = PictureInPictureSessionStub<ImplRefTraits>;

  using RequestValidator_ = PictureInPictureSessionRequestValidator;
  using ResponseValidator_ = PictureInPictureSessionResponseValidator;
  enum MethodMinVersions : uint32_t {
    kUpdateMinVersion = 0,
    kStopMinVersion = 0,
  };

// crbug.com/1340245 - this causes binary size bloat on Fuchsia, and we're OK
// with not having this data in traces there.
#if !BUILDFLAG(IS_FUCHSIA)
  struct Update_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct Stop_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
#endif // !BUILDFLAG(IS_FUCHSIA)
  virtual ~PictureInPictureSession() = default;

  
  virtual void Update(uint32_t player_id, ::mojo::PendingAssociatedRemote<::media::mojom::MediaPlayer> player_remote, const ::viz::SurfaceId& surface_id, const ::gfx::Size& natural_size, bool show_play_pause_button) = 0;


  using StopCallback = base::OnceCallback<void()>;
  
  virtual void Stop(StopCallback callback) = 0;
};

class PictureInPictureServiceProxy;

template <typename ImplRefTraits>
class PictureInPictureServiceStub;

class PictureInPictureServiceRequestValidator;
class PictureInPictureServiceResponseValidator;


class BLINK_COMMON_EXPORT PictureInPictureService
    : public PictureInPictureServiceInterfaceBase {
 public:
  using IPCStableHashFunction = uint32_t(*)();

  static const char Name_[];
  static IPCStableHashFunction MessageToMethodInfo_(mojo::Message& message);
  static const char* MessageToMethodName_(mojo::Message& message);
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = true;
  static constexpr bool HasSyncMethods_ = false;
  static constexpr bool HasUninterruptableMethods_ = false;

  using Base_ = PictureInPictureServiceInterfaceBase;
  using Proxy_ = PictureInPictureServiceProxy;

  template <typename ImplRefTraits>
  using Stub_ = PictureInPictureServiceStub<ImplRefTraits>;

  using RequestValidator_ = PictureInPictureServiceRequestValidator;
  using ResponseValidator_ = PictureInPictureServiceResponseValidator;
  enum MethodMinVersions : uint32_t {
    kStartSessionMinVersion = 0,
  };

// crbug.com/1340245 - this causes binary size bloat on Fuchsia, and we're OK
// with not having this data in traces there.
#if !BUILDFLAG(IS_FUCHSIA)
  struct StartSession_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
#endif // !BUILDFLAG(IS_FUCHSIA)
  virtual ~PictureInPictureService() = default;


  using StartSessionCallback = base::OnceCallback<void(::mojo::PendingRemote<PictureInPictureSession>, const ::gfx::Size&)>;
  
  virtual void StartSession(uint32_t player_id, ::mojo::PendingAssociatedRemote<::media::mojom::MediaPlayer> player_remote, const ::viz::SurfaceId& surface_id, const ::gfx::Size& natural_size, bool show_play_pause_button, ::mojo::PendingRemote<PictureInPictureSessionObserver> observer, const ::gfx::Rect& source_bounds, StartSessionCallback callback) = 0;
};



class BLINK_COMMON_EXPORT PictureInPictureSessionObserverProxy
    : public PictureInPictureSessionObserver {
 public:
  using InterfaceType = PictureInPictureSessionObserver;

  explicit PictureInPictureSessionObserverProxy(mojo::MessageReceiverWithResponder* receiver);
  
  void OnWindowSizeChanged(const ::gfx::Size& size) final;
  
  void OnStopped() final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};



class BLINK_COMMON_EXPORT PictureInPictureSessionProxy
    : public PictureInPictureSession {
 public:
  using InterfaceType = PictureInPictureSession;

  explicit PictureInPictureSessionProxy(mojo::MessageReceiverWithResponder* receiver);
  
  void Update(uint32_t player_id, ::mojo::PendingAssociatedRemote<::media::mojom::MediaPlayer> player_remote, const ::viz::SurfaceId& surface_id, const ::gfx::Size& natural_size, bool show_play_pause_button) final;
  
  void Stop(StopCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};



class BLINK_COMMON_EXPORT PictureInPictureServiceProxy
    : public PictureInPictureService {
 public:
  using InterfaceType = PictureInPictureService;

  explicit PictureInPictureServiceProxy(mojo::MessageReceiverWithResponder* receiver);
  
  void StartSession(uint32_t player_id, ::mojo::PendingAssociatedRemote<::media::mojom::MediaPlayer> player_remote, const ::viz::SurfaceId& surface_id, const ::gfx::Size& natural_size, bool show_play_pause_button, ::mojo::PendingRemote<PictureInPictureSessionObserver> observer, const ::gfx::Rect& source_bounds, StartSessionCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class BLINK_COMMON_EXPORT PictureInPictureSessionObserverStubDispatch {
 public:
  static bool Accept(PictureInPictureSessionObserver* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      PictureInPictureSessionObserver* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<PictureInPictureSessionObserver>>
class PictureInPictureSessionObserverStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  PictureInPictureSessionObserverStub() = default;
  ~PictureInPictureSessionObserverStub() override = default;

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return PictureInPictureSessionObserverStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return PictureInPictureSessionObserverStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_COMMON_EXPORT PictureInPictureSessionStubDispatch {
 public:
  static bool Accept(PictureInPictureSession* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      PictureInPictureSession* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<PictureInPictureSession>>
class PictureInPictureSessionStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  PictureInPictureSessionStub() = default;
  ~PictureInPictureSessionStub() override = default;

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return PictureInPictureSessionStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return PictureInPictureSessionStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_COMMON_EXPORT PictureInPictureServiceStubDispatch {
 public:
  static bool Accept(PictureInPictureService* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      PictureInPictureService* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<PictureInPictureService>>
class PictureInPictureServiceStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  PictureInPictureServiceStub() = default;
  ~PictureInPictureServiceStub() override = default;

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return PictureInPictureServiceStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return PictureInPictureServiceStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_COMMON_EXPORT PictureInPictureSessionObserverRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_COMMON_EXPORT PictureInPictureSessionRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_COMMON_EXPORT PictureInPictureServiceRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_COMMON_EXPORT PictureInPictureSessionResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_COMMON_EXPORT PictureInPictureServiceResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace blink

namespace mojo {

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_PICTURE_IN_PICTURE_PICTURE_IN_PICTURE_MOJOM_H_