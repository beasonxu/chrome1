// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Copied and modified from
// https://chromium.googlesource.com/chromium/src/+/a3f9d4fac81fc86065d867ab08fa4912ddf662c7/headless/lib/browser/devtools_api/domain_types_forward_declarations_h.template
// Modifications include namespace and path.

#ifndef COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPES_FORWARD_DECLARATIONS_LAYER_TREE_H_
#define COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPES_FORWARD_DECLARATIONS_LAYER_TREE_H_

#include "base/values.h"

namespace autofill_assistant {

namespace layer_tree {
class ScrollRect;
class StickyPositionConstraint;
class PictureTile;
class Layer;
class CompositingReasonsParams;
class CompositingReasonsResult;
class DisableParams;
class DisableResult;
class EnableParams;
class EnableResult;
class LoadSnapshotParams;
class LoadSnapshotResult;
class MakeSnapshotParams;
class MakeSnapshotResult;
class ProfileSnapshotParams;
class ProfileSnapshotResult;
class ReleaseSnapshotParams;
class ReleaseSnapshotResult;
class ReplaySnapshotParams;
class ReplaySnapshotResult;
class SnapshotCommandLogParams;
class SnapshotCommandLogResult;
class LayerPaintedParams;
class LayerTreeDidChangeParams;

enum class ScrollRectType {
  REPAINTS_ON_SCROLL,
  TOUCH_EVENT_HANDLER,
  WHEEL_EVENT_HANDLER
};

}  // namespace layer_tree

}  // namespace autofill_assistant

#endif  // COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPES_FORWARD_DECLARATIONS_LAYER_TREE_H_
