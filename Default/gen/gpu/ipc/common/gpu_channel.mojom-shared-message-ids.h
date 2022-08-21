// gpu/ipc/common/gpu_channel.mojom-shared-message-ids.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef GPU_IPC_COMMON_GPU_CHANNEL_MOJOM_SHARED_MESSAGE_IDS_H_
#define GPU_IPC_COMMON_GPU_CHANNEL_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace gpu {
namespace mojom {

namespace internal {


constexpr uint32_t kGpuChannel_CrashForTesting_Name = 0;
constexpr uint32_t kGpuChannel_TerminateForTesting_Name = 1;
constexpr uint32_t kGpuChannel_GetChannelToken_Name = 2;
constexpr uint32_t kGpuChannel_Flush_Name = 3;
constexpr uint32_t kGpuChannel_CreateCommandBuffer_Name = 4;
constexpr uint32_t kGpuChannel_DestroyCommandBuffer_Name = 5;
constexpr uint32_t kGpuChannel_ScheduleImageDecode_Name = 6;
constexpr uint32_t kGpuChannel_FlushDeferredRequests_Name = 7;
constexpr uint32_t kGpuChannel_CreateStreamTexture_Name = 8;
constexpr uint32_t kGpuChannel_WaitForTokenInRange_Name = 9;
constexpr uint32_t kGpuChannel_WaitForGetOffsetInRange_Name = 10;
constexpr uint32_t kCommandBuffer_SetGetBuffer_Name = 0;
constexpr uint32_t kCommandBuffer_RegisterTransferBuffer_Name = 1;
constexpr uint32_t kCommandBuffer_CreateGpuFenceFromHandle_Name = 2;
constexpr uint32_t kCommandBuffer_GetGpuFenceHandle_Name = 3;
constexpr uint32_t kCommandBuffer_SignalSyncToken_Name = 4;
constexpr uint32_t kCommandBuffer_SignalQuery_Name = 5;
constexpr uint32_t kCommandBuffer_BindMediaReceiver_Name = 6;
constexpr uint32_t kCommandBufferClient_OnConsoleMessage_Name = 0;
constexpr uint32_t kCommandBufferClient_OnGpuSwitched_Name = 1;
constexpr uint32_t kCommandBufferClient_OnDestroyed_Name = 2;
constexpr uint32_t kCommandBufferClient_OnReturnData_Name = 3;
constexpr uint32_t kCommandBufferClient_OnSignalAck_Name = 4;
constexpr uint32_t kStreamTexture_ForwardForSurfaceRequest_Name = 0;
constexpr uint32_t kStreamTexture_StartListening_Name = 1;
constexpr uint32_t kStreamTexture_UpdateRotatedVisibleSize_Name = 2;
constexpr uint32_t kStreamTextureClient_OnFrameAvailable_Name = 0;
constexpr uint32_t kStreamTextureClient_OnFrameWithInfoAvailable_Name = 1;

}  // namespace internal
}  // namespace mojom
}  // namespace gpu

#endif  // GPU_IPC_COMMON_GPU_CHANNEL_MOJOM_SHARED_MESSAGE_IDS_H_