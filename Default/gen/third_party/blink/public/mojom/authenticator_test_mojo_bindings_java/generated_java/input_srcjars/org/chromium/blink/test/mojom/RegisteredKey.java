// RegisteredKey.java is auto generated by mojom_bindings_generator.py, do not edit


// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by:
//     mojo/public/tools/bindings/mojom_bindings_generator.py
// For:
//     third_party/blink/public/mojom/webauthn/virtual_authenticator.mojom
//

package org.chromium.blink.test.mojom;

import androidx.annotation.IntDef;


public final class RegisteredKey extends org.chromium.mojo.bindings.Struct {

    private static final int STRUCT_SIZE = 40;
    private static final org.chromium.mojo.bindings.DataHeader[] VERSION_ARRAY = new org.chromium.mojo.bindings.DataHeader[] {new org.chromium.mojo.bindings.DataHeader(40, 0)};
    private static final org.chromium.mojo.bindings.DataHeader DEFAULT_STRUCT_INFO = VERSION_ARRAY[0];
    public byte[] keyHandle;
    public String rpId;
    public byte[] privateKey;
    public int counter;

    private RegisteredKey(int version) {
        super(STRUCT_SIZE, version);
    }

    public RegisteredKey() {
        this(0);
    }

    public static RegisteredKey deserialize(org.chromium.mojo.bindings.Message message) {
        return decode(new org.chromium.mojo.bindings.Decoder(message));
    }

    /**
     * Similar to the method above, but deserializes from a |ByteBuffer| instance.
     *
     * @throws org.chromium.mojo.bindings.DeserializationException on deserialization failure.
     */
    public static RegisteredKey deserialize(java.nio.ByteBuffer data) {
        return deserialize(new org.chromium.mojo.bindings.Message(
                data, new java.util.ArrayList<org.chromium.mojo.system.Handle>()));
    }

    @SuppressWarnings("unchecked")
    public static RegisteredKey decode(org.chromium.mojo.bindings.Decoder decoder0) {
        if (decoder0 == null) {
            return null;
        }
        decoder0.increaseStackDepth();
        RegisteredKey result;
        try {
            org.chromium.mojo.bindings.DataHeader mainDataHeader = decoder0.readAndValidateDataHeader(VERSION_ARRAY);
            final int elementsOrVersion = mainDataHeader.elementsOrVersion;
            result = new RegisteredKey(elementsOrVersion);
                {
                    
                result.keyHandle = decoder0.readBytes(8, org.chromium.mojo.bindings.BindingsHelper.NOTHING_NULLABLE, org.chromium.mojo.bindings.BindingsHelper.UNSPECIFIED_ARRAY_LENGTH);
                }
                {
                    
                result.rpId = decoder0.readString(16, false);
                }
                {
                    
                result.privateKey = decoder0.readBytes(24, org.chromium.mojo.bindings.BindingsHelper.NOTHING_NULLABLE, org.chromium.mojo.bindings.BindingsHelper.UNSPECIFIED_ARRAY_LENGTH);
                }
                {
                    
                result.counter = decoder0.readInt(32);
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
        
        encoder0.encode(this.keyHandle, 8, org.chromium.mojo.bindings.BindingsHelper.NOTHING_NULLABLE, org.chromium.mojo.bindings.BindingsHelper.UNSPECIFIED_ARRAY_LENGTH);
        
        encoder0.encode(this.rpId, 16, false);
        
        encoder0.encode(this.privateKey, 24, org.chromium.mojo.bindings.BindingsHelper.NOTHING_NULLABLE, org.chromium.mojo.bindings.BindingsHelper.UNSPECIFIED_ARRAY_LENGTH);
        
        encoder0.encode(this.counter, 32);
    }
}