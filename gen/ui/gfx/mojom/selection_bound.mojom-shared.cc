// ui/gfx/mojom/selection_bound.mojom-shared.cc is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "ui/gfx/mojom/selection_bound.mojom-shared.h"

// Used to support stream output operator for enums.
// TODO(dcheng): Consider omitting this somehow if not needed.
#include <ostream>
#include <utility>

#include "base/strings/stringprintf.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"
#include "third_party/perfetto/include/perfetto/tracing/traced_value.h"

#include "ui/gfx/mojom/selection_bound.mojom-params-data.h"
namespace gfx {
namespace mojom {

static NOINLINE const char* SelectionBoundTypeToStringHelper(SelectionBoundType value) {
  // Defined in a helper function to ensure that Clang generates a lookup table.
  switch(value) {
    case SelectionBoundType::LEFT:
      return "LEFT";
    case SelectionBoundType::RIGHT:
      return "RIGHT";
    case SelectionBoundType::CENTER:
      return "CENTER";
    case SelectionBoundType::EMPTY:
      return "{EMPTY, LAST}";
    default:
      return nullptr;
  }
}

std::string SelectionBoundTypeToString(SelectionBoundType value) {
  const char *str = SelectionBoundTypeToStringHelper(value);
  if (!str) {
    return base::StringPrintf("Unknown SelectionBoundType value: %i", static_cast<int32_t>(value));
  }
  return str;
}

std::ostream& operator<<(std::ostream& os, SelectionBoundType value) {
  return os << SelectionBoundTypeToString(value);
}

namespace internal {


// static
bool SelectionBound_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;
  if (!ValidateUnversionedStructHeaderAndSizeAndClaimMemory(
          data, 48, validation_context)) {
    return false;
  }

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  [[maybe_unused]] const SelectionBound_Data* object =
      static_cast<const SelectionBound_Data*>(data);


  if (!::gfx::mojom::internal::SelectionBoundType_Data
        ::Validate(object->type, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->edge_start, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->edge_start, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->edge_end, 3, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->edge_end, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->visible_edge_start, 4, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->visible_edge_start, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->visible_edge_end, 5, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->visible_edge_end, validation_context))
    return false;

  return true;
}

SelectionBound_Data::SelectionBound_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace gfx

namespace perfetto {

// static
void TraceFormatTraits<::gfx::mojom::SelectionBoundType>::WriteIntoTrace(
   perfetto::TracedValue context, ::gfx::mojom::SelectionBoundType value) {
  return std::move(context).WriteString(::gfx::mojom::SelectionBoundTypeToString(value));
}

} // namespace perfetto