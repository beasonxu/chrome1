// Copyright 2022 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

package org.chromium.content_public.browser;

import androidx.annotation.NonNull;
import androidx.annotation.Nullable;

import java.util.Objects;

/**
 * Represents a JavaScript message payload.
 * Currently only STRING is supported.
 */
public final class MessagePayload {
    @MessagePayloadType
    private final int mType;
    @Nullable
    private final String mString;
    @Nullable
    private final byte[] mArrayBuffer;

    /**
     * Create a MessagePayload String type.
     * To keep backward compatibility, string can be null, then it's replaced to empty string in
     * JNI.
     */
    public MessagePayload(@Nullable String string) {
        mType = MessagePayloadType.STRING;
        mString = string;
        mArrayBuffer = null;
    }

    public MessagePayload(@NonNull byte[] arrayBuffer) {
        Objects.requireNonNull(arrayBuffer, "arrayBuffer cannot be null.");
        mType = MessagePayloadType.ARRAY_BUFFER;
        mArrayBuffer = arrayBuffer;
        mString = null;
    }

    @MessagePayloadType
    public int getType() {
        return mType;
    }

    @Nullable
    public String getAsString() {
        checkType(MessagePayloadType.STRING);
        return mString;
    }

    @NonNull
    public byte[] getAsArrayBuffer() {
        checkType(MessagePayloadType.ARRAY_BUFFER);
        Objects.requireNonNull(mArrayBuffer, "mArrayBuffer cannot be null.");
        return mArrayBuffer;
    }

    private void checkType(@MessagePayloadType int expectedType) {
        if (mType != expectedType) {
            throw new IllegalStateException("Expected " + typeToString(expectedType)
                    + ", but type is " + typeToString(mType));
        }
    }

    @NonNull
    private static String typeToString(@MessagePayloadType int type) {
        switch (type) {
            case MessagePayloadType.STRING:
                return "String";
            case MessagePayloadType.ARRAY_BUFFER:
                return "ArrayBuffer";
            case MessagePayloadType.INVALID:
                return "Invalid";
        }
        throw new RuntimeException("Unknown type: " + type);
    }
}
