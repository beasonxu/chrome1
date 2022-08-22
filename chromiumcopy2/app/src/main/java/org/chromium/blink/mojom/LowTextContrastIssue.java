// LowTextContrastIssue.java is auto generated by mojom_bindings_generator.py, do not edit


// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by:
//     mojo/public/tools/bindings/mojom_bindings_generator.py
// For:
//     third_party/blink/public/mojom/devtools/inspector_issue.mojom
//

package org.chromium.blink.mojom;

import androidx.annotation.IntDef;


public final class LowTextContrastIssue extends org.chromium.mojo.bindings.Struct {

    private static final int STRUCT_SIZE = 48;
    private static final org.chromium.mojo.bindings.DataHeader[] VERSION_ARRAY = new org.chromium.mojo.bindings.DataHeader[] {new org.chromium.mojo.bindings.DataHeader(48, 0)};
    private static final org.chromium.mojo.bindings.DataHeader DEFAULT_STRUCT_INFO = VERSION_ARRAY[0];
    public int violatingNodeId;
    public String violatingNodeSelector;
    public float contrastRatio;
    public float thresholdAa;
    public float thresholdAaa;
    public String fontSize;
    public String fontWeight;

    private LowTextContrastIssue(int version) {
        super(STRUCT_SIZE, version);
    }

    public LowTextContrastIssue() {
        this(0);
    }

    public static LowTextContrastIssue deserialize(org.chromium.mojo.bindings.Message message) {
        return decode(new org.chromium.mojo.bindings.Decoder(message));
    }

    /**
     * Similar to the method above, but deserializes from a |ByteBuffer| instance.
     *
     * @throws org.chromium.mojo.bindings.DeserializationException on deserialization failure.
     */
    public static LowTextContrastIssue deserialize(java.nio.ByteBuffer data) {
        return deserialize(new org.chromium.mojo.bindings.Message(
                data, new java.util.ArrayList<org.chromium.mojo.system.Handle>()));
    }

    @SuppressWarnings("unchecked")
    public static LowTextContrastIssue decode(org.chromium.mojo.bindings.Decoder decoder0) {
        if (decoder0 == null) {
            return null;
        }
        decoder0.increaseStackDepth();
        LowTextContrastIssue result;
        try {
            org.chromium.mojo.bindings.DataHeader mainDataHeader = decoder0.readAndValidateDataHeader(VERSION_ARRAY);
            final int elementsOrVersion = mainDataHeader.elementsOrVersion;
            result = new LowTextContrastIssue(elementsOrVersion);
                {
                    
                result.violatingNodeId = decoder0.readInt(8);
                }
                {
                    
                result.contrastRatio = decoder0.readFloat(12);
                }
                {
                    
                result.violatingNodeSelector = decoder0.readString(16, false);
                }
                {
                    
                result.thresholdAa = decoder0.readFloat(24);
                }
                {
                    
                result.thresholdAaa = decoder0.readFloat(28);
                }
                {
                    
                result.fontSize = decoder0.readString(32, false);
                }
                {
                    
                result.fontWeight = decoder0.readString(40, false);
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
        
        encoder0.encode(this.violatingNodeId, 8);
        
        encoder0.encode(this.contrastRatio, 12);
        
        encoder0.encode(this.violatingNodeSelector, 16, false);
        
        encoder0.encode(this.thresholdAa, 24);
        
        encoder0.encode(this.thresholdAaa, 28);
        
        encoder0.encode(this.fontSize, 32, false);
        
        encoder0.encode(this.fontWeight, 40, false);
    }
}