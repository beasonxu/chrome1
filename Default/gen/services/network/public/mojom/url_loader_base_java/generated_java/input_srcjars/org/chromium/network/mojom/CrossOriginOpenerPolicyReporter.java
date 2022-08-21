// CrossOriginOpenerPolicyReporter.java is auto generated by mojom_bindings_generator.py, do not edit


// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by:
//     mojo/public/tools/bindings/mojom_bindings_generator.py
// For:
//     services/network/public/mojom/cross_origin_opener_policy.mojom
//

package org.chromium.network.mojom;

import androidx.annotation.IntDef;


public interface CrossOriginOpenerPolicyReporter extends org.chromium.mojo.bindings.Interface {



    public interface Proxy extends CrossOriginOpenerPolicyReporter, org.chromium.mojo.bindings.Interface.Proxy {
    }

    Manager<CrossOriginOpenerPolicyReporter, CrossOriginOpenerPolicyReporter.Proxy> MANAGER = CrossOriginOpenerPolicyReporter_Internal.MANAGER;

    void queueAccessReport(
int reportType, String property, SourceLocation sourceLocation, String reportedWindowUrl);


}
