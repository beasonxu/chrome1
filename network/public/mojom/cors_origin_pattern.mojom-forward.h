// services/network/public/mojom/cors_origin_pattern.mojom-forward.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_CORS_ORIGIN_PATTERN_MOJOM_FORWARD_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_CORS_ORIGIN_PATTERN_MOJOM_FORWARD_H_

#include <stdint.h>

#include "mojo/public/cpp/bindings/struct_forward.h"




#include "mojo/public/interfaces/bindings/native_struct.mojom-forward.h"






namespace network {
namespace mojom {
class CorsOriginPatternDataView;

class CorsOriginAccessPatternsDataView;


enum class CorsPortMatchMode : int32_t;

enum class CorsDomainMatchMode : int32_t;

enum class CorsOriginAccessMatchPriority : int32_t;
class CorsOriginPattern;
using CorsOriginPatternPtr = mojo::StructPtr<CorsOriginPattern>;

class CorsOriginAccessPatterns;
using CorsOriginAccessPatternsPtr = mojo::StructPtr<CorsOriginAccessPatterns>;




}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_CORS_ORIGIN_PATTERN_MOJOM_FORWARD_H_