// AuthChallengeInfo.java is auto generated by mojom_bindings_generator.py, do not edit


// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by:
//     mojo/public/tools/bindings/mojom_bindings_generator.py
// For:
//     services/network/public/mojom/network_param.mojom
//

package org.chromium.network.mojom;

import androidx.annotation.IntDef;


public final class AuthChallengeInfo extends org.chromium.mojo.bindings.Struct {

    private static final int STRUCT_SIZE = 56;
    private static final org.chromium.mojo.bindings.DataHeader[] VERSION_ARRAY = new org.chromium.mojo.bindings.DataHeader[] {new org.chromium.mojo.bindings.DataHeader(56, 0)};
    private static final org.chromium.mojo.bindings.DataHeader DEFAULT_STRUCT_INFO = VERSION_ARRAY[0];
    public boolean isProxy;
    public org.chromium.url.mojom.SchemeHostPort challenger;
    public String scheme;
    public String realm;
    public String challenge;
    public String path;

    private AuthChallengeInfo(int version) {
        super(STRUCT_SIZE, version);
    }

    public AuthChallengeInfo() {
        this(0);
    }

    public static AuthChallengeInfo deserialize(org.chromium.mojo.bindings.Message message) {
        return decode(new org.chromium.mojo.bindings.Decoder(message));
    }

    /**
     * Similar to the method above, but deserializes from a |ByteBuffer| instance.
     *
     * @throws org.chromium.mojo.bindings.DeserializationException on deserialization failure.
     */
    public static AuthChallengeInfo deserialize(java.nio.ByteBuffer data) {
        return deserialize(new org.chromium.mojo.bindings.Message(
                data, new java.util.ArrayList<org.chromium.mojo.system.Handle>()));
    }

    @SuppressWarnings("unchecked")
    public static AuthChallengeInfo decode(org.chromium.mojo.bindings.Decoder decoder0) {
        if (decoder0 == null) {
            return null;
        }
        decoder0.increaseStackDepth();
        AuthChallengeInfo result;
        try {
            org.chromium.mojo.bindings.DataHeader mainDataHeader = decoder0.readAndValidateDataHeader(VERSION_ARRAY);
            final int elementsOrVersion = mainDataHeader.elementsOrVersion;
            result = new AuthChallengeInfo(elementsOrVersion);
                {
                    
                result.isProxy = decoder0.readBoolean(8, 0);
                }
                {
                    
                org.chromium.mojo.bindings.Decoder decoder1 = decoder0.readPointer(16, false);
                result.challenger = org.chromium.url.mojom.SchemeHostPort.decode(decoder1);
                }
                {
                    
                result.scheme = decoder0.readString(24, false);
                }
                {
                    
                result.realm = decoder0.readString(32, false);
                }
                {
                    
                result.challenge = decoder0.readString(40, false);
                }
                {
                    
                result.path = decoder0.readString(48, false);
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
        
        encoder0.encode(this.isProxy, 8, 0);
        
        encoder0.encode(this.challenger, 16, false);
        
        encoder0.encode(this.scheme, 24, false);
        
        encoder0.encode(this.realm, 32, false);
        
        encoder0.encode(this.challenge, 40, false);
        
        encoder0.encode(this.path, 48, false);
    }
}