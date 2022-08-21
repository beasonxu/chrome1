// device/vr/public/mojom/vr_service.mojom-shared-message-ids.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef DEVICE_VR_PUBLIC_MOJOM_VR_SERVICE_MOJOM_SHARED_MESSAGE_IDS_H_
#define DEVICE_VR_PUBLIC_MOJOM_VR_SERVICE_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace device {
namespace mojom {

namespace internal {


constexpr uint32_t kVRService_SetClient_Name = 0;
constexpr uint32_t kVRService_RequestSession_Name = 1;
constexpr uint32_t kVRService_SupportsSession_Name = 2;
constexpr uint32_t kVRService_ExitPresent_Name = 3;
constexpr uint32_t kVRService_SetFramesThrottled_Name = 4;
constexpr uint32_t kVRService_MakeXrCompatible_Name = 5;
constexpr uint32_t kXRSessionMetricsRecorder_ReportFeatureUsed_Name = 0;
constexpr uint32_t kVRServiceClient_OnDeviceChanged_Name = 0;
constexpr uint32_t kXREnvironmentIntegrationProvider_SubscribeToHitTest_Name = 0;
constexpr uint32_t kXREnvironmentIntegrationProvider_SubscribeToHitTestForTransientInput_Name = 1;
constexpr uint32_t kXREnvironmentIntegrationProvider_UnsubscribeFromHitTest_Name = 2;
constexpr uint32_t kXREnvironmentIntegrationProvider_CreateAnchor_Name = 3;
constexpr uint32_t kXREnvironmentIntegrationProvider_CreatePlaneAnchor_Name = 4;
constexpr uint32_t kXREnvironmentIntegrationProvider_DetachAnchor_Name = 5;
constexpr uint32_t kXRInputSourceButtonListener_OnButtonEvent_Name = 0;
constexpr uint32_t kXRFrameDataProvider_GetFrameData_Name = 0;
constexpr uint32_t kXRFrameDataProvider_GetEnvironmentIntegrationProvider_Name = 1;
constexpr uint32_t kXRFrameDataProvider_SetInputSourceButtonListener_Name = 2;
constexpr uint32_t kXRPresentationProvider_UpdateLayerBounds_Name = 0;
constexpr uint32_t kXRPresentationProvider_SubmitFrameMissing_Name = 1;
constexpr uint32_t kXRPresentationProvider_SubmitFrame_Name = 2;
constexpr uint32_t kXRPresentationProvider_SubmitFrameDrawnIntoTexture_Name = 3;
constexpr uint32_t kXRPresentationClient_OnSubmitFrameTransferred_Name = 0;
constexpr uint32_t kXRPresentationClient_OnSubmitFrameRendered_Name = 1;
constexpr uint32_t kXRPresentationClient_OnSubmitFrameGpuFence_Name = 2;
constexpr uint32_t kXRSessionClient_OnExitPresent_Name = 0;
constexpr uint32_t kXRSessionClient_OnVisibilityStateChanged_Name = 1;

}  // namespace internal
}  // namespace mojom
}  // namespace device

#endif  // DEVICE_VR_PUBLIC_MOJOM_VR_SERVICE_MOJOM_SHARED_MESSAGE_IDS_H_