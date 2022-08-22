// ControllerServiceWorker.java is auto generated by mojom_bindings_generator.py, do not edit


// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by:
//     mojo/public/tools/bindings/mojom_bindings_generator.py
// For:
//     third_party/blink/public/mojom/service_worker/controller_service_worker.mojom
//

package org.chromium.blink.mojom;

import androidx.annotation.IntDef;


public interface ControllerServiceWorker extends org.chromium.mojo.bindings.Interface {



    public interface Proxy extends ControllerServiceWorker, org.chromium.mojo.bindings.Interface.Proxy {
    }

    Manager<ControllerServiceWorker, ControllerServiceWorker.Proxy> MANAGER = ControllerServiceWorker_Internal.MANAGER;

    void dispatchFetchEventForSubresource(
DispatchFetchEventParams params, ServiceWorkerFetchResponseCallback responseCallback, 
DispatchFetchEventForSubresource_Response callback);

    interface DispatchFetchEventForSubresource_Response extends org.chromium.mojo.bindings.Callbacks.Callback1<Integer> { }


    void clone(
org.chromium.mojo.bindings.InterfaceRequest<ControllerServiceWorker> receiver, org.chromium.network.mojom.CrossOriginEmbedderPolicy crossOriginEmbedderPolicy, org.chromium.network.mojom.CrossOriginEmbedderPolicyReporter coepReporter);


}
