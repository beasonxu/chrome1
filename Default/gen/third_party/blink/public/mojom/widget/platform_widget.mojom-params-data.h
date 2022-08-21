// third_party/blink/public/mojom/widget/platform_widget.mojom-params-data.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_WIDGET_PLATFORM_WIDGET_MOJOM_PARAMS_DATA_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_WIDGET_PLATFORM_WIDGET_MOJOM_PARAMS_DATA_H_

#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#endif
namespace blink {
namespace mojom {
namespace internal {

class ValidationContext;
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) WidgetCompositor_VisualStateRequest_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  friend class mojo::internal::MessageFragment<WidgetCompositor_VisualStateRequest_Params_Data>;

  WidgetCompositor_VisualStateRequest_Params_Data();
  ~WidgetCompositor_VisualStateRequest_Params_Data() = delete;
};
static_assert(sizeof(WidgetCompositor_VisualStateRequest_Params_Data) == 8,
              "Bad sizeof(WidgetCompositor_VisualStateRequest_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) WidgetCompositor_VisualStateRequest_ResponseParams_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  friend class mojo::internal::MessageFragment<WidgetCompositor_VisualStateRequest_ResponseParams_Data>;

  WidgetCompositor_VisualStateRequest_ResponseParams_Data();
  ~WidgetCompositor_VisualStateRequest_ResponseParams_Data() = delete;
};
static_assert(sizeof(WidgetCompositor_VisualStateRequest_ResponseParams_Data) == 8,
              "Bad sizeof(WidgetCompositor_VisualStateRequest_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) WidgetHost_SetCursor_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::ui::mojom::internal::Cursor_Data> cursor;

 private:
  friend class mojo::internal::MessageFragment<WidgetHost_SetCursor_Params_Data>;

  WidgetHost_SetCursor_Params_Data();
  ~WidgetHost_SetCursor_Params_Data() = delete;
};
static_assert(sizeof(WidgetHost_SetCursor_Params_Data) == 16,
              "Bad sizeof(WidgetHost_SetCursor_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) WidgetHost_UpdateTooltipUnderCursor_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> tooltip_text;
  int32_t text_direction_hint;
  uint8_t padfinal_[4];

 private:
  friend class mojo::internal::MessageFragment<WidgetHost_UpdateTooltipUnderCursor_Params_Data>;

  WidgetHost_UpdateTooltipUnderCursor_Params_Data();
  ~WidgetHost_UpdateTooltipUnderCursor_Params_Data() = delete;
};
static_assert(sizeof(WidgetHost_UpdateTooltipUnderCursor_Params_Data) == 24,
              "Bad sizeof(WidgetHost_UpdateTooltipUnderCursor_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) WidgetHost_UpdateTooltipFromKeyboard_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> tooltip_text;
  int32_t text_direction_hint;
  uint8_t pad1_[4];
  mojo::internal::Pointer<::gfx::mojom::internal::Rect_Data> bounds;

 private:
  friend class mojo::internal::MessageFragment<WidgetHost_UpdateTooltipFromKeyboard_Params_Data>;

  WidgetHost_UpdateTooltipFromKeyboard_Params_Data();
  ~WidgetHost_UpdateTooltipFromKeyboard_Params_Data() = delete;
};
static_assert(sizeof(WidgetHost_UpdateTooltipFromKeyboard_Params_Data) == 32,
              "Bad sizeof(WidgetHost_UpdateTooltipFromKeyboard_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) WidgetHost_ClearKeyboardTriggeredTooltip_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  friend class mojo::internal::MessageFragment<WidgetHost_ClearKeyboardTriggeredTooltip_Params_Data>;

  WidgetHost_ClearKeyboardTriggeredTooltip_Params_Data();
  ~WidgetHost_ClearKeyboardTriggeredTooltip_Params_Data() = delete;
};
static_assert(sizeof(WidgetHost_ClearKeyboardTriggeredTooltip_Params_Data) == 8,
              "Bad sizeof(WidgetHost_ClearKeyboardTriggeredTooltip_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) WidgetHost_TextInputStateChanged_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::ui::mojom::internal::TextInputState_Data> state;

 private:
  friend class mojo::internal::MessageFragment<WidgetHost_TextInputStateChanged_Params_Data>;

  WidgetHost_TextInputStateChanged_Params_Data();
  ~WidgetHost_TextInputStateChanged_Params_Data() = delete;
};
static_assert(sizeof(WidgetHost_TextInputStateChanged_Params_Data) == 16,
              "Bad sizeof(WidgetHost_TextInputStateChanged_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) WidgetHost_SelectionBoundsChanged_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::gfx::mojom::internal::Rect_Data> anchor_rect;
  int32_t anchor_dir;
  int32_t focus_dir;
  mojo::internal::Pointer<::gfx::mojom::internal::Rect_Data> focus_rect;
  mojo::internal::Pointer<::gfx::mojom::internal::Rect_Data> bounding_box_rect;
  uint8_t is_anchor_first : 1;
  uint8_t padfinal_[7];

 private:
  friend class mojo::internal::MessageFragment<WidgetHost_SelectionBoundsChanged_Params_Data>;

  WidgetHost_SelectionBoundsChanged_Params_Data();
  ~WidgetHost_SelectionBoundsChanged_Params_Data() = delete;
};
static_assert(sizeof(WidgetHost_SelectionBoundsChanged_Params_Data) == 48,
              "Bad sizeof(WidgetHost_SelectionBoundsChanged_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) WidgetHost_CreateFrameSink_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data compositor_frame_sink_receiver;
  mojo::internal::Interface_Data compositor_frame_sink_client;
  uint8_t padfinal_[4];

 private:
  friend class mojo::internal::MessageFragment<WidgetHost_CreateFrameSink_Params_Data>;

  WidgetHost_CreateFrameSink_Params_Data();
  ~WidgetHost_CreateFrameSink_Params_Data() = delete;
};
static_assert(sizeof(WidgetHost_CreateFrameSink_Params_Data) == 24,
              "Bad sizeof(WidgetHost_CreateFrameSink_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) WidgetHost_RegisterRenderFrameMetadataObserver_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data render_frame_metadata_observer_client_receiver;
  mojo::internal::Interface_Data render_frame_metadata_observer;
  uint8_t padfinal_[4];

 private:
  friend class mojo::internal::MessageFragment<WidgetHost_RegisterRenderFrameMetadataObserver_Params_Data>;

  WidgetHost_RegisterRenderFrameMetadataObserver_Params_Data();
  ~WidgetHost_RegisterRenderFrameMetadataObserver_Params_Data() = delete;
};
static_assert(sizeof(WidgetHost_RegisterRenderFrameMetadataObserver_Params_Data) == 24,
              "Bad sizeof(WidgetHost_RegisterRenderFrameMetadataObserver_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) Widget_ForceRedraw_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  friend class mojo::internal::MessageFragment<Widget_ForceRedraw_Params_Data>;

  Widget_ForceRedraw_Params_Data();
  ~Widget_ForceRedraw_Params_Data() = delete;
};
static_assert(sizeof(Widget_ForceRedraw_Params_Data) == 8,
              "Bad sizeof(Widget_ForceRedraw_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) Widget_ForceRedraw_ResponseParams_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  friend class mojo::internal::MessageFragment<Widget_ForceRedraw_ResponseParams_Data>;

  Widget_ForceRedraw_ResponseParams_Data();
  ~Widget_ForceRedraw_ResponseParams_Data() = delete;
};
static_assert(sizeof(Widget_ForceRedraw_ResponseParams_Data) == 8,
              "Bad sizeof(Widget_ForceRedraw_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) Widget_GetWidgetInputHandler_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data request;
  mojo::internal::Interface_Data host;
  uint8_t padfinal_[4];

 private:
  friend class mojo::internal::MessageFragment<Widget_GetWidgetInputHandler_Params_Data>;

  Widget_GetWidgetInputHandler_Params_Data();
  ~Widget_GetWidgetInputHandler_Params_Data() = delete;
};
static_assert(sizeof(Widget_GetWidgetInputHandler_Params_Data) == 24,
              "Bad sizeof(Widget_GetWidgetInputHandler_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) Widget_UpdateVisualProperties_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::blink::mojom::internal::VisualProperties_Data> visual_properties;

 private:
  friend class mojo::internal::MessageFragment<Widget_UpdateVisualProperties_Params_Data>;

  Widget_UpdateVisualProperties_Params_Data();
  ~Widget_UpdateVisualProperties_Params_Data() = delete;
};
static_assert(sizeof(Widget_UpdateVisualProperties_Params_Data) == 16,
              "Bad sizeof(Widget_UpdateVisualProperties_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) Widget_UpdateScreenRects_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::gfx::mojom::internal::Rect_Data> widget_screen_rect;
  mojo::internal::Pointer<::gfx::mojom::internal::Rect_Data> window_screen_rect;

 private:
  friend class mojo::internal::MessageFragment<Widget_UpdateScreenRects_Params_Data>;

  Widget_UpdateScreenRects_Params_Data();
  ~Widget_UpdateScreenRects_Params_Data() = delete;
};
static_assert(sizeof(Widget_UpdateScreenRects_Params_Data) == 24,
              "Bad sizeof(Widget_UpdateScreenRects_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) Widget_UpdateScreenRects_ResponseParams_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  friend class mojo::internal::MessageFragment<Widget_UpdateScreenRects_ResponseParams_Data>;

  Widget_UpdateScreenRects_ResponseParams_Data();
  ~Widget_UpdateScreenRects_ResponseParams_Data() = delete;
};
static_assert(sizeof(Widget_UpdateScreenRects_ResponseParams_Data) == 8,
              "Bad sizeof(Widget_UpdateScreenRects_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) Widget_WasHidden_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  friend class mojo::internal::MessageFragment<Widget_WasHidden_Params_Data>;

  Widget_WasHidden_Params_Data();
  ~Widget_WasHidden_Params_Data() = delete;
};
static_assert(sizeof(Widget_WasHidden_Params_Data) == 8,
              "Bad sizeof(Widget_WasHidden_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) Widget_WasShown_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t was_evicted : 1;
  uint8_t pad0_[7];
  mojo::internal::Pointer<::blink::mojom::internal::RecordContentToVisibleTimeRequest_Data> record_tab_switch_time_request;

 private:
  friend class mojo::internal::MessageFragment<Widget_WasShown_Params_Data>;

  Widget_WasShown_Params_Data();
  ~Widget_WasShown_Params_Data() = delete;
};
static_assert(sizeof(Widget_WasShown_Params_Data) == 24,
              "Bad sizeof(Widget_WasShown_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) Widget_RequestPresentationTimeForNextFrame_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::blink::mojom::internal::RecordContentToVisibleTimeRequest_Data> visible_time_request;

 private:
  friend class mojo::internal::MessageFragment<Widget_RequestPresentationTimeForNextFrame_Params_Data>;

  Widget_RequestPresentationTimeForNextFrame_Params_Data();
  ~Widget_RequestPresentationTimeForNextFrame_Params_Data() = delete;
};
static_assert(sizeof(Widget_RequestPresentationTimeForNextFrame_Params_Data) == 16,
              "Bad sizeof(Widget_RequestPresentationTimeForNextFrame_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) Widget_CancelPresentationTimeRequest_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  friend class mojo::internal::MessageFragment<Widget_CancelPresentationTimeRequest_Params_Data>;

  Widget_CancelPresentationTimeRequest_Params_Data();
  ~Widget_CancelPresentationTimeRequest_Params_Data() = delete;
};
static_assert(sizeof(Widget_CancelPresentationTimeRequest_Params_Data) == 8,
              "Bad sizeof(Widget_CancelPresentationTimeRequest_Params_Data)");

}  // namespace internal


class WidgetCompositor_VisualStateRequest_ParamsDataView {
 public:
  WidgetCompositor_VisualStateRequest_ParamsDataView() = default;

  WidgetCompositor_VisualStateRequest_ParamsDataView(
      internal::WidgetCompositor_VisualStateRequest_Params_Data* data,
      mojo::Message* message)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::WidgetCompositor_VisualStateRequest_Params_Data* data_ = nullptr;
};



class WidgetCompositor_VisualStateRequest_ResponseParamsDataView {
 public:
  WidgetCompositor_VisualStateRequest_ResponseParamsDataView() = default;

  WidgetCompositor_VisualStateRequest_ResponseParamsDataView(
      internal::WidgetCompositor_VisualStateRequest_ResponseParams_Data* data,
      mojo::Message* message)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::WidgetCompositor_VisualStateRequest_ResponseParams_Data* data_ = nullptr;
};



class WidgetHost_SetCursor_ParamsDataView {
 public:
  WidgetHost_SetCursor_ParamsDataView() = default;

  WidgetHost_SetCursor_ParamsDataView(
      internal::WidgetHost_SetCursor_Params_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  inline void GetCursorDataView(
      ::ui::mojom::CursorDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadCursor(UserType* output) {
    
    auto* pointer = data_->cursor.Get();
    return mojo::internal::Deserialize<::ui::mojom::CursorDataView>(
        pointer, output, message_);
  }
 private:
  internal::WidgetHost_SetCursor_Params_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



class WidgetHost_UpdateTooltipUnderCursor_ParamsDataView {
 public:
  WidgetHost_UpdateTooltipUnderCursor_ParamsDataView() = default;

  WidgetHost_UpdateTooltipUnderCursor_ParamsDataView(
      internal::WidgetHost_UpdateTooltipUnderCursor_Params_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  inline void GetTooltipTextDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadTooltipText(UserType* output) {
    
    auto* pointer = data_->tooltip_text.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, message_);
  }
  template <typename UserType>
  [[nodiscard]] bool ReadTextDirectionHint(UserType* output) const {
    auto data_value = data_->text_direction_hint;
    return mojo::internal::Deserialize<::mojo_base::mojom::TextDirection>(
        data_value, output);
  }
  ::mojo_base::mojom::TextDirection text_direction_hint() const {
    return ::mojo::internal::ToKnownEnumValueHelper(
          static_cast<::mojo_base::mojom::TextDirection>(data_->text_direction_hint));
  }
 private:
  internal::WidgetHost_UpdateTooltipUnderCursor_Params_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



class WidgetHost_UpdateTooltipFromKeyboard_ParamsDataView {
 public:
  WidgetHost_UpdateTooltipFromKeyboard_ParamsDataView() = default;

  WidgetHost_UpdateTooltipFromKeyboard_ParamsDataView(
      internal::WidgetHost_UpdateTooltipFromKeyboard_Params_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  inline void GetTooltipTextDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadTooltipText(UserType* output) {
    
    auto* pointer = data_->tooltip_text.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, message_);
  }
  template <typename UserType>
  [[nodiscard]] bool ReadTextDirectionHint(UserType* output) const {
    auto data_value = data_->text_direction_hint;
    return mojo::internal::Deserialize<::mojo_base::mojom::TextDirection>(
        data_value, output);
  }
  ::mojo_base::mojom::TextDirection text_direction_hint() const {
    return ::mojo::internal::ToKnownEnumValueHelper(
          static_cast<::mojo_base::mojom::TextDirection>(data_->text_direction_hint));
  }
  inline void GetBoundsDataView(
      ::gfx::mojom::RectDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadBounds(UserType* output) {
    
    auto* pointer = data_->bounds.Get();
    return mojo::internal::Deserialize<::gfx::mojom::RectDataView>(
        pointer, output, message_);
  }
 private:
  internal::WidgetHost_UpdateTooltipFromKeyboard_Params_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



class WidgetHost_ClearKeyboardTriggeredTooltip_ParamsDataView {
 public:
  WidgetHost_ClearKeyboardTriggeredTooltip_ParamsDataView() = default;

  WidgetHost_ClearKeyboardTriggeredTooltip_ParamsDataView(
      internal::WidgetHost_ClearKeyboardTriggeredTooltip_Params_Data* data,
      mojo::Message* message)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::WidgetHost_ClearKeyboardTriggeredTooltip_Params_Data* data_ = nullptr;
};



class WidgetHost_TextInputStateChanged_ParamsDataView {
 public:
  WidgetHost_TextInputStateChanged_ParamsDataView() = default;

  WidgetHost_TextInputStateChanged_ParamsDataView(
      internal::WidgetHost_TextInputStateChanged_Params_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  inline void GetStateDataView(
      ::ui::mojom::TextInputStateDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadState(UserType* output) {
    
    auto* pointer = data_->state.Get();
    return mojo::internal::Deserialize<::ui::mojom::TextInputStateDataView>(
        pointer, output, message_);
  }
 private:
  internal::WidgetHost_TextInputStateChanged_Params_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



class WidgetHost_SelectionBoundsChanged_ParamsDataView {
 public:
  WidgetHost_SelectionBoundsChanged_ParamsDataView() = default;

  WidgetHost_SelectionBoundsChanged_ParamsDataView(
      internal::WidgetHost_SelectionBoundsChanged_Params_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  inline void GetAnchorRectDataView(
      ::gfx::mojom::RectDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadAnchorRect(UserType* output) {
    
    auto* pointer = data_->anchor_rect.Get();
    return mojo::internal::Deserialize<::gfx::mojom::RectDataView>(
        pointer, output, message_);
  }
  template <typename UserType>
  [[nodiscard]] bool ReadAnchorDir(UserType* output) const {
    auto data_value = data_->anchor_dir;
    return mojo::internal::Deserialize<::mojo_base::mojom::TextDirection>(
        data_value, output);
  }
  ::mojo_base::mojom::TextDirection anchor_dir() const {
    return ::mojo::internal::ToKnownEnumValueHelper(
          static_cast<::mojo_base::mojom::TextDirection>(data_->anchor_dir));
  }
  inline void GetFocusRectDataView(
      ::gfx::mojom::RectDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadFocusRect(UserType* output) {
    
    auto* pointer = data_->focus_rect.Get();
    return mojo::internal::Deserialize<::gfx::mojom::RectDataView>(
        pointer, output, message_);
  }
  template <typename UserType>
  [[nodiscard]] bool ReadFocusDir(UserType* output) const {
    auto data_value = data_->focus_dir;
    return mojo::internal::Deserialize<::mojo_base::mojom::TextDirection>(
        data_value, output);
  }
  ::mojo_base::mojom::TextDirection focus_dir() const {
    return ::mojo::internal::ToKnownEnumValueHelper(
          static_cast<::mojo_base::mojom::TextDirection>(data_->focus_dir));
  }
  inline void GetBoundingBoxRectDataView(
      ::gfx::mojom::RectDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadBoundingBoxRect(UserType* output) {
    
    auto* pointer = data_->bounding_box_rect.Get();
    return mojo::internal::Deserialize<::gfx::mojom::RectDataView>(
        pointer, output, message_);
  }
  bool is_anchor_first() const {
    return data_->is_anchor_first;
  }
 private:
  internal::WidgetHost_SelectionBoundsChanged_Params_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



class WidgetHost_CreateFrameSink_ParamsDataView {
 public:
  WidgetHost_CreateFrameSink_ParamsDataView() = default;

  WidgetHost_CreateFrameSink_ParamsDataView(
      internal::WidgetHost_CreateFrameSink_Params_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeCompositorFrameSinkReceiver() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<mojo::InterfaceRequestDataView<::viz::mojom::CompositorFrameSinkInterfaceBase>>(
            &data_->compositor_frame_sink_receiver, &result, message_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeCompositorFrameSinkClient() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<mojo::InterfacePtrDataView<::viz::mojom::CompositorFrameSinkClientInterfaceBase>>(
            &data_->compositor_frame_sink_client, &result, message_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::WidgetHost_CreateFrameSink_Params_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



class WidgetHost_RegisterRenderFrameMetadataObserver_ParamsDataView {
 public:
  WidgetHost_RegisterRenderFrameMetadataObserver_ParamsDataView() = default;

  WidgetHost_RegisterRenderFrameMetadataObserver_ParamsDataView(
      internal::WidgetHost_RegisterRenderFrameMetadataObserver_Params_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeRenderFrameMetadataObserverClientReceiver() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<mojo::InterfaceRequestDataView<::cc::mojom::RenderFrameMetadataObserverClientInterfaceBase>>(
            &data_->render_frame_metadata_observer_client_receiver, &result, message_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeRenderFrameMetadataObserver() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<mojo::InterfacePtrDataView<::cc::mojom::RenderFrameMetadataObserverInterfaceBase>>(
            &data_->render_frame_metadata_observer, &result, message_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::WidgetHost_RegisterRenderFrameMetadataObserver_Params_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



class Widget_ForceRedraw_ParamsDataView {
 public:
  Widget_ForceRedraw_ParamsDataView() = default;

  Widget_ForceRedraw_ParamsDataView(
      internal::Widget_ForceRedraw_Params_Data* data,
      mojo::Message* message)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::Widget_ForceRedraw_Params_Data* data_ = nullptr;
};



class Widget_ForceRedraw_ResponseParamsDataView {
 public:
  Widget_ForceRedraw_ResponseParamsDataView() = default;

  Widget_ForceRedraw_ResponseParamsDataView(
      internal::Widget_ForceRedraw_ResponseParams_Data* data,
      mojo::Message* message)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::Widget_ForceRedraw_ResponseParams_Data* data_ = nullptr;
};



class Widget_GetWidgetInputHandler_ParamsDataView {
 public:
  Widget_GetWidgetInputHandler_ParamsDataView() = default;

  Widget_GetWidgetInputHandler_ParamsDataView(
      internal::Widget_GetWidgetInputHandler_Params_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeRequest() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<mojo::InterfaceRequestDataView<::blink::mojom::WidgetInputHandlerInterfaceBase>>(
            &data_->request, &result, message_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeHost() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<mojo::InterfacePtrDataView<::blink::mojom::WidgetInputHandlerHostInterfaceBase>>(
            &data_->host, &result, message_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::Widget_GetWidgetInputHandler_Params_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



class Widget_UpdateVisualProperties_ParamsDataView {
 public:
  Widget_UpdateVisualProperties_ParamsDataView() = default;

  Widget_UpdateVisualProperties_ParamsDataView(
      internal::Widget_UpdateVisualProperties_Params_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  inline void GetVisualPropertiesDataView(
      ::blink::mojom::VisualPropertiesDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadVisualProperties(UserType* output) {
    
    auto* pointer = data_->visual_properties.Get();
    return mojo::internal::Deserialize<::blink::mojom::VisualPropertiesDataView>(
        pointer, output, message_);
  }
 private:
  internal::Widget_UpdateVisualProperties_Params_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



class Widget_UpdateScreenRects_ParamsDataView {
 public:
  Widget_UpdateScreenRects_ParamsDataView() = default;

  Widget_UpdateScreenRects_ParamsDataView(
      internal::Widget_UpdateScreenRects_Params_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  inline void GetWidgetScreenRectDataView(
      ::gfx::mojom::RectDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadWidgetScreenRect(UserType* output) {
    
    auto* pointer = data_->widget_screen_rect.Get();
    return mojo::internal::Deserialize<::gfx::mojom::RectDataView>(
        pointer, output, message_);
  }
  inline void GetWindowScreenRectDataView(
      ::gfx::mojom::RectDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadWindowScreenRect(UserType* output) {
    
    auto* pointer = data_->window_screen_rect.Get();
    return mojo::internal::Deserialize<::gfx::mojom::RectDataView>(
        pointer, output, message_);
  }
 private:
  internal::Widget_UpdateScreenRects_Params_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



class Widget_UpdateScreenRects_ResponseParamsDataView {
 public:
  Widget_UpdateScreenRects_ResponseParamsDataView() = default;

  Widget_UpdateScreenRects_ResponseParamsDataView(
      internal::Widget_UpdateScreenRects_ResponseParams_Data* data,
      mojo::Message* message)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::Widget_UpdateScreenRects_ResponseParams_Data* data_ = nullptr;
};



class Widget_WasHidden_ParamsDataView {
 public:
  Widget_WasHidden_ParamsDataView() = default;

  Widget_WasHidden_ParamsDataView(
      internal::Widget_WasHidden_Params_Data* data,
      mojo::Message* message)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::Widget_WasHidden_Params_Data* data_ = nullptr;
};



class Widget_WasShown_ParamsDataView {
 public:
  Widget_WasShown_ParamsDataView() = default;

  Widget_WasShown_ParamsDataView(
      internal::Widget_WasShown_Params_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  bool was_evicted() const {
    return data_->was_evicted;
  }
  inline void GetRecordTabSwitchTimeRequestDataView(
      ::blink::mojom::RecordContentToVisibleTimeRequestDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadRecordTabSwitchTimeRequest(UserType* output) {
    
static_assert(
    mojo::internal::IsValidUserTypeForOptionalValue<
        ::blink::mojom::RecordContentToVisibleTimeRequestDataView, UserType>(),
    "Attempting to read the optional `record_tab_switch_time_request` field into a type which "
    "cannot represent a null value. Either wrap the destination object "
    "with absl::optional, ensure that any corresponding "
    "{Struct/Union/Array/String}Traits define the necessary IsNull and "
    "SetToNull methods, or use `MaybeReadRecordTabSwitchTimeRequest` instead "
    "of `ReadRecordTabSwitchTimeRequest if you're fine with null values being "
    "silently ignored in this case.");
    auto* pointer = data_->record_tab_switch_time_request.Get();
    return mojo::internal::Deserialize<::blink::mojom::RecordContentToVisibleTimeRequestDataView>(
        pointer, output, message_);
  }
 private:
  internal::Widget_WasShown_Params_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



class Widget_RequestPresentationTimeForNextFrame_ParamsDataView {
 public:
  Widget_RequestPresentationTimeForNextFrame_ParamsDataView() = default;

  Widget_RequestPresentationTimeForNextFrame_ParamsDataView(
      internal::Widget_RequestPresentationTimeForNextFrame_Params_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  inline void GetVisibleTimeRequestDataView(
      ::blink::mojom::RecordContentToVisibleTimeRequestDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadVisibleTimeRequest(UserType* output) {
    
    auto* pointer = data_->visible_time_request.Get();
    return mojo::internal::Deserialize<::blink::mojom::RecordContentToVisibleTimeRequestDataView>(
        pointer, output, message_);
  }
 private:
  internal::Widget_RequestPresentationTimeForNextFrame_Params_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



class Widget_CancelPresentationTimeRequest_ParamsDataView {
 public:
  Widget_CancelPresentationTimeRequest_ParamsDataView() = default;

  Widget_CancelPresentationTimeRequest_ParamsDataView(
      internal::Widget_CancelPresentationTimeRequest_Params_Data* data,
      mojo::Message* message)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::Widget_CancelPresentationTimeRequest_Params_Data* data_ = nullptr;
};






inline void WidgetHost_SetCursor_ParamsDataView::GetCursorDataView(
    ::ui::mojom::CursorDataView* output) {
  auto pointer = data_->cursor.Get();
  *output = ::ui::mojom::CursorDataView(pointer, message_);
}


inline void WidgetHost_UpdateTooltipUnderCursor_ParamsDataView::GetTooltipTextDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->tooltip_text.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, message_);
}


inline void WidgetHost_UpdateTooltipFromKeyboard_ParamsDataView::GetTooltipTextDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->tooltip_text.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, message_);
}
inline void WidgetHost_UpdateTooltipFromKeyboard_ParamsDataView::GetBoundsDataView(
    ::gfx::mojom::RectDataView* output) {
  auto pointer = data_->bounds.Get();
  *output = ::gfx::mojom::RectDataView(pointer, message_);
}




inline void WidgetHost_TextInputStateChanged_ParamsDataView::GetStateDataView(
    ::ui::mojom::TextInputStateDataView* output) {
  auto pointer = data_->state.Get();
  *output = ::ui::mojom::TextInputStateDataView(pointer, message_);
}


inline void WidgetHost_SelectionBoundsChanged_ParamsDataView::GetAnchorRectDataView(
    ::gfx::mojom::RectDataView* output) {
  auto pointer = data_->anchor_rect.Get();
  *output = ::gfx::mojom::RectDataView(pointer, message_);
}
inline void WidgetHost_SelectionBoundsChanged_ParamsDataView::GetFocusRectDataView(
    ::gfx::mojom::RectDataView* output) {
  auto pointer = data_->focus_rect.Get();
  *output = ::gfx::mojom::RectDataView(pointer, message_);
}
inline void WidgetHost_SelectionBoundsChanged_ParamsDataView::GetBoundingBoxRectDataView(
    ::gfx::mojom::RectDataView* output) {
  auto pointer = data_->bounding_box_rect.Get();
  *output = ::gfx::mojom::RectDataView(pointer, message_);
}












inline void Widget_UpdateVisualProperties_ParamsDataView::GetVisualPropertiesDataView(
    ::blink::mojom::VisualPropertiesDataView* output) {
  auto pointer = data_->visual_properties.Get();
  *output = ::blink::mojom::VisualPropertiesDataView(pointer, message_);
}


inline void Widget_UpdateScreenRects_ParamsDataView::GetWidgetScreenRectDataView(
    ::gfx::mojom::RectDataView* output) {
  auto pointer = data_->widget_screen_rect.Get();
  *output = ::gfx::mojom::RectDataView(pointer, message_);
}
inline void Widget_UpdateScreenRects_ParamsDataView::GetWindowScreenRectDataView(
    ::gfx::mojom::RectDataView* output) {
  auto pointer = data_->window_screen_rect.Get();
  *output = ::gfx::mojom::RectDataView(pointer, message_);
}






inline void Widget_WasShown_ParamsDataView::GetRecordTabSwitchTimeRequestDataView(
    ::blink::mojom::RecordContentToVisibleTimeRequestDataView* output) {
  auto pointer = data_->record_tab_switch_time_request.Get();
  *output = ::blink::mojom::RecordContentToVisibleTimeRequestDataView(pointer, message_);
}


inline void Widget_RequestPresentationTimeForNextFrame_ParamsDataView::GetVisibleTimeRequestDataView(
    ::blink::mojom::RecordContentToVisibleTimeRequestDataView* output) {
  auto pointer = data_->visible_time_request.Get();
  *output = ::blink::mojom::RecordContentToVisibleTimeRequestDataView(pointer, message_);
}



}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#endif

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_WIDGET_PLATFORM_WIDGET_MOJOM_PARAMS_DATA_H_