"use strict";
// Copyright 2022 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
Object.defineProperty(exports, "__esModule", { value: true });
const chai_1 = require("chai");
const helper_js_1 = require("../../shared/helper.js");
const mocha_extensions_js_1 = require("../../shared/mocha-extensions.js");
const network_helpers_js_1 = require("../helpers/network-helpers.js");
const sources_helpers_js_1 = require("../helpers/sources-helpers.js");
const MORE_TABS_SELECTOR = '[aria-label="More tabs"]';
const OVERRIDES_TAB_SELECTOR = '[aria-label="Overrides"]';
const ENABLE_OVERRIDES_SELECTOR = '[aria-label="Select folder for overrides"]';
const CLEAR_CONFIGURATION_SELECTOR = '[aria-label="Clear configuration"]';
const OVERRIDES_FILESYSTEM_SELECTOR = '[aria-label="overrides, fs"]';
const FILE_TREE_NEW_FILE_SELECTOR = '[aria-label="NewFile, file"] .tree-element-title';
const NETWORK_VIEW_SELECTOR = '.network-item-view';
const HEADERS_TAB_SELECTOR = '[aria-label=Headers][role="tab"]';
const ACTIVE_HEADERS_TAB_SELECTOR = '[aria-label=Headers][role=tab][aria-selected=true]';
const HEADERS_VIEW_SELECTOR = '.request-headers-view';
const HEADERS_OUTLINE_SELECTOR = '[role=treeitem]:not(.hidden)';
async function enableLocalOverrides() {
    await (0, helper_js_1.click)(MORE_TABS_SELECTOR);
    await (0, helper_js_1.click)(OVERRIDES_TAB_SELECTOR);
    await (0, helper_js_1.click)(ENABLE_OVERRIDES_SELECTOR);
    await (0, helper_js_1.waitFor)(CLEAR_CONFIGURATION_SELECTOR);
}
async function createHeaderOverride() {
    await (0, sources_helpers_js_1.clickOnContextMenu)(OVERRIDES_FILESYSTEM_SELECTOR, 'New file');
    await (0, helper_js_1.waitFor)('.being-edited');
    await (0, helper_js_1.typeText)('.headers\n');
    await (0, helper_js_1.click)('.add-block');
    await (0, helper_js_1.waitFor)('.editable.apply-to');
    await (0, helper_js_1.typeText)('*.html\n');
    await (0, helper_js_1.typeText)('aaa\n');
    await (0, helper_js_1.typeText)('bbb');
    const title = await (0, helper_js_1.waitFor)(FILE_TREE_NEW_FILE_SELECTOR);
    let labelText = await title?.evaluate(el => el.textContent);
    chai_1.assert.strictEqual(labelText, '*.headers');
    await (0, helper_js_1.pressKey)('s', { control: true });
    await (0, helper_js_1.waitForFunction)(async () => {
        labelText = await title?.evaluate(el => el.textContent);
        return labelText === '.headers';
    });
}
async function openHeadersTab() {
    const networkView = await (0, helper_js_1.waitFor)(NETWORK_VIEW_SELECTOR);
    const headersTabHeader = await (0, helper_js_1.waitFor)(HEADERS_TAB_SELECTOR, networkView);
    await (0, helper_js_1.click)(headersTabHeader);
    await (0, helper_js_1.waitFor)(ACTIVE_HEADERS_TAB_SELECTOR, networkView);
}
(0, mocha_extensions_js_1.describe)('The Overrides Panel', async function () {
    this.timeout(10000);
    afterEach(async () => {
        await (0, sources_helpers_js_1.openSourcesPanel)();
        await (0, helper_js_1.click)('[aria-label="Clear configuration"]');
        await (0, helper_js_1.waitFor)(ENABLE_OVERRIDES_SELECTOR);
    });
    (0, mocha_extensions_js_1.it)('can create header overrides', async () => {
        await (0, helper_js_1.enableExperiment)('headerOverrides');
        await (0, helper_js_1.goToResource)('empty.html');
        await (0, sources_helpers_js_1.openSourcesPanel)();
        await enableLocalOverrides();
        await createHeaderOverride();
        await (0, network_helpers_js_1.navigateToNetworkTab)('hello.html');
        await (0, network_helpers_js_1.waitForSomeRequestsToAppear)(1);
        await (0, network_helpers_js_1.selectRequestByName)('hello.html');
        await openHeadersTab();
        const headersView = await (0, helper_js_1.waitFor)(HEADERS_VIEW_SELECTOR);
        const headersOutline = await (0, helper_js_1.$$)(HEADERS_OUTLINE_SELECTOR, headersView);
        const headersTextContents = await Promise.all(headersOutline.map(line => line.evaluate(message => message.textContent || '')));
        chai_1.assert.isTrue(headersTextContents.includes('aaa: bbb'), `Cannot find overridden header in: ${headersTextContents}`);
    });
});
//# sourceMappingURL=header-overrides_test.js.map