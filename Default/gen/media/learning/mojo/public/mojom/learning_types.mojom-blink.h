// media/learning/mojo/public/mojom/learning_types.mojom-blink.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_LEARNING_MOJO_PUBLIC_MOJOM_LEARNING_TYPES_MOJOM_BLINK_H_
#define MEDIA_LEARNING_MOJO_PUBLIC_MOJOM_LEARNING_TYPES_MOJOM_BLINK_H_

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

#include "media/learning/mojo/public/mojom/learning_types.mojom-shared.h"
#include "media/learning/mojo/public/mojom/learning_types.mojom-blink-forward.h"

#include "mojo/public/cpp/bindings/lib/wtf_clone_equals_util.h"
#include "mojo/public/cpp/bindings/lib/wtf_hash_util.h"
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"




#include "media/learning/mojo/public/cpp/learning_mojom_traits.h"
#include "third_party/blink/public/platform/web_common.h"




namespace media {
namespace learning {
namespace mojom {
namespace blink {





class BLINK_PLATFORM_EXPORT FeatureValue {
 public:
  template <typename T>
  using EnableIfSame = std::enable_if_t<std::is_same<FeatureValue, T>::value>;
  using DataView = FeatureValueDataView;
  using Data_ = internal::FeatureValue_Data;

  template <typename... Args>
  static FeatureValuePtr New(Args&&... args) {
    return FeatureValuePtr(
        absl::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static FeatureValuePtr From(const U& u) {
    return mojo::TypeConverter<FeatureValuePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, FeatureValue>::Convert(*this);
  }


  FeatureValue();

  explicit FeatureValue(
      double value);


  ~FeatureValue();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = FeatureValuePtr>
  FeatureValuePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T, FeatureValue::EnableIfSame<T>* = nullptr>
  bool Equals(const T& other) const;

  template <typename T, FeatureValue::EnableIfSame<T>* = nullptr>
  bool operator==(const T& rhs) const { return Equals(rhs); }
  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        FeatureValue::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        FeatureValue::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::FeatureValue_UnserializedMessageContext<
            UserType, FeatureValue::DataView>>(0, 0, std::move(input)),
        MOJO_CREATE_MESSAGE_FLAG_NONE);
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    mojo::Message message;
    return mojo::internal::DeserializeImpl<FeatureValue::DataView>(
        message, data, data_num_bytes, output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return FeatureValue::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::FeatureValue_UnserializedMessageContext<
            UserType, FeatureValue::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<FeatureValue::DataView>(
        input, input.payload(), input.payload_num_bytes(), output, Validate);
  }

  
  double value;

  // Serialise this struct into a trace.
  void WriteIntoTrace(perfetto::TracedValue traced_context) const;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

// The comparison operators are templates, so they are only instantiated if they
// are used. Thus, the bindings generator does not need to know whether
// comparison operators are available for members.
template <typename T, FeatureValue::EnableIfSame<T>* = nullptr>
bool operator<(const T& lhs, const T& rhs);

template <typename T, FeatureValue::EnableIfSame<T>* = nullptr>
bool operator<=(const T& lhs, const T& rhs) {
  return !(rhs < lhs);
}

template <typename T, FeatureValue::EnableIfSame<T>* = nullptr>
bool operator>(const T& lhs, const T& rhs) {
  return rhs < lhs;
}

template <typename T, FeatureValue::EnableIfSame<T>* = nullptr>
bool operator>=(const T& lhs, const T& rhs) {
  return !(lhs < rhs);
}





class BLINK_PLATFORM_EXPORT TargetValue {
 public:
  template <typename T>
  using EnableIfSame = std::enable_if_t<std::is_same<TargetValue, T>::value>;
  using DataView = TargetValueDataView;
  using Data_ = internal::TargetValue_Data;

  template <typename... Args>
  static TargetValuePtr New(Args&&... args) {
    return TargetValuePtr(
        absl::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static TargetValuePtr From(const U& u) {
    return mojo::TypeConverter<TargetValuePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, TargetValue>::Convert(*this);
  }


  TargetValue();

  explicit TargetValue(
      double value);


  ~TargetValue();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = TargetValuePtr>
  TargetValuePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T, TargetValue::EnableIfSame<T>* = nullptr>
  bool Equals(const T& other) const;

  template <typename T, TargetValue::EnableIfSame<T>* = nullptr>
  bool operator==(const T& rhs) const { return Equals(rhs); }
  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        TargetValue::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        TargetValue::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::TargetValue_UnserializedMessageContext<
            UserType, TargetValue::DataView>>(0, 0, std::move(input)),
        MOJO_CREATE_MESSAGE_FLAG_NONE);
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    mojo::Message message;
    return mojo::internal::DeserializeImpl<TargetValue::DataView>(
        message, data, data_num_bytes, output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return TargetValue::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::TargetValue_UnserializedMessageContext<
            UserType, TargetValue::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<TargetValue::DataView>(
        input, input.payload(), input.payload_num_bytes(), output, Validate);
  }

  
  double value;

  // Serialise this struct into a trace.
  void WriteIntoTrace(perfetto::TracedValue traced_context) const;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

// The comparison operators are templates, so they are only instantiated if they
// are used. Thus, the bindings generator does not need to know whether
// comparison operators are available for members.
template <typename T, TargetValue::EnableIfSame<T>* = nullptr>
bool operator<(const T& lhs, const T& rhs);

template <typename T, TargetValue::EnableIfSame<T>* = nullptr>
bool operator<=(const T& lhs, const T& rhs) {
  return !(rhs < lhs);
}

template <typename T, TargetValue::EnableIfSame<T>* = nullptr>
bool operator>(const T& lhs, const T& rhs) {
  return rhs < lhs;
}

template <typename T, TargetValue::EnableIfSame<T>* = nullptr>
bool operator>=(const T& lhs, const T& rhs) {
  return !(lhs < rhs);
}













class BLINK_PLATFORM_EXPORT LabelledExample {
 public:
  template <typename T>
  using EnableIfSame = std::enable_if_t<std::is_same<LabelledExample, T>::value>;
  using DataView = LabelledExampleDataView;
  using Data_ = internal::LabelledExample_Data;

  template <typename... Args>
  static LabelledExamplePtr New(Args&&... args) {
    return LabelledExamplePtr(
        absl::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static LabelledExamplePtr From(const U& u) {
    return mojo::TypeConverter<LabelledExamplePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, LabelledExample>::Convert(*this);
  }


  LabelledExample();

  LabelledExample(
      WTF::Vector<::media::learning::FeatureValue> features,
      const ::media::learning::TargetValue& target_value);


  ~LabelledExample();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = LabelledExamplePtr>
  LabelledExamplePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T, LabelledExample::EnableIfSame<T>* = nullptr>
  bool Equals(const T& other) const;

  template <typename T, LabelledExample::EnableIfSame<T>* = nullptr>
  bool operator==(const T& rhs) const { return Equals(rhs); }
  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        LabelledExample::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        LabelledExample::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::LabelledExample_UnserializedMessageContext<
            UserType, LabelledExample::DataView>>(0, 0, std::move(input)),
        MOJO_CREATE_MESSAGE_FLAG_NONE);
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    mojo::Message message;
    return mojo::internal::DeserializeImpl<LabelledExample::DataView>(
        message, data, data_num_bytes, output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return LabelledExample::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::LabelledExample_UnserializedMessageContext<
            UserType, LabelledExample::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<LabelledExample::DataView>(
        input, input.payload(), input.payload_num_bytes(), output, Validate);
  }

  
  WTF::Vector<::media::learning::FeatureValue> features;
  
  ::media::learning::TargetValue target_value;

  // Serialise this struct into a trace.
  void WriteIntoTrace(perfetto::TracedValue traced_context) const;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

// The comparison operators are templates, so they are only instantiated if they
// are used. Thus, the bindings generator does not need to know whether
// comparison operators are available for members.
template <typename T, LabelledExample::EnableIfSame<T>* = nullptr>
bool operator<(const T& lhs, const T& rhs);

template <typename T, LabelledExample::EnableIfSame<T>* = nullptr>
bool operator<=(const T& lhs, const T& rhs) {
  return !(rhs < lhs);
}

template <typename T, LabelledExample::EnableIfSame<T>* = nullptr>
bool operator>(const T& lhs, const T& rhs) {
  return rhs < lhs;
}

template <typename T, LabelledExample::EnableIfSame<T>* = nullptr>
bool operator>=(const T& lhs, const T& rhs) {
  return !(lhs < rhs);
}





class BLINK_PLATFORM_EXPORT ObservationCompletion {
 public:
  template <typename T>
  using EnableIfSame = std::enable_if_t<std::is_same<ObservationCompletion, T>::value>;
  using DataView = ObservationCompletionDataView;
  using Data_ = internal::ObservationCompletion_Data;

  template <typename... Args>
  static ObservationCompletionPtr New(Args&&... args) {
    return ObservationCompletionPtr(
        absl::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static ObservationCompletionPtr From(const U& u) {
    return mojo::TypeConverter<ObservationCompletionPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, ObservationCompletion>::Convert(*this);
  }


  ObservationCompletion();

  ObservationCompletion(
      const ::media::learning::TargetValue& target_value,
      uint64_t weight);


  ~ObservationCompletion();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = ObservationCompletionPtr>
  ObservationCompletionPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T, ObservationCompletion::EnableIfSame<T>* = nullptr>
  bool Equals(const T& other) const;

  template <typename T, ObservationCompletion::EnableIfSame<T>* = nullptr>
  bool operator==(const T& rhs) const { return Equals(rhs); }
  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        ObservationCompletion::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        ObservationCompletion::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::ObservationCompletion_UnserializedMessageContext<
            UserType, ObservationCompletion::DataView>>(0, 0, std::move(input)),
        MOJO_CREATE_MESSAGE_FLAG_NONE);
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    mojo::Message message;
    return mojo::internal::DeserializeImpl<ObservationCompletion::DataView>(
        message, data, data_num_bytes, output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return ObservationCompletion::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::ObservationCompletion_UnserializedMessageContext<
            UserType, ObservationCompletion::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<ObservationCompletion::DataView>(
        input, input.payload(), input.payload_num_bytes(), output, Validate);
  }

  
  ::media::learning::TargetValue target_value;
  
  uint64_t weight;

  // Serialise this struct into a trace.
  void WriteIntoTrace(perfetto::TracedValue traced_context) const;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

// The comparison operators are templates, so they are only instantiated if they
// are used. Thus, the bindings generator does not need to know whether
// comparison operators are available for members.
template <typename T, ObservationCompletion::EnableIfSame<T>* = nullptr>
bool operator<(const T& lhs, const T& rhs);

template <typename T, ObservationCompletion::EnableIfSame<T>* = nullptr>
bool operator<=(const T& lhs, const T& rhs) {
  return !(rhs < lhs);
}

template <typename T, ObservationCompletion::EnableIfSame<T>* = nullptr>
bool operator>(const T& lhs, const T& rhs) {
  return rhs < lhs;
}

template <typename T, ObservationCompletion::EnableIfSame<T>* = nullptr>
bool operator>=(const T& lhs, const T& rhs) {
  return !(lhs < rhs);
}





class BLINK_PLATFORM_EXPORT TargetHistogramPair {
 public:
  template <typename T>
  using EnableIfSame = std::enable_if_t<std::is_same<TargetHistogramPair, T>::value>;
  using DataView = TargetHistogramPairDataView;
  using Data_ = internal::TargetHistogramPair_Data;

  template <typename... Args>
  static TargetHistogramPairPtr New(Args&&... args) {
    return TargetHistogramPairPtr(
        absl::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static TargetHistogramPairPtr From(const U& u) {
    return mojo::TypeConverter<TargetHistogramPairPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, TargetHistogramPair>::Convert(*this);
  }


  TargetHistogramPair();

  TargetHistogramPair(
      const ::media::learning::TargetValue& target_value,
      double count);


  ~TargetHistogramPair();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = TargetHistogramPairPtr>
  TargetHistogramPairPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T, TargetHistogramPair::EnableIfSame<T>* = nullptr>
  bool Equals(const T& other) const;

  template <typename T, TargetHistogramPair::EnableIfSame<T>* = nullptr>
  bool operator==(const T& rhs) const { return Equals(rhs); }
  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        TargetHistogramPair::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        TargetHistogramPair::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::TargetHistogramPair_UnserializedMessageContext<
            UserType, TargetHistogramPair::DataView>>(0, 0, std::move(input)),
        MOJO_CREATE_MESSAGE_FLAG_NONE);
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    mojo::Message message;
    return mojo::internal::DeserializeImpl<TargetHistogramPair::DataView>(
        message, data, data_num_bytes, output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return TargetHistogramPair::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::TargetHistogramPair_UnserializedMessageContext<
            UserType, TargetHistogramPair::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<TargetHistogramPair::DataView>(
        input, input.payload(), input.payload_num_bytes(), output, Validate);
  }

  
  ::media::learning::TargetValue target_value;
  
  double count;

  // Serialise this struct into a trace.
  void WriteIntoTrace(perfetto::TracedValue traced_context) const;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

// The comparison operators are templates, so they are only instantiated if they
// are used. Thus, the bindings generator does not need to know whether
// comparison operators are available for members.
template <typename T, TargetHistogramPair::EnableIfSame<T>* = nullptr>
bool operator<(const T& lhs, const T& rhs);

template <typename T, TargetHistogramPair::EnableIfSame<T>* = nullptr>
bool operator<=(const T& lhs, const T& rhs) {
  return !(rhs < lhs);
}

template <typename T, TargetHistogramPair::EnableIfSame<T>* = nullptr>
bool operator>(const T& lhs, const T& rhs) {
  return rhs < lhs;
}

template <typename T, TargetHistogramPair::EnableIfSame<T>* = nullptr>
bool operator>=(const T& lhs, const T& rhs) {
  return !(lhs < rhs);
}





class BLINK_PLATFORM_EXPORT TargetHistogram {
 public:
  template <typename T>
  using EnableIfSame = std::enable_if_t<std::is_same<TargetHistogram, T>::value>;
  using DataView = TargetHistogramDataView;
  using Data_ = internal::TargetHistogram_Data;

  template <typename... Args>
  static TargetHistogramPtr New(Args&&... args) {
    return TargetHistogramPtr(
        absl::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static TargetHistogramPtr From(const U& u) {
    return mojo::TypeConverter<TargetHistogramPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, TargetHistogram>::Convert(*this);
  }


  TargetHistogram();

  explicit TargetHistogram(
      WTF::Vector<::media::learning::TargetHistogramPair> pairs);


  ~TargetHistogram();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = TargetHistogramPtr>
  TargetHistogramPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T, TargetHistogram::EnableIfSame<T>* = nullptr>
  bool Equals(const T& other) const;

  template <typename T, TargetHistogram::EnableIfSame<T>* = nullptr>
  bool operator==(const T& rhs) const { return Equals(rhs); }
  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        TargetHistogram::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        TargetHistogram::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::TargetHistogram_UnserializedMessageContext<
            UserType, TargetHistogram::DataView>>(0, 0, std::move(input)),
        MOJO_CREATE_MESSAGE_FLAG_NONE);
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    mojo::Message message;
    return mojo::internal::DeserializeImpl<TargetHistogram::DataView>(
        message, data, data_num_bytes, output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return TargetHistogram::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::TargetHistogram_UnserializedMessageContext<
            UserType, TargetHistogram::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<TargetHistogram::DataView>(
        input, input.payload(), input.payload_num_bytes(), output, Validate);
  }

  
  WTF::Vector<::media::learning::TargetHistogramPair> pairs;

  // Serialise this struct into a trace.
  void WriteIntoTrace(perfetto::TracedValue traced_context) const;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

// The comparison operators are templates, so they are only instantiated if they
// are used. Thus, the bindings generator does not need to know whether
// comparison operators are available for members.
template <typename T, TargetHistogram::EnableIfSame<T>* = nullptr>
bool operator<(const T& lhs, const T& rhs);

template <typename T, TargetHistogram::EnableIfSame<T>* = nullptr>
bool operator<=(const T& lhs, const T& rhs) {
  return !(rhs < lhs);
}

template <typename T, TargetHistogram::EnableIfSame<T>* = nullptr>
bool operator>(const T& lhs, const T& rhs) {
  return rhs < lhs;
}

template <typename T, TargetHistogram::EnableIfSame<T>* = nullptr>
bool operator>=(const T& lhs, const T& rhs) {
  return !(lhs < rhs);
}

template <typename StructPtrType>
FeatureValuePtr FeatureValue::Clone() const {
  return New(
      mojo::Clone(value)
  );
}

template <typename T, FeatureValue::EnableIfSame<T>*>
bool FeatureValue::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->value, other_struct.value))
    return false;
  return true;
}

template <typename T, FeatureValue::EnableIfSame<T>*>
bool operator<(const T& lhs, const T& rhs) {
  if (lhs.value < rhs.value)
    return true;
  if (rhs.value < lhs.value)
    return false;
  return false;
}
template <typename StructPtrType>
TargetValuePtr TargetValue::Clone() const {
  return New(
      mojo::Clone(value)
  );
}

template <typename T, TargetValue::EnableIfSame<T>*>
bool TargetValue::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->value, other_struct.value))
    return false;
  return true;
}

template <typename T, TargetValue::EnableIfSame<T>*>
bool operator<(const T& lhs, const T& rhs) {
  if (lhs.value < rhs.value)
    return true;
  if (rhs.value < lhs.value)
    return false;
  return false;
}
template <typename StructPtrType>
LabelledExamplePtr LabelledExample::Clone() const {
  return New(
      mojo::Clone(features),
      mojo::Clone(target_value)
  );
}

template <typename T, LabelledExample::EnableIfSame<T>*>
bool LabelledExample::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->features, other_struct.features))
    return false;
  if (!mojo::Equals(this->target_value, other_struct.target_value))
    return false;
  return true;
}

template <typename T, LabelledExample::EnableIfSame<T>*>
bool operator<(const T& lhs, const T& rhs) {
  if (lhs.features < rhs.features)
    return true;
  if (rhs.features < lhs.features)
    return false;
  if (lhs.target_value < rhs.target_value)
    return true;
  if (rhs.target_value < lhs.target_value)
    return false;
  return false;
}
template <typename StructPtrType>
ObservationCompletionPtr ObservationCompletion::Clone() const {
  return New(
      mojo::Clone(target_value),
      mojo::Clone(weight)
  );
}

template <typename T, ObservationCompletion::EnableIfSame<T>*>
bool ObservationCompletion::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->target_value, other_struct.target_value))
    return false;
  if (!mojo::Equals(this->weight, other_struct.weight))
    return false;
  return true;
}

template <typename T, ObservationCompletion::EnableIfSame<T>*>
bool operator<(const T& lhs, const T& rhs) {
  if (lhs.target_value < rhs.target_value)
    return true;
  if (rhs.target_value < lhs.target_value)
    return false;
  if (lhs.weight < rhs.weight)
    return true;
  if (rhs.weight < lhs.weight)
    return false;
  return false;
}
template <typename StructPtrType>
TargetHistogramPairPtr TargetHistogramPair::Clone() const {
  return New(
      mojo::Clone(target_value),
      mojo::Clone(count)
  );
}

template <typename T, TargetHistogramPair::EnableIfSame<T>*>
bool TargetHistogramPair::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->target_value, other_struct.target_value))
    return false;
  if (!mojo::Equals(this->count, other_struct.count))
    return false;
  return true;
}

template <typename T, TargetHistogramPair::EnableIfSame<T>*>
bool operator<(const T& lhs, const T& rhs) {
  if (lhs.target_value < rhs.target_value)
    return true;
  if (rhs.target_value < lhs.target_value)
    return false;
  if (lhs.count < rhs.count)
    return true;
  if (rhs.count < lhs.count)
    return false;
  return false;
}
template <typename StructPtrType>
TargetHistogramPtr TargetHistogram::Clone() const {
  return New(
      mojo::Clone(pairs)
  );
}

template <typename T, TargetHistogram::EnableIfSame<T>*>
bool TargetHistogram::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->pairs, other_struct.pairs))
    return false;
  return true;
}

template <typename T, TargetHistogram::EnableIfSame<T>*>
bool operator<(const T& lhs, const T& rhs) {
  if (lhs.pairs < rhs.pairs)
    return true;
  if (rhs.pairs < lhs.pairs)
    return false;
  return false;
}


}  // namespace blink
}  // namespace mojom
}  // namespace learning
}  // namespace media

namespace mojo {


template <>
struct BLINK_PLATFORM_EXPORT StructTraits<::media::learning::mojom::blink::FeatureValue::DataView,
                                         ::media::learning::mojom::blink::FeatureValuePtr> {
  static bool IsNull(const ::media::learning::mojom::blink::FeatureValuePtr& input) { return !input; }
  static void SetToNull(::media::learning::mojom::blink::FeatureValuePtr* output) { output->reset(); }

  static decltype(::media::learning::mojom::blink::FeatureValue::value) value(
      const ::media::learning::mojom::blink::FeatureValuePtr& input) {
    return input->value;
  }

  static bool Read(::media::learning::mojom::blink::FeatureValue::DataView input, ::media::learning::mojom::blink::FeatureValuePtr* output);
};


template <>
struct BLINK_PLATFORM_EXPORT StructTraits<::media::learning::mojom::blink::TargetValue::DataView,
                                         ::media::learning::mojom::blink::TargetValuePtr> {
  static bool IsNull(const ::media::learning::mojom::blink::TargetValuePtr& input) { return !input; }
  static void SetToNull(::media::learning::mojom::blink::TargetValuePtr* output) { output->reset(); }

  static decltype(::media::learning::mojom::blink::TargetValue::value) value(
      const ::media::learning::mojom::blink::TargetValuePtr& input) {
    return input->value;
  }

  static bool Read(::media::learning::mojom::blink::TargetValue::DataView input, ::media::learning::mojom::blink::TargetValuePtr* output);
};


template <>
struct BLINK_PLATFORM_EXPORT StructTraits<::media::learning::mojom::blink::LabelledExample::DataView,
                                         ::media::learning::mojom::blink::LabelledExamplePtr> {
  static bool IsNull(const ::media::learning::mojom::blink::LabelledExamplePtr& input) { return !input; }
  static void SetToNull(::media::learning::mojom::blink::LabelledExamplePtr* output) { output->reset(); }

  static const decltype(::media::learning::mojom::blink::LabelledExample::features)& features(
      const ::media::learning::mojom::blink::LabelledExamplePtr& input) {
    return input->features;
  }

  static const decltype(::media::learning::mojom::blink::LabelledExample::target_value)& target_value(
      const ::media::learning::mojom::blink::LabelledExamplePtr& input) {
    return input->target_value;
  }

  static bool Read(::media::learning::mojom::blink::LabelledExample::DataView input, ::media::learning::mojom::blink::LabelledExamplePtr* output);
};


template <>
struct BLINK_PLATFORM_EXPORT StructTraits<::media::learning::mojom::blink::ObservationCompletion::DataView,
                                         ::media::learning::mojom::blink::ObservationCompletionPtr> {
  static bool IsNull(const ::media::learning::mojom::blink::ObservationCompletionPtr& input) { return !input; }
  static void SetToNull(::media::learning::mojom::blink::ObservationCompletionPtr* output) { output->reset(); }

  static const decltype(::media::learning::mojom::blink::ObservationCompletion::target_value)& target_value(
      const ::media::learning::mojom::blink::ObservationCompletionPtr& input) {
    return input->target_value;
  }

  static decltype(::media::learning::mojom::blink::ObservationCompletion::weight) weight(
      const ::media::learning::mojom::blink::ObservationCompletionPtr& input) {
    return input->weight;
  }

  static bool Read(::media::learning::mojom::blink::ObservationCompletion::DataView input, ::media::learning::mojom::blink::ObservationCompletionPtr* output);
};


template <>
struct BLINK_PLATFORM_EXPORT StructTraits<::media::learning::mojom::blink::TargetHistogramPair::DataView,
                                         ::media::learning::mojom::blink::TargetHistogramPairPtr> {
  static bool IsNull(const ::media::learning::mojom::blink::TargetHistogramPairPtr& input) { return !input; }
  static void SetToNull(::media::learning::mojom::blink::TargetHistogramPairPtr* output) { output->reset(); }

  static const decltype(::media::learning::mojom::blink::TargetHistogramPair::target_value)& target_value(
      const ::media::learning::mojom::blink::TargetHistogramPairPtr& input) {
    return input->target_value;
  }

  static decltype(::media::learning::mojom::blink::TargetHistogramPair::count) count(
      const ::media::learning::mojom::blink::TargetHistogramPairPtr& input) {
    return input->count;
  }

  static bool Read(::media::learning::mojom::blink::TargetHistogramPair::DataView input, ::media::learning::mojom::blink::TargetHistogramPairPtr* output);
};


template <>
struct BLINK_PLATFORM_EXPORT StructTraits<::media::learning::mojom::blink::TargetHistogram::DataView,
                                         ::media::learning::mojom::blink::TargetHistogramPtr> {
  static bool IsNull(const ::media::learning::mojom::blink::TargetHistogramPtr& input) { return !input; }
  static void SetToNull(::media::learning::mojom::blink::TargetHistogramPtr* output) { output->reset(); }

  static const decltype(::media::learning::mojom::blink::TargetHistogram::pairs)& pairs(
      const ::media::learning::mojom::blink::TargetHistogramPtr& input) {
    return input->pairs;
  }

  static bool Read(::media::learning::mojom::blink::TargetHistogram::DataView input, ::media::learning::mojom::blink::TargetHistogramPtr* output);
};

}  // namespace mojo

#endif  // MEDIA_LEARNING_MOJO_PUBLIC_MOJOM_LEARNING_TYPES_MOJOM_BLINK_H_