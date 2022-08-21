// VideoCaptureFeedback.java is auto generated by mojom_bindings_generator.py, do not edit


// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by:
//     mojo/public/tools/bindings/mojom_bindings_generator.py
// For:
//     media/capture/mojom/video_capture_types.mojom
//

package org.chromium.media.mojom;

import androidx.annotation.IntDef;


public final class VideoCaptureFeedback extends org.chromium.mojo.bindings.Struct {

    private static final int STRUCT_SIZE = 40;
    private static final org.chromium.mojo.bindings.DataHeader[] VERSION_ARRAY = new org.chromium.mojo.bindings.DataHeader[] {new org.chromium.mojo.bindings.DataHeader(32, 0),new org.chromium.mojo.bindings.DataHeader(40, 1),new org.chromium.mojo.bindings.DataHeader(40, 2)};
    private static final org.chromium.mojo.bindings.DataHeader DEFAULT_STRUCT_INFO = VERSION_ARRAY[2];
    public double resourceUtilization;
    public float maxFramerateFps;
    public int maxPixels;
    public boolean requireMappedFrame;
    public org.chromium.gfx.mojom.Size[] mappedSizes;
    public int frameId;
    public boolean hasFrameId;

    private VideoCaptureFeedback(int version) {
        super(STRUCT_SIZE, version);
        this.frameId = (int) 0;
        this.hasFrameId = (boolean) false;
    }

    public VideoCaptureFeedback() {
        this(2);
    }

    public static VideoCaptureFeedback deserialize(org.chromium.mojo.bindings.Message message) {
        return decode(new org.chromium.mojo.bindings.Decoder(message));
    }

    /**
     * Similar to the method above, but deserializes from a |ByteBuffer| instance.
     *
     * @throws org.chromium.mojo.bindings.DeserializationException on deserialization failure.
     */
    public static VideoCaptureFeedback deserialize(java.nio.ByteBuffer data) {
        return deserialize(new org.chromium.mojo.bindings.Message(
                data, new java.util.ArrayList<org.chromium.mojo.system.Handle>()));
    }

    @SuppressWarnings("unchecked")
    public static VideoCaptureFeedback decode(org.chromium.mojo.bindings.Decoder decoder0) {
        if (decoder0 == null) {
            return null;
        }
        decoder0.increaseStackDepth();
        VideoCaptureFeedback result;
        try {
            org.chromium.mojo.bindings.DataHeader mainDataHeader = decoder0.readAndValidateDataHeader(VERSION_ARRAY);
            final int elementsOrVersion = mainDataHeader.elementsOrVersion;
            result = new VideoCaptureFeedback(elementsOrVersion);
                {
                    
                result.resourceUtilization = decoder0.readDouble(8);
                }
                {
                    
                result.maxFramerateFps = decoder0.readFloat(16);
                }
                {
                    
                result.maxPixels = decoder0.readInt(20);
                }
                {
                    
                result.requireMappedFrame = decoder0.readBoolean(24, 0);
                }
            if (elementsOrVersion >= 2) {
                {
                    
                result.hasFrameId = decoder0.readBoolean(24, 1);
                }
                {
                    
                result.frameId = decoder0.readInt(28);
                }
            }
            if (elementsOrVersion >= 1) {
                {
                    
                org.chromium.mojo.bindings.Decoder decoder1 = decoder0.readPointer(32, true);
                if (decoder1 == null) {
                    result.mappedSizes = null;
                } else {
                    org.chromium.mojo.bindings.DataHeader si1 = decoder1.readDataHeaderForPointerArray(org.chromium.mojo.bindings.BindingsHelper.UNSPECIFIED_ARRAY_LENGTH);
                    result.mappedSizes = new org.chromium.gfx.mojom.Size[si1.elementsOrVersion];
                    for (int i1 = 0; i1 < si1.elementsOrVersion; ++i1) {
                        
                        org.chromium.mojo.bindings.Decoder decoder2 = decoder1.readPointer(org.chromium.mojo.bindings.DataHeader.HEADER_SIZE + org.chromium.mojo.bindings.BindingsHelper.POINTER_SIZE * i1, false);
                        result.mappedSizes[i1] = org.chromium.gfx.mojom.Size.decode(decoder2);
                    }
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
        
        encoder0.encode(this.resourceUtilization, 8);
        
        encoder0.encode(this.maxFramerateFps, 16);
        
        encoder0.encode(this.maxPixels, 20);
        
        encoder0.encode(this.requireMappedFrame, 24, 0);
        
        encoder0.encode(this.hasFrameId, 24, 1);
        
        encoder0.encode(this.frameId, 28);
        
        if (this.mappedSizes == null) {
            encoder0.encodeNullPointer(32, true);
        } else {
            org.chromium.mojo.bindings.Encoder encoder1 = encoder0.encodePointerArray(this.mappedSizes.length, 32, org.chromium.mojo.bindings.BindingsHelper.UNSPECIFIED_ARRAY_LENGTH);
            for (int i0 = 0; i0 < this.mappedSizes.length; ++i0) {
                
                encoder1.encode(this.mappedSizes[i0], org.chromium.mojo.bindings.DataHeader.HEADER_SIZE + org.chromium.mojo.bindings.BindingsHelper.POINTER_SIZE * i0, false);
            }
        }
    }
}