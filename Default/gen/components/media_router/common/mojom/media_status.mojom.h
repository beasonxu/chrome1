// components/media_router/common/mojom/media_status.mojom.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_MEDIA_ROUTER_COMMON_MOJOM_MEDIA_STATUS_MOJOM_H_
#define COMPONENTS_MEDIA_ROUTER_COMMON_MOJOM_MEDIA_STATUS_MOJOM_H_

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

#include "components/media_router/common/mojom/media_status.mojom-shared.h"
#include "components/media_router/common/mojom/media_status.mojom-forward.h"
#include "mojo/public/mojom/base/time.mojom.h"
#include "ui/gfx/geometry/mojom/geometry.mojom.h"
#include "url/mojom/url.mojom.h"
#include <string>
#include <vector>

#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/raw_ptr_impl_ref_traits.h"






namespace media_router {
namespace mojom {

class MediaStatusObserverProxy;

template <typename ImplRefTraits>
class MediaStatusObserverStub;

class MediaStatusObserverRequestValidator;


class  MediaStatusObserver
    : public MediaStatusObserverInterfaceBase {
 public:
  using IPCStableHashFunction = uint32_t(*)();

  static const char Name_[];
  static IPCStableHashFunction MessageToMethodInfo_(mojo::Message& message);
  static const char* MessageToMethodName_(mojo::Message& message);
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;
  static constexpr bool HasUninterruptableMethods_ = false;

  using Base_ = MediaStatusObserverInterfaceBase;
  using Proxy_ = MediaStatusObserverProxy;

  template <typename ImplRefTraits>
  using Stub_ = MediaStatusObserverStub<ImplRefTraits>;

  using RequestValidator_ = MediaStatusObserverRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kOnMediaStatusUpdatedMinVersion = 0,
  };

// crbug.com/1340245 - this causes binary size bloat on Fuchsia, and we're OK
// with not having this data in traces there.
#if !BUILDFLAG(IS_FUCHSIA)
  struct OnMediaStatusUpdated_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
#endif // !BUILDFLAG(IS_FUCHSIA)
  virtual ~MediaStatusObserver() = default;

  
  virtual void OnMediaStatusUpdated(MediaStatusPtr status) = 0;
};



class  MediaStatusObserverProxy
    : public MediaStatusObserver {
 public:
  using InterfaceType = MediaStatusObserver;

  explicit MediaStatusObserverProxy(mojo::MessageReceiverWithResponder* receiver);
  
  void OnMediaStatusUpdated(MediaStatusPtr status) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  MediaStatusObserverStubDispatch {
 public:
  static bool Accept(MediaStatusObserver* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      MediaStatusObserver* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<MediaStatusObserver>>
class MediaStatusObserverStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  MediaStatusObserverStub() = default;
  ~MediaStatusObserverStub() override = default;

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return MediaStatusObserverStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return MediaStatusObserverStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  MediaStatusObserverRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};









class  MediaImage {
 public:
  template <typename T>
  using EnableIfSame = std::enable_if_t<std::is_same<MediaImage, T>::value>;
  using DataView = MediaImageDataView;
  using Data_ = internal::MediaImage_Data;

  template <typename... Args>
  static MediaImagePtr New(Args&&... args) {
    return MediaImagePtr(
        absl::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static MediaImagePtr From(const U& u) {
    return mojo::TypeConverter<MediaImagePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, MediaImage>::Convert(*this);
  }


  MediaImage();

  MediaImage(
      const ::GURL& url,
      const absl::optional<::gfx::Size>& size);


  ~MediaImage();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = MediaImagePtr>
  MediaImagePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T, MediaImage::EnableIfSame<T>* = nullptr>
  bool Equals(const T& other) const;

  template <typename T, MediaImage::EnableIfSame<T>* = nullptr>
  bool operator==(const T& rhs) const { return Equals(rhs); }
  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        MediaImage::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        MediaImage::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::MediaImage_UnserializedMessageContext<
            UserType, MediaImage::DataView>>(0, 0, std::move(input)),
        MOJO_CREATE_MESSAGE_FLAG_NONE);
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    mojo::Message message;
    return mojo::internal::DeserializeImpl<MediaImage::DataView>(
        message, data, data_num_bytes, output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return MediaImage::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::MediaImage_UnserializedMessageContext<
            UserType, MediaImage::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<MediaImage::DataView>(
        input, input.payload(), input.payload_num_bytes(), output, Validate);
  }

  
  ::GURL url;
  
  absl::optional<::gfx::Size> size;

  // Serialise this struct into a trace.
  void WriteIntoTrace(perfetto::TracedValue traced_context) const;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

// The comparison operators are templates, so they are only instantiated if they
// are used. Thus, the bindings generator does not need to know whether
// comparison operators are available for members.
template <typename T, MediaImage::EnableIfSame<T>* = nullptr>
bool operator<(const T& lhs, const T& rhs);

template <typename T, MediaImage::EnableIfSame<T>* = nullptr>
bool operator<=(const T& lhs, const T& rhs) {
  return !(rhs < lhs);
}

template <typename T, MediaImage::EnableIfSame<T>* = nullptr>
bool operator>(const T& lhs, const T& rhs) {
  return rhs < lhs;
}

template <typename T, MediaImage::EnableIfSame<T>* = nullptr>
bool operator>=(const T& lhs, const T& rhs) {
  return !(lhs < rhs);
}





class  MediaStatus {
 public:
  template <typename T>
  using EnableIfSame = std::enable_if_t<std::is_same<MediaStatus, T>::value>;
  using DataView = MediaStatusDataView;
  using Data_ = internal::MediaStatus_Data;
  using PlayState = MediaStatus_PlayState;

  template <typename... Args>
  static MediaStatusPtr New(Args&&... args) {
    return MediaStatusPtr(
        absl::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static MediaStatusPtr From(const U& u) {
    return mojo::TypeConverter<MediaStatusPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, MediaStatus>::Convert(*this);
  }


  MediaStatus();

  MediaStatus(
      const std::string& title,
      const std::string& secondary_title,
      bool can_play_pause,
      bool can_mute,
      bool can_set_volume,
      bool can_seek,
      bool can_skip_to_next_track,
      bool can_skip_to_previous_track,
      MediaStatus::PlayState play_state,
      bool is_muted,
      float volume,
      ::base::TimeDelta duration,
      ::base::TimeDelta current_time,
      std::vector<MediaImagePtr> images);

MediaStatus(const MediaStatus&) = delete;
MediaStatus& operator=(const MediaStatus&) = delete;

  ~MediaStatus();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = MediaStatusPtr>
  MediaStatusPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T, MediaStatus::EnableIfSame<T>* = nullptr>
  bool Equals(const T& other) const;

  template <typename T, MediaStatus::EnableIfSame<T>* = nullptr>
  bool operator==(const T& rhs) const { return Equals(rhs); }
  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        MediaStatus::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        MediaStatus::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::MediaStatus_UnserializedMessageContext<
            UserType, MediaStatus::DataView>>(0, 0, std::move(input)),
        MOJO_CREATE_MESSAGE_FLAG_NONE);
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    mojo::Message message;
    return mojo::internal::DeserializeImpl<MediaStatus::DataView>(
        message, data, data_num_bytes, output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return MediaStatus::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::MediaStatus_UnserializedMessageContext<
            UserType, MediaStatus::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<MediaStatus::DataView>(
        input, input.payload(), input.payload_num_bytes(), output, Validate);
  }

  
  std::string title;
  
  std::string secondary_title;
  
  bool can_play_pause;
  
  bool can_mute;
  
  bool can_set_volume;
  
  bool can_seek;
  
  bool can_skip_to_next_track;
  
  bool can_skip_to_previous_track;
  
  MediaStatus::PlayState play_state;
  
  bool is_muted;
  
  float volume;
  
  ::base::TimeDelta duration;
  
  ::base::TimeDelta current_time;
  
  std::vector<MediaImagePtr> images;

  // Serialise this struct into a trace.
  void WriteIntoTrace(perfetto::TracedValue traced_context) const;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

// The comparison operators are templates, so they are only instantiated if they
// are used. Thus, the bindings generator does not need to know whether
// comparison operators are available for members.
template <typename T, MediaStatus::EnableIfSame<T>* = nullptr>
bool operator<(const T& lhs, const T& rhs);

template <typename T, MediaStatus::EnableIfSame<T>* = nullptr>
bool operator<=(const T& lhs, const T& rhs) {
  return !(rhs < lhs);
}

template <typename T, MediaStatus::EnableIfSame<T>* = nullptr>
bool operator>(const T& lhs, const T& rhs) {
  return rhs < lhs;
}

template <typename T, MediaStatus::EnableIfSame<T>* = nullptr>
bool operator>=(const T& lhs, const T& rhs) {
  return !(lhs < rhs);
}

template <typename StructPtrType>
MediaImagePtr MediaImage::Clone() const {
  return New(
      mojo::Clone(url),
      mojo::Clone(size)
  );
}

template <typename T, MediaImage::EnableIfSame<T>*>
bool MediaImage::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->url, other_struct.url))
    return false;
  if (!mojo::Equals(this->size, other_struct.size))
    return false;
  return true;
}

template <typename T, MediaImage::EnableIfSame<T>*>
bool operator<(const T& lhs, const T& rhs) {
  if (lhs.url < rhs.url)
    return true;
  if (rhs.url < lhs.url)
    return false;
  if (lhs.size < rhs.size)
    return true;
  if (rhs.size < lhs.size)
    return false;
  return false;
}
template <typename StructPtrType>
MediaStatusPtr MediaStatus::Clone() const {
  return New(
      mojo::Clone(title),
      mojo::Clone(secondary_title),
      mojo::Clone(can_play_pause),
      mojo::Clone(can_mute),
      mojo::Clone(can_set_volume),
      mojo::Clone(can_seek),
      mojo::Clone(can_skip_to_next_track),
      mojo::Clone(can_skip_to_previous_track),
      mojo::Clone(play_state),
      mojo::Clone(is_muted),
      mojo::Clone(volume),
      mojo::Clone(duration),
      mojo::Clone(current_time),
      mojo::Clone(images)
  );
}

template <typename T, MediaStatus::EnableIfSame<T>*>
bool MediaStatus::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->title, other_struct.title))
    return false;
  if (!mojo::Equals(this->secondary_title, other_struct.secondary_title))
    return false;
  if (!mojo::Equals(this->can_play_pause, other_struct.can_play_pause))
    return false;
  if (!mojo::Equals(this->can_mute, other_struct.can_mute))
    return false;
  if (!mojo::Equals(this->can_set_volume, other_struct.can_set_volume))
    return false;
  if (!mojo::Equals(this->can_seek, other_struct.can_seek))
    return false;
  if (!mojo::Equals(this->can_skip_to_next_track, other_struct.can_skip_to_next_track))
    return false;
  if (!mojo::Equals(this->can_skip_to_previous_track, other_struct.can_skip_to_previous_track))
    return false;
  if (!mojo::Equals(this->play_state, other_struct.play_state))
    return false;
  if (!mojo::Equals(this->is_muted, other_struct.is_muted))
    return false;
  if (!mojo::Equals(this->volume, other_struct.volume))
    return false;
  if (!mojo::Equals(this->duration, other_struct.duration))
    return false;
  if (!mojo::Equals(this->current_time, other_struct.current_time))
    return false;
  if (!mojo::Equals(this->images, other_struct.images))
    return false;
  return true;
}

template <typename T, MediaStatus::EnableIfSame<T>*>
bool operator<(const T& lhs, const T& rhs) {
  if (lhs.title < rhs.title)
    return true;
  if (rhs.title < lhs.title)
    return false;
  if (lhs.secondary_title < rhs.secondary_title)
    return true;
  if (rhs.secondary_title < lhs.secondary_title)
    return false;
  if (lhs.can_play_pause < rhs.can_play_pause)
    return true;
  if (rhs.can_play_pause < lhs.can_play_pause)
    return false;
  if (lhs.can_mute < rhs.can_mute)
    return true;
  if (rhs.can_mute < lhs.can_mute)
    return false;
  if (lhs.can_set_volume < rhs.can_set_volume)
    return true;
  if (rhs.can_set_volume < lhs.can_set_volume)
    return false;
  if (lhs.can_seek < rhs.can_seek)
    return true;
  if (rhs.can_seek < lhs.can_seek)
    return false;
  if (lhs.can_skip_to_next_track < rhs.can_skip_to_next_track)
    return true;
  if (rhs.can_skip_to_next_track < lhs.can_skip_to_next_track)
    return false;
  if (lhs.can_skip_to_previous_track < rhs.can_skip_to_previous_track)
    return true;
  if (rhs.can_skip_to_previous_track < lhs.can_skip_to_previous_track)
    return false;
  if (lhs.play_state < rhs.play_state)
    return true;
  if (rhs.play_state < lhs.play_state)
    return false;
  if (lhs.is_muted < rhs.is_muted)
    return true;
  if (rhs.is_muted < lhs.is_muted)
    return false;
  if (lhs.volume < rhs.volume)
    return true;
  if (rhs.volume < lhs.volume)
    return false;
  if (lhs.duration < rhs.duration)
    return true;
  if (rhs.duration < lhs.duration)
    return false;
  if (lhs.current_time < rhs.current_time)
    return true;
  if (rhs.current_time < lhs.current_time)
    return false;
  if (lhs.images < rhs.images)
    return true;
  if (rhs.images < lhs.images)
    return false;
  return false;
}


}  // namespace mojom
}  // namespace media_router

namespace mojo {


template <>
struct  StructTraits<::media_router::mojom::MediaImage::DataView,
                                         ::media_router::mojom::MediaImagePtr> {
  static bool IsNull(const ::media_router::mojom::MediaImagePtr& input) { return !input; }
  static void SetToNull(::media_router::mojom::MediaImagePtr* output) { output->reset(); }

  static const decltype(::media_router::mojom::MediaImage::url)& url(
      const ::media_router::mojom::MediaImagePtr& input) {
    return input->url;
  }

  static const decltype(::media_router::mojom::MediaImage::size)& size(
      const ::media_router::mojom::MediaImagePtr& input) {
    return input->size;
  }

  static bool Read(::media_router::mojom::MediaImage::DataView input, ::media_router::mojom::MediaImagePtr* output);
};


template <>
struct  StructTraits<::media_router::mojom::MediaStatus::DataView,
                                         ::media_router::mojom::MediaStatusPtr> {
  static bool IsNull(const ::media_router::mojom::MediaStatusPtr& input) { return !input; }
  static void SetToNull(::media_router::mojom::MediaStatusPtr* output) { output->reset(); }

  static const decltype(::media_router::mojom::MediaStatus::title)& title(
      const ::media_router::mojom::MediaStatusPtr& input) {
    return input->title;
  }

  static const decltype(::media_router::mojom::MediaStatus::secondary_title)& secondary_title(
      const ::media_router::mojom::MediaStatusPtr& input) {
    return input->secondary_title;
  }

  static decltype(::media_router::mojom::MediaStatus::can_play_pause) can_play_pause(
      const ::media_router::mojom::MediaStatusPtr& input) {
    return input->can_play_pause;
  }

  static decltype(::media_router::mojom::MediaStatus::can_mute) can_mute(
      const ::media_router::mojom::MediaStatusPtr& input) {
    return input->can_mute;
  }

  static decltype(::media_router::mojom::MediaStatus::can_set_volume) can_set_volume(
      const ::media_router::mojom::MediaStatusPtr& input) {
    return input->can_set_volume;
  }

  static decltype(::media_router::mojom::MediaStatus::can_seek) can_seek(
      const ::media_router::mojom::MediaStatusPtr& input) {
    return input->can_seek;
  }

  static decltype(::media_router::mojom::MediaStatus::can_skip_to_next_track) can_skip_to_next_track(
      const ::media_router::mojom::MediaStatusPtr& input) {
    return input->can_skip_to_next_track;
  }

  static decltype(::media_router::mojom::MediaStatus::can_skip_to_previous_track) can_skip_to_previous_track(
      const ::media_router::mojom::MediaStatusPtr& input) {
    return input->can_skip_to_previous_track;
  }

  static decltype(::media_router::mojom::MediaStatus::play_state) play_state(
      const ::media_router::mojom::MediaStatusPtr& input) {
    return input->play_state;
  }

  static decltype(::media_router::mojom::MediaStatus::is_muted) is_muted(
      const ::media_router::mojom::MediaStatusPtr& input) {
    return input->is_muted;
  }

  static decltype(::media_router::mojom::MediaStatus::volume) volume(
      const ::media_router::mojom::MediaStatusPtr& input) {
    return input->volume;
  }

  static const decltype(::media_router::mojom::MediaStatus::duration)& duration(
      const ::media_router::mojom::MediaStatusPtr& input) {
    return input->duration;
  }

  static const decltype(::media_router::mojom::MediaStatus::current_time)& current_time(
      const ::media_router::mojom::MediaStatusPtr& input) {
    return input->current_time;
  }

  static const decltype(::media_router::mojom::MediaStatus::images)& images(
      const ::media_router::mojom::MediaStatusPtr& input) {
    return input->images;
  }

  static bool Read(::media_router::mojom::MediaStatus::DataView input, ::media_router::mojom::MediaStatusPtr* output);
};

}  // namespace mojo

#endif  // COMPONENTS_MEDIA_ROUTER_COMMON_MOJOM_MEDIA_STATUS_MOJOM_H_