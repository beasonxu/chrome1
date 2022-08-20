// third_party/blink/public/mojom/link_to_text/link_to_text.mojom-blink.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_LINK_TO_TEXT_LINK_TO_TEXT_MOJOM_BLINK_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_LINK_TO_TEXT_LINK_TO_TEXT_MOJOM_BLINK_H_

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

#include "third_party/blink/public/mojom/link_to_text/link_to_text.mojom-shared.h"
#include "third_party/blink/public/mojom/link_to_text/link_to_text.mojom-blink-forward.h"
#include "ui/gfx/geometry/mojom/geometry.mojom-blink.h"

#include "mojo/public/cpp/bindings/lib/wtf_clone_equals_util.h"
#include "mojo/public/cpp/bindings/lib/wtf_hash_util.h"
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/raw_ptr_impl_ref_traits.h"


#include "third_party/blink/public/common/link_to_text/link_to_text_mojom_traits.h"
#include "third_party/blink/renderer/platform/platform_export.h"




namespace WTF {
struct blink_mojom_internal_LinkGenerationReadyStatus_DataHashFn {
  static unsigned GetHash(const ::blink::mojom::LinkGenerationReadyStatus& value) {
    using utype = std::underlying_type<::blink::mojom::LinkGenerationReadyStatus>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::blink::mojom::LinkGenerationReadyStatus& left, const ::blink::mojom::LinkGenerationReadyStatus& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::blink::mojom::LinkGenerationReadyStatus>
    : public GenericHashTraits<::blink::mojom::LinkGenerationReadyStatus> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool kEmptyValueIsZero = false;
  static ::blink::mojom::LinkGenerationReadyStatus EmptyValue() { return static_cast<::blink::mojom::LinkGenerationReadyStatus>(-1000000); }
  static void ConstructDeletedValue(::blink::mojom::LinkGenerationReadyStatus& slot, bool) {
    slot = static_cast<::blink::mojom::LinkGenerationReadyStatus>(-1000001);
  }
  static bool IsDeletedValue(const ::blink::mojom::LinkGenerationReadyStatus& value) {
    return value == static_cast<::blink::mojom::LinkGenerationReadyStatus>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct blink_mojom_internal_LinkGenerationError_DataHashFn {
  static unsigned GetHash(const ::blink::mojom::LinkGenerationError& value) {
    using utype = std::underlying_type<::blink::mojom::LinkGenerationError>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::blink::mojom::LinkGenerationError& left, const ::blink::mojom::LinkGenerationError& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::blink::mojom::LinkGenerationError>
    : public GenericHashTraits<::blink::mojom::LinkGenerationError> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool kEmptyValueIsZero = false;
  static ::blink::mojom::LinkGenerationError EmptyValue() { return static_cast<::blink::mojom::LinkGenerationError>(-1000000); }
  static void ConstructDeletedValue(::blink::mojom::LinkGenerationError& slot, bool) {
    slot = static_cast<::blink::mojom::LinkGenerationError>(-1000001);
  }
  static bool IsDeletedValue(const ::blink::mojom::LinkGenerationError& value) {
    return value == static_cast<::blink::mojom::LinkGenerationError>(-1000001);
  }
};
}  // namespace WTF


namespace blink {
namespace mojom {
namespace blink {

class TextFragmentReceiverProxy;

template <typename ImplRefTraits>
class TextFragmentReceiverStub;

class TextFragmentReceiverRequestValidator;
class TextFragmentReceiverResponseValidator;


class PLATFORM_EXPORT TextFragmentReceiver
    : public TextFragmentReceiverInterfaceBase {
 public:
  using IPCStableHashFunction = uint32_t(*)();

  static const char Name_[];
  static IPCStableHashFunction MessageToMethodInfo_(mojo::Message& message);
  static const char* MessageToMethodName_(mojo::Message& message);
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;
  static constexpr bool HasUninterruptableMethods_ = false;

  using Base_ = TextFragmentReceiverInterfaceBase;
  using Proxy_ = TextFragmentReceiverProxy;

  template <typename ImplRefTraits>
  using Stub_ = TextFragmentReceiverStub<ImplRefTraits>;

  using RequestValidator_ = TextFragmentReceiverRequestValidator;
  using ResponseValidator_ = TextFragmentReceiverResponseValidator;
  enum MethodMinVersions : uint32_t {
    kCancelMinVersion = 0,
    kRequestSelectorMinVersion = 0,
    kRemoveFragmentsMinVersion = 0,
    kExtractTextFragmentsMatchesMinVersion = 0,
    kGetExistingSelectorsMinVersion = 0,
    kExtractFirstFragmentRectMinVersion = 0,
  };

// crbug.com/1340245 - this causes binary size bloat on Fuchsia, and we're OK
// with not having this data in traces there.
#if !BUILDFLAG(IS_FUCHSIA)
  struct Cancel_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct RequestSelector_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct RemoveFragments_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct ExtractTextFragmentsMatches_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct GetExistingSelectors_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct ExtractFirstFragmentRect_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
#endif // !BUILDFLAG(IS_FUCHSIA)
  virtual ~TextFragmentReceiver() = default;

  
  virtual void Cancel() = 0;


  using RequestSelectorCallback = base::OnceCallback<void(const WTF::String&, ::shared_highlighting::LinkGenerationError, ::shared_highlighting::LinkGenerationReadyStatus)>;
  
  virtual void RequestSelector(RequestSelectorCallback callback) = 0;

  
  virtual void RemoveFragments() = 0;


  using ExtractTextFragmentsMatchesCallback = base::OnceCallback<void(const WTF::Vector<WTF::String>&)>;
  
  virtual void ExtractTextFragmentsMatches(ExtractTextFragmentsMatchesCallback callback) = 0;


  using GetExistingSelectorsCallback = base::OnceCallback<void(const WTF::Vector<WTF::String>&)>;
  
  virtual void GetExistingSelectors(GetExistingSelectorsCallback callback) = 0;


  using ExtractFirstFragmentRectCallback = base::OnceCallback<void(const ::gfx::Rect&)>;
  
  virtual void ExtractFirstFragmentRect(ExtractFirstFragmentRectCallback callback) = 0;
};



class PLATFORM_EXPORT TextFragmentReceiverProxy
    : public TextFragmentReceiver {
 public:
  using InterfaceType = TextFragmentReceiver;

  explicit TextFragmentReceiverProxy(mojo::MessageReceiverWithResponder* receiver);
  
  void Cancel() final;
  
  void RequestSelector(RequestSelectorCallback callback) final;
  
  void RemoveFragments() final;
  
  void ExtractTextFragmentsMatches(ExtractTextFragmentsMatchesCallback callback) final;
  
  void GetExistingSelectors(GetExistingSelectorsCallback callback) final;
  
  void ExtractFirstFragmentRect(ExtractFirstFragmentRectCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class PLATFORM_EXPORT TextFragmentReceiverStubDispatch {
 public:
  static bool Accept(TextFragmentReceiver* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      TextFragmentReceiver* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<TextFragmentReceiver>>
class TextFragmentReceiverStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  TextFragmentReceiverStub() = default;
  ~TextFragmentReceiverStub() override = default;

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return TextFragmentReceiverStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return TextFragmentReceiverStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class PLATFORM_EXPORT TextFragmentReceiverRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class PLATFORM_EXPORT TextFragmentReceiverResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace blink
}  // namespace mojom
}  // namespace blink

namespace mojo {

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_LINK_TO_TEXT_LINK_TO_TEXT_MOJOM_BLINK_H_