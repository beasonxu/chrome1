// services/viz/public/mojom/compositing/compositor_render_pass.mojom.cc is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#endif

#include "services/viz/public/mojom/compositing/compositor_render_pass.mojom.h"

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

#include "services/viz/public/mojom/compositing/compositor_render_pass.mojom-params-data.h"
#include "services/viz/public/mojom/compositing/compositor_render_pass.mojom-shared-message-ids.h"

#include "services/viz/public/mojom/compositing/compositor_render_pass.mojom-import-headers.h"
#include "services/viz/public/mojom/compositing/compositor_render_pass.mojom-test-utils.h"


#ifndef SERVICES_VIZ_PUBLIC_MOJOM_COMPOSITING_COMPOSITOR_RENDER_PASS_MOJOM_JUMBO_H_
#define SERVICES_VIZ_PUBLIC_MOJOM_COMPOSITING_COMPOSITOR_RENDER_PASS_MOJOM_JUMBO_H_
#endif



namespace viz {
namespace mojom {
CompositorRenderPass::CompositorRenderPass()
    : id(),
      output_rect(),
      damage_rect(),
      transform_to_root_target(),
      filters(),
      backdrop_filters(),
      backdrop_filter_bounds(),
      subtree_capture_id(),
      subtree_size(),
      shared_element_resource_id(),
      has_transparent_background(),
      cache_render_pass(false),
      has_damage_from_contributing_content(false),
      generate_mipmap(false),
      copy_requests(),
      quad_list(),
      has_per_quad_damage() {}

CompositorRenderPass::CompositorRenderPass(
    const ::viz::CompositorRenderPassId& id_in,
    const ::gfx::Rect& output_rect_in,
    const ::gfx::Rect& damage_rect_in,
    const ::gfx::Transform& transform_to_root_target_in,
    const ::cc::FilterOperations& filters_in,
    const ::cc::FilterOperations& backdrop_filters_in,
    const absl::optional<::gfx::RRectF>& backdrop_filter_bounds_in,
    const ::viz::SubtreeCaptureId& subtree_capture_id_in,
    const ::gfx::Size& subtree_size_in,
    const ::viz::SharedElementResourceId& shared_element_resource_id_in,
    bool has_transparent_background_in,
    bool cache_render_pass_in,
    bool has_damage_from_contributing_content_in,
    bool generate_mipmap_in,
    std::vector<::std::unique_ptr<::viz::CopyOutputRequest>> copy_requests_in,
    std::vector<::viz::mojom::DrawQuadPtr> quad_list_in,
    bool has_per_quad_damage_in)
    : id(std::move(id_in)),
      output_rect(std::move(output_rect_in)),
      damage_rect(std::move(damage_rect_in)),
      transform_to_root_target(std::move(transform_to_root_target_in)),
      filters(std::move(filters_in)),
      backdrop_filters(std::move(backdrop_filters_in)),
      backdrop_filter_bounds(std::move(backdrop_filter_bounds_in)),
      subtree_capture_id(std::move(subtree_capture_id_in)),
      subtree_size(std::move(subtree_size_in)),
      shared_element_resource_id(std::move(shared_element_resource_id_in)),
      has_transparent_background(std::move(has_transparent_background_in)),
      cache_render_pass(std::move(cache_render_pass_in)),
      has_damage_from_contributing_content(std::move(has_damage_from_contributing_content_in)),
      generate_mipmap(std::move(generate_mipmap_in)),
      copy_requests(std::move(copy_requests_in)),
      quad_list(std::move(quad_list_in)),
      has_per_quad_damage(std::move(has_per_quad_damage_in)) {}

CompositorRenderPass::~CompositorRenderPass() = default;

void CompositorRenderPass::WriteIntoTrace(
    perfetto::TracedValue traced_context) const {
  [[maybe_unused]] auto dict = std::move(traced_context).WriteDictionary();
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "id"), this->id,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type const ::viz::CompositorRenderPassId&>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "output_rect"), this->output_rect,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type const ::gfx::Rect&>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "damage_rect"), this->damage_rect,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type const ::gfx::Rect&>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "transform_to_root_target"), this->transform_to_root_target,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type const ::gfx::Transform&>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "filters"), this->filters,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type const ::cc::FilterOperations&>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "backdrop_filters"), this->backdrop_filters,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type const ::cc::FilterOperations&>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "backdrop_filter_bounds"), this->backdrop_filter_bounds,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type const absl::optional<::gfx::RRectF>&>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "subtree_capture_id"), this->subtree_capture_id,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type const ::viz::SubtreeCaptureId&>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "subtree_size"), this->subtree_size,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type const ::gfx::Size&>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "shared_element_resource_id"), this->shared_element_resource_id,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type const ::viz::SharedElementResourceId&>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "has_transparent_background"), this->has_transparent_background,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type bool>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "cache_render_pass"), this->cache_render_pass,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type bool>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "has_damage_from_contributing_content"), this->has_damage_from_contributing_content,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type bool>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "generate_mipmap"), this->generate_mipmap,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type bool>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "copy_requests"), this->copy_requests,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type std::vector<::std::unique_ptr<::viz::CopyOutputRequest>>>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "quad_list"), this->quad_list,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type std::vector<::viz::mojom::DrawQuadPtr>>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "has_per_quad_damage"), this->has_per_quad_damage,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type bool>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
}

bool CompositorRenderPass::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}


}  // namespace mojom
}  // namespace viz


namespace mojo {


// static
bool StructTraits<::viz::mojom::CompositorRenderPass::DataView, ::viz::mojom::CompositorRenderPassPtr>::Read(
    ::viz::mojom::CompositorRenderPass::DataView input,
    ::viz::mojom::CompositorRenderPassPtr* output) {
  bool success = true;
  ::viz::mojom::CompositorRenderPassPtr result(::viz::mojom::CompositorRenderPass::New());
  
      if (success && !input.ReadId(&result->id))
        success = false;
      if (success && !input.ReadOutputRect(&result->output_rect))
        success = false;
      if (success && !input.ReadDamageRect(&result->damage_rect))
        success = false;
      if (success && !input.ReadTransformToRootTarget(&result->transform_to_root_target))
        success = false;
      if (success && !input.ReadFilters(&result->filters))
        success = false;
      if (success && !input.ReadBackdropFilters(&result->backdrop_filters))
        success = false;
      if (success && !input.ReadBackdropFilterBounds(&result->backdrop_filter_bounds))
        success = false;
      if (success && !input.ReadSubtreeCaptureId(&result->subtree_capture_id))
        success = false;
      if (success && !input.ReadSubtreeSize(&result->subtree_size))
        success = false;
      if (success && !input.ReadSharedElementResourceId(&result->shared_element_resource_id))
        success = false;
      if (success)
        result->has_transparent_background = input.has_transparent_background();
      if (success)
        result->cache_render_pass = input.cache_render_pass();
      if (success)
        result->has_damage_from_contributing_content = input.has_damage_from_contributing_content();
      if (success)
        result->generate_mipmap = input.generate_mipmap();
      if (success && !input.ReadCopyRequests(&result->copy_requests))
        success = false;
      if (success && !input.ReadQuadList(&result->quad_list))
        success = false;
      if (success)
        result->has_per_quad_damage = input.has_per_quad_damage();
  *output = std::move(result);
  return success;
}

}  // namespace mojo


// Symbols declared in the -test-utils.h header are defined here instead of a
// separate .cc file to save compile time.


namespace viz {
namespace mojom {




}  // namespace mojom
}  // namespace viz


#if defined(__clang__)
#pragma clang diagnostic pop
#endif