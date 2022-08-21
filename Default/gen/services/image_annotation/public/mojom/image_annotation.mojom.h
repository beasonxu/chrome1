// services/image_annotation/public/mojom/image_annotation.mojom.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_IMAGE_ANNOTATION_PUBLIC_MOJOM_IMAGE_ANNOTATION_MOJOM_H_
#define SERVICES_IMAGE_ANNOTATION_PUBLIC_MOJOM_IMAGE_ANNOTATION_MOJOM_H_

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

#include "services/image_annotation/public/mojom/image_annotation.mojom-shared.h"
#include "services/image_annotation/public/mojom/image_annotation.mojom-forward.h"
#include <string>
#include <vector>

#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/raw_ptr_impl_ref_traits.h"






namespace image_annotation {
namespace mojom {

class ImageProcessorProxy;

template <typename ImplRefTraits>
class ImageProcessorStub;

class ImageProcessorRequestValidator;
class ImageProcessorResponseValidator;


class  ImageProcessor
    : public ImageProcessorInterfaceBase {
 public:
  using IPCStableHashFunction = uint32_t(*)();

  static const char Name_[];
  static IPCStableHashFunction MessageToMethodInfo_(mojo::Message& message);
  static const char* MessageToMethodName_(mojo::Message& message);
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;
  static constexpr bool HasUninterruptableMethods_ = false;

  using Base_ = ImageProcessorInterfaceBase;
  using Proxy_ = ImageProcessorProxy;

  template <typename ImplRefTraits>
  using Stub_ = ImageProcessorStub<ImplRefTraits>;

  using RequestValidator_ = ImageProcessorRequestValidator;
  using ResponseValidator_ = ImageProcessorResponseValidator;
  enum MethodMinVersions : uint32_t {
    kGetJpgImageDataMinVersion = 0,
  };

// crbug.com/1340245 - this causes binary size bloat on Fuchsia, and we're OK
// with not having this data in traces there.
#if !BUILDFLAG(IS_FUCHSIA)
  struct GetJpgImageData_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
#endif // !BUILDFLAG(IS_FUCHSIA)
  virtual ~ImageProcessor() = default;


  using GetJpgImageDataCallback = base::OnceCallback<void(const std::vector<uint8_t>&, int32_t, int32_t)>;
  
  virtual void GetJpgImageData(GetJpgImageDataCallback callback) = 0;
};

class AnnotatorProxy;

template <typename ImplRefTraits>
class AnnotatorStub;

class AnnotatorRequestValidator;
class AnnotatorResponseValidator;


class  Annotator
    : public AnnotatorInterfaceBase {
 public:
  using IPCStableHashFunction = uint32_t(*)();

  static const char Name_[];
  static IPCStableHashFunction MessageToMethodInfo_(mojo::Message& message);
  static const char* MessageToMethodName_(mojo::Message& message);
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;
  static constexpr bool HasUninterruptableMethods_ = false;

  using Base_ = AnnotatorInterfaceBase;
  using Proxy_ = AnnotatorProxy;

  template <typename ImplRefTraits>
  using Stub_ = AnnotatorStub<ImplRefTraits>;

  using RequestValidator_ = AnnotatorRequestValidator;
  using ResponseValidator_ = AnnotatorResponseValidator;
  enum MethodMinVersions : uint32_t {
    kAnnotateImageMinVersion = 0,
  };

// crbug.com/1340245 - this causes binary size bloat on Fuchsia, and we're OK
// with not having this data in traces there.
#if !BUILDFLAG(IS_FUCHSIA)
  struct AnnotateImage_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
#endif // !BUILDFLAG(IS_FUCHSIA)
  virtual ~Annotator() = default;


  using AnnotateImageCallback = base::OnceCallback<void(AnnotateImageResultPtr)>;
  
  virtual void AnnotateImage(const std::string& source_id, const std::string& description_language_tag, ::mojo::PendingRemote<ImageProcessor> image_processor, AnnotateImageCallback callback) = 0;
};

class ImageAnnotationServiceProxy;

template <typename ImplRefTraits>
class ImageAnnotationServiceStub;

class ImageAnnotationServiceRequestValidator;


class  ImageAnnotationService
    : public ImageAnnotationServiceInterfaceBase {
 public:
  using IPCStableHashFunction = uint32_t(*)();

  static const char Name_[];
  static IPCStableHashFunction MessageToMethodInfo_(mojo::Message& message);
  static const char* MessageToMethodName_(mojo::Message& message);
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;
  static constexpr bool HasUninterruptableMethods_ = false;

  using Base_ = ImageAnnotationServiceInterfaceBase;
  using Proxy_ = ImageAnnotationServiceProxy;

  template <typename ImplRefTraits>
  using Stub_ = ImageAnnotationServiceStub<ImplRefTraits>;

  using RequestValidator_ = ImageAnnotationServiceRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kBindAnnotatorMinVersion = 0,
  };

// crbug.com/1340245 - this causes binary size bloat on Fuchsia, and we're OK
// with not having this data in traces there.
#if !BUILDFLAG(IS_FUCHSIA)
  struct BindAnnotator_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
#endif // !BUILDFLAG(IS_FUCHSIA)
  virtual ~ImageAnnotationService() = default;

  
  virtual void BindAnnotator(::mojo::PendingReceiver<Annotator> receiver) = 0;
};



class  ImageProcessorProxy
    : public ImageProcessor {
 public:
  using InterfaceType = ImageProcessor;

  explicit ImageProcessorProxy(mojo::MessageReceiverWithResponder* receiver);
  
  void GetJpgImageData(GetJpgImageDataCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};



class  AnnotatorProxy
    : public Annotator {
 public:
  using InterfaceType = Annotator;

  explicit AnnotatorProxy(mojo::MessageReceiverWithResponder* receiver);
  
  void AnnotateImage(const std::string& source_id, const std::string& description_language_tag, ::mojo::PendingRemote<ImageProcessor> image_processor, AnnotateImageCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};



class  ImageAnnotationServiceProxy
    : public ImageAnnotationService {
 public:
  using InterfaceType = ImageAnnotationService;

  explicit ImageAnnotationServiceProxy(mojo::MessageReceiverWithResponder* receiver);
  
  void BindAnnotator(::mojo::PendingReceiver<Annotator> receiver) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  ImageProcessorStubDispatch {
 public:
  static bool Accept(ImageProcessor* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      ImageProcessor* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<ImageProcessor>>
class ImageProcessorStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  ImageProcessorStub() = default;
  ~ImageProcessorStub() override = default;

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ImageProcessorStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ImageProcessorStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  AnnotatorStubDispatch {
 public:
  static bool Accept(Annotator* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      Annotator* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<Annotator>>
class AnnotatorStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  AnnotatorStub() = default;
  ~AnnotatorStub() override = default;

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return AnnotatorStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return AnnotatorStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  ImageAnnotationServiceStubDispatch {
 public:
  static bool Accept(ImageAnnotationService* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      ImageAnnotationService* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<ImageAnnotationService>>
class ImageAnnotationServiceStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  ImageAnnotationServiceStub() = default;
  ~ImageAnnotationServiceStub() override = default;

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ImageAnnotationServiceStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ImageAnnotationServiceStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  ImageProcessorRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  AnnotatorRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  ImageAnnotationServiceRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  ImageProcessorResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  AnnotatorResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





class  Annotation {
 public:
  template <typename T>
  using EnableIfSame = std::enable_if_t<std::is_same<Annotation, T>::value>;
  using DataView = AnnotationDataView;
  using Data_ = internal::Annotation_Data;

  template <typename... Args>
  static AnnotationPtr New(Args&&... args) {
    return AnnotationPtr(
        absl::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static AnnotationPtr From(const U& u) {
    return mojo::TypeConverter<AnnotationPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, Annotation>::Convert(*this);
  }


  Annotation();

  Annotation(
      AnnotationType type,
      double score,
      const std::string& text);


  ~Annotation();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = AnnotationPtr>
  AnnotationPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T, Annotation::EnableIfSame<T>* = nullptr>
  bool Equals(const T& other) const;

  template <typename T, Annotation::EnableIfSame<T>* = nullptr>
  bool operator==(const T& rhs) const { return Equals(rhs); }
  size_t Hash(size_t seed) const;
  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        Annotation::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        Annotation::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::Annotation_UnserializedMessageContext<
            UserType, Annotation::DataView>>(0, 0, std::move(input)),
        MOJO_CREATE_MESSAGE_FLAG_NONE);
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    mojo::Message message;
    return mojo::internal::DeserializeImpl<Annotation::DataView>(
        message, data, data_num_bytes, output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return Annotation::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::Annotation_UnserializedMessageContext<
            UserType, Annotation::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<Annotation::DataView>(
        input, input.payload(), input.payload_num_bytes(), output, Validate);
  }

  
  AnnotationType type;
  
  double score;
  
  std::string text;

  // Serialise this struct into a trace.
  void WriteIntoTrace(perfetto::TracedValue traced_context) const;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

// The comparison operators are templates, so they are only instantiated if they
// are used. Thus, the bindings generator does not need to know whether
// comparison operators are available for members.
template <typename T, Annotation::EnableIfSame<T>* = nullptr>
bool operator<(const T& lhs, const T& rhs);

template <typename T, Annotation::EnableIfSame<T>* = nullptr>
bool operator<=(const T& lhs, const T& rhs) {
  return !(rhs < lhs);
}

template <typename T, Annotation::EnableIfSame<T>* = nullptr>
bool operator>(const T& lhs, const T& rhs) {
  return rhs < lhs;
}

template <typename T, Annotation::EnableIfSame<T>* = nullptr>
bool operator>=(const T& lhs, const T& rhs) {
  return !(lhs < rhs);
}





class  AnnotateImageResult {
 public:
  using DataView = AnnotateImageResultDataView;
  using Data_ = internal::AnnotateImageResult_Data;
  using Tag = Data_::AnnotateImageResult_Tag;

  template <typename... Args>
  static AnnotateImageResultPtr New(Args&&... args) {
    static_assert(
        sizeof...(args) < 0,
        "Do not use Union::New(); to create a union of a given subtype, use "
        "New<SubType>(), not New() followed by set_<sub_type>(). To represent "
        "an empty union, mark the field or parameter as nullable in the mojom "
        "definition.");
  }
  // Construct an instance holding |error_code|.
  static AnnotateImageResultPtr
  NewErrorCode(
      AnnotateImageError error_code) {
    auto result = AnnotateImageResultPtr(absl::in_place);
    result->set_error_code(std::move(error_code));
    return result;
  }
  // Construct an instance holding |annotations|.
  static AnnotateImageResultPtr
  NewAnnotations(
      std::vector<AnnotationPtr> annotations) {
    auto result = AnnotateImageResultPtr(absl::in_place);
    result->set_annotations(std::move(annotations));
    return result;
  }

  template <typename U>
  static AnnotateImageResultPtr From(const U& u) {
    return mojo::TypeConverter<AnnotateImageResultPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, AnnotateImageResult>::Convert(*this);
  }

  AnnotateImageResult();
  ~AnnotateImageResult();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename UnionPtrType = AnnotateImageResultPtr>
  AnnotateImageResultPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, AnnotateImageResult>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename T,
            typename std::enable_if<std::is_same<
                T, AnnotateImageResult>::value>::type* = nullptr>
  bool operator==(const T& rhs) const { return Equals(rhs); }

  Tag which() const {
    return tag_;
  }


  
  bool is_error_code() const { return tag_ == Tag::kErrorCode; }

  
  AnnotateImageError get_error_code() const {
    CHECK(tag_ == Tag::kErrorCode);
    return data_.error_code;
  }

  
  void set_error_code(
      AnnotateImageError error_code);
  
  bool is_annotations() const { return tag_ == Tag::kAnnotations; }

  
  std::vector<AnnotationPtr>& get_annotations() const {
    CHECK(tag_ == Tag::kAnnotations);
    return *(data_.annotations);
  }

  
  void set_annotations(
      std::vector<AnnotationPtr> annotations);

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        AnnotateImageResult::DataView>(input);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    return mojo::internal::DeserializeImpl<AnnotateImageResult::DataView>(
        input, input.payload(), input.payload_num_bytes(), output, Validate);
  }

 private:
  union Union_ {
    Union_() = default;
    ~Union_() = default;
    AnnotateImageError error_code;
    std::vector<AnnotationPtr>* annotations;
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  void DestroyActive();
  Tag tag_;
  Union_ data_;
};


template <typename UnionPtrType>
AnnotateImageResultPtr AnnotateImageResult::Clone() const {
  switch (tag_) {
    case Tag::kErrorCode:
      return NewErrorCode(
          mojo::Clone(data_.error_code));
    case Tag::kAnnotations:
      return NewAnnotations(
          mojo::Clone(*data_.annotations));
  }
  return nullptr;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, AnnotateImageResult>::value>::type*>
bool AnnotateImageResult::Equals(const T& other) const {
  if (tag_ != other.which())
    return false;

  switch (tag_) {
    case Tag::kErrorCode:
      return mojo::Equals(data_.error_code, other.data_.error_code);
    case Tag::kAnnotations:
      return mojo::Equals(*(data_.annotations), *(other.data_.annotations));
  }

  return false;
}
template <typename StructPtrType>
AnnotationPtr Annotation::Clone() const {
  return New(
      mojo::Clone(type),
      mojo::Clone(score),
      mojo::Clone(text)
  );
}

template <typename T, Annotation::EnableIfSame<T>*>
bool Annotation::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->type, other_struct.type))
    return false;
  if (!mojo::Equals(this->score, other_struct.score))
    return false;
  if (!mojo::Equals(this->text, other_struct.text))
    return false;
  return true;
}

template <typename T, Annotation::EnableIfSame<T>*>
bool operator<(const T& lhs, const T& rhs) {
  if (lhs.type < rhs.type)
    return true;
  if (rhs.type < lhs.type)
    return false;
  if (lhs.score < rhs.score)
    return true;
  if (rhs.score < lhs.score)
    return false;
  if (lhs.text < rhs.text)
    return true;
  if (rhs.text < lhs.text)
    return false;
  return false;
}


}  // namespace mojom
}  // namespace image_annotation

namespace mojo {


template <>
struct  StructTraits<::image_annotation::mojom::Annotation::DataView,
                                         ::image_annotation::mojom::AnnotationPtr> {
  static bool IsNull(const ::image_annotation::mojom::AnnotationPtr& input) { return !input; }
  static void SetToNull(::image_annotation::mojom::AnnotationPtr* output) { output->reset(); }

  static decltype(::image_annotation::mojom::Annotation::type) type(
      const ::image_annotation::mojom::AnnotationPtr& input) {
    return input->type;
  }

  static decltype(::image_annotation::mojom::Annotation::score) score(
      const ::image_annotation::mojom::AnnotationPtr& input) {
    return input->score;
  }

  static const decltype(::image_annotation::mojom::Annotation::text)& text(
      const ::image_annotation::mojom::AnnotationPtr& input) {
    return input->text;
  }

  static bool Read(::image_annotation::mojom::Annotation::DataView input, ::image_annotation::mojom::AnnotationPtr* output);
};


template <>
struct  UnionTraits<::image_annotation::mojom::AnnotateImageResult::DataView,
                                        ::image_annotation::mojom::AnnotateImageResultPtr> {
  static bool IsNull(const ::image_annotation::mojom::AnnotateImageResultPtr& input) { return !input; }
  static void SetToNull(::image_annotation::mojom::AnnotateImageResultPtr* output) { output->reset(); }

  static ::image_annotation::mojom::AnnotateImageResult::Tag GetTag(const ::image_annotation::mojom::AnnotateImageResultPtr& input) {
    return input->which();
  }

  static  ::image_annotation::mojom::AnnotateImageError error_code(const ::image_annotation::mojom::AnnotateImageResultPtr& input) {
    return input->get_error_code();
  }

  static const std::vector<::image_annotation::mojom::AnnotationPtr>& annotations(const ::image_annotation::mojom::AnnotateImageResultPtr& input) {
    return input->get_annotations();
  }

  static bool Read(::image_annotation::mojom::AnnotateImageResult::DataView input, ::image_annotation::mojom::AnnotateImageResultPtr* output);
};

}  // namespace mojo

#endif  // SERVICES_IMAGE_ANNOTATION_PUBLIC_MOJOM_IMAGE_ANNOTATION_MOJOM_H_