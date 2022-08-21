// ui/base/dragdrop/mojom/drag_drop_types.mojom-shared.cc is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "ui/base/dragdrop/mojom/drag_drop_types.mojom-shared.h"

// Used to support stream output operator for enums.
// TODO(dcheng): Consider omitting this somehow if not needed.
#include <ostream>
#include <utility>

#include "base/strings/stringprintf.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"
#include "third_party/perfetto/include/perfetto/tracing/traced_value.h"

#include "ui/base/dragdrop/mojom/drag_drop_types.mojom-params-data.h"
namespace ui {
namespace mojom {

static NOINLINE const char* DragEventSourceToStringHelper(DragEventSource value) {
  // Defined in a helper function to ensure that Clang generates a lookup table.
  switch(value) {
    case DragEventSource::kMouse:
      return "kMouse";
    case DragEventSource::kTouch:
      return "kTouch";
    default:
      return nullptr;
  }
}

std::string DragEventSourceToString(DragEventSource value) {
  const char *str = DragEventSourceToStringHelper(value);
  if (!str) {
    return base::StringPrintf("Unknown DragEventSource value: %i", static_cast<int32_t>(value));
  }
  return str;
}

std::ostream& operator<<(std::ostream& os, DragEventSource value) {
  return os << DragEventSourceToString(value);
}

static NOINLINE const char* DragOperationToStringHelper(DragOperation value) {
  // Defined in a helper function to ensure that Clang generates a lookup table.
  switch(value) {
    case DragOperation::kNone:
      return "kNone";
    case DragOperation::kCopy:
      return "kCopy";
    case DragOperation::kLink:
      return "kLink";
    case DragOperation::kMove:
      return "kMove";
    default:
      return nullptr;
  }
}

std::string DragOperationToString(DragOperation value) {
  const char *str = DragOperationToStringHelper(value);
  if (!str) {
    return base::StringPrintf("Unknown DragOperation value: %i", static_cast<int32_t>(value));
  }
  return str;
}

std::ostream& operator<<(std::ostream& os, DragOperation value) {
  return os << DragOperationToString(value);
}

namespace internal {

}  // namespace internal
}  // namespace mojom
}  // namespace ui

namespace perfetto {

// static
void TraceFormatTraits<::ui::mojom::DragEventSource>::WriteIntoTrace(
   perfetto::TracedValue context, ::ui::mojom::DragEventSource value) {
  return std::move(context).WriteString(::ui::mojom::DragEventSourceToString(value));
}

} // namespace perfetto

namespace perfetto {

// static
void TraceFormatTraits<::ui::mojom::DragOperation>::WriteIntoTrace(
   perfetto::TracedValue context, ::ui::mojom::DragOperation value) {
  return std::move(context).WriteString(::ui::mojom::DragOperationToString(value));
}

} // namespace perfetto