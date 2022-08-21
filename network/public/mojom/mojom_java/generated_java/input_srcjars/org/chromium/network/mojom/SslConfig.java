// SslConfig.java is auto generated by mojom_bindings_generator.py, do not edit


// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by:
//     mojo/public/tools/bindings/mojom_bindings_generator.py
// For:
//     services/network/public/mojom/ssl_config.mojom
//

package org.chromium.network.mojom;

import androidx.annotation.IntDef;


public final class SslConfig extends org.chromium.mojo.bindings.Struct {

    private static final int STRUCT_SIZE = 40;
    private static final org.chromium.mojo.bindings.DataHeader[] VERSION_ARRAY = new org.chromium.mojo.bindings.DataHeader[] {new org.chromium.mojo.bindings.DataHeader(40, 0)};
    private static final org.chromium.mojo.bindings.DataHeader DEFAULT_STRUCT_INFO = VERSION_ARRAY[0];
    public boolean revCheckingEnabled;
    public boolean revCheckingRequiredLocalAnchors;
    public boolean sha1LocalAnchorsEnabled;
    public boolean symantecEnforcementDisabled;
    public int versionMin;
    public int versionMax;
    public short[] disabledCipherSuites;
    public String[] clientCertPoolingPolicy;
    public boolean cecpq2Enabled;
    public boolean echEnabled;

    private SslConfig(int version) {
        super(STRUCT_SIZE, version);
        this.revCheckingEnabled = (boolean) false;
        this.revCheckingRequiredLocalAnchors = (boolean) false;
        this.sha1LocalAnchorsEnabled = (boolean) false;
        this.symantecEnforcementDisabled = (boolean) false;
        this.versionMin = (int) SslVersion.TLS12;
        this.versionMax = (int) SslVersion.TLS13;
        this.cecpq2Enabled = (boolean) true;
        this.echEnabled = (boolean) true;
    }

    public SslConfig() {
        this(0);
    }

    public static SslConfig deserialize(org.chromium.mojo.bindings.Message message) {
        return decode(new org.chromium.mojo.bindings.Decoder(message));
    }

    /**
     * Similar to the method above, but deserializes from a |ByteBuffer| instance.
     *
     * @throws org.chromium.mojo.bindings.DeserializationException on deserialization failure.
     */
    public static SslConfig deserialize(java.nio.ByteBuffer data) {
        return deserialize(new org.chromium.mojo.bindings.Message(
                data, new java.util.ArrayList<org.chromium.mojo.system.Handle>()));
    }

    @SuppressWarnings("unchecked")
    public static SslConfig decode(org.chromium.mojo.bindings.Decoder decoder0) {
        if (decoder0 == null) {
            return null;
        }
        decoder0.increaseStackDepth();
        SslConfig result;
        try {
            org.chromium.mojo.bindings.DataHeader mainDataHeader = decoder0.readAndValidateDataHeader(VERSION_ARRAY);
            final int elementsOrVersion = mainDataHeader.elementsOrVersion;
            result = new SslConfig(elementsOrVersion);
                {
                    
                result.revCheckingEnabled = decoder0.readBoolean(8, 0);
                }
                {
                    
                result.revCheckingRequiredLocalAnchors = decoder0.readBoolean(8, 1);
                }
                {
                    
                result.sha1LocalAnchorsEnabled = decoder0.readBoolean(8, 2);
                }
                {
                    
                result.symantecEnforcementDisabled = decoder0.readBoolean(8, 3);
                }
                {
                    
                result.cecpq2Enabled = decoder0.readBoolean(8, 4);
                }
                {
                    
                result.echEnabled = decoder0.readBoolean(8, 5);
                }
                {
                    
                result.versionMin = decoder0.readInt(12);
                    SslVersion.validate(result.versionMin);
                    result.versionMin = SslVersion.toKnownValue(result.versionMin);
                }
                {
                    
                result.versionMax = decoder0.readInt(16);
                    SslVersion.validate(result.versionMax);
                    result.versionMax = SslVersion.toKnownValue(result.versionMax);
                }
                {
                    
                result.disabledCipherSuites = decoder0.readShorts(24, org.chromium.mojo.bindings.BindingsHelper.NOTHING_NULLABLE, org.chromium.mojo.bindings.BindingsHelper.UNSPECIFIED_ARRAY_LENGTH);
                }
                {
                    
                org.chromium.mojo.bindings.Decoder decoder1 = decoder0.readPointer(32, false);
                {
                    org.chromium.mojo.bindings.DataHeader si1 = decoder1.readDataHeaderForPointerArray(org.chromium.mojo.bindings.BindingsHelper.UNSPECIFIED_ARRAY_LENGTH);
                    result.clientCertPoolingPolicy = new String[si1.elementsOrVersion];
                    for (int i1 = 0; i1 < si1.elementsOrVersion; ++i1) {
                        
                        result.clientCertPoolingPolicy[i1] = decoder1.readString(org.chromium.mojo.bindings.DataHeader.HEADER_SIZE + org.chromium.mojo.bindings.BindingsHelper.POINTER_SIZE * i1, false);
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
        
        encoder0.encode(this.revCheckingEnabled, 8, 0);
        
        encoder0.encode(this.revCheckingRequiredLocalAnchors, 8, 1);
        
        encoder0.encode(this.sha1LocalAnchorsEnabled, 8, 2);
        
        encoder0.encode(this.symantecEnforcementDisabled, 8, 3);
        
        encoder0.encode(this.cecpq2Enabled, 8, 4);
        
        encoder0.encode(this.echEnabled, 8, 5);
        
        encoder0.encode(this.versionMin, 12);
        
        encoder0.encode(this.versionMax, 16);
        
        encoder0.encode(this.disabledCipherSuites, 24, org.chromium.mojo.bindings.BindingsHelper.NOTHING_NULLABLE, org.chromium.mojo.bindings.BindingsHelper.UNSPECIFIED_ARRAY_LENGTH);
        
        if (this.clientCertPoolingPolicy == null) {
            encoder0.encodeNullPointer(32, false);
        } else {
            org.chromium.mojo.bindings.Encoder encoder1 = encoder0.encodePointerArray(this.clientCertPoolingPolicy.length, 32, org.chromium.mojo.bindings.BindingsHelper.UNSPECIFIED_ARRAY_LENGTH);
            for (int i0 = 0; i0 < this.clientCertPoolingPolicy.length; ++i0) {
                
                encoder1.encode(this.clientCertPoolingPolicy[i0], org.chromium.mojo.bindings.DataHeader.HEADER_SIZE + org.chromium.mojo.bindings.BindingsHelper.POINTER_SIZE * i0, false);
            }
        }
    }
}