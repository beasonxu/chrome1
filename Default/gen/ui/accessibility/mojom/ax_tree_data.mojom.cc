// ui/accessibility/mojom/ax_tree_data.mojom.cc is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#endif

#include "ui/accessibility/mojom/ax_tree_data.mojom.h"

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

#include "ui/accessibility/mojom/ax_tree_data.mojom-params-data.h"
#include "ui/accessibility/mojom/ax_tree_data.mojom-shared-message-ids.h"

#include "ui/accessibility/mojom/ax_tree_data.mojom-import-headers.h"
#include "ui/accessibility/mojom/ax_tree_data.mojom-test-utils.h"


#ifndef UI_ACCESSIBILITY_MOJOM_AX_TREE_DATA_MOJOM_JUMBO_H_
#define UI_ACCESSIBILITY_MOJOM_AX_TREE_DATA_MOJOM_JUMBO_H_
#endif



namespace ax {
namespace mojom {
AXTreeData::AXTreeData()
    : tree_id(),
      parent_tree_id(),
      focused_tree_id(),
      doctype(),
      loaded(),
      loading_progress(),
      mimetype(),
      title(),
      url(),
      focus_id(),
      sel_is_backward(),
      sel_anchor_object_id(),
      sel_anchor_offset(),
      sel_anchor_affinity(),
      sel_focus_object_id(),
      sel_focus_offset(),
      sel_focus_affinity(),
      root_scroller_id(),
      metadata() {}

AXTreeData::AXTreeData(
    const ::ui::AXTreeID& tree_id_in,
    const ::ui::AXTreeID& parent_tree_id_in,
    const ::ui::AXTreeID& focused_tree_id_in,
    const std::string& doctype_in,
    bool loaded_in,
    float loading_progress_in,
    const std::string& mimetype_in,
    const std::string& title_in,
    const std::string& url_in,
    int32_t focus_id_in,
    bool sel_is_backward_in,
    int32_t sel_anchor_object_id_in,
    int32_t sel_anchor_offset_in,
    ::ax::mojom::TextAffinity sel_anchor_affinity_in,
    int32_t sel_focus_object_id_in,
    int32_t sel_focus_offset_in,
    ::ax::mojom::TextAffinity sel_focus_affinity_in,
    int32_t root_scroller_id_in)
    : tree_id(std::move(tree_id_in)),
      parent_tree_id(std::move(parent_tree_id_in)),
      focused_tree_id(std::move(focused_tree_id_in)),
      doctype(std::move(doctype_in)),
      loaded(std::move(loaded_in)),
      loading_progress(std::move(loading_progress_in)),
      mimetype(std::move(mimetype_in)),
      title(std::move(title_in)),
      url(std::move(url_in)),
      focus_id(std::move(focus_id_in)),
      sel_is_backward(std::move(sel_is_backward_in)),
      sel_anchor_object_id(std::move(sel_anchor_object_id_in)),
      sel_anchor_offset(std::move(sel_anchor_offset_in)),
      sel_anchor_affinity(std::move(sel_anchor_affinity_in)),
      sel_focus_object_id(std::move(sel_focus_object_id_in)),
      sel_focus_offset(std::move(sel_focus_offset_in)),
      sel_focus_affinity(std::move(sel_focus_affinity_in)),
      root_scroller_id(std::move(root_scroller_id_in)),
      metadata() {}

AXTreeData::AXTreeData(
    const ::ui::AXTreeID& tree_id_in,
    const ::ui::AXTreeID& parent_tree_id_in,
    const ::ui::AXTreeID& focused_tree_id_in,
    const std::string& doctype_in,
    bool loaded_in,
    float loading_progress_in,
    const std::string& mimetype_in,
    const std::string& title_in,
    const std::string& url_in,
    int32_t focus_id_in,
    bool sel_is_backward_in,
    int32_t sel_anchor_object_id_in,
    int32_t sel_anchor_offset_in,
    ::ax::mojom::TextAffinity sel_anchor_affinity_in,
    int32_t sel_focus_object_id_in,
    int32_t sel_focus_offset_in,
    ::ax::mojom::TextAffinity sel_focus_affinity_in,
    int32_t root_scroller_id_in,
    absl::optional<std::vector<std::string>> metadata_in)
    : tree_id(std::move(tree_id_in)),
      parent_tree_id(std::move(parent_tree_id_in)),
      focused_tree_id(std::move(focused_tree_id_in)),
      doctype(std::move(doctype_in)),
      loaded(std::move(loaded_in)),
      loading_progress(std::move(loading_progress_in)),
      mimetype(std::move(mimetype_in)),
      title(std::move(title_in)),
      url(std::move(url_in)),
      focus_id(std::move(focus_id_in)),
      sel_is_backward(std::move(sel_is_backward_in)),
      sel_anchor_object_id(std::move(sel_anchor_object_id_in)),
      sel_anchor_offset(std::move(sel_anchor_offset_in)),
      sel_anchor_affinity(std::move(sel_anchor_affinity_in)),
      sel_focus_object_id(std::move(sel_focus_object_id_in)),
      sel_focus_offset(std::move(sel_focus_offset_in)),
      sel_focus_affinity(std::move(sel_focus_affinity_in)),
      root_scroller_id(std::move(root_scroller_id_in)),
      metadata(std::move(metadata_in)) {}

AXTreeData::~AXTreeData() = default;

void AXTreeData::WriteIntoTrace(
    perfetto::TracedValue traced_context) const {
  [[maybe_unused]] auto dict = std::move(traced_context).WriteDictionary();
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "tree_id"), this->tree_id,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type const ::ui::AXTreeID&>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "parent_tree_id"), this->parent_tree_id,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type const ::ui::AXTreeID&>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "focused_tree_id"), this->focused_tree_id,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type const ::ui::AXTreeID&>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "doctype"), this->doctype,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type const std::string&>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "loaded"), this->loaded,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type bool>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "loading_progress"), this->loading_progress,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type float>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "mimetype"), this->mimetype,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type const std::string&>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "title"), this->title,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type const std::string&>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "url"), this->url,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type const std::string&>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "focus_id"), this->focus_id,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type int32_t>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "sel_is_backward"), this->sel_is_backward,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type bool>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "sel_anchor_object_id"), this->sel_anchor_object_id,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type int32_t>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "sel_anchor_offset"), this->sel_anchor_offset,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type int32_t>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "sel_anchor_affinity"), this->sel_anchor_affinity,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type ::ax::mojom::TextAffinity>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "sel_focus_object_id"), this->sel_focus_object_id,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type int32_t>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "sel_focus_offset"), this->sel_focus_offset,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type int32_t>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "sel_focus_affinity"), this->sel_focus_affinity,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type ::ax::mojom::TextAffinity>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "root_scroller_id"), this->root_scroller_id,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type int32_t>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "metadata"), this->metadata,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type const absl::optional<std::vector<std::string>>&>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
}

bool AXTreeData::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}


}  // namespace mojom
}  // namespace ax


namespace mojo {


// static
bool StructTraits<::ax::mojom::AXTreeData::DataView, ::ax::mojom::AXTreeDataPtr>::Read(
    ::ax::mojom::AXTreeData::DataView input,
    ::ax::mojom::AXTreeDataPtr* output) {
  bool success = true;
  ::ax::mojom::AXTreeDataPtr result(::ax::mojom::AXTreeData::New());
  
      if (success && !input.ReadTreeId(&result->tree_id))
        success = false;
      if (success && !input.ReadParentTreeId(&result->parent_tree_id))
        success = false;
      if (success && !input.ReadFocusedTreeId(&result->focused_tree_id))
        success = false;
      if (success && !input.ReadDoctype(&result->doctype))
        success = false;
      if (success)
        result->loaded = input.loaded();
      if (success)
        result->loading_progress = input.loading_progress();
      if (success && !input.ReadMimetype(&result->mimetype))
        success = false;
      if (success && !input.ReadTitle(&result->title))
        success = false;
      if (success && !input.ReadUrl(&result->url))
        success = false;
      if (success)
        result->focus_id = input.focus_id();
      if (success)
        result->sel_is_backward = input.sel_is_backward();
      if (success)
        result->sel_anchor_object_id = input.sel_anchor_object_id();
      if (success)
        result->sel_anchor_offset = input.sel_anchor_offset();
      if (success && !input.ReadSelAnchorAffinity(&result->sel_anchor_affinity))
        success = false;
      if (success)
        result->sel_focus_object_id = input.sel_focus_object_id();
      if (success)
        result->sel_focus_offset = input.sel_focus_offset();
      if (success && !input.ReadSelFocusAffinity(&result->sel_focus_affinity))
        success = false;
      if (success)
        result->root_scroller_id = input.root_scroller_id();
      if (success && !input.ReadMetadata(&result->metadata))
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