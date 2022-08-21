// services/data_decoder/public/mojom/resource_snapshot_for_web_bundle.mojom.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DATA_DECODER_PUBLIC_MOJOM_RESOURCE_SNAPSHOT_FOR_WEB_BUNDLE_MOJOM_H_
#define SERVICES_DATA_DECODER_PUBLIC_MOJOM_RESOURCE_SNAPSHOT_FOR_WEB_BUNDLE_MOJOM_H_

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

#include "services/data_decoder/public/mojom/resource_snapshot_for_web_bundle.mojom-shared.h"
#include "services/data_decoder/public/mojom/resource_snapshot_for_web_bundle.mojom-forward.h"
#include "mojo/public/mojom/base/big_buffer.mojom.h"
#include "url/mojom/url.mojom.h"
#include <string>
#include <vector>

#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/raw_ptr_impl_ref_traits.h"






namespace data_decoder {
namespace mojom {

class ResourceSnapshotForWebBundleProxy;

template <typename ImplRefTraits>
class ResourceSnapshotForWebBundleStub;

class ResourceSnapshotForWebBundleRequestValidator;
class ResourceSnapshotForWebBundleResponseValidator;


class  ResourceSnapshotForWebBundle
    : public ResourceSnapshotForWebBundleInterfaceBase {
 public:
  using IPCStableHashFunction = uint32_t(*)();

  static const char Name_[];
  static IPCStableHashFunction MessageToMethodInfo_(mojo::Message& message);
  static const char* MessageToMethodName_(mojo::Message& message);
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;
  static constexpr bool HasUninterruptableMethods_ = false;

  using Base_ = ResourceSnapshotForWebBundleInterfaceBase;
  using Proxy_ = ResourceSnapshotForWebBundleProxy;

  template <typename ImplRefTraits>
  using Stub_ = ResourceSnapshotForWebBundleStub<ImplRefTraits>;

  using RequestValidator_ = ResourceSnapshotForWebBundleRequestValidator;
  using ResponseValidator_ = ResourceSnapshotForWebBundleResponseValidator;
  enum MethodMinVersions : uint32_t {
    kGetResourceCountMinVersion = 0,
    kGetResourceInfoMinVersion = 0,
    kGetResourceBodyMinVersion = 0,
  };

// crbug.com/1340245 - this causes binary size bloat on Fuchsia, and we're OK
// with not having this data in traces there.
#if !BUILDFLAG(IS_FUCHSIA)
  struct GetResourceCount_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct GetResourceInfo_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct GetResourceBody_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
#endif // !BUILDFLAG(IS_FUCHSIA)
  virtual ~ResourceSnapshotForWebBundle() = default;


  using GetResourceCountCallback = base::OnceCallback<void(uint64_t)>;
  
  virtual void GetResourceCount(GetResourceCountCallback callback) = 0;


  using GetResourceInfoCallback = base::OnceCallback<void(SerializedResourceInfoPtr)>;
  
  virtual void GetResourceInfo(uint64_t index, GetResourceInfoCallback callback) = 0;


  using GetResourceBodyCallback = base::OnceCallback<void(absl::optional<::mojo_base::BigBuffer>)>;
  
  virtual void GetResourceBody(uint64_t index, GetResourceBodyCallback callback) = 0;
};



class  ResourceSnapshotForWebBundleProxy
    : public ResourceSnapshotForWebBundle {
 public:
  using InterfaceType = ResourceSnapshotForWebBundle;

  explicit ResourceSnapshotForWebBundleProxy(mojo::MessageReceiverWithResponder* receiver);
  
  void GetResourceCount(GetResourceCountCallback callback) final;
  
  void GetResourceInfo(uint64_t index, GetResourceInfoCallback callback) final;
  
  void GetResourceBody(uint64_t index, GetResourceBodyCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  ResourceSnapshotForWebBundleStubDispatch {
 public:
  static bool Accept(ResourceSnapshotForWebBundle* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      ResourceSnapshotForWebBundle* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<ResourceSnapshotForWebBundle>>
class ResourceSnapshotForWebBundleStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  ResourceSnapshotForWebBundleStub() = default;
  ~ResourceSnapshotForWebBundleStub() override = default;

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ResourceSnapshotForWebBundleStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ResourceSnapshotForWebBundleStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  ResourceSnapshotForWebBundleRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  ResourceSnapshotForWebBundleResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};








class  SerializedResourceInfo {
 public:
  template <typename T>
  using EnableIfSame = std::enable_if_t<std::is_same<SerializedResourceInfo, T>::value>;
  using DataView = SerializedResourceInfoDataView;
  using Data_ = internal::SerializedResourceInfo_Data;

  template <typename... Args>
  static SerializedResourceInfoPtr New(Args&&... args) {
    return SerializedResourceInfoPtr(
        absl::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static SerializedResourceInfoPtr From(const U& u) {
    return mojo::TypeConverter<SerializedResourceInfoPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, SerializedResourceInfo>::Convert(*this);
  }


  SerializedResourceInfo();

  SerializedResourceInfo(
      const ::GURL& url,
      const std::string& mime_type,
      uint64_t size);


  ~SerializedResourceInfo();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = SerializedResourceInfoPtr>
  SerializedResourceInfoPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T, SerializedResourceInfo::EnableIfSame<T>* = nullptr>
  bool Equals(const T& other) const;

  template <typename T, SerializedResourceInfo::EnableIfSame<T>* = nullptr>
  bool operator==(const T& rhs) const { return Equals(rhs); }
  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        SerializedResourceInfo::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        SerializedResourceInfo::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::SerializedResourceInfo_UnserializedMessageContext<
            UserType, SerializedResourceInfo::DataView>>(0, 0, std::move(input)),
        MOJO_CREATE_MESSAGE_FLAG_NONE);
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    mojo::Message message;
    return mojo::internal::DeserializeImpl<SerializedResourceInfo::DataView>(
        message, data, data_num_bytes, output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return SerializedResourceInfo::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::SerializedResourceInfo_UnserializedMessageContext<
            UserType, SerializedResourceInfo::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<SerializedResourceInfo::DataView>(
        input, input.payload(), input.payload_num_bytes(), output, Validate);
  }

  
  ::GURL url;
  
  std::string mime_type;
  
  uint64_t size;

  // Serialise this struct into a trace.
  void WriteIntoTrace(perfetto::TracedValue traced_context) const;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

// The comparison operators are templates, so they are only instantiated if they
// are used. Thus, the bindings generator does not need to know whether
// comparison operators are available for members.
template <typename T, SerializedResourceInfo::EnableIfSame<T>* = nullptr>
bool operator<(const T& lhs, const T& rhs);

template <typename T, SerializedResourceInfo::EnableIfSame<T>* = nullptr>
bool operator<=(const T& lhs, const T& rhs) {
  return !(rhs < lhs);
}

template <typename T, SerializedResourceInfo::EnableIfSame<T>* = nullptr>
bool operator>(const T& lhs, const T& rhs) {
  return rhs < lhs;
}

template <typename T, SerializedResourceInfo::EnableIfSame<T>* = nullptr>
bool operator>=(const T& lhs, const T& rhs) {
  return !(lhs < rhs);
}

template <typename StructPtrType>
SerializedResourceInfoPtr SerializedResourceInfo::Clone() const {
  return New(
      mojo::Clone(url),
      mojo::Clone(mime_type),
      mojo::Clone(size)
  );
}

template <typename T, SerializedResourceInfo::EnableIfSame<T>*>
bool SerializedResourceInfo::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->url, other_struct.url))
    return false;
  if (!mojo::Equals(this->mime_type, other_struct.mime_type))
    return false;
  if (!mojo::Equals(this->size, other_struct.size))
    return false;
  return true;
}

template <typename T, SerializedResourceInfo::EnableIfSame<T>*>
bool operator<(const T& lhs, const T& rhs) {
  if (lhs.url < rhs.url)
    return true;
  if (rhs.url < lhs.url)
    return false;
  if (lhs.mime_type < rhs.mime_type)
    return true;
  if (rhs.mime_type < lhs.mime_type)
    return false;
  if (lhs.size < rhs.size)
    return true;
  if (rhs.size < lhs.size)
    return false;
  return false;
}


}  // namespace mojom
}  // namespace data_decoder

namespace mojo {


template <>
struct  StructTraits<::data_decoder::mojom::SerializedResourceInfo::DataView,
                                         ::data_decoder::mojom::SerializedResourceInfoPtr> {
  static bool IsNull(const ::data_decoder::mojom::SerializedResourceInfoPtr& input) { return !input; }
  static void SetToNull(::data_decoder::mojom::SerializedResourceInfoPtr* output) { output->reset(); }

  static const decltype(::data_decoder::mojom::SerializedResourceInfo::url)& url(
      const ::data_decoder::mojom::SerializedResourceInfoPtr& input) {
    return input->url;
  }

  static const decltype(::data_decoder::mojom::SerializedResourceInfo::mime_type)& mime_type(
      const ::data_decoder::mojom::SerializedResourceInfoPtr& input) {
    return input->mime_type;
  }

  static decltype(::data_decoder::mojom::SerializedResourceInfo::size) size(
      const ::data_decoder::mojom::SerializedResourceInfoPtr& input) {
    return input->size;
  }

  static bool Read(::data_decoder::mojom::SerializedResourceInfo::DataView input, ::data_decoder::mojom::SerializedResourceInfoPtr* output);
};

}  // namespace mojo

#endif  // SERVICES_DATA_DECODER_PUBLIC_MOJOM_RESOURCE_SNAPSHOT_FOR_WEB_BUNDLE_MOJOM_H_