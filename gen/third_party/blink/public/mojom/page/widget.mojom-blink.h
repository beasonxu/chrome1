// third_party/blink/public/mojom/page/widget.mojom-blink.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_PAGE_WIDGET_MOJOM_BLINK_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_PAGE_WIDGET_MOJOM_BLINK_H_

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

#include "third_party/blink/public/mojom/page/widget.mojom-shared.h"
#include "third_party/blink/public/mojom/page/widget.mojom-blink-forward.h"
#include "cc/mojom/touch_action.mojom-blink.h"
#include "mojo/public/mojom/base/text_direction.mojom-blink.h"
#include "services/viz/public/mojom/compositing/local_surface_id.mojom-blink-forward.h"
#include "services/viz/public/mojom/hit_test/input_target_client.mojom-blink-forward.h"
#include "skia/public/mojom/bitmap.mojom-blink.h"
#include "skia/public/mojom/skcolor.mojom-blink-forward.h"
#include "third_party/blink/public/mojom/frame/intrinsic_sizing_info.mojom-blink-forward.h"
#include "third_party/blink/public/mojom/frame/viewport_intersection_state.mojom-blink-forward.h"
#include "third_party/blink/public/mojom/input/touch_event.mojom-blink-forward.h"
#include "third_party/blink/public/mojom/drag/drag.mojom-blink.h"
#include "third_party/blink/public/mojom/widget/platform_widget.mojom-blink-forward.h"
#include "third_party/blink/public/mojom/widget/device_emulation_params.mojom-blink.h"
#include "third_party/blink/public/mojom/widget/visual_properties.mojom-blink.h"
#include "ui/base/dragdrop/mojom/drag_drop_types.mojom-blink-forward.h"
#include "ui/base/mojom/ui_base_types.mojom-blink-forward.h"
#include "ui/gfx/geometry/mojom/geometry.mojom-blink.h"

#include "mojo/public/cpp/bindings/lib/wtf_clone_equals_util.h"
#include "mojo/public/cpp/bindings/lib/wtf_hash_util.h"
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/raw_ptr_impl_ref_traits.h"


#include "third_party/blink/renderer/core/core_export.h"




namespace blink {
namespace mojom {
namespace blink {

class FrameWidgetProxy;

template <typename ImplRefTraits>
class FrameWidgetStub;

class FrameWidgetRequestValidator;
class FrameWidgetResponseValidator;


class CORE_EXPORT FrameWidget
    : public FrameWidgetInterfaceBase {
 public:
  using IPCStableHashFunction = uint32_t(*)();

  static const char Name_[];
  static IPCStableHashFunction MessageToMethodInfo_(mojo::Message& message);
  static const char* MessageToMethodName_(mojo::Message& message);
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;
  static constexpr bool HasUninterruptableMethods_ = false;

  using Base_ = FrameWidgetInterfaceBase;
  using Proxy_ = FrameWidgetProxy;

  template <typename ImplRefTraits>
  using Stub_ = FrameWidgetStub<ImplRefTraits>;

  using RequestValidator_ = FrameWidgetRequestValidator;
  using ResponseValidator_ = FrameWidgetResponseValidator;
  enum MethodMinVersions : uint32_t {
    kDragTargetDragEnterMinVersion = 0,
    kDragTargetDragOverMinVersion = 0,
    kDragTargetDragLeaveMinVersion = 0,
    kDragTargetDropMinVersion = 0,
    kDragSourceEndedAtMinVersion = 0,
    kDragSourceSystemDragEndedMinVersion = 0,
    kOnStartStylusWritingMinVersion = 0,
    kSetBackgroundOpaqueMinVersion = 0,
    kSetTextDirectionMinVersion = 0,
    kSetActiveMinVersion = 0,
    kSetInheritedEffectiveTouchActionForSubFrameMinVersion = 0,
    kUpdateRenderThrottlingStatusForSubFrameMinVersion = 0,
    kSetIsInertForSubFrameMinVersion = 0,
    kShowContextMenuMinVersion = 0,
    kEnableDeviceEmulationMinVersion = 0,
    kDisableDeviceEmulationMinVersion = 0,
    kBindWidgetCompositorMinVersion = 0,
    kBindInputTargetClientMinVersion = 0,
    kSetViewportIntersectionMinVersion = 0,
  };

// crbug.com/1340245 - this causes binary size bloat on Fuchsia, and we're OK
// with not having this data in traces there.
#if !BUILDFLAG(IS_FUCHSIA)
  struct DragTargetDragEnter_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct DragTargetDragOver_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct DragTargetDragLeave_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct DragTargetDrop_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct DragSourceEndedAt_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct DragSourceSystemDragEnded_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct OnStartStylusWriting_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct SetBackgroundOpaque_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct SetTextDirection_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct SetActive_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct SetInheritedEffectiveTouchActionForSubFrame_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct UpdateRenderThrottlingStatusForSubFrame_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct SetIsInertForSubFrame_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct ShowContextMenu_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct EnableDeviceEmulation_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct DisableDeviceEmulation_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct BindWidgetCompositor_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct BindInputTargetClient_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct SetViewportIntersection_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
#endif // !BUILDFLAG(IS_FUCHSIA)
  virtual ~FrameWidget() = default;


  using DragTargetDragEnterCallback = base::OnceCallback<void(::ui::mojom::blink::DragOperation)>;
  
  virtual void DragTargetDragEnter(const ::blink::WebDragData& drag_data, const ::gfx::PointF& point_in_viewport, const ::gfx::PointF& screen_point, ::blink::DragOperationsMask operations_allowed, uint32_t key_modifiers, DragTargetDragEnterCallback callback) = 0;


  using DragTargetDragOverCallback = base::OnceCallback<void(::ui::mojom::blink::DragOperation)>;
  
  virtual void DragTargetDragOver(const ::gfx::PointF& point_in_viewport, const ::gfx::PointF& screen_point, ::blink::DragOperationsMask operations_allowed, uint32_t key_modifiers, DragTargetDragOverCallback callback) = 0;

  
  virtual void DragTargetDragLeave(const ::gfx::PointF& point_in_viewport, const ::gfx::PointF& screen_point) = 0;


  using DragTargetDropCallback = base::OnceCallback<void()>;
  
  virtual void DragTargetDrop(const ::blink::WebDragData& drag_data, const ::gfx::PointF& point_in_viewport, const ::gfx::PointF& screen_point, uint32_t key_modifiers, DragTargetDropCallback callback) = 0;


  using DragSourceEndedAtCallback = base::OnceCallback<void()>;
  
  virtual void DragSourceEndedAt(const ::gfx::PointF& point_in_viewport, const ::gfx::PointF& screen_point, ::ui::mojom::blink::DragOperation drag_operation, DragSourceEndedAtCallback callback) = 0;

  
  virtual void DragSourceSystemDragEnded() = 0;


  using OnStartStylusWritingCallback = base::OnceCallback<void(const absl::optional<::gfx::Rect>&, const absl::optional<::gfx::Rect>&)>;
  
  virtual void OnStartStylusWriting(OnStartStylusWritingCallback callback) = 0;

  
  virtual void SetBackgroundOpaque(bool opaque) = 0;

  
  virtual void SetTextDirection(::base::i18n::TextDirection direction) = 0;

  
  virtual void SetActive(bool active) = 0;

  
  virtual void SetInheritedEffectiveTouchActionForSubFrame(::cc::TouchAction touch_action) = 0;

  
  virtual void UpdateRenderThrottlingStatusForSubFrame(bool is_throttled, bool subtree_throttled, bool display_locked) = 0;

  
  virtual void SetIsInertForSubFrame(bool inert) = 0;

  
  virtual void ShowContextMenu(::ui::mojom::blink::MenuSourceType source_type, const ::gfx::Point& location) = 0;

  
  virtual void EnableDeviceEmulation(const ::blink::DeviceEmulationParams& parameters) = 0;

  
  virtual void DisableDeviceEmulation() = 0;

  
  virtual void BindWidgetCompositor(::mojo::PendingReceiver<::blink::mojom::blink::WidgetCompositor> host) = 0;

  
  virtual void BindInputTargetClient(::mojo::PendingReceiver<::viz::mojom::blink::InputTargetClient> host) = 0;

  
  virtual void SetViewportIntersection(::blink::mojom::blink::ViewportIntersectionStatePtr intersection_state, const absl::optional<::blink::VisualProperties>& visual_properties) = 0;
};

class FrameWidgetHostProxy;

template <typename ImplRefTraits>
class FrameWidgetHostStub;

class FrameWidgetHostRequestValidator;


class CORE_EXPORT FrameWidgetHost
    : public FrameWidgetHostInterfaceBase {
 public:
  using IPCStableHashFunction = uint32_t(*)();

  static const char Name_[];
  static IPCStableHashFunction MessageToMethodInfo_(mojo::Message& message);
  static const char* MessageToMethodName_(mojo::Message& message);
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;
  static constexpr bool HasUninterruptableMethods_ = false;

  using Base_ = FrameWidgetHostInterfaceBase;
  using Proxy_ = FrameWidgetHostProxy;

  template <typename ImplRefTraits>
  using Stub_ = FrameWidgetHostStub<ImplRefTraits>;

  using RequestValidator_ = FrameWidgetHostRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kAnimateDoubleTapZoomInMainFrameMinVersion = 0,
    kZoomToFindInPageRectInMainFrameMinVersion = 0,
    kSetHasTouchEventConsumersMinVersion = 0,
    kIntrinsicSizingInfoChangedMinVersion = 0,
    kAutoscrollStartMinVersion = 0,
    kAutoscrollFlingMinVersion = 0,
    kAutoscrollEndMinVersion = 0,
    kStartDraggingMinVersion = 0,
  };

// crbug.com/1340245 - this causes binary size bloat on Fuchsia, and we're OK
// with not having this data in traces there.
#if !BUILDFLAG(IS_FUCHSIA)
  struct AnimateDoubleTapZoomInMainFrame_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct ZoomToFindInPageRectInMainFrame_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct SetHasTouchEventConsumers_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct IntrinsicSizingInfoChanged_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct AutoscrollStart_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct AutoscrollFling_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct AutoscrollEnd_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct StartDragging_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
#endif // !BUILDFLAG(IS_FUCHSIA)
  virtual ~FrameWidgetHost() = default;

  
  virtual void AnimateDoubleTapZoomInMainFrame(const ::gfx::Point& tap_point, const ::gfx::Rect& rect_to_zoom) = 0;

  
  virtual void ZoomToFindInPageRectInMainFrame(const ::gfx::Rect& rect_to_zoom) = 0;

  
  virtual void SetHasTouchEventConsumers(::blink::mojom::blink::TouchEventConsumersPtr touch_event_consumers) = 0;

  
  virtual void IntrinsicSizingInfoChanged(::blink::mojom::blink::IntrinsicSizingInfoPtr sizing_info) = 0;

  
  virtual void AutoscrollStart(const ::gfx::PointF& position) = 0;

  
  virtual void AutoscrollFling(const ::gfx::Vector2dF& velocity) = 0;

  
  virtual void AutoscrollEnd() = 0;

  
  virtual void StartDragging(const ::blink::WebDragData& drag_data, ::blink::DragOperationsMask operations_allowed, const ::SkBitmap& image, const ::gfx::Vector2d& bitmap_offset_in_dip, ::blink::mojom::blink::DragEventSourceInfoPtr event_info) = 0;
};

class PopupWidgetHostProxy;

template <typename ImplRefTraits>
class PopupWidgetHostStub;

class PopupWidgetHostRequestValidator;
class PopupWidgetHostResponseValidator;


class CORE_EXPORT PopupWidgetHost
    : public PopupWidgetHostInterfaceBase {
 public:
  using IPCStableHashFunction = uint32_t(*)();

  static const char Name_[];
  static IPCStableHashFunction MessageToMethodInfo_(mojo::Message& message);
  static const char* MessageToMethodName_(mojo::Message& message);
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;
  static constexpr bool HasUninterruptableMethods_ = false;

  using Base_ = PopupWidgetHostInterfaceBase;
  using Proxy_ = PopupWidgetHostProxy;

  template <typename ImplRefTraits>
  using Stub_ = PopupWidgetHostStub<ImplRefTraits>;

  using RequestValidator_ = PopupWidgetHostRequestValidator;
  using ResponseValidator_ = PopupWidgetHostResponseValidator;
  enum MethodMinVersions : uint32_t {
    kRequestClosePopupMinVersion = 0,
    kShowPopupMinVersion = 0,
    kSetPopupBoundsMinVersion = 0,
  };

// crbug.com/1340245 - this causes binary size bloat on Fuchsia, and we're OK
// with not having this data in traces there.
#if !BUILDFLAG(IS_FUCHSIA)
  struct RequestClosePopup_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct ShowPopup_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct SetPopupBounds_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
#endif // !BUILDFLAG(IS_FUCHSIA)
  virtual ~PopupWidgetHost() = default;

  
  virtual void RequestClosePopup() = 0;


  using ShowPopupCallback = base::OnceCallback<void()>;
  
  virtual void ShowPopup(const ::gfx::Rect& initial_rect, const ::gfx::Rect& anchor_rect, ShowPopupCallback callback) = 0;


  using SetPopupBoundsCallback = base::OnceCallback<void()>;
  
  virtual void SetPopupBounds(const ::gfx::Rect& bounds, SetPopupBoundsCallback callback) = 0;
};



class CORE_EXPORT FrameWidgetProxy
    : public FrameWidget {
 public:
  using InterfaceType = FrameWidget;

  explicit FrameWidgetProxy(mojo::MessageReceiverWithResponder* receiver);
  
  void DragTargetDragEnter(const ::blink::WebDragData& drag_data, const ::gfx::PointF& point_in_viewport, const ::gfx::PointF& screen_point, ::blink::DragOperationsMask operations_allowed, uint32_t key_modifiers, DragTargetDragEnterCallback callback) final;
  
  void DragTargetDragOver(const ::gfx::PointF& point_in_viewport, const ::gfx::PointF& screen_point, ::blink::DragOperationsMask operations_allowed, uint32_t key_modifiers, DragTargetDragOverCallback callback) final;
  
  void DragTargetDragLeave(const ::gfx::PointF& point_in_viewport, const ::gfx::PointF& screen_point) final;
  
  void DragTargetDrop(const ::blink::WebDragData& drag_data, const ::gfx::PointF& point_in_viewport, const ::gfx::PointF& screen_point, uint32_t key_modifiers, DragTargetDropCallback callback) final;
  
  void DragSourceEndedAt(const ::gfx::PointF& point_in_viewport, const ::gfx::PointF& screen_point, ::ui::mojom::blink::DragOperation drag_operation, DragSourceEndedAtCallback callback) final;
  
  void DragSourceSystemDragEnded() final;
  
  void OnStartStylusWriting(OnStartStylusWritingCallback callback) final;
  
  void SetBackgroundOpaque(bool opaque) final;
  
  void SetTextDirection(::base::i18n::TextDirection direction) final;
  
  void SetActive(bool active) final;
  
  void SetInheritedEffectiveTouchActionForSubFrame(::cc::TouchAction touch_action) final;
  
  void UpdateRenderThrottlingStatusForSubFrame(bool is_throttled, bool subtree_throttled, bool display_locked) final;
  
  void SetIsInertForSubFrame(bool inert) final;
  
  void ShowContextMenu(::ui::mojom::blink::MenuSourceType source_type, const ::gfx::Point& location) final;
  
  void EnableDeviceEmulation(const ::blink::DeviceEmulationParams& parameters) final;
  
  void DisableDeviceEmulation() final;
  
  void BindWidgetCompositor(::mojo::PendingReceiver<::blink::mojom::blink::WidgetCompositor> host) final;
  
  void BindInputTargetClient(::mojo::PendingReceiver<::viz::mojom::blink::InputTargetClient> host) final;
  
  void SetViewportIntersection(::blink::mojom::blink::ViewportIntersectionStatePtr intersection_state, const absl::optional<::blink::VisualProperties>& visual_properties) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};



class CORE_EXPORT FrameWidgetHostProxy
    : public FrameWidgetHost {
 public:
  using InterfaceType = FrameWidgetHost;

  explicit FrameWidgetHostProxy(mojo::MessageReceiverWithResponder* receiver);
  
  void AnimateDoubleTapZoomInMainFrame(const ::gfx::Point& tap_point, const ::gfx::Rect& rect_to_zoom) final;
  
  void ZoomToFindInPageRectInMainFrame(const ::gfx::Rect& rect_to_zoom) final;
  
  void SetHasTouchEventConsumers(::blink::mojom::blink::TouchEventConsumersPtr touch_event_consumers) final;
  
  void IntrinsicSizingInfoChanged(::blink::mojom::blink::IntrinsicSizingInfoPtr sizing_info) final;
  
  void AutoscrollStart(const ::gfx::PointF& position) final;
  
  void AutoscrollFling(const ::gfx::Vector2dF& velocity) final;
  
  void AutoscrollEnd() final;
  
  void StartDragging(const ::blink::WebDragData& drag_data, ::blink::DragOperationsMask operations_allowed, const ::SkBitmap& image, const ::gfx::Vector2d& bitmap_offset_in_dip, ::blink::mojom::blink::DragEventSourceInfoPtr event_info) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};



class CORE_EXPORT PopupWidgetHostProxy
    : public PopupWidgetHost {
 public:
  using InterfaceType = PopupWidgetHost;

  explicit PopupWidgetHostProxy(mojo::MessageReceiverWithResponder* receiver);
  
  void RequestClosePopup() final;
  
  void ShowPopup(const ::gfx::Rect& initial_rect, const ::gfx::Rect& anchor_rect, ShowPopupCallback callback) final;
  
  void SetPopupBounds(const ::gfx::Rect& bounds, SetPopupBoundsCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class CORE_EXPORT FrameWidgetStubDispatch {
 public:
  static bool Accept(FrameWidget* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      FrameWidget* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<FrameWidget>>
class FrameWidgetStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  FrameWidgetStub() = default;
  ~FrameWidgetStub() override = default;

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return FrameWidgetStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return FrameWidgetStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class CORE_EXPORT FrameWidgetHostStubDispatch {
 public:
  static bool Accept(FrameWidgetHost* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      FrameWidgetHost* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<FrameWidgetHost>>
class FrameWidgetHostStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  FrameWidgetHostStub() = default;
  ~FrameWidgetHostStub() override = default;

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return FrameWidgetHostStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return FrameWidgetHostStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class CORE_EXPORT PopupWidgetHostStubDispatch {
 public:
  static bool Accept(PopupWidgetHost* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      PopupWidgetHost* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<PopupWidgetHost>>
class PopupWidgetHostStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  PopupWidgetHostStub() = default;
  ~PopupWidgetHostStub() override = default;

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return PopupWidgetHostStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return PopupWidgetHostStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class CORE_EXPORT FrameWidgetRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class CORE_EXPORT FrameWidgetHostRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class CORE_EXPORT PopupWidgetHostRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class CORE_EXPORT FrameWidgetResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class CORE_EXPORT PopupWidgetHostResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace blink
}  // namespace mojom
}  // namespace blink

namespace mojo {

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_PAGE_WIDGET_MOJOM_BLINK_H_