// third_party/blink/public/mojom/media/renderer_audio_output_stream_factory.mojom.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_MEDIA_RENDERER_AUDIO_OUTPUT_STREAM_FACTORY_MOJOM_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_MEDIA_RENDERER_AUDIO_OUTPUT_STREAM_FACTORY_MOJOM_H_

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

#include "third_party/blink/public/mojom/media/renderer_audio_output_stream_factory.mojom-shared.h"
#include "third_party/blink/public/mojom/media/renderer_audio_output_stream_factory.mojom-forward.h"
#include "media/mojo/mojom/audio_output_stream.mojom-forward.h"
#include "media/mojo/mojom/audio_parameters.mojom.h"
#include "media/mojo/mojom/media_types.mojom.h"
#include "mojo/public/mojom/base/unguessable_token.mojom.h"
#include <string>
#include <vector>

#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/raw_ptr_impl_ref_traits.h"


#include "third_party/blink/public/common/common_export.h"




namespace blink {
namespace mojom {

class RendererAudioOutputStreamFactoryProxy;

template <typename ImplRefTraits>
class RendererAudioOutputStreamFactoryStub;

class RendererAudioOutputStreamFactoryRequestValidator;
class RendererAudioOutputStreamFactoryResponseValidator;


class BLINK_COMMON_EXPORT RendererAudioOutputStreamFactory
    : public RendererAudioOutputStreamFactoryInterfaceBase {
 public:
  using IPCStableHashFunction = uint32_t(*)();

  static const char Name_[];
  static IPCStableHashFunction MessageToMethodInfo_(mojo::Message& message);
  static const char* MessageToMethodName_(mojo::Message& message);
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;
  static constexpr bool HasUninterruptableMethods_ = false;

  using Base_ = RendererAudioOutputStreamFactoryInterfaceBase;
  using Proxy_ = RendererAudioOutputStreamFactoryProxy;

  template <typename ImplRefTraits>
  using Stub_ = RendererAudioOutputStreamFactoryStub<ImplRefTraits>;

  using RequestValidator_ = RendererAudioOutputStreamFactoryRequestValidator;
  using ResponseValidator_ = RendererAudioOutputStreamFactoryResponseValidator;
  enum MethodMinVersions : uint32_t {
    kRequestDeviceAuthorizationMinVersion = 0,
  };

// crbug.com/1340245 - this causes binary size bloat on Fuchsia, and we're OK
// with not having this data in traces there.
#if !BUILDFLAG(IS_FUCHSIA)
  struct RequestDeviceAuthorization_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
#endif // !BUILDFLAG(IS_FUCHSIA)
  virtual ~RendererAudioOutputStreamFactory() = default;


  using RequestDeviceAuthorizationCallback = base::OnceCallback<void(::media::OutputDeviceStatus, const ::media::AudioParameters&, const std::string&)>;
  
  virtual void RequestDeviceAuthorization(::mojo::PendingReceiver<::media::mojom::AudioOutputStreamProvider> stream_provider_receiver, const absl::optional<::base::UnguessableToken>& session_id, const std::string& device_id, RequestDeviceAuthorizationCallback callback) = 0;
};



class BLINK_COMMON_EXPORT RendererAudioOutputStreamFactoryProxy
    : public RendererAudioOutputStreamFactory {
 public:
  using InterfaceType = RendererAudioOutputStreamFactory;

  explicit RendererAudioOutputStreamFactoryProxy(mojo::MessageReceiverWithResponder* receiver);
  
  void RequestDeviceAuthorization(::mojo::PendingReceiver<::media::mojom::AudioOutputStreamProvider> stream_provider_receiver, const absl::optional<::base::UnguessableToken>& session_id, const std::string& device_id, RequestDeviceAuthorizationCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class BLINK_COMMON_EXPORT RendererAudioOutputStreamFactoryStubDispatch {
 public:
  static bool Accept(RendererAudioOutputStreamFactory* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      RendererAudioOutputStreamFactory* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<RendererAudioOutputStreamFactory>>
class RendererAudioOutputStreamFactoryStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  RendererAudioOutputStreamFactoryStub() = default;
  ~RendererAudioOutputStreamFactoryStub() override = default;

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return RendererAudioOutputStreamFactoryStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return RendererAudioOutputStreamFactoryStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_COMMON_EXPORT RendererAudioOutputStreamFactoryRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_COMMON_EXPORT RendererAudioOutputStreamFactoryResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace blink

namespace mojo {

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_MEDIA_RENDERER_AUDIO_OUTPUT_STREAM_FACTORY_MOJOM_H_