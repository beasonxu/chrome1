// Copyright 2022 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_PUBLIC_TEST_MOCK_PERMISSION_CONTROLLER_H_
#define CONTENT_PUBLIC_TEST_MOCK_PERMISSION_CONTROLLER_H_

#include "content/public/browser/permission_controller.h"
#include "content/public/browser/permission_result.h"
#include "testing/gmock/include/gmock/gmock.h"

namespace blink {
enum class PermissionType;
}

namespace url {
class Origin;
}

namespace content {

// Mock of the permission controller for unit tests.
class MockPermissionController : public PermissionController {
 public:
  MockPermissionController();

  MockPermissionController(const MockPermissionController&) = delete;
  MockPermissionController& operator=(const MockPermissionController&) = delete;

  ~MockPermissionController() override;

  // PermissionController:
  MOCK_METHOD3(
      GetPermissionStatusForWorker,
      blink::mojom::PermissionStatus(blink::PermissionType permission,
                                     RenderProcessHost* render_process_host,
                                     const url::Origin& worker_origin));
  MOCK_METHOD2(
      GetPermissionStatusForCurrentDocument,
      blink::mojom::PermissionStatus(blink::PermissionType permission,
                                     RenderFrameHost* render_frame_host));
  MOCK_METHOD2(GetPermissionResultForCurrentDocument,
               content::PermissionResult(blink::PermissionType permission,
                                         RenderFrameHost* render_frame_host));
  MOCK_METHOD2(GetPermissionResultForOriginWithoutContext,
               content::PermissionResult(blink::PermissionType permission,
                                         const url::Origin& requesting_origin));
  MOCK_METHOD3(
      GetPermissionStatusForOriginWithoutContext,
      blink::mojom::PermissionStatus(blink::PermissionType permission,
                                     const url::Origin& requesting_origin,
                                     const url::Origin& embedding_origin));
  void RequestPermissionFromCurrentDocument(
      blink::PermissionType permission,
      RenderFrameHost* render_frame_host,
      bool user_gesture,
      base::OnceCallback<void(blink::mojom::PermissionStatus)> callback)
      override;
  void RequestPermissionsFromCurrentDocument(
      const std::vector<blink::PermissionType>& permission,
      RenderFrameHost* render_frame_host,
      bool user_gesture,
      base::OnceCallback<
          void(const std::vector<blink::mojom::PermissionStatus>&)> callback)
      override;
  void ResetPermission(blink::PermissionType permission,
                       const url::Origin& origin) override;
};

}  // namespace content

#endif  // CONTENT_PUBLIC_TEST_MOCK_PERMISSION_CONTROLLER_H_
