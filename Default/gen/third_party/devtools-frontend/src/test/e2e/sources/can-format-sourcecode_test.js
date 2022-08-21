"use strict";
// Copyright 2020 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
Object.defineProperty(exports, "__esModule", { value: true });
const chai_1 = require("chai");
const helper_js_1 = require("../../shared/helper.js");
const mocha_extensions_js_1 = require("../../shared/mocha-extensions.js");
const sources_helpers_js_1 = require("../helpers/sources-helpers.js");
const PRETTY_PRINT_BUTTON = '[aria-label="Pretty print minified-sourcecode.js"]';
async function retrieveCodeMirrorEditorContent() {
    const editor = await (0, helper_js_1.waitFor)('[aria-label="Code editor"]');
    return editor.evaluate(node => [...node.querySelectorAll('.cm-line')].map(node => node.textContent || '') || []);
}
async function prettyPrintMinifiedFile() {
    const source = await (0, sources_helpers_js_1.getSelectedSource)();
    await (0, sources_helpers_js_1.waitForSourceFiles)("source-file-loaded" /* SourceFileEvents.SourceFileLoaded */, files => files.some(f => f.endsWith(`${source}:formatted`)), async () => {
        const previousTextContent = await retrieveCodeMirrorEditorContent();
        await (0, helper_js_1.waitFor)(PRETTY_PRINT_BUTTON);
        await (0, helper_js_1.click)(PRETTY_PRINT_BUTTON);
        // A separate editor is opened which shows the formatted file
        await (0, helper_js_1.waitForFunction)(async () => {
            const currentTextContent = await retrieveCodeMirrorEditorContent();
            return currentTextContent.join('\n') !== previousTextContent.join('\n');
        });
    });
}
(0, mocha_extensions_js_1.describe)('The Sources Tab', async function () {
    // The tests in this suite are particularly slow, as they perform a lot of actions
    if (this.timeout() > 0) {
        this.timeout(10000);
    }
    (0, mocha_extensions_js_1.it)('can format a JavaScript file', async () => {
        await (0, sources_helpers_js_1.openSourceCodeEditorForFile)('minified-sourcecode.js', 'minified-sourcecode.html');
        await prettyPrintMinifiedFile();
        const expectedLines = [
            '// Copyright 2020 The Chromium Authors. All rights reserved.',
            '// Use of this source code is governed by a BSD-style license that can be',
            '// found in the LICENSE file.',
            '// clang-format off',
            'const notFormatted = {',
            '    something: \'not-formatted\'',
            '};',
            'console.log(\'Test for correct line number\');',
            'function notFormattedFunction() {',
            '    console.log(\'second log\');',
            '    return {',
            '        field: 2 + 4',
            '    }',
            '}',
            ';notFormattedFunction();',
            '',
        ];
        const updatedTextContent = await retrieveCodeMirrorEditorContent();
        chai_1.assert.strictEqual(updatedTextContent.join('\n'), expectedLines.join('\n'));
    });
    (0, mocha_extensions_js_1.it)('causes the correct line number to show up in the console panel', async () => {
        await (0, sources_helpers_js_1.openSourceCodeEditorForFile)('minified-sourcecode.js', 'minified-sourcecode.html');
        await prettyPrintMinifiedFile();
        await (0, helper_js_1.click)('#tab-console');
        await (0, helper_js_1.waitFor)('.console-group-messages');
        const messages = await (0, helper_js_1.waitForFunction)(async () => {
            const messages = await (0, helper_js_1.$$)('.console-group-messages .source-code');
            return messages.length === 2 ? messages : undefined;
        });
        const messageLinks = await Promise.all(messages.map(messageHandle => (messageHandle.evaluate(message => {
            const messageText = message.querySelector('.console-message-text');
            const lineNumber = message.querySelector('.console-message-anchor');
            if (!messageText) {
                chai_1.assert.fail('Could not find console message text element');
            }
            if (!lineNumber) {
                chai_1.assert.fail('Could not find console line number element');
            }
            return ({
                message: messageText.textContent,
                lineNumber: lineNumber.textContent,
            });
        }))));
        chai_1.assert.deepEqual(messageLinks, [
            {
                message: 'Test for correct line number',
                lineNumber: 'minified-sourcecode.js:formatted:8 ',
            },
            {
                message: 'second log',
                lineNumber: 'minified-sourcecode.js:formatted:10 ',
            },
        ]);
    });
    (0, mocha_extensions_js_1.it)('can add breakpoint for formatted file', async () => {
        const { target, frontend } = (0, helper_js_1.getBrowserAndPages)();
        await (0, sources_helpers_js_1.openSourceCodeEditorForFile)('minified-sourcecode.js', 'minified-sourcecode.html');
        await prettyPrintMinifiedFile();
        await (0, sources_helpers_js_1.addBreakpointForLine)(frontend, 10);
        const scriptLocation = await (0, sources_helpers_js_1.retrieveTopCallFrameScriptLocation)('notFormattedFunction();', target);
        chai_1.assert.deepEqual(scriptLocation, 'minified-source…s:formatted:10');
    });
    (0, mocha_extensions_js_1.it)('can add breakpoint for unformatted file', async () => {
        const { target, frontend } = (0, helper_js_1.getBrowserAndPages)();
        await (0, sources_helpers_js_1.openSourceCodeEditorForFile)('minified-sourcecode.js', 'minified-sourcecode.html');
        await (0, sources_helpers_js_1.addBreakpointForLine)(frontend, 6);
        const scriptLocation = await (0, sources_helpers_js_1.retrieveTopCallFrameScriptLocation)('notFormattedFunction();', target);
        chai_1.assert.deepEqual(scriptLocation, 'minified-sourcecode.js:6');
    });
    (0, mocha_extensions_js_1.it)('can add breakpoint on minified source and then break correctly on formatted source', async () => {
        const { target, frontend } = (0, helper_js_1.getBrowserAndPages)();
        await (0, sources_helpers_js_1.openSourceCodeEditorForFile)('minified-sourcecode.js', 'minified-sourcecode.html');
        await (0, sources_helpers_js_1.addBreakpointForLine)(frontend, 6);
        await prettyPrintMinifiedFile();
        const scriptLocation = await (0, sources_helpers_js_1.retrieveTopCallFrameScriptLocation)('notFormattedFunction();', target);
        chai_1.assert.deepEqual(scriptLocation, 'minified-source…s:formatted:10');
    });
});
//# sourceMappingURL=can-format-sourcecode_test.js.map