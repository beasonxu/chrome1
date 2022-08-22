// ConnectionSubtype.java is auto generated by mojom_bindings_generator.py, do not edit


// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by:
//     mojo/public/tools/bindings/mojom_bindings_generator.py
// For:
//     services/network/public/mojom/network_change_manager.mojom
//

package org.chromium.network.mojom;

import androidx.annotation.IntDef;

public final class ConnectionSubtype {
    private static final boolean IS_EXTENSIBLE = false;
    @IntDef({

        ConnectionSubtype.SUBTYPE_UNKNOWN,
        ConnectionSubtype.SUBTYPE_NONE,
        ConnectionSubtype.SUBTYPE_OTHER,
        ConnectionSubtype.SUBTYPE_GSM,
        ConnectionSubtype.SUBTYPE_IDEN,
        ConnectionSubtype.SUBTYPE_CDMA,
        ConnectionSubtype.SUBTYPE_1XRTT,
        ConnectionSubtype.SUBTYPE_GPRS,
        ConnectionSubtype.SUBTYPE_EDGE,
        ConnectionSubtype.SUBTYPE_UMTS,
        ConnectionSubtype.SUBTYPE_EVDO_REV_0,
        ConnectionSubtype.SUBTYPE_EVDO_REV_A,
        ConnectionSubtype.SUBTYPE_HSPA,
        ConnectionSubtype.SUBTYPE_EVDO_REV_B,
        ConnectionSubtype.SUBTYPE_HSDPA,
        ConnectionSubtype.SUBTYPE_HSUPA,
        ConnectionSubtype.SUBTYPE_EHRPD,
        ConnectionSubtype.SUBTYPE_HSPAP,
        ConnectionSubtype.SUBTYPE_LTE,
        ConnectionSubtype.SUBTYPE_LTE_ADVANCED,
        ConnectionSubtype.SUBTYPE_BLUETOOTH_1_2,
        ConnectionSubtype.SUBTYPE_BLUETOOTH_2_1,
        ConnectionSubtype.SUBTYPE_BLUETOOTH_3_0,
        ConnectionSubtype.SUBTYPE_BLUETOOTH_4_0,
        ConnectionSubtype.SUBTYPE_ETHERNET,
        ConnectionSubtype.SUBTYPE_FAST_ETHERNET,
        ConnectionSubtype.SUBTYPE_GIGABIT_ETHERNET,
        ConnectionSubtype.SUBTYPE_10_GIGABIT_ETHERNET,
        ConnectionSubtype.SUBTYPE_WIFI_B,
        ConnectionSubtype.SUBTYPE_WIFI_G,
        ConnectionSubtype.SUBTYPE_WIFI_N,
        ConnectionSubtype.SUBTYPE_WIFI_AC,
        ConnectionSubtype.SUBTYPE_WIFI_AD,
        ConnectionSubtype.SUBTYPE_LAST})
    public @interface EnumType {}

    public static final int SUBTYPE_UNKNOWN = 0;
    public static final int SUBTYPE_NONE = 1;
    public static final int SUBTYPE_OTHER = 2;
    public static final int SUBTYPE_GSM = 3;
    public static final int SUBTYPE_IDEN = 4;
    public static final int SUBTYPE_CDMA = 5;
    public static final int SUBTYPE_1XRTT = 6;
    public static final int SUBTYPE_GPRS = 7;
    public static final int SUBTYPE_EDGE = 8;
    public static final int SUBTYPE_UMTS = 9;
    public static final int SUBTYPE_EVDO_REV_0 = 10;
    public static final int SUBTYPE_EVDO_REV_A = 11;
    public static final int SUBTYPE_HSPA = 12;
    public static final int SUBTYPE_EVDO_REV_B = 13;
    public static final int SUBTYPE_HSDPA = 14;
    public static final int SUBTYPE_HSUPA = 15;
    public static final int SUBTYPE_EHRPD = 16;
    public static final int SUBTYPE_HSPAP = 17;
    public static final int SUBTYPE_LTE = 18;
    public static final int SUBTYPE_LTE_ADVANCED = 19;
    public static final int SUBTYPE_BLUETOOTH_1_2 = 20;
    public static final int SUBTYPE_BLUETOOTH_2_1 = 21;
    public static final int SUBTYPE_BLUETOOTH_3_0 = 22;
    public static final int SUBTYPE_BLUETOOTH_4_0 = 23;
    public static final int SUBTYPE_ETHERNET = 24;
    public static final int SUBTYPE_FAST_ETHERNET = 25;
    public static final int SUBTYPE_GIGABIT_ETHERNET = 26;
    public static final int SUBTYPE_10_GIGABIT_ETHERNET = 27;
    public static final int SUBTYPE_WIFI_B = 28;
    public static final int SUBTYPE_WIFI_G = 29;
    public static final int SUBTYPE_WIFI_N = 30;
    public static final int SUBTYPE_WIFI_AC = 31;
    public static final int SUBTYPE_WIFI_AD = 32;
    public static final int SUBTYPE_LAST = 32;
    public static final int MIN_VALUE = 0;
    public static final int MAX_VALUE = 32;

    public static boolean isKnownValue(int value) {
        return value >= 0 && value <= 32;
    }

    public static void validate(int value) {
        if (IS_EXTENSIBLE || isKnownValue(value)) return;
        throw new org.chromium.mojo.bindings.DeserializationException("Invalid enum value.");
    }

    public static int toKnownValue(int value) {
      return value;
    }

    private ConnectionSubtype() {}
}