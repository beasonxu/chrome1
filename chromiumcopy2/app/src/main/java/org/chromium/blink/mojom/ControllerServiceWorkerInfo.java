// ControllerServiceWorkerInfo.java is auto generated by mojom_bindings_generator.py, do not edit


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


public final class ControllerServiceWorkerInfo extends org.chromium.mojo.bindings.Struct {

    private static final int STRUCT_SIZE = 56;
    private static final org.chromium.mojo.bindings.DataHeader[] VERSION_ARRAY = new org.chromium.mojo.bindings.DataHeader[] {new org.chromium.mojo.bindings.DataHeader(56, 0)};
    private static final org.chromium.mojo.bindings.DataHeader DEFAULT_STRUCT_INFO = VERSION_ARRAY[0];
    public int mode;
    public ControllerServiceWorker remoteController;
    public String clientId;
    public org.chromium.mojo_base.mojom.UnguessableToken fetchRequestWindowId;
    public ServiceWorkerObjectInfo objectInfo;
    public int[] usedFeatures;

    private ControllerServiceWorkerInfo(int version) {
        super(STRUCT_SIZE, version);
        this.mode = (int) ControllerServiceWorkerMode.NO_CONTROLLER;
    }

    public ControllerServiceWorkerInfo() {
        this(0);
    }

    public static ControllerServiceWorkerInfo deserialize(org.chromium.mojo.bindings.Message message) {
        return decode(new org.chromium.mojo.bindings.Decoder(message));
    }

    /**
     * Similar to the method above, but deserializes from a |ByteBuffer| instance.
     *
     * @throws org.chromium.mojo.bindings.DeserializationException on deserialization failure.
     */
    public static ControllerServiceWorkerInfo deserialize(java.nio.ByteBuffer data) {
        return deserialize(new org.chromium.mojo.bindings.Message(
                data, new java.util.ArrayList<org.chromium.mojo.system.Handle>()));
    }

    @SuppressWarnings("unchecked")
    public static ControllerServiceWorkerInfo decode(org.chromium.mojo.bindings.Decoder decoder0) {
        if (decoder0 == null) {
            return null;
        }
        decoder0.increaseStackDepth();
        ControllerServiceWorkerInfo result;
        try {
            org.chromium.mojo.bindings.DataHeader mainDataHeader = decoder0.readAndValidateDataHeader(VERSION_ARRAY);
            final int elementsOrVersion = mainDataHeader.elementsOrVersion;
            result = new ControllerServiceWorkerInfo(elementsOrVersion);
                {
                    
                result.mode = decoder0.readInt(8);
                    ControllerServiceWorkerMode.validate(result.mode);
                    result.mode = ControllerServiceWorkerMode.toKnownValue(result.mode);
                }
                {
                    
                result.remoteController = decoder0.readServiceInterface(12, true, ControllerServiceWorker.MANAGER);
                }
                {
                    
                result.clientId = decoder0.readString(24, false);
                }
                {
                    
                org.chromium.mojo.bindings.Decoder decoder1 = decoder0.readPointer(32, true);
                result.fetchRequestWindowId = org.chromium.mojo_base.mojom.UnguessableToken.decode(decoder1);
                }
                {
                    
                org.chromium.mojo.bindings.Decoder decoder1 = decoder0.readPointer(40, true);
                result.objectInfo = ServiceWorkerObjectInfo.decode(decoder1);
                }
                {
                    
                result.usedFeatures = decoder0.readInts(48, org.chromium.mojo.bindings.BindingsHelper.NOTHING_NULLABLE, org.chromium.mojo.bindings.BindingsHelper.UNSPECIFIED_ARRAY_LENGTH);
                {
                    for (int i1 = 0; i1 < result.usedFeatures.length; ++i1) {
                        WebFeature.validate(result.usedFeatures[i1]);
                    }
                }
                }

        } finally {
            decoder0.decreaseStackDepth();
        }
        return result;
    }

    @SuppressWarnings("unchecked")
    @Override
    protected final void encode(org.chromium.mojo.bindings.Encoder encoder) {
        org.chromium.mojo.bindings.Encoder encoder0 = encoder.getEncoderAtDataOffset(DEFAULT_STRUCT_INFO);
        
        encoder0.encode(this.mode, 8);
        
        encoder0.encode(this.remoteController, 12, true, ControllerServiceWorker.MANAGER);
        
        encoder0.encode(this.clientId, 24, false);
        
        encoder0.encode(this.fetchRequestWindowId, 32, true);
        
        encoder0.encode(this.objectInfo, 40, true);
        
        encoder0.encode(this.usedFeatures, 48, org.chromium.mojo.bindings.BindingsHelper.NOTHING_NULLABLE, org.chromium.mojo.bindings.BindingsHelper.UNSPECIFIED_ARRAY_LENGTH);
    }
}