// third_party/blink/public/mojom/interest_group/interest_group_types.mojom-forward.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_INTEREST_GROUP_INTEREST_GROUP_TYPES_MOJOM_FORWARD_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_INTEREST_GROUP_INTEREST_GROUP_TYPES_MOJOM_FORWARD_H_

#include <stdint.h>

#include "mojo/public/cpp/bindings/struct_forward.h"




#include "mojo/public/interfaces/bindings/native_struct.mojom-forward.h"
#include "third_party/blink/public/common/common_export.h"






namespace blink {
namespace mojom {
class InterestGroupAdDataView;

class InterestGroupDataView;

class AuctionAdConfigNonSharedParamsDataView;

class AuctionAdConfigDataView;


enum class InterestGroup_ExecutionMode : int32_t;

constexpr uint32_t kMaxInterestGroupSize = 51200U;
class InterestGroupAd;
using InterestGroupAdPtr = mojo::StructPtr<InterestGroupAd>;

class InterestGroup;
using InterestGroupPtr = mojo::StructPtr<InterestGroup>;

class AuctionAdConfigNonSharedParams;
using AuctionAdConfigNonSharedParamsPtr = mojo::StructPtr<AuctionAdConfigNonSharedParams>;

class AuctionAdConfig;
using AuctionAdConfigPtr = mojo::StructPtr<AuctionAdConfig>;




}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_INTEREST_GROUP_INTEREST_GROUP_TYPES_MOJOM_FORWARD_H_