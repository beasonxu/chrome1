// ManifestLaunchHandler.java is auto generated by mojom_bindings_generator.py, do not edit


// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by:
//     mojo/public/tools/bindings/mojom_bindings_generator.py
// For:
//     third_party/blink/public/mojom/manifest/manifest_launch_handler.mojom
//

package org.chromium.blink.mojom;

import androidx.annotation.IntDef;


public final class ManifestLaunchHandler extends org.chromium.mojo.bindings.Struct {

    private static final int STRUCT_SIZE = 16;
    private static final org.chromium.mojo.bindings.DataHeader[] VERSION_ARRAY = new org.chromium.mojo.bindings.DataHeader[] {new org.chromium.mojo.bindings.DataHeader(16, 0)};
    private static final org.chromium.mojo.bindings.DataHeader DEFAULT_STRUCT_INFO = VERSION_ARRAY[0];

    public static final class ClientMode {
        private static final boolean IS_EXTENSIBLE = false;
        @IntDef({

            ClientMode.AUTO,
            ClientMode.NAVIGATE_NEW,
            ClientMode.NAVIGATE_EXISTING,
            ClientMode.FOCUS_EXISTING})
        public @interface EnumType {}

        public static final int AUTO = 0;
        public static final int NAVIGATE_NEW = 1;
        public static final int NAVIGATE_EXISTING = 2;
        public static final int FOCUS_EXISTING = 3;
        public static final int MIN_VALUE = 0;
        public static final int MAX_VALUE = 3;

        public static boolean isKnownValue(int value) {
            return value >= 0 && value <= 3;
        }

        public static void validate(int value) {
            if (IS_EXTENSIBLE || isKnownValue(value)) return;
            throw new org.chromium.mojo.bindings.DeserializationException("Invalid enum value.");
        }

        public static int toKnownValue(int value) {
          return value;
        }

        private ClientMode() {}
    }
    public int clientMode;

    private ManifestLaunchHandler(int version) {
        super(STRUCT_SIZE, version);
    }

    public ManifestLaunchHandler() {
        this(0);
    }

    public static ManifestLaunchHandler deserialize(org.chromium.mojo.bindings.Message message) {
        return decode(new org.chromium.mojo.bindings.Decoder(message));
    }

    /**
     * Similar to the method above, but deserializes from a |ByteBuffer| instance.
     *
     * @throws org.chromium.mojo.bindings.DeserializationException on deserialization failure.
     */
    public static ManifestLaunchHandler deserialize(java.nio.ByteBuffer data) {
        return deserialize(new org.chromium.mojo.bindings.Message(
                data, new java.util.ArrayList<org.chromium.mojo.system.Handle>()));
    }

    @SuppressWarnings("unchecked")
    public static ManifestLaunchHandler decode(org.chromium.mojo.bindings.Decoder decoder0) {
        if (decoder0 == null) {
            return null;
        }
        decoder0.increaseStackDepth();
        ManifestLaunchHandler result;
        try {
            org.chromium.mojo.bindings.DataHeader mainDataHeader = decoder0.readAndValidateDataHeader(VERSION_ARRAY);
            final int elementsOrVersion = mainDataHeader.elementsOrVersion;
            result = new ManifestLaunchHandler(elementsOrVersion);
                {
                    
                result.clientMode = decoder0.readInt(8);
                    ManifestLaunchHandler.ClientMode.validate(result.clientMode);
                    result.clientMode = ManifestLaunchHandler.ClientMode.toKnownValue(result.clientMode);
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
        
        encoder0.encode(this.clientMode, 8);
    }
}