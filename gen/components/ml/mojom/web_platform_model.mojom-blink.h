// components/ml/mojom/web_platform_model.mojom-blink.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_ML_MOJOM_WEB_PLATFORM_MODEL_MOJOM_BLINK_H_
#define COMPONENTS_ML_MOJOM_WEB_PLATFORM_MODEL_MOJOM_BLINK_H_

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

#include "components/ml/mojom/web_platform_model.mojom-shared.h"
#include "components/ml/mojom/web_platform_model.mojom-blink-forward.h"
#include "mojo/public/mojom/base/big_buffer.mojom-blink.h"

#include "mojo/public/cpp/bindings/lib/wtf_clone_equals_util.h"
#include "mojo/public/cpp/bindings/lib/wtf_hash_util.h"
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/raw_ptr_impl_ref_traits.h"






namespace WTF {
struct ml_model_loader_mojom_internal_ModelFormat_DataHashFn {
  static unsigned GetHash(const ::ml::model_loader::mojom::ModelFormat& value) {
    using utype = std::underlying_type<::ml::model_loader::mojom::ModelFormat>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::ml::model_loader::mojom::ModelFormat& left, const ::ml::model_loader::mojom::ModelFormat& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::ml::model_loader::mojom::ModelFormat>
    : public GenericHashTraits<::ml::model_loader::mojom::ModelFormat> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool kEmptyValueIsZero = false;
  static ::ml::model_loader::mojom::ModelFormat EmptyValue() { return static_cast<::ml::model_loader::mojom::ModelFormat>(-1000000); }
  static void ConstructDeletedValue(::ml::model_loader::mojom::ModelFormat& slot, bool) {
    slot = static_cast<::ml::model_loader::mojom::ModelFormat>(-1000001);
  }
  static bool IsDeletedValue(const ::ml::model_loader::mojom::ModelFormat& value) {
    return value == static_cast<::ml::model_loader::mojom::ModelFormat>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct ml_model_loader_mojom_internal_DevicePreference_DataHashFn {
  static unsigned GetHash(const ::ml::model_loader::mojom::DevicePreference& value) {
    using utype = std::underlying_type<::ml::model_loader::mojom::DevicePreference>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::ml::model_loader::mojom::DevicePreference& left, const ::ml::model_loader::mojom::DevicePreference& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::ml::model_loader::mojom::DevicePreference>
    : public GenericHashTraits<::ml::model_loader::mojom::DevicePreference> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool kEmptyValueIsZero = false;
  static ::ml::model_loader::mojom::DevicePreference EmptyValue() { return static_cast<::ml::model_loader::mojom::DevicePreference>(-1000000); }
  static void ConstructDeletedValue(::ml::model_loader::mojom::DevicePreference& slot, bool) {
    slot = static_cast<::ml::model_loader::mojom::DevicePreference>(-1000001);
  }
  static bool IsDeletedValue(const ::ml::model_loader::mojom::DevicePreference& value) {
    return value == static_cast<::ml::model_loader::mojom::DevicePreference>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct ml_model_loader_mojom_internal_DataType_DataHashFn {
  static unsigned GetHash(const ::ml::model_loader::mojom::DataType& value) {
    using utype = std::underlying_type<::ml::model_loader::mojom::DataType>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::ml::model_loader::mojom::DataType& left, const ::ml::model_loader::mojom::DataType& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::ml::model_loader::mojom::DataType>
    : public GenericHashTraits<::ml::model_loader::mojom::DataType> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool kEmptyValueIsZero = false;
  static ::ml::model_loader::mojom::DataType EmptyValue() { return static_cast<::ml::model_loader::mojom::DataType>(-1000000); }
  static void ConstructDeletedValue(::ml::model_loader::mojom::DataType& slot, bool) {
    slot = static_cast<::ml::model_loader::mojom::DataType>(-1000001);
  }
  static bool IsDeletedValue(const ::ml::model_loader::mojom::DataType& value) {
    return value == static_cast<::ml::model_loader::mojom::DataType>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct ml_model_loader_mojom_internal_LoadModelResult_DataHashFn {
  static unsigned GetHash(const ::ml::model_loader::mojom::LoadModelResult& value) {
    using utype = std::underlying_type<::ml::model_loader::mojom::LoadModelResult>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::ml::model_loader::mojom::LoadModelResult& left, const ::ml::model_loader::mojom::LoadModelResult& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::ml::model_loader::mojom::LoadModelResult>
    : public GenericHashTraits<::ml::model_loader::mojom::LoadModelResult> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool kEmptyValueIsZero = false;
  static ::ml::model_loader::mojom::LoadModelResult EmptyValue() { return static_cast<::ml::model_loader::mojom::LoadModelResult>(-1000000); }
  static void ConstructDeletedValue(::ml::model_loader::mojom::LoadModelResult& slot, bool) {
    slot = static_cast<::ml::model_loader::mojom::LoadModelResult>(-1000001);
  }
  static bool IsDeletedValue(const ::ml::model_loader::mojom::LoadModelResult& value) {
    return value == static_cast<::ml::model_loader::mojom::LoadModelResult>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct ml_model_loader_mojom_internal_CreateModelLoaderResult_DataHashFn {
  static unsigned GetHash(const ::ml::model_loader::mojom::CreateModelLoaderResult& value) {
    using utype = std::underlying_type<::ml::model_loader::mojom::CreateModelLoaderResult>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::ml::model_loader::mojom::CreateModelLoaderResult& left, const ::ml::model_loader::mojom::CreateModelLoaderResult& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::ml::model_loader::mojom::CreateModelLoaderResult>
    : public GenericHashTraits<::ml::model_loader::mojom::CreateModelLoaderResult> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool kEmptyValueIsZero = false;
  static ::ml::model_loader::mojom::CreateModelLoaderResult EmptyValue() { return static_cast<::ml::model_loader::mojom::CreateModelLoaderResult>(-1000000); }
  static void ConstructDeletedValue(::ml::model_loader::mojom::CreateModelLoaderResult& slot, bool) {
    slot = static_cast<::ml::model_loader::mojom::CreateModelLoaderResult>(-1000001);
  }
  static bool IsDeletedValue(const ::ml::model_loader::mojom::CreateModelLoaderResult& value) {
    return value == static_cast<::ml::model_loader::mojom::CreateModelLoaderResult>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct ml_model_loader_mojom_internal_ComputeResult_DataHashFn {
  static unsigned GetHash(const ::ml::model_loader::mojom::ComputeResult& value) {
    using utype = std::underlying_type<::ml::model_loader::mojom::ComputeResult>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::ml::model_loader::mojom::ComputeResult& left, const ::ml::model_loader::mojom::ComputeResult& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::ml::model_loader::mojom::ComputeResult>
    : public GenericHashTraits<::ml::model_loader::mojom::ComputeResult> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool kEmptyValueIsZero = false;
  static ::ml::model_loader::mojom::ComputeResult EmptyValue() { return static_cast<::ml::model_loader::mojom::ComputeResult>(-1000000); }
  static void ConstructDeletedValue(::ml::model_loader::mojom::ComputeResult& slot, bool) {
    slot = static_cast<::ml::model_loader::mojom::ComputeResult>(-1000001);
  }
  static bool IsDeletedValue(const ::ml::model_loader::mojom::ComputeResult& value) {
    return value == static_cast<::ml::model_loader::mojom::ComputeResult>(-1000001);
  }
};
}  // namespace WTF


namespace ml {
namespace model_loader {
namespace mojom {
namespace blink {

class ModelLoaderProxy;

template <typename ImplRefTraits>
class ModelLoaderStub;

class ModelLoaderRequestValidator;
class ModelLoaderResponseValidator;


class  ModelLoader
    : public ModelLoaderInterfaceBase {
 public:
  using IPCStableHashFunction = uint32_t(*)();

  static const char Name_[];
  static IPCStableHashFunction MessageToMethodInfo_(mojo::Message& message);
  static const char* MessageToMethodName_(mojo::Message& message);
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;
  static constexpr bool HasUninterruptableMethods_ = false;

  using Base_ = ModelLoaderInterfaceBase;
  using Proxy_ = ModelLoaderProxy;

  template <typename ImplRefTraits>
  using Stub_ = ModelLoaderStub<ImplRefTraits>;

  using RequestValidator_ = ModelLoaderRequestValidator;
  using ResponseValidator_ = ModelLoaderResponseValidator;
  enum MethodMinVersions : uint32_t {
    kLoadMinVersion = 0,
  };

// crbug.com/1340245 - this causes binary size bloat on Fuchsia, and we're OK
// with not having this data in traces there.
#if !BUILDFLAG(IS_FUCHSIA)
  struct Load_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
#endif // !BUILDFLAG(IS_FUCHSIA)
  virtual ~ModelLoader() = default;


  using LoadCallback = base::OnceCallback<void(LoadModelResult, ::mojo::PendingRemote<Model>, ModelInfoPtr)>;
  
  virtual void Load(::mojo_base::BigBuffer model_content, LoadCallback callback) = 0;
};

class ModelProxy;

template <typename ImplRefTraits>
class ModelStub;

class ModelRequestValidator;
class ModelResponseValidator;


class  Model
    : public ModelInterfaceBase {
 public:
  using IPCStableHashFunction = uint32_t(*)();

  static const char Name_[];
  static IPCStableHashFunction MessageToMethodInfo_(mojo::Message& message);
  static const char* MessageToMethodName_(mojo::Message& message);
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;
  static constexpr bool HasUninterruptableMethods_ = false;

  using Base_ = ModelInterfaceBase;
  using Proxy_ = ModelProxy;

  template <typename ImplRefTraits>
  using Stub_ = ModelStub<ImplRefTraits>;

  using RequestValidator_ = ModelRequestValidator;
  using ResponseValidator_ = ModelResponseValidator;
  enum MethodMinVersions : uint32_t {
    kComputeMinVersion = 0,
  };

// crbug.com/1340245 - this causes binary size bloat on Fuchsia, and we're OK
// with not having this data in traces there.
#if !BUILDFLAG(IS_FUCHSIA)
  struct Compute_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
#endif // !BUILDFLAG(IS_FUCHSIA)
  virtual ~Model() = default;


  using ComputeCallback = base::OnceCallback<void(ComputeResult, const absl::optional<WTF::HashMap<WTF::String, WTF::Vector<uint8_t>>>&)>;
  
  virtual void Compute(const WTF::HashMap<WTF::String, WTF::Vector<uint8_t>>& input_tensors, ComputeCallback callback) = 0;
};



class  ModelLoaderProxy
    : public ModelLoader {
 public:
  using InterfaceType = ModelLoader;

  explicit ModelLoaderProxy(mojo::MessageReceiverWithResponder* receiver);
  
  void Load(::mojo_base::BigBuffer model_content, LoadCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};



class  ModelProxy
    : public Model {
 public:
  using InterfaceType = Model;

  explicit ModelProxy(mojo::MessageReceiverWithResponder* receiver);
  
  void Compute(const WTF::HashMap<WTF::String, WTF::Vector<uint8_t>>& input_tensors, ComputeCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  ModelLoaderStubDispatch {
 public:
  static bool Accept(ModelLoader* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      ModelLoader* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<ModelLoader>>
class ModelLoaderStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  ModelLoaderStub() = default;
  ~ModelLoaderStub() override = default;

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ModelLoaderStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ModelLoaderStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  ModelStubDispatch {
 public:
  static bool Accept(Model* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      Model* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<Model>>
class ModelStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  ModelStub() = default;
  ~ModelStub() override = default;

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ModelStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ModelStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  ModelLoaderRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  ModelRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  ModelLoaderResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  ModelResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





class  CreateModelLoaderOptions {
 public:
  template <typename T>
  using EnableIfSame = std::enable_if_t<std::is_same<CreateModelLoaderOptions, T>::value>;
  using DataView = CreateModelLoaderOptionsDataView;
  using Data_ = internal::CreateModelLoaderOptions_Data;

  template <typename... Args>
  static CreateModelLoaderOptionsPtr New(Args&&... args) {
    return CreateModelLoaderOptionsPtr(
        absl::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static CreateModelLoaderOptionsPtr From(const U& u) {
    return mojo::TypeConverter<CreateModelLoaderOptionsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, CreateModelLoaderOptions>::Convert(*this);
  }


  CreateModelLoaderOptions();

  CreateModelLoaderOptions(
      uint32_t num_threads,
      ModelFormat model_format,
      DevicePreference device_preference);


  ~CreateModelLoaderOptions();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = CreateModelLoaderOptionsPtr>
  CreateModelLoaderOptionsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T, CreateModelLoaderOptions::EnableIfSame<T>* = nullptr>
  bool Equals(const T& other) const;

  template <typename T, CreateModelLoaderOptions::EnableIfSame<T>* = nullptr>
  bool operator==(const T& rhs) const { return Equals(rhs); }
  size_t Hash(size_t seed) const;
  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        CreateModelLoaderOptions::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        CreateModelLoaderOptions::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::CreateModelLoaderOptions_UnserializedMessageContext<
            UserType, CreateModelLoaderOptions::DataView>>(0, 0, std::move(input)),
        MOJO_CREATE_MESSAGE_FLAG_NONE);
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    mojo::Message message;
    return mojo::internal::DeserializeImpl<CreateModelLoaderOptions::DataView>(
        message, data, data_num_bytes, output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return CreateModelLoaderOptions::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::CreateModelLoaderOptions_UnserializedMessageContext<
            UserType, CreateModelLoaderOptions::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<CreateModelLoaderOptions::DataView>(
        input, input.payload(), input.payload_num_bytes(), output, Validate);
  }

  
  uint32_t num_threads;
  
  ModelFormat model_format;
  
  DevicePreference device_preference;

  // Serialise this struct into a trace.
  void WriteIntoTrace(perfetto::TracedValue traced_context) const;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

// The comparison operators are templates, so they are only instantiated if they
// are used. Thus, the bindings generator does not need to know whether
// comparison operators are available for members.
template <typename T, CreateModelLoaderOptions::EnableIfSame<T>* = nullptr>
bool operator<(const T& lhs, const T& rhs);

template <typename T, CreateModelLoaderOptions::EnableIfSame<T>* = nullptr>
bool operator<=(const T& lhs, const T& rhs) {
  return !(rhs < lhs);
}

template <typename T, CreateModelLoaderOptions::EnableIfSame<T>* = nullptr>
bool operator>(const T& lhs, const T& rhs) {
  return rhs < lhs;
}

template <typename T, CreateModelLoaderOptions::EnableIfSame<T>* = nullptr>
bool operator>=(const T& lhs, const T& rhs) {
  return !(lhs < rhs);
}










class  TensorInfo {
 public:
  template <typename T>
  using EnableIfSame = std::enable_if_t<std::is_same<TensorInfo, T>::value>;
  using DataView = TensorInfoDataView;
  using Data_ = internal::TensorInfo_Data;

  template <typename... Args>
  static TensorInfoPtr New(Args&&... args) {
    return TensorInfoPtr(
        absl::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static TensorInfoPtr From(const U& u) {
    return mojo::TypeConverter<TensorInfoPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, TensorInfo>::Convert(*this);
  }


  TensorInfo();

  TensorInfo(
      uint32_t byte_size,
      DataType data_type,
      WTF::Vector<uint32_t> dimensions);


  ~TensorInfo();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = TensorInfoPtr>
  TensorInfoPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T, TensorInfo::EnableIfSame<T>* = nullptr>
  bool Equals(const T& other) const;

  template <typename T, TensorInfo::EnableIfSame<T>* = nullptr>
  bool operator==(const T& rhs) const { return Equals(rhs); }
  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        TensorInfo::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        TensorInfo::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::TensorInfo_UnserializedMessageContext<
            UserType, TensorInfo::DataView>>(0, 0, std::move(input)),
        MOJO_CREATE_MESSAGE_FLAG_NONE);
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    mojo::Message message;
    return mojo::internal::DeserializeImpl<TensorInfo::DataView>(
        message, data, data_num_bytes, output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return TensorInfo::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::TensorInfo_UnserializedMessageContext<
            UserType, TensorInfo::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<TensorInfo::DataView>(
        input, input.payload(), input.payload_num_bytes(), output, Validate);
  }

  
  uint32_t byte_size;
  
  DataType data_type;
  
  WTF::Vector<uint32_t> dimensions;

  // Serialise this struct into a trace.
  void WriteIntoTrace(perfetto::TracedValue traced_context) const;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

// The comparison operators are templates, so they are only instantiated if they
// are used. Thus, the bindings generator does not need to know whether
// comparison operators are available for members.
template <typename T, TensorInfo::EnableIfSame<T>* = nullptr>
bool operator<(const T& lhs, const T& rhs);

template <typename T, TensorInfo::EnableIfSame<T>* = nullptr>
bool operator<=(const T& lhs, const T& rhs) {
  return !(rhs < lhs);
}

template <typename T, TensorInfo::EnableIfSame<T>* = nullptr>
bool operator>(const T& lhs, const T& rhs) {
  return rhs < lhs;
}

template <typename T, TensorInfo::EnableIfSame<T>* = nullptr>
bool operator>=(const T& lhs, const T& rhs) {
  return !(lhs < rhs);
}





class  ModelInfo {
 public:
  template <typename T>
  using EnableIfSame = std::enable_if_t<std::is_same<ModelInfo, T>::value>;
  using DataView = ModelInfoDataView;
  using Data_ = internal::ModelInfo_Data;

  template <typename... Args>
  static ModelInfoPtr New(Args&&... args) {
    return ModelInfoPtr(
        absl::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static ModelInfoPtr From(const U& u) {
    return mojo::TypeConverter<ModelInfoPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, ModelInfo>::Convert(*this);
  }


  ModelInfo();

  ModelInfo(
      WTF::HashMap<WTF::String, TensorInfoPtr> input_tensor_info,
      WTF::HashMap<WTF::String, TensorInfoPtr> output_tensor_info);

ModelInfo(const ModelInfo&) = delete;
ModelInfo& operator=(const ModelInfo&) = delete;

  ~ModelInfo();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = ModelInfoPtr>
  ModelInfoPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T, ModelInfo::EnableIfSame<T>* = nullptr>
  bool Equals(const T& other) const;

  template <typename T, ModelInfo::EnableIfSame<T>* = nullptr>
  bool operator==(const T& rhs) const { return Equals(rhs); }
  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        ModelInfo::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        ModelInfo::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::ModelInfo_UnserializedMessageContext<
            UserType, ModelInfo::DataView>>(0, 0, std::move(input)),
        MOJO_CREATE_MESSAGE_FLAG_NONE);
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    mojo::Message message;
    return mojo::internal::DeserializeImpl<ModelInfo::DataView>(
        message, data, data_num_bytes, output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return ModelInfo::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::ModelInfo_UnserializedMessageContext<
            UserType, ModelInfo::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<ModelInfo::DataView>(
        input, input.payload(), input.payload_num_bytes(), output, Validate);
  }

  
  WTF::HashMap<WTF::String, TensorInfoPtr> input_tensor_info;
  
  WTF::HashMap<WTF::String, TensorInfoPtr> output_tensor_info;

  // Serialise this struct into a trace.
  void WriteIntoTrace(perfetto::TracedValue traced_context) const;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

// The comparison operators are templates, so they are only instantiated if they
// are used. Thus, the bindings generator does not need to know whether
// comparison operators are available for members.
template <typename T, ModelInfo::EnableIfSame<T>* = nullptr>
bool operator<(const T& lhs, const T& rhs);

template <typename T, ModelInfo::EnableIfSame<T>* = nullptr>
bool operator<=(const T& lhs, const T& rhs) {
  return !(rhs < lhs);
}

template <typename T, ModelInfo::EnableIfSame<T>* = nullptr>
bool operator>(const T& lhs, const T& rhs) {
  return rhs < lhs;
}

template <typename T, ModelInfo::EnableIfSame<T>* = nullptr>
bool operator>=(const T& lhs, const T& rhs) {
  return !(lhs < rhs);
}

template <typename StructPtrType>
CreateModelLoaderOptionsPtr CreateModelLoaderOptions::Clone() const {
  return New(
      mojo::Clone(num_threads),
      mojo::Clone(model_format),
      mojo::Clone(device_preference)
  );
}

template <typename T, CreateModelLoaderOptions::EnableIfSame<T>*>
bool CreateModelLoaderOptions::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->num_threads, other_struct.num_threads))
    return false;
  if (!mojo::Equals(this->model_format, other_struct.model_format))
    return false;
  if (!mojo::Equals(this->device_preference, other_struct.device_preference))
    return false;
  return true;
}

template <typename T, CreateModelLoaderOptions::EnableIfSame<T>*>
bool operator<(const T& lhs, const T& rhs) {
  if (lhs.num_threads < rhs.num_threads)
    return true;
  if (rhs.num_threads < lhs.num_threads)
    return false;
  if (lhs.model_format < rhs.model_format)
    return true;
  if (rhs.model_format < lhs.model_format)
    return false;
  if (lhs.device_preference < rhs.device_preference)
    return true;
  if (rhs.device_preference < lhs.device_preference)
    return false;
  return false;
}
template <typename StructPtrType>
TensorInfoPtr TensorInfo::Clone() const {
  return New(
      mojo::Clone(byte_size),
      mojo::Clone(data_type),
      mojo::Clone(dimensions)
  );
}

template <typename T, TensorInfo::EnableIfSame<T>*>
bool TensorInfo::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->byte_size, other_struct.byte_size))
    return false;
  if (!mojo::Equals(this->data_type, other_struct.data_type))
    return false;
  if (!mojo::Equals(this->dimensions, other_struct.dimensions))
    return false;
  return true;
}

template <typename T, TensorInfo::EnableIfSame<T>*>
bool operator<(const T& lhs, const T& rhs) {
  if (lhs.byte_size < rhs.byte_size)
    return true;
  if (rhs.byte_size < lhs.byte_size)
    return false;
  if (lhs.data_type < rhs.data_type)
    return true;
  if (rhs.data_type < lhs.data_type)
    return false;
  if (lhs.dimensions < rhs.dimensions)
    return true;
  if (rhs.dimensions < lhs.dimensions)
    return false;
  return false;
}
template <typename StructPtrType>
ModelInfoPtr ModelInfo::Clone() const {
  return New(
      mojo::Clone(input_tensor_info),
      mojo::Clone(output_tensor_info)
  );
}

template <typename T, ModelInfo::EnableIfSame<T>*>
bool ModelInfo::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->input_tensor_info, other_struct.input_tensor_info))
    return false;
  if (!mojo::Equals(this->output_tensor_info, other_struct.output_tensor_info))
    return false;
  return true;
}

template <typename T, ModelInfo::EnableIfSame<T>*>
bool operator<(const T& lhs, const T& rhs) {
  if (lhs.input_tensor_info < rhs.input_tensor_info)
    return true;
  if (rhs.input_tensor_info < lhs.input_tensor_info)
    return false;
  if (lhs.output_tensor_info < rhs.output_tensor_info)
    return true;
  if (rhs.output_tensor_info < lhs.output_tensor_info)
    return false;
  return false;
}


}  // namespace blink
}  // namespace mojom
}  // namespace model_loader
}  // namespace ml

namespace mojo {


template <>
struct  StructTraits<::ml::model_loader::mojom::blink::CreateModelLoaderOptions::DataView,
                                         ::ml::model_loader::mojom::blink::CreateModelLoaderOptionsPtr> {
  static bool IsNull(const ::ml::model_loader::mojom::blink::CreateModelLoaderOptionsPtr& input) { return !input; }
  static void SetToNull(::ml::model_loader::mojom::blink::CreateModelLoaderOptionsPtr* output) { output->reset(); }

  static decltype(::ml::model_loader::mojom::blink::CreateModelLoaderOptions::num_threads) num_threads(
      const ::ml::model_loader::mojom::blink::CreateModelLoaderOptionsPtr& input) {
    return input->num_threads;
  }

  static decltype(::ml::model_loader::mojom::blink::CreateModelLoaderOptions::model_format) model_format(
      const ::ml::model_loader::mojom::blink::CreateModelLoaderOptionsPtr& input) {
    return input->model_format;
  }

  static decltype(::ml::model_loader::mojom::blink::CreateModelLoaderOptions::device_preference) device_preference(
      const ::ml::model_loader::mojom::blink::CreateModelLoaderOptionsPtr& input) {
    return input->device_preference;
  }

  static bool Read(::ml::model_loader::mojom::blink::CreateModelLoaderOptions::DataView input, ::ml::model_loader::mojom::blink::CreateModelLoaderOptionsPtr* output);
};


template <>
struct  StructTraits<::ml::model_loader::mojom::blink::TensorInfo::DataView,
                                         ::ml::model_loader::mojom::blink::TensorInfoPtr> {
  static bool IsNull(const ::ml::model_loader::mojom::blink::TensorInfoPtr& input) { return !input; }
  static void SetToNull(::ml::model_loader::mojom::blink::TensorInfoPtr* output) { output->reset(); }

  static decltype(::ml::model_loader::mojom::blink::TensorInfo::byte_size) byte_size(
      const ::ml::model_loader::mojom::blink::TensorInfoPtr& input) {
    return input->byte_size;
  }

  static decltype(::ml::model_loader::mojom::blink::TensorInfo::data_type) data_type(
      const ::ml::model_loader::mojom::blink::TensorInfoPtr& input) {
    return input->data_type;
  }

  static const decltype(::ml::model_loader::mojom::blink::TensorInfo::dimensions)& dimensions(
      const ::ml::model_loader::mojom::blink::TensorInfoPtr& input) {
    return input->dimensions;
  }

  static bool Read(::ml::model_loader::mojom::blink::TensorInfo::DataView input, ::ml::model_loader::mojom::blink::TensorInfoPtr* output);
};


template <>
struct  StructTraits<::ml::model_loader::mojom::blink::ModelInfo::DataView,
                                         ::ml::model_loader::mojom::blink::ModelInfoPtr> {
  static bool IsNull(const ::ml::model_loader::mojom::blink::ModelInfoPtr& input) { return !input; }
  static void SetToNull(::ml::model_loader::mojom::blink::ModelInfoPtr* output) { output->reset(); }

  static const decltype(::ml::model_loader::mojom::blink::ModelInfo::input_tensor_info)& input_tensor_info(
      const ::ml::model_loader::mojom::blink::ModelInfoPtr& input) {
    return input->input_tensor_info;
  }

  static const decltype(::ml::model_loader::mojom::blink::ModelInfo::output_tensor_info)& output_tensor_info(
      const ::ml::model_loader::mojom::blink::ModelInfoPtr& input) {
    return input->output_tensor_info;
  }

  static bool Read(::ml::model_loader::mojom::blink::ModelInfo::DataView input, ::ml::model_loader::mojom::blink::ModelInfoPtr* output);
};

}  // namespace mojo

#endif  // COMPONENTS_ML_MOJOM_WEB_PLATFORM_MODEL_MOJOM_BLINK_H_