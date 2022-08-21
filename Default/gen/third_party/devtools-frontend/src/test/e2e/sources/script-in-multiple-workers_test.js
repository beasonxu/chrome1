"use strict";
// Copyright 2020 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
Object.defineProperty(exports, "__esModule", { value: true });
const chai_1 = require("chai");
const helper_js_1 = require("../../shared/helper.js");
const mocha_extensions_js_1 = require("../../shared/mocha-extensions.js");
const sources_helpers_js_1 = require("../helpers/sources-helpers.js");
async function validateSourceTabs() {
    await (0, helper_js_1.step)('Validate exactly one source file is open', async () => {
        const openSources = await (0, helper_js_1.waitForFunction)(async () => {
            const sources = await (0, sources_helpers_js_1.getOpenSources)();
            return sources.length ? sources : undefined;
        });
        chai_1.assert.deepEqual(openSources, ['multi-workers.js']);
    });
}
(0, mocha_extensions_js_1.describe)('Multi-Workers', async function () {
    // The tests in this suite are particularly slow, as they perform a lot of actions
    if (this.timeout() !== 0) {
        this.timeout(10000);
    }
    [false, true].forEach(sourceMaps => {
        const withOrWithout = sourceMaps ? 'with source maps' : 'without source maps';
        const targetPage = sourceMaps ? 'sources/multi-workers-sourcemap.html' : 'sources/multi-workers.html';
        const scriptFile = sourceMaps ? 'multi-workers.min.js' : 'multi-workers.js';
        function workerFileSelectors(workerIndex) {
            return (0, sources_helpers_js_1.createSelectorsForWorkerFile)(scriptFile, 'test/e2e/resources/sources', 'multi-workers.js', workerIndex);
        }
        async function validateNavigationTree() {
            await (0, helper_js_1.step)('Ensure 10 workers exist', async () => {
                await (0, helper_js_1.waitFor)(workerFileSelectors(10).rootSelector);
            });
        }
        async function validateBreakpoints() {
            chai_1.assert.deepEqual(await (0, sources_helpers_js_1.getBreakpointDecorators)(), [6, 12]);
            chai_1.assert.deepEqual(await (0, sources_helpers_js_1.getBreakpointDecorators)(true), [6]);
        }
        (0, mocha_extensions_js_1.describe)(`loads scripts exactly once ${withOrWithout}`, () => {
            beforeEach(async () => {
                // Have the target load the page.
                await (0, helper_js_1.goToResource)(targetPage);
                await (0, helper_js_1.step)('Open sources panel', async () => {
                    await (0, helper_js_1.click)('#tab-sources');
                });
                await validateNavigationTree();
                await (0, helper_js_1.step)('Open first worker file', async () => {
                    await (0, sources_helpers_js_1.openNestedWorkerFile)(workerFileSelectors(1));
                });
                // Look at source tabs
                await validateSourceTabs();
            });
            afterEach(async () => {
                // Look at source tabs
                await validateSourceTabs();
            });
            (0, mocha_extensions_js_1.it)('on reload', async () => {
                // Reload page
                await (0, helper_js_1.goToResource)(targetPage);
                // Check workers again
                await validateNavigationTree();
            });
            (0, mocha_extensions_js_1.it)('upon break', async () => {
                const { target } = (0, helper_js_1.getBrowserAndPages)();
                // Send message to a worker to trigger break
                await target.evaluate('workers[3].postMessage({command:"break"});');
                // Validate that we are paused by locating the resume button
                await (0, helper_js_1.waitFor)(sources_helpers_js_1.RESUME_BUTTON);
            });
        });
        (0, mocha_extensions_js_1.it)(`shows exactly one breakpoint ${withOrWithout}`, async () => {
            const { frontend } = (0, helper_js_1.getBrowserAndPages)();
            await (0, sources_helpers_js_1.waitForSourceFiles)("source-file-loaded" /* SourceFileEvents.SourceFileLoaded */, files => files.some(f => f.endsWith('multi-workers.js')), async () => {
                // Have the target load the page.
                await (0, helper_js_1.goToResource)(targetPage);
                await (0, helper_js_1.click)('#tab-sources');
                // Wait for all workers to load
                await validateNavigationTree();
                // Open file from second worker
                await (0, sources_helpers_js_1.openNestedWorkerFile)(workerFileSelectors(2));
            });
            // Set a breakpoint
            await (0, sources_helpers_js_1.addBreakpointForLine)(frontend, 6);
            await (0, helper_js_1.waitFor)('.breakpoint-entry');
            const breakpoints = (await (0, helper_js_1.$$)('.breakpoint-entry')).length;
            chai_1.assert.strictEqual(breakpoints, 1);
        });
        (0, mocha_extensions_js_1.describe)(`copies breakpoints between workers ${withOrWithout}`, () => {
            beforeEach(async () => {
                const { frontend } = (0, helper_js_1.getBrowserAndPages)();
                await (0, sources_helpers_js_1.waitForSourceFiles)("source-file-loaded" /* SourceFileEvents.SourceFileLoaded */, files => files.some(f => f.endsWith('multi-workers.js')), async () => {
                    // Have the target load the page.
                    await (0, helper_js_1.goToResource)(targetPage);
                    await (0, helper_js_1.click)('#tab-sources');
                    // Wait for all workers to load
                    await validateNavigationTree();
                    await (0, helper_js_1.step)('Open file from second worker', async () => {
                        await (0, sources_helpers_js_1.openNestedWorkerFile)(workerFileSelectors(2));
                    });
                });
                await (0, helper_js_1.step)('Set two breakpoints', async () => {
                    await (0, sources_helpers_js_1.addBreakpointForLine)(frontend, 6);
                });
                await (0, helper_js_1.step)('Disable first breakpoint', async () => {
                    const bpEntry = await (0, helper_js_1.waitFor)('.breakpoint-entry');
                    const bpCheckbox = await (0, helper_js_1.waitFor)('input', bpEntry);
                    await bpCheckbox.evaluate(n => n.click());
                    await (0, helper_js_1.waitFor)('.cm-breakpoint-disabled');
                });
                await (0, helper_js_1.step)('Add another breakpoint', async () => {
                    await (0, sources_helpers_js_1.addBreakpointForLine)(frontend, 12);
                });
                await (0, helper_js_1.step)('Check breakpoints', async () => {
                    await validateBreakpoints();
                });
                await (0, helper_js_1.step)('Close tab', async () => {
                    await (0, helper_js_1.click)('[aria-label="Close multi-workers.js"]');
                });
            });
            (0, mocha_extensions_js_1.it)('when opening different file in editor', async () => {
                // Open different worker
                await (0, helper_js_1.step)('Open different worker', async () => {
                    await (0, sources_helpers_js_1.openNestedWorkerFile)(workerFileSelectors(3));
                });
                await (0, helper_js_1.step)('Check breakpoints', async () => {
                    await validateBreakpoints();
                });
            });
            (0, mocha_extensions_js_1.it)('after reloading', async () => {
                const { target } = (0, helper_js_1.getBrowserAndPages)();
                await (0, helper_js_1.step)('Reload page', async () => {
                    await target.reload();
                });
                // FIXME(crbug/1112692): Refactor test to remove the timeout.
                await (0, helper_js_1.timeout)(100);
                await (0, helper_js_1.step)('Open different worker', async () => {
                    await (0, sources_helpers_js_1.openNestedWorkerFile)(workerFileSelectors(4));
                });
                await (0, helper_js_1.step)('Check breakpoints', async () => {
                    await (0, helper_js_1.waitFor)('.cm-breakpoint');
                    await validateBreakpoints();
                });
            });
        });
        (0, mocha_extensions_js_1.describe)(`hits breakpoints added to workers ${withOrWithout}`, () => {
            beforeEach(async () => {
                const { frontend } = (0, helper_js_1.getBrowserAndPages)();
                await (0, sources_helpers_js_1.waitForSourceFiles)("source-file-loaded" /* SourceFileEvents.SourceFileLoaded */, files => files.some(f => f.endsWith('multi-workers.js')), async () => {
                    // Have the target load the page.
                    await (0, helper_js_1.goToResource)(targetPage);
                    await (0, helper_js_1.step)('Open sources panel', async () => {
                        await (0, helper_js_1.click)('#tab-sources');
                    });
                    await validateNavigationTree();
                    await (0, helper_js_1.step)('Open second worker file', async () => {
                        await (0, sources_helpers_js_1.openNestedWorkerFile)(workerFileSelectors(2));
                    });
                });
                await (0, helper_js_1.step)('Set breakpoint', async () => {
                    await (0, sources_helpers_js_1.addBreakpointForLine)(frontend, 6);
                });
            });
            (0, mocha_extensions_js_1.it)('for pre-loaded workers', async () => {
                const { target } = (0, helper_js_1.getBrowserAndPages)();
                // Send message to a worker to trigger break
                await target.evaluate('workers[5].postMessage({});');
                // Validate that we are paused by locating the resume button
                await (0, helper_js_1.waitFor)(sources_helpers_js_1.RESUME_BUTTON);
                // Validate that the code has paused on the breakpoint at the correct script location
                chai_1.assert.deepEqual(await (0, sources_helpers_js_1.retrieveTopCallFrameWithoutResuming)(), 'multi-workers.js:6');
                // Look at source tabs
                await validateSourceTabs();
            });
            (0, mocha_extensions_js_1.it)('for newly created workers', async () => {
                const { target } = (0, helper_js_1.getBrowserAndPages)();
                // Launch new worker to hit breakpoint
                await target.evaluate(`new Worker('${scriptFile}').postMessage({});`);
                // Validate that we are paused by locating the resume button
                await (0, helper_js_1.waitFor)(sources_helpers_js_1.RESUME_BUTTON);
                // Validate that the code has paused on the breakpoint at the correct script location
                chai_1.assert.deepEqual(await (0, sources_helpers_js_1.retrieveTopCallFrameWithoutResuming)(), 'multi-workers.js:6');
                await validateSourceTabs();
            });
        });
    });
});
//# sourceMappingURL=script-in-multiple-workers_test.js.map