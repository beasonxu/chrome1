"use strict";
// Copyright 2021 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
Object.defineProperty(exports, "__esModule", { value: true });
const helper_js_1 = require("../../shared/helper.js");
const mocha_extensions_js_1 = require("../../shared/mocha-extensions.js");
const elements_helpers_js_1 = require("../helpers/elements-helpers.js");
(0, mocha_extensions_js_1.describe)('Accessibility Tree in the Elements Tab', async function () {
    (0, mocha_extensions_js_1.it)('displays the fuller accessibility tree', async () => {
        await (0, helper_js_1.enableExperiment)('fullAccessibilityTree');
        await (0, helper_js_1.enableExperiment)('protocolMonitor');
        await (0, helper_js_1.goToResource)('elements/accessibility-simple-page.html');
        await (0, elements_helpers_js_1.toggleAccessibilityTree)();
        await (0, helper_js_1.waitForElementWithTextContent)('heading\xa0"Title"');
        await (0, helper_js_1.waitForElementWithTextContent)('link\xa0"cats" focusable:\xa0true');
    });
    (0, mocha_extensions_js_1.it)('allows navigating iframes', async () => {
        await (0, helper_js_1.enableExperiment)('fullAccessibilityTree');
        await (0, helper_js_1.goToResource)('elements/accessibility-iframe-page.html');
        await (0, elements_helpers_js_1.toggleAccessibilityTree)();
        const iframeDoc = await (0, helper_js_1.waitForElementWithTextContent)('RootWebArea\xa0"Simple page with aria labeled element" focusable:\xa0true');
        const arrowIconContainer = await iframeDoc.evaluateHandle(node => node.parentElementOrShadowHost().parentElement.parentElement);
        (0, helper_js_1.assertNotNullOrUndefined)(arrowIconContainer);
        await (0, helper_js_1.click)('.arrow-icon', { root: arrowIconContainer });
        await (0, helper_js_1.waitForElementWithTextContent)('link\xa0"cats" focusable:\xa0true');
    });
    (0, mocha_extensions_js_1.it)('listens for text changes to DOM and redraws the tree', async () => {
        await (0, helper_js_1.enableExperiment)('fullAccessibilityTree');
        await (0, helper_js_1.goToResource)('elements/accessibility-simple-page.html');
        await (0, elements_helpers_js_1.toggleAccessibilityTree)();
        const { target } = (0, helper_js_1.getBrowserAndPages)();
        await (0, helper_js_1.waitForElementWithTextContent)('link\xa0"cats" focusable:\xa0true');
        const link = await target.waitForSelector('aria/cats [role="link"]');
        (0, helper_js_1.assertNotNullOrUndefined)(link);
        await link.evaluate(node => {
            node.innerText = 'dogs';
        });
        await (0, helper_js_1.waitForElementWithTextContent)('link\xa0"dogs" focusable:\xa0true');
    });
    (0, mocha_extensions_js_1.it)('listens for changes to properties and redraws tree', async () => {
        await (0, helper_js_1.enableExperiment)('fullAccessibilityTree');
        await (0, helper_js_1.goToResource)('elements/accessibility-simple-page.html');
        await (0, elements_helpers_js_1.toggleAccessibilityTree)();
        const { target } = (0, helper_js_1.getBrowserAndPages)();
        const link = await target.waitForSelector('aria/cats [role="link"]');
        (0, helper_js_1.assertNotNullOrUndefined)(link);
        await (0, helper_js_1.waitForElementWithTextContent)('link\xa0"cats" focusable:\xa0true');
        await link.evaluate(node => node.setAttribute('aria-label', 'birds'));
        await (0, helper_js_1.waitForElementWithTextContent)('link\xa0"birds" focusable:\xa0true');
    });
    (0, mocha_extensions_js_1.it)('listen for removed nodes and redraw tree', async () => {
        await (0, helper_js_1.enableExperiment)('fullAccessibilityTree');
        await (0, helper_js_1.goToResource)('elements/accessibility-simple-page.html');
        await (0, elements_helpers_js_1.toggleAccessibilityTree)();
        const { target } = (0, helper_js_1.getBrowserAndPages)();
        const link = await target.waitForSelector('aria/cats [role="link"]');
        (0, helper_js_1.assertNotNullOrUndefined)(link);
        await (0, helper_js_1.waitForElementWithTextContent)('link\xa0"cats" focusable:\xa0true');
        await link.evaluate(node => node.remove());
        await (0, helper_js_1.waitForNoElementsWithTextContent)('link\xa0"cats" focusable:\xa0true');
    });
});
//# sourceMappingURL=accessibility-tree_test.js.map