// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Copied and modified from
// https://chromium.googlesource.com/chromium/src/+/a3f9d4fac81fc86065d867ab08fa4912ddf662c7/headless/lib/browser/devtools_api/domain_types_forward_declarations_h.template
// Modifications include namespace and path.

#ifndef COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPES_FORWARD_DECLARATIONS_DOM_STORAGE_H_
#define COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPES_FORWARD_DECLARATIONS_DOM_STORAGE_H_

#include "base/values.h"

namespace autofill_assistant {

namespace dom_storage {
class StorageId;
class ClearParams;
class ClearResult;
class DisableParams;
class DisableResult;
class EnableParams;
class EnableResult;
class GetDOMStorageItemsParams;
class GetDOMStorageItemsResult;
class RemoveDOMStorageItemParams;
class RemoveDOMStorageItemResult;
class SetDOMStorageItemParams;
class SetDOMStorageItemResult;
class DomStorageItemAddedParams;
class DomStorageItemRemovedParams;
class DomStorageItemUpdatedParams;
class DomStorageItemsClearedParams;

}  // namespace dom_storage

}  // namespace autofill_assistant

#endif  // COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPES_FORWARD_DECLARATIONS_DOM_STORAGE_H_
