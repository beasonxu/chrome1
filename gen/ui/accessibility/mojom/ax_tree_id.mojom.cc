// ui/accessibility/mojom/ax_tree_id.mojom.cc is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#endif

#include "ui/accessibility/mojom/ax_tree_id.mojom.h"

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

#include "ui/accessibility/mojom/ax_tree_id.mojom-params-data.h"
#include "ui/accessibility/mojom/ax_tree_id.mojom-shared-message-ids.h"

#include "ui/accessibility/mojom/ax_tree_id.mojom-import-headers.h"
#include "ui/accessibility/mojom/ax_tree_id.mojom-test-utils.h"


#ifndef UI_ACCESSIBILITY_MOJOM_AX_TREE_ID_MOJOM_JUMBO_H_
#define UI_ACCESSIBILITY_MOJOM_AX_TREE_ID_MOJOM_JUMBO_H_
#endif



namespace ax {
namespace mojom {
AXTreeID::AXTreeID() : tag_(Tag::kUnknown) {
  data_.unknown = uint8_t();
}

AXTreeID::~AXTreeID() {
  DestroyActive();
}


void AXTreeID::set_unknown(
    uint8_t unknown) {
  if (tag_ != Tag::kUnknown) {
    DestroyActive();
    tag_ = Tag::kUnknown;
  }
  data_.unknown = unknown;
}
void AXTreeID::set_token(
    const ::base::UnguessableToken& token) {
  if (tag_ == Tag::kToken) {
    *(data_.token) = std::move(token);
  } else {
    DestroyActive();
    tag_ = Tag::kToken;
    data_.token = new ::base::UnguessableToken(
        std::move(token));
  }
}

void AXTreeID::DestroyActive() {
  switch (tag_) {

    case Tag::kUnknown:

      break;
    case Tag::kToken:

      delete data_.token;
      break;
  }
}

bool AXTreeID::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context, false);
}


}  // namespace mojom
}  // namespace ax


namespace mojo {

// static
bool UnionTraits<::ax::mojom::AXTreeID::DataView, ::ax::mojom::AXTreeIDPtr>::Read(
    ::ax::mojom::AXTreeID::DataView input,
    ::ax::mojom::AXTreeIDPtr* output) {
  using UnionType = ::ax::mojom::AXTreeID;
  using Tag = UnionType::Tag;

  switch (input.tag()) {
    case Tag::kUnknown: {
      *output = UnionType::NewUnknown(input.unknown());
      break;
    }
    case Tag::kToken: {
      ::base::UnguessableToken result_token;
      if (!input.ReadToken(&result_token))
        return false;

      *output = UnionType::NewToken(
          std::move(result_token));
      break;
    }
    default:

      return false;
  }
  return true;
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