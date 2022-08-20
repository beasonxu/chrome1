// third_party/blink/public/mojom/page/page.mojom-shared.cc is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "third_party/blink/public/mojom/page/page.mojom-shared.h"

// Used to support stream output operator for enums.
// TODO(dcheng): Consider omitting this somehow if not needed.
#include <ostream>
#include <utility>

#include "base/strings/stringprintf.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"
#include "third_party/perfetto/include/perfetto/tracing/traced_value.h"

#include "third_party/blink/public/mojom/page/page.mojom-params-data.h"
namespace blink {
namespace mojom {

static NOINLINE const char* PagehideDispatchToStringHelper(PagehideDispatch value) {
  // Defined in a helper function to ensure that Clang generates a lookup table.
  switch(value) {
    case PagehideDispatch::kNotDispatched:
      return "kNotDispatched";
    case PagehideDispatch::kDispatchedNotPersisted:
      return "kDispatchedNotPersisted";
    case PagehideDispatch::kDispatchedPersisted:
      return "kDispatchedPersisted";
    default:
      return nullptr;
  }
}

std::string PagehideDispatchToString(PagehideDispatch value) {
  const char *str = PagehideDispatchToStringHelper(value);
  if (!str) {
    return base::StringPrintf("Unknown PagehideDispatch value: %i", static_cast<int32_t>(value));
  }
  return str;
}

std::ostream& operator<<(std::ostream& os, PagehideDispatch value) {
  return os << PagehideDispatchToString(value);
}

namespace internal {


// static
bool PageLifecycleState_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;
  if (!ValidateUnversionedStructHeaderAndSizeAndClaimMemory(
          data, 24, validation_context)) {
    return false;
  }

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  [[maybe_unused]] const PageLifecycleState_Data* object =
      static_cast<const PageLifecycleState_Data*>(data);


  if (!::blink::mojom::internal::PageVisibilityState_Data
        ::Validate(object->visibility, validation_context))
    return false;


  if (!::blink::mojom::internal::PagehideDispatch_Data
        ::Validate(object->pagehide_dispatch, validation_context))
    return false;

  return true;
}

PageLifecycleState_Data::PageLifecycleState_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PageRestoreParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;
  if (!ValidateUnversionedStructHeaderAndSizeAndClaimMemory(
          data, 24, validation_context)) {
    return false;
  }

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  [[maybe_unused]] const PageRestoreParams_Data* object =
      static_cast<const PageRestoreParams_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->navigation_start, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->navigation_start, validation_context))
    return false;

  return true;
}

PageRestoreParams_Data::PageRestoreParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PrerenderPageActivationParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;
  if (!ValidateUnversionedStructHeaderAndSizeAndClaimMemory(
          data, 24, validation_context)) {
    return false;
  }

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  [[maybe_unused]] const PrerenderPageActivationParams_Data* object =
      static_cast<const PrerenderPageActivationParams_Data*>(data);


  if (!::blink::mojom::internal::WasActivatedOption_Data
        ::Validate(object->was_user_activated, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->activation_start, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->activation_start, validation_context))
    return false;

  return true;
}

PrerenderPageActivationParams_Data::PrerenderPageActivationParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PageBroadcast_SetPageLifecycleState_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;
  if (!ValidateUnversionedStructHeaderAndSizeAndClaimMemory(
          data, 24, validation_context)) {
    return false;
  }

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  [[maybe_unused]] const PageBroadcast_SetPageLifecycleState_Params_Data* object =
      static_cast<const PageBroadcast_SetPageLifecycleState_Params_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->state, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->state, validation_context))
    return false;

  if (!mojo::internal::ValidateStruct(object->page_restore_params, validation_context))
    return false;

  return true;
}

PageBroadcast_SetPageLifecycleState_Params_Data::PageBroadcast_SetPageLifecycleState_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PageBroadcast_SetPageLifecycleState_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;
  if (!ValidateUnversionedStructHeaderAndSizeAndClaimMemory(
          data, 8, validation_context)) {
    return false;
  }

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  [[maybe_unused]] const PageBroadcast_SetPageLifecycleState_ResponseParams_Data* object =
      static_cast<const PageBroadcast_SetPageLifecycleState_ResponseParams_Data*>(data);

  return true;
}

PageBroadcast_SetPageLifecycleState_ResponseParams_Data::PageBroadcast_SetPageLifecycleState_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PageBroadcast_AudioStateChanged_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;
  if (!ValidateUnversionedStructHeaderAndSizeAndClaimMemory(
          data, 16, validation_context)) {
    return false;
  }

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  [[maybe_unused]] const PageBroadcast_AudioStateChanged_Params_Data* object =
      static_cast<const PageBroadcast_AudioStateChanged_Params_Data*>(data);

  return true;
}

PageBroadcast_AudioStateChanged_Params_Data::PageBroadcast_AudioStateChanged_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PageBroadcast_ActivatePrerenderedPage_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;
  if (!ValidateUnversionedStructHeaderAndSizeAndClaimMemory(
          data, 16, validation_context)) {
    return false;
  }

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  [[maybe_unused]] const PageBroadcast_ActivatePrerenderedPage_Params_Data* object =
      static_cast<const PageBroadcast_ActivatePrerenderedPage_Params_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->prerender_page_activation_params, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->prerender_page_activation_params, validation_context))
    return false;

  return true;
}

PageBroadcast_ActivatePrerenderedPage_Params_Data::PageBroadcast_ActivatePrerenderedPage_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PageBroadcast_ActivatePrerenderedPage_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;
  if (!ValidateUnversionedStructHeaderAndSizeAndClaimMemory(
          data, 8, validation_context)) {
    return false;
  }

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  [[maybe_unused]] const PageBroadcast_ActivatePrerenderedPage_ResponseParams_Data* object =
      static_cast<const PageBroadcast_ActivatePrerenderedPage_ResponseParams_Data*>(data);

  return true;
}

PageBroadcast_ActivatePrerenderedPage_ResponseParams_Data::PageBroadcast_ActivatePrerenderedPage_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PageBroadcast_SetInsidePortal_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;
  if (!ValidateUnversionedStructHeaderAndSizeAndClaimMemory(
          data, 16, validation_context)) {
    return false;
  }

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  [[maybe_unused]] const PageBroadcast_SetInsidePortal_Params_Data* object =
      static_cast<const PageBroadcast_SetInsidePortal_Params_Data*>(data);

  return true;
}

PageBroadcast_SetInsidePortal_Params_Data::PageBroadcast_SetInsidePortal_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PageBroadcast_UpdateWebPreferences_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;
  if (!ValidateUnversionedStructHeaderAndSizeAndClaimMemory(
          data, 16, validation_context)) {
    return false;
  }

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  [[maybe_unused]] const PageBroadcast_UpdateWebPreferences_Params_Data* object =
      static_cast<const PageBroadcast_UpdateWebPreferences_Params_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->preferences, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->preferences, validation_context))
    return false;

  return true;
}

PageBroadcast_UpdateWebPreferences_Params_Data::PageBroadcast_UpdateWebPreferences_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PageBroadcast_UpdateRendererPreferences_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;
  if (!ValidateUnversionedStructHeaderAndSizeAndClaimMemory(
          data, 16, validation_context)) {
    return false;
  }

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  [[maybe_unused]] const PageBroadcast_UpdateRendererPreferences_Params_Data* object =
      static_cast<const PageBroadcast_UpdateRendererPreferences_Params_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->preferences, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->preferences, validation_context))
    return false;

  return true;
}

PageBroadcast_UpdateRendererPreferences_Params_Data::PageBroadcast_UpdateRendererPreferences_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PageBroadcast_SetHistoryOffsetAndLength_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;
  if (!ValidateUnversionedStructHeaderAndSizeAndClaimMemory(
          data, 16, validation_context)) {
    return false;
  }

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  [[maybe_unused]] const PageBroadcast_SetHistoryOffsetAndLength_Params_Data* object =
      static_cast<const PageBroadcast_SetHistoryOffsetAndLength_Params_Data*>(data);

  return true;
}

PageBroadcast_SetHistoryOffsetAndLength_Params_Data::PageBroadcast_SetHistoryOffsetAndLength_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PageBroadcast_SetPageBaseBackgroundColor_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;
  if (!ValidateUnversionedStructHeaderAndSizeAndClaimMemory(
          data, 16, validation_context)) {
    return false;
  }

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  [[maybe_unused]] const PageBroadcast_SetPageBaseBackgroundColor_Params_Data* object =
      static_cast<const PageBroadcast_SetPageBaseBackgroundColor_Params_Data*>(data);

  if (!mojo::internal::ValidateStruct(object->color, validation_context))
    return false;

  return true;
}

PageBroadcast_SetPageBaseBackgroundColor_Params_Data::PageBroadcast_SetPageBaseBackgroundColor_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PageBroadcast_CreateRemoteMainFrame_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;
  if (!ValidateUnversionedStructHeaderAndSizeAndClaimMemory(
          data, 64, validation_context)) {
    return false;
  }

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  [[maybe_unused]] const PageBroadcast_CreateRemoteMainFrame_Params_Data* object =
      static_cast<const PageBroadcast_CreateRemoteMainFrame_Params_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->token, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->token, validation_context))
    return false;

  if (!mojo::internal::ValidateInlinedUnion(object->opener_frame_token, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->replication_state, 3, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->replication_state, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->devtools_frame_token, 4, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->devtools_frame_token, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->remote_frame_interfaces, 5, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->remote_frame_interfaces, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->remote_main_frame_interfaces, 6, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->remote_main_frame_interfaces, validation_context))
    return false;

  return true;
}

PageBroadcast_CreateRemoteMainFrame_Params_Data::PageBroadcast_CreateRemoteMainFrame_Params_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace blink

namespace perfetto {

// static
void TraceFormatTraits<::blink::mojom::PagehideDispatch>::WriteIntoTrace(
   perfetto::TracedValue context, ::blink::mojom::PagehideDispatch value) {
  return std::move(context).WriteString(::blink::mojom::PagehideDispatchToString(value));
}

} // namespace perfetto