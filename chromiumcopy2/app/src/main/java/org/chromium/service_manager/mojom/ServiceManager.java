// ServiceManager.java is auto generated by mojom_bindings_generator.py, do not edit


// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by:
//     mojo/public/tools/bindings/mojom_bindings_generator.py
// For:
//     services/service_manager/public/mojom/service_manager.mojom
//

package org.chromium.service_manager.mojom;

import androidx.annotation.IntDef;


public interface ServiceManager extends org.chromium.mojo.bindings.Interface {



    public interface Proxy extends ServiceManager, org.chromium.mojo.bindings.Interface.Proxy {
    }

    Manager<ServiceManager, ServiceManager.Proxy> MANAGER = ServiceManager_Internal.MANAGER;

    void addListener(
ServiceManagerListener listener);


}
