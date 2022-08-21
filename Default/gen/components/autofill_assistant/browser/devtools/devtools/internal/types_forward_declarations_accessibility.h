// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Copied and modified from
// https://chromium.googlesource.com/chromium/src/+/a3f9d4fac81fc86065d867ab08fa4912ddf662c7/headless/lib/browser/devtools_api/domain_types_forward_declarations_h.template
// Modifications include namespace and path.

#ifndef COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPES_FORWARD_DECLARATIONS_ACCESSIBILITY_H_
#define COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPES_FORWARD_DECLARATIONS_ACCESSIBILITY_H_

#include "base/values.h"

namespace autofill_assistant {

namespace accessibility {
class AXValueSource;
class AXRelatedNode;
class AXProperty;
class AXValue;
class AXNode;
class DisableParams;
class DisableResult;
class EnableParams;
class EnableResult;
class GetPartialAXTreeParams;
class GetPartialAXTreeResult;
class GetFullAXTreeParams;
class GetFullAXTreeResult;
class GetRootAXNodeParams;
class GetRootAXNodeResult;
class GetAXNodeAndAncestorsParams;
class GetAXNodeAndAncestorsResult;
class GetChildAXNodesParams;
class GetChildAXNodesResult;
class QueryAXTreeParams;
class QueryAXTreeResult;
class LoadCompleteParams;
class NodesUpdatedParams;

enum class AXValueType {
  BOOLEAN,
  TRISTATE,
  BOOLEAN_OR_UNDEFINED,
  IDREF,
  IDREF_LIST,
  INTEGER,
  NODE,
  NODE_LIST,
  NUMBER,
  STRING,
  COMPUTED_STRING,
  TOKEN,
  TOKEN_LIST,
  DOM_RELATION,
  ROLE,
  INTERNAL_ROLE,
  VALUE_UNDEFINED
};

enum class AXValueSourceType {
  ATTRIBUTE,
  IMPLICIT,
  STYLE,
  CONTENTS,
  PLACEHOLDER,
  RELATED_ELEMENT
};

enum class AXValueNativeSourceType {
  DESCRIPTION,
  FIGCAPTION,
  LABEL,
  LABELFOR,
  LABELWRAPPED,
  LEGEND,
  RUBYANNOTATION,
  TABLECAPTION,
  TITLE,
  OTHER
};

enum class AXPropertyName {
  BUSY,
  DISABLED,
  EDITABLE,
  FOCUSABLE,
  FOCUSED,
  HIDDEN,
  HIDDEN_ROOT,
  INVALID,
  KEYSHORTCUTS,
  SETTABLE,
  ROLEDESCRIPTION,
  LIVE,
  ATOMIC,
  RELEVANT,
  ROOT,
  AUTOCOMPLETE,
  HAS_POPUP,
  LEVEL,
  MULTISELECTABLE,
  ORIENTATION,
  MULTILINE,
  READONLY,
  REQUIRED,
  VALUEMIN,
  VALUEMAX,
  VALUETEXT,
  CHECKED,
  EXPANDED,
  MODAL,
  PRESSED,
  SELECTED,
  ACTIVEDESCENDANT,
  CONTROLS,
  DESCRIBEDBY,
  DETAILS,
  ERRORMESSAGE,
  FLOWTO,
  LABELLEDBY,
  OWNS
};

}  // namespace accessibility

}  // namespace autofill_assistant

#endif  // COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPES_FORWARD_DECLARATIONS_ACCESSIBILITY_H_
