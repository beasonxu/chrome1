// chrome/browser/media/history/media_history_store.mojom.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_BROWSER_MEDIA_HISTORY_MEDIA_HISTORY_STORE_MOJOM_H_
#define CHROME_BROWSER_MEDIA_HISTORY_MEDIA_HISTORY_STORE_MOJOM_H_

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

#include "chrome/browser/media/history/media_history_store.mojom-shared.h"
#include "chrome/browser/media/history/media_history_store.mojom-forward.h"
#include "mojo/public/mojom/base/time.mojom.h"
#include "services/media_session/public/mojom/media_session.mojom.h"
#include "url/mojom/origin.mojom.h"
#include "url/mojom/url.mojom.h"
#include <string>
#include <vector>

#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/raw_ptr_impl_ref_traits.h"






namespace media_history {
namespace mojom {

class MediaHistoryStoreProxy;

template <typename ImplRefTraits>
class MediaHistoryStoreStub;

class MediaHistoryStoreRequestValidator;
class MediaHistoryStoreResponseValidator;


class  MediaHistoryStore
    : public MediaHistoryStoreInterfaceBase {
 public:
  using IPCStableHashFunction = uint32_t(*)();

  static const char Name_[];
  static IPCStableHashFunction MessageToMethodInfo_(mojo::Message& message);
  static const char* MessageToMethodName_(mojo::Message& message);
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;
  static constexpr bool HasUninterruptableMethods_ = false;

  using Base_ = MediaHistoryStoreInterfaceBase;
  using Proxy_ = MediaHistoryStoreProxy;

  template <typename ImplRefTraits>
  using Stub_ = MediaHistoryStoreStub<ImplRefTraits>;

  using RequestValidator_ = MediaHistoryStoreRequestValidator;
  using ResponseValidator_ = MediaHistoryStoreResponseValidator;
  enum MethodMinVersions : uint32_t {
    kGetMediaHistoryStatsMinVersion = 0,
    kGetMediaHistoryOriginRowsMinVersion = 0,
    kGetMediaHistoryPlaybackRowsMinVersion = 0,
    kGetMediaHistoryPlaybackSessionRowsMinVersion = 0,
  };

// crbug.com/1340245 - this causes binary size bloat on Fuchsia, and we're OK
// with not having this data in traces there.
#if !BUILDFLAG(IS_FUCHSIA)
  struct GetMediaHistoryStats_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct GetMediaHistoryOriginRows_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct GetMediaHistoryPlaybackRows_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct GetMediaHistoryPlaybackSessionRows_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
#endif // !BUILDFLAG(IS_FUCHSIA)
  virtual ~MediaHistoryStore() = default;


  using GetMediaHistoryStatsCallback = base::OnceCallback<void(MediaHistoryStatsPtr)>;
  
  virtual void GetMediaHistoryStats(GetMediaHistoryStatsCallback callback) = 0;


  using GetMediaHistoryOriginRowsCallback = base::OnceCallback<void(std::vector<MediaHistoryOriginRowPtr>)>;
  
  virtual void GetMediaHistoryOriginRows(GetMediaHistoryOriginRowsCallback callback) = 0;


  using GetMediaHistoryPlaybackRowsCallback = base::OnceCallback<void(std::vector<MediaHistoryPlaybackRowPtr>)>;
  
  virtual void GetMediaHistoryPlaybackRows(GetMediaHistoryPlaybackRowsCallback callback) = 0;


  using GetMediaHistoryPlaybackSessionRowsCallback = base::OnceCallback<void(std::vector<MediaHistoryPlaybackSessionRowPtr>)>;
  
  virtual void GetMediaHistoryPlaybackSessionRows(GetMediaHistoryPlaybackSessionRowsCallback callback) = 0;
};



class  MediaHistoryStoreProxy
    : public MediaHistoryStore {
 public:
  using InterfaceType = MediaHistoryStore;

  explicit MediaHistoryStoreProxy(mojo::MessageReceiverWithResponder* receiver);
  
  void GetMediaHistoryStats(GetMediaHistoryStatsCallback callback) final;
  
  void GetMediaHistoryOriginRows(GetMediaHistoryOriginRowsCallback callback) final;
  
  void GetMediaHistoryPlaybackRows(GetMediaHistoryPlaybackRowsCallback callback) final;
  
  void GetMediaHistoryPlaybackSessionRows(GetMediaHistoryPlaybackSessionRowsCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  MediaHistoryStoreStubDispatch {
 public:
  static bool Accept(MediaHistoryStore* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      MediaHistoryStore* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<MediaHistoryStore>>
class MediaHistoryStoreStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  MediaHistoryStoreStub() = default;
  ~MediaHistoryStoreStub() override = default;

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return MediaHistoryStoreStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return MediaHistoryStoreStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  MediaHistoryStoreRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  MediaHistoryStoreResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};











class  MediaHistoryStats {
 public:
  template <typename T>
  using EnableIfSame = std::enable_if_t<std::is_same<MediaHistoryStats, T>::value>;
  using DataView = MediaHistoryStatsDataView;
  using Data_ = internal::MediaHistoryStats_Data;

  template <typename... Args>
  static MediaHistoryStatsPtr New(Args&&... args) {
    return MediaHistoryStatsPtr(
        absl::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static MediaHistoryStatsPtr From(const U& u) {
    return mojo::TypeConverter<MediaHistoryStatsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, MediaHistoryStats>::Convert(*this);
  }


  MediaHistoryStats();

  explicit MediaHistoryStats(
      const base::flat_map<std::string, int32_t>& table_row_counts);


  ~MediaHistoryStats();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = MediaHistoryStatsPtr>
  MediaHistoryStatsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T, MediaHistoryStats::EnableIfSame<T>* = nullptr>
  bool Equals(const T& other) const;

  template <typename T, MediaHistoryStats::EnableIfSame<T>* = nullptr>
  bool operator==(const T& rhs) const { return Equals(rhs); }
  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        MediaHistoryStats::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        MediaHistoryStats::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::MediaHistoryStats_UnserializedMessageContext<
            UserType, MediaHistoryStats::DataView>>(0, 0, std::move(input)),
        MOJO_CREATE_MESSAGE_FLAG_NONE);
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    mojo::Message message;
    return mojo::internal::DeserializeImpl<MediaHistoryStats::DataView>(
        message, data, data_num_bytes, output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return MediaHistoryStats::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::MediaHistoryStats_UnserializedMessageContext<
            UserType, MediaHistoryStats::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<MediaHistoryStats::DataView>(
        input, input.payload(), input.payload_num_bytes(), output, Validate);
  }

  
  base::flat_map<std::string, int32_t> table_row_counts;

  // Serialise this struct into a trace.
  void WriteIntoTrace(perfetto::TracedValue traced_context) const;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

// The comparison operators are templates, so they are only instantiated if they
// are used. Thus, the bindings generator does not need to know whether
// comparison operators are available for members.
template <typename T, MediaHistoryStats::EnableIfSame<T>* = nullptr>
bool operator<(const T& lhs, const T& rhs);

template <typename T, MediaHistoryStats::EnableIfSame<T>* = nullptr>
bool operator<=(const T& lhs, const T& rhs) {
  return !(rhs < lhs);
}

template <typename T, MediaHistoryStats::EnableIfSame<T>* = nullptr>
bool operator>(const T& lhs, const T& rhs) {
  return rhs < lhs;
}

template <typename T, MediaHistoryStats::EnableIfSame<T>* = nullptr>
bool operator>=(const T& lhs, const T& rhs) {
  return !(lhs < rhs);
}





class  MediaHistoryOriginRow {
 public:
  template <typename T>
  using EnableIfSame = std::enable_if_t<std::is_same<MediaHistoryOriginRow, T>::value>;
  using DataView = MediaHistoryOriginRowDataView;
  using Data_ = internal::MediaHistoryOriginRow_Data;

  template <typename... Args>
  static MediaHistoryOriginRowPtr New(Args&&... args) {
    return MediaHistoryOriginRowPtr(
        absl::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static MediaHistoryOriginRowPtr From(const U& u) {
    return mojo::TypeConverter<MediaHistoryOriginRowPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, MediaHistoryOriginRow>::Convert(*this);
  }


  MediaHistoryOriginRow();

  MediaHistoryOriginRow(
      const ::url::Origin& origin,
      ::base::TimeDelta cached_audio_video_watchtime,
      ::base::TimeDelta actual_audio_video_watchtime,
      double last_updated_time);


  ~MediaHistoryOriginRow();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = MediaHistoryOriginRowPtr>
  MediaHistoryOriginRowPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T, MediaHistoryOriginRow::EnableIfSame<T>* = nullptr>
  bool Equals(const T& other) const;

  template <typename T, MediaHistoryOriginRow::EnableIfSame<T>* = nullptr>
  bool operator==(const T& rhs) const { return Equals(rhs); }
  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        MediaHistoryOriginRow::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        MediaHistoryOriginRow::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::MediaHistoryOriginRow_UnserializedMessageContext<
            UserType, MediaHistoryOriginRow::DataView>>(0, 0, std::move(input)),
        MOJO_CREATE_MESSAGE_FLAG_NONE);
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    mojo::Message message;
    return mojo::internal::DeserializeImpl<MediaHistoryOriginRow::DataView>(
        message, data, data_num_bytes, output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return MediaHistoryOriginRow::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::MediaHistoryOriginRow_UnserializedMessageContext<
            UserType, MediaHistoryOriginRow::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<MediaHistoryOriginRow::DataView>(
        input, input.payload(), input.payload_num_bytes(), output, Validate);
  }

  
  ::url::Origin origin;
  
  ::base::TimeDelta cached_audio_video_watchtime;
  
  ::base::TimeDelta actual_audio_video_watchtime;
  
  double last_updated_time;

  // Serialise this struct into a trace.
  void WriteIntoTrace(perfetto::TracedValue traced_context) const;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

// The comparison operators are templates, so they are only instantiated if they
// are used. Thus, the bindings generator does not need to know whether
// comparison operators are available for members.
template <typename T, MediaHistoryOriginRow::EnableIfSame<T>* = nullptr>
bool operator<(const T& lhs, const T& rhs);

template <typename T, MediaHistoryOriginRow::EnableIfSame<T>* = nullptr>
bool operator<=(const T& lhs, const T& rhs) {
  return !(rhs < lhs);
}

template <typename T, MediaHistoryOriginRow::EnableIfSame<T>* = nullptr>
bool operator>(const T& lhs, const T& rhs) {
  return rhs < lhs;
}

template <typename T, MediaHistoryOriginRow::EnableIfSame<T>* = nullptr>
bool operator>=(const T& lhs, const T& rhs) {
  return !(lhs < rhs);
}





class  MediaHistoryPlaybackRow {
 public:
  template <typename T>
  using EnableIfSame = std::enable_if_t<std::is_same<MediaHistoryPlaybackRow, T>::value>;
  using DataView = MediaHistoryPlaybackRowDataView;
  using Data_ = internal::MediaHistoryPlaybackRow_Data;

  template <typename... Args>
  static MediaHistoryPlaybackRowPtr New(Args&&... args) {
    return MediaHistoryPlaybackRowPtr(
        absl::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static MediaHistoryPlaybackRowPtr From(const U& u) {
    return mojo::TypeConverter<MediaHistoryPlaybackRowPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, MediaHistoryPlaybackRow>::Convert(*this);
  }


  MediaHistoryPlaybackRow();

  MediaHistoryPlaybackRow(
      const ::GURL& url,
      bool has_audio,
      bool has_video,
      ::base::TimeDelta watchtime,
      double last_updated_time);


  ~MediaHistoryPlaybackRow();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = MediaHistoryPlaybackRowPtr>
  MediaHistoryPlaybackRowPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T, MediaHistoryPlaybackRow::EnableIfSame<T>* = nullptr>
  bool Equals(const T& other) const;

  template <typename T, MediaHistoryPlaybackRow::EnableIfSame<T>* = nullptr>
  bool operator==(const T& rhs) const { return Equals(rhs); }
  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        MediaHistoryPlaybackRow::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        MediaHistoryPlaybackRow::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::MediaHistoryPlaybackRow_UnserializedMessageContext<
            UserType, MediaHistoryPlaybackRow::DataView>>(0, 0, std::move(input)),
        MOJO_CREATE_MESSAGE_FLAG_NONE);
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    mojo::Message message;
    return mojo::internal::DeserializeImpl<MediaHistoryPlaybackRow::DataView>(
        message, data, data_num_bytes, output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return MediaHistoryPlaybackRow::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::MediaHistoryPlaybackRow_UnserializedMessageContext<
            UserType, MediaHistoryPlaybackRow::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<MediaHistoryPlaybackRow::DataView>(
        input, input.payload(), input.payload_num_bytes(), output, Validate);
  }

  
  ::GURL url;
  
  bool has_audio;
  
  bool has_video;
  
  ::base::TimeDelta watchtime;
  
  double last_updated_time;

  // Serialise this struct into a trace.
  void WriteIntoTrace(perfetto::TracedValue traced_context) const;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

// The comparison operators are templates, so they are only instantiated if they
// are used. Thus, the bindings generator does not need to know whether
// comparison operators are available for members.
template <typename T, MediaHistoryPlaybackRow::EnableIfSame<T>* = nullptr>
bool operator<(const T& lhs, const T& rhs);

template <typename T, MediaHistoryPlaybackRow::EnableIfSame<T>* = nullptr>
bool operator<=(const T& lhs, const T& rhs) {
  return !(rhs < lhs);
}

template <typename T, MediaHistoryPlaybackRow::EnableIfSame<T>* = nullptr>
bool operator>(const T& lhs, const T& rhs) {
  return rhs < lhs;
}

template <typename T, MediaHistoryPlaybackRow::EnableIfSame<T>* = nullptr>
bool operator>=(const T& lhs, const T& rhs) {
  return !(lhs < rhs);
}





class  MediaHistoryPlaybackSessionRow {
 public:
  template <typename T>
  using EnableIfSame = std::enable_if_t<std::is_same<MediaHistoryPlaybackSessionRow, T>::value>;
  using DataView = MediaHistoryPlaybackSessionRowDataView;
  using Data_ = internal::MediaHistoryPlaybackSessionRow_Data;

  template <typename... Args>
  static MediaHistoryPlaybackSessionRowPtr New(Args&&... args) {
    return MediaHistoryPlaybackSessionRowPtr(
        absl::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static MediaHistoryPlaybackSessionRowPtr From(const U& u) {
    return mojo::TypeConverter<MediaHistoryPlaybackSessionRowPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, MediaHistoryPlaybackSessionRow>::Convert(*this);
  }


  MediaHistoryPlaybackSessionRow();

  MediaHistoryPlaybackSessionRow(
      int64_t id,
      const ::GURL& url,
      ::base::TimeDelta duration,
      ::base::TimeDelta position,
      const ::media_session::MediaMetadata& metadata,
      std::vector<::media_session::MediaImage> artwork,
      double last_updated_time);


  ~MediaHistoryPlaybackSessionRow();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = MediaHistoryPlaybackSessionRowPtr>
  MediaHistoryPlaybackSessionRowPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T, MediaHistoryPlaybackSessionRow::EnableIfSame<T>* = nullptr>
  bool Equals(const T& other) const;

  template <typename T, MediaHistoryPlaybackSessionRow::EnableIfSame<T>* = nullptr>
  bool operator==(const T& rhs) const { return Equals(rhs); }
  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        MediaHistoryPlaybackSessionRow::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        MediaHistoryPlaybackSessionRow::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::MediaHistoryPlaybackSessionRow_UnserializedMessageContext<
            UserType, MediaHistoryPlaybackSessionRow::DataView>>(0, 0, std::move(input)),
        MOJO_CREATE_MESSAGE_FLAG_NONE);
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    mojo::Message message;
    return mojo::internal::DeserializeImpl<MediaHistoryPlaybackSessionRow::DataView>(
        message, data, data_num_bytes, output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return MediaHistoryPlaybackSessionRow::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::MediaHistoryPlaybackSessionRow_UnserializedMessageContext<
            UserType, MediaHistoryPlaybackSessionRow::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<MediaHistoryPlaybackSessionRow::DataView>(
        input, input.payload(), input.payload_num_bytes(), output, Validate);
  }

  
  int64_t id;
  
  ::GURL url;
  
  ::base::TimeDelta duration;
  
  ::base::TimeDelta position;
  
  ::media_session::MediaMetadata metadata;
  
  std::vector<::media_session::MediaImage> artwork;
  
  double last_updated_time;

  // Serialise this struct into a trace.
  void WriteIntoTrace(perfetto::TracedValue traced_context) const;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

// The comparison operators are templates, so they are only instantiated if they
// are used. Thus, the bindings generator does not need to know whether
// comparison operators are available for members.
template <typename T, MediaHistoryPlaybackSessionRow::EnableIfSame<T>* = nullptr>
bool operator<(const T& lhs, const T& rhs);

template <typename T, MediaHistoryPlaybackSessionRow::EnableIfSame<T>* = nullptr>
bool operator<=(const T& lhs, const T& rhs) {
  return !(rhs < lhs);
}

template <typename T, MediaHistoryPlaybackSessionRow::EnableIfSame<T>* = nullptr>
bool operator>(const T& lhs, const T& rhs) {
  return rhs < lhs;
}

template <typename T, MediaHistoryPlaybackSessionRow::EnableIfSame<T>* = nullptr>
bool operator>=(const T& lhs, const T& rhs) {
  return !(lhs < rhs);
}

template <typename StructPtrType>
MediaHistoryStatsPtr MediaHistoryStats::Clone() const {
  return New(
      mojo::Clone(table_row_counts)
  );
}

template <typename T, MediaHistoryStats::EnableIfSame<T>*>
bool MediaHistoryStats::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->table_row_counts, other_struct.table_row_counts))
    return false;
  return true;
}

template <typename T, MediaHistoryStats::EnableIfSame<T>*>
bool operator<(const T& lhs, const T& rhs) {
  if (lhs.table_row_counts < rhs.table_row_counts)
    return true;
  if (rhs.table_row_counts < lhs.table_row_counts)
    return false;
  return false;
}
template <typename StructPtrType>
MediaHistoryOriginRowPtr MediaHistoryOriginRow::Clone() const {
  return New(
      mojo::Clone(origin),
      mojo::Clone(cached_audio_video_watchtime),
      mojo::Clone(actual_audio_video_watchtime),
      mojo::Clone(last_updated_time)
  );
}

template <typename T, MediaHistoryOriginRow::EnableIfSame<T>*>
bool MediaHistoryOriginRow::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->origin, other_struct.origin))
    return false;
  if (!mojo::Equals(this->cached_audio_video_watchtime, other_struct.cached_audio_video_watchtime))
    return false;
  if (!mojo::Equals(this->actual_audio_video_watchtime, other_struct.actual_audio_video_watchtime))
    return false;
  if (!mojo::Equals(this->last_updated_time, other_struct.last_updated_time))
    return false;
  return true;
}

template <typename T, MediaHistoryOriginRow::EnableIfSame<T>*>
bool operator<(const T& lhs, const T& rhs) {
  if (lhs.origin < rhs.origin)
    return true;
  if (rhs.origin < lhs.origin)
    return false;
  if (lhs.cached_audio_video_watchtime < rhs.cached_audio_video_watchtime)
    return true;
  if (rhs.cached_audio_video_watchtime < lhs.cached_audio_video_watchtime)
    return false;
  if (lhs.actual_audio_video_watchtime < rhs.actual_audio_video_watchtime)
    return true;
  if (rhs.actual_audio_video_watchtime < lhs.actual_audio_video_watchtime)
    return false;
  if (lhs.last_updated_time < rhs.last_updated_time)
    return true;
  if (rhs.last_updated_time < lhs.last_updated_time)
    return false;
  return false;
}
template <typename StructPtrType>
MediaHistoryPlaybackRowPtr MediaHistoryPlaybackRow::Clone() const {
  return New(
      mojo::Clone(url),
      mojo::Clone(has_audio),
      mojo::Clone(has_video),
      mojo::Clone(watchtime),
      mojo::Clone(last_updated_time)
  );
}

template <typename T, MediaHistoryPlaybackRow::EnableIfSame<T>*>
bool MediaHistoryPlaybackRow::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->url, other_struct.url))
    return false;
  if (!mojo::Equals(this->has_audio, other_struct.has_audio))
    return false;
  if (!mojo::Equals(this->has_video, other_struct.has_video))
    return false;
  if (!mojo::Equals(this->watchtime, other_struct.watchtime))
    return false;
  if (!mojo::Equals(this->last_updated_time, other_struct.last_updated_time))
    return false;
  return true;
}

template <typename T, MediaHistoryPlaybackRow::EnableIfSame<T>*>
bool operator<(const T& lhs, const T& rhs) {
  if (lhs.url < rhs.url)
    return true;
  if (rhs.url < lhs.url)
    return false;
  if (lhs.has_audio < rhs.has_audio)
    return true;
  if (rhs.has_audio < lhs.has_audio)
    return false;
  if (lhs.has_video < rhs.has_video)
    return true;
  if (rhs.has_video < lhs.has_video)
    return false;
  if (lhs.watchtime < rhs.watchtime)
    return true;
  if (rhs.watchtime < lhs.watchtime)
    return false;
  if (lhs.last_updated_time < rhs.last_updated_time)
    return true;
  if (rhs.last_updated_time < lhs.last_updated_time)
    return false;
  return false;
}
template <typename StructPtrType>
MediaHistoryPlaybackSessionRowPtr MediaHistoryPlaybackSessionRow::Clone() const {
  return New(
      mojo::Clone(id),
      mojo::Clone(url),
      mojo::Clone(duration),
      mojo::Clone(position),
      mojo::Clone(metadata),
      mojo::Clone(artwork),
      mojo::Clone(last_updated_time)
  );
}

template <typename T, MediaHistoryPlaybackSessionRow::EnableIfSame<T>*>
bool MediaHistoryPlaybackSessionRow::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->id, other_struct.id))
    return false;
  if (!mojo::Equals(this->url, other_struct.url))
    return false;
  if (!mojo::Equals(this->duration, other_struct.duration))
    return false;
  if (!mojo::Equals(this->position, other_struct.position))
    return false;
  if (!mojo::Equals(this->metadata, other_struct.metadata))
    return false;
  if (!mojo::Equals(this->artwork, other_struct.artwork))
    return false;
  if (!mojo::Equals(this->last_updated_time, other_struct.last_updated_time))
    return false;
  return true;
}

template <typename T, MediaHistoryPlaybackSessionRow::EnableIfSame<T>*>
bool operator<(const T& lhs, const T& rhs) {
  if (lhs.id < rhs.id)
    return true;
  if (rhs.id < lhs.id)
    return false;
  if (lhs.url < rhs.url)
    return true;
  if (rhs.url < lhs.url)
    return false;
  if (lhs.duration < rhs.duration)
    return true;
  if (rhs.duration < lhs.duration)
    return false;
  if (lhs.position < rhs.position)
    return true;
  if (rhs.position < lhs.position)
    return false;
  if (lhs.metadata < rhs.metadata)
    return true;
  if (rhs.metadata < lhs.metadata)
    return false;
  if (lhs.artwork < rhs.artwork)
    return true;
  if (rhs.artwork < lhs.artwork)
    return false;
  if (lhs.last_updated_time < rhs.last_updated_time)
    return true;
  if (rhs.last_updated_time < lhs.last_updated_time)
    return false;
  return false;
}


}  // namespace mojom
}  // namespace media_history

namespace mojo {


template <>
struct  StructTraits<::media_history::mojom::MediaHistoryStats::DataView,
                                         ::media_history::mojom::MediaHistoryStatsPtr> {
  static bool IsNull(const ::media_history::mojom::MediaHistoryStatsPtr& input) { return !input; }
  static void SetToNull(::media_history::mojom::MediaHistoryStatsPtr* output) { output->reset(); }

  static const decltype(::media_history::mojom::MediaHistoryStats::table_row_counts)& table_row_counts(
      const ::media_history::mojom::MediaHistoryStatsPtr& input) {
    return input->table_row_counts;
  }

  static bool Read(::media_history::mojom::MediaHistoryStats::DataView input, ::media_history::mojom::MediaHistoryStatsPtr* output);
};


template <>
struct  StructTraits<::media_history::mojom::MediaHistoryOriginRow::DataView,
                                         ::media_history::mojom::MediaHistoryOriginRowPtr> {
  static bool IsNull(const ::media_history::mojom::MediaHistoryOriginRowPtr& input) { return !input; }
  static void SetToNull(::media_history::mojom::MediaHistoryOriginRowPtr* output) { output->reset(); }

  static const decltype(::media_history::mojom::MediaHistoryOriginRow::origin)& origin(
      const ::media_history::mojom::MediaHistoryOriginRowPtr& input) {
    return input->origin;
  }

  static const decltype(::media_history::mojom::MediaHistoryOriginRow::cached_audio_video_watchtime)& cached_audio_video_watchtime(
      const ::media_history::mojom::MediaHistoryOriginRowPtr& input) {
    return input->cached_audio_video_watchtime;
  }

  static const decltype(::media_history::mojom::MediaHistoryOriginRow::actual_audio_video_watchtime)& actual_audio_video_watchtime(
      const ::media_history::mojom::MediaHistoryOriginRowPtr& input) {
    return input->actual_audio_video_watchtime;
  }

  static decltype(::media_history::mojom::MediaHistoryOriginRow::last_updated_time) last_updated_time(
      const ::media_history::mojom::MediaHistoryOriginRowPtr& input) {
    return input->last_updated_time;
  }

  static bool Read(::media_history::mojom::MediaHistoryOriginRow::DataView input, ::media_history::mojom::MediaHistoryOriginRowPtr* output);
};


template <>
struct  StructTraits<::media_history::mojom::MediaHistoryPlaybackRow::DataView,
                                         ::media_history::mojom::MediaHistoryPlaybackRowPtr> {
  static bool IsNull(const ::media_history::mojom::MediaHistoryPlaybackRowPtr& input) { return !input; }
  static void SetToNull(::media_history::mojom::MediaHistoryPlaybackRowPtr* output) { output->reset(); }

  static const decltype(::media_history::mojom::MediaHistoryPlaybackRow::url)& url(
      const ::media_history::mojom::MediaHistoryPlaybackRowPtr& input) {
    return input->url;
  }

  static decltype(::media_history::mojom::MediaHistoryPlaybackRow::has_audio) has_audio(
      const ::media_history::mojom::MediaHistoryPlaybackRowPtr& input) {
    return input->has_audio;
  }

  static decltype(::media_history::mojom::MediaHistoryPlaybackRow::has_video) has_video(
      const ::media_history::mojom::MediaHistoryPlaybackRowPtr& input) {
    return input->has_video;
  }

  static const decltype(::media_history::mojom::MediaHistoryPlaybackRow::watchtime)& watchtime(
      const ::media_history::mojom::MediaHistoryPlaybackRowPtr& input) {
    return input->watchtime;
  }

  static decltype(::media_history::mojom::MediaHistoryPlaybackRow::last_updated_time) last_updated_time(
      const ::media_history::mojom::MediaHistoryPlaybackRowPtr& input) {
    return input->last_updated_time;
  }

  static bool Read(::media_history::mojom::MediaHistoryPlaybackRow::DataView input, ::media_history::mojom::MediaHistoryPlaybackRowPtr* output);
};


template <>
struct  StructTraits<::media_history::mojom::MediaHistoryPlaybackSessionRow::DataView,
                                         ::media_history::mojom::MediaHistoryPlaybackSessionRowPtr> {
  static bool IsNull(const ::media_history::mojom::MediaHistoryPlaybackSessionRowPtr& input) { return !input; }
  static void SetToNull(::media_history::mojom::MediaHistoryPlaybackSessionRowPtr* output) { output->reset(); }

  static decltype(::media_history::mojom::MediaHistoryPlaybackSessionRow::id) id(
      const ::media_history::mojom::MediaHistoryPlaybackSessionRowPtr& input) {
    return input->id;
  }

  static const decltype(::media_history::mojom::MediaHistoryPlaybackSessionRow::url)& url(
      const ::media_history::mojom::MediaHistoryPlaybackSessionRowPtr& input) {
    return input->url;
  }

  static const decltype(::media_history::mojom::MediaHistoryPlaybackSessionRow::duration)& duration(
      const ::media_history::mojom::MediaHistoryPlaybackSessionRowPtr& input) {
    return input->duration;
  }

  static const decltype(::media_history::mojom::MediaHistoryPlaybackSessionRow::position)& position(
      const ::media_history::mojom::MediaHistoryPlaybackSessionRowPtr& input) {
    return input->position;
  }

  static const decltype(::media_history::mojom::MediaHistoryPlaybackSessionRow::metadata)& metadata(
      const ::media_history::mojom::MediaHistoryPlaybackSessionRowPtr& input) {
    return input->metadata;
  }

  static const decltype(::media_history::mojom::MediaHistoryPlaybackSessionRow::artwork)& artwork(
      const ::media_history::mojom::MediaHistoryPlaybackSessionRowPtr& input) {
    return input->artwork;
  }

  static decltype(::media_history::mojom::MediaHistoryPlaybackSessionRow::last_updated_time) last_updated_time(
      const ::media_history::mojom::MediaHistoryPlaybackSessionRowPtr& input) {
    return input->last_updated_time;
  }

  static bool Read(::media_history::mojom::MediaHistoryPlaybackSessionRow::DataView input, ::media_history::mojom::MediaHistoryPlaybackSessionRowPtr* output);
};

}  // namespace mojo

#endif  // CHROME_BROWSER_MEDIA_HISTORY_MEDIA_HISTORY_STORE_MOJOM_H_