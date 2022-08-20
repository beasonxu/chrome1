"use strict";
// Copyright 2022 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
Object.defineProperty(exports, "__esModule", { value: true });
const chai_1 = require("chai");
const helper_js_1 = require("../../shared/helper.js");
const mocha_extensions_js_1 = require("../../shared/mocha-extensions.js");
const lighthouse_helpers_js_1 = require("../helpers/lighthouse-helpers.js");
(0, mocha_extensions_js_1.describe)('IndexedDB warning', async function () {
    beforeEach(async function () {
        // e2e tests in application/ create websql and indexeddb items and don't clean up after themselves
        await (0, lighthouse_helpers_js_1.clearSiteData)();
    });
    (0, mocha_extensions_js_1.it)('displays when important data may affect performance', async () => {
        await (0, lighthouse_helpers_js_1.navigateToLighthouseTab)('empty.html');
        let warningElem = await (0, helper_js_1.waitFor)('.lighthouse-warning-text.hidden');
        const warningText1 = await warningElem.evaluate(node => node.textContent?.trim());
        chai_1.assert.strictEqual(warningText1, '');
        await (0, lighthouse_helpers_js_1.navigateToLighthouseTab)('lighthouse/lighthouse-storage.html');
        // Wait for storage state to lazily update
        await (0, lighthouse_helpers_js_1.waitForStorageUsage)(quota => quota > 0);
        warningElem = await (0, helper_js_1.waitFor)('.lighthouse-warning-text:not(.hidden)');
        const expected = 'There may be stored data affecting loading performance in this location: IndexedDB. Audit this page in an incognito window to prevent those resources from affecting your scores.';
        const warningText2 = await warningElem.evaluate(node => node.textContent?.trim());
        chai_1.assert.strictEqual(warningText2, expected);
    });
});
//# sourceMappingURL=indexeddb-warning_test.js.map