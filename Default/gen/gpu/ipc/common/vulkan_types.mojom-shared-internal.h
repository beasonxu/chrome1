// gpu/ipc/common/vulkan_types.mojom-shared-internal.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef GPU_IPC_COMMON_VULKAN_TYPES_MOJOM_SHARED_INTERNAL_H_
#define GPU_IPC_COMMON_VULKAN_TYPES_MOJOM_SHARED_INTERNAL_H_
#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"
#include "base/component_export.h"



namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace gpu {
namespace mojom {
namespace internal {
class VkExtensionProperties_Data;
class VkLayerProperties_Data;
class VkPhysicalDeviceLimits_Data;
class VkPhysicalDeviceSparseProperties_Data;
class VkPhysicalDeviceProperties_Data;
class VkPhysicalDeviceFeatures_Data;
class VkExtent3D_Data;
class VkQueueFamilyProperties_Data;

struct VkPhysicalDeviceType_Data {
 public:
  static bool constexpr kIsExtensible = false;

  static bool IsKnownValue(int32_t value) {
    switch (value) {
      case -1:
      case 0:
      case 1:
      case 2:
      case 3:
      case 4:
        return true;
    }
    return false;
  }

  static bool Validate(int32_t value,
                       mojo::internal::ValidationContext* validation_context) {
    if (kIsExtensible || IsKnownValue(value))
      return true;

    ReportValidationError(validation_context,
                          mojo::internal::VALIDATION_ERROR_UNKNOWN_ENUM_VALUE);
    return false;
  }
};

#pragma pack(push, 1)
class COMPONENT_EXPORT(MOJOM_SHARED_GPU_EXPORT) VkExtensionProperties_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> extensionName;
  uint32_t specVersion;
  uint8_t padfinal_[4];

 private:
  friend class mojo::internal::MessageFragment<VkExtensionProperties_Data>;

  VkExtensionProperties_Data();
  ~VkExtensionProperties_Data() = delete;
};
static_assert(sizeof(VkExtensionProperties_Data) == 24,
              "Bad sizeof(VkExtensionProperties_Data)");
// Used by VkExtensionProperties::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct VkExtensionProperties_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  VkExtensionProperties_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~VkExtensionProperties_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::Message& message) override {
    mojo::internal::MessageFragment<VkExtensionProperties_Data> fragment(message);
    mojo::internal::Serialize<DataView>(user_data_, fragment);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    VkExtensionProperties_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_GPU_EXPORT) VkLayerProperties_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> layerName;
  uint32_t specVersion;
  uint32_t implementationVersion;
  mojo::internal::Pointer<mojo::internal::String_Data> description;

 private:
  friend class mojo::internal::MessageFragment<VkLayerProperties_Data>;

  VkLayerProperties_Data();
  ~VkLayerProperties_Data() = delete;
};
static_assert(sizeof(VkLayerProperties_Data) == 32,
              "Bad sizeof(VkLayerProperties_Data)");
// Used by VkLayerProperties::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct VkLayerProperties_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  VkLayerProperties_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~VkLayerProperties_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::Message& message) override {
    mojo::internal::MessageFragment<VkLayerProperties_Data> fragment(message);
    mojo::internal::Serialize<DataView>(user_data_, fragment);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    VkLayerProperties_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_GPU_EXPORT) VkPhysicalDeviceLimits_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t maxImageDimension1D;
  uint32_t maxImageDimension2D;
  uint32_t maxImageDimension3D;
  uint32_t maxImageDimensionCube;
  uint32_t maxImageArrayLayers;
  uint32_t maxTexelBufferElements;
  uint32_t maxUniformBufferRange;
  uint32_t maxStorageBufferRange;
  uint32_t maxPushConstantsSize;
  uint32_t maxMemoryAllocationCount;
  uint32_t maxSamplerAllocationCount;
  uint32_t maxBoundDescriptorSets;
  uint64_t bufferImageGranularity;
  uint64_t sparseAddressSpaceSize;
  uint32_t maxPerStageDescriptorSamplers;
  uint32_t maxPerStageDescriptorUniformBuffers;
  uint32_t maxPerStageDescriptorStorageBuffers;
  uint32_t maxPerStageDescriptorSampledImages;
  uint32_t maxPerStageDescriptorStorageImages;
  uint32_t maxPerStageDescriptorInputAttachments;
  uint32_t maxPerStageResources;
  uint32_t maxDescriptorSetSamplers;
  uint32_t maxDescriptorSetUniformBuffers;
  uint32_t maxDescriptorSetUniformBuffersDynamic;
  uint32_t maxDescriptorSetStorageBuffers;
  uint32_t maxDescriptorSetStorageBuffersDynamic;
  uint32_t maxDescriptorSetSampledImages;
  uint32_t maxDescriptorSetStorageImages;
  uint32_t maxDescriptorSetInputAttachments;
  uint32_t maxVertexInputAttributes;
  uint32_t maxVertexInputBindings;
  uint32_t maxVertexInputAttributeOffset;
  uint32_t maxVertexInputBindingStride;
  uint32_t maxVertexOutputComponents;
  uint32_t maxTessellationGenerationLevel;
  uint32_t maxTessellationPatchSize;
  uint32_t maxTessellationControlPerVertexInputComponents;
  uint32_t maxTessellationControlPerVertexOutputComponents;
  uint32_t maxTessellationControlPerPatchOutputComponents;
  uint32_t maxTessellationControlTotalOutputComponents;
  uint32_t maxTessellationEvaluationInputComponents;
  uint32_t maxTessellationEvaluationOutputComponents;
  uint32_t maxGeometryShaderInvocations;
  uint32_t maxGeometryInputComponents;
  uint32_t maxGeometryOutputComponents;
  uint32_t maxGeometryOutputVertices;
  uint32_t maxGeometryTotalOutputComponents;
  uint32_t maxFragmentInputComponents;
  uint32_t maxFragmentOutputAttachments;
  uint32_t maxFragmentDualSrcAttachments;
  uint32_t maxFragmentCombinedOutputResources;
  uint32_t maxComputeSharedMemorySize;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint32_t>> maxComputeWorkGroupCount;
  uint32_t maxComputeWorkGroupInvocations;
  uint32_t subPixelPrecisionBits;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint32_t>> maxComputeWorkGroupSize;
  uint32_t subTexelPrecisionBits;
  uint32_t mipmapPrecisionBits;
  uint32_t maxDrawIndexedIndexValue;
  uint32_t maxDrawIndirectCount;
  float maxSamplerLodBias;
  float maxSamplerAnisotropy;
  uint32_t maxViewports;
  uint32_t viewportSubPixelBits;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint32_t>> maxViewportDimensions;
  mojo::internal::Pointer<mojo::internal::Array_Data<float>> viewportBoundsRange;
  uint64_t minMemoryMapAlignment;
  uint64_t minTexelBufferOffsetAlignment;
  uint64_t minUniformBufferOffsetAlignment;
  uint64_t minStorageBufferOffsetAlignment;
  int32_t minTexelOffset;
  uint32_t maxTexelOffset;
  int32_t minTexelGatherOffset;
  uint32_t maxTexelGatherOffset;
  float minInterpolationOffset;
  float maxInterpolationOffset;
  uint32_t subPixelInterpolationOffsetBits;
  uint32_t maxFramebufferWidth;
  uint32_t maxFramebufferHeight;
  uint32_t maxFramebufferLayers;
  uint32_t framebufferColorSampleCounts;
  uint32_t framebufferDepthSampleCounts;
  uint32_t framebufferStencilSampleCounts;
  uint32_t framebufferNoAttachmentsSampleCounts;
  uint32_t maxColorAttachments;
  uint32_t sampledImageColorSampleCounts;
  uint32_t sampledImageIntegerSampleCounts;
  uint32_t sampledImageDepthSampleCounts;
  uint32_t sampledImageStencilSampleCounts;
  uint32_t storageImageSampleCounts;
  uint32_t maxSampleMaskWords;
  uint8_t timestampComputeAndGraphics : 1;
  uint8_t strictLines : 1;
  uint8_t standardSampleLocations : 1;
  uint8_t pad93_[3];
  float timestampPeriod;
  uint32_t maxClipDistances;
  uint32_t maxCullDistances;
  uint32_t maxCombinedClipAndCullDistances;
  uint32_t discreteQueuePriorities;
  float pointSizeGranularity;
  mojo::internal::Pointer<mojo::internal::Array_Data<float>> pointSizeRange;
  mojo::internal::Pointer<mojo::internal::Array_Data<float>> lineWidthRange;
  float lineWidthGranularity;
  uint8_t pad102_[4];
  uint64_t optimalBufferCopyOffsetAlignment;
  uint64_t optimalBufferCopyRowPitchAlignment;
  uint64_t nonCoherentAtomSize;

 private:
  friend class mojo::internal::MessageFragment<VkPhysicalDeviceLimits_Data>;

  VkPhysicalDeviceLimits_Data();
  ~VkPhysicalDeviceLimits_Data() = delete;
};
static_assert(sizeof(VkPhysicalDeviceLimits_Data) == 488,
              "Bad sizeof(VkPhysicalDeviceLimits_Data)");
// Used by VkPhysicalDeviceLimits::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct VkPhysicalDeviceLimits_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  VkPhysicalDeviceLimits_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~VkPhysicalDeviceLimits_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::Message& message) override {
    mojo::internal::MessageFragment<VkPhysicalDeviceLimits_Data> fragment(message);
    mojo::internal::Serialize<DataView>(user_data_, fragment);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    VkPhysicalDeviceLimits_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_GPU_EXPORT) VkPhysicalDeviceSparseProperties_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t residencyStandard2DBlockShape : 1;
  uint8_t residencyStandard2DMultisampleBlockShape : 1;
  uint8_t residencyStandard3DBlockShape : 1;
  uint8_t residencyAlignedMipSize : 1;
  uint8_t residencyNonResidentStrict : 1;
  uint8_t padfinal_[7];

 private:
  friend class mojo::internal::MessageFragment<VkPhysicalDeviceSparseProperties_Data>;

  VkPhysicalDeviceSparseProperties_Data();
  ~VkPhysicalDeviceSparseProperties_Data() = delete;
};
static_assert(sizeof(VkPhysicalDeviceSparseProperties_Data) == 16,
              "Bad sizeof(VkPhysicalDeviceSparseProperties_Data)");
// Used by VkPhysicalDeviceSparseProperties::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct VkPhysicalDeviceSparseProperties_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  VkPhysicalDeviceSparseProperties_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~VkPhysicalDeviceSparseProperties_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::Message& message) override {
    mojo::internal::MessageFragment<VkPhysicalDeviceSparseProperties_Data> fragment(message);
    mojo::internal::Serialize<DataView>(user_data_, fragment);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    VkPhysicalDeviceSparseProperties_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_GPU_EXPORT) VkPhysicalDeviceProperties_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t apiVersion;
  uint32_t driverVersion;
  uint32_t vendorID;
  uint32_t deviceID;
  int32_t deviceType;
  uint8_t pad4_[4];
  mojo::internal::Pointer<mojo::internal::String_Data> deviceName;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> pipelineCacheUUID;
  mojo::internal::Pointer<internal::VkPhysicalDeviceLimits_Data> limits;
  mojo::internal::Pointer<internal::VkPhysicalDeviceSparseProperties_Data> sparseProperties;

 private:
  friend class mojo::internal::MessageFragment<VkPhysicalDeviceProperties_Data>;

  VkPhysicalDeviceProperties_Data();
  ~VkPhysicalDeviceProperties_Data() = delete;
};
static_assert(sizeof(VkPhysicalDeviceProperties_Data) == 64,
              "Bad sizeof(VkPhysicalDeviceProperties_Data)");
// Used by VkPhysicalDeviceProperties::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct VkPhysicalDeviceProperties_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  VkPhysicalDeviceProperties_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~VkPhysicalDeviceProperties_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::Message& message) override {
    mojo::internal::MessageFragment<VkPhysicalDeviceProperties_Data> fragment(message);
    mojo::internal::Serialize<DataView>(user_data_, fragment);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    VkPhysicalDeviceProperties_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_GPU_EXPORT) VkPhysicalDeviceFeatures_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t robustBufferAccess : 1;
  uint8_t fullDrawIndexUint32 : 1;
  uint8_t imageCubeArray : 1;
  uint8_t independentBlend : 1;
  uint8_t geometryShader : 1;
  uint8_t tessellationShader : 1;
  uint8_t sampleRateShading : 1;
  uint8_t dualSrcBlend : 1;
  uint8_t logicOp : 1;
  uint8_t multiDrawIndirect : 1;
  uint8_t drawIndirectFirstInstance : 1;
  uint8_t depthClamp : 1;
  uint8_t depthBiasClamp : 1;
  uint8_t fillModeNonSolid : 1;
  uint8_t depthBounds : 1;
  uint8_t wideLines : 1;
  uint8_t largePoints : 1;
  uint8_t alphaToOne : 1;
  uint8_t multiViewport : 1;
  uint8_t samplerAnisotropy : 1;
  uint8_t textureCompressionETC2 : 1;
  uint8_t textureCompressionASTC_LDR : 1;
  uint8_t textureCompressionBC : 1;
  uint8_t occlusionQueryPrecise : 1;
  uint8_t pipelineStatisticsQuery : 1;
  uint8_t vertexPipelineStoresAndAtomics : 1;
  uint8_t fragmentStoresAndAtomics : 1;
  uint8_t shaderTessellationAndGeometryPointSize : 1;
  uint8_t shaderImageGatherExtended : 1;
  uint8_t shaderStorageImageExtendedFormats : 1;
  uint8_t shaderStorageImageMultisample : 1;
  uint8_t shaderStorageImageReadWithoutFormat : 1;
  uint8_t shaderStorageImageWriteWithoutFormat : 1;
  uint8_t shaderUniformBufferArrayDynamicIndexing : 1;
  uint8_t shaderSampledImageArrayDynamicIndexing : 1;
  uint8_t shaderStorageBufferArrayDynamicIndexing : 1;
  uint8_t shaderStorageImageArrayDynamicIndexing : 1;
  uint8_t shaderClipDistance : 1;
  uint8_t shaderCullDistance : 1;
  uint8_t shaderFloat64 : 1;
  uint8_t shaderInt64 : 1;
  uint8_t shaderInt16 : 1;
  uint8_t shaderResourceResidency : 1;
  uint8_t shaderResourceMinLod : 1;
  uint8_t sparseBinding : 1;
  uint8_t sparseResidencyBuffer : 1;
  uint8_t sparseResidencyImage2D : 1;
  uint8_t sparseResidencyImage3D : 1;
  uint8_t sparseResidency2Samples : 1;
  uint8_t sparseResidency4Samples : 1;
  uint8_t sparseResidency8Samples : 1;
  uint8_t sparseResidency16Samples : 1;
  uint8_t sparseResidencyAliased : 1;
  uint8_t variableMultisampleRate : 1;
  uint8_t inheritedQueries : 1;
  uint8_t padfinal_[1];

 private:
  friend class mojo::internal::MessageFragment<VkPhysicalDeviceFeatures_Data>;

  VkPhysicalDeviceFeatures_Data();
  ~VkPhysicalDeviceFeatures_Data() = delete;
};
static_assert(sizeof(VkPhysicalDeviceFeatures_Data) == 16,
              "Bad sizeof(VkPhysicalDeviceFeatures_Data)");
// Used by VkPhysicalDeviceFeatures::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct VkPhysicalDeviceFeatures_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  VkPhysicalDeviceFeatures_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~VkPhysicalDeviceFeatures_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::Message& message) override {
    mojo::internal::MessageFragment<VkPhysicalDeviceFeatures_Data> fragment(message);
    mojo::internal::Serialize<DataView>(user_data_, fragment);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    VkPhysicalDeviceFeatures_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_GPU_EXPORT) VkExtent3D_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t width;
  uint32_t height;
  uint32_t depth;
  uint8_t padfinal_[4];

 private:
  friend class mojo::internal::MessageFragment<VkExtent3D_Data>;

  VkExtent3D_Data();
  ~VkExtent3D_Data() = delete;
};
static_assert(sizeof(VkExtent3D_Data) == 24,
              "Bad sizeof(VkExtent3D_Data)");
// Used by VkExtent3D::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct VkExtent3D_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  VkExtent3D_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~VkExtent3D_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::Message& message) override {
    mojo::internal::MessageFragment<VkExtent3D_Data> fragment(message);
    mojo::internal::Serialize<DataView>(user_data_, fragment);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    VkExtent3D_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_GPU_EXPORT) VkQueueFamilyProperties_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t queueFlags;
  uint32_t queueCount;
  uint32_t timestampValidBits;
  uint8_t pad2_[4];
  mojo::internal::Pointer<internal::VkExtent3D_Data> minImageTransferGranularity;

 private:
  friend class mojo::internal::MessageFragment<VkQueueFamilyProperties_Data>;

  VkQueueFamilyProperties_Data();
  ~VkQueueFamilyProperties_Data() = delete;
};
static_assert(sizeof(VkQueueFamilyProperties_Data) == 32,
              "Bad sizeof(VkQueueFamilyProperties_Data)");
// Used by VkQueueFamilyProperties::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct VkQueueFamilyProperties_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  VkQueueFamilyProperties_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~VkQueueFamilyProperties_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::Message& message) override {
    mojo::internal::MessageFragment<VkQueueFamilyProperties_Data> fragment(message);
    mojo::internal::Serialize<DataView>(user_data_, fragment);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    VkQueueFamilyProperties_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace gpu

#endif  // GPU_IPC_COMMON_VULKAN_TYPES_MOJOM_SHARED_INTERNAL_H_