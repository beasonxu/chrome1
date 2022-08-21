// RendererClient.java is auto generated by mojom_bindings_generator.py, do not edit


// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by:
//     mojo/public/tools/bindings/mojom_bindings_generator.py
// For:
//     media/mojo/mojom/renderer.mojom
//

package org.chromium.media.mojom;

import androidx.annotation.IntDef;


public interface RendererClient extends org.chromium.mojo.bindings.Interface {



    public interface Proxy extends RendererClient, org.chromium.mojo.bindings.Interface.Proxy {
    }

    Manager<RendererClient, RendererClient.Proxy> MANAGER = RendererClient_Internal.MANAGER;

    void onTimeUpdate(
org.chromium.mojo_base.mojom.TimeDelta time, org.chromium.mojo_base.mojom.TimeDelta maxTime, org.chromium.mojo_base.mojom.TimeTicks captureTime);


    void onBufferingStateChange(
int state, int reason);


    void onEnded(
);


    void onError(
PipelineStatus status);


    void onAudioConfigChange(
AudioDecoderConfig config);


    void onVideoConfigChange(
VideoDecoderConfig config);


    void onVideoNaturalSizeChange(
org.chromium.gfx.mojom.Size size);


    void onVideoOpacityChange(
boolean opaque);


    void onStatisticsUpdate(
PipelineStatistics stats);


    void onWaiting(
int reason);


}
