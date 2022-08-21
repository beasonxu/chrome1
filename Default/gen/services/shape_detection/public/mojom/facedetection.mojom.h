// services/shape_detection/public/mojom/facedetection.mojom.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_SHAPE_DETECTION_PUBLIC_MOJOM_FACEDETECTION_MOJOM_H_
#define SERVICES_SHAPE_DETECTION_PUBLIC_MOJOM_FACEDETECTION_MOJOM_H_

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

#include "services/shape_detection/public/mojom/facedetection.mojom-shared.h"
#include "services/shape_detection/public/mojom/facedetection.mojom-forward.h"
#include "skia/public/mojom/bitmap.mojom.h"
#include "ui/gfx/geometry/mojom/geometry.mojom.h"
#include <string>
#include <vector>

#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/raw_ptr_impl_ref_traits.h"






namespace shape_detection {
namespace mojom {

class FaceDetectionProxy;

template <typename ImplRefTraits>
class FaceDetectionStub;

class FaceDetectionRequestValidator;
class FaceDetectionResponseValidator;


class  FaceDetection
    : public FaceDetectionInterfaceBase {
 public:
  using IPCStableHashFunction = uint32_t(*)();

  static const char Name_[];
  static IPCStableHashFunction MessageToMethodInfo_(mojo::Message& message);
  static const char* MessageToMethodName_(mojo::Message& message);
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;
  static constexpr bool HasUninterruptableMethods_ = false;

  using Base_ = FaceDetectionInterfaceBase;
  using Proxy_ = FaceDetectionProxy;

  template <typename ImplRefTraits>
  using Stub_ = FaceDetectionStub<ImplRefTraits>;

  using RequestValidator_ = FaceDetectionRequestValidator;
  using ResponseValidator_ = FaceDetectionResponseValidator;
  enum MethodMinVersions : uint32_t {
    kDetectMinVersion = 0,
  };

// crbug.com/1340245 - this causes binary size bloat on Fuchsia, and we're OK
// with not having this data in traces there.
#if !BUILDFLAG(IS_FUCHSIA)
  struct Detect_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
#endif // !BUILDFLAG(IS_FUCHSIA)
  virtual ~FaceDetection() = default;


  using DetectCallback = base::OnceCallback<void(std::vector<FaceDetectionResultPtr>)>;
  
  virtual void Detect(const ::SkBitmap& bitmap_data, DetectCallback callback) = 0;
};



class  FaceDetectionProxy
    : public FaceDetection {
 public:
  using InterfaceType = FaceDetection;

  explicit FaceDetectionProxy(mojo::MessageReceiverWithResponder* receiver);
  
  void Detect(const ::SkBitmap& bitmap_data, DetectCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  FaceDetectionStubDispatch {
 public:
  static bool Accept(FaceDetection* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      FaceDetection* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<FaceDetection>>
class FaceDetectionStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  FaceDetectionStub() = default;
  ~FaceDetectionStub() override = default;

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return FaceDetectionStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return FaceDetectionStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  FaceDetectionRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  FaceDetectionResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};







class  FaceDetectorOptions {
 public:
  template <typename T>
  using EnableIfSame = std::enable_if_t<std::is_same<FaceDetectorOptions, T>::value>;
  using DataView = FaceDetectorOptionsDataView;
  using Data_ = internal::FaceDetectorOptions_Data;

  template <typename... Args>
  static FaceDetectorOptionsPtr New(Args&&... args) {
    return FaceDetectorOptionsPtr(
        absl::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static FaceDetectorOptionsPtr From(const U& u) {
    return mojo::TypeConverter<FaceDetectorOptionsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, FaceDetectorOptions>::Convert(*this);
  }


  FaceDetectorOptions();

  FaceDetectorOptions(
      uint32_t max_detected_faces,
      bool fast_mode);


  ~FaceDetectorOptions();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = FaceDetectorOptionsPtr>
  FaceDetectorOptionsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T, FaceDetectorOptions::EnableIfSame<T>* = nullptr>
  bool Equals(const T& other) const;

  template <typename T, FaceDetectorOptions::EnableIfSame<T>* = nullptr>
  bool operator==(const T& rhs) const { return Equals(rhs); }
  size_t Hash(size_t seed) const;
  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        FaceDetectorOptions::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        FaceDetectorOptions::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::FaceDetectorOptions_UnserializedMessageContext<
            UserType, FaceDetectorOptions::DataView>>(0, 0, std::move(input)),
        MOJO_CREATE_MESSAGE_FLAG_NONE);
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    mojo::Message message;
    return mojo::internal::DeserializeImpl<FaceDetectorOptions::DataView>(
        message, data, data_num_bytes, output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return FaceDetectorOptions::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::FaceDetectorOptions_UnserializedMessageContext<
            UserType, FaceDetectorOptions::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<FaceDetectorOptions::DataView>(
        input, input.payload(), input.payload_num_bytes(), output, Validate);
  }

  
  uint32_t max_detected_faces;
  
  bool fast_mode;

  // Serialise this struct into a trace.
  void WriteIntoTrace(perfetto::TracedValue traced_context) const;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

// The comparison operators are templates, so they are only instantiated if they
// are used. Thus, the bindings generator does not need to know whether
// comparison operators are available for members.
template <typename T, FaceDetectorOptions::EnableIfSame<T>* = nullptr>
bool operator<(const T& lhs, const T& rhs);

template <typename T, FaceDetectorOptions::EnableIfSame<T>* = nullptr>
bool operator<=(const T& lhs, const T& rhs) {
  return !(rhs < lhs);
}

template <typename T, FaceDetectorOptions::EnableIfSame<T>* = nullptr>
bool operator>(const T& lhs, const T& rhs) {
  return rhs < lhs;
}

template <typename T, FaceDetectorOptions::EnableIfSame<T>* = nullptr>
bool operator>=(const T& lhs, const T& rhs) {
  return !(lhs < rhs);
}







class  Landmark {
 public:
  template <typename T>
  using EnableIfSame = std::enable_if_t<std::is_same<Landmark, T>::value>;
  using DataView = LandmarkDataView;
  using Data_ = internal::Landmark_Data;

  template <typename... Args>
  static LandmarkPtr New(Args&&... args) {
    return LandmarkPtr(
        absl::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static LandmarkPtr From(const U& u) {
    return mojo::TypeConverter<LandmarkPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, Landmark>::Convert(*this);
  }


  Landmark();

  Landmark(
      std::vector<::gfx::PointF> locations,
      LandmarkType type);


  ~Landmark();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = LandmarkPtr>
  LandmarkPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T, Landmark::EnableIfSame<T>* = nullptr>
  bool Equals(const T& other) const;

  template <typename T, Landmark::EnableIfSame<T>* = nullptr>
  bool operator==(const T& rhs) const { return Equals(rhs); }
  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        Landmark::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        Landmark::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::Landmark_UnserializedMessageContext<
            UserType, Landmark::DataView>>(0, 0, std::move(input)),
        MOJO_CREATE_MESSAGE_FLAG_NONE);
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    mojo::Message message;
    return mojo::internal::DeserializeImpl<Landmark::DataView>(
        message, data, data_num_bytes, output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return Landmark::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::Landmark_UnserializedMessageContext<
            UserType, Landmark::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<Landmark::DataView>(
        input, input.payload(), input.payload_num_bytes(), output, Validate);
  }

  
  std::vector<::gfx::PointF> locations;
  
  LandmarkType type;

  // Serialise this struct into a trace.
  void WriteIntoTrace(perfetto::TracedValue traced_context) const;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

// The comparison operators are templates, so they are only instantiated if they
// are used. Thus, the bindings generator does not need to know whether
// comparison operators are available for members.
template <typename T, Landmark::EnableIfSame<T>* = nullptr>
bool operator<(const T& lhs, const T& rhs);

template <typename T, Landmark::EnableIfSame<T>* = nullptr>
bool operator<=(const T& lhs, const T& rhs) {
  return !(rhs < lhs);
}

template <typename T, Landmark::EnableIfSame<T>* = nullptr>
bool operator>(const T& lhs, const T& rhs) {
  return rhs < lhs;
}

template <typename T, Landmark::EnableIfSame<T>* = nullptr>
bool operator>=(const T& lhs, const T& rhs) {
  return !(lhs < rhs);
}





class  FaceDetectionResult {
 public:
  template <typename T>
  using EnableIfSame = std::enable_if_t<std::is_same<FaceDetectionResult, T>::value>;
  using DataView = FaceDetectionResultDataView;
  using Data_ = internal::FaceDetectionResult_Data;

  template <typename... Args>
  static FaceDetectionResultPtr New(Args&&... args) {
    return FaceDetectionResultPtr(
        absl::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static FaceDetectionResultPtr From(const U& u) {
    return mojo::TypeConverter<FaceDetectionResultPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, FaceDetectionResult>::Convert(*this);
  }


  FaceDetectionResult();

  FaceDetectionResult(
      const ::gfx::RectF& bounding_box,
      std::vector<LandmarkPtr> landmarks);

FaceDetectionResult(const FaceDetectionResult&) = delete;
FaceDetectionResult& operator=(const FaceDetectionResult&) = delete;

  ~FaceDetectionResult();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = FaceDetectionResultPtr>
  FaceDetectionResultPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T, FaceDetectionResult::EnableIfSame<T>* = nullptr>
  bool Equals(const T& other) const;

  template <typename T, FaceDetectionResult::EnableIfSame<T>* = nullptr>
  bool operator==(const T& rhs) const { return Equals(rhs); }
  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        FaceDetectionResult::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        FaceDetectionResult::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::FaceDetectionResult_UnserializedMessageContext<
            UserType, FaceDetectionResult::DataView>>(0, 0, std::move(input)),
        MOJO_CREATE_MESSAGE_FLAG_NONE);
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    mojo::Message message;
    return mojo::internal::DeserializeImpl<FaceDetectionResult::DataView>(
        message, data, data_num_bytes, output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return FaceDetectionResult::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::FaceDetectionResult_UnserializedMessageContext<
            UserType, FaceDetectionResult::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<FaceDetectionResult::DataView>(
        input, input.payload(), input.payload_num_bytes(), output, Validate);
  }

  
  ::gfx::RectF bounding_box;
  
  std::vector<LandmarkPtr> landmarks;

  // Serialise this struct into a trace.
  void WriteIntoTrace(perfetto::TracedValue traced_context) const;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

// The comparison operators are templates, so they are only instantiated if they
// are used. Thus, the bindings generator does not need to know whether
// comparison operators are available for members.
template <typename T, FaceDetectionResult::EnableIfSame<T>* = nullptr>
bool operator<(const T& lhs, const T& rhs);

template <typename T, FaceDetectionResult::EnableIfSame<T>* = nullptr>
bool operator<=(const T& lhs, const T& rhs) {
  return !(rhs < lhs);
}

template <typename T, FaceDetectionResult::EnableIfSame<T>* = nullptr>
bool operator>(const T& lhs, const T& rhs) {
  return rhs < lhs;
}

template <typename T, FaceDetectionResult::EnableIfSame<T>* = nullptr>
bool operator>=(const T& lhs, const T& rhs) {
  return !(lhs < rhs);
}


template <typename StructPtrType>
LandmarkPtr Landmark::Clone() const {
  return New(
      mojo::Clone(locations),
      mojo::Clone(type)
  );
}

template <typename T, Landmark::EnableIfSame<T>*>
bool Landmark::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->locations, other_struct.locations))
    return false;
  if (!mojo::Equals(this->type, other_struct.type))
    return false;
  return true;
}

template <typename T, Landmark::EnableIfSame<T>*>
bool operator<(const T& lhs, const T& rhs) {
  if (lhs.locations < rhs.locations)
    return true;
  if (rhs.locations < lhs.locations)
    return false;
  if (lhs.type < rhs.type)
    return true;
  if (rhs.type < lhs.type)
    return false;
  return false;
}
template <typename StructPtrType>
FaceDetectionResultPtr FaceDetectionResult::Clone() const {
  return New(
      mojo::Clone(bounding_box),
      mojo::Clone(landmarks)
  );
}

template <typename T, FaceDetectionResult::EnableIfSame<T>*>
bool FaceDetectionResult::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->bounding_box, other_struct.bounding_box))
    return false;
  if (!mojo::Equals(this->landmarks, other_struct.landmarks))
    return false;
  return true;
}

template <typename T, FaceDetectionResult::EnableIfSame<T>*>
bool operator<(const T& lhs, const T& rhs) {
  if (lhs.bounding_box < rhs.bounding_box)
    return true;
  if (rhs.bounding_box < lhs.bounding_box)
    return false;
  if (lhs.landmarks < rhs.landmarks)
    return true;
  if (rhs.landmarks < lhs.landmarks)
    return false;
  return false;
}
template <typename StructPtrType>
FaceDetectorOptionsPtr FaceDetectorOptions::Clone() const {
  return New(
      mojo::Clone(max_detected_faces),
      mojo::Clone(fast_mode)
  );
}

template <typename T, FaceDetectorOptions::EnableIfSame<T>*>
bool FaceDetectorOptions::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->max_detected_faces, other_struct.max_detected_faces))
    return false;
  if (!mojo::Equals(this->fast_mode, other_struct.fast_mode))
    return false;
  return true;
}

template <typename T, FaceDetectorOptions::EnableIfSame<T>*>
bool operator<(const T& lhs, const T& rhs) {
  if (lhs.max_detected_faces < rhs.max_detected_faces)
    return true;
  if (rhs.max_detected_faces < lhs.max_detected_faces)
    return false;
  if (lhs.fast_mode < rhs.fast_mode)
    return true;
  if (rhs.fast_mode < lhs.fast_mode)
    return false;
  return false;
}


}  // namespace mojom
}  // namespace shape_detection

namespace mojo {


template <>
struct  StructTraits<::shape_detection::mojom::Landmark::DataView,
                                         ::shape_detection::mojom::LandmarkPtr> {
  static bool IsNull(const ::shape_detection::mojom::LandmarkPtr& input) { return !input; }
  static void SetToNull(::shape_detection::mojom::LandmarkPtr* output) { output->reset(); }

  static const decltype(::shape_detection::mojom::Landmark::locations)& locations(
      const ::shape_detection::mojom::LandmarkPtr& input) {
    return input->locations;
  }

  static decltype(::shape_detection::mojom::Landmark::type) type(
      const ::shape_detection::mojom::LandmarkPtr& input) {
    return input->type;
  }

  static bool Read(::shape_detection::mojom::Landmark::DataView input, ::shape_detection::mojom::LandmarkPtr* output);
};


template <>
struct  StructTraits<::shape_detection::mojom::FaceDetectionResult::DataView,
                                         ::shape_detection::mojom::FaceDetectionResultPtr> {
  static bool IsNull(const ::shape_detection::mojom::FaceDetectionResultPtr& input) { return !input; }
  static void SetToNull(::shape_detection::mojom::FaceDetectionResultPtr* output) { output->reset(); }

  static const decltype(::shape_detection::mojom::FaceDetectionResult::bounding_box)& bounding_box(
      const ::shape_detection::mojom::FaceDetectionResultPtr& input) {
    return input->bounding_box;
  }

  static const decltype(::shape_detection::mojom::FaceDetectionResult::landmarks)& landmarks(
      const ::shape_detection::mojom::FaceDetectionResultPtr& input) {
    return input->landmarks;
  }

  static bool Read(::shape_detection::mojom::FaceDetectionResult::DataView input, ::shape_detection::mojom::FaceDetectionResultPtr* output);
};


template <>
struct  StructTraits<::shape_detection::mojom::FaceDetectorOptions::DataView,
                                         ::shape_detection::mojom::FaceDetectorOptionsPtr> {
  static bool IsNull(const ::shape_detection::mojom::FaceDetectorOptionsPtr& input) { return !input; }
  static void SetToNull(::shape_detection::mojom::FaceDetectorOptionsPtr* output) { output->reset(); }

  static decltype(::shape_detection::mojom::FaceDetectorOptions::max_detected_faces) max_detected_faces(
      const ::shape_detection::mojom::FaceDetectorOptionsPtr& input) {
    return input->max_detected_faces;
  }

  static decltype(::shape_detection::mojom::FaceDetectorOptions::fast_mode) fast_mode(
      const ::shape_detection::mojom::FaceDetectorOptionsPtr& input) {
    return input->fast_mode;
  }

  static bool Read(::shape_detection::mojom::FaceDetectorOptions::DataView input, ::shape_detection::mojom::FaceDetectorOptionsPtr* output);
};

}  // namespace mojo

#endif  // SERVICES_SHAPE_DETECTION_PUBLIC_MOJOM_FACEDETECTION_MOJOM_H_