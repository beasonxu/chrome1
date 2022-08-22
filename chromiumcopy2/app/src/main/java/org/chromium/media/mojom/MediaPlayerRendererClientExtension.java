// MediaPlayerRendererClientExtension.java is auto generated by mojom_bindings_generator.py, do not edit


// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by:
//     mojo/public/tools/bindings/mojom_bindings_generator.py
// For:
//     media/mojo/mojom/renderer_extensions.mojom
//

package org.chromium.media.mojom;

import androidx.annotation.IntDef;


public interface MediaPlayerRendererClientExtension extends org.chromium.mojo.bindings.Interface {



    public interface Proxy extends MediaPlayerRendererClientExtension, org.chromium.mojo.bindings.Interface.Proxy {
    }

    Manager<MediaPlayerRendererClientExtension, MediaPlayerRendererClientExtension.Proxy> MANAGER = MediaPlayerRendererClientExtension_Internal.MANAGER;

    void onVideoSizeChange(
org.chromium.gfx.mojom.Size size);


    void onDurationChange(
org.chromium.mojo_base.mojom.TimeDelta duration);


}
