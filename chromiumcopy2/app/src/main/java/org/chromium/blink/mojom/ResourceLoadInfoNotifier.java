// ResourceLoadInfoNotifier.java is auto generated by mojom_bindings_generator.py, do not edit


// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by:
//     mojo/public/tools/bindings/mojom_bindings_generator.py
// For:
//     third_party/blink/public/mojom/loader/resource_load_info_notifier.mojom
//

package org.chromium.blink.mojom;

import androidx.annotation.IntDef;


public interface ResourceLoadInfoNotifier extends org.chromium.mojo.bindings.Interface {



    public interface Proxy extends ResourceLoadInfoNotifier, org.chromium.mojo.bindings.Interface.Proxy {
    }

    Manager<ResourceLoadInfoNotifier, ResourceLoadInfoNotifier.Proxy> MANAGER = ResourceLoadInfoNotifier_Internal.MANAGER;

    void notifyUpdateUserGestureCarryoverInfo(
);


    void notifyResourceRedirectReceived(
org.chromium.network.mojom.UrlRequestRedirectInfo redirectInfo, org.chromium.network.mojom.UrlResponseHead redirectResponse);


    void notifyResourceResponseReceived(
long requestId, org.chromium.url.mojom.SchemeHostPort finalResponseUrl, org.chromium.network.mojom.UrlResponseHead head, int requestDestination);


    void notifyResourceTransferSizeUpdated(
long requestId, int transferSizeDiff);


    void notifyResourceLoadCompleted(
ResourceLoadInfo resourceLoadInfo, org.chromium.network.mojom.UrlLoaderCompletionStatus status);


    void notifyResourceLoadCanceled(
long requestId);


    void clone(
org.chromium.mojo.bindings.InterfaceRequest<ResourceLoadInfoNotifier> pendingResourceLoadInfoNotifier);


}
