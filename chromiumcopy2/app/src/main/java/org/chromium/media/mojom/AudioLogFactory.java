// AudioLogFactory.java is auto generated by mojom_bindings_generator.py, do not edit


// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by:
//     mojo/public/tools/bindings/mojom_bindings_generator.py
// For:
//     media/mojo/mojom/audio_logging.mojom
//

package org.chromium.media.mojom;

import androidx.annotation.IntDef;


public interface AudioLogFactory extends org.chromium.mojo.bindings.Interface {



    public interface Proxy extends AudioLogFactory, org.chromium.mojo.bindings.Interface.Proxy {
    }

    Manager<AudioLogFactory, AudioLogFactory.Proxy> MANAGER = AudioLogFactory_Internal.MANAGER;

    void createAudioLog(
int component, int componentId, org.chromium.mojo.bindings.InterfaceRequest<AudioLog> audioLogReceiver);


}
