// chrome/browser/ui/webui/feed_internals/feed_internals.mojom-shared-internal.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_BROWSER_UI_WEBUI_FEED_INTERNALS_FEED_INTERNALS_MOJOM_SHARED_INTERNAL_H_
#define CHROME_BROWSER_UI_WEBUI_FEED_INTERNALS_FEED_INTERNALS_MOJOM_SHARED_INTERNAL_H_
#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/mojom/base/time.mojom-shared-internal.h"
#include "url/mojom/url.mojom-shared-internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"



namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace feed_internals {
namespace mojom {
namespace internal {
class Properties_Data;
class LastFetchProperties_Data;

struct FeedOrder_Data {
 public:
  static bool constexpr kIsExtensible = false;

  static bool IsKnownValue(int32_t value) {
    switch (value) {
      case 0:
      case 1:
      case 2:
        return true;
    }
    return false;
  }

  static bool Validate(int32_t value,
                       mojo::internal::ValidationContext* validation_context) {
    if (kIsExtensible || IsKnownValue(value))
      return true;

    ReportValidationError(validation_context,
                          mojo::internal::VALIDATION_ERROR_UNKNOWN_ENUM_VALUE);
    return false;
  }
};

#pragma pack(push, 1)
class  Properties_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t is_feed_enabled : 1;
  uint8_t is_feed_visible : 1;
  uint8_t is_feed_allowed : 1;
  uint8_t is_prefetching_enabled : 1;
  uint8_t is_web_feed_follow_intro_debug_enabled : 1;
  uint8_t use_feed_query_requests : 1;
  uint8_t pad5_[3];
  int32_t following_feed_order;
  mojo::internal::Pointer<mojo::internal::String_Data> load_stream_status;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> feed_fetch_url;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> feed_actions_url;

 private:
  friend class mojo::internal::MessageFragment<Properties_Data>;

  Properties_Data();
  ~Properties_Data() = delete;
};
static_assert(sizeof(Properties_Data) == 40,
              "Bad sizeof(Properties_Data)");
// Used by Properties::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct Properties_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  Properties_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~Properties_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::Message& message) override {
    mojo::internal::MessageFragment<Properties_Data> fragment(message);
    mojo::internal::Serialize<DataView>(user_data_, fragment);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    Properties_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  LastFetchProperties_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t last_fetch_status;
  int32_t last_action_upload_status;
  mojo::internal::Pointer<mojo::internal::String_Data> last_fetch_trigger;
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeDelta_Data> last_fetch_time;
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeDelta_Data> refresh_suppress_time;
  mojo::internal::Pointer<mojo::internal::String_Data> last_bless_nonce;
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeDelta_Data> last_action_upload_time;

 private:
  friend class mojo::internal::MessageFragment<LastFetchProperties_Data>;

  LastFetchProperties_Data();
  ~LastFetchProperties_Data() = delete;
};
static_assert(sizeof(LastFetchProperties_Data) == 56,
              "Bad sizeof(LastFetchProperties_Data)");
// Used by LastFetchProperties::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct LastFetchProperties_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  LastFetchProperties_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~LastFetchProperties_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::Message& message) override {
    mojo::internal::MessageFragment<LastFetchProperties_Data> fragment(message);
    mojo::internal::Serialize<DataView>(user_data_, fragment);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    LastFetchProperties_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace feed_internals

#endif  // CHROME_BROWSER_UI_WEBUI_FEED_INTERNALS_FEED_INTERNALS_MOJOM_SHARED_INTERNAL_H_