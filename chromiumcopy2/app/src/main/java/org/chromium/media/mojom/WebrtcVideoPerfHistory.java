// WebrtcVideoPerfHistory.java is auto generated by mojom_bindings_generator.py, do not edit


// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by:
//     mojo/public/tools/bindings/mojom_bindings_generator.py
// For:
//     media/mojo/mojom/webrtc_video_perf.mojom
//

package org.chromium.media.mojom;

import androidx.annotation.IntDef;


public interface WebrtcVideoPerfHistory extends org.chromium.mojo.bindings.Interface {



    public interface Proxy extends WebrtcVideoPerfHistory, org.chromium.mojo.bindings.Interface.Proxy {
    }

    Manager<WebrtcVideoPerfHistory, WebrtcVideoPerfHistory.Proxy> MANAGER = WebrtcVideoPerfHistory_Internal.MANAGER;

    void getPerfInfo(
WebrtcPredictionFeatures features, int framesPerSecond, 
GetPerfInfo_Response callback);

    interface GetPerfInfo_Response extends org.chromium.mojo.bindings.Callbacks.Callback1<Boolean> { }


}
