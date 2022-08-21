// mojom-webui/gpu/ipc/common/vulkan_info.mojom-webui.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2020 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

import {mojo} from '//resources/mojo/mojo/public/js/bindings.js';

import {
  VkExtensionProperties as gpu_mojom_VkExtensionProperties,
  VkExtensionPropertiesSpec as gpu_mojom_VkExtensionPropertiesSpec,
  VkLayerProperties as gpu_mojom_VkLayerProperties,
  VkLayerPropertiesSpec as gpu_mojom_VkLayerPropertiesSpec,
  VkPhysicalDeviceFeatures as gpu_mojom_VkPhysicalDeviceFeatures,
  VkPhysicalDeviceFeaturesSpec as gpu_mojom_VkPhysicalDeviceFeaturesSpec,
  VkPhysicalDeviceProperties as gpu_mojom_VkPhysicalDeviceProperties,
  VkPhysicalDevicePropertiesSpec as gpu_mojom_VkPhysicalDevicePropertiesSpec,
  VkQueueFamilyProperties as gpu_mojom_VkQueueFamilyProperties,
  VkQueueFamilyPropertiesSpec as gpu_mojom_VkQueueFamilyPropertiesSpec
} from './vulkan_types.mojom-webui.js';



/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const VulkanPhysicalDeviceInfoSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const VulkanInfoSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };




mojo.internal.Struct(
    VulkanPhysicalDeviceInfoSpec.$,
    'VulkanPhysicalDeviceInfo',
    [
      mojo.internal.StructField(
        'properties', 0,
        0,
        gpu_mojom_VkPhysicalDevicePropertiesSpec.$,
        null,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'extensions', 8,
        0,
        mojo.internal.Array(gpu_mojom_VkExtensionPropertiesSpec.$, false),
        null,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'features', 16,
        0,
        gpu_mojom_VkPhysicalDeviceFeaturesSpec.$,
        null,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'featureSamplerYcbcrConversion', 24,
        0,
        mojo.internal.Bool,
        false,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'featureProtectedMemory', 24,
        1,
        mojo.internal.Bool,
        false,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'queueFamilies', 32,
        0,
        mojo.internal.Array(gpu_mojom_VkQueueFamilyPropertiesSpec.$, false),
        null,
        false /* nullable */,
        0),
    ],
    [[0, 48],]);


export const VulkanPhysicalDeviceInfo_Deserialize =
    mojo.internal.createStructDeserializer(VulkanPhysicalDeviceInfoSpec.$);


/**
 * @record
 */
export class VulkanPhysicalDeviceInfo {
  constructor() {
    /** @type { !gpu_mojom_VkPhysicalDeviceProperties } */
    this.properties;
    /** @type { !Array<!gpu_mojom_VkExtensionProperties> } */
    this.extensions;
    /** @type { !gpu_mojom_VkPhysicalDeviceFeatures } */
    this.features;
    /** @type { !boolean } */
    this.featureSamplerYcbcrConversion;
    /** @type { !boolean } */
    this.featureProtectedMemory;
    /** @type { !Array<!gpu_mojom_VkQueueFamilyProperties> } */
    this.queueFamilies;
  }
}



mojo.internal.Struct(
    VulkanInfoSpec.$,
    'VulkanInfo',
    [
      mojo.internal.StructField(
        'apiVersion', 0,
        0,
        mojo.internal.Uint32,
        0,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'usedApiVersion', 4,
        0,
        mojo.internal.Uint32,
        0,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'instanceExtensions', 8,
        0,
        mojo.internal.Array(gpu_mojom_VkExtensionPropertiesSpec.$, false),
        null,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'enabledInstanceExtensions', 16,
        0,
        mojo.internal.Array(mojo.internal.String, false),
        null,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'instanceLayers', 24,
        0,
        mojo.internal.Array(gpu_mojom_VkLayerPropertiesSpec.$, false),
        null,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'physicalDevices', 32,
        0,
        mojo.internal.Array(VulkanPhysicalDeviceInfoSpec.$, false),
        null,
        false /* nullable */,
        0),
    ],
    [[0, 48],]);


export const VulkanInfo_Deserialize =
    mojo.internal.createStructDeserializer(VulkanInfoSpec.$);


/**
 * @record
 */
export class VulkanInfo {
  constructor() {
    /** @type { !number } */
    this.apiVersion;
    /** @type { !number } */
    this.usedApiVersion;
    /** @type { !Array<!gpu_mojom_VkExtensionProperties> } */
    this.instanceExtensions;
    /** @type { !Array<!string> } */
    this.enabledInstanceExtensions;
    /** @type { !Array<!gpu_mojom_VkLayerProperties> } */
    this.instanceLayers;
    /** @type { !Array<!VulkanPhysicalDeviceInfo> } */
    this.physicalDevices;
  }
}

