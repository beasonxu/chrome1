// PaymentManager.java is auto generated by mojom_bindings_generator.py, do not edit


// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by:
//     mojo/public/tools/bindings/mojom_bindings_generator.py
// For:
//     third_party/blink/public/mojom/payments/payment_app.mojom
//

package org.chromium.payments.mojom;

import androidx.annotation.IntDef;


public interface PaymentManager extends org.chromium.mojo.bindings.Interface {



    public interface Proxy extends PaymentManager, org.chromium.mojo.bindings.Interface.Proxy {
    }

    Manager<PaymentManager, PaymentManager.Proxy> MANAGER = PaymentManager_Internal.MANAGER;

    void init(
org.chromium.url.mojom.Url contextUrl, String serviceWorkerScope);


    void deletePaymentInstrument(
String instrumentKey, 
DeletePaymentInstrument_Response callback);

    interface DeletePaymentInstrument_Response extends org.chromium.mojo.bindings.Callbacks.Callback1<Integer> { }


    void getPaymentInstrument(
String instrumentKey, 
GetPaymentInstrument_Response callback);

    interface GetPaymentInstrument_Response extends org.chromium.mojo.bindings.Callbacks.Callback2<PaymentInstrument, Integer> { }


    void keysOfPaymentInstruments(

KeysOfPaymentInstruments_Response callback);

    interface KeysOfPaymentInstruments_Response extends org.chromium.mojo.bindings.Callbacks.Callback2<String[], Integer> { }


    void hasPaymentInstrument(
String instrumentKey, 
HasPaymentInstrument_Response callback);

    interface HasPaymentInstrument_Response extends org.chromium.mojo.bindings.Callbacks.Callback1<Integer> { }


    void setPaymentInstrument(
String instrumentKey, PaymentInstrument instrument, 
SetPaymentInstrument_Response callback);

    interface SetPaymentInstrument_Response extends org.chromium.mojo.bindings.Callbacks.Callback1<Integer> { }


    void clearPaymentInstruments(

ClearPaymentInstruments_Response callback);

    interface ClearPaymentInstruments_Response extends org.chromium.mojo.bindings.Callbacks.Callback1<Integer> { }


    void setUserHint(
String userHint);


    void enableDelegations(
int[] delegations, 
EnableDelegations_Response callback);

    interface EnableDelegations_Response extends org.chromium.mojo.bindings.Callbacks.Callback1<Integer> { }


}
