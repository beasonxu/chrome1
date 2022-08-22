// PaymentHandlerResponseCallback.java is auto generated by mojom_bindings_generator.py, do not edit


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


public interface PaymentHandlerResponseCallback extends org.chromium.mojo.bindings.Interface {



    public interface Proxy extends PaymentHandlerResponseCallback, org.chromium.mojo.bindings.Interface.Proxy {
    }

    Manager<PaymentHandlerResponseCallback, PaymentHandlerResponseCallback.Proxy> MANAGER = PaymentHandlerResponseCallback_Internal.MANAGER;

    void onResponseForAbortPayment(
boolean paymentAborted);


    void onResponseForCanMakePayment(
CanMakePaymentResponse response);


    void onResponseForPaymentRequest(
PaymentHandlerResponse response);


}
