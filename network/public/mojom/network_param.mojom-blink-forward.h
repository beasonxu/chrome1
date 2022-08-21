// services/network/public/mojom/network_param.mojom-blink-forward.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_PARAM_MOJOM_BLINK_FORWARD_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_PARAM_MOJOM_BLINK_FORWARD_H_



#include "mojo/public/cpp/bindings/struct_forward.h"




#include "mojo/public/interfaces/bindings/native_struct.mojom-forward.h"




namespace network {
namespace mojom {
}  // namespace network
}  // namespace mojom


namespace network {
namespace mojom {
namespace blink {
class AuthChallengeInfo;
using AuthChallengeInfoPtr = mojo::StructPtr<AuthChallengeInfo>;

using AuthCredentials = mojo::native::NativeStruct;
using AuthCredentialsPtr = mojo::native::NativeStructPtr;

using CertVerifyResult = mojo::native::NativeStruct;
using CertVerifyResultPtr = mojo::native::NativeStructPtr;

using HttpResponseHeaders = mojo::native::NativeStruct;
using HttpResponseHeadersPtr = mojo::native::NativeStructPtr;

class HttpVersion;
using HttpVersionPtr = mojo::InlinedStructPtr<HttpVersion>;

using HostPortPair = mojo::native::NativeStruct;
using HostPortPairPtr = mojo::native::NativeStructPtr;

using ProxyServer = mojo::native::NativeStruct;
using ProxyServerPtr = mojo::native::NativeStructPtr;

class ResolveErrorInfo;
using ResolveErrorInfoPtr = mojo::InlinedStructPtr<ResolveErrorInfo>;

using SSLCertRequestInfo = mojo::native::NativeStruct;
using SSLCertRequestInfoPtr = mojo::native::NativeStructPtr;

using SSLInfo = mojo::native::NativeStruct;
using SSLInfoPtr = mojo::native::NativeStructPtr;

using X509Certificate = mojo::native::NativeStruct;
using X509CertificatePtr = mojo::native::NativeStructPtr;




}  // namespace blink
}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_PARAM_MOJOM_BLINK_FORWARD_H_