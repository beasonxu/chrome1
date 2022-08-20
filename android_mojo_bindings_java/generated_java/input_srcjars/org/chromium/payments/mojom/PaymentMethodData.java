// PaymentMethodData.java is auto generated by mojom_bindings_generator.py, do not edit


// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by:
//     mojo/public/tools/bindings/mojom_bindings_generator.py
// For:
//     third_party/blink/public/mojom/payments/payment_request.mojom
//

package org.chromium.payments.mojom;

import androidx.annotation.IntDef;


public final class PaymentMethodData extends org.chromium.mojo.bindings.Struct {

    private static final int STRUCT_SIZE = 56;
    private static final org.chromium.mojo.bindings.DataHeader[] VERSION_ARRAY = new org.chromium.mojo.bindings.DataHeader[] {new org.chromium.mojo.bindings.DataHeader(56, 0)};
    private static final org.chromium.mojo.bindings.DataHeader DEFAULT_STRUCT_INFO = VERSION_ARRAY[0];
    public String supportedMethod;
    public String stringifiedData;
    public int environment;
    public int minGooglePlayServicesVersion;
    public int apiVersion;
    public int[] supportedNetworks;
    public SecurePaymentConfirmationRequest securePaymentConfirmation;

    private PaymentMethodData(int version) {
        super(STRUCT_SIZE, version);
    }

    public PaymentMethodData() {
        this(0);
    }

    public static PaymentMethodData deserialize(org.chromium.mojo.bindings.Message message) {
        return decode(new org.chromium.mojo.bindings.Decoder(message));
    }

    /**
     * Similar to the method above, but deserializes from a |ByteBuffer| instance.
     *
     * @throws org.chromium.mojo.bindings.DeserializationException on deserialization failure.
     */
    public static PaymentMethodData deserialize(java.nio.ByteBuffer data) {
        return deserialize(new org.chromium.mojo.bindings.Message(
                data, new java.util.ArrayList<org.chromium.mojo.system.Handle>()));
    }

    @SuppressWarnings("unchecked")
    public static PaymentMethodData decode(org.chromium.mojo.bindings.Decoder decoder0) {
        if (decoder0 == null) {
            return null;
        }
        decoder0.increaseStackDepth();
        PaymentMethodData result;
        try {
            org.chromium.mojo.bindings.DataHeader mainDataHeader = decoder0.readAndValidateDataHeader(VERSION_ARRAY);
            final int elementsOrVersion = mainDataHeader.elementsOrVersion;
            result = new PaymentMethodData(elementsOrVersion);
                {
                    
                result.supportedMethod = decoder0.readString(8, false);
                }
                {
                    
                result.stringifiedData = decoder0.readString(16, false);
                }
                {
                    
                result.environment = decoder0.readInt(24);
                    AndroidPayEnvironment.validate(result.environment);
                    result.environment = AndroidPayEnvironment.toKnownValue(result.environment);
                }
                {
                    
                result.minGooglePlayServicesVersion = decoder0.readInt(28);
                }
                {
                    
                result.apiVersion = decoder0.readInt(32);
                }
                {
                    
                result.supportedNetworks = decoder0.readInts(40, org.chromium.mojo.bindings.BindingsHelper.NOTHING_NULLABLE, org.chromium.mojo.bindings.BindingsHelper.UNSPECIFIED_ARRAY_LENGTH);
                {
                    for (int i1 = 0; i1 < result.supportedNetworks.length; ++i1) {
                        BasicCardNetwork.validate(result.supportedNetworks[i1]);
                    }
                }
                }
                {
                    
                org.chromium.mojo.bindings.Decoder decoder1 = decoder0.readPointer(48, true);
                result.securePaymentConfirmation = SecurePaymentConfirmationRequest.decode(decoder1);
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
        
        encoder0.encode(this.supportedMethod, 8, false);
        
        encoder0.encode(this.stringifiedData, 16, false);
        
        encoder0.encode(this.environment, 24);
        
        encoder0.encode(this.minGooglePlayServicesVersion, 28);
        
        encoder0.encode(this.apiVersion, 32);
        
        encoder0.encode(this.supportedNetworks, 40, org.chromium.mojo.bindings.BindingsHelper.NOTHING_NULLABLE, org.chromium.mojo.bindings.BindingsHelper.UNSPECIFIED_ARRAY_LENGTH);
        
        encoder0.encode(this.securePaymentConfirmation, 48, true);
    }
}