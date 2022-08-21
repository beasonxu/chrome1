// chrome/browser/media/media_engagement_score_details.mojom-shared-internal.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_BROWSER_MEDIA_MEDIA_ENGAGEMENT_SCORE_DETAILS_MOJOM_SHARED_INTERNAL_H_
#define CHROME_BROWSER_MEDIA_MEDIA_ENGAGEMENT_SCORE_DETAILS_MOJOM_SHARED_INTERNAL_H_
#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "url/mojom/origin.mojom-shared-internal.h"
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
class MediaEngagementScoreDetails_Data;
class MediaEngagementConfig_Data;

#pragma pack(push, 1)
class  MediaEngagementScoreDetails_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::url::mojom::internal::Origin_Data> origin;
  double total_score;
  int32_t visits;
  int32_t media_playbacks;
  double last_media_playback_time;
  uint8_t is_high : 1;
  uint8_t padfinal_[7];

 private:
  friend class mojo::internal::MessageFragment<MediaEngagementScoreDetails_Data>;

  MediaEngagementScoreDetails_Data();
  ~MediaEngagementScoreDetails_Data() = delete;
};
static_assert(sizeof(MediaEngagementScoreDetails_Data) == 48,
              "Bad sizeof(MediaEngagementScoreDetails_Data)");
// Used by MediaEngagementScoreDetails::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct MediaEngagementScoreDetails_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  MediaEngagementScoreDetails_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~MediaEngagementScoreDetails_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::Message& message) override {
    mojo::internal::MessageFragment<MediaEngagementScoreDetails_Data> fragment(message);
    mojo::internal::Serialize<DataView>(user_data_, fragment);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    MediaEngagementScoreDetails_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  MediaEngagementConfig_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t score_min_visits;
  uint8_t feature_record_data : 1;
  uint8_t feature_bypass_autoplay : 1;
  uint8_t feature_preload_data : 1;
  uint8_t feature_https_only : 1;
  uint8_t feature_autoplay_disable_settings : 1;
  uint8_t pref_disable_unified_autoplay : 1;
  uint8_t has_custom_autoplay_policy : 1;
  uint8_t pad7_[3];
  double high_score_lower_threshold;
  double high_score_upper_threshold;
  mojo::internal::Pointer<mojo::internal::String_Data> autoplay_policy;
  mojo::internal::Pointer<mojo::internal::String_Data> preload_version;

 private:
  friend class mojo::internal::MessageFragment<MediaEngagementConfig_Data>;

  MediaEngagementConfig_Data();
  ~MediaEngagementConfig_Data() = delete;
};
static_assert(sizeof(MediaEngagementConfig_Data) == 48,
              "Bad sizeof(MediaEngagementConfig_Data)");
// Used by MediaEngagementConfig::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct MediaEngagementConfig_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  MediaEngagementConfig_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~MediaEngagementConfig_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::Message& message) override {
    mojo::internal::MessageFragment<MediaEngagementConfig_Data> fragment(message);
    mojo::internal::Serialize<DataView>(user_data_, fragment);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    MediaEngagementConfig_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace media

#endif  // CHROME_BROWSER_MEDIA_MEDIA_ENGAGEMENT_SCORE_DETAILS_MOJOM_SHARED_INTERNAL_H_