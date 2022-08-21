// services/network/public/mojom/network_context.mojom-blink-forward.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_CONTEXT_MOJOM_BLINK_FORWARD_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_CONTEXT_MOJOM_BLINK_FORWARD_H_

#include <stdint.h>

#include "mojo/public/cpp/bindings/struct_forward.h"

#include "mojo/public/cpp/bindings/deprecated_interface_types_forward.h"


#include "mojo/public/interfaces/bindings/native_struct.mojom-forward.h"
#include "third_party/blink/public/platform/web_common.h"




namespace network {
namespace mojom {

enum class TrustTokenRedemptionPolicy : int32_t;

enum class SCTAuditingMode : int32_t;

enum class ClearDataFilter_Type : int32_t;

enum class NetworkContext_DomainReliabilityClearMode : int32_t;
class CustomProxyConnectionObserverInterfaceBase;
class CustomProxyConfigClientInterfaceBase;
class TrustedHeaderClientInterfaceBase;
class TrustedURLLoaderHeaderClientInterfaceBase;
class NetworkContextClientInterfaceBase;
class NetworkContextInterfaceBase;
}  // namespace network
}  // namespace mojom


namespace network {
namespace mojom {
namespace blink {
// Aliases for definition in the parent namespace.
using TrustTokenRedemptionPolicy = TrustTokenRedemptionPolicy;
using SCTAuditingMode = SCTAuditingMode;
using CustomProxyConnectionObserverInterfaceBase = CustomProxyConnectionObserverInterfaceBase;
using CustomProxyConfigClientInterfaceBase = CustomProxyConfigClientInterfaceBase;
using TrustedHeaderClientInterfaceBase = TrustedHeaderClientInterfaceBase;
using TrustedURLLoaderHeaderClientInterfaceBase = TrustedURLLoaderHeaderClientInterfaceBase;
using NetworkContextClientInterfaceBase = NetworkContextClientInterfaceBase;
using NetworkContextInterfaceBase = NetworkContextInterfaceBase;

constexpr uint32_t kWebSocketOptionNone = 0U;

constexpr uint32_t kWebSocketOptionBlockAllCookies = 1U;

constexpr uint32_t kWebSocketOptionBlockThirdPartyCookies = 2U;

constexpr int32_t kBrowserProcessId = 0;

constexpr int32_t kInvalidProcessId = -1;
class CustomProxyConfig;
using CustomProxyConfigPtr = mojo::StructPtr<CustomProxyConfig>;

class CertVerifierServiceRemoteParams;
using CertVerifierServiceRemoteParamsPtr = mojo::StructPtr<CertVerifierServiceRemoteParams>;

class HttpAuthStaticNetworkContextParams;
using HttpAuthStaticNetworkContextParamsPtr = mojo::InlinedStructPtr<HttpAuthStaticNetworkContextParams>;

class CTPolicy;
using CTPolicyPtr = mojo::StructPtr<CTPolicy>;

class NetworkContextFilePaths;
using NetworkContextFilePathsPtr = mojo::StructPtr<NetworkContextFilePaths>;

class NetworkContextParams;
using NetworkContextParamsPtr = mojo::StructPtr<NetworkContextParams>;

class NetworkConditions;
using NetworkConditionsPtr = mojo::StructPtr<NetworkConditions>;

class ClearDataFilter;
using ClearDataFilterPtr = mojo::StructPtr<ClearDataFilter>;

class SignedExchangeReport;
using SignedExchangeReportPtr = mojo::StructPtr<SignedExchangeReport>;

class URLLoaderFactoryOverride;
using URLLoaderFactoryOverridePtr = mojo::StructPtr<URLLoaderFactoryOverride>;

class URLLoaderFactoryParams;
using URLLoaderFactoryParamsPtr = mojo::StructPtr<URLLoaderFactoryParams>;

class CustomProxyConnectionObserver;

class CustomProxyConfigClient;

class TrustedHeaderClient;

class TrustedURLLoaderHeaderClient;

class NetworkContextClient;

class NetworkContext;




}  // namespace blink
}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_CONTEXT_MOJOM_BLINK_FORWARD_H_