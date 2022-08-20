"use strict";
// Copyright 2022 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
Object.defineProperty(exports, "__esModule", { value: true });
const chai_1 = require("chai");
const events_js_1 = require("../../conductor/events.js");
const mocha_extensions_js_1 = require("../../shared/mocha-extensions.js");
const lighthouse_helpers_js_1 = require("../helpers/lighthouse-helpers.js");
// This test will fail (by default) in headful mode, as the target page never gets painted.
// To resolve this when debugging, just make sure the target page is visible during the lighthouse run.
(0, mocha_extensions_js_1.describe)('Navigation', async function () {
    // The tests in this suite are particularly slow
    this.timeout(60_000);
    const modes = ['legacy', 'FR'];
    for (const mode of modes) {
        (0, mocha_extensions_js_1.describe)(`in ${mode} mode`, () => {
            beforeEach(() => {
                if (mode === 'FR') {
                    // TODO: Figure out why these are emitted in FR.
                    (0, events_js_1.expectError)(/Protocol Error: the message with wrong session id/);
                    (0, events_js_1.expectError)(/Protocol Error: the message with wrong session id/);
                }
            });
            (0, mocha_extensions_js_1.it)('successfully returns a Lighthouse report', async () => {
                await (0, lighthouse_helpers_js_1.navigateToLighthouseTab)('lighthouse/hello.html');
                await (0, lighthouse_helpers_js_1.setLegacyNavigation)(mode === 'legacy');
                await (0, lighthouse_helpers_js_1.clickStartButton)();
                const { lhr, artifacts, reportEl } = await (0, lighthouse_helpers_js_1.waitForResult)();
                chai_1.assert.strictEqual(lhr.lighthouseVersion, '9.6.2');
                chai_1.assert.match(lhr.finalUrl, /^https:\/\/localhost:[0-9]+\/test\/e2e\/resources\/lighthouse\/hello.html/);
                chai_1.assert.strictEqual(lhr.configSettings.throttlingMethod, 'simulate');
                chai_1.assert.strictEqual(lhr.configSettings.disableStorageReset, false);
                chai_1.assert.strictEqual(lhr.configSettings.formFactor, 'mobile');
                const { innerWidth, innerHeight, outerWidth, outerHeight, devicePixelRatio } = artifacts.ViewportDimensions;
                // This value can vary slightly, depending on the display.
                // https://bugs.chromium.org/p/chromium/issues/detail?id=1346355
                chai_1.assert.approximately(innerHeight, 1742, 1);
                chai_1.assert.strictEqual(innerWidth, 980);
                chai_1.assert.strictEqual(outerWidth, 360);
                chai_1.assert.strictEqual(outerHeight, 640);
                chai_1.assert.strictEqual(devicePixelRatio, 3);
                const { auditResults, erroredAudits, failedAudits } = (0, lighthouse_helpers_js_1.getAuditsBreakdown)(lhr);
                chai_1.assert.strictEqual(auditResults.length, 152);
                chai_1.assert.strictEqual(erroredAudits.length, 0);
                chai_1.assert.deepStrictEqual(failedAudits.map(audit => audit.id), [
                    'service-worker',
                    'viewport',
                    'installable-manifest',
                    'apple-touch-icon',
                    'splash-screen',
                    'themed-omnibox',
                    'maskable-icon',
                    'content-width',
                    'document-title',
                    'html-has-lang',
                    'meta-description',
                    'font-size',
                    'tap-targets',
                ]);
                const viewTraceText = await reportEl.$eval('.lh-button--trace', viewTraceEl => {
                    return viewTraceEl.textContent;
                });
                chai_1.assert.strictEqual(viewTraceText, 'View Original Trace');
            });
            (0, mocha_extensions_js_1.it)('successfully returns a Lighthouse report with DevTools throttling', async () => {
                await (0, lighthouse_helpers_js_1.navigateToLighthouseTab)('lighthouse/hello.html');
                await (0, lighthouse_helpers_js_1.setThrottlingMethod)('devtools');
                await (0, lighthouse_helpers_js_1.setLegacyNavigation)(mode === 'legacy');
                await (0, lighthouse_helpers_js_1.clickStartButton)();
                const { lhr, reportEl } = await (0, lighthouse_helpers_js_1.waitForResult)();
                chai_1.assert.strictEqual(lhr.configSettings.throttlingMethod, 'devtools');
                // [crbug.com/1347220] DevTools throttling can force resources to load slow enough for these audits to fail sometimes.
                const flakyAudits = [
                    'server-response-time',
                    'render-blocking-resources',
                ];
                const { auditResults, erroredAudits, failedAudits } = (0, lighthouse_helpers_js_1.getAuditsBreakdown)(lhr, flakyAudits);
                chai_1.assert.strictEqual(auditResults.length, 152);
                chai_1.assert.strictEqual(erroredAudits.length, 0);
                chai_1.assert.deepStrictEqual(failedAudits.map(audit => audit.id), [
                    'service-worker',
                    'viewport',
                    'installable-manifest',
                    'apple-touch-icon',
                    'splash-screen',
                    'themed-omnibox',
                    'maskable-icon',
                    'content-width',
                    'document-title',
                    'html-has-lang',
                    'meta-description',
                    'font-size',
                    'tap-targets',
                ]);
                const viewTraceText = await reportEl.$eval('.lh-button--trace', viewTraceEl => {
                    return viewTraceEl.textContent;
                });
                chai_1.assert.strictEqual(viewTraceText, 'View Trace');
            });
            (0, mocha_extensions_js_1.it)('successfully returns a Lighthouse report when settings changed', async () => {
                await (0, lighthouse_helpers_js_1.navigateToLighthouseTab)('lighthouse/hello.html');
                await (0, lighthouse_helpers_js_1.setLegacyNavigation)(mode === 'legacy');
                await (0, lighthouse_helpers_js_1.setClearStorage)(false);
                await (0, lighthouse_helpers_js_1.selectCategories)(['performance', 'best-practices']);
                await (0, lighthouse_helpers_js_1.selectMode)('desktop');
                await (0, lighthouse_helpers_js_1.clickStartButton)();
                const { lhr, artifacts } = await (0, lighthouse_helpers_js_1.waitForResult)();
                const { innerWidth, innerHeight, devicePixelRatio } = artifacts.ViewportDimensions;
                // TODO: Figure out why outerHeight can be different depending on OS
                chai_1.assert.strictEqual(innerHeight, 720);
                chai_1.assert.strictEqual(innerWidth, 1280);
                chai_1.assert.strictEqual(devicePixelRatio, 1);
                const { erroredAudits } = (0, lighthouse_helpers_js_1.getAuditsBreakdown)(lhr);
                chai_1.assert.strictEqual(erroredAudits.length, 0);
                chai_1.assert.deepStrictEqual(Object.keys(lhr.categories), ['performance', 'best-practices']);
                chai_1.assert.strictEqual(lhr.configSettings.disableStorageReset, true);
                chai_1.assert.strictEqual(lhr.configSettings.formFactor, 'desktop');
            });
        });
    }
});
//# sourceMappingURL=navigation_test.js.map