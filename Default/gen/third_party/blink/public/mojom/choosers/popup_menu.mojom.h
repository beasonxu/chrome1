// third_party/blink/public/mojom/choosers/popup_menu.mojom.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_CHOOSERS_POPUP_MENU_MOJOM_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_CHOOSERS_POPUP_MENU_MOJOM_H_

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

#include "third_party/blink/public/mojom/choosers/popup_menu.mojom-shared.h"
#include "third_party/blink/public/mojom/choosers/popup_menu.mojom-forward.h"
#include "mojo/public/mojom/base/text_direction.mojom.h"
#include "ui/gfx/geometry/mojom/geometry.mojom-forward.h"
#include <string>
#include <vector>

#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/raw_ptr_impl_ref_traits.h"


#include "third_party/blink/public/common/common_export.h"




namespace blink {
namespace mojom {

class PopupMenuClientProxy;

template <typename ImplRefTraits>
class PopupMenuClientStub;

class PopupMenuClientRequestValidator;


class BLINK_COMMON_EXPORT PopupMenuClient
    : public PopupMenuClientInterfaceBase {
 public:
  using IPCStableHashFunction = uint32_t(*)();

  static const char Name_[];
  static IPCStableHashFunction MessageToMethodInfo_(mojo::Message& message);
  static const char* MessageToMethodName_(mojo::Message& message);
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;
  static constexpr bool HasUninterruptableMethods_ = false;

  using Base_ = PopupMenuClientInterfaceBase;
  using Proxy_ = PopupMenuClientProxy;

  template <typename ImplRefTraits>
  using Stub_ = PopupMenuClientStub<ImplRefTraits>;

  using RequestValidator_ = PopupMenuClientRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kDidAcceptIndicesMinVersion = 0,
    kDidCancelMinVersion = 0,
  };

// crbug.com/1340245 - this causes binary size bloat on Fuchsia, and we're OK
// with not having this data in traces there.
#if !BUILDFLAG(IS_FUCHSIA)
  struct DidAcceptIndices_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct DidCancel_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
#endif // !BUILDFLAG(IS_FUCHSIA)
  virtual ~PopupMenuClient() = default;

  
  virtual void DidAcceptIndices(const std::vector<int32_t>& indices) = 0;

  
  virtual void DidCancel() = 0;
};



class BLINK_COMMON_EXPORT PopupMenuClientProxy
    : public PopupMenuClient {
 public:
  using InterfaceType = PopupMenuClient;

  explicit PopupMenuClientProxy(mojo::MessageReceiverWithResponder* receiver);
  
  void DidAcceptIndices(const std::vector<int32_t>& indices) final;
  
  void DidCancel() final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class BLINK_COMMON_EXPORT PopupMenuClientStubDispatch {
 public:
  static bool Accept(PopupMenuClient* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      PopupMenuClient* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<PopupMenuClient>>
class PopupMenuClientStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  PopupMenuClientStub() = default;
  ~PopupMenuClientStub() override = default;

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return PopupMenuClientStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return PopupMenuClientStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_COMMON_EXPORT PopupMenuClientRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};








class BLINK_COMMON_EXPORT MenuItem {
 public:
  template <typename T>
  using EnableIfSame = std::enable_if_t<std::is_same<MenuItem, T>::value>;
  using DataView = MenuItemDataView;
  using Data_ = internal::MenuItem_Data;
  using Type = MenuItem_Type;

  template <typename... Args>
  static MenuItemPtr New(Args&&... args) {
    return MenuItemPtr(
        absl::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static MenuItemPtr From(const U& u) {
    return mojo::TypeConverter<MenuItemPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, MenuItem>::Convert(*this);
  }


  MenuItem();

  MenuItem(
      const absl::optional<std::string>& label,
      const absl::optional<std::string>& tool_tip,
      MenuItem::Type type,
      uint32_t action,
      ::base::i18n::TextDirection text_direction,
      bool has_text_direction_override,
      bool enabled,
      bool checked);


  ~MenuItem();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = MenuItemPtr>
  MenuItemPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T, MenuItem::EnableIfSame<T>* = nullptr>
  bool Equals(const T& other) const;

  template <typename T, MenuItem::EnableIfSame<T>* = nullptr>
  bool operator==(const T& rhs) const { return Equals(rhs); }
  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        MenuItem::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        MenuItem::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::MenuItem_UnserializedMessageContext<
            UserType, MenuItem::DataView>>(0, 0, std::move(input)),
        MOJO_CREATE_MESSAGE_FLAG_NONE);
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    mojo::Message message;
    return mojo::internal::DeserializeImpl<MenuItem::DataView>(
        message, data, data_num_bytes, output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return MenuItem::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::MenuItem_UnserializedMessageContext<
            UserType, MenuItem::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<MenuItem::DataView>(
        input, input.payload(), input.payload_num_bytes(), output, Validate);
  }

  
  absl::optional<std::string> label;
  
  absl::optional<std::string> tool_tip;
  
  MenuItem::Type type;
  
  uint32_t action;
  
  ::base::i18n::TextDirection text_direction;
  
  bool has_text_direction_override;
  
  bool enabled;
  
  bool checked;

  // Serialise this struct into a trace.
  void WriteIntoTrace(perfetto::TracedValue traced_context) const;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

// The comparison operators are templates, so they are only instantiated if they
// are used. Thus, the bindings generator does not need to know whether
// comparison operators are available for members.
template <typename T, MenuItem::EnableIfSame<T>* = nullptr>
bool operator<(const T& lhs, const T& rhs);

template <typename T, MenuItem::EnableIfSame<T>* = nullptr>
bool operator<=(const T& lhs, const T& rhs) {
  return !(rhs < lhs);
}

template <typename T, MenuItem::EnableIfSame<T>* = nullptr>
bool operator>(const T& lhs, const T& rhs) {
  return rhs < lhs;
}

template <typename T, MenuItem::EnableIfSame<T>* = nullptr>
bool operator>=(const T& lhs, const T& rhs) {
  return !(lhs < rhs);
}

template <typename StructPtrType>
MenuItemPtr MenuItem::Clone() const {
  return New(
      mojo::Clone(label),
      mojo::Clone(tool_tip),
      mojo::Clone(type),
      mojo::Clone(action),
      mojo::Clone(text_direction),
      mojo::Clone(has_text_direction_override),
      mojo::Clone(enabled),
      mojo::Clone(checked)
  );
}

template <typename T, MenuItem::EnableIfSame<T>*>
bool MenuItem::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->label, other_struct.label))
    return false;
  if (!mojo::Equals(this->tool_tip, other_struct.tool_tip))
    return false;
  if (!mojo::Equals(this->type, other_struct.type))
    return false;
  if (!mojo::Equals(this->action, other_struct.action))
    return false;
  if (!mojo::Equals(this->text_direction, other_struct.text_direction))
    return false;
  if (!mojo::Equals(this->has_text_direction_override, other_struct.has_text_direction_override))
    return false;
  if (!mojo::Equals(this->enabled, other_struct.enabled))
    return false;
  if (!mojo::Equals(this->checked, other_struct.checked))
    return false;
  return true;
}

template <typename T, MenuItem::EnableIfSame<T>*>
bool operator<(const T& lhs, const T& rhs) {
  if (lhs.label < rhs.label)
    return true;
  if (rhs.label < lhs.label)
    return false;
  if (lhs.tool_tip < rhs.tool_tip)
    return true;
  if (rhs.tool_tip < lhs.tool_tip)
    return false;
  if (lhs.type < rhs.type)
    return true;
  if (rhs.type < lhs.type)
    return false;
  if (lhs.action < rhs.action)
    return true;
  if (rhs.action < lhs.action)
    return false;
  if (lhs.text_direction < rhs.text_direction)
    return true;
  if (rhs.text_direction < lhs.text_direction)
    return false;
  if (lhs.has_text_direction_override < rhs.has_text_direction_override)
    return true;
  if (rhs.has_text_direction_override < lhs.has_text_direction_override)
    return false;
  if (lhs.enabled < rhs.enabled)
    return true;
  if (rhs.enabled < lhs.enabled)
    return false;
  if (lhs.checked < rhs.checked)
    return true;
  if (rhs.checked < lhs.checked)
    return false;
  return false;
}


}  // namespace mojom
}  // namespace blink

namespace mojo {


template <>
struct BLINK_COMMON_EXPORT StructTraits<::blink::mojom::MenuItem::DataView,
                                         ::blink::mojom::MenuItemPtr> {
  static bool IsNull(const ::blink::mojom::MenuItemPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::MenuItemPtr* output) { output->reset(); }

  static const decltype(::blink::mojom::MenuItem::label)& label(
      const ::blink::mojom::MenuItemPtr& input) {
    return input->label;
  }

  static const decltype(::blink::mojom::MenuItem::tool_tip)& tool_tip(
      const ::blink::mojom::MenuItemPtr& input) {
    return input->tool_tip;
  }

  static decltype(::blink::mojom::MenuItem::type) type(
      const ::blink::mojom::MenuItemPtr& input) {
    return input->type;
  }

  static decltype(::blink::mojom::MenuItem::action) action(
      const ::blink::mojom::MenuItemPtr& input) {
    return input->action;
  }

  static decltype(::blink::mojom::MenuItem::text_direction) text_direction(
      const ::blink::mojom::MenuItemPtr& input) {
    return input->text_direction;
  }

  static decltype(::blink::mojom::MenuItem::has_text_direction_override) has_text_direction_override(
      const ::blink::mojom::MenuItemPtr& input) {
    return input->has_text_direction_override;
  }

  static decltype(::blink::mojom::MenuItem::enabled) enabled(
      const ::blink::mojom::MenuItemPtr& input) {
    return input->enabled;
  }

  static decltype(::blink::mojom::MenuItem::checked) checked(
      const ::blink::mojom::MenuItemPtr& input) {
    return input->checked;
  }

  static bool Read(::blink::mojom::MenuItem::DataView input, ::blink::mojom::MenuItemPtr* output);
};

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_CHOOSERS_POPUP_MENU_MOJOM_H_