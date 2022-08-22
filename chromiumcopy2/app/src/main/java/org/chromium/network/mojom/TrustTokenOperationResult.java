// TrustTokenOperationResult.java is auto generated by mojom_bindings_generator.py, do not edit


// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by:
//     mojo/public/tools/bindings/mojom_bindings_generator.py
// For:
//     services/network/public/mojom/trust_tokens.mojom
//

package org.chromium.network.mojom;

import androidx.annotation.IntDef;


public final class TrustTokenOperationResult extends org.chromium.mojo.bindings.Struct {

    private static final int STRUCT_SIZE = 40;
    private static final org.chromium.mojo.bindings.DataHeader[] VERSION_ARRAY = new org.chromium.mojo.bindings.DataHeader[] {new org.chromium.mojo.bindings.DataHeader(40, 0)};
    private static final org.chromium.mojo.bindings.DataHeader DEFAULT_STRUCT_INFO = VERSION_ARRAY[0];
    public int type;
    public int status;
    public org.chromium.url.internal.mojom.Origin issuer;
    public org.chromium.url.internal.mojom.Origin topLevelOrigin;
    public int issuedTokenCount;

    private TrustTokenOperationResult(int version) {
        super(STRUCT_SIZE, version);
        this.issuedTokenCount = (int) 0;
    }

    public TrustTokenOperationResult() {
        this(0);
    }

    public static TrustTokenOperationResult deserialize(org.chromium.mojo.bindings.Message message) {
        return decode(new org.chromium.mojo.bindings.Decoder(message));
    }

    /**
     * Similar to the method above, but deserializes from a |ByteBuffer| instance.
     *
     * @throws org.chromium.mojo.bindings.DeserializationException on deserialization failure.
     */
    public static TrustTokenOperationResult deserialize(java.nio.ByteBuffer data) {
        return deserialize(new org.chromium.mojo.bindings.Message(
                data, new java.util.ArrayList<org.chromium.mojo.system.Handle>()));
    }

    @SuppressWarnings("unchecked")
    public static TrustTokenOperationResult decode(org.chromium.mojo.bindings.Decoder decoder0) {
        if (decoder0 == null) {
            return null;
        }
        decoder0.increaseStackDepth();
        TrustTokenOperationResult result;
        try {
            org.chromium.mojo.bindings.DataHeader mainDataHeader = decoder0.readAndValidateDataHeader(VERSION_ARRAY);
            final int elementsOrVersion = mainDataHeader.elementsOrVersion;
            result = new TrustTokenOperationResult(elementsOrVersion);
                {
                    
                result.type = decoder0.readInt(8);
                    TrustTokenOperationType.validate(result.type);
                    result.type = TrustTokenOperationType.toKnownValue(result.type);
                }
                {
                    
                result.status = decoder0.readInt(12);
                    TrustTokenOperationStatus.validate(result.status);
                    result.status = TrustTokenOperationStatus.toKnownValue(result.status);
                }
                {
                    
                org.chromium.mojo.bindings.Decoder decoder1 = decoder0.readPointer(16, true);
                result.issuer = org.chromium.url.internal.mojom.Origin.decode(decoder1);
                }
                {
                    
                org.chromium.mojo.bindings.Decoder decoder1 = decoder0.readPointer(24, true);
                result.topLevelOrigin = org.chromium.url.internal.mojom.Origin.decode(decoder1);
                }
                {
                    
                result.issuedTokenCount = decoder0.readInt(32);
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
        
        encoder0.encode(this.type, 8);
        
        encoder0.encode(this.status, 12);
        
        encoder0.encode(this.issuer, 16, true);
        
        encoder0.encode(this.topLevelOrigin, 24, true);
        
        encoder0.encode(this.issuedTokenCount, 32);
    }
}