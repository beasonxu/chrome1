// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

package org.chromium.chrome.browser.payments;

import androidx.test.filters.MediumTest;

import org.junit.Rule;
import org.junit.Test;
import org.junit.runner.RunWith;

import org.chromium.base.test.util.CommandLineFlags;
import org.chromium.base.test.util.Feature;
import org.chromium.chrome.R;
import org.chromium.chrome.browser.autofill.AutofillTestHelper;
import org.chromium.chrome.browser.autofill.PersonalDataManager.AutofillProfile;
import org.chromium.chrome.browser.flags.ChromeSwitches;
import org.chromium.chrome.browser.payments.PaymentRequestTestRule.AppPresence;
import org.chromium.chrome.browser.payments.PaymentRequestTestRule.FactorySpeed;
import org.chromium.chrome.browser.payments.PaymentRequestTestRule.MainActivityStartCallback;
import org.chromium.chrome.test.ChromeJUnit4ClassRunner;

import java.util.concurrent.TimeoutException;

/**
 * A payment integration test for a merchant that retries payment request with payment validation.
 */
@RunWith(ChromeJUnit4ClassRunner.class)
@CommandLineFlags.Add({ChromeSwitches.DISABLE_FIRST_RUN_EXPERIENCE,
        PaymentRequestTestRule.ENABLE_EXPERIMENTAL_WEB_PLATFORM_FEATURES})
public class PaymentRequestPayerDetailChangeTest implements MainActivityStartCallback {
    @Rule
    public PaymentRequestTestRule mPaymentRequestTestRule =
            new PaymentRequestTestRule("payment_request_onpayerdetailchange.html", this);

    @Override
    public void onMainActivityStarted() throws TimeoutException {
        AutofillTestHelper helper = new AutofillTestHelper();

        String billing_address_id = helper.setProfile(
                new AutofillProfile("", "https://example.com", true, "" /* honorific prefix */,
                        "Jon Doe", "Google", "340 Main St", "CA", "Los Angeles", "", "90291", "",
                        "US", "333-333-3333", "jon.doe@gmail.com", "en-US"));
    }

    /**
     * Test for onpayerdetailchange event.
     */
    @Test
    @MediumTest
    @Feature({"Payments"})
    public void testPayerDetailChangeEvent() throws TimeoutException {
        // Install a fake payment app. We only need one as we won't skip the PaymentRequest sheet
        // due to requesting contact info as well.
        mPaymentRequestTestRule.addPaymentAppFactory(
                "https://bobpay.com", AppPresence.HAVE_APPS, FactorySpeed.FAST_FACTORY);

        mPaymentRequestTestRule.triggerUIAndWait(
                "buy", mPaymentRequestTestRule.getReadyToPay());

        mPaymentRequestTestRule.clickAndWait(
                R.id.button_primary, mPaymentRequestTestRule.getPaymentResponseReady());

        mPaymentRequestTestRule.retryPaymentRequest("{}", mPaymentRequestTestRule.getReadyToPay());

        mPaymentRequestTestRule.clickInContactInfoAndWait(
                R.id.payments_section, mPaymentRequestTestRule.getReadyForInput());
        mPaymentRequestTestRule.clickInContactInfoAndWait(
                R.id.payments_open_editor_pencil_button, mPaymentRequestTestRule.getReadyToEdit());
        mPaymentRequestTestRule.setTextInEditorAndWait(
                new String[] {"Jane Doe", "650-253-0000", "jane.doe@gmail.com"},
                mPaymentRequestTestRule.getEditorTextUpdate());
        mPaymentRequestTestRule.clickInEditorAndWait(
                R.id.editor_dialog_done_button, mPaymentRequestTestRule.getReadyToPay());

        mPaymentRequestTestRule.clickAndWait(
                R.id.button_primary, mPaymentRequestTestRule.getDismissed());

        mPaymentRequestTestRule.expectResultContains(
                new String[] {"Jane Doe", "6502530000", "jane.doe@gmail.com"});
    }
}
