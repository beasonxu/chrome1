// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Generated from template:
//   core/css/templates/css_value_id_mappings_generated.h.tmpl
// and input files:
//   ../../third_party/blink/renderer/core/css/computed_style_field_aliases.json5
//   ../../third_party/blink/renderer/core/css/css_properties.json5
//   ../../third_party/blink/renderer/core/css/css_value_keywords.json5
//   ../../third_party/blink/renderer/platform/runtime_enabled_features.json5


#ifndef THIRD_PARTY_BLINK_RENDERER_CORE_CSS_CSS_VALUE_ID_MAPPINGS_GENERATED_H_
#define THIRD_PARTY_BLINK_RENDERER_CORE_CSS_CSS_VALUE_ID_MAPPINGS_GENERATED_H_

#include "base/notreached.h"
#include "base/check_op.h"
#include "third_party/blink/renderer/core/css_value_keywords.h"
#include "third_party/blink/renderer/core/style/computed_style_base_constants.h"
#include "cc/input/scroll_snap_data.h"
#include "third_party/blink/public/common/css/page_orientation.h"
#include "third_party/blink/public/mojom/frame/color_scheme.mojom-blink.h"
#include "third_party/blink/renderer/core/css/style_auto_color.h"
#include "third_party/blink/renderer/core/css/style_color.h"
#include "third_party/blink/renderer/core/css_value_keywords.h"
#include "third_party/blink/renderer/core/layout/layout_theme.h"
#include "third_party/blink/renderer/core/scroll/scroll_customization.h"
#include "third_party/blink/renderer/core/style/basic_shapes.h"
#include "third_party/blink/renderer/core/style/clip_path_operation.h"
#include "third_party/blink/renderer/core/style/computed_grid_track_list.h"
#include "third_party/blink/renderer/core/style/content_data.h"
#include "third_party/blink/renderer/core/style/grid_position.h"
#include "third_party/blink/renderer/core/style/grid_track_list.h"
#include "third_party/blink/renderer/core/style/list_style_type_data.h"
#include "third_party/blink/renderer/core/style/shadow_list.h"
#include "third_party/blink/renderer/core/style/shape_value.h"
#include "third_party/blink/renderer/core/style/style_aspect_ratio.h"
#include "third_party/blink/renderer/core/style/style_content_alignment_data.h"
#include "third_party/blink/renderer/core/style/style_filter_data.h"
#include "third_party/blink/renderer/core/style/style_image.h"
#include "third_party/blink/renderer/core/style/style_intrinsic_length.h"
#include "third_party/blink/renderer/core/style/style_offset_rotation.h"
#include "third_party/blink/renderer/core/style/style_overflow_clip_margin.h"
#include "third_party/blink/renderer/core/style/style_path.h"
#include "third_party/blink/renderer/core/style/style_reflection.h"
#include "third_party/blink/renderer/core/style/style_self_alignment_data.h"
#include "third_party/blink/renderer/core/style/style_svg_resource.h"
#include "third_party/blink/renderer/core/style/svg_dash_array.h"
#include "third_party/blink/renderer/core/style/svg_paint.h"
#include "third_party/blink/renderer/core/style/text_decoration_thickness.h"
#include "third_party/blink/renderer/core/style/text_size_adjust.h"
#include "third_party/blink/renderer/core/style/toggle_group_list.h"
#include "third_party/blink/renderer/core/style/toggle_root_list.h"
#include "third_party/blink/renderer/core/style/toggle_trigger_list.h"
#include "third_party/blink/renderer/core/style/transform_origin.h"
#include "third_party/blink/renderer/core/style/unzoomed_length.h"
#include "third_party/blink/renderer/platform/geometry/layout_unit.h"
#include "third_party/blink/renderer/platform/geometry/length.h"
#include "third_party/blink/renderer/platform/geometry/length_box.h"
#include "third_party/blink/renderer/platform/geometry/length_point.h"
#include "third_party/blink/renderer/platform/geometry/length_size.h"
#include "third_party/blink/renderer/platform/graphics/graphics_types.h"
#include "third_party/blink/renderer/platform/graphics/touch_action.h"
#include "third_party/blink/renderer/platform/text/quotes_data.h"
#include "third_party/blink/renderer/platform/text/tab_size.h"
#include "third_party/blink/renderer/platform/text/text_direction.h"
#include "third_party/blink/renderer/platform/text/text_justify.h"
#include "third_party/blink/renderer/platform/text/unicode_bidi.h"
#include "third_party/blink/renderer/platform/text/writing_mode.h"
#include "third_party/blink/renderer/platform/theme_types.h"
#include "third_party/blink/renderer/platform/transforms/rotate_transform_operation.h"
#include "third_party/blink/renderer/platform/transforms/scale_transform_operation.h"
#include "third_party/blink/renderer/platform/transforms/transform_operations.h"
#include "third_party/blink/renderer/platform/transforms/translate_transform_operation.h"
#include "third_party/blink/renderer/platform/wtf/text/atomic_string.h"

namespace blink {

// Do not use these functions directly, use the non-generated versions
// in CSSValueMappings.h

namespace detail {

template <class T>
T cssValueIDToPlatformEnumGenerated(CSSValueID);


template <>
inline TextDirection cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  DCHECK_GE(v, CSSValueID::kLtr);
  DCHECK_LE(v, CSSValueID::kRtl);
  return static_cast<TextDirection>(static_cast<int>(v) - static_cast<int>(CSSValueID::kLtr) + static_cast<int>(TextDirection::kLtr));
}

inline CSSValueID platformEnumToCSSValueIDGenerated(TextDirection v) {
  DCHECK_GE(v, TextDirection::kLtr);
  DCHECK_LE(v, TextDirection::kRtl);
  return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(TextDirection::kLtr) + static_cast<int>(CSSValueID::kLtr));
}


template <>
inline EForcedColorAdjust cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueID::kAuto:
      return EForcedColorAdjust::kAuto;
    case CSSValueID::kPreserveParentColor:
      return EForcedColorAdjust::kPreserveParentColor;
    default:
      DCHECK_GE(v, CSSValueID::kNone);
      DCHECK_LE(v, CSSValueID::kNone);
      return static_cast<EForcedColorAdjust>(static_cast<int>(v) - static_cast<int>(CSSValueID::kNone) + static_cast<int>(EForcedColorAdjust::kNone));
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(EForcedColorAdjust v) {
  switch (v) {
    case EForcedColorAdjust::kAuto:
      return CSSValueID::kAuto;
    case EForcedColorAdjust::kPreserveParentColor:
      return CSSValueID::kPreserveParentColor;
    default:
      DCHECK_GE(v, EForcedColorAdjust::kNone);
      DCHECK_LE(v, EForcedColorAdjust::kNone);
      return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(EForcedColorAdjust::kNone) + static_cast<int>(CSSValueID::kNone));
  }
}


template <>
inline ETextOrientation cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueID::kUpright:
      return ETextOrientation::kUpright;
    default:
      DCHECK_GE(v, CSSValueID::kMixed);
      DCHECK_LE(v, CSSValueID::kSideways);
      return static_cast<ETextOrientation>(static_cast<int>(v) - static_cast<int>(CSSValueID::kMixed) + static_cast<int>(ETextOrientation::kMixed));
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(ETextOrientation v) {
  switch (v) {
    case ETextOrientation::kUpright:
      return CSSValueID::kUpright;
    default:
      DCHECK_GE(v, ETextOrientation::kMixed);
      DCHECK_LE(v, ETextOrientation::kSideways);
      return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(ETextOrientation::kMixed) + static_cast<int>(CSSValueID::kMixed));
  }
}


template <>
inline WritingMode cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  DCHECK_GE(v, CSSValueID::kHorizontalTb);
  DCHECK_LE(v, CSSValueID::kVerticalLr);
  return static_cast<WritingMode>(static_cast<int>(v) - static_cast<int>(CSSValueID::kHorizontalTb) + static_cast<int>(WritingMode::kHorizontalTb));
}

inline CSSValueID platformEnumToCSSValueIDGenerated(WritingMode v) {
  DCHECK_GE(v, WritingMode::kHorizontalTb);
  DCHECK_LE(v, WritingMode::kVerticalLr);
  return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(WritingMode::kHorizontalTb) + static_cast<int>(CSSValueID::kHorizontalTb));
}


template <>
inline EAlignmentBaseline cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueID::kBaseline:
      return EAlignmentBaseline::kBaseline;
    case CSSValueID::kMiddle:
      return EAlignmentBaseline::kMiddle;
    case CSSValueID::kAuto:
      return EAlignmentBaseline::kAuto;
    case CSSValueID::kAlphabetic:
      return EAlignmentBaseline::kAlphabetic;
    case CSSValueID::kHanging:
      return EAlignmentBaseline::kHanging;
    default:
      DCHECK_GE(v, CSSValueID::kBeforeEdge);
      DCHECK_LE(v, CSSValueID::kMathematical);
      return static_cast<EAlignmentBaseline>(static_cast<int>(v) - static_cast<int>(CSSValueID::kBeforeEdge) + static_cast<int>(EAlignmentBaseline::kBeforeEdge));
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(EAlignmentBaseline v) {
  switch (v) {
    case EAlignmentBaseline::kBaseline:
      return CSSValueID::kBaseline;
    case EAlignmentBaseline::kMiddle:
      return CSSValueID::kMiddle;
    case EAlignmentBaseline::kAuto:
      return CSSValueID::kAuto;
    case EAlignmentBaseline::kAlphabetic:
      return CSSValueID::kAlphabetic;
    case EAlignmentBaseline::kHanging:
      return CSSValueID::kHanging;
    default:
      DCHECK_GE(v, EAlignmentBaseline::kBeforeEdge);
      DCHECK_LE(v, EAlignmentBaseline::kMathematical);
      return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(EAlignmentBaseline::kBeforeEdge) + static_cast<int>(CSSValueID::kBeforeEdge));
  }
}


template <>
inline EDraggableRegionMode cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueID::kNone:
      return EDraggableRegionMode::kNone;
    default:
      DCHECK_GE(v, CSSValueID::kDrag);
      DCHECK_LE(v, CSSValueID::kNoDrag);
      return static_cast<EDraggableRegionMode>(static_cast<int>(v) - static_cast<int>(CSSValueID::kDrag) + static_cast<int>(EDraggableRegionMode::kDrag));
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(EDraggableRegionMode v) {
  switch (v) {
    case EDraggableRegionMode::kNone:
      return CSSValueID::kNone;
    default:
      DCHECK_GE(v, EDraggableRegionMode::kDrag);
      DCHECK_LE(v, EDraggableRegionMode::kNoDrag);
      return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(EDraggableRegionMode::kDrag) + static_cast<int>(CSSValueID::kDrag));
  }
}


template <>
inline EBackfaceVisibility cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueID::kVisible:
      return EBackfaceVisibility::kVisible;
    default:
      DCHECK_GE(v, CSSValueID::kHidden);
      DCHECK_LE(v, CSSValueID::kHidden);
      return static_cast<EBackfaceVisibility>(static_cast<int>(v) - static_cast<int>(CSSValueID::kHidden) + static_cast<int>(EBackfaceVisibility::kHidden));
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(EBackfaceVisibility v) {
  switch (v) {
    case EBackfaceVisibility::kVisible:
      return CSSValueID::kVisible;
    default:
      DCHECK_GE(v, EBackfaceVisibility::kHidden);
      DCHECK_LE(v, EBackfaceVisibility::kHidden);
      return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(EBackfaceVisibility::kHidden) + static_cast<int>(CSSValueID::kHidden));
  }
}


template <>
inline EBorderStyle cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  DCHECK_GE(v, CSSValueID::kNone);
  DCHECK_LE(v, CSSValueID::kDouble);
  return static_cast<EBorderStyle>(static_cast<int>(v) - static_cast<int>(CSSValueID::kNone) + static_cast<int>(EBorderStyle::kNone));
}

inline CSSValueID platformEnumToCSSValueIDGenerated(EBorderStyle v) {
  DCHECK_GE(v, EBorderStyle::kNone);
  DCHECK_LE(v, EBorderStyle::kDouble);
  return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(EBorderStyle::kNone) + static_cast<int>(CSSValueID::kNone));
}


template <>
inline EBorderCollapse cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueID::kSeparate:
      return EBorderCollapse::kSeparate;
    default:
      DCHECK_GE(v, CSSValueID::kCollapse);
      DCHECK_LE(v, CSSValueID::kCollapse);
      return static_cast<EBorderCollapse>(static_cast<int>(v) - static_cast<int>(CSSValueID::kCollapse) + static_cast<int>(EBorderCollapse::kCollapse));
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(EBorderCollapse v) {
  switch (v) {
    case EBorderCollapse::kSeparate:
      return CSSValueID::kSeparate;
    default:
      DCHECK_GE(v, EBorderCollapse::kCollapse);
      DCHECK_LE(v, EBorderCollapse::kCollapse);
      return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(EBorderCollapse::kCollapse) + static_cast<int>(CSSValueID::kCollapse));
  }
}


template <>
inline EBoxSizing cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueID::kContentBox:
      return EBoxSizing::kContentBox;
    default:
      DCHECK_GE(v, CSSValueID::kBorderBox);
      DCHECK_LE(v, CSSValueID::kBorderBox);
      return static_cast<EBoxSizing>(static_cast<int>(v) - static_cast<int>(CSSValueID::kBorderBox) + static_cast<int>(EBoxSizing::kBorderBox));
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(EBoxSizing v) {
  switch (v) {
    case EBoxSizing::kContentBox:
      return CSSValueID::kContentBox;
    default:
      DCHECK_GE(v, EBoxSizing::kBorderBox);
      DCHECK_LE(v, EBoxSizing::kBorderBox);
      return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(EBoxSizing::kBorderBox) + static_cast<int>(CSSValueID::kBorderBox));
  }
}


template <>
inline EBreakBetween cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueID::kLeft:
      return EBreakBetween::kLeft;
    case CSSValueID::kRight:
      return EBreakBetween::kRight;
    case CSSValueID::kAuto:
      return EBreakBetween::kAuto;
    case CSSValueID::kAvoid:
      return EBreakBetween::kAvoid;
    case CSSValueID::kColumn:
      return EBreakBetween::kColumn;
    default:
      DCHECK_GE(v, CSSValueID::kAvoidPage);
      DCHECK_LE(v, CSSValueID::kAvoidColumn);
      return static_cast<EBreakBetween>(static_cast<int>(v) - static_cast<int>(CSSValueID::kAvoidPage) + static_cast<int>(EBreakBetween::kAvoidPage));
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(EBreakBetween v) {
  switch (v) {
    case EBreakBetween::kLeft:
      return CSSValueID::kLeft;
    case EBreakBetween::kRight:
      return CSSValueID::kRight;
    case EBreakBetween::kAuto:
      return CSSValueID::kAuto;
    case EBreakBetween::kAvoid:
      return CSSValueID::kAvoid;
    case EBreakBetween::kColumn:
      return CSSValueID::kColumn;
    default:
      DCHECK_GE(v, EBreakBetween::kAvoidPage);
      DCHECK_LE(v, EBreakBetween::kAvoidColumn);
      return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(EBreakBetween::kAvoidPage) + static_cast<int>(CSSValueID::kAvoidPage));
  }
}


template <>
inline EBreakInside cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueID::kAvoid:
      return EBreakInside::kAvoid;
    case CSSValueID::kAvoidPage:
      return EBreakInside::kAvoidPage;
    case CSSValueID::kAvoidColumn:
      return EBreakInside::kAvoidColumn;
    default:
      DCHECK_GE(v, CSSValueID::kAuto);
      DCHECK_LE(v, CSSValueID::kAuto);
      return static_cast<EBreakInside>(static_cast<int>(v) - static_cast<int>(CSSValueID::kAuto) + static_cast<int>(EBreakInside::kAuto));
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(EBreakInside v) {
  switch (v) {
    case EBreakInside::kAvoid:
      return CSSValueID::kAvoid;
    case EBreakInside::kAvoidPage:
      return CSSValueID::kAvoidPage;
    case EBreakInside::kAvoidColumn:
      return CSSValueID::kAvoidColumn;
    default:
      DCHECK_GE(v, EBreakInside::kAuto);
      DCHECK_LE(v, EBreakInside::kAuto);
      return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(EBreakInside::kAuto) + static_cast<int>(CSSValueID::kAuto));
  }
}


template <>
inline EBufferedRendering cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueID::kStatic:
      return EBufferedRendering::kStatic;
    case CSSValueID::kDynamic:
      return EBufferedRendering::kDynamic;
    default:
      DCHECK_GE(v, CSSValueID::kAuto);
      DCHECK_LE(v, CSSValueID::kAuto);
      return static_cast<EBufferedRendering>(static_cast<int>(v) - static_cast<int>(CSSValueID::kAuto) + static_cast<int>(EBufferedRendering::kAuto));
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(EBufferedRendering v) {
  switch (v) {
    case EBufferedRendering::kStatic:
      return CSSValueID::kStatic;
    case EBufferedRendering::kDynamic:
      return CSSValueID::kDynamic;
    default:
      DCHECK_GE(v, EBufferedRendering::kAuto);
      DCHECK_LE(v, EBufferedRendering::kAuto);
      return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(EBufferedRendering::kAuto) + static_cast<int>(CSSValueID::kAuto));
  }
}


template <>
inline ECaptionSide cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  DCHECK_GE(v, CSSValueID::kTop);
  DCHECK_LE(v, CSSValueID::kBottom);
  return static_cast<ECaptionSide>(static_cast<int>(v) - static_cast<int>(CSSValueID::kTop) + static_cast<int>(ECaptionSide::kTop));
}

inline CSSValueID platformEnumToCSSValueIDGenerated(ECaptionSide v) {
  DCHECK_GE(v, ECaptionSide::kTop);
  DCHECK_LE(v, ECaptionSide::kBottom);
  return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(ECaptionSide::kTop) + static_cast<int>(CSSValueID::kTop));
}


template <>
inline EClear cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueID::kNone:
      return EClear::kNone;
    case CSSValueID::kInlineStart:
      return EClear::kInlineStart;
    case CSSValueID::kInlineEnd:
      return EClear::kInlineEnd;
    case CSSValueID::kBoth:
      return EClear::kBoth;
    default:
      DCHECK_GE(v, CSSValueID::kLeft);
      DCHECK_LE(v, CSSValueID::kRight);
      return static_cast<EClear>(static_cast<int>(v) - static_cast<int>(CSSValueID::kLeft) + static_cast<int>(EClear::kLeft));
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(EClear v) {
  switch (v) {
    case EClear::kNone:
      return CSSValueID::kNone;
    case EClear::kInlineStart:
      return CSSValueID::kInlineStart;
    case EClear::kInlineEnd:
      return CSSValueID::kInlineEnd;
    case EClear::kBoth:
      return CSSValueID::kBoth;
    default:
      DCHECK_GE(v, EClear::kLeft);
      DCHECK_LE(v, EClear::kRight);
      return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(EClear::kLeft) + static_cast<int>(CSSValueID::kLeft));
  }
}


template <>
inline EColorInterpolation cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueID::kAuto:
      return EColorInterpolation::kAuto;
    default:
      DCHECK_GE(v, CSSValueID::kSRGB);
      DCHECK_LE(v, CSSValueID::kLinearrgb);
      return static_cast<EColorInterpolation>(static_cast<int>(v) - static_cast<int>(CSSValueID::kSRGB) + static_cast<int>(EColorInterpolation::kSRGB));
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(EColorInterpolation v) {
  switch (v) {
    case EColorInterpolation::kAuto:
      return CSSValueID::kAuto;
    default:
      DCHECK_GE(v, EColorInterpolation::kSRGB);
      DCHECK_LE(v, EColorInterpolation::kLinearrgb);
      return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(EColorInterpolation::kSRGB) + static_cast<int>(CSSValueID::kSRGB));
  }
}


template <>
inline EColorRendering cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueID::kOptimizespeed:
      return EColorRendering::kOptimizespeed;
    case CSSValueID::kOptimizequality:
      return EColorRendering::kOptimizequality;
    default:
      DCHECK_GE(v, CSSValueID::kAuto);
      DCHECK_LE(v, CSSValueID::kAuto);
      return static_cast<EColorRendering>(static_cast<int>(v) - static_cast<int>(CSSValueID::kAuto) + static_cast<int>(EColorRendering::kAuto));
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(EColorRendering v) {
  switch (v) {
    case EColorRendering::kOptimizespeed:
      return CSSValueID::kOptimizespeed;
    case EColorRendering::kOptimizequality:
      return CSSValueID::kOptimizequality;
    default:
      DCHECK_GE(v, EColorRendering::kAuto);
      DCHECK_LE(v, EColorRendering::kAuto);
      return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(EColorRendering::kAuto) + static_cast<int>(CSSValueID::kAuto));
  }
}


template <>
inline EColumnFill cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueID::kBalance:
      return EColumnFill::kBalance;
    default:
      DCHECK_GE(v, CSSValueID::kAuto);
      DCHECK_LE(v, CSSValueID::kAuto);
      return static_cast<EColumnFill>(static_cast<int>(v) - static_cast<int>(CSSValueID::kAuto) + static_cast<int>(EColumnFill::kAuto));
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(EColumnFill v) {
  switch (v) {
    case EColumnFill::kBalance:
      return CSSValueID::kBalance;
    default:
      DCHECK_GE(v, EColumnFill::kAuto);
      DCHECK_LE(v, EColumnFill::kAuto);
      return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(EColumnFill::kAuto) + static_cast<int>(CSSValueID::kAuto));
  }
}


template <>
inline EColumnSpan cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueID::kAll:
      return EColumnSpan::kAll;
    default:
      DCHECK_GE(v, CSSValueID::kNone);
      DCHECK_LE(v, CSSValueID::kNone);
      return static_cast<EColumnSpan>(static_cast<int>(v) - static_cast<int>(CSSValueID::kNone) + static_cast<int>(EColumnSpan::kNone));
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(EColumnSpan v) {
  switch (v) {
    case EColumnSpan::kAll:
      return CSSValueID::kAll;
    default:
      DCHECK_GE(v, EColumnSpan::kNone);
      DCHECK_LE(v, EColumnSpan::kNone);
      return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(EColumnSpan::kNone) + static_cast<int>(CSSValueID::kNone));
  }
}


template <>
inline EContentVisibility cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueID::kAuto:
      return EContentVisibility::kAuto;
    case CSSValueID::kVisible:
      return EContentVisibility::kVisible;
    default:
      DCHECK_GE(v, CSSValueID::kHidden);
      DCHECK_LE(v, CSSValueID::kHidden);
      return static_cast<EContentVisibility>(static_cast<int>(v) - static_cast<int>(CSSValueID::kHidden) + static_cast<int>(EContentVisibility::kHidden));
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(EContentVisibility v) {
  switch (v) {
    case EContentVisibility::kAuto:
      return CSSValueID::kAuto;
    case EContentVisibility::kVisible:
      return CSSValueID::kVisible;
    default:
      DCHECK_GE(v, EContentVisibility::kHidden);
      DCHECK_LE(v, EContentVisibility::kHidden);
      return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(EContentVisibility::kHidden) + static_cast<int>(CSSValueID::kHidden));
  }
}


template <>
inline ECursor cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueID::kNone:
      return ECursor::kNone;
    case CSSValueID::kCopy:
      return ECursor::kCopy;
    default:
      DCHECK_GE(v, CSSValueID::kAuto);
      DCHECK_LE(v, CSSValueID::kGrabbing);
      return static_cast<ECursor>(static_cast<int>(v) - static_cast<int>(CSSValueID::kAuto) + static_cast<int>(ECursor::kAuto));
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(ECursor v) {
  switch (v) {
    case ECursor::kNone:
      return CSSValueID::kNone;
    case ECursor::kCopy:
      return CSSValueID::kCopy;
    default:
      DCHECK_GE(v, ECursor::kAuto);
      DCHECK_LE(v, ECursor::kGrabbing);
      return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(ECursor::kAuto) + static_cast<int>(CSSValueID::kAuto));
  }
}


template <>
inline EDominantBaseline cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueID::kMiddle:
      return EDominantBaseline::kMiddle;
    case CSSValueID::kAuto:
      return EDominantBaseline::kAuto;
    case CSSValueID::kAlphabetic:
      return EDominantBaseline::kAlphabetic;
    case CSSValueID::kHanging:
      return EDominantBaseline::kHanging;
    default:
      DCHECK_GE(v, CSSValueID::kCentral);
      DCHECK_LE(v, CSSValueID::kResetSize);
      return static_cast<EDominantBaseline>(static_cast<int>(v) - static_cast<int>(CSSValueID::kCentral) + static_cast<int>(EDominantBaseline::kCentral));
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(EDominantBaseline v) {
  switch (v) {
    case EDominantBaseline::kMiddle:
      return CSSValueID::kMiddle;
    case EDominantBaseline::kAuto:
      return CSSValueID::kAuto;
    case EDominantBaseline::kAlphabetic:
      return CSSValueID::kAlphabetic;
    case EDominantBaseline::kHanging:
      return CSSValueID::kHanging;
    default:
      DCHECK_GE(v, EDominantBaseline::kCentral);
      DCHECK_LE(v, EDominantBaseline::kResetSize);
      return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(EDominantBaseline::kCentral) + static_cast<int>(CSSValueID::kCentral));
  }
}


template <>
inline EEmptyCells cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueID::kShow:
      return EEmptyCells::kShow;
    default:
      DCHECK_GE(v, CSSValueID::kHide);
      DCHECK_LE(v, CSSValueID::kHide);
      return static_cast<EEmptyCells>(static_cast<int>(v) - static_cast<int>(CSSValueID::kHide) + static_cast<int>(EEmptyCells::kHide));
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(EEmptyCells v) {
  switch (v) {
    case EEmptyCells::kShow:
      return CSSValueID::kShow;
    default:
      DCHECK_GE(v, EEmptyCells::kHide);
      DCHECK_LE(v, EEmptyCells::kHide);
      return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(EEmptyCells::kHide) + static_cast<int>(CSSValueID::kHide));
  }
}


template <>
inline EFlexDirection cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  DCHECK_GE(v, CSSValueID::kRow);
  DCHECK_LE(v, CSSValueID::kColumnReverse);
  return static_cast<EFlexDirection>(static_cast<int>(v) - static_cast<int>(CSSValueID::kRow) + static_cast<int>(EFlexDirection::kRow));
}

inline CSSValueID platformEnumToCSSValueIDGenerated(EFlexDirection v) {
  DCHECK_GE(v, EFlexDirection::kRow);
  DCHECK_LE(v, EFlexDirection::kColumnReverse);
  return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(EFlexDirection::kRow) + static_cast<int>(CSSValueID::kRow));
}


template <>
inline EFlexWrap cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueID::kNowrap:
      return EFlexWrap::kNowrap;
    default:
      DCHECK_GE(v, CSSValueID::kWrap);
      DCHECK_LE(v, CSSValueID::kWrapReverse);
      return static_cast<EFlexWrap>(static_cast<int>(v) - static_cast<int>(CSSValueID::kWrap) + static_cast<int>(EFlexWrap::kWrap));
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(EFlexWrap v) {
  switch (v) {
    case EFlexWrap::kNowrap:
      return CSSValueID::kNowrap;
    default:
      DCHECK_GE(v, EFlexWrap::kWrap);
      DCHECK_LE(v, EFlexWrap::kWrapReverse);
      return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(EFlexWrap::kWrap) + static_cast<int>(CSSValueID::kWrap));
  }
}


template <>
inline EFloat cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueID::kNone:
      return EFloat::kNone;
    case CSSValueID::kInlineStart:
      return EFloat::kInlineStart;
    case CSSValueID::kInlineEnd:
      return EFloat::kInlineEnd;
    default:
      DCHECK_GE(v, CSSValueID::kLeft);
      DCHECK_LE(v, CSSValueID::kRight);
      return static_cast<EFloat>(static_cast<int>(v) - static_cast<int>(CSSValueID::kLeft) + static_cast<int>(EFloat::kLeft));
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(EFloat v) {
  switch (v) {
    case EFloat::kNone:
      return CSSValueID::kNone;
    case EFloat::kInlineStart:
      return CSSValueID::kInlineStart;
    case EFloat::kInlineEnd:
      return CSSValueID::kInlineEnd;
    default:
      DCHECK_GE(v, EFloat::kLeft);
      DCHECK_LE(v, EFloat::kRight);
      return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(EFloat::kLeft) + static_cast<int>(CSSValueID::kLeft));
  }
}


template <>
inline Hyphens cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueID::kAuto:
      return Hyphens::kAuto;
    case CSSValueID::kManual:
      return Hyphens::kManual;
    default:
      DCHECK_GE(v, CSSValueID::kNone);
      DCHECK_LE(v, CSSValueID::kNone);
      return static_cast<Hyphens>(static_cast<int>(v) - static_cast<int>(CSSValueID::kNone) + static_cast<int>(Hyphens::kNone));
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(Hyphens v) {
  switch (v) {
    case Hyphens::kAuto:
      return CSSValueID::kAuto;
    case Hyphens::kManual:
      return CSSValueID::kManual;
    default:
      DCHECK_GE(v, Hyphens::kNone);
      DCHECK_LE(v, Hyphens::kNone);
      return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(Hyphens::kNone) + static_cast<int>(CSSValueID::kNone));
  }
}


template <>
inline EImageRendering cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueID::kAuto:
      return EImageRendering::kAuto;
    case CSSValueID::kOptimizespeed:
      return EImageRendering::kOptimizespeed;
    default:
      DCHECK_GE(v, CSSValueID::kOptimizequality);
      DCHECK_LE(v, CSSValueID::kWebkitOptimizeContrast);
      return static_cast<EImageRendering>(static_cast<int>(v) - static_cast<int>(CSSValueID::kOptimizequality) + static_cast<int>(EImageRendering::kOptimizequality));
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(EImageRendering v) {
  switch (v) {
    case EImageRendering::kAuto:
      return CSSValueID::kAuto;
    case EImageRendering::kOptimizespeed:
      return CSSValueID::kOptimizespeed;
    default:
      DCHECK_GE(v, EImageRendering::kOptimizequality);
      DCHECK_LE(v, EImageRendering::kWebkitOptimizeContrast);
      return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(EImageRendering::kOptimizequality) + static_cast<int>(CSSValueID::kOptimizequality));
  }
}


template <>
inline EIsolation cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueID::kIsolate:
      return EIsolation::kIsolate;
    default:
      DCHECK_GE(v, CSSValueID::kAuto);
      DCHECK_LE(v, CSSValueID::kAuto);
      return static_cast<EIsolation>(static_cast<int>(v) - static_cast<int>(CSSValueID::kAuto) + static_cast<int>(EIsolation::kAuto));
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(EIsolation v) {
  switch (v) {
    case EIsolation::kIsolate:
      return CSSValueID::kIsolate;
    default:
      DCHECK_GE(v, EIsolation::kAuto);
      DCHECK_LE(v, EIsolation::kAuto);
      return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(EIsolation::kAuto) + static_cast<int>(CSSValueID::kAuto));
  }
}


template <>
inline EListStylePosition cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  DCHECK_GE(v, CSSValueID::kOutside);
  DCHECK_LE(v, CSSValueID::kInside);
  return static_cast<EListStylePosition>(static_cast<int>(v) - static_cast<int>(CSSValueID::kOutside) + static_cast<int>(EListStylePosition::kOutside));
}

inline CSSValueID platformEnumToCSSValueIDGenerated(EListStylePosition v) {
  DCHECK_GE(v, EListStylePosition::kOutside);
  DCHECK_LE(v, EListStylePosition::kInside);
  return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(EListStylePosition::kOutside) + static_cast<int>(CSSValueID::kOutside));
}


template <>
inline EMaskType cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  DCHECK_GE(v, CSSValueID::kAlpha);
  DCHECK_LE(v, CSSValueID::kLuminance);
  return static_cast<EMaskType>(static_cast<int>(v) - static_cast<int>(CSSValueID::kAlpha) + static_cast<int>(EMaskType::kAlpha));
}

inline CSSValueID platformEnumToCSSValueIDGenerated(EMaskType v) {
  DCHECK_GE(v, EMaskType::kAlpha);
  DCHECK_LE(v, EMaskType::kLuminance);
  return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(EMaskType::kAlpha) + static_cast<int>(CSSValueID::kAlpha));
}


template <>
inline EMathShift cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueID::kCompact:
      return EMathShift::kCompact;
    default:
      DCHECK_GE(v, CSSValueID::kNormal);
      DCHECK_LE(v, CSSValueID::kNormal);
      return static_cast<EMathShift>(static_cast<int>(v) - static_cast<int>(CSSValueID::kNormal) + static_cast<int>(EMathShift::kNormal));
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(EMathShift v) {
  switch (v) {
    case EMathShift::kCompact:
      return CSSValueID::kCompact;
    default:
      DCHECK_GE(v, EMathShift::kNormal);
      DCHECK_LE(v, EMathShift::kNormal);
      return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(EMathShift::kNormal) + static_cast<int>(CSSValueID::kNormal));
  }
}


template <>
inline EMathStyle cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueID::kCompact:
      return EMathStyle::kCompact;
    default:
      DCHECK_GE(v, CSSValueID::kNormal);
      DCHECK_LE(v, CSSValueID::kNormal);
      return static_cast<EMathStyle>(static_cast<int>(v) - static_cast<int>(CSSValueID::kNormal) + static_cast<int>(EMathStyle::kNormal));
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(EMathStyle v) {
  switch (v) {
    case EMathStyle::kCompact:
      return CSSValueID::kCompact;
    default:
      DCHECK_GE(v, EMathStyle::kNormal);
      DCHECK_LE(v, EMathStyle::kNormal);
      return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(EMathStyle::kNormal) + static_cast<int>(CSSValueID::kNormal));
  }
}


template <>
inline BlendMode cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueID::kNormal:
      return BlendMode::kNormal;
    case CSSValueID::kPlusLighter:
      return BlendMode::kPlusLighter;
    case CSSValueID::kOverlay:
      return BlendMode::kOverlay;
    case CSSValueID::kMultiply:
      return BlendMode::kMultiply;
    case CSSValueID::kScreen:
      return BlendMode::kScreen;
    default:
      DCHECK_GE(v, CSSValueID::kDarken);
      DCHECK_LE(v, CSSValueID::kLuminosity);
      return static_cast<BlendMode>(static_cast<int>(v) - static_cast<int>(CSSValueID::kDarken) + static_cast<int>(BlendMode::kDarken));
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(BlendMode v) {
  switch (v) {
    case BlendMode::kNormal:
      return CSSValueID::kNormal;
    case BlendMode::kPlusLighter:
      return CSSValueID::kPlusLighter;
    case BlendMode::kOverlay:
      return CSSValueID::kOverlay;
    case BlendMode::kMultiply:
      return CSSValueID::kMultiply;
    case BlendMode::kScreen:
      return CSSValueID::kScreen;
    default:
      DCHECK_GE(v, BlendMode::kDarken);
      DCHECK_LE(v, BlendMode::kLuminosity);
      return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(BlendMode::kDarken) + static_cast<int>(CSSValueID::kDarken));
  }
}


template <>
inline EObjectFit cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueID::kNone:
      return EObjectFit::kNone;
    case CSSValueID::kFill:
      return EObjectFit::kFill;
    case CSSValueID::kScaleDown:
      return EObjectFit::kScaleDown;
    default:
      DCHECK_GE(v, CSSValueID::kContain);
      DCHECK_LE(v, CSSValueID::kCover);
      return static_cast<EObjectFit>(static_cast<int>(v) - static_cast<int>(CSSValueID::kContain) + static_cast<int>(EObjectFit::kContain));
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(EObjectFit v) {
  switch (v) {
    case EObjectFit::kNone:
      return CSSValueID::kNone;
    case EObjectFit::kFill:
      return CSSValueID::kFill;
    case EObjectFit::kScaleDown:
      return CSSValueID::kScaleDown;
    default:
      DCHECK_GE(v, EObjectFit::kContain);
      DCHECK_LE(v, EObjectFit::kCover);
      return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(EObjectFit::kContain) + static_cast<int>(CSSValueID::kContain));
  }
}


template <>
inline EOriginTrialTestProperty cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueID::kNormal:
      return EOriginTrialTestProperty::kNormal;
    default:
      DCHECK_GE(v, CSSValueID::kNone);
      DCHECK_LE(v, CSSValueID::kNone);
      return static_cast<EOriginTrialTestProperty>(static_cast<int>(v) - static_cast<int>(CSSValueID::kNone) + static_cast<int>(EOriginTrialTestProperty::kNone));
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(EOriginTrialTestProperty v) {
  switch (v) {
    case EOriginTrialTestProperty::kNormal:
      return CSSValueID::kNormal;
    default:
      DCHECK_GE(v, EOriginTrialTestProperty::kNone);
      DCHECK_LE(v, EOriginTrialTestProperty::kNone);
      return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(EOriginTrialTestProperty::kNone) + static_cast<int>(CSSValueID::kNone));
  }
}


template <>
inline EOverflowAnchor cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueID::kAuto:
      return EOverflowAnchor::kAuto;
    case CSSValueID::kVisible:
      return EOverflowAnchor::kVisible;
    default:
      DCHECK_GE(v, CSSValueID::kNone);
      DCHECK_LE(v, CSSValueID::kNone);
      return static_cast<EOverflowAnchor>(static_cast<int>(v) - static_cast<int>(CSSValueID::kNone) + static_cast<int>(EOverflowAnchor::kNone));
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(EOverflowAnchor v) {
  switch (v) {
    case EOverflowAnchor::kAuto:
      return CSSValueID::kAuto;
    case EOverflowAnchor::kVisible:
      return CSSValueID::kVisible;
    default:
      DCHECK_GE(v, EOverflowAnchor::kNone);
      DCHECK_LE(v, EOverflowAnchor::kNone);
      return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(EOverflowAnchor::kNone) + static_cast<int>(CSSValueID::kNone));
  }
}


template <>
inline EOverflowWrap cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueID::kBreakWord:
      return EOverflowWrap::kBreakWord;
    case CSSValueID::kAnywhere:
      return EOverflowWrap::kAnywhere;
    default:
      DCHECK_GE(v, CSSValueID::kNormal);
      DCHECK_LE(v, CSSValueID::kNormal);
      return static_cast<EOverflowWrap>(static_cast<int>(v) - static_cast<int>(CSSValueID::kNormal) + static_cast<int>(EOverflowWrap::kNormal));
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(EOverflowWrap v) {
  switch (v) {
    case EOverflowWrap::kBreakWord:
      return CSSValueID::kBreakWord;
    case EOverflowWrap::kAnywhere:
      return CSSValueID::kAnywhere;
    default:
      DCHECK_GE(v, EOverflowWrap::kNormal);
      DCHECK_LE(v, EOverflowWrap::kNormal);
      return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(EOverflowWrap::kNormal) + static_cast<int>(CSSValueID::kNormal));
  }
}


template <>
inline EOverflow cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueID::kAuto:
      return EOverflow::kAuto;
    case CSSValueID::kVisible:
      return EOverflow::kVisible;
    case CSSValueID::kOverlay:
      return EOverflow::kOverlay;
    case CSSValueID::kScroll:
      return EOverflow::kScroll;
    case CSSValueID::kClip:
      return EOverflow::kClip;
    default:
      DCHECK_GE(v, CSSValueID::kHidden);
      DCHECK_LE(v, CSSValueID::kHidden);
      return static_cast<EOverflow>(static_cast<int>(v) - static_cast<int>(CSSValueID::kHidden) + static_cast<int>(EOverflow::kHidden));
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(EOverflow v) {
  switch (v) {
    case EOverflow::kAuto:
      return CSSValueID::kAuto;
    case EOverflow::kVisible:
      return CSSValueID::kVisible;
    case EOverflow::kOverlay:
      return CSSValueID::kOverlay;
    case EOverflow::kScroll:
      return CSSValueID::kScroll;
    case EOverflow::kClip:
      return CSSValueID::kClip;
    default:
      DCHECK_GE(v, EOverflow::kHidden);
      DCHECK_LE(v, EOverflow::kHidden);
      return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(EOverflow::kHidden) + static_cast<int>(CSSValueID::kHidden));
  }
}


template <>
inline EOverscrollBehavior cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueID::kAuto:
      return EOverscrollBehavior::kAuto;
    case CSSValueID::kContain:
      return EOverscrollBehavior::kContain;
    default:
      DCHECK_GE(v, CSSValueID::kNone);
      DCHECK_LE(v, CSSValueID::kNone);
      return static_cast<EOverscrollBehavior>(static_cast<int>(v) - static_cast<int>(CSSValueID::kNone) + static_cast<int>(EOverscrollBehavior::kNone));
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(EOverscrollBehavior v) {
  switch (v) {
    case EOverscrollBehavior::kAuto:
      return CSSValueID::kAuto;
    case EOverscrollBehavior::kContain:
      return CSSValueID::kContain;
    default:
      DCHECK_GE(v, EOverscrollBehavior::kNone);
      DCHECK_LE(v, EOverscrollBehavior::kNone);
      return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(EOverscrollBehavior::kNone) + static_cast<int>(CSSValueID::kNone));
  }
}


template <>
inline EPointerEvents cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueID::kNone:
      return EPointerEvents::kNone;
    case CSSValueID::kAll:
      return EPointerEvents::kAll;
    case CSSValueID::kAuto:
      return EPointerEvents::kAuto;
    case CSSValueID::kVisible:
      return EPointerEvents::kVisible;
    default:
      DCHECK_GE(v, CSSValueID::kVisiblepainted);
      DCHECK_LE(v, CSSValueID::kBoundingBox);
      return static_cast<EPointerEvents>(static_cast<int>(v) - static_cast<int>(CSSValueID::kVisiblepainted) + static_cast<int>(EPointerEvents::kVisiblepainted));
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(EPointerEvents v) {
  switch (v) {
    case EPointerEvents::kNone:
      return CSSValueID::kNone;
    case EPointerEvents::kAll:
      return CSSValueID::kAll;
    case EPointerEvents::kAuto:
      return CSSValueID::kAuto;
    case EPointerEvents::kVisible:
      return CSSValueID::kVisible;
    default:
      DCHECK_GE(v, EPointerEvents::kVisiblepainted);
      DCHECK_LE(v, EPointerEvents::kBoundingBox);
      return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(EPointerEvents::kVisiblepainted) + static_cast<int>(CSSValueID::kVisiblepainted));
  }
}


template <>
inline EPosition cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueID::kFixed:
      return EPosition::kFixed;
    case CSSValueID::kRelative:
      return EPosition::kRelative;
    case CSSValueID::kStatic:
      return EPosition::kStatic;
    case CSSValueID::kSticky:
      return EPosition::kSticky;
    default:
      DCHECK_GE(v, CSSValueID::kAbsolute);
      DCHECK_LE(v, CSSValueID::kAbsolute);
      return static_cast<EPosition>(static_cast<int>(v) - static_cast<int>(CSSValueID::kAbsolute) + static_cast<int>(EPosition::kAbsolute));
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(EPosition v) {
  switch (v) {
    case EPosition::kFixed:
      return CSSValueID::kFixed;
    case EPosition::kRelative:
      return CSSValueID::kRelative;
    case EPosition::kStatic:
      return CSSValueID::kStatic;
    case EPosition::kSticky:
      return CSSValueID::kSticky;
    default:
      DCHECK_GE(v, EPosition::kAbsolute);
      DCHECK_LE(v, EPosition::kAbsolute);
      return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(EPosition::kAbsolute) + static_cast<int>(CSSValueID::kAbsolute));
  }
}


template <>
inline EResize cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueID::kNone:
      return EResize::kNone;
    case CSSValueID::kBoth:
      return EResize::kBoth;
    case CSSValueID::kHorizontal:
      return EResize::kHorizontal;
    case CSSValueID::kVertical:
      return EResize::kVertical;
    default:
      DCHECK_GE(v, CSSValueID::kInline);
      DCHECK_LE(v, CSSValueID::kBlock);
      return static_cast<EResize>(static_cast<int>(v) - static_cast<int>(CSSValueID::kInline) + static_cast<int>(EResize::kInline));
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(EResize v) {
  switch (v) {
    case EResize::kNone:
      return CSSValueID::kNone;
    case EResize::kBoth:
      return CSSValueID::kBoth;
    case EResize::kHorizontal:
      return CSSValueID::kHorizontal;
    case EResize::kVertical:
      return CSSValueID::kVertical;
    default:
      DCHECK_GE(v, EResize::kInline);
      DCHECK_LE(v, EResize::kBlock);
      return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(EResize::kInline) + static_cast<int>(CSSValueID::kInline));
  }
}


template <>
inline EScrollSnapStop cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueID::kAlways:
      return EScrollSnapStop::kAlways;
    default:
      DCHECK_GE(v, CSSValueID::kNormal);
      DCHECK_LE(v, CSSValueID::kNormal);
      return static_cast<EScrollSnapStop>(static_cast<int>(v) - static_cast<int>(CSSValueID::kNormal) + static_cast<int>(EScrollSnapStop::kNormal));
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(EScrollSnapStop v) {
  switch (v) {
    case EScrollSnapStop::kAlways:
      return CSSValueID::kAlways;
    default:
      DCHECK_GE(v, EScrollSnapStop::kNormal);
      DCHECK_LE(v, EScrollSnapStop::kNormal);
      return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(EScrollSnapStop::kNormal) + static_cast<int>(CSSValueID::kNormal));
  }
}


template <>
inline EScrollbarWidth cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueID::kAuto:
      return EScrollbarWidth::kAuto;
    case CSSValueID::kThin:
      return EScrollbarWidth::kThin;
    default:
      DCHECK_GE(v, CSSValueID::kNone);
      DCHECK_LE(v, CSSValueID::kNone);
      return static_cast<EScrollbarWidth>(static_cast<int>(v) - static_cast<int>(CSSValueID::kNone) + static_cast<int>(EScrollbarWidth::kNone));
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(EScrollbarWidth v) {
  switch (v) {
    case EScrollbarWidth::kAuto:
      return CSSValueID::kAuto;
    case EScrollbarWidth::kThin:
      return CSSValueID::kThin;
    default:
      DCHECK_GE(v, EScrollbarWidth::kNone);
      DCHECK_LE(v, EScrollbarWidth::kNone);
      return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(EScrollbarWidth::kNone) + static_cast<int>(CSSValueID::kNone));
  }
}


template <>
inline EShapeRendering cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueID::kAuto:
      return EShapeRendering::kAuto;
    case CSSValueID::kOptimizespeed:
      return EShapeRendering::kOptimizespeed;
    default:
      DCHECK_GE(v, CSSValueID::kGeometricprecision);
      DCHECK_LE(v, CSSValueID::kCrispedges);
      return static_cast<EShapeRendering>(static_cast<int>(v) - static_cast<int>(CSSValueID::kGeometricprecision) + static_cast<int>(EShapeRendering::kGeometricprecision));
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(EShapeRendering v) {
  switch (v) {
    case EShapeRendering::kAuto:
      return CSSValueID::kAuto;
    case EShapeRendering::kOptimizespeed:
      return CSSValueID::kOptimizespeed;
    default:
      DCHECK_GE(v, EShapeRendering::kGeometricprecision);
      DCHECK_LE(v, EShapeRendering::kCrispedges);
      return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(EShapeRendering::kGeometricprecision) + static_cast<int>(CSSValueID::kGeometricprecision));
  }
}


template <>
inline ESpeak cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueID::kNone:
      return ESpeak::kNone;
    case CSSValueID::kNormal:
      return ESpeak::kNormal;
    default:
      DCHECK_GE(v, CSSValueID::kSpellOut);
      DCHECK_LE(v, CSSValueID::kNoPunctuation);
      return static_cast<ESpeak>(static_cast<int>(v) - static_cast<int>(CSSValueID::kSpellOut) + static_cast<int>(ESpeak::kSpellOut));
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(ESpeak v) {
  switch (v) {
    case ESpeak::kNone:
      return CSSValueID::kNone;
    case ESpeak::kNormal:
      return CSSValueID::kNormal;
    default:
      DCHECK_GE(v, ESpeak::kSpellOut);
      DCHECK_LE(v, ESpeak::kNoPunctuation);
      return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(ESpeak::kSpellOut) + static_cast<int>(CSSValueID::kSpellOut));
  }
}


template <>
inline ETableLayout cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueID::kFixed:
      return ETableLayout::kFixed;
    default:
      DCHECK_GE(v, CSSValueID::kAuto);
      DCHECK_LE(v, CSSValueID::kAuto);
      return static_cast<ETableLayout>(static_cast<int>(v) - static_cast<int>(CSSValueID::kAuto) + static_cast<int>(ETableLayout::kAuto));
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(ETableLayout v) {
  switch (v) {
    case ETableLayout::kFixed:
      return CSSValueID::kFixed;
    default:
      DCHECK_GE(v, ETableLayout::kAuto);
      DCHECK_LE(v, ETableLayout::kAuto);
      return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(ETableLayout::kAuto) + static_cast<int>(CSSValueID::kAuto));
  }
}


template <>
inline ETextAlign cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueID::kStart:
      return ETextAlign::kStart;
    case CSSValueID::kEnd:
      return ETextAlign::kEnd;
    default:
      DCHECK_GE(v, CSSValueID::kLeft);
      DCHECK_LE(v, CSSValueID::kWebkitCenter);
      return static_cast<ETextAlign>(static_cast<int>(v) - static_cast<int>(CSSValueID::kLeft) + static_cast<int>(ETextAlign::kLeft));
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(ETextAlign v) {
  switch (v) {
    case ETextAlign::kStart:
      return CSSValueID::kStart;
    case ETextAlign::kEnd:
      return CSSValueID::kEnd;
    default:
      DCHECK_GE(v, ETextAlign::kLeft);
      DCHECK_LE(v, ETextAlign::kWebkitCenter);
      return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(ETextAlign::kLeft) + static_cast<int>(CSSValueID::kLeft));
  }
}


template <>
inline ETextAlignLast cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueID::kAuto:
      return ETextAlignLast::kAuto;
    case CSSValueID::kStart:
      return ETextAlignLast::kStart;
    case CSSValueID::kEnd:
      return ETextAlignLast::kEnd;
    default:
      DCHECK_GE(v, CSSValueID::kLeft);
      DCHECK_LE(v, CSSValueID::kJustify);
      return static_cast<ETextAlignLast>(static_cast<int>(v) - static_cast<int>(CSSValueID::kLeft) + static_cast<int>(ETextAlignLast::kLeft));
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(ETextAlignLast v) {
  switch (v) {
    case ETextAlignLast::kAuto:
      return CSSValueID::kAuto;
    case ETextAlignLast::kStart:
      return CSSValueID::kStart;
    case ETextAlignLast::kEnd:
      return CSSValueID::kEnd;
    default:
      DCHECK_GE(v, ETextAlignLast::kLeft);
      DCHECK_LE(v, ETextAlignLast::kJustify);
      return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(ETextAlignLast::kLeft) + static_cast<int>(CSSValueID::kLeft));
  }
}


template <>
inline ETextAnchor cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueID::kMiddle:
      return ETextAnchor::kMiddle;
    default:
      DCHECK_GE(v, CSSValueID::kStart);
      DCHECK_LE(v, CSSValueID::kEnd);
      return static_cast<ETextAnchor>(static_cast<int>(v) - static_cast<int>(CSSValueID::kStart) + static_cast<int>(ETextAnchor::kStart));
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(ETextAnchor v) {
  switch (v) {
    case ETextAnchor::kMiddle:
      return CSSValueID::kMiddle;
    default:
      DCHECK_GE(v, ETextAnchor::kStart);
      DCHECK_LE(v, ETextAnchor::kEnd);
      return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(ETextAnchor::kStart) + static_cast<int>(CSSValueID::kStart));
  }
}


template <>
inline ETextCombine cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueID::kAll:
      return ETextCombine::kAll;
    default:
      DCHECK_GE(v, CSSValueID::kNone);
      DCHECK_LE(v, CSSValueID::kNone);
      return static_cast<ETextCombine>(static_cast<int>(v) - static_cast<int>(CSSValueID::kNone) + static_cast<int>(ETextCombine::kNone));
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(ETextCombine v) {
  switch (v) {
    case ETextCombine::kAll:
      return CSSValueID::kAll;
    default:
      DCHECK_GE(v, ETextCombine::kNone);
      DCHECK_LE(v, ETextCombine::kNone);
      return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(ETextCombine::kNone) + static_cast<int>(CSSValueID::kNone));
  }
}

template <>
inline TextDecorationLine cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueID::kNone:
      return TextDecorationLine::kNone;
    case CSSValueID::kUnderline:
      return TextDecorationLine::kUnderline;
    case CSSValueID::kOverline:
      return TextDecorationLine::kOverline;
    case CSSValueID::kLineThrough:
      return TextDecorationLine::kLineThrough;
    case CSSValueID::kBlink:
      return TextDecorationLine::kBlink;
    case CSSValueID::kSpellingError:
      return TextDecorationLine::kSpellingError;
    case CSSValueID::kGrammarError:
      return TextDecorationLine::kGrammarError;
    default:
      NOTREACHED();
      return TextDecorationLine::kNone;
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(TextDecorationLine v) {
  switch (v) {
    case TextDecorationLine::kNone:
      return CSSValueID::kNone;
    case TextDecorationLine::kUnderline:
      return CSSValueID::kUnderline;
    case TextDecorationLine::kOverline:
      return CSSValueID::kOverline;
    case TextDecorationLine::kLineThrough:
      return CSSValueID::kLineThrough;
    case TextDecorationLine::kBlink:
      return CSSValueID::kBlink;
    case TextDecorationLine::kSpellingError:
      return CSSValueID::kSpellingError;
    case TextDecorationLine::kGrammarError:
      return CSSValueID::kGrammarError;
    default:
      NOTREACHED();
      return CSSValueID::kNone;
  }
}

template <>
inline ETextDecorationSkipInk cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueID::kAuto:
      return ETextDecorationSkipInk::kAuto;
    default:
      DCHECK_GE(v, CSSValueID::kNone);
      DCHECK_LE(v, CSSValueID::kNone);
      return static_cast<ETextDecorationSkipInk>(static_cast<int>(v) - static_cast<int>(CSSValueID::kNone) + static_cast<int>(ETextDecorationSkipInk::kNone));
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(ETextDecorationSkipInk v) {
  switch (v) {
    case ETextDecorationSkipInk::kAuto:
      return CSSValueID::kAuto;
    default:
      DCHECK_GE(v, ETextDecorationSkipInk::kNone);
      DCHECK_LE(v, ETextDecorationSkipInk::kNone);
      return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(ETextDecorationSkipInk::kNone) + static_cast<int>(CSSValueID::kNone));
  }
}


template <>
inline ETextDecorationStyle cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueID::kWavy:
      return ETextDecorationStyle::kWavy;
    default:
      DCHECK_GE(v, CSSValueID::kDotted);
      DCHECK_LE(v, CSSValueID::kDouble);
      return static_cast<ETextDecorationStyle>(static_cast<int>(v) - static_cast<int>(CSSValueID::kDotted) + static_cast<int>(ETextDecorationStyle::kDotted));
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(ETextDecorationStyle v) {
  switch (v) {
    case ETextDecorationStyle::kWavy:
      return CSSValueID::kWavy;
    default:
      DCHECK_GE(v, ETextDecorationStyle::kDotted);
      DCHECK_LE(v, ETextDecorationStyle::kDouble);
      return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(ETextDecorationStyle::kDotted) + static_cast<int>(CSSValueID::kDotted));
  }
}


template <>
inline TextJustify cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueID::kNone:
      return TextJustify::kNone;
    case CSSValueID::kAuto:
      return TextJustify::kAuto;
    default:
      DCHECK_GE(v, CSSValueID::kInterWord);
      DCHECK_LE(v, CSSValueID::kDistribute);
      return static_cast<TextJustify>(static_cast<int>(v) - static_cast<int>(CSSValueID::kInterWord) + static_cast<int>(TextJustify::kInterWord));
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(TextJustify v) {
  switch (v) {
    case TextJustify::kNone:
      return CSSValueID::kNone;
    case TextJustify::kAuto:
      return CSSValueID::kAuto;
    default:
      DCHECK_GE(v, TextJustify::kInterWord);
      DCHECK_LE(v, TextJustify::kDistribute);
      return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(TextJustify::kInterWord) + static_cast<int>(CSSValueID::kInterWord));
  }
}


template <>
inline ETextOverflow cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  DCHECK_GE(v, CSSValueID::kClip);
  DCHECK_LE(v, CSSValueID::kEllipsis);
  return static_cast<ETextOverflow>(static_cast<int>(v) - static_cast<int>(CSSValueID::kClip) + static_cast<int>(ETextOverflow::kClip));
}

inline CSSValueID platformEnumToCSSValueIDGenerated(ETextOverflow v) {
  DCHECK_GE(v, ETextOverflow::kClip);
  DCHECK_LE(v, ETextOverflow::kEllipsis);
  return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(ETextOverflow::kClip) + static_cast<int>(CSSValueID::kClip));
}


template <>
inline ETextTransform cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueID::kNone:
      return ETextTransform::kNone;
    case CSSValueID::kMathAuto:
      return ETextTransform::kMathAuto;
    default:
      DCHECK_GE(v, CSSValueID::kCapitalize);
      DCHECK_LE(v, CSSValueID::kLowercase);
      return static_cast<ETextTransform>(static_cast<int>(v) - static_cast<int>(CSSValueID::kCapitalize) + static_cast<int>(ETextTransform::kCapitalize));
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(ETextTransform v) {
  switch (v) {
    case ETextTransform::kNone:
      return CSSValueID::kNone;
    case ETextTransform::kMathAuto:
      return CSSValueID::kMathAuto;
    default:
      DCHECK_GE(v, ETextTransform::kCapitalize);
      DCHECK_LE(v, ETextTransform::kLowercase);
      return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(ETextTransform::kCapitalize) + static_cast<int>(CSSValueID::kCapitalize));
  }
}


template <>
inline ETransformBox cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  DCHECK_GE(v, CSSValueID::kFillBox);
  DCHECK_LE(v, CSSValueID::kViewBox);
  return static_cast<ETransformBox>(static_cast<int>(v) - static_cast<int>(CSSValueID::kFillBox) + static_cast<int>(ETransformBox::kFillBox));
}

inline CSSValueID platformEnumToCSSValueIDGenerated(ETransformBox v) {
  DCHECK_GE(v, ETransformBox::kFillBox);
  DCHECK_LE(v, ETransformBox::kViewBox);
  return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(ETransformBox::kFillBox) + static_cast<int>(CSSValueID::kFillBox));
}


template <>
inline ETransformStyle3D cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  DCHECK_GE(v, CSSValueID::kFlat);
  DCHECK_LE(v, CSSValueID::kPreserve3d);
  return static_cast<ETransformStyle3D>(static_cast<int>(v) - static_cast<int>(CSSValueID::kFlat) + static_cast<int>(ETransformStyle3D::kFlat));
}

inline CSSValueID platformEnumToCSSValueIDGenerated(ETransformStyle3D v) {
  DCHECK_GE(v, ETransformStyle3D::kFlat);
  DCHECK_LE(v, ETransformStyle3D::kPreserve3d);
  return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(ETransformStyle3D::kFlat) + static_cast<int>(CSSValueID::kFlat));
}


template <>
inline UnicodeBidi cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueID::kBidiOverride:
      return UnicodeBidi::kBidiOverride;
    case CSSValueID::kEmbed:
      return UnicodeBidi::kEmbed;
    case CSSValueID::kIsolate:
      return UnicodeBidi::kIsolate;
    case CSSValueID::kIsolateOverride:
      return UnicodeBidi::kIsolateOverride;
    case CSSValueID::kPlaintext:
      return UnicodeBidi::kPlaintext;
    default:
      DCHECK_GE(v, CSSValueID::kNormal);
      DCHECK_LE(v, CSSValueID::kNormal);
      return static_cast<UnicodeBidi>(static_cast<int>(v) - static_cast<int>(CSSValueID::kNormal) + static_cast<int>(UnicodeBidi::kNormal));
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(UnicodeBidi v) {
  switch (v) {
    case UnicodeBidi::kBidiOverride:
      return CSSValueID::kBidiOverride;
    case UnicodeBidi::kEmbed:
      return CSSValueID::kEmbed;
    case UnicodeBidi::kIsolate:
      return CSSValueID::kIsolate;
    case UnicodeBidi::kIsolateOverride:
      return CSSValueID::kIsolateOverride;
    case UnicodeBidi::kPlaintext:
      return CSSValueID::kPlaintext;
    default:
      DCHECK_GE(v, UnicodeBidi::kNormal);
      DCHECK_LE(v, UnicodeBidi::kNormal);
      return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(UnicodeBidi::kNormal) + static_cast<int>(CSSValueID::kNormal));
  }
}


template <>
inline EUserSelect cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueID::kAll:
      return EUserSelect::kAll;
    case CSSValueID::kAuto:
      return EUserSelect::kAuto;
    case CSSValueID::kText:
      return EUserSelect::kText;
    default:
      DCHECK_GE(v, CSSValueID::kNone);
      DCHECK_LE(v, CSSValueID::kNone);
      return static_cast<EUserSelect>(static_cast<int>(v) - static_cast<int>(CSSValueID::kNone) + static_cast<int>(EUserSelect::kNone));
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(EUserSelect v) {
  switch (v) {
    case EUserSelect::kAll:
      return CSSValueID::kAll;
    case EUserSelect::kAuto:
      return CSSValueID::kAuto;
    case EUserSelect::kText:
      return CSSValueID::kText;
    default:
      DCHECK_GE(v, EUserSelect::kNone);
      DCHECK_LE(v, EUserSelect::kNone);
      return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(EUserSelect::kNone) + static_cast<int>(CSSValueID::kNone));
  }
}


template <>
inline EVectorEffect cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueID::kNonScalingStroke:
      return EVectorEffect::kNonScalingStroke;
    default:
      DCHECK_GE(v, CSSValueID::kNone);
      DCHECK_LE(v, CSSValueID::kNone);
      return static_cast<EVectorEffect>(static_cast<int>(v) - static_cast<int>(CSSValueID::kNone) + static_cast<int>(EVectorEffect::kNone));
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(EVectorEffect v) {
  switch (v) {
    case EVectorEffect::kNonScalingStroke:
      return CSSValueID::kNonScalingStroke;
    default:
      DCHECK_GE(v, EVectorEffect::kNone);
      DCHECK_LE(v, EVectorEffect::kNone);
      return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(EVectorEffect::kNone) + static_cast<int>(CSSValueID::kNone));
  }
}


template <>
inline EVisibility cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueID::kHidden:
      return EVisibility::kHidden;
    default:
      DCHECK_GE(v, CSSValueID::kVisible);
      DCHECK_LE(v, CSSValueID::kCollapse);
      return static_cast<EVisibility>(static_cast<int>(v) - static_cast<int>(CSSValueID::kVisible) + static_cast<int>(EVisibility::kVisible));
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(EVisibility v) {
  switch (v) {
    case EVisibility::kHidden:
      return CSSValueID::kHidden;
    default:
      DCHECK_GE(v, EVisibility::kVisible);
      DCHECK_LE(v, EVisibility::kCollapse);
      return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(EVisibility::kVisible) + static_cast<int>(CSSValueID::kVisible));
  }
}


template <>
inline EBoxAlignment cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueID::kBaseline:
      return EBoxAlignment::kBaseline;
    case CSSValueID::kCenter:
      return EBoxAlignment::kCenter;
    default:
      DCHECK_GE(v, CSSValueID::kStretch);
      DCHECK_LE(v, CSSValueID::kEnd);
      return static_cast<EBoxAlignment>(static_cast<int>(v) - static_cast<int>(CSSValueID::kStretch) + static_cast<int>(EBoxAlignment::kStretch));
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(EBoxAlignment v) {
  switch (v) {
    case EBoxAlignment::kBaseline:
      return CSSValueID::kBaseline;
    case EBoxAlignment::kCenter:
      return CSSValueID::kCenter;
    default:
      DCHECK_GE(v, EBoxAlignment::kStretch);
      DCHECK_LE(v, EBoxAlignment::kEnd);
      return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(EBoxAlignment::kStretch) + static_cast<int>(CSSValueID::kStretch));
  }
}


template <>
inline EBoxDecorationBreak cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  DCHECK_GE(v, CSSValueID::kClone);
  DCHECK_LE(v, CSSValueID::kSlice);
  return static_cast<EBoxDecorationBreak>(static_cast<int>(v) - static_cast<int>(CSSValueID::kClone) + static_cast<int>(EBoxDecorationBreak::kClone));
}

inline CSSValueID platformEnumToCSSValueIDGenerated(EBoxDecorationBreak v) {
  DCHECK_GE(v, EBoxDecorationBreak::kClone);
  DCHECK_LE(v, EBoxDecorationBreak::kSlice);
  return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(EBoxDecorationBreak::kClone) + static_cast<int>(CSSValueID::kClone));
}


template <>
inline EBoxDirection cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueID::kReverse:
      return EBoxDirection::kReverse;
    default:
      DCHECK_GE(v, CSSValueID::kNormal);
      DCHECK_LE(v, CSSValueID::kNormal);
      return static_cast<EBoxDirection>(static_cast<int>(v) - static_cast<int>(CSSValueID::kNormal) + static_cast<int>(EBoxDirection::kNormal));
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(EBoxDirection v) {
  switch (v) {
    case EBoxDirection::kReverse:
      return CSSValueID::kReverse;
    default:
      DCHECK_GE(v, EBoxDirection::kNormal);
      DCHECK_LE(v, EBoxDirection::kNormal);
      return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(EBoxDirection::kNormal) + static_cast<int>(CSSValueID::kNormal));
  }
}


template <>
inline EBoxOrient cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  DCHECK_GE(v, CSSValueID::kHorizontal);
  DCHECK_LE(v, CSSValueID::kVertical);
  return static_cast<EBoxOrient>(static_cast<int>(v) - static_cast<int>(CSSValueID::kHorizontal) + static_cast<int>(EBoxOrient::kHorizontal));
}

inline CSSValueID platformEnumToCSSValueIDGenerated(EBoxOrient v) {
  DCHECK_GE(v, EBoxOrient::kHorizontal);
  DCHECK_LE(v, EBoxOrient::kVertical);
  return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(EBoxOrient::kHorizontal) + static_cast<int>(CSSValueID::kHorizontal));
}


template <>
inline EBoxPack cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueID::kStart:
      return EBoxPack::kStart;
    case CSSValueID::kEnd:
      return EBoxPack::kEnd;
    default:
      DCHECK_GE(v, CSSValueID::kCenter);
      DCHECK_LE(v, CSSValueID::kJustify);
      return static_cast<EBoxPack>(static_cast<int>(v) - static_cast<int>(CSSValueID::kCenter) + static_cast<int>(EBoxPack::kCenter));
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(EBoxPack v) {
  switch (v) {
    case EBoxPack::kStart:
      return CSSValueID::kStart;
    case EBoxPack::kEnd:
      return CSSValueID::kEnd;
    default:
      DCHECK_GE(v, EBoxPack::kCenter);
      DCHECK_LE(v, EBoxPack::kJustify);
      return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(EBoxPack::kCenter) + static_cast<int>(CSSValueID::kCenter));
  }
}


template <>
inline LineBreak cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueID::kNormal:
      return LineBreak::kNormal;
    case CSSValueID::kAuto:
      return LineBreak::kAuto;
    default:
      DCHECK_GE(v, CSSValueID::kLoose);
      DCHECK_LE(v, CSSValueID::kAnywhere);
      return static_cast<LineBreak>(static_cast<int>(v) - static_cast<int>(CSSValueID::kLoose) + static_cast<int>(LineBreak::kLoose));
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(LineBreak v) {
  switch (v) {
    case LineBreak::kNormal:
      return CSSValueID::kNormal;
    case LineBreak::kAuto:
      return CSSValueID::kAuto;
    default:
      DCHECK_GE(v, LineBreak::kLoose);
      DCHECK_LE(v, LineBreak::kAnywhere);
      return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(LineBreak::kLoose) + static_cast<int>(CSSValueID::kLoose));
  }
}


template <>
inline EPrintColorAdjust cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  DCHECK_GE(v, CSSValueID::kEconomy);
  DCHECK_LE(v, CSSValueID::kExact);
  return static_cast<EPrintColorAdjust>(static_cast<int>(v) - static_cast<int>(CSSValueID::kEconomy) + static_cast<int>(EPrintColorAdjust::kEconomy));
}

inline CSSValueID platformEnumToCSSValueIDGenerated(EPrintColorAdjust v) {
  DCHECK_GE(v, EPrintColorAdjust::kEconomy);
  DCHECK_LE(v, EPrintColorAdjust::kExact);
  return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(EPrintColorAdjust::kEconomy) + static_cast<int>(CSSValueID::kEconomy));
}


template <>
inline EOrder cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  DCHECK_GE(v, CSSValueID::kLogical);
  DCHECK_LE(v, CSSValueID::kVisual);
  return static_cast<EOrder>(static_cast<int>(v) - static_cast<int>(CSSValueID::kLogical) + static_cast<int>(EOrder::kLogical));
}

inline CSSValueID platformEnumToCSSValueIDGenerated(EOrder v) {
  DCHECK_GE(v, EOrder::kLogical);
  DCHECK_LE(v, EOrder::kVisual);
  return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(EOrder::kLogical) + static_cast<int>(CSSValueID::kLogical));
}


template <>
inline RubyPosition cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  DCHECK_GE(v, CSSValueID::kAfter);
  DCHECK_LE(v, CSSValueID::kBefore);
  return static_cast<RubyPosition>(static_cast<int>(v) - static_cast<int>(CSSValueID::kAfter) + static_cast<int>(RubyPosition::kAfter));
}

inline CSSValueID platformEnumToCSSValueIDGenerated(RubyPosition v) {
  DCHECK_GE(v, RubyPosition::kAfter);
  DCHECK_LE(v, RubyPosition::kBefore);
  return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(RubyPosition::kAfter) + static_cast<int>(CSSValueID::kAfter));
}


template <>
inline ETextSecurity cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueID::kNone:
      return ETextSecurity::kNone;
    default:
      DCHECK_GE(v, CSSValueID::kDisc);
      DCHECK_LE(v, CSSValueID::kSquare);
      return static_cast<ETextSecurity>(static_cast<int>(v) - static_cast<int>(CSSValueID::kDisc) + static_cast<int>(ETextSecurity::kDisc));
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(ETextSecurity v) {
  switch (v) {
    case ETextSecurity::kNone:
      return CSSValueID::kNone;
    default:
      DCHECK_GE(v, ETextSecurity::kDisc);
      DCHECK_LE(v, ETextSecurity::kSquare);
      return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(ETextSecurity::kDisc) + static_cast<int>(CSSValueID::kDisc));
  }
}


template <>
inline EUserDrag cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueID::kAuto:
      return EUserDrag::kAuto;
    case CSSValueID::kElement:
      return EUserDrag::kElement;
    default:
      DCHECK_GE(v, CSSValueID::kNone);
      DCHECK_LE(v, CSSValueID::kNone);
      return static_cast<EUserDrag>(static_cast<int>(v) - static_cast<int>(CSSValueID::kNone) + static_cast<int>(EUserDrag::kNone));
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(EUserDrag v) {
  switch (v) {
    case EUserDrag::kAuto:
      return CSSValueID::kAuto;
    case EUserDrag::kElement:
      return CSSValueID::kElement;
    default:
      DCHECK_GE(v, EUserDrag::kNone);
      DCHECK_LE(v, EUserDrag::kNone);
      return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(EUserDrag::kNone) + static_cast<int>(CSSValueID::kNone));
  }
}


template <>
inline EUserModify cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  DCHECK_GE(v, CSSValueID::kReadOnly);
  DCHECK_LE(v, CSSValueID::kReadWritePlaintextOnly);
  return static_cast<EUserModify>(static_cast<int>(v) - static_cast<int>(CSSValueID::kReadOnly) + static_cast<int>(EUserModify::kReadOnly));
}

inline CSSValueID platformEnumToCSSValueIDGenerated(EUserModify v) {
  DCHECK_GE(v, EUserModify::kReadOnly);
  DCHECK_LE(v, EUserModify::kReadWritePlaintextOnly);
  return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(EUserModify::kReadOnly) + static_cast<int>(CSSValueID::kReadOnly));
}

template <>
inline EWhiteSpace cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueID::kNormal:
      return EWhiteSpace::kNormal;
    case CSSValueID::kPre:
      return EWhiteSpace::kPre;
    case CSSValueID::kPreWrap:
      return EWhiteSpace::kPreWrap;
    case CSSValueID::kPreLine:
      return EWhiteSpace::kPreLine;
    case CSSValueID::kNowrap:
      return EWhiteSpace::kNowrap;
    case CSSValueID::kWebkitNowrap:
      return EWhiteSpace::kWebkitNowrap;
    case CSSValueID::kBreakSpaces:
      return EWhiteSpace::kBreakSpaces;
    default:
      NOTREACHED();
      return EWhiteSpace::kNormal;
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(EWhiteSpace v) {
  switch (v) {
    case EWhiteSpace::kNormal:
      return CSSValueID::kNormal;
    case EWhiteSpace::kPre:
      return CSSValueID::kPre;
    case EWhiteSpace::kPreWrap:
      return CSSValueID::kPreWrap;
    case EWhiteSpace::kPreLine:
      return CSSValueID::kPreLine;
    case EWhiteSpace::kNowrap:
      return CSSValueID::kNowrap;
    case EWhiteSpace::kWebkitNowrap:
      return CSSValueID::kWebkitNowrap;
    case EWhiteSpace::kBreakSpaces:
      return CSSValueID::kBreakSpaces;
    default:
      NOTREACHED();
      return CSSValueID::kNone;
  }
}

template <>
inline EWordBreak cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueID::kNormal:
      return EWordBreak::kNormal;
    default:
      DCHECK_GE(v, CSSValueID::kBreakAll);
      DCHECK_LE(v, CSSValueID::kBreakWord);
      return static_cast<EWordBreak>(static_cast<int>(v) - static_cast<int>(CSSValueID::kBreakAll) + static_cast<int>(EWordBreak::kBreakAll));
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(EWordBreak v) {
  switch (v) {
    case EWordBreak::kNormal:
      return CSSValueID::kNormal;
    default:
      DCHECK_GE(v, EWordBreak::kBreakAll);
      DCHECK_LE(v, EWordBreak::kBreakWord);
      return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(EWordBreak::kBreakAll) + static_cast<int>(CSSValueID::kBreakAll));
  }
}

}  // namespace detail

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_CORE_CSS_CSS_VALUE_ID_MAPPINGS_GENERATED_H_
