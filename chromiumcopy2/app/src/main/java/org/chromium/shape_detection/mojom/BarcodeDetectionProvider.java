// BarcodeDetectionProvider.java is auto generated by mojom_bindings_generator.py, do not edit


// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by:
//     mojo/public/tools/bindings/mojom_bindings_generator.py
// For:
//     services/shape_detection/public/mojom/barcodedetection_provider.mojom
//

package org.chromium.shape_detection.mojom;

import androidx.annotation.IntDef;


public interface BarcodeDetectionProvider extends org.chromium.mojo.bindings.Interface {



    public interface Proxy extends BarcodeDetectionProvider, org.chromium.mojo.bindings.Interface.Proxy {
    }

    Manager<BarcodeDetectionProvider, BarcodeDetectionProvider.Proxy> MANAGER = BarcodeDetectionProvider_Internal.MANAGER;

    void createBarcodeDetection(
org.chromium.mojo.bindings.InterfaceRequest<BarcodeDetection> receiver, BarcodeDetectorOptions options);


    void enumerateSupportedFormats(

EnumerateSupportedFormats_Response callback);

    interface EnumerateSupportedFormats_Response extends org.chromium.mojo.bindings.Callbacks.Callback1<int[]> { }


}
