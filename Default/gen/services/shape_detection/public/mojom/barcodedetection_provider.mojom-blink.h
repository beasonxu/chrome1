// services/shape_detection/public/mojom/barcodedetection_provider.mojom-blink.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_SHAPE_DETECTION_PUBLIC_MOJOM_BARCODEDETECTION_PROVIDER_MOJOM_BLINK_H_
#define SERVICES_SHAPE_DETECTION_PUBLIC_MOJOM_BARCODEDETECTION_PROVIDER_MOJOM_BLINK_H_

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

#include "services/shape_detection/public/mojom/barcodedetection_provider.mojom-shared.h"
#include "services/shape_detection/public/mojom/barcodedetection_provider.mojom-blink-forward.h"
#include "services/shape_detection/public/mojom/barcodedetection.mojom-blink-forward.h"

#include "mojo/public/cpp/bindings/lib/wtf_clone_equals_util.h"
#include "mojo/public/cpp/bindings/lib/wtf_hash_util.h"
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/raw_ptr_impl_ref_traits.h"






namespace shape_detection {
namespace mojom {
namespace blink {

class BarcodeDetectionProviderProxy;

template <typename ImplRefTraits>
class BarcodeDetectionProviderStub;

class BarcodeDetectionProviderRequestValidator;
class BarcodeDetectionProviderResponseValidator;


class  BarcodeDetectionProvider
    : public BarcodeDetectionProviderInterfaceBase {
 public:
  using IPCStableHashFunction = uint32_t(*)();

  static const char Name_[];
  static IPCStableHashFunction MessageToMethodInfo_(mojo::Message& message);
  static const char* MessageToMethodName_(mojo::Message& message);
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;
  static constexpr bool HasUninterruptableMethods_ = false;

  using Base_ = BarcodeDetectionProviderInterfaceBase;
  using Proxy_ = BarcodeDetectionProviderProxy;

  template <typename ImplRefTraits>
  using Stub_ = BarcodeDetectionProviderStub<ImplRefTraits>;

  using RequestValidator_ = BarcodeDetectionProviderRequestValidator;
  using ResponseValidator_ = BarcodeDetectionProviderResponseValidator;
  enum MethodMinVersions : uint32_t {
    kCreateBarcodeDetectionMinVersion = 0,
    kEnumerateSupportedFormatsMinVersion = 0,
  };

// crbug.com/1340245 - this causes binary size bloat on Fuchsia, and we're OK
// with not having this data in traces there.
#if !BUILDFLAG(IS_FUCHSIA)
  struct CreateBarcodeDetection_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct EnumerateSupportedFormats_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
#endif // !BUILDFLAG(IS_FUCHSIA)
  virtual ~BarcodeDetectionProvider() = default;

  
  virtual void CreateBarcodeDetection(::mojo::PendingReceiver<::shape_detection::mojom::blink::BarcodeDetection> receiver, BarcodeDetectorOptionsPtr options) = 0;


  using EnumerateSupportedFormatsCallback = base::OnceCallback<void(const WTF::Vector<::shape_detection::mojom::blink::BarcodeFormat>&)>;
  
  virtual void EnumerateSupportedFormats(EnumerateSupportedFormatsCallback callback) = 0;
};



class  BarcodeDetectionProviderProxy
    : public BarcodeDetectionProvider {
 public:
  using InterfaceType = BarcodeDetectionProvider;

  explicit BarcodeDetectionProviderProxy(mojo::MessageReceiverWithResponder* receiver);
  
  void CreateBarcodeDetection(::mojo::PendingReceiver<::shape_detection::mojom::blink::BarcodeDetection> receiver, BarcodeDetectorOptionsPtr options) final;
  
  void EnumerateSupportedFormats(EnumerateSupportedFormatsCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  BarcodeDetectionProviderStubDispatch {
 public:
  static bool Accept(BarcodeDetectionProvider* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      BarcodeDetectionProvider* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<BarcodeDetectionProvider>>
class BarcodeDetectionProviderStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  BarcodeDetectionProviderStub() = default;
  ~BarcodeDetectionProviderStub() override = default;

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return BarcodeDetectionProviderStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return BarcodeDetectionProviderStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  BarcodeDetectionProviderRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  BarcodeDetectionProviderResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};








class  BarcodeDetectorOptions {
 public:
  template <typename T>
  using EnableIfSame = std::enable_if_t<std::is_same<BarcodeDetectorOptions, T>::value>;
  using DataView = BarcodeDetectorOptionsDataView;
  using Data_ = internal::BarcodeDetectorOptions_Data;

  template <typename... Args>
  static BarcodeDetectorOptionsPtr New(Args&&... args) {
    return BarcodeDetectorOptionsPtr(
        absl::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static BarcodeDetectorOptionsPtr From(const U& u) {
    return mojo::TypeConverter<BarcodeDetectorOptionsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, BarcodeDetectorOptions>::Convert(*this);
  }


  BarcodeDetectorOptions();

  explicit BarcodeDetectorOptions(
      WTF::Vector<::shape_detection::mojom::blink::BarcodeFormat> formats);


  ~BarcodeDetectorOptions();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = BarcodeDetectorOptionsPtr>
  BarcodeDetectorOptionsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T, BarcodeDetectorOptions::EnableIfSame<T>* = nullptr>
  bool Equals(const T& other) const;

  template <typename T, BarcodeDetectorOptions::EnableIfSame<T>* = nullptr>
  bool operator==(const T& rhs) const { return Equals(rhs); }
  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        BarcodeDetectorOptions::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        BarcodeDetectorOptions::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::BarcodeDetectorOptions_UnserializedMessageContext<
            UserType, BarcodeDetectorOptions::DataView>>(0, 0, std::move(input)),
        MOJO_CREATE_MESSAGE_FLAG_NONE);
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    mojo::Message message;
    return mojo::internal::DeserializeImpl<BarcodeDetectorOptions::DataView>(
        message, data, data_num_bytes, output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return BarcodeDetectorOptions::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::BarcodeDetectorOptions_UnserializedMessageContext<
            UserType, BarcodeDetectorOptions::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<BarcodeDetectorOptions::DataView>(
        input, input.payload(), input.payload_num_bytes(), output, Validate);
  }

  
  WTF::Vector<::shape_detection::mojom::blink::BarcodeFormat> formats;

  // Serialise this struct into a trace.
  void WriteIntoTrace(perfetto::TracedValue traced_context) const;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

// The comparison operators are templates, so they are only instantiated if they
// are used. Thus, the bindings generator does not need to know whether
// comparison operators are available for members.
template <typename T, BarcodeDetectorOptions::EnableIfSame<T>* = nullptr>
bool operator<(const T& lhs, const T& rhs);

template <typename T, BarcodeDetectorOptions::EnableIfSame<T>* = nullptr>
bool operator<=(const T& lhs, const T& rhs) {
  return !(rhs < lhs);
}

template <typename T, BarcodeDetectorOptions::EnableIfSame<T>* = nullptr>
bool operator>(const T& lhs, const T& rhs) {
  return rhs < lhs;
}

template <typename T, BarcodeDetectorOptions::EnableIfSame<T>* = nullptr>
bool operator>=(const T& lhs, const T& rhs) {
  return !(lhs < rhs);
}

template <typename StructPtrType>
BarcodeDetectorOptionsPtr BarcodeDetectorOptions::Clone() const {
  return New(
      mojo::Clone(formats)
  );
}

template <typename T, BarcodeDetectorOptions::EnableIfSame<T>*>
bool BarcodeDetectorOptions::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->formats, other_struct.formats))
    return false;
  return true;
}

template <typename T, BarcodeDetectorOptions::EnableIfSame<T>*>
bool operator<(const T& lhs, const T& rhs) {
  if (lhs.formats < rhs.formats)
    return true;
  if (rhs.formats < lhs.formats)
    return false;
  return false;
}


}  // namespace blink
}  // namespace mojom
}  // namespace shape_detection

namespace mojo {


template <>
struct  StructTraits<::shape_detection::mojom::blink::BarcodeDetectorOptions::DataView,
                                         ::shape_detection::mojom::blink::BarcodeDetectorOptionsPtr> {
  static bool IsNull(const ::shape_detection::mojom::blink::BarcodeDetectorOptionsPtr& input) { return !input; }
  static void SetToNull(::shape_detection::mojom::blink::BarcodeDetectorOptionsPtr* output) { output->reset(); }

  static const decltype(::shape_detection::mojom::blink::BarcodeDetectorOptions::formats)& formats(
      const ::shape_detection::mojom::blink::BarcodeDetectorOptionsPtr& input) {
    return input->formats;
  }

  static bool Read(::shape_detection::mojom::blink::BarcodeDetectorOptions::DataView input, ::shape_detection::mojom::blink::BarcodeDetectorOptionsPtr* output);
};

}  // namespace mojo

#endif  // SERVICES_SHAPE_DETECTION_PUBLIC_MOJOM_BARCODEDETECTION_PROVIDER_MOJOM_BLINK_H_