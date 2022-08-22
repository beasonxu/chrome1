// SharedWorkerClient.java is auto generated by mojom_bindings_generator.py, do not edit


// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by:
//     mojo/public/tools/bindings/mojom_bindings_generator.py
// For:
//     third_party/blink/public/mojom/worker/shared_worker_client.mojom
//

package org.chromium.blink.mojom;

import androidx.annotation.IntDef;


public interface SharedWorkerClient extends org.chromium.mojo.bindings.Interface {



    public interface Proxy extends SharedWorkerClient, org.chromium.mojo.bindings.Interface.Proxy {
    }

    Manager<SharedWorkerClient, SharedWorkerClient.Proxy> MANAGER = SharedWorkerClient_Internal.MANAGER;

    void onCreated(
int creationContextType);


    void onConnected(
int[] featuresUsed);


    void onScriptLoadFailed(
String errorMessage);


    void onFeatureUsed(
int feature);


}
