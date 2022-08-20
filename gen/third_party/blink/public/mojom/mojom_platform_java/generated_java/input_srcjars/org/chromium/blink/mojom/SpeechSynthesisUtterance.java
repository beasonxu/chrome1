// SpeechSynthesisUtterance.java is auto generated by mojom_bindings_generator.py, do not edit


// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by:
//     mojo/public/tools/bindings/mojom_bindings_generator.py
// For:
//     third_party/blink/public/mojom/speech/speech_synthesis.mojom
//

package org.chromium.blink.mojom;

import androidx.annotation.IntDef;


public final class SpeechSynthesisUtterance extends org.chromium.mojo.bindings.Struct {

    private static final int STRUCT_SIZE = 56;
    private static final org.chromium.mojo.bindings.DataHeader[] VERSION_ARRAY = new org.chromium.mojo.bindings.DataHeader[] {new org.chromium.mojo.bindings.DataHeader(56, 0)};
    private static final org.chromium.mojo.bindings.DataHeader DEFAULT_STRUCT_INFO = VERSION_ARRAY[0];
    public String text;
    public String lang;
    public String voice;
    public double volume;
    public double rate;
    public double pitch;

    private SpeechSynthesisUtterance(int version) {
        super(STRUCT_SIZE, version);
    }

    public SpeechSynthesisUtterance() {
        this(0);
    }

    public static SpeechSynthesisUtterance deserialize(org.chromium.mojo.bindings.Message message) {
        return decode(new org.chromium.mojo.bindings.Decoder(message));
    }

    /**
     * Similar to the method above, but deserializes from a |ByteBuffer| instance.
     *
     * @throws org.chromium.mojo.bindings.DeserializationException on deserialization failure.
     */
    public static SpeechSynthesisUtterance deserialize(java.nio.ByteBuffer data) {
        return deserialize(new org.chromium.mojo.bindings.Message(
                data, new java.util.ArrayList<org.chromium.mojo.system.Handle>()));
    }

    @SuppressWarnings("unchecked")
    public static SpeechSynthesisUtterance decode(org.chromium.mojo.bindings.Decoder decoder0) {
        if (decoder0 == null) {
            return null;
        }
        decoder0.increaseStackDepth();
        SpeechSynthesisUtterance result;
        try {
            org.chromium.mojo.bindings.DataHeader mainDataHeader = decoder0.readAndValidateDataHeader(VERSION_ARRAY);
            final int elementsOrVersion = mainDataHeader.elementsOrVersion;
            result = new SpeechSynthesisUtterance(elementsOrVersion);
                {
                    
                result.text = decoder0.readString(8, false);
                }
                {
                    
                result.lang = decoder0.readString(16, false);
                }
                {
                    
                result.voice = decoder0.readString(24, false);
                }
                {
                    
                result.volume = decoder0.readDouble(32);
                }
                {
                    
                result.rate = decoder0.readDouble(40);
                }
                {
                    
                result.pitch = decoder0.readDouble(48);
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
        
        encoder0.encode(this.text, 8, false);
        
        encoder0.encode(this.lang, 16, false);
        
        encoder0.encode(this.voice, 24, false);
        
        encoder0.encode(this.volume, 32);
        
        encoder0.encode(this.rate, 40);
        
        encoder0.encode(this.pitch, 48);
    }
}