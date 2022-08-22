// MediaStreamDeviceObserver.java is auto generated by mojom_bindings_generator.py, do not edit


// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by:
//     mojo/public/tools/bindings/mojom_bindings_generator.py
// For:
//     third_party/blink/public/mojom/mediastream/media_stream.mojom
//

package org.chromium.blink.mojom;

import androidx.annotation.IntDef;


public interface MediaStreamDeviceObserver extends org.chromium.mojo.bindings.Interface {



    public interface Proxy extends MediaStreamDeviceObserver, org.chromium.mojo.bindings.Interface.Proxy {
    }

    Manager<MediaStreamDeviceObserver, MediaStreamDeviceObserver.Proxy> MANAGER = MediaStreamDeviceObserver_Internal.MANAGER;

    void onDeviceStopped(
String label, MediaStreamDevice device);


    void onDeviceChanged(
String label, MediaStreamDevice oldDevice, MediaStreamDevice newDevice);


    void onDeviceRequestStateChange(
String label, MediaStreamDevice device, int newState);


    void onDeviceCaptureHandleChange(
String label, MediaStreamDevice device);


}
