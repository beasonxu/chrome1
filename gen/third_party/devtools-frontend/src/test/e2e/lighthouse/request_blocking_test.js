"use strict";
// Copyright 2022 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
Object.defineProperty(exports, "__esModule", { value: true });
const chai_1 = require("chai");
const path = require("path");
const helper_js_1 = require("../../shared/helper.js");
const mocha_extensions_js_1 = require("../../shared/mocha-extensions.js");
const lighthouse_helpers_js_1 = require("../helpers/lighthouse-helpers.js");
// This test will fail (by default) in headful mode, as the target page never gets painted.
// To resolve this when debugging, just make sure the target page is visible during the lighthouse run.
(0, mocha_extensions_js_1.describe)('request blocking', async function () {
    // The tests in this suite are particularly slow
    this.timeout(60_000);
    // Start blocking *.css
    // Ideally this would be done with UI manipulation, but it'd be less reliable AND
    // the designated tests in network-request-blocking-panel_test.ts are skipped by default due to flakiness.
    beforeEach(async () => {
        const { frontend } = (0, helper_js_1.getBrowserAndPages)();
        await frontend.evaluate(() => {
            // @ts-ignore layout test global
            const networkManager = self.SDK.multitargetNetworkManager;
            networkManager.setBlockingEnabled(true);
            networkManager.setBlockedPatterns([{ enabled: true, url: '*.css' }]);
        });
    });
    // Reset request blocking state
    afterEach(async () => {
        const { frontend } = (0, helper_js_1.getBrowserAndPages)();
        await frontend.evaluate(() => {
            // @ts-ignore layout test global
            const networkManager = globalThis.SDK.multitargetNetworkManager;
            networkManager.setBlockingEnabled(false);
            networkManager.setBlockedPatterns([]);
        });
    });
    (0, mocha_extensions_js_1.it)('is respected during a lighthouse run', async () => {
        await (0, lighthouse_helpers_js_1.navigateToLighthouseTab)('lighthouse/hello.html');
        await (0, lighthouse_helpers_js_1.selectCategories)(['performance']);
        await (0, lighthouse_helpers_js_1.clickStartButton)();
        const { lhr } = await (0, lighthouse_helpers_js_1.waitForResult)();
        const requests = lhr.audits['network-requests'].details.items;
        const trimmedRequests = requests.map((item) => {
            return {
                url: typeof item.url === 'string' && path.basename(item.url),
                statusCode: item.statusCode,
            };
        });
        chai_1.assert.deepEqual(trimmedRequests, [
            { url: 'hello.html', statusCode: 200 },
            { url: 'basic.css', statusCode: -1 }, // statuCode === -1 means the request failed
        ]);
    });
});
//# sourceMappingURL=request_blocking_test.js.map