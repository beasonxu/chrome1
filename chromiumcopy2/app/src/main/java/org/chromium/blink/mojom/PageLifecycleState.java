// PageLifecycleState.java is auto generated by mojom_bindings_generator.py, do not edit


// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by:
//     mojo/public/tools/bindings/mojom_bindings_generator.py
// For:
//     third_party/blink/public/mojom/page/page.mojom
//

package org.chromium.blink.mojom;

import androidx.annotation.IntDef;


public final class PageLifecycleState extends org.chromium.mojo.bindings.Struct {

    private static final int STRUCT_SIZE = 24;
    private static final org.chromium.mojo.bindings.DataHeader[] VERSION_ARRAY = new org.chromium.mojo.bindings.DataHeader[] {new org.chromium.mojo.bindings.DataHeader(24, 0)};
    private static final org.chromium.mojo.bindings.DataHeader DEFAULT_STRUCT_INFO = VERSION_ARRAY[0];
    public boolean isFrozen;
    public int visibility;
    public boolean isInBackForwardCache;
    public int pagehideDispatch;
    public boolean evictionEnabled;
    public boolean shouldDispatchPageshowForDebugging;

    private PageLifecycleState(int version) {
        super(STRUCT_SIZE, version);
    }

    public PageLifecycleState() {
        this(0);
    }

    public static PageLifecycleState deserialize(org.chromium.mojo.bindings.Message message) {
        return decode(new org.chromium.mojo.bindings.Decoder(message));
    }

    /**
     * Similar to the method above, but deserializes from a |ByteBuffer| instance.
     *
     * @throws org.chromium.mojo.bindings.DeserializationException on deserialization failure.
     */
    public static PageLifecycleState deserialize(java.nio.ByteBuffer data) {
        return deserialize(new org.chromium.mojo.bindings.Message(
                data, new java.util.ArrayList<org.chromium.mojo.system.Handle>()));
    }

    @SuppressWarnings("unchecked")
    public static PageLifecycleState decode(org.chromium.mojo.bindings.Decoder decoder0) {
        if (decoder0 == null) {
            return null;
        }
        decoder0.increaseStackDepth();
        PageLifecycleState result;
        try {
            org.chromium.mojo.bindings.DataHeader mainDataHeader = decoder0.readAndValidateDataHeader(VERSION_ARRAY);
            final int elementsOrVersion = mainDataHeader.elementsOrVersion;
            result = new PageLifecycleState(elementsOrVersion);
                {
                    
                result.isFrozen = decoder0.readBoolean(8, 0);
                }
                {
                    
                result.isInBackForwardCache = decoder0.readBoolean(8, 1);
                }
                {
                    
                result.evictionEnabled = decoder0.readBoolean(8, 2);
                }
                {
                    
                result.shouldDispatchPageshowForDebugging = decoder0.readBoolean(8, 3);
                }
                {
                    
                result.visibility = decoder0.readInt(12);
                    PageVisibilityState.validate(result.visibility);
                    result.visibility = PageVisibilityState.toKnownValue(result.visibility);
                }
                {
                    
                result.pagehideDispatch = decoder0.readInt(16);
                    PagehideDispatch.validate(result.pagehideDispatch);
                    result.pagehideDispatch = PagehideDispatch.toKnownValue(result.pagehideDispatch);
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
        
        encoder0.encode(this.isFrozen, 8, 0);
        
        encoder0.encode(this.isInBackForwardCache, 8, 1);
        
        encoder0.encode(this.evictionEnabled, 8, 2);
        
        encoder0.encode(this.shouldDispatchPageshowForDebugging, 8, 3);
        
        encoder0.encode(this.visibility, 12);
        
        encoder0.encode(this.pagehideDispatch, 16);
    }
}