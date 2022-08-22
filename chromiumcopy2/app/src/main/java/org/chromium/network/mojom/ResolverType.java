// ResolverType.java is auto generated by mojom_bindings_generator.py, do not edit


// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by:
//     mojo/public/tools/bindings/mojom_bindings_generator.py
// For:
//     services/network/public/mojom/network_service_test.mojom
//

package org.chromium.network.mojom;

import androidx.annotation.IntDef;

public final class ResolverType {
    private static final boolean IS_EXTENSIBLE = false;
    @IntDef({

        ResolverType.RESOLVER_TYPE_FAIL,
        ResolverType.RESOLVER_TYPE_FAIL_TIMEOUT,
        ResolverType.RESOLVER_TYPE_SYSTEM,
        ResolverType.RESOLVER_TYPE_IP_LITERAL,
        ResolverType.RESOLVER_TYPE_DIRECT_LOOKUP})
    public @interface EnumType {}

    public static final int RESOLVER_TYPE_FAIL = 0;
    public static final int RESOLVER_TYPE_FAIL_TIMEOUT = 1;
    public static final int RESOLVER_TYPE_SYSTEM = 2;
    public static final int RESOLVER_TYPE_IP_LITERAL = 3;
    public static final int RESOLVER_TYPE_DIRECT_LOOKUP = 4;
    public static final int MIN_VALUE = 0;
    public static final int MAX_VALUE = 4;

    public static boolean isKnownValue(int value) {
        return value >= 0 && value <= 4;
    }

    public static void validate(int value) {
        if (IS_EXTENSIBLE || isKnownValue(value)) return;
        throw new org.chromium.mojo.bindings.DeserializationException("Invalid enum value.");
    }

    public static int toKnownValue(int value) {
      return value;
    }

    private ResolverType() {}
}