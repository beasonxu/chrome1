// VideoDecoder.java is auto generated by mojom_bindings_generator.py, do not edit


// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by:
//     mojo/public/tools/bindings/mojom_bindings_generator.py
// For:
//     media/mojo/mojom/video_decoder.mojom
//

package org.chromium.media.mojom;

import androidx.annotation.IntDef;


public interface VideoDecoder extends org.chromium.mojo.bindings.Interface {



    public interface Proxy extends VideoDecoder, org.chromium.mojo.bindings.Interface.Proxy {
    }

    Manager<VideoDecoder, VideoDecoder.Proxy> MANAGER = VideoDecoder_Internal.MANAGER;

    void getSupportedConfigs(

GetSupportedConfigs_Response callback);

    interface GetSupportedConfigs_Response extends org.chromium.mojo.bindings.Callbacks.Callback2<SupportedVideoDecoderConfig[], Integer> { }


    void construct(
org.chromium.mojo.bindings.AssociatedInterfaceNotSupported client, MediaLog mediaLog, org.chromium.mojo.bindings.InterfaceRequest<VideoFrameHandleReleaser> videoFrameHandleReleaser, org.chromium.mojo.system.DataPipe.ConsumerHandle decoderBufferPipe, CommandBufferId commandBufferId, org.chromium.gfx.mojom.ColorSpace targetColorSpace);


    void initialize(
VideoDecoderConfig config, boolean lowDelay, org.chromium.mojo_base.mojom.UnguessableToken cdmId, 
Initialize_Response callback);

    interface Initialize_Response extends org.chromium.mojo.bindings.Callbacks.Callback4<DecoderStatus, Boolean, Integer, Integer> { }


    void decode(
DecoderBuffer buffer, 
Decode_Response callback);

    interface Decode_Response extends org.chromium.mojo.bindings.Callbacks.Callback1<DecoderStatus> { }


    void reset(

Reset_Response callback);

    interface Reset_Response extends org.chromium.mojo.bindings.Callbacks.Callback0 { }


    void onOverlayInfoChanged(
OverlayInfo overlayInfo);


}
