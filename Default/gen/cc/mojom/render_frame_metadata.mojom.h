// cc/mojom/render_frame_metadata.mojom.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CC_MOJOM_RENDER_FRAME_METADATA_MOJOM_H_
#define CC_MOJOM_RENDER_FRAME_METADATA_MOJOM_H_

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

#include "cc/mojom/render_frame_metadata.mojom-shared.h"
#include "cc/mojom/render_frame_metadata.mojom-forward.h"
#include "mojo/public/mojom/base/time.mojom.h"
#include "services/viz/public/mojom/compositing/local_surface_id.mojom.h"
#include "services/viz/public/mojom/compositing/selection.mojom.h"
#include "services/viz/public/mojom/compositing/vertical_scroll_direction.mojom.h"
#include "skia/public/mojom/skcolor4f.mojom.h"
#include "ui/gfx/geometry/mojom/geometry.mojom.h"
#include <string>
#include <vector>

#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/raw_ptr_impl_ref_traits.h"


#include "cc/mojom/render_frame_metadata_mojom_traits.h"




namespace cc {
namespace mojom {

class RenderFrameMetadataObserverProxy;

template <typename ImplRefTraits>
class RenderFrameMetadataObserverStub;

class RenderFrameMetadataObserverRequestValidator;


class  RenderFrameMetadataObserver
    : public RenderFrameMetadataObserverInterfaceBase {
 public:
  using IPCStableHashFunction = uint32_t(*)();

  static const char Name_[];
  static IPCStableHashFunction MessageToMethodInfo_(mojo::Message& message);
  static const char* MessageToMethodName_(mojo::Message& message);
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;
  static constexpr bool HasUninterruptableMethods_ = false;

  using Base_ = RenderFrameMetadataObserverInterfaceBase;
  using Proxy_ = RenderFrameMetadataObserverProxy;

  template <typename ImplRefTraits>
  using Stub_ = RenderFrameMetadataObserverStub<ImplRefTraits>;

  using RequestValidator_ = RenderFrameMetadataObserverRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kReportAllRootScrollsMinVersion = 0,
    kReportAllFrameSubmissionsForTestingMinVersion = 0,
  };

// crbug.com/1340245 - this causes binary size bloat on Fuchsia, and we're OK
// with not having this data in traces there.
#if !BUILDFLAG(IS_FUCHSIA)
  struct ReportAllRootScrolls_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct ReportAllFrameSubmissionsForTesting_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
#endif // !BUILDFLAG(IS_FUCHSIA)
  virtual ~RenderFrameMetadataObserver() = default;

  
  virtual void ReportAllRootScrolls(bool enabled) = 0;

  
  virtual void ReportAllFrameSubmissionsForTesting(bool enabled) = 0;
};

class RenderFrameMetadataObserverClientProxy;

template <typename ImplRefTraits>
class RenderFrameMetadataObserverClientStub;

class RenderFrameMetadataObserverClientRequestValidator;


class  RenderFrameMetadataObserverClient
    : public RenderFrameMetadataObserverClientInterfaceBase {
 public:
  using IPCStableHashFunction = uint32_t(*)();

  static const char Name_[];
  static IPCStableHashFunction MessageToMethodInfo_(mojo::Message& message);
  static const char* MessageToMethodName_(mojo::Message& message);
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;
  static constexpr bool HasUninterruptableMethods_ = false;

  using Base_ = RenderFrameMetadataObserverClientInterfaceBase;
  using Proxy_ = RenderFrameMetadataObserverClientProxy;

  template <typename ImplRefTraits>
  using Stub_ = RenderFrameMetadataObserverClientStub<ImplRefTraits>;

  using RequestValidator_ = RenderFrameMetadataObserverClientRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kOnRenderFrameMetadataChangedMinVersion = 0,
    kOnFrameSubmissionForTestingMinVersion = 0,
    kOnRootScrollOffsetChangedMinVersion = 0,
  };

// crbug.com/1340245 - this causes binary size bloat on Fuchsia, and we're OK
// with not having this data in traces there.
#if !BUILDFLAG(IS_FUCHSIA)
  struct OnRenderFrameMetadataChanged_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct OnFrameSubmissionForTesting_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct OnRootScrollOffsetChanged_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
#endif // !BUILDFLAG(IS_FUCHSIA)
  virtual ~RenderFrameMetadataObserverClient() = default;

  
  virtual void OnRenderFrameMetadataChanged(uint32_t frame_token, const ::cc::RenderFrameMetadata& metadata) = 0;

  
  virtual void OnFrameSubmissionForTesting(uint32_t frame_token) = 0;

  
  virtual void OnRootScrollOffsetChanged(const ::gfx::PointF& root_scroll_offset) = 0;
};



class  RenderFrameMetadataObserverProxy
    : public RenderFrameMetadataObserver {
 public:
  using InterfaceType = RenderFrameMetadataObserver;

  explicit RenderFrameMetadataObserverProxy(mojo::MessageReceiverWithResponder* receiver);
  
  void ReportAllRootScrolls(bool enabled) final;
  
  void ReportAllFrameSubmissionsForTesting(bool enabled) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};



class  RenderFrameMetadataObserverClientProxy
    : public RenderFrameMetadataObserverClient {
 public:
  using InterfaceType = RenderFrameMetadataObserverClient;

  explicit RenderFrameMetadataObserverClientProxy(mojo::MessageReceiverWithResponder* receiver);
  
  void OnRenderFrameMetadataChanged(uint32_t frame_token, const ::cc::RenderFrameMetadata& metadata) final;
  
  void OnFrameSubmissionForTesting(uint32_t frame_token) final;
  
  void OnRootScrollOffsetChanged(const ::gfx::PointF& root_scroll_offset) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  RenderFrameMetadataObserverStubDispatch {
 public:
  static bool Accept(RenderFrameMetadataObserver* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      RenderFrameMetadataObserver* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<RenderFrameMetadataObserver>>
class RenderFrameMetadataObserverStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  RenderFrameMetadataObserverStub() = default;
  ~RenderFrameMetadataObserverStub() override = default;

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return RenderFrameMetadataObserverStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return RenderFrameMetadataObserverStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  RenderFrameMetadataObserverClientStubDispatch {
 public:
  static bool Accept(RenderFrameMetadataObserverClient* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      RenderFrameMetadataObserverClient* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<RenderFrameMetadataObserverClient>>
class RenderFrameMetadataObserverClientStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  RenderFrameMetadataObserverClientStub() = default;
  ~RenderFrameMetadataObserverClientStub() override = default;

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return RenderFrameMetadataObserverClientStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return RenderFrameMetadataObserverClientStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  RenderFrameMetadataObserverRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  RenderFrameMetadataObserverClientRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





class  DelegatedInkBrowserMetadata {
 public:
  template <typename T>
  using EnableIfSame = std::enable_if_t<std::is_same<DelegatedInkBrowserMetadata, T>::value>;
  using DataView = DelegatedInkBrowserMetadataDataView;
  using Data_ = internal::DelegatedInkBrowserMetadata_Data;

  template <typename... Args>
  static DelegatedInkBrowserMetadataPtr New(Args&&... args) {
    return DelegatedInkBrowserMetadataPtr(
        absl::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static DelegatedInkBrowserMetadataPtr From(const U& u) {
    return mojo::TypeConverter<DelegatedInkBrowserMetadataPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, DelegatedInkBrowserMetadata>::Convert(*this);
  }


  DelegatedInkBrowserMetadata();

  explicit DelegatedInkBrowserMetadata(
      bool delegated_ink_is_hovering);


  ~DelegatedInkBrowserMetadata();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = DelegatedInkBrowserMetadataPtr>
  DelegatedInkBrowserMetadataPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T, DelegatedInkBrowserMetadata::EnableIfSame<T>* = nullptr>
  bool Equals(const T& other) const;

  template <typename T, DelegatedInkBrowserMetadata::EnableIfSame<T>* = nullptr>
  bool operator==(const T& rhs) const { return Equals(rhs); }
  size_t Hash(size_t seed) const;
  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        DelegatedInkBrowserMetadata::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        DelegatedInkBrowserMetadata::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::DelegatedInkBrowserMetadata_UnserializedMessageContext<
            UserType, DelegatedInkBrowserMetadata::DataView>>(0, 0, std::move(input)),
        MOJO_CREATE_MESSAGE_FLAG_NONE);
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    mojo::Message message;
    return mojo::internal::DeserializeImpl<DelegatedInkBrowserMetadata::DataView>(
        message, data, data_num_bytes, output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return DelegatedInkBrowserMetadata::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::DelegatedInkBrowserMetadata_UnserializedMessageContext<
            UserType, DelegatedInkBrowserMetadata::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<DelegatedInkBrowserMetadata::DataView>(
        input, input.payload(), input.payload_num_bytes(), output, Validate);
  }

  
  bool delegated_ink_is_hovering;

  // Serialise this struct into a trace.
  void WriteIntoTrace(perfetto::TracedValue traced_context) const;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

// The comparison operators are templates, so they are only instantiated if they
// are used. Thus, the bindings generator does not need to know whether
// comparison operators are available for members.
template <typename T, DelegatedInkBrowserMetadata::EnableIfSame<T>* = nullptr>
bool operator<(const T& lhs, const T& rhs);

template <typename T, DelegatedInkBrowserMetadata::EnableIfSame<T>* = nullptr>
bool operator<=(const T& lhs, const T& rhs) {
  return !(rhs < lhs);
}

template <typename T, DelegatedInkBrowserMetadata::EnableIfSame<T>* = nullptr>
bool operator>(const T& lhs, const T& rhs) {
  return rhs < lhs;
}

template <typename T, DelegatedInkBrowserMetadata::EnableIfSame<T>* = nullptr>
bool operator>=(const T& lhs, const T& rhs) {
  return !(lhs < rhs);
}









class  RenderFrameMetadata {
 public:
  template <typename T>
  using EnableIfSame = std::enable_if_t<std::is_same<RenderFrameMetadata, T>::value>;
  using DataView = RenderFrameMetadataDataView;
  using Data_ = internal::RenderFrameMetadata_Data;

  template <typename... Args>
  static RenderFrameMetadataPtr New(Args&&... args) {
    return RenderFrameMetadataPtr(
        absl::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static RenderFrameMetadataPtr From(const U& u) {
    return mojo::TypeConverter<RenderFrameMetadataPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, RenderFrameMetadata>::Convert(*this);
  }


  RenderFrameMetadata();

  RenderFrameMetadata(
      const ::SkColor4f& root_background_color,
      const absl::optional<::gfx::PointF>& root_scroll_offset,
      bool is_scroll_offset_at_top,
      const ::viz::Selection<::gfx::SelectionBound>& selection,
      bool is_mobile_optimized,
      DelegatedInkBrowserMetadataPtr delegated_ink_metadata,
      float device_scale_factor,
      const ::gfx::Size& viewport_size_in_pixels,
      const absl::optional<::viz::LocalSurfaceId>& local_surface_id,
      float page_scale_factor,
      float external_page_scale_factor,
      float top_controls_height,
      float top_controls_shown_ratio,
      ::viz::VerticalScrollDirection new_vertical_scroll_direction,
      ::base::TimeDelta previous_surfaces_visual_update_duration,
      ::base::TimeDelta current_surface_visual_update_duration,
      float bottom_controls_height,
      float bottom_controls_shown_ratio,
      float top_controls_min_height_offset,
      float bottom_controls_min_height_offset,
      float min_page_scale_factor,
      float max_page_scale_factor,
      bool root_overflow_y_hidden,
      const ::gfx::SizeF& scrollable_viewport_size,
      const ::gfx::SizeF& root_layer_size,
      bool has_transparent_background);

RenderFrameMetadata(const RenderFrameMetadata&) = delete;
RenderFrameMetadata& operator=(const RenderFrameMetadata&) = delete;

  ~RenderFrameMetadata();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = RenderFrameMetadataPtr>
  RenderFrameMetadataPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T, RenderFrameMetadata::EnableIfSame<T>* = nullptr>
  bool Equals(const T& other) const;

  template <typename T, RenderFrameMetadata::EnableIfSame<T>* = nullptr>
  bool operator==(const T& rhs) const { return Equals(rhs); }
  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        RenderFrameMetadata::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        RenderFrameMetadata::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::RenderFrameMetadata_UnserializedMessageContext<
            UserType, RenderFrameMetadata::DataView>>(0, 0, std::move(input)),
        MOJO_CREATE_MESSAGE_FLAG_NONE);
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    mojo::Message message;
    return mojo::internal::DeserializeImpl<RenderFrameMetadata::DataView>(
        message, data, data_num_bytes, output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return RenderFrameMetadata::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::RenderFrameMetadata_UnserializedMessageContext<
            UserType, RenderFrameMetadata::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<RenderFrameMetadata::DataView>(
        input, input.payload(), input.payload_num_bytes(), output, Validate);
  }

  
  ::SkColor4f root_background_color;
  
  absl::optional<::gfx::PointF> root_scroll_offset;
  
  bool is_scroll_offset_at_top;
  
  ::viz::Selection<::gfx::SelectionBound> selection;
  
  bool is_mobile_optimized;
  
  DelegatedInkBrowserMetadataPtr delegated_ink_metadata;
  
  float device_scale_factor;
  
  ::gfx::Size viewport_size_in_pixels;
  
  absl::optional<::viz::LocalSurfaceId> local_surface_id;
  
  float page_scale_factor;
  
  float external_page_scale_factor;
  
  float top_controls_height;
  
  float top_controls_shown_ratio;
  
  ::viz::VerticalScrollDirection new_vertical_scroll_direction;
  
  ::base::TimeDelta previous_surfaces_visual_update_duration;
  
  ::base::TimeDelta current_surface_visual_update_duration;
  
  float bottom_controls_height;
  
  float bottom_controls_shown_ratio;
  
  float top_controls_min_height_offset;
  
  float bottom_controls_min_height_offset;
  
  float min_page_scale_factor;
  
  float max_page_scale_factor;
  
  bool root_overflow_y_hidden;
  
  ::gfx::SizeF scrollable_viewport_size;
  
  ::gfx::SizeF root_layer_size;
  
  bool has_transparent_background;

  // Serialise this struct into a trace.
  void WriteIntoTrace(perfetto::TracedValue traced_context) const;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

// The comparison operators are templates, so they are only instantiated if they
// are used. Thus, the bindings generator does not need to know whether
// comparison operators are available for members.
template <typename T, RenderFrameMetadata::EnableIfSame<T>* = nullptr>
bool operator<(const T& lhs, const T& rhs);

template <typename T, RenderFrameMetadata::EnableIfSame<T>* = nullptr>
bool operator<=(const T& lhs, const T& rhs) {
  return !(rhs < lhs);
}

template <typename T, RenderFrameMetadata::EnableIfSame<T>* = nullptr>
bool operator>(const T& lhs, const T& rhs) {
  return rhs < lhs;
}

template <typename T, RenderFrameMetadata::EnableIfSame<T>* = nullptr>
bool operator>=(const T& lhs, const T& rhs) {
  return !(lhs < rhs);
}

template <typename StructPtrType>
DelegatedInkBrowserMetadataPtr DelegatedInkBrowserMetadata::Clone() const {
  return New(
      mojo::Clone(delegated_ink_is_hovering)
  );
}

template <typename T, DelegatedInkBrowserMetadata::EnableIfSame<T>*>
bool DelegatedInkBrowserMetadata::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->delegated_ink_is_hovering, other_struct.delegated_ink_is_hovering))
    return false;
  return true;
}

template <typename T, DelegatedInkBrowserMetadata::EnableIfSame<T>*>
bool operator<(const T& lhs, const T& rhs) {
  if (lhs.delegated_ink_is_hovering < rhs.delegated_ink_is_hovering)
    return true;
  if (rhs.delegated_ink_is_hovering < lhs.delegated_ink_is_hovering)
    return false;
  return false;
}
template <typename StructPtrType>
RenderFrameMetadataPtr RenderFrameMetadata::Clone() const {
  return New(
      mojo::Clone(root_background_color),
      mojo::Clone(root_scroll_offset),
      mojo::Clone(is_scroll_offset_at_top),
      mojo::Clone(selection),
      mojo::Clone(is_mobile_optimized),
      mojo::Clone(delegated_ink_metadata),
      mojo::Clone(device_scale_factor),
      mojo::Clone(viewport_size_in_pixels),
      mojo::Clone(local_surface_id),
      mojo::Clone(page_scale_factor),
      mojo::Clone(external_page_scale_factor),
      mojo::Clone(top_controls_height),
      mojo::Clone(top_controls_shown_ratio),
      mojo::Clone(new_vertical_scroll_direction),
      mojo::Clone(previous_surfaces_visual_update_duration),
      mojo::Clone(current_surface_visual_update_duration),
      mojo::Clone(bottom_controls_height),
      mojo::Clone(bottom_controls_shown_ratio),
      mojo::Clone(top_controls_min_height_offset),
      mojo::Clone(bottom_controls_min_height_offset),
      mojo::Clone(min_page_scale_factor),
      mojo::Clone(max_page_scale_factor),
      mojo::Clone(root_overflow_y_hidden),
      mojo::Clone(scrollable_viewport_size),
      mojo::Clone(root_layer_size),
      mojo::Clone(has_transparent_background)
  );
}

template <typename T, RenderFrameMetadata::EnableIfSame<T>*>
bool RenderFrameMetadata::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->root_background_color, other_struct.root_background_color))
    return false;
  if (!mojo::Equals(this->root_scroll_offset, other_struct.root_scroll_offset))
    return false;
  if (!mojo::Equals(this->is_scroll_offset_at_top, other_struct.is_scroll_offset_at_top))
    return false;
  if (!mojo::Equals(this->selection, other_struct.selection))
    return false;
  if (!mojo::Equals(this->is_mobile_optimized, other_struct.is_mobile_optimized))
    return false;
  if (!mojo::Equals(this->delegated_ink_metadata, other_struct.delegated_ink_metadata))
    return false;
  if (!mojo::Equals(this->device_scale_factor, other_struct.device_scale_factor))
    return false;
  if (!mojo::Equals(this->viewport_size_in_pixels, other_struct.viewport_size_in_pixels))
    return false;
  if (!mojo::Equals(this->local_surface_id, other_struct.local_surface_id))
    return false;
  if (!mojo::Equals(this->page_scale_factor, other_struct.page_scale_factor))
    return false;
  if (!mojo::Equals(this->external_page_scale_factor, other_struct.external_page_scale_factor))
    return false;
  if (!mojo::Equals(this->top_controls_height, other_struct.top_controls_height))
    return false;
  if (!mojo::Equals(this->top_controls_shown_ratio, other_struct.top_controls_shown_ratio))
    return false;
  if (!mojo::Equals(this->new_vertical_scroll_direction, other_struct.new_vertical_scroll_direction))
    return false;
  if (!mojo::Equals(this->previous_surfaces_visual_update_duration, other_struct.previous_surfaces_visual_update_duration))
    return false;
  if (!mojo::Equals(this->current_surface_visual_update_duration, other_struct.current_surface_visual_update_duration))
    return false;
  if (!mojo::Equals(this->bottom_controls_height, other_struct.bottom_controls_height))
    return false;
  if (!mojo::Equals(this->bottom_controls_shown_ratio, other_struct.bottom_controls_shown_ratio))
    return false;
  if (!mojo::Equals(this->top_controls_min_height_offset, other_struct.top_controls_min_height_offset))
    return false;
  if (!mojo::Equals(this->bottom_controls_min_height_offset, other_struct.bottom_controls_min_height_offset))
    return false;
  if (!mojo::Equals(this->min_page_scale_factor, other_struct.min_page_scale_factor))
    return false;
  if (!mojo::Equals(this->max_page_scale_factor, other_struct.max_page_scale_factor))
    return false;
  if (!mojo::Equals(this->root_overflow_y_hidden, other_struct.root_overflow_y_hidden))
    return false;
  if (!mojo::Equals(this->scrollable_viewport_size, other_struct.scrollable_viewport_size))
    return false;
  if (!mojo::Equals(this->root_layer_size, other_struct.root_layer_size))
    return false;
  if (!mojo::Equals(this->has_transparent_background, other_struct.has_transparent_background))
    return false;
  return true;
}

template <typename T, RenderFrameMetadata::EnableIfSame<T>*>
bool operator<(const T& lhs, const T& rhs) {
  if (lhs.root_background_color < rhs.root_background_color)
    return true;
  if (rhs.root_background_color < lhs.root_background_color)
    return false;
  if (lhs.root_scroll_offset < rhs.root_scroll_offset)
    return true;
  if (rhs.root_scroll_offset < lhs.root_scroll_offset)
    return false;
  if (lhs.is_scroll_offset_at_top < rhs.is_scroll_offset_at_top)
    return true;
  if (rhs.is_scroll_offset_at_top < lhs.is_scroll_offset_at_top)
    return false;
  if (lhs.selection < rhs.selection)
    return true;
  if (rhs.selection < lhs.selection)
    return false;
  if (lhs.is_mobile_optimized < rhs.is_mobile_optimized)
    return true;
  if (rhs.is_mobile_optimized < lhs.is_mobile_optimized)
    return false;
  if (lhs.delegated_ink_metadata < rhs.delegated_ink_metadata)
    return true;
  if (rhs.delegated_ink_metadata < lhs.delegated_ink_metadata)
    return false;
  if (lhs.device_scale_factor < rhs.device_scale_factor)
    return true;
  if (rhs.device_scale_factor < lhs.device_scale_factor)
    return false;
  if (lhs.viewport_size_in_pixels < rhs.viewport_size_in_pixels)
    return true;
  if (rhs.viewport_size_in_pixels < lhs.viewport_size_in_pixels)
    return false;
  if (lhs.local_surface_id < rhs.local_surface_id)
    return true;
  if (rhs.local_surface_id < lhs.local_surface_id)
    return false;
  if (lhs.page_scale_factor < rhs.page_scale_factor)
    return true;
  if (rhs.page_scale_factor < lhs.page_scale_factor)
    return false;
  if (lhs.external_page_scale_factor < rhs.external_page_scale_factor)
    return true;
  if (rhs.external_page_scale_factor < lhs.external_page_scale_factor)
    return false;
  if (lhs.top_controls_height < rhs.top_controls_height)
    return true;
  if (rhs.top_controls_height < lhs.top_controls_height)
    return false;
  if (lhs.top_controls_shown_ratio < rhs.top_controls_shown_ratio)
    return true;
  if (rhs.top_controls_shown_ratio < lhs.top_controls_shown_ratio)
    return false;
  if (lhs.new_vertical_scroll_direction < rhs.new_vertical_scroll_direction)
    return true;
  if (rhs.new_vertical_scroll_direction < lhs.new_vertical_scroll_direction)
    return false;
  if (lhs.previous_surfaces_visual_update_duration < rhs.previous_surfaces_visual_update_duration)
    return true;
  if (rhs.previous_surfaces_visual_update_duration < lhs.previous_surfaces_visual_update_duration)
    return false;
  if (lhs.current_surface_visual_update_duration < rhs.current_surface_visual_update_duration)
    return true;
  if (rhs.current_surface_visual_update_duration < lhs.current_surface_visual_update_duration)
    return false;
  if (lhs.bottom_controls_height < rhs.bottom_controls_height)
    return true;
  if (rhs.bottom_controls_height < lhs.bottom_controls_height)
    return false;
  if (lhs.bottom_controls_shown_ratio < rhs.bottom_controls_shown_ratio)
    return true;
  if (rhs.bottom_controls_shown_ratio < lhs.bottom_controls_shown_ratio)
    return false;
  if (lhs.top_controls_min_height_offset < rhs.top_controls_min_height_offset)
    return true;
  if (rhs.top_controls_min_height_offset < lhs.top_controls_min_height_offset)
    return false;
  if (lhs.bottom_controls_min_height_offset < rhs.bottom_controls_min_height_offset)
    return true;
  if (rhs.bottom_controls_min_height_offset < lhs.bottom_controls_min_height_offset)
    return false;
  if (lhs.min_page_scale_factor < rhs.min_page_scale_factor)
    return true;
  if (rhs.min_page_scale_factor < lhs.min_page_scale_factor)
    return false;
  if (lhs.max_page_scale_factor < rhs.max_page_scale_factor)
    return true;
  if (rhs.max_page_scale_factor < lhs.max_page_scale_factor)
    return false;
  if (lhs.root_overflow_y_hidden < rhs.root_overflow_y_hidden)
    return true;
  if (rhs.root_overflow_y_hidden < lhs.root_overflow_y_hidden)
    return false;
  if (lhs.scrollable_viewport_size < rhs.scrollable_viewport_size)
    return true;
  if (rhs.scrollable_viewport_size < lhs.scrollable_viewport_size)
    return false;
  if (lhs.root_layer_size < rhs.root_layer_size)
    return true;
  if (rhs.root_layer_size < lhs.root_layer_size)
    return false;
  if (lhs.has_transparent_background < rhs.has_transparent_background)
    return true;
  if (rhs.has_transparent_background < lhs.has_transparent_background)
    return false;
  return false;
}


}  // namespace mojom
}  // namespace cc

namespace mojo {


template <>
struct  StructTraits<::cc::mojom::DelegatedInkBrowserMetadata::DataView,
                                         ::cc::mojom::DelegatedInkBrowserMetadataPtr> {
  static bool IsNull(const ::cc::mojom::DelegatedInkBrowserMetadataPtr& input) { return !input; }
  static void SetToNull(::cc::mojom::DelegatedInkBrowserMetadataPtr* output) { output->reset(); }

  static decltype(::cc::mojom::DelegatedInkBrowserMetadata::delegated_ink_is_hovering) delegated_ink_is_hovering(
      const ::cc::mojom::DelegatedInkBrowserMetadataPtr& input) {
    return input->delegated_ink_is_hovering;
  }

  static bool Read(::cc::mojom::DelegatedInkBrowserMetadata::DataView input, ::cc::mojom::DelegatedInkBrowserMetadataPtr* output);
};


template <>
struct  StructTraits<::cc::mojom::RenderFrameMetadata::DataView,
                                         ::cc::mojom::RenderFrameMetadataPtr> {
  static bool IsNull(const ::cc::mojom::RenderFrameMetadataPtr& input) { return !input; }
  static void SetToNull(::cc::mojom::RenderFrameMetadataPtr* output) { output->reset(); }

  static const decltype(::cc::mojom::RenderFrameMetadata::root_background_color)& root_background_color(
      const ::cc::mojom::RenderFrameMetadataPtr& input) {
    return input->root_background_color;
  }

  static const decltype(::cc::mojom::RenderFrameMetadata::root_scroll_offset)& root_scroll_offset(
      const ::cc::mojom::RenderFrameMetadataPtr& input) {
    return input->root_scroll_offset;
  }

  static decltype(::cc::mojom::RenderFrameMetadata::is_scroll_offset_at_top) is_scroll_offset_at_top(
      const ::cc::mojom::RenderFrameMetadataPtr& input) {
    return input->is_scroll_offset_at_top;
  }

  static const decltype(::cc::mojom::RenderFrameMetadata::selection)& selection(
      const ::cc::mojom::RenderFrameMetadataPtr& input) {
    return input->selection;
  }

  static decltype(::cc::mojom::RenderFrameMetadata::is_mobile_optimized) is_mobile_optimized(
      const ::cc::mojom::RenderFrameMetadataPtr& input) {
    return input->is_mobile_optimized;
  }

  static const decltype(::cc::mojom::RenderFrameMetadata::delegated_ink_metadata)& delegated_ink_metadata(
      const ::cc::mojom::RenderFrameMetadataPtr& input) {
    return input->delegated_ink_metadata;
  }

  static decltype(::cc::mojom::RenderFrameMetadata::device_scale_factor) device_scale_factor(
      const ::cc::mojom::RenderFrameMetadataPtr& input) {
    return input->device_scale_factor;
  }

  static const decltype(::cc::mojom::RenderFrameMetadata::viewport_size_in_pixels)& viewport_size_in_pixels(
      const ::cc::mojom::RenderFrameMetadataPtr& input) {
    return input->viewport_size_in_pixels;
  }

  static const decltype(::cc::mojom::RenderFrameMetadata::local_surface_id)& local_surface_id(
      const ::cc::mojom::RenderFrameMetadataPtr& input) {
    return input->local_surface_id;
  }

  static decltype(::cc::mojom::RenderFrameMetadata::page_scale_factor) page_scale_factor(
      const ::cc::mojom::RenderFrameMetadataPtr& input) {
    return input->page_scale_factor;
  }

  static decltype(::cc::mojom::RenderFrameMetadata::external_page_scale_factor) external_page_scale_factor(
      const ::cc::mojom::RenderFrameMetadataPtr& input) {
    return input->external_page_scale_factor;
  }

  static decltype(::cc::mojom::RenderFrameMetadata::top_controls_height) top_controls_height(
      const ::cc::mojom::RenderFrameMetadataPtr& input) {
    return input->top_controls_height;
  }

  static decltype(::cc::mojom::RenderFrameMetadata::top_controls_shown_ratio) top_controls_shown_ratio(
      const ::cc::mojom::RenderFrameMetadataPtr& input) {
    return input->top_controls_shown_ratio;
  }

  static decltype(::cc::mojom::RenderFrameMetadata::new_vertical_scroll_direction) new_vertical_scroll_direction(
      const ::cc::mojom::RenderFrameMetadataPtr& input) {
    return input->new_vertical_scroll_direction;
  }

  static const decltype(::cc::mojom::RenderFrameMetadata::previous_surfaces_visual_update_duration)& previous_surfaces_visual_update_duration(
      const ::cc::mojom::RenderFrameMetadataPtr& input) {
    return input->previous_surfaces_visual_update_duration;
  }

  static const decltype(::cc::mojom::RenderFrameMetadata::current_surface_visual_update_duration)& current_surface_visual_update_duration(
      const ::cc::mojom::RenderFrameMetadataPtr& input) {
    return input->current_surface_visual_update_duration;
  }

  static decltype(::cc::mojom::RenderFrameMetadata::bottom_controls_height) bottom_controls_height(
      const ::cc::mojom::RenderFrameMetadataPtr& input) {
    return input->bottom_controls_height;
  }

  static decltype(::cc::mojom::RenderFrameMetadata::bottom_controls_shown_ratio) bottom_controls_shown_ratio(
      const ::cc::mojom::RenderFrameMetadataPtr& input) {
    return input->bottom_controls_shown_ratio;
  }

  static decltype(::cc::mojom::RenderFrameMetadata::top_controls_min_height_offset) top_controls_min_height_offset(
      const ::cc::mojom::RenderFrameMetadataPtr& input) {
    return input->top_controls_min_height_offset;
  }

  static decltype(::cc::mojom::RenderFrameMetadata::bottom_controls_min_height_offset) bottom_controls_min_height_offset(
      const ::cc::mojom::RenderFrameMetadataPtr& input) {
    return input->bottom_controls_min_height_offset;
  }

  static decltype(::cc::mojom::RenderFrameMetadata::min_page_scale_factor) min_page_scale_factor(
      const ::cc::mojom::RenderFrameMetadataPtr& input) {
    return input->min_page_scale_factor;
  }

  static decltype(::cc::mojom::RenderFrameMetadata::max_page_scale_factor) max_page_scale_factor(
      const ::cc::mojom::RenderFrameMetadataPtr& input) {
    return input->max_page_scale_factor;
  }

  static decltype(::cc::mojom::RenderFrameMetadata::root_overflow_y_hidden) root_overflow_y_hidden(
      const ::cc::mojom::RenderFrameMetadataPtr& input) {
    return input->root_overflow_y_hidden;
  }

  static const decltype(::cc::mojom::RenderFrameMetadata::scrollable_viewport_size)& scrollable_viewport_size(
      const ::cc::mojom::RenderFrameMetadataPtr& input) {
    return input->scrollable_viewport_size;
  }

  static const decltype(::cc::mojom::RenderFrameMetadata::root_layer_size)& root_layer_size(
      const ::cc::mojom::RenderFrameMetadataPtr& input) {
    return input->root_layer_size;
  }

  static decltype(::cc::mojom::RenderFrameMetadata::has_transparent_background) has_transparent_background(
      const ::cc::mojom::RenderFrameMetadataPtr& input) {
    return input->has_transparent_background;
  }

  static bool Read(::cc::mojom::RenderFrameMetadata::DataView input, ::cc::mojom::RenderFrameMetadataPtr* output);
};

}  // namespace mojo

#endif  // CC_MOJOM_RENDER_FRAME_METADATA_MOJOM_H_