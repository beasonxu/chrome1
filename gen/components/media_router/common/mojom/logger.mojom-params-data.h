// components/media_router/common/mojom/logger.mojom-params-data.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_MEDIA_ROUTER_COMMON_MOJOM_LOGGER_MOJOM_PARAMS_DATA_H_
#define COMPONENTS_MEDIA_ROUTER_COMMON_MOJOM_LOGGER_MOJOM_PARAMS_DATA_H_

#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#endif
namespace media_router {
namespace mojom {
namespace internal {

class ValidationContext;
class  Logger_LogInfo_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t category;
  uint8_t pad0_[4];
  mojo::internal::Pointer<mojo::internal::String_Data> component;
  mojo::internal::Pointer<mojo::internal::String_Data> message;
  mojo::internal::Pointer<mojo::internal::String_Data> sink_id;
  mojo::internal::Pointer<mojo::internal::String_Data> media_source;
  mojo::internal::Pointer<mojo::internal::String_Data> session_id;

 private:
  friend class mojo::internal::MessageFragment<Logger_LogInfo_Params_Data>;

  Logger_LogInfo_Params_Data();
  ~Logger_LogInfo_Params_Data() = delete;
};
static_assert(sizeof(Logger_LogInfo_Params_Data) == 56,
              "Bad sizeof(Logger_LogInfo_Params_Data)");
class  Logger_LogWarning_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t category;
  uint8_t pad0_[4];
  mojo::internal::Pointer<mojo::internal::String_Data> component;
  mojo::internal::Pointer<mojo::internal::String_Data> message;
  mojo::internal::Pointer<mojo::internal::String_Data> sink_id;
  mojo::internal::Pointer<mojo::internal::String_Data> media_source;
  mojo::internal::Pointer<mojo::internal::String_Data> session_id;

 private:
  friend class mojo::internal::MessageFragment<Logger_LogWarning_Params_Data>;

  Logger_LogWarning_Params_Data();
  ~Logger_LogWarning_Params_Data() = delete;
};
static_assert(sizeof(Logger_LogWarning_Params_Data) == 56,
              "Bad sizeof(Logger_LogWarning_Params_Data)");
class  Logger_LogError_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t category;
  uint8_t pad0_[4];
  mojo::internal::Pointer<mojo::internal::String_Data> component;
  mojo::internal::Pointer<mojo::internal::String_Data> message;
  mojo::internal::Pointer<mojo::internal::String_Data> sink_id;
  mojo::internal::Pointer<mojo::internal::String_Data> media_source;
  mojo::internal::Pointer<mojo::internal::String_Data> session_id;

 private:
  friend class mojo::internal::MessageFragment<Logger_LogError_Params_Data>;

  Logger_LogError_Params_Data();
  ~Logger_LogError_Params_Data() = delete;
};
static_assert(sizeof(Logger_LogError_Params_Data) == 56,
              "Bad sizeof(Logger_LogError_Params_Data)");
class  Logger_BindReceiver_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data receiver;
  uint8_t padfinal_[4];

 private:
  friend class mojo::internal::MessageFragment<Logger_BindReceiver_Params_Data>;

  Logger_BindReceiver_Params_Data();
  ~Logger_BindReceiver_Params_Data() = delete;
};
static_assert(sizeof(Logger_BindReceiver_Params_Data) == 16,
              "Bad sizeof(Logger_BindReceiver_Params_Data)");

}  // namespace internal


class Logger_LogInfo_ParamsDataView {
 public:
  Logger_LogInfo_ParamsDataView() = default;

  Logger_LogInfo_ParamsDataView(
      internal::Logger_LogInfo_Params_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  [[nodiscard]] bool ReadCategory(UserType* output) const {
    auto data_value = data_->category;
    return mojo::internal::Deserialize<::media_router::mojom::LogCategory>(
        data_value, output);
  }
  LogCategory category() const {
    return ::mojo::internal::ToKnownEnumValueHelper(
          static_cast<::media_router::mojom::LogCategory>(data_->category));
  }
  inline void GetComponentDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadComponent(UserType* output) {
    
    auto* pointer = data_->component.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, message_);
  }
  inline void GetMessageDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadMessage(UserType* output) {
    
    auto* pointer = data_->message.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, message_);
  }
  inline void GetSinkIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadSinkId(UserType* output) {
    
    auto* pointer = data_->sink_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, message_);
  }
  inline void GetMediaSourceDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadMediaSource(UserType* output) {
    
    auto* pointer = data_->media_source.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, message_);
  }
  inline void GetSessionIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadSessionId(UserType* output) {
    
    auto* pointer = data_->session_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, message_);
  }
 private:
  internal::Logger_LogInfo_Params_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



class Logger_LogWarning_ParamsDataView {
 public:
  Logger_LogWarning_ParamsDataView() = default;

  Logger_LogWarning_ParamsDataView(
      internal::Logger_LogWarning_Params_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  [[nodiscard]] bool ReadCategory(UserType* output) const {
    auto data_value = data_->category;
    return mojo::internal::Deserialize<::media_router::mojom::LogCategory>(
        data_value, output);
  }
  LogCategory category() const {
    return ::mojo::internal::ToKnownEnumValueHelper(
          static_cast<::media_router::mojom::LogCategory>(data_->category));
  }
  inline void GetComponentDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadComponent(UserType* output) {
    
    auto* pointer = data_->component.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, message_);
  }
  inline void GetMessageDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadMessage(UserType* output) {
    
    auto* pointer = data_->message.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, message_);
  }
  inline void GetSinkIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadSinkId(UserType* output) {
    
    auto* pointer = data_->sink_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, message_);
  }
  inline void GetMediaSourceDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadMediaSource(UserType* output) {
    
    auto* pointer = data_->media_source.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, message_);
  }
  inline void GetSessionIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadSessionId(UserType* output) {
    
    auto* pointer = data_->session_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, message_);
  }
 private:
  internal::Logger_LogWarning_Params_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



class Logger_LogError_ParamsDataView {
 public:
  Logger_LogError_ParamsDataView() = default;

  Logger_LogError_ParamsDataView(
      internal::Logger_LogError_Params_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  [[nodiscard]] bool ReadCategory(UserType* output) const {
    auto data_value = data_->category;
    return mojo::internal::Deserialize<::media_router::mojom::LogCategory>(
        data_value, output);
  }
  LogCategory category() const {
    return ::mojo::internal::ToKnownEnumValueHelper(
          static_cast<::media_router::mojom::LogCategory>(data_->category));
  }
  inline void GetComponentDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadComponent(UserType* output) {
    
    auto* pointer = data_->component.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, message_);
  }
  inline void GetMessageDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadMessage(UserType* output) {
    
    auto* pointer = data_->message.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, message_);
  }
  inline void GetSinkIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadSinkId(UserType* output) {
    
    auto* pointer = data_->sink_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, message_);
  }
  inline void GetMediaSourceDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadMediaSource(UserType* output) {
    
    auto* pointer = data_->media_source.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, message_);
  }
  inline void GetSessionIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadSessionId(UserType* output) {
    
    auto* pointer = data_->session_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, message_);
  }
 private:
  internal::Logger_LogError_Params_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



class Logger_BindReceiver_ParamsDataView {
 public:
  Logger_BindReceiver_ParamsDataView() = default;

  Logger_BindReceiver_ParamsDataView(
      internal::Logger_BindReceiver_Params_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeReceiver() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<mojo::InterfaceRequestDataView<::media_router::mojom::LoggerInterfaceBase>>(
            &data_->receiver, &result, message_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::Logger_BindReceiver_Params_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};


inline void Logger_LogInfo_ParamsDataView::GetComponentDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->component.Get();
  *output = mojo::StringDataView(pointer, message_);
}
inline void Logger_LogInfo_ParamsDataView::GetMessageDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->message.Get();
  *output = mojo::StringDataView(pointer, message_);
}
inline void Logger_LogInfo_ParamsDataView::GetSinkIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->sink_id.Get();
  *output = mojo::StringDataView(pointer, message_);
}
inline void Logger_LogInfo_ParamsDataView::GetMediaSourceDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->media_source.Get();
  *output = mojo::StringDataView(pointer, message_);
}
inline void Logger_LogInfo_ParamsDataView::GetSessionIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->session_id.Get();
  *output = mojo::StringDataView(pointer, message_);
}


inline void Logger_LogWarning_ParamsDataView::GetComponentDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->component.Get();
  *output = mojo::StringDataView(pointer, message_);
}
inline void Logger_LogWarning_ParamsDataView::GetMessageDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->message.Get();
  *output = mojo::StringDataView(pointer, message_);
}
inline void Logger_LogWarning_ParamsDataView::GetSinkIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->sink_id.Get();
  *output = mojo::StringDataView(pointer, message_);
}
inline void Logger_LogWarning_ParamsDataView::GetMediaSourceDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->media_source.Get();
  *output = mojo::StringDataView(pointer, message_);
}
inline void Logger_LogWarning_ParamsDataView::GetSessionIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->session_id.Get();
  *output = mojo::StringDataView(pointer, message_);
}


inline void Logger_LogError_ParamsDataView::GetComponentDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->component.Get();
  *output = mojo::StringDataView(pointer, message_);
}
inline void Logger_LogError_ParamsDataView::GetMessageDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->message.Get();
  *output = mojo::StringDataView(pointer, message_);
}
inline void Logger_LogError_ParamsDataView::GetSinkIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->sink_id.Get();
  *output = mojo::StringDataView(pointer, message_);
}
inline void Logger_LogError_ParamsDataView::GetMediaSourceDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->media_source.Get();
  *output = mojo::StringDataView(pointer, message_);
}
inline void Logger_LogError_ParamsDataView::GetSessionIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->session_id.Get();
  *output = mojo::StringDataView(pointer, message_);
}



}  // namespace mojom
}  // namespace media_router

#if defined(__clang__)
#pragma clang diagnostic pop
#endif

#endif  // COMPONENTS_MEDIA_ROUTER_COMMON_MOJOM_LOGGER_MOJOM_PARAMS_DATA_H_