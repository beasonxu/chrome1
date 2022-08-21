// content/services/auction_worklet/public/mojom/bidder_worklet.mojom-forward.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_SERVICES_AUCTION_WORKLET_PUBLIC_MOJOM_BIDDER_WORKLET_MOJOM_FORWARD_H_
#define CONTENT_SERVICES_AUCTION_WORKLET_PUBLIC_MOJOM_BIDDER_WORKLET_MOJOM_FORWARD_H_



#include "mojo/public/cpp/bindings/struct_forward.h"

#include "mojo/public/cpp/bindings/deprecated_interface_types_forward.h"


#include "mojo/public/interfaces/bindings/native_struct.mojom-forward.h"






namespace auction_worklet {
namespace mojom {
class PreviousWinDataView;

class BidderWorkletNonSharedParamsDataView;

class BiddingBrowserSignalsDataView;

class BidderWorkletBidDataView;

class PreviousWin;
using PreviousWinPtr = mojo::StructPtr<PreviousWin>;

class BidderWorkletNonSharedParams;
using BidderWorkletNonSharedParamsPtr = mojo::StructPtr<BidderWorkletNonSharedParams>;

class BiddingBrowserSignals;
using BiddingBrowserSignalsPtr = mojo::StructPtr<BiddingBrowserSignals>;

class BidderWorkletBid;
using BidderWorkletBidPtr = mojo::StructPtr<BidderWorkletBid>;

class BidderWorklet;




}  // namespace mojom
}  // namespace auction_worklet

#endif  // CONTENT_SERVICES_AUCTION_WORKLET_PUBLIC_MOJOM_BIDDER_WORKLET_MOJOM_FORWARD_H_