"use strict";
// Copyright 2022 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
Object.defineProperty(exports, "__esModule", { value: true });
const helper_js_1 = require("../../shared/helper.js");
const mocha_extensions_js_1 = require("../../shared/mocha-extensions.js");
const issues_helpers_js_1 = require("../helpers/issues-helpers.js");
(0, mocha_extensions_js_1.describe)('Quota Issues', async () => {
    beforeEach(async () => {
        await (0, helper_js_1.goToResource)('empty.html');
    });
    (0, mocha_extensions_js_1.it)('should display correct information', async () => {
        await (0, issues_helpers_js_1.navigateToIssuesTab)();
        const { frontend } = (0, helper_js_1.getBrowserAndPages)();
        frontend.evaluate(() => {
            const issue = {
                code: 'DeprecationIssue',
                details: {
                    deprecationIssueDetails: {
                        sourceCodeLocation: {
                            url: 'empty.html',
                            lineNumber: 1,
                            columnNumber: 1,
                        },
                        type: 'PersistentQuotaType',
                    },
                },
            };
            // @ts-ignore
            window.addIssueForTest(issue);
        });
        await (0, issues_helpers_js_1.expandIssue)();
        const issueElement = await (0, issues_helpers_js_1.getIssueByTitle)('Deprecated Feature Used');
        (0, helper_js_1.assertNotNullOrUndefined)(issueElement);
        const section = await (0, issues_helpers_js_1.getResourcesElement)('1 source', issueElement, '.affected-resource-label');
        await (0, issues_helpers_js_1.ensureResourceSectionIsExpanded)(section);
        const expectedTableRows = [
            ['empty.html:2'],
        ];
        await (0, issues_helpers_js_1.waitForTableFromResourceSectionContents)(section.content, expectedTableRows);
    });
});
//# sourceMappingURL=quota-issues_test.js.map