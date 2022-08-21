// components/payments/mojom/payment_request_data.mojom-lite-for-compile.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
'use strict';

goog.require('mojo.internal');







goog.provide('payments.mojom.PaymentAddressSpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
payments.mojom.PaymentAddressSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

goog.provide('payments.mojom.PaymentCurrencyAmountSpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
payments.mojom.PaymentCurrencyAmountSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

goog.provide('payments.mojom.PaymentValidationErrorsSpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
payments.mojom.PaymentValidationErrorsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

goog.provide('payments.mojom.PayerErrorsSpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
payments.mojom.PayerErrorsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

goog.provide('payments.mojom.AddressErrorsSpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
payments.mojom.AddressErrorsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };




mojo.internal.Struct(
    payments.mojom.PaymentAddressSpec.$,
    'PaymentAddress',
    [
      mojo.internal.StructField(
        'country', 0,
        0,
        mojo.internal.String,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'addressLine', 8,
        0,
        mojo.internal.Array(mojo.internal.String, false),
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'region', 16,
        0,
        mojo.internal.String,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'city', 24,
        0,
        mojo.internal.String,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'dependentLocality', 32,
        0,
        mojo.internal.String,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'postalCode', 40,
        0,
        mojo.internal.String,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'sortingCode', 48,
        0,
        mojo.internal.String,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'organization', 56,
        0,
        mojo.internal.String,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'recipient', 64,
        0,
        mojo.internal.String,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'phone', 72,
        0,
        mojo.internal.String,
        null,
        false /* nullable */),
    ],
    [[0, 88],]);



goog.provide('payments.mojom.PaymentAddress');

/** @record */
payments.mojom.PaymentAddress = class {
  constructor() {
    /** @export { !string } */
    this.country;
    /** @export { !Array<!string> } */
    this.addressLine;
    /** @export { !string } */
    this.region;
    /** @export { !string } */
    this.city;
    /** @export { !string } */
    this.dependentLocality;
    /** @export { !string } */
    this.postalCode;
    /** @export { !string } */
    this.sortingCode;
    /** @export { !string } */
    this.organization;
    /** @export { !string } */
    this.recipient;
    /** @export { !string } */
    this.phone;
  }
};




mojo.internal.Struct(
    payments.mojom.PaymentCurrencyAmountSpec.$,
    'PaymentCurrencyAmount',
    [
      mojo.internal.StructField(
        'currency', 0,
        0,
        mojo.internal.String,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'value', 8,
        0,
        mojo.internal.String,
        null,
        false /* nullable */),
    ],
    [[0, 24],]);



goog.provide('payments.mojom.PaymentCurrencyAmount');

/** @record */
payments.mojom.PaymentCurrencyAmount = class {
  constructor() {
    /** @export { !string } */
    this.currency;
    /** @export { !string } */
    this.value;
  }
};




mojo.internal.Struct(
    payments.mojom.PaymentValidationErrorsSpec.$,
    'PaymentValidationErrors',
    [
      mojo.internal.StructField(
        'error', 0,
        0,
        mojo.internal.String,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'payer', 8,
        0,
        payments.mojom.PayerErrorsSpec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'shippingAddress', 16,
        0,
        payments.mojom.AddressErrorsSpec.$,
        null,
        false /* nullable */),
    ],
    [[0, 32],]);



goog.provide('payments.mojom.PaymentValidationErrors');

/** @record */
payments.mojom.PaymentValidationErrors = class {
  constructor() {
    /** @export { !string } */
    this.error;
    /** @export { !payments.mojom.PayerErrors } */
    this.payer;
    /** @export { !payments.mojom.AddressErrors } */
    this.shippingAddress;
  }
};




mojo.internal.Struct(
    payments.mojom.PayerErrorsSpec.$,
    'PayerErrors',
    [
      mojo.internal.StructField(
        'email', 0,
        0,
        mojo.internal.String,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'name', 8,
        0,
        mojo.internal.String,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'phone', 16,
        0,
        mojo.internal.String,
        null,
        false /* nullable */),
    ],
    [[0, 32],]);



goog.provide('payments.mojom.PayerErrors');

/** @record */
payments.mojom.PayerErrors = class {
  constructor() {
    /** @export { !string } */
    this.email;
    /** @export { !string } */
    this.name;
    /** @export { !string } */
    this.phone;
  }
};




mojo.internal.Struct(
    payments.mojom.AddressErrorsSpec.$,
    'AddressErrors',
    [
      mojo.internal.StructField(
        'addressLine', 0,
        0,
        mojo.internal.String,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'city', 8,
        0,
        mojo.internal.String,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'country', 16,
        0,
        mojo.internal.String,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'dependentLocality', 24,
        0,
        mojo.internal.String,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'organization', 32,
        0,
        mojo.internal.String,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'phone', 40,
        0,
        mojo.internal.String,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'postalCode', 48,
        0,
        mojo.internal.String,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'recipient', 56,
        0,
        mojo.internal.String,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'region', 64,
        0,
        mojo.internal.String,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'sortingCode', 72,
        0,
        mojo.internal.String,
        null,
        false /* nullable */),
    ],
    [[0, 88],]);



goog.provide('payments.mojom.AddressErrors');

/** @record */
payments.mojom.AddressErrors = class {
  constructor() {
    /** @export { !string } */
    this.addressLine;
    /** @export { !string } */
    this.city;
    /** @export { !string } */
    this.country;
    /** @export { !string } */
    this.dependentLocality;
    /** @export { !string } */
    this.organization;
    /** @export { !string } */
    this.phone;
    /** @export { !string } */
    this.postalCode;
    /** @export { !string } */
    this.recipient;
    /** @export { !string } */
    this.region;
    /** @export { !string } */
    this.sortingCode;
  }
};


