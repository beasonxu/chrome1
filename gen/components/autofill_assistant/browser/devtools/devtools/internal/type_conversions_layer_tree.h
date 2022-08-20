// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Copied and modified from
// https://chromium.googlesource.com/chromium/src/+/a3f9d4fac81fc86065d867ab08fa4912ddf662c7/headless/lib/browser/devtools_api/domain_type_conversions_h.template
// Modifications include namespace and path.

#ifndef COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPE_CONVERSIONS_LAYER_TREE_H_
#define COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPE_CONVERSIONS_LAYER_TREE_H_

#include "base/notreached.h"
#include "components/autofill_assistant/browser/devtools/devtools/domains/types_layer_tree.h"
#include "components/autofill_assistant/browser/devtools/value_conversions.h"

namespace autofill_assistant {
namespace internal {




template <>
struct FromValue<layer_tree::ScrollRect> {
  static std::unique_ptr<layer_tree::ScrollRect> Parse(const base::Value& value, ErrorReporter* errors) {
    return layer_tree::ScrollRect::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const layer_tree::ScrollRect& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<layer_tree::StickyPositionConstraint> {
  static std::unique_ptr<layer_tree::StickyPositionConstraint> Parse(const base::Value& value, ErrorReporter* errors) {
    return layer_tree::StickyPositionConstraint::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const layer_tree::StickyPositionConstraint& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<layer_tree::PictureTile> {
  static std::unique_ptr<layer_tree::PictureTile> Parse(const base::Value& value, ErrorReporter* errors) {
    return layer_tree::PictureTile::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const layer_tree::PictureTile& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<layer_tree::Layer> {
  static std::unique_ptr<layer_tree::Layer> Parse(const base::Value& value, ErrorReporter* errors) {
    return layer_tree::Layer::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const layer_tree::Layer& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<layer_tree::ScrollRectType> {
  static layer_tree::ScrollRectType Parse(const base::Value& value, ErrorReporter* errors) {
    if (!value.is_string()) {
      errors->AddError("string enum value expected");
      return layer_tree::ScrollRectType::REPAINTS_ON_SCROLL;
    }
    if (value.GetString() == "RepaintsOnScroll")
      return layer_tree::ScrollRectType::REPAINTS_ON_SCROLL;
    if (value.GetString() == "TouchEventHandler")
      return layer_tree::ScrollRectType::TOUCH_EVENT_HANDLER;
    if (value.GetString() == "WheelEventHandler")
      return layer_tree::ScrollRectType::WHEEL_EVENT_HANDLER;
    errors->AddError("invalid enum value");
    return layer_tree::ScrollRectType::REPAINTS_ON_SCROLL;
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const layer_tree::ScrollRectType& value, T*) {
  switch (value) {
    case layer_tree::ScrollRectType::REPAINTS_ON_SCROLL:
      return std::make_unique<base::Value>("RepaintsOnScroll");
    case layer_tree::ScrollRectType::TOUCH_EVENT_HANDLER:
      return std::make_unique<base::Value>("TouchEventHandler");
    case layer_tree::ScrollRectType::WHEEL_EVENT_HANDLER:
      return std::make_unique<base::Value>("WheelEventHandler");
  };
  NOTREACHED();
  return nullptr;
}

template <>
struct FromValue<layer_tree::CompositingReasonsParams> {
  static std::unique_ptr<layer_tree::CompositingReasonsParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return layer_tree::CompositingReasonsParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const layer_tree::CompositingReasonsParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<layer_tree::CompositingReasonsResult> {
  static std::unique_ptr<layer_tree::CompositingReasonsResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return layer_tree::CompositingReasonsResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const layer_tree::CompositingReasonsResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<layer_tree::DisableParams> {
  static std::unique_ptr<layer_tree::DisableParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return layer_tree::DisableParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const layer_tree::DisableParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<layer_tree::DisableResult> {
  static std::unique_ptr<layer_tree::DisableResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return layer_tree::DisableResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const layer_tree::DisableResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<layer_tree::EnableParams> {
  static std::unique_ptr<layer_tree::EnableParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return layer_tree::EnableParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const layer_tree::EnableParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<layer_tree::EnableResult> {
  static std::unique_ptr<layer_tree::EnableResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return layer_tree::EnableResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const layer_tree::EnableResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<layer_tree::LoadSnapshotParams> {
  static std::unique_ptr<layer_tree::LoadSnapshotParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return layer_tree::LoadSnapshotParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const layer_tree::LoadSnapshotParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<layer_tree::LoadSnapshotResult> {
  static std::unique_ptr<layer_tree::LoadSnapshotResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return layer_tree::LoadSnapshotResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const layer_tree::LoadSnapshotResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<layer_tree::MakeSnapshotParams> {
  static std::unique_ptr<layer_tree::MakeSnapshotParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return layer_tree::MakeSnapshotParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const layer_tree::MakeSnapshotParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<layer_tree::MakeSnapshotResult> {
  static std::unique_ptr<layer_tree::MakeSnapshotResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return layer_tree::MakeSnapshotResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const layer_tree::MakeSnapshotResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<layer_tree::ProfileSnapshotParams> {
  static std::unique_ptr<layer_tree::ProfileSnapshotParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return layer_tree::ProfileSnapshotParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const layer_tree::ProfileSnapshotParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<layer_tree::ProfileSnapshotResult> {
  static std::unique_ptr<layer_tree::ProfileSnapshotResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return layer_tree::ProfileSnapshotResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const layer_tree::ProfileSnapshotResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<layer_tree::ReleaseSnapshotParams> {
  static std::unique_ptr<layer_tree::ReleaseSnapshotParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return layer_tree::ReleaseSnapshotParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const layer_tree::ReleaseSnapshotParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<layer_tree::ReleaseSnapshotResult> {
  static std::unique_ptr<layer_tree::ReleaseSnapshotResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return layer_tree::ReleaseSnapshotResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const layer_tree::ReleaseSnapshotResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<layer_tree::ReplaySnapshotParams> {
  static std::unique_ptr<layer_tree::ReplaySnapshotParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return layer_tree::ReplaySnapshotParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const layer_tree::ReplaySnapshotParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<layer_tree::ReplaySnapshotResult> {
  static std::unique_ptr<layer_tree::ReplaySnapshotResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return layer_tree::ReplaySnapshotResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const layer_tree::ReplaySnapshotResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<layer_tree::SnapshotCommandLogParams> {
  static std::unique_ptr<layer_tree::SnapshotCommandLogParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return layer_tree::SnapshotCommandLogParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const layer_tree::SnapshotCommandLogParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<layer_tree::SnapshotCommandLogResult> {
  static std::unique_ptr<layer_tree::SnapshotCommandLogResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return layer_tree::SnapshotCommandLogResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const layer_tree::SnapshotCommandLogResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<layer_tree::LayerPaintedParams> {
  static std::unique_ptr<layer_tree::LayerPaintedParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return layer_tree::LayerPaintedParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const layer_tree::LayerPaintedParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<layer_tree::LayerTreeDidChangeParams> {
  static std::unique_ptr<layer_tree::LayerTreeDidChangeParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return layer_tree::LayerTreeDidChangeParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const layer_tree::LayerTreeDidChangeParams& value, T*) {
  return value.Serialize();
}


}  // namespace internal
}  // namespace autofill_assistant

#endif  // COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPE_CONVERSIONS_LAYER_TREE_H_
