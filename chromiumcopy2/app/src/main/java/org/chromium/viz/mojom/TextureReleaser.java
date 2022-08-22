// TextureReleaser.java is auto generated by mojom_bindings_generator.py, do not edit


// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by:
//     mojo/public/tools/bindings/mojom_bindings_generator.py
// For:
//     services/viz/public/mojom/compositing/texture_releaser.mojom
//

package org.chromium.viz.mojom;

import androidx.annotation.IntDef;


public interface TextureReleaser extends org.chromium.mojo.bindings.Interface {



    public interface Proxy extends TextureReleaser, org.chromium.mojo.bindings.Interface.Proxy {
    }

    Manager<TextureReleaser, TextureReleaser.Proxy> MANAGER = TextureReleaser_Internal.MANAGER;

    void release(
org.chromium.gpu.mojom.SyncToken syncToken, boolean isLost);


}
