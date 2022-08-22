// FingerprintObserver.java is auto generated by mojom_bindings_generator.py, do not edit


// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by:
//     mojo/public/tools/bindings/mojom_bindings_generator.py
// For:
//     services/device/public/mojom/fingerprint.mojom
//

package org.chromium.device.mojom;

import androidx.annotation.IntDef;


public interface FingerprintObserver extends org.chromium.mojo.bindings.Interface {



    public interface Proxy extends FingerprintObserver, org.chromium.mojo.bindings.Interface.Proxy {
    }

    Manager<FingerprintObserver, FingerprintObserver.Proxy> MANAGER = FingerprintObserver_Internal.MANAGER;

    void onRestarted(
);


    void onEnrollScanDone(
int scanResult, boolean isComplete, int percentComplete);


    void onAuthScanDone(
FingerprintMessage msg, java.util.Map<String, String[]> matches);


    void onSessionFailed(
);


}
