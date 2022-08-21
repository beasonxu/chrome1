// third_party/blink/public/mojom/frame/text_autosizer_page_info.mojom-blink.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_FRAME_TEXT_AUTOSIZER_PAGE_INFO_MOJOM_BLINK_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_FRAME_TEXT_AUTOSIZER_PAGE_INFO_MOJOM_BLINK_H_

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

#include "third_party/blink/public/mojom/frame/text_autosizer_page_info.mojom-shared.h"
#include "third_party/blink/public/mojom/frame/text_autosizer_page_info.mojom-blink-forward.h"

#include "mojo/public/cpp/bindings/lib/wtf_clone_equals_util.h"
#include "mojo/public/cpp/bindings/lib/wtf_hash_util.h"
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"




#include "third_party/blink/renderer/core/core_export.h"




namespace blink {
namespace mojom {
namespace blink {





class CORE_EXPORT TextAutosizerPageInfo {
 public:
  template <typename T>
  using EnableIfSame = std::enable_if_t<std::is_same<TextAutosizerPageInfo, T>::value>;
  using DataView = TextAutosizerPageInfoDataView;
  using Data_ = internal::TextAutosizerPageInfo_Data;

  template <typename... Args>
  static TextAutosizerPageInfoPtr New(Args&&... args) {
    return TextAutosizerPageInfoPtr(
        absl::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static TextAutosizerPageInfoPtr From(const U& u) {
    return mojo::TypeConverter<TextAutosizerPageInfoPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, TextAutosizerPageInfo>::Convert(*this);
  }


  TextAutosizerPageInfo();

  TextAutosizerPageInfo(
      int32_t main_frame_width,
      int32_t main_frame_layout_width,
      float device_scale_adjustment);


  ~TextAutosizerPageInfo();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = TextAutosizerPageInfoPtr>
  TextAutosizerPageInfoPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T, TextAutosizerPageInfo::EnableIfSame<T>* = nullptr>
  bool Equals(const T& other) const;

  template <typename T, TextAutosizerPageInfo::EnableIfSame<T>* = nullptr>
  bool operator==(const T& rhs) const { return Equals(rhs); }
  size_t Hash(size_t seed) const;
  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        TextAutosizerPageInfo::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        TextAutosizerPageInfo::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::TextAutosizerPageInfo_UnserializedMessageContext<
            UserType, TextAutosizerPageInfo::DataView>>(0, 0, std::move(input)),
        MOJO_CREATE_MESSAGE_FLAG_NONE);
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    mojo::Message message;
    return mojo::internal::DeserializeImpl<TextAutosizerPageInfo::DataView>(
        message, data, data_num_bytes, output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return TextAutosizerPageInfo::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::TextAutosizerPageInfo_UnserializedMessageContext<
            UserType, TextAutosizerPageInfo::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<TextAutosizerPageInfo::DataView>(
        input, input.payload(), input.payload_num_bytes(), output, Validate);
  }

  
  int32_t main_frame_width;
  
  int32_t main_frame_layout_width;
  
  float device_scale_adjustment;

  // Serialise this struct into a trace.
  void WriteIntoTrace(perfetto::TracedValue traced_context) const;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

// The comparison operators are templates, so they are only instantiated if they
// are used. Thus, the bindings generator does not need to know whether
// comparison operators are available for members.
template <typename T, TextAutosizerPageInfo::EnableIfSame<T>* = nullptr>
bool operator<(const T& lhs, const T& rhs);

template <typename T, TextAutosizerPageInfo::EnableIfSame<T>* = nullptr>
bool operator<=(const T& lhs, const T& rhs) {
  return !(rhs < lhs);
}

template <typename T, TextAutosizerPageInfo::EnableIfSame<T>* = nullptr>
bool operator>(const T& lhs, const T& rhs) {
  return rhs < lhs;
}

template <typename T, TextAutosizerPageInfo::EnableIfSame<T>* = nullptr>
bool operator>=(const T& lhs, const T& rhs) {
  return !(lhs < rhs);
}




template <typename StructPtrType>
TextAutosizerPageInfoPtr TextAutosizerPageInfo::Clone() const {
  return New(
      mojo::Clone(main_frame_width),
      mojo::Clone(main_frame_layout_width),
      mojo::Clone(device_scale_adjustment)
  );
}

template <typename T, TextAutosizerPageInfo::EnableIfSame<T>*>
bool TextAutosizerPageInfo::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->main_frame_width, other_struct.main_frame_width))
    return false;
  if (!mojo::Equals(this->main_frame_layout_width, other_struct.main_frame_layout_width))
    return false;
  if (!mojo::Equals(this->device_scale_adjustment, other_struct.device_scale_adjustment))
    return false;
  return true;
}

template <typename T, TextAutosizerPageInfo::EnableIfSame<T>*>
bool operator<(const T& lhs, const T& rhs) {
  if (lhs.main_frame_width < rhs.main_frame_width)
    return true;
  if (rhs.main_frame_width < lhs.main_frame_width)
    return false;
  if (lhs.main_frame_layout_width < rhs.main_frame_layout_width)
    return true;
  if (rhs.main_frame_layout_width < lhs.main_frame_layout_width)
    return false;
  if (lhs.device_scale_adjustment < rhs.device_scale_adjustment)
    return true;
  if (rhs.device_scale_adjustment < lhs.device_scale_adjustment)
    return false;
  return false;
}


}  // namespace blink
}  // namespace mojom
}  // namespace blink

namespace mojo {


template <>
struct CORE_EXPORT StructTraits<::blink::mojom::blink::TextAutosizerPageInfo::DataView,
                                         ::blink::mojom::blink::TextAutosizerPageInfoPtr> {
  static bool IsNull(const ::blink::mojom::blink::TextAutosizerPageInfoPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::blink::TextAutosizerPageInfoPtr* output) { output->reset(); }

  static decltype(::blink::mojom::blink::TextAutosizerPageInfo::main_frame_width) main_frame_width(
      const ::blink::mojom::blink::TextAutosizerPageInfoPtr& input) {
    return input->main_frame_width;
  }

  static decltype(::blink::mojom::blink::TextAutosizerPageInfo::main_frame_layout_width) main_frame_layout_width(
      const ::blink::mojom::blink::TextAutosizerPageInfoPtr& input) {
    return input->main_frame_layout_width;
  }

  static decltype(::blink::mojom::blink::TextAutosizerPageInfo::device_scale_adjustment) device_scale_adjustment(
      const ::blink::mojom::blink::TextAutosizerPageInfoPtr& input) {
    return input->device_scale_adjustment;
  }

  static bool Read(::blink::mojom::blink::TextAutosizerPageInfo::DataView input, ::blink::mojom::blink::TextAutosizerPageInfoPtr* output);
};

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_FRAME_TEXT_AUTOSIZER_PAGE_INFO_MOJOM_BLINK_H_