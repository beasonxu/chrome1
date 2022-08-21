// media/learning/mojo/public/mojom/learning_types.mojom-shared-internal.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_LEARNING_MOJO_PUBLIC_MOJOM_LEARNING_TYPES_MOJOM_SHARED_INTERNAL_H_
#define MEDIA_LEARNING_MOJO_PUBLIC_MOJOM_LEARNING_TYPES_MOJOM_SHARED_INTERNAL_H_
#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"



namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace media {
namespace learning {
namespace mojom {
namespace internal {
class FeatureValue_Data;
class TargetValue_Data;
class LabelledExample_Data;
class ObservationCompletion_Data;
class TargetHistogramPair_Data;
class TargetHistogram_Data;

#pragma pack(push, 1)
class  FeatureValue_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  double value;

 private:
  friend class mojo::internal::MessageFragment<FeatureValue_Data>;

  FeatureValue_Data();
  ~FeatureValue_Data() = delete;
};
static_assert(sizeof(FeatureValue_Data) == 16,
              "Bad sizeof(FeatureValue_Data)");
// Used by FeatureValue::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct FeatureValue_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  FeatureValue_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~FeatureValue_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::Message& message) override {
    mojo::internal::MessageFragment<FeatureValue_Data> fragment(message);
    mojo::internal::Serialize<DataView>(user_data_, fragment);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    FeatureValue_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  TargetValue_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  double value;

 private:
  friend class mojo::internal::MessageFragment<TargetValue_Data>;

  TargetValue_Data();
  ~TargetValue_Data() = delete;
};
static_assert(sizeof(TargetValue_Data) == 16,
              "Bad sizeof(TargetValue_Data)");
// Used by TargetValue::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct TargetValue_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  TargetValue_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~TargetValue_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::Message& message) override {
    mojo::internal::MessageFragment<TargetValue_Data> fragment(message);
    mojo::internal::Serialize<DataView>(user_data_, fragment);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    TargetValue_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  LabelledExample_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::FeatureValue_Data>>> features;
  mojo::internal::Pointer<internal::TargetValue_Data> target_value;

 private:
  friend class mojo::internal::MessageFragment<LabelledExample_Data>;

  LabelledExample_Data();
  ~LabelledExample_Data() = delete;
};
static_assert(sizeof(LabelledExample_Data) == 24,
              "Bad sizeof(LabelledExample_Data)");
// Used by LabelledExample::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct LabelledExample_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  LabelledExample_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~LabelledExample_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::Message& message) override {
    mojo::internal::MessageFragment<LabelledExample_Data> fragment(message);
    mojo::internal::Serialize<DataView>(user_data_, fragment);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    LabelledExample_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  ObservationCompletion_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::TargetValue_Data> target_value;
  uint64_t weight;

 private:
  friend class mojo::internal::MessageFragment<ObservationCompletion_Data>;

  ObservationCompletion_Data();
  ~ObservationCompletion_Data() = delete;
};
static_assert(sizeof(ObservationCompletion_Data) == 24,
              "Bad sizeof(ObservationCompletion_Data)");
// Used by ObservationCompletion::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct ObservationCompletion_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  ObservationCompletion_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~ObservationCompletion_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::Message& message) override {
    mojo::internal::MessageFragment<ObservationCompletion_Data> fragment(message);
    mojo::internal::Serialize<DataView>(user_data_, fragment);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    ObservationCompletion_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  TargetHistogramPair_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::TargetValue_Data> target_value;
  double count;

 private:
  friend class mojo::internal::MessageFragment<TargetHistogramPair_Data>;

  TargetHistogramPair_Data();
  ~TargetHistogramPair_Data() = delete;
};
static_assert(sizeof(TargetHistogramPair_Data) == 24,
              "Bad sizeof(TargetHistogramPair_Data)");
// Used by TargetHistogramPair::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct TargetHistogramPair_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  TargetHistogramPair_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~TargetHistogramPair_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::Message& message) override {
    mojo::internal::MessageFragment<TargetHistogramPair_Data> fragment(message);
    mojo::internal::Serialize<DataView>(user_data_, fragment);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    TargetHistogramPair_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  TargetHistogram_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::TargetHistogramPair_Data>>> pairs;

 private:
  friend class mojo::internal::MessageFragment<TargetHistogram_Data>;

  TargetHistogram_Data();
  ~TargetHistogram_Data() = delete;
};
static_assert(sizeof(TargetHistogram_Data) == 16,
              "Bad sizeof(TargetHistogram_Data)");
// Used by TargetHistogram::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct TargetHistogram_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  TargetHistogram_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~TargetHistogram_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::Message& message) override {
    mojo::internal::MessageFragment<TargetHistogram_Data> fragment(message);
    mojo::internal::Serialize<DataView>(user_data_, fragment);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    TargetHistogram_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace learning
}  // namespace media

#endif  // MEDIA_LEARNING_MOJO_PUBLIC_MOJOM_LEARNING_TYPES_MOJOM_SHARED_INTERNAL_H_