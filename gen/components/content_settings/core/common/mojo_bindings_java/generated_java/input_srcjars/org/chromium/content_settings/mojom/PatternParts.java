// PatternParts.java is auto generated by mojom_bindings_generator.py, do not edit


// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by:
//     mojo/public/tools/bindings/mojom_bindings_generator.py
// For:
//     components/content_settings/core/common/content_settings.mojom
//

package org.chromium.content_settings.mojom;

import androidx.annotation.IntDef;


public final class PatternParts extends org.chromium.mojo.bindings.Struct {

    private static final int STRUCT_SIZE = 48;
    private static final org.chromium.mojo.bindings.DataHeader[] VERSION_ARRAY = new org.chromium.mojo.bindings.DataHeader[] {new org.chromium.mojo.bindings.DataHeader(48, 0)};
    private static final org.chromium.mojo.bindings.DataHeader DEFAULT_STRUCT_INFO = VERSION_ARRAY[0];
    public String scheme;
    public boolean isSchemeWildcard;
    public String host;
    public boolean hasDomainWildcard;
    public String port;
    public boolean isPortWildcard;
    public String path;
    public boolean isPathWildcard;

    private PatternParts(int version) {
        super(STRUCT_SIZE, version);
    }

    public PatternParts() {
        this(0);
    }

    public static PatternParts deserialize(org.chromium.mojo.bindings.Message message) {
        return decode(new org.chromium.mojo.bindings.Decoder(message));
    }

    /**
     * Similar to the method above, but deserializes from a |ByteBuffer| instance.
     *
     * @throws org.chromium.mojo.bindings.DeserializationException on deserialization failure.
     */
    public static PatternParts deserialize(java.nio.ByteBuffer data) {
        return deserialize(new org.chromium.mojo.bindings.Message(
                data, new java.util.ArrayList<org.chromium.mojo.system.Handle>()));
    }

    @SuppressWarnings("unchecked")
    public static PatternParts decode(org.chromium.mojo.bindings.Decoder decoder0) {
        if (decoder0 == null) {
            return null;
        }
        decoder0.increaseStackDepth();
        PatternParts result;
        try {
            org.chromium.mojo.bindings.DataHeader mainDataHeader = decoder0.readAndValidateDataHeader(VERSION_ARRAY);
            final int elementsOrVersion = mainDataHeader.elementsOrVersion;
            result = new PatternParts(elementsOrVersion);
                {
                    
                result.scheme = decoder0.readString(8, false);
                }
                {
                    
                result.isSchemeWildcard = decoder0.readBoolean(16, 0);
                }
                {
                    
                result.hasDomainWildcard = decoder0.readBoolean(16, 1);
                }
                {
                    
                result.isPortWildcard = decoder0.readBoolean(16, 2);
                }
                {
                    
                result.isPathWildcard = decoder0.readBoolean(16, 3);
                }
                {
                    
                result.host = decoder0.readString(24, false);
                }
                {
                    
                result.port = decoder0.readString(32, false);
                }
                {
                    
                result.path = decoder0.readString(40, false);
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
        
        encoder0.encode(this.scheme, 8, false);
        
        encoder0.encode(this.isSchemeWildcard, 16, 0);
        
        encoder0.encode(this.hasDomainWildcard, 16, 1);
        
        encoder0.encode(this.isPortWildcard, 16, 2);
        
        encoder0.encode(this.isPathWildcard, 16, 3);
        
        encoder0.encode(this.host, 24, false);
        
        encoder0.encode(this.port, 32, false);
        
        encoder0.encode(this.path, 40, false);
    }
}