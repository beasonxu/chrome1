// media/mojo/mojom/watch_time_recorder.mojom.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_MOJOM_WATCH_TIME_RECORDER_MOJOM_H_
#define MEDIA_MOJO_MOJOM_WATCH_TIME_RECORDER_MOJOM_H_

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

#include "media/mojo/mojom/watch_time_recorder.mojom-shared.h"
#include "media/mojo/mojom/watch_time_recorder.mojom-forward.h"
#include "media/mojo/mojom/media_types.mojom.h"
#include "mojo/public/mojom/base/time.mojom.h"
#include "ui/gfx/geometry/mojom/geometry.mojom.h"
#include <string>
#include <vector>

#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/raw_ptr_impl_ref_traits.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace media {
namespace mojom {

class WatchTimeRecorderProxy;

template <typename ImplRefTraits>
class WatchTimeRecorderStub;

class WatchTimeRecorderRequestValidator;


class  WatchTimeRecorder
    : public WatchTimeRecorderInterfaceBase {
 public:
  using IPCStableHashFunction = uint32_t(*)();

  static const char Name_[];
  static IPCStableHashFunction MessageToMethodInfo_(mojo::Message& message);
  static const char* MessageToMethodName_(mojo::Message& message);
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;
  static constexpr bool HasUninterruptableMethods_ = false;

  using Base_ = WatchTimeRecorderInterfaceBase;
  using Proxy_ = WatchTimeRecorderProxy;

  template <typename ImplRefTraits>
  using Stub_ = WatchTimeRecorderStub<ImplRefTraits>;

  using RequestValidator_ = WatchTimeRecorderRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kRecordWatchTimeMinVersion = 0,
    kFinalizeWatchTimeMinVersion = 0,
    kOnErrorMinVersion = 0,
    kUpdateSecondaryPropertiesMinVersion = 0,
    kSetAutoplayInitiatedMinVersion = 0,
    kOnDurationChangedMinVersion = 0,
    kUpdateVideoDecodeStatsMinVersion = 0,
    kUpdateUnderflowCountMinVersion = 0,
    kUpdateUnderflowDurationMinVersion = 0,
    kOnCurrentTimestampChangedMinVersion = 0,
  };

// crbug.com/1340245 - this causes binary size bloat on Fuchsia, and we're OK
// with not having this data in traces there.
#if !BUILDFLAG(IS_FUCHSIA)
  struct RecordWatchTime_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct FinalizeWatchTime_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct OnError_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct UpdateSecondaryProperties_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct SetAutoplayInitiated_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct OnDurationChanged_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct UpdateVideoDecodeStats_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct UpdateUnderflowCount_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct UpdateUnderflowDuration_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct OnCurrentTimestampChanged_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
#endif // !BUILDFLAG(IS_FUCHSIA)
  virtual ~WatchTimeRecorder() = default;

  
  virtual void RecordWatchTime(::media::WatchTimeKey key, ::base::TimeDelta watch_time) = 0;

  
  virtual void FinalizeWatchTime(const std::vector<::media::WatchTimeKey>& watch_time_keys) = 0;

  
  virtual void OnError(const ::media::PipelineStatus& status) = 0;

  
  virtual void UpdateSecondaryProperties(SecondaryPlaybackPropertiesPtr secondary_properties) = 0;

  
  virtual void SetAutoplayInitiated(bool value) = 0;

  
  virtual void OnDurationChanged(::base::TimeDelta duration) = 0;

  
  virtual void UpdateVideoDecodeStats(uint32_t frames_decoded, uint32_t frames_dropped) = 0;

  
  virtual void UpdateUnderflowCount(int32_t total_count) = 0;

  
  virtual void UpdateUnderflowDuration(int32_t total_completed_count, ::base::TimeDelta total_duration) = 0;

  
  virtual void OnCurrentTimestampChanged(::base::TimeDelta last_timestamp) = 0;
};



class  WatchTimeRecorderProxy
    : public WatchTimeRecorder {
 public:
  using InterfaceType = WatchTimeRecorder;

  explicit WatchTimeRecorderProxy(mojo::MessageReceiverWithResponder* receiver);
  
  void RecordWatchTime(::media::WatchTimeKey key, ::base::TimeDelta watch_time) final;
  
  void FinalizeWatchTime(const std::vector<::media::WatchTimeKey>& watch_time_keys) final;
  
  void OnError(const ::media::PipelineStatus& status) final;
  
  void UpdateSecondaryProperties(SecondaryPlaybackPropertiesPtr secondary_properties) final;
  
  void SetAutoplayInitiated(bool value) final;
  
  void OnDurationChanged(::base::TimeDelta duration) final;
  
  void UpdateVideoDecodeStats(uint32_t frames_decoded, uint32_t frames_dropped) final;
  
  void UpdateUnderflowCount(int32_t total_count) final;
  
  void UpdateUnderflowDuration(int32_t total_completed_count, ::base::TimeDelta total_duration) final;
  
  void OnCurrentTimestampChanged(::base::TimeDelta last_timestamp) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  WatchTimeRecorderStubDispatch {
 public:
  static bool Accept(WatchTimeRecorder* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      WatchTimeRecorder* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<WatchTimeRecorder>>
class WatchTimeRecorderStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  WatchTimeRecorderStub() = default;
  ~WatchTimeRecorderStub() override = default;

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return WatchTimeRecorderStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return WatchTimeRecorderStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  WatchTimeRecorderRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};









class  PlaybackProperties {
 public:
  template <typename T>
  using EnableIfSame = std::enable_if_t<std::is_same<PlaybackProperties, T>::value>;
  using DataView = PlaybackPropertiesDataView;
  using Data_ = internal::PlaybackProperties_Data;

  template <typename... Args>
  static PlaybackPropertiesPtr New(Args&&... args) {
    return PlaybackPropertiesPtr(
        absl::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static PlaybackPropertiesPtr From(const U& u) {
    return mojo::TypeConverter<PlaybackPropertiesPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, PlaybackProperties>::Convert(*this);
  }


  PlaybackProperties();

  PlaybackProperties(
      bool has_audio,
      bool has_video,
      bool is_background,
      bool is_muted,
      bool is_mse,
      bool is_eme,
      bool is_embedded_media_experience,
      ::media::mojom::MediaStreamType media_stream_type);


  ~PlaybackProperties();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = PlaybackPropertiesPtr>
  PlaybackPropertiesPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T, PlaybackProperties::EnableIfSame<T>* = nullptr>
  bool Equals(const T& other) const;

  template <typename T, PlaybackProperties::EnableIfSame<T>* = nullptr>
  bool operator==(const T& rhs) const { return Equals(rhs); }
  size_t Hash(size_t seed) const;
  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        PlaybackProperties::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        PlaybackProperties::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::PlaybackProperties_UnserializedMessageContext<
            UserType, PlaybackProperties::DataView>>(0, 0, std::move(input)),
        MOJO_CREATE_MESSAGE_FLAG_NONE);
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    mojo::Message message;
    return mojo::internal::DeserializeImpl<PlaybackProperties::DataView>(
        message, data, data_num_bytes, output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return PlaybackProperties::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::PlaybackProperties_UnserializedMessageContext<
            UserType, PlaybackProperties::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<PlaybackProperties::DataView>(
        input, input.payload(), input.payload_num_bytes(), output, Validate);
  }

  
  bool has_audio;
  
  bool has_video;
  
  bool is_background;
  
  bool is_muted;
  
  bool is_mse;
  
  bool is_eme;
  
  bool is_embedded_media_experience;
  
  ::media::mojom::MediaStreamType media_stream_type;

  // Serialise this struct into a trace.
  void WriteIntoTrace(perfetto::TracedValue traced_context) const;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

// The comparison operators are templates, so they are only instantiated if they
// are used. Thus, the bindings generator does not need to know whether
// comparison operators are available for members.
template <typename T, PlaybackProperties::EnableIfSame<T>* = nullptr>
bool operator<(const T& lhs, const T& rhs);

template <typename T, PlaybackProperties::EnableIfSame<T>* = nullptr>
bool operator<=(const T& lhs, const T& rhs) {
  return !(rhs < lhs);
}

template <typename T, PlaybackProperties::EnableIfSame<T>* = nullptr>
bool operator>(const T& lhs, const T& rhs) {
  return rhs < lhs;
}

template <typename T, PlaybackProperties::EnableIfSame<T>* = nullptr>
bool operator>=(const T& lhs, const T& rhs) {
  return !(lhs < rhs);
}





class  SecondaryPlaybackProperties {
 public:
  template <typename T>
  using EnableIfSame = std::enable_if_t<std::is_same<SecondaryPlaybackProperties, T>::value>;
  using DataView = SecondaryPlaybackPropertiesDataView;
  using Data_ = internal::SecondaryPlaybackProperties_Data;

  template <typename... Args>
  static SecondaryPlaybackPropertiesPtr New(Args&&... args) {
    return SecondaryPlaybackPropertiesPtr(
        absl::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static SecondaryPlaybackPropertiesPtr From(const U& u) {
    return mojo::TypeConverter<SecondaryPlaybackPropertiesPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, SecondaryPlaybackProperties>::Convert(*this);
  }


  SecondaryPlaybackProperties();

  SecondaryPlaybackProperties(
      ::media::AudioCodec audio_codec,
      ::media::VideoCodec video_codec,
      ::media::AudioCodecProfile audio_codec_profile,
      ::media::VideoCodecProfile video_codec_profile,
      ::media::AudioDecoderType audio_decoder,
      ::media::VideoDecoderType video_decoder,
      ::media::EncryptionScheme audio_encryption_scheme,
      ::media::EncryptionScheme video_encryption_scheme,
      const ::gfx::Size& natural_size);


  ~SecondaryPlaybackProperties();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = SecondaryPlaybackPropertiesPtr>
  SecondaryPlaybackPropertiesPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T, SecondaryPlaybackProperties::EnableIfSame<T>* = nullptr>
  bool Equals(const T& other) const;

  template <typename T, SecondaryPlaybackProperties::EnableIfSame<T>* = nullptr>
  bool operator==(const T& rhs) const { return Equals(rhs); }
  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        SecondaryPlaybackProperties::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        SecondaryPlaybackProperties::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::SecondaryPlaybackProperties_UnserializedMessageContext<
            UserType, SecondaryPlaybackProperties::DataView>>(0, 0, std::move(input)),
        MOJO_CREATE_MESSAGE_FLAG_NONE);
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    mojo::Message message;
    return mojo::internal::DeserializeImpl<SecondaryPlaybackProperties::DataView>(
        message, data, data_num_bytes, output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return SecondaryPlaybackProperties::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::SecondaryPlaybackProperties_UnserializedMessageContext<
            UserType, SecondaryPlaybackProperties::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<SecondaryPlaybackProperties::DataView>(
        input, input.payload(), input.payload_num_bytes(), output, Validate);
  }

  
  ::media::AudioCodec audio_codec;
  
  ::media::VideoCodec video_codec;
  
  ::media::AudioCodecProfile audio_codec_profile;
  
  ::media::VideoCodecProfile video_codec_profile;
  
  ::media::AudioDecoderType audio_decoder;
  
  ::media::VideoDecoderType video_decoder;
  
  ::media::EncryptionScheme audio_encryption_scheme;
  
  ::media::EncryptionScheme video_encryption_scheme;
  
  ::gfx::Size natural_size;

  // Serialise this struct into a trace.
  void WriteIntoTrace(perfetto::TracedValue traced_context) const;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

// The comparison operators are templates, so they are only instantiated if they
// are used. Thus, the bindings generator does not need to know whether
// comparison operators are available for members.
template <typename T, SecondaryPlaybackProperties::EnableIfSame<T>* = nullptr>
bool operator<(const T& lhs, const T& rhs);

template <typename T, SecondaryPlaybackProperties::EnableIfSame<T>* = nullptr>
bool operator<=(const T& lhs, const T& rhs) {
  return !(rhs < lhs);
}

template <typename T, SecondaryPlaybackProperties::EnableIfSame<T>* = nullptr>
bool operator>(const T& lhs, const T& rhs) {
  return rhs < lhs;
}

template <typename T, SecondaryPlaybackProperties::EnableIfSame<T>* = nullptr>
bool operator>=(const T& lhs, const T& rhs) {
  return !(lhs < rhs);
}

template <typename StructPtrType>
PlaybackPropertiesPtr PlaybackProperties::Clone() const {
  return New(
      mojo::Clone(has_audio),
      mojo::Clone(has_video),
      mojo::Clone(is_background),
      mojo::Clone(is_muted),
      mojo::Clone(is_mse),
      mojo::Clone(is_eme),
      mojo::Clone(is_embedded_media_experience),
      mojo::Clone(media_stream_type)
  );
}

template <typename T, PlaybackProperties::EnableIfSame<T>*>
bool PlaybackProperties::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->has_audio, other_struct.has_audio))
    return false;
  if (!mojo::Equals(this->has_video, other_struct.has_video))
    return false;
  if (!mojo::Equals(this->is_background, other_struct.is_background))
    return false;
  if (!mojo::Equals(this->is_muted, other_struct.is_muted))
    return false;
  if (!mojo::Equals(this->is_mse, other_struct.is_mse))
    return false;
  if (!mojo::Equals(this->is_eme, other_struct.is_eme))
    return false;
  if (!mojo::Equals(this->is_embedded_media_experience, other_struct.is_embedded_media_experience))
    return false;
  if (!mojo::Equals(this->media_stream_type, other_struct.media_stream_type))
    return false;
  return true;
}

template <typename T, PlaybackProperties::EnableIfSame<T>*>
bool operator<(const T& lhs, const T& rhs) {
  if (lhs.has_audio < rhs.has_audio)
    return true;
  if (rhs.has_audio < lhs.has_audio)
    return false;
  if (lhs.has_video < rhs.has_video)
    return true;
  if (rhs.has_video < lhs.has_video)
    return false;
  if (lhs.is_background < rhs.is_background)
    return true;
  if (rhs.is_background < lhs.is_background)
    return false;
  if (lhs.is_muted < rhs.is_muted)
    return true;
  if (rhs.is_muted < lhs.is_muted)
    return false;
  if (lhs.is_mse < rhs.is_mse)
    return true;
  if (rhs.is_mse < lhs.is_mse)
    return false;
  if (lhs.is_eme < rhs.is_eme)
    return true;
  if (rhs.is_eme < lhs.is_eme)
    return false;
  if (lhs.is_embedded_media_experience < rhs.is_embedded_media_experience)
    return true;
  if (rhs.is_embedded_media_experience < lhs.is_embedded_media_experience)
    return false;
  if (lhs.media_stream_type < rhs.media_stream_type)
    return true;
  if (rhs.media_stream_type < lhs.media_stream_type)
    return false;
  return false;
}
template <typename StructPtrType>
SecondaryPlaybackPropertiesPtr SecondaryPlaybackProperties::Clone() const {
  return New(
      mojo::Clone(audio_codec),
      mojo::Clone(video_codec),
      mojo::Clone(audio_codec_profile),
      mojo::Clone(video_codec_profile),
      mojo::Clone(audio_decoder),
      mojo::Clone(video_decoder),
      mojo::Clone(audio_encryption_scheme),
      mojo::Clone(video_encryption_scheme),
      mojo::Clone(natural_size)
  );
}

template <typename T, SecondaryPlaybackProperties::EnableIfSame<T>*>
bool SecondaryPlaybackProperties::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->audio_codec, other_struct.audio_codec))
    return false;
  if (!mojo::Equals(this->video_codec, other_struct.video_codec))
    return false;
  if (!mojo::Equals(this->audio_codec_profile, other_struct.audio_codec_profile))
    return false;
  if (!mojo::Equals(this->video_codec_profile, other_struct.video_codec_profile))
    return false;
  if (!mojo::Equals(this->audio_decoder, other_struct.audio_decoder))
    return false;
  if (!mojo::Equals(this->video_decoder, other_struct.video_decoder))
    return false;
  if (!mojo::Equals(this->audio_encryption_scheme, other_struct.audio_encryption_scheme))
    return false;
  if (!mojo::Equals(this->video_encryption_scheme, other_struct.video_encryption_scheme))
    return false;
  if (!mojo::Equals(this->natural_size, other_struct.natural_size))
    return false;
  return true;
}

template <typename T, SecondaryPlaybackProperties::EnableIfSame<T>*>
bool operator<(const T& lhs, const T& rhs) {
  if (lhs.audio_codec < rhs.audio_codec)
    return true;
  if (rhs.audio_codec < lhs.audio_codec)
    return false;
  if (lhs.video_codec < rhs.video_codec)
    return true;
  if (rhs.video_codec < lhs.video_codec)
    return false;
  if (lhs.audio_codec_profile < rhs.audio_codec_profile)
    return true;
  if (rhs.audio_codec_profile < lhs.audio_codec_profile)
    return false;
  if (lhs.video_codec_profile < rhs.video_codec_profile)
    return true;
  if (rhs.video_codec_profile < lhs.video_codec_profile)
    return false;
  if (lhs.audio_decoder < rhs.audio_decoder)
    return true;
  if (rhs.audio_decoder < lhs.audio_decoder)
    return false;
  if (lhs.video_decoder < rhs.video_decoder)
    return true;
  if (rhs.video_decoder < lhs.video_decoder)
    return false;
  if (lhs.audio_encryption_scheme < rhs.audio_encryption_scheme)
    return true;
  if (rhs.audio_encryption_scheme < lhs.audio_encryption_scheme)
    return false;
  if (lhs.video_encryption_scheme < rhs.video_encryption_scheme)
    return true;
  if (rhs.video_encryption_scheme < lhs.video_encryption_scheme)
    return false;
  if (lhs.natural_size < rhs.natural_size)
    return true;
  if (rhs.natural_size < lhs.natural_size)
    return false;
  return false;
}


}  // namespace mojom
}  // namespace media

namespace mojo {


template <>
struct  StructTraits<::media::mojom::PlaybackProperties::DataView,
                                         ::media::mojom::PlaybackPropertiesPtr> {
  static bool IsNull(const ::media::mojom::PlaybackPropertiesPtr& input) { return !input; }
  static void SetToNull(::media::mojom::PlaybackPropertiesPtr* output) { output->reset(); }

  static decltype(::media::mojom::PlaybackProperties::has_audio) has_audio(
      const ::media::mojom::PlaybackPropertiesPtr& input) {
    return input->has_audio;
  }

  static decltype(::media::mojom::PlaybackProperties::has_video) has_video(
      const ::media::mojom::PlaybackPropertiesPtr& input) {
    return input->has_video;
  }

  static decltype(::media::mojom::PlaybackProperties::is_background) is_background(
      const ::media::mojom::PlaybackPropertiesPtr& input) {
    return input->is_background;
  }

  static decltype(::media::mojom::PlaybackProperties::is_muted) is_muted(
      const ::media::mojom::PlaybackPropertiesPtr& input) {
    return input->is_muted;
  }

  static decltype(::media::mojom::PlaybackProperties::is_mse) is_mse(
      const ::media::mojom::PlaybackPropertiesPtr& input) {
    return input->is_mse;
  }

  static decltype(::media::mojom::PlaybackProperties::is_eme) is_eme(
      const ::media::mojom::PlaybackPropertiesPtr& input) {
    return input->is_eme;
  }

  static decltype(::media::mojom::PlaybackProperties::is_embedded_media_experience) is_embedded_media_experience(
      const ::media::mojom::PlaybackPropertiesPtr& input) {
    return input->is_embedded_media_experience;
  }

  static decltype(::media::mojom::PlaybackProperties::media_stream_type) media_stream_type(
      const ::media::mojom::PlaybackPropertiesPtr& input) {
    return input->media_stream_type;
  }

  static bool Read(::media::mojom::PlaybackProperties::DataView input, ::media::mojom::PlaybackPropertiesPtr* output);
};


template <>
struct  StructTraits<::media::mojom::SecondaryPlaybackProperties::DataView,
                                         ::media::mojom::SecondaryPlaybackPropertiesPtr> {
  static bool IsNull(const ::media::mojom::SecondaryPlaybackPropertiesPtr& input) { return !input; }
  static void SetToNull(::media::mojom::SecondaryPlaybackPropertiesPtr* output) { output->reset(); }

  static decltype(::media::mojom::SecondaryPlaybackProperties::audio_codec) audio_codec(
      const ::media::mojom::SecondaryPlaybackPropertiesPtr& input) {
    return input->audio_codec;
  }

  static decltype(::media::mojom::SecondaryPlaybackProperties::video_codec) video_codec(
      const ::media::mojom::SecondaryPlaybackPropertiesPtr& input) {
    return input->video_codec;
  }

  static decltype(::media::mojom::SecondaryPlaybackProperties::audio_codec_profile) audio_codec_profile(
      const ::media::mojom::SecondaryPlaybackPropertiesPtr& input) {
    return input->audio_codec_profile;
  }

  static decltype(::media::mojom::SecondaryPlaybackProperties::video_codec_profile) video_codec_profile(
      const ::media::mojom::SecondaryPlaybackPropertiesPtr& input) {
    return input->video_codec_profile;
  }

  static decltype(::media::mojom::SecondaryPlaybackProperties::audio_decoder) audio_decoder(
      const ::media::mojom::SecondaryPlaybackPropertiesPtr& input) {
    return input->audio_decoder;
  }

  static decltype(::media::mojom::SecondaryPlaybackProperties::video_decoder) video_decoder(
      const ::media::mojom::SecondaryPlaybackPropertiesPtr& input) {
    return input->video_decoder;
  }

  static decltype(::media::mojom::SecondaryPlaybackProperties::audio_encryption_scheme) audio_encryption_scheme(
      const ::media::mojom::SecondaryPlaybackPropertiesPtr& input) {
    return input->audio_encryption_scheme;
  }

  static decltype(::media::mojom::SecondaryPlaybackProperties::video_encryption_scheme) video_encryption_scheme(
      const ::media::mojom::SecondaryPlaybackPropertiesPtr& input) {
    return input->video_encryption_scheme;
  }

  static const decltype(::media::mojom::SecondaryPlaybackProperties::natural_size)& natural_size(
      const ::media::mojom::SecondaryPlaybackPropertiesPtr& input) {
    return input->natural_size;
  }

  static bool Read(::media::mojom::SecondaryPlaybackProperties::DataView input, ::media::mojom::SecondaryPlaybackPropertiesPtr* output);
};

}  // namespace mojo

#endif  // MEDIA_MOJO_MOJOM_WATCH_TIME_RECORDER_MOJOM_H_