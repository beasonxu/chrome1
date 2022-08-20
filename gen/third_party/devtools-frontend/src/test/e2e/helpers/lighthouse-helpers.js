"use strict";
// Copyright 2020 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
Object.defineProperty(exports, "__esModule", { value: true });
exports.getAuditsBreakdown = exports.waitForStorageUsage = exports.clearSiteData = exports.openStorageView = exports.isGenerateReportButtonDisabled = exports.clickStartButton = exports.setThrottlingMethod = exports.setLegacyNavigation = exports.setClearStorage = exports.selectMode = exports.selectCategories = exports.waitForResult = exports.navigateToLighthouseTab = exports.waitForLighthousePanelContentLoaded = void 0;
const helper_js_1 = require("../../shared/helper.js");
const application_helpers_js_1 = require("./application-helpers.js");
async function waitForLighthousePanelContentLoaded() {
    await (0, helper_js_1.waitFor)('.view-container[aria-label="Lighthouse panel"]');
}
exports.waitForLighthousePanelContentLoaded = waitForLighthousePanelContentLoaded;
async function navigateToLighthouseTab(path) {
    await (0, helper_js_1.click)('#tab-lighthouse');
    await waitForLighthousePanelContentLoaded();
    if (path) {
        await (0, helper_js_1.goToResource)(path);
    }
    return (0, helper_js_1.waitFor)('.lighthouse-start-view-fr');
}
exports.navigateToLighthouseTab = navigateToLighthouseTab;
// Instead of watching the worker or controller/panel internals, we wait for the Lighthouse renderer
// to create the new report DOM. And we pull the LHR and artifacts off the lh-root node.
async function waitForResult() {
    return await (0, helper_js_1.waitForFunction)(async () => {
        const reportEl = await (0, helper_js_1.waitFor)('.lh-root');
        const result = await reportEl.evaluate(elem => {
            // @ts-expect-error we installed this obj on a DOM element
            const lhr = elem._lighthouseResultForTesting;
            // @ts-expect-error we installed this obj on a DOM element
            const artifacts = elem._lighthouseArtifactsForTesting;
            // Delete so any subsequent runs don't accidentally reuse this.
            // @ts-expect-error
            delete elem._lighthouseResultForTesting;
            // @ts-expect-error
            delete elem._lighthouseArtifactsForTesting;
            return { lhr, artifacts };
        });
        return { ...result, reportEl };
    });
}
exports.waitForResult = waitForResult;
/**
 * Set the category checkboxes
 * @param selectedCategoryIds One of 'performance'|'accessibility'|'best-practices'|'seo'|'pwa'|'lighthouse-plugin-publisher-ads'
 */
async function selectCategories(selectedCategoryIds) {
    const startViewHandle = await (0, helper_js_1.waitFor)('.lighthouse-start-view-fr');
    const checkboxHandles = await startViewHandle.$$('[is=dt-checkbox]');
    for (const checkboxHandle of checkboxHandles) {
        await checkboxHandle.evaluate((dtCheckboxElem, selectedCategoryIds) => {
            const elem = dtCheckboxElem;
            const categoryId = elem.getAttribute('data-lh-category') || '';
            elem.checkboxElement.checked = selectedCategoryIds.includes(categoryId);
            elem.checkboxElement.dispatchEvent(new Event('change')); // Need change event to update the backing setting.
        }, selectedCategoryIds);
    }
}
exports.selectCategories = selectCategories;
async function selectMode(device) {
    const startViewHandle = await (0, helper_js_1.waitFor)('.lighthouse-start-view-fr');
    await startViewHandle.$eval(`input[value="${device}"][name="lighthouse.device_type"]`, radioElem => {
        radioElem.checked = true;
        radioElem
            .dispatchEvent(new Event('change')); // Need change event to update the backing setting.
    });
}
exports.selectMode = selectMode;
async function setClearStorage(enabled) {
    const toolbarHandle = await (0, helper_js_1.waitFor)('.lighthouse-settings-pane .toolbar');
    const label = await (0, helper_js_1.waitForElementWithTextContent)('Clear storage', toolbarHandle);
    await label.evaluate((label, enabled) => {
        const rootNode = label.getRootNode();
        const checkboxId = label.getAttribute('for');
        const checkboxElem = rootNode.getElementById(checkboxId);
        checkboxElem.checked = enabled;
        checkboxElem.dispatchEvent(new Event('change')); // Need change event to update the backing setting.
    }, enabled);
}
exports.setClearStorage = setClearStorage;
async function setLegacyNavigation(enabled) {
    const toolbarHandle = await (0, helper_js_1.waitFor)('.lighthouse-settings-pane .toolbar');
    const label = await (0, helper_js_1.waitForElementWithTextContent)('Legacy navigation', toolbarHandle);
    await label.evaluate((label, enabled) => {
        const rootNode = label.getRootNode();
        const checkboxId = label.getAttribute('for');
        const checkboxElem = rootNode.getElementById(checkboxId);
        checkboxElem.checked = enabled;
        checkboxElem.dispatchEvent(new Event('change')); // Need change event to update the backing setting.
    }, enabled);
}
exports.setLegacyNavigation = setLegacyNavigation;
async function setThrottlingMethod(throttlingMethod) {
    const toolbarHandle = await (0, helper_js_1.waitFor)('.lighthouse-settings-pane .toolbar');
    await toolbarHandle.evaluate((toolbar, throttlingMethod) => {
        const selectElem = toolbar.shadowRoot?.querySelector('select');
        const optionElem = selectElem.querySelector(`option[value="${throttlingMethod}"]`);
        optionElem.selected = true;
        selectElem.dispatchEvent(new Event('change')); // Need change event to update the backing setting.
    }, throttlingMethod);
}
exports.setThrottlingMethod = setThrottlingMethod;
async function clickStartButton() {
    const panel = await (0, helper_js_1.waitFor)('.lighthouse-start-view-fr');
    const button = await (0, helper_js_1.waitFor)('button', panel);
    await button.click();
}
exports.clickStartButton = clickStartButton;
async function isGenerateReportButtonDisabled() {
    const button = await (0, helper_js_1.waitFor)('.lighthouse-start-view-fr .primary-button');
    return button.evaluate(element => element.disabled);
}
exports.isGenerateReportButtonDisabled = isGenerateReportButtonDisabled;
async function openStorageView() {
    await (0, helper_js_1.click)('#tab-resources');
    const STORAGE_SELECTOR = '[aria-label="Storage"]';
    await (0, helper_js_1.waitFor)('.storage-group-list-item');
    await (0, helper_js_1.waitFor)(STORAGE_SELECTOR);
    await (0, helper_js_1.click)(STORAGE_SELECTOR);
}
exports.openStorageView = openStorageView;
async function clearSiteData() {
    await (0, helper_js_1.goToResource)('empty.html');
    await openStorageView();
    await (0, helper_js_1.click)('#storage-view-clear-button');
    await (0, application_helpers_js_1.waitForQuotaUsage)(quota => quota === 0);
}
exports.clearSiteData = clearSiteData;
async function waitForStorageUsage(p) {
    await openStorageView();
    await (0, application_helpers_js_1.waitForQuotaUsage)(p);
    await (0, helper_js_1.click)('#tab-lighthouse');
}
exports.waitForStorageUsage = waitForStorageUsage;
// eslint-disable-next-line @typescript-eslint/no-explicit-any
function getAuditsBreakdown(lhr, flakyAudits = []) {
    // eslint-disable-next-line @typescript-eslint/no-explicit-any
    const auditResults = Object.values(lhr.audits);
    const irrelevantDisplayModes = new Set(['notApplicable', 'manual']);
    const applicableAudits = auditResults.filter(audit => !irrelevantDisplayModes.has(audit.scoreDisplayMode));
    const informativeAudits = applicableAudits.filter(audit => audit.scoreDisplayMode === 'informative');
    const erroredAudits = applicableAudits.filter(audit => audit.score === null && audit && !informativeAudits.includes(audit));
    // 0.5 is the minimum score before we consider an audit "failed"
    // https://github.com/GoogleChrome/lighthouse/blob/d956ec929d2b67028279f5e40d7e9a515a0b7404/report/renderer/util.js#L27
    const failedAudits = applicableAudits.filter(audit => audit.score !== null && audit.score < 0.5 && !flakyAudits.includes(audit.id));
    return { auditResults, erroredAudits, failedAudits };
}
exports.getAuditsBreakdown = getAuditsBreakdown;
//# sourceMappingURL=lighthouse-helpers.js.map