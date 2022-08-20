// ui/accessibility/mojom/ax_node_data.mojom.cc is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#endif

#include "ui/accessibility/mojom/ax_node_data.mojom.h"

#include <math.h>
#include <stdint.h>
#include <utility>

#include "base/debug/alias.h"
#include "base/hash/md5_constexpr.h"
#include "base/run_loop.h"
#include "base/strings/string_number_conversions.h"
#include "base/trace_event/trace_event.h"
#include "base/trace_event/typed_macros.h"
#include "mojo/public/cpp/bindings/lib/generated_code_util.h"
#include "mojo/public/cpp/bindings/lib/message_internal.h"
#include "mojo/public/cpp/bindings/lib/send_message_helper.h"
#include "mojo/public/cpp/bindings/lib/proxy_to_responder.h"
#include "mojo/public/cpp/bindings/lib/serialization_util.h"
#include "mojo/public/cpp/bindings/lib/unserialized_message_context.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/mojo_buildflags.h"
#include "mojo/public/interfaces/bindings/interface_control_messages.mojom.h"
#include "third_party/perfetto/include/perfetto/tracing/traced_value.h"

#include "ui/accessibility/mojom/ax_node_data.mojom-params-data.h"
#include "ui/accessibility/mojom/ax_node_data.mojom-shared-message-ids.h"

#include "ui/accessibility/mojom/ax_node_data.mojom-import-headers.h"
#include "ui/accessibility/mojom/ax_node_data.mojom-test-utils.h"


#ifndef UI_ACCESSIBILITY_MOJOM_AX_NODE_DATA_MOJOM_JUMBO_H_
#define UI_ACCESSIBILITY_MOJOM_AX_NODE_DATA_MOJOM_JUMBO_H_
#endif



namespace ax {
namespace mojom {
AXNodeData::AXNodeData()
    : id(),
      role(),
      state(),
      actions(),
      string_attributes(),
      int_attributes(),
      float_attributes(),
      bool_attributes(),
      intlist_attributes(),
      stringlist_attributes(),
      html_attributes(),
      child_ids(),
      relative_bounds() {}

AXNodeData::AXNodeData(
    int32_t id_in,
    ::ax::mojom::Role role_in,
    uint32_t state_in,
    uint64_t actions_in,
    const base::flat_map<::ax::mojom::StringAttribute, std::string>& string_attributes_in,
    const base::flat_map<::ax::mojom::IntAttribute, int32_t>& int_attributes_in,
    const base::flat_map<::ax::mojom::FloatAttribute, float>& float_attributes_in,
    const base::flat_map<::ax::mojom::BoolAttribute, bool>& bool_attributes_in,
    const base::flat_map<::ax::mojom::IntListAttribute, std::vector<int32_t>>& intlist_attributes_in,
    const base::flat_map<::ax::mojom::StringListAttribute, std::vector<std::string>>& stringlist_attributes_in,
    const base::flat_map<std::string, std::string>& html_attributes_in,
    std::vector<int32_t> child_ids_in,
    const ::ui::AXRelativeBounds& relative_bounds_in)
    : id(std::move(id_in)),
      role(std::move(role_in)),
      state(std::move(state_in)),
      actions(std::move(actions_in)),
      string_attributes(std::move(string_attributes_in)),
      int_attributes(std::move(int_attributes_in)),
      float_attributes(std::move(float_attributes_in)),
      bool_attributes(std::move(bool_attributes_in)),
      intlist_attributes(std::move(intlist_attributes_in)),
      stringlist_attributes(std::move(stringlist_attributes_in)),
      html_attributes(std::move(html_attributes_in)),
      child_ids(std::move(child_ids_in)),
      relative_bounds(std::move(relative_bounds_in)) {}

AXNodeData::~AXNodeData() = default;

void AXNodeData::WriteIntoTrace(
    perfetto::TracedValue traced_context) const {
  [[maybe_unused]] auto dict = std::move(traced_context).WriteDictionary();
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "id"), this->id,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type int32_t>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "role"), this->role,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type ::ax::mojom::Role>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "state"), this->state,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type uint32_t>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "actions"), this->actions,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type uint64_t>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "string_attributes"), this->string_attributes,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type const base::flat_map<::ax::mojom::StringAttribute, std::string>&>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "int_attributes"), this->int_attributes,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type const base::flat_map<::ax::mojom::IntAttribute, int32_t>&>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "float_attributes"), this->float_attributes,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type const base::flat_map<::ax::mojom::FloatAttribute, float>&>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "bool_attributes"), this->bool_attributes,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type const base::flat_map<::ax::mojom::BoolAttribute, bool>&>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "intlist_attributes"), this->intlist_attributes,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type const base::flat_map<::ax::mojom::IntListAttribute, std::vector<int32_t>>&>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "stringlist_attributes"), this->stringlist_attributes,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type const base::flat_map<::ax::mojom::StringListAttribute, std::vector<std::string>>&>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "html_attributes"), this->html_attributes,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type const base::flat_map<std::string, std::string>&>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "child_ids"), this->child_ids,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type const std::vector<int32_t>&>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "relative_bounds"), this->relative_bounds,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type const ::ui::AXRelativeBounds&>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
}

bool AXNodeData::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}


}  // namespace mojom
}  // namespace ax


namespace mojo {


// static
bool StructTraits<::ax::mojom::AXNodeData::DataView, ::ax::mojom::AXNodeDataPtr>::Read(
    ::ax::mojom::AXNodeData::DataView input,
    ::ax::mojom::AXNodeDataPtr* output) {
  bool success = true;
  ::ax::mojom::AXNodeDataPtr result(::ax::mojom::AXNodeData::New());
  
      if (success)
        result->id = input.id();
      if (success && !input.ReadRole(&result->role))
        success = false;
      if (success)
        result->state = input.state();
      if (success)
        result->actions = input.actions();
      if (success && !input.ReadStringAttributes(&result->string_attributes))
        success = false;
      if (success && !input.ReadIntAttributes(&result->int_attributes))
        success = false;
      if (success && !input.ReadFloatAttributes(&result->float_attributes))
        success = false;
      if (success && !input.ReadBoolAttributes(&result->bool_attributes))
        success = false;
      if (success && !input.ReadIntlistAttributes(&result->intlist_attributes))
        success = false;
      if (success && !input.ReadStringlistAttributes(&result->stringlist_attributes))
        success = false;
      if (success && !input.ReadHtmlAttributes(&result->html_attributes))
        success = false;
      if (success && !input.ReadChildIds(&result->child_ids))
        success = false;
      if (success && !input.ReadRelativeBounds(&result->relative_bounds))
        success = false;
  *output = std::move(result);
  return success;
}

}  // namespace mojo


// Symbols declared in the -test-utils.h header are defined here instead of a
// separate .cc file to save compile time.


namespace ax {
namespace mojom {




}  // namespace mojom
}  // namespace ax


#if defined(__clang__)
#pragma clang diagnostic pop
#endif