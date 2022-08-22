// SensorInitParams.java is auto generated by mojom_bindings_generator.py, do not edit


// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by:
//     mojo/public/tools/bindings/mojom_bindings_generator.py
// For:
//     services/device/public/mojom/sensor_provider.mojom
//

package org.chromium.device.mojom;

import androidx.annotation.IntDef;


public final class SensorInitParams extends org.chromium.mojo.bindings.Struct {

    private static final int STRUCT_SIZE = 64;
    private static final org.chromium.mojo.bindings.DataHeader[] VERSION_ARRAY = new org.chromium.mojo.bindings.DataHeader[] {new org.chromium.mojo.bindings.DataHeader(64, 0)};
    private static final org.chromium.mojo.bindings.DataHeader DEFAULT_STRUCT_INFO = VERSION_ARRAY[0];

    
    public static final long READ_BUFFER_SIZE_FOR_TESTS = (long) 48;

    public Sensor sensor;
    public org.chromium.mojo.bindings.InterfaceRequest<SensorClient> clientReceiver;
    public org.chromium.mojo_base.mojom.ReadOnlySharedMemoryRegion memory;
    public long bufferOffset;
    public int mode;
    public SensorConfiguration defaultConfiguration;
    public double maximumFrequency;
    public double minimumFrequency;

    private SensorInitParams(int version) {
        super(STRUCT_SIZE, version);
    }

    public SensorInitParams() {
        this(0);
    }

    public static SensorInitParams deserialize(org.chromium.mojo.bindings.Message message) {
        return decode(new org.chromium.mojo.bindings.Decoder(message));
    }

    /**
     * Similar to the method above, but deserializes from a |ByteBuffer| instance.
     *
     * @throws org.chromium.mojo.bindings.DeserializationException on deserialization failure.
     */
    public static SensorInitParams deserialize(java.nio.ByteBuffer data) {
        return deserialize(new org.chromium.mojo.bindings.Message(
                data, new java.util.ArrayList<org.chromium.mojo.system.Handle>()));
    }

    @SuppressWarnings("unchecked")
    public static SensorInitParams decode(org.chromium.mojo.bindings.Decoder decoder0) {
        if (decoder0 == null) {
            return null;
        }
        decoder0.increaseStackDepth();
        SensorInitParams result;
        try {
            org.chromium.mojo.bindings.DataHeader mainDataHeader = decoder0.readAndValidateDataHeader(VERSION_ARRAY);
            final int elementsOrVersion = mainDataHeader.elementsOrVersion;
            result = new SensorInitParams(elementsOrVersion);
                {
                    
                result.sensor = decoder0.readServiceInterface(8, false, Sensor.MANAGER);
                }
                {
                    
                result.clientReceiver = decoder0.readInterfaceRequest(16, false);
                }
                {
                    
                result.mode = decoder0.readInt(20);
                    ReportingMode.validate(result.mode);
                    result.mode = ReportingMode.toKnownValue(result.mode);
                }
                {
                    
                org.chromium.mojo.bindings.Decoder decoder1 = decoder0.readPointer(24, false);
                result.memory = org.chromium.mojo_base.mojom.ReadOnlySharedMemoryRegion.decode(decoder1);
                }
                {
                    
                result.bufferOffset = decoder0.readLong(32);
                }
                {
                    
                org.chromium.mojo.bindings.Decoder decoder1 = decoder0.readPointer(40, false);
                result.defaultConfiguration = SensorConfiguration.decode(decoder1);
                }
                {
                    
                result.maximumFrequency = decoder0.readDouble(48);
                }
                {
                    
                result.minimumFrequency = decoder0.readDouble(56);
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
        
        encoder0.encode(this.sensor, 8, false, Sensor.MANAGER);
        
        encoder0.encode(this.clientReceiver, 16, false);
        
        encoder0.encode(this.mode, 20);
        
        encoder0.encode(this.memory, 24, false);
        
        encoder0.encode(this.bufferOffset, 32);
        
        encoder0.encode(this.defaultConfiguration, 40, false);
        
        encoder0.encode(this.maximumFrequency, 48);
        
        encoder0.encode(this.minimumFrequency, 56);
    }
}