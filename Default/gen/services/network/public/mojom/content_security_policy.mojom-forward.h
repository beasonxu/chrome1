// services/network/public/mojom/content_security_policy.mojom-forward.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_CONTENT_SECURITY_POLICY_MOJOM_FORWARD_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_CONTENT_SECURITY_POLICY_MOJOM_FORWARD_H_

#include <stdint.h>

#include "mojo/public/cpp/bindings/struct_forward.h"




#include "mojo/public/interfaces/bindings/native_struct.mojom-forward.h"






namespace network {
namespace mojom {
class ContentSecurityPolicyHeaderDataView;

class CSPSourceDataView;

class CSPHashSourceDataView;

class CSPSourceListDataView;

class CSPTrustedTypesDataView;

class ContentSecurityPolicyDataView;

class CSPViolationDataView;

class AllowCSPFromHeaderValueDataView;

enum class ContentSecurityPolicyType : int32_t;

enum class ContentSecurityPolicySource : int32_t;

enum class CSPDisposition : int32_t;

enum class CSPHashAlgorithm : int32_t;

enum class CSPDirectiveName : int32_t;

enum class CSPRequireTrustedTypesFor : int32_t;
class ContentSecurityPolicyHeader;
using ContentSecurityPolicyHeaderPtr = mojo::InlinedStructPtr<ContentSecurityPolicyHeader>;

class CSPSource;
using CSPSourcePtr = mojo::StructPtr<CSPSource>;

class CSPHashSource;
using CSPHashSourcePtr = mojo::StructPtr<CSPHashSource>;

class CSPSourceList;
using CSPSourceListPtr = mojo::StructPtr<CSPSourceList>;

class CSPTrustedTypes;
using CSPTrustedTypesPtr = mojo::StructPtr<CSPTrustedTypes>;

class ContentSecurityPolicy;
using ContentSecurityPolicyPtr = mojo::StructPtr<ContentSecurityPolicy>;

class CSPViolation;
using CSPViolationPtr = mojo::StructPtr<CSPViolation>;

class AllowCSPFromHeaderValue;

using AllowCSPFromHeaderValuePtr = mojo::StructPtr<AllowCSPFromHeaderValue>;




}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_CONTENT_SECURITY_POLICY_MOJOM_FORWARD_H_