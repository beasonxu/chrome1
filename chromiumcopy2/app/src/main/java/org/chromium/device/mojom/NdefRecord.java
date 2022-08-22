// NdefRecord.java is auto generated by mojom_bindings_generator.py, do not edit


// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by:
//     mojo/public/tools/bindings/mojom_bindings_generator.py
// For:
//     services/device/public/mojom/nfc.mojom
//

package org.chromium.device.mojom;

import androidx.annotation.IntDef;


public final class NdefRecord extends org.chromium.mojo.bindings.Struct {

    private static final int STRUCT_SIZE = 72;
    private static final org.chromium.mojo.bindings.DataHeader[] VERSION_ARRAY = new org.chromium.mojo.bindings.DataHeader[] {new org.chromium.mojo.bindings.DataHeader(72, 0)};
    private static final org.chromium.mojo.bindings.DataHeader DEFAULT_STRUCT_INFO = VERSION_ARRAY[0];
    public int category;
    public String recordType;
    public String mediaType;
    public String id;
    public String encoding;
    public String lang;
    public byte[] data;
    public NdefMessage payloadMessage;

    private NdefRecord(int version) {
        super(STRUCT_SIZE, version);
    }

    public NdefRecord() {
        this(0);
    }

    public static NdefRecord deserialize(org.chromium.mojo.bindings.Message message) {
        return decode(new org.chromium.mojo.bindings.Decoder(message));
    }

    /**
     * Similar to the method above, but deserializes from a |ByteBuffer| instance.
     *
     * @throws org.chromium.mojo.bindings.DeserializationException on deserialization failure.
     */
    public static NdefRecord deserialize(java.nio.ByteBuffer data) {
        return deserialize(new org.chromium.mojo.bindings.Message(
                data, new java.util.ArrayList<org.chromium.mojo.system.Handle>()));
    }

    @SuppressWarnings("unchecked")
    public static NdefRecord decode(org.chromium.mojo.bindings.Decoder decoder0) {
        if (decoder0 == null) {
            return null;
        }
        decoder0.increaseStackDepth();
        NdefRecord result;
        try {
            org.chromium.mojo.bindings.DataHeader mainDataHeader = decoder0.readAndValidateDataHeader(VERSION_ARRAY);
            final int elementsOrVersion = mainDataHeader.elementsOrVersion;
            result = new NdefRecord(elementsOrVersion);
                {
                    
                result.category = decoder0.readInt(8);
                    NdefRecordTypeCategory.validate(result.category);
                    result.category = NdefRecordTypeCategory.toKnownValue(result.category);
                }
                {
                    
                result.recordType = decoder0.readString(16, false);
                }
                {
                    
                result.mediaType = decoder0.readString(24, true);
                }
                {
                    
                result.id = decoder0.readString(32, true);
                }
                {
                    
                result.encoding = decoder0.readString(40, true);
                }
                {
                    
                result.lang = decoder0.readString(48, true);
                }
                {
                    
                result.data = decoder0.readBytes(56, org.chromium.mojo.bindings.BindingsHelper.NOTHING_NULLABLE, org.chromium.mojo.bindings.BindingsHelper.UNSPECIFIED_ARRAY_LENGTH);
                }
                {
                    
                org.chromium.mojo.bindings.Decoder decoder1 = decoder0.readPointer(64, true);
                result.payloadMessage = NdefMessage.decode(decoder1);
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
        
        encoder0.encode(this.category, 8);
        
        encoder0.encode(this.recordType, 16, false);
        
        encoder0.encode(this.mediaType, 24, true);
        
        encoder0.encode(this.id, 32, true);
        
        encoder0.encode(this.encoding, 40, true);
        
        encoder0.encode(this.lang, 48, true);
        
        encoder0.encode(this.data, 56, org.chromium.mojo.bindings.BindingsHelper.NOTHING_NULLABLE, org.chromium.mojo.bindings.BindingsHelper.UNSPECIFIED_ARRAY_LENGTH);
        
        encoder0.encode(this.payloadMessage, 64, true);
    }
}