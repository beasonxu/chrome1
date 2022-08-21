// media/mojo/mojom/audio_encoder.mojom-shared-internal.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_MOJOM_AUDIO_ENCODER_MOJOM_SHARED_INTERNAL_H_
#define MEDIA_MOJO_MOJOM_AUDIO_ENCODER_MOJOM_SHARED_INTERNAL_H_
#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "media/mojo/mojom/media_types.mojom-shared-internal.h"
#include "media/mojo/mojom/audio_parameters.mojom-shared-internal.h"
#include "mojo/public/mojom/base/time.mojom-shared-internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"



namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace media {
namespace mojom {
namespace internal {
class AudioEncoderConfig_Data;
class EncodedAudioBuffer_Data;

#pragma pack(push, 1)
class  AudioEncoderConfig_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t codec;
  uint8_t channel_count;
  uint8_t pad1_[3];
  uint32_t sample_rate;
  uint32_t bitrate;

 private:
  friend class mojo::internal::MessageFragment<AudioEncoderConfig_Data>;

  AudioEncoderConfig_Data();
  ~AudioEncoderConfig_Data() = delete;
};
static_assert(sizeof(AudioEncoderConfig_Data) == 24,
              "Bad sizeof(AudioEncoderConfig_Data)");
// Used by AudioEncoderConfig::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct AudioEncoderConfig_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  AudioEncoderConfig_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~AudioEncoderConfig_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::Message& message) override {
    mojo::internal::MessageFragment<AudioEncoderConfig_Data> fragment(message);
    mojo::internal::Serialize<DataView>(user_data_, fragment);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    AudioEncoderConfig_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  EncodedAudioBuffer_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::media::mojom::internal::AudioParameters_Data> params;
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeDelta_Data> timestamp;
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeDelta_Data> duration;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> data;

 private:
  friend class mojo::internal::MessageFragment<EncodedAudioBuffer_Data>;

  EncodedAudioBuffer_Data();
  ~EncodedAudioBuffer_Data() = delete;
};
static_assert(sizeof(EncodedAudioBuffer_Data) == 40,
              "Bad sizeof(EncodedAudioBuffer_Data)");
// Used by EncodedAudioBuffer::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct EncodedAudioBuffer_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  EncodedAudioBuffer_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~EncodedAudioBuffer_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::Message& message) override {
    mojo::internal::MessageFragment<EncodedAudioBuffer_Data> fragment(message);
    mojo::internal::Serialize<DataView>(user_data_, fragment);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    EncodedAudioBuffer_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_MOJOM_AUDIO_ENCODER_MOJOM_SHARED_INTERNAL_H_