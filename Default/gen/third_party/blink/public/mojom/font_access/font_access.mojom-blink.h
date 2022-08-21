// third_party/blink/public/mojom/font_access/font_access.mojom-blink.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_FONT_ACCESS_FONT_ACCESS_MOJOM_BLINK_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_FONT_ACCESS_FONT_ACCESS_MOJOM_BLINK_H_

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

#include "third_party/blink/public/mojom/font_access/font_access.mojom-shared.h"
#include "third_party/blink/public/mojom/font_access/font_access.mojom-blink-forward.h"
#include "third_party/blink/public/mojom/permissions/permission_status.mojom-blink-forward.h"
#include "mojo/public/mojom/base/shared_memory.mojom-blink.h"

#include "mojo/public/cpp/bindings/lib/wtf_clone_equals_util.h"
#include "mojo/public/cpp/bindings/lib/wtf_hash_util.h"
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/raw_ptr_impl_ref_traits.h"


#include "third_party/blink/renderer/platform/platform_export.h"




namespace WTF {
struct blink_mojom_internal_FontEnumerationStatus_DataHashFn {
  static unsigned GetHash(const ::blink::mojom::FontEnumerationStatus& value) {
    using utype = std::underlying_type<::blink::mojom::FontEnumerationStatus>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::blink::mojom::FontEnumerationStatus& left, const ::blink::mojom::FontEnumerationStatus& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::blink::mojom::FontEnumerationStatus>
    : public GenericHashTraits<::blink::mojom::FontEnumerationStatus> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool kEmptyValueIsZero = false;
  static ::blink::mojom::FontEnumerationStatus EmptyValue() { return static_cast<::blink::mojom::FontEnumerationStatus>(-1000000); }
  static void ConstructDeletedValue(::blink::mojom::FontEnumerationStatus& slot, bool) {
    slot = static_cast<::blink::mojom::FontEnumerationStatus>(-1000001);
  }
  static bool IsDeletedValue(const ::blink::mojom::FontEnumerationStatus& value) {
    return value == static_cast<::blink::mojom::FontEnumerationStatus>(-1000001);
  }
};
}  // namespace WTF


namespace blink {
namespace mojom {
namespace blink {

class FontAccessManagerProxy;

template <typename ImplRefTraits>
class FontAccessManagerStub;

class FontAccessManagerRequestValidator;
class FontAccessManagerResponseValidator;


class PLATFORM_EXPORT FontAccessManager
    : public FontAccessManagerInterfaceBase {
 public:
  using IPCStableHashFunction = uint32_t(*)();

  static const char Name_[];
  static IPCStableHashFunction MessageToMethodInfo_(mojo::Message& message);
  static const char* MessageToMethodName_(mojo::Message& message);
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;
  static constexpr bool HasUninterruptableMethods_ = false;

  using Base_ = FontAccessManagerInterfaceBase;
  using Proxy_ = FontAccessManagerProxy;

  template <typename ImplRefTraits>
  using Stub_ = FontAccessManagerStub<ImplRefTraits>;

  using RequestValidator_ = FontAccessManagerRequestValidator;
  using ResponseValidator_ = FontAccessManagerResponseValidator;
  enum MethodMinVersions : uint32_t {
    kEnumerateLocalFontsMinVersion = 0,
  };

// crbug.com/1340245 - this causes binary size bloat on Fuchsia, and we're OK
// with not having this data in traces there.
#if !BUILDFLAG(IS_FUCHSIA)
  struct EnumerateLocalFonts_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
#endif // !BUILDFLAG(IS_FUCHSIA)
  virtual ~FontAccessManager() = default;


  using EnumerateLocalFontsCallback = base::OnceCallback<void(FontEnumerationStatus, ::base::ReadOnlySharedMemoryRegion)>;
  
  virtual void EnumerateLocalFonts(EnumerateLocalFontsCallback callback) = 0;
};



class PLATFORM_EXPORT FontAccessManagerProxy
    : public FontAccessManager {
 public:
  using InterfaceType = FontAccessManager;

  explicit FontAccessManagerProxy(mojo::MessageReceiverWithResponder* receiver);
  
  void EnumerateLocalFonts(EnumerateLocalFontsCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class PLATFORM_EXPORT FontAccessManagerStubDispatch {
 public:
  static bool Accept(FontAccessManager* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      FontAccessManager* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<FontAccessManager>>
class FontAccessManagerStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  FontAccessManagerStub() = default;
  ~FontAccessManagerStub() override = default;

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return FontAccessManagerStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return FontAccessManagerStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class PLATFORM_EXPORT FontAccessManagerRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class PLATFORM_EXPORT FontAccessManagerResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





class PLATFORM_EXPORT FontData {
 public:
  template <typename T>
  using EnableIfSame = std::enable_if_t<std::is_same<FontData, T>::value>;
  using DataView = FontDataDataView;
  using Data_ = internal::FontData_Data;

  template <typename... Args>
  static FontDataPtr New(Args&&... args) {
    return FontDataPtr(
        absl::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static FontDataPtr From(const U& u) {
    return mojo::TypeConverter<FontDataPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, FontData>::Convert(*this);
  }


  FontData();

  FontData(
      const WTF::String& postscript_name,
      const WTF::String& full_name,
      const WTF::String& family,
      const WTF::String& style);


  ~FontData();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = FontDataPtr>
  FontDataPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T, FontData::EnableIfSame<T>* = nullptr>
  bool Equals(const T& other) const;

  template <typename T, FontData::EnableIfSame<T>* = nullptr>
  bool operator==(const T& rhs) const { return Equals(rhs); }
  size_t Hash(size_t seed) const;
  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        FontData::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        FontData::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::FontData_UnserializedMessageContext<
            UserType, FontData::DataView>>(0, 0, std::move(input)),
        MOJO_CREATE_MESSAGE_FLAG_NONE);
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    mojo::Message message;
    return mojo::internal::DeserializeImpl<FontData::DataView>(
        message, data, data_num_bytes, output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return FontData::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::FontData_UnserializedMessageContext<
            UserType, FontData::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<FontData::DataView>(
        input, input.payload(), input.payload_num_bytes(), output, Validate);
  }

  
  WTF::String postscript_name;
  
  WTF::String full_name;
  
  WTF::String family;
  
  WTF::String style;

  // Serialise this struct into a trace.
  void WriteIntoTrace(perfetto::TracedValue traced_context) const;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

// The comparison operators are templates, so they are only instantiated if they
// are used. Thus, the bindings generator does not need to know whether
// comparison operators are available for members.
template <typename T, FontData::EnableIfSame<T>* = nullptr>
bool operator<(const T& lhs, const T& rhs);

template <typename T, FontData::EnableIfSame<T>* = nullptr>
bool operator<=(const T& lhs, const T& rhs) {
  return !(rhs < lhs);
}

template <typename T, FontData::EnableIfSame<T>* = nullptr>
bool operator>(const T& lhs, const T& rhs) {
  return rhs < lhs;
}

template <typename T, FontData::EnableIfSame<T>* = nullptr>
bool operator>=(const T& lhs, const T& rhs) {
  return !(lhs < rhs);
}




template <typename StructPtrType>
FontDataPtr FontData::Clone() const {
  return New(
      mojo::Clone(postscript_name),
      mojo::Clone(full_name),
      mojo::Clone(family),
      mojo::Clone(style)
  );
}

template <typename T, FontData::EnableIfSame<T>*>
bool FontData::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->postscript_name, other_struct.postscript_name))
    return false;
  if (!mojo::Equals(this->full_name, other_struct.full_name))
    return false;
  if (!mojo::Equals(this->family, other_struct.family))
    return false;
  if (!mojo::Equals(this->style, other_struct.style))
    return false;
  return true;
}

template <typename T, FontData::EnableIfSame<T>*>
bool operator<(const T& lhs, const T& rhs) {
  if (lhs.postscript_name < rhs.postscript_name)
    return true;
  if (rhs.postscript_name < lhs.postscript_name)
    return false;
  if (lhs.full_name < rhs.full_name)
    return true;
  if (rhs.full_name < lhs.full_name)
    return false;
  if (lhs.family < rhs.family)
    return true;
  if (rhs.family < lhs.family)
    return false;
  if (lhs.style < rhs.style)
    return true;
  if (rhs.style < lhs.style)
    return false;
  return false;
}


}  // namespace blink
}  // namespace mojom
}  // namespace blink

namespace mojo {


template <>
struct PLATFORM_EXPORT StructTraits<::blink::mojom::blink::FontData::DataView,
                                         ::blink::mojom::blink::FontDataPtr> {
  static bool IsNull(const ::blink::mojom::blink::FontDataPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::blink::FontDataPtr* output) { output->reset(); }

  static const decltype(::blink::mojom::blink::FontData::postscript_name)& postscript_name(
      const ::blink::mojom::blink::FontDataPtr& input) {
    return input->postscript_name;
  }

  static const decltype(::blink::mojom::blink::FontData::full_name)& full_name(
      const ::blink::mojom::blink::FontDataPtr& input) {
    return input->full_name;
  }

  static const decltype(::blink::mojom::blink::FontData::family)& family(
      const ::blink::mojom::blink::FontDataPtr& input) {
    return input->family;
  }

  static const decltype(::blink::mojom::blink::FontData::style)& style(
      const ::blink::mojom::blink::FontDataPtr& input) {
    return input->style;
  }

  static bool Read(::blink::mojom::blink::FontData::DataView input, ::blink::mojom::blink::FontDataPtr* output);
};

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_FONT_ACCESS_FONT_ACCESS_MOJOM_BLINK_H_