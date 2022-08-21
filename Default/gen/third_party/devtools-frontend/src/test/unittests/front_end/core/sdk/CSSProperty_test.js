// Copyright 2022 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
const { assert } = chai;
import * as SDK from '../../../../../front_end/core/sdk/sdk.js';
import { describeWithEnvironment } from '../../helpers/EnvironmentHelpers.js';
describeWithEnvironment('CSSProperty', () => {
    describe('formatStyle', () => {
        const formatStyle = (styleText, indentation = ' ', endIndentation = '') => SDK.CSSProperty.CSSProperty.formatStyle(styleText, indentation, endIndentation);
        it('formats a style declaration with a single trailing semicolon correctly', async () => {
            assert.strictEqual(await formatStyle('color: red;'), '\n color: red;\n');
        });
        it('formats a style declaration with multiple trailing semicolons correctly', async () => {
            assert.strictEqual(await formatStyle('color: red;;;'), '\n color: red;\n');
        });
        it('formats two style declarations correctly', async () => {
            assert.strictEqual(await formatStyle('color: red;;;color: blue'), '\n color: red;\n color: blue\n');
        });
        it('formats multiple style declarations correctly', async () => {
            assert.strictEqual(await formatStyle('color: var(-);margin: 0;padding:0'), '\n color: var(-);margin: 0;padding:0\n');
        });
        it('formats style declarations with comments correctly', async () => {
            assert.strictEqual(await formatStyle('color: red;/* a comment */;color: blue'), '\n color: red;/* a comment */\n color: blue\n');
        });
        it('formats an empty decalaration correctly', async () => {
            assert.strictEqual(await formatStyle(':; color: red; color: blue'), ':;\n color: red;\n color: blue\n');
        });
        it('formats an empty decalaration correctly and doesn\'t format comments', async () => {
            assert.strictEqual(await formatStyle('color: red;/* a comment;;; */ :; color: blue;'), '\n color: red;/* a comment;;; */ :;\n color: blue;\n');
        });
        it('formats a decalaration with line names correctly', async () => {
            assert.strictEqual(await formatStyle('grid: [first-row-start] "a a" 10px [first-row-end] [second-row-start] "b b" 20px / 100px'), '\n grid: [first-row-start] "a a" 10px [first-row-end] [second-row-start] "b b" 20px / 100px\n');
        });
        it('formats shorthand declaration with a variable correctly', async () => {
            assert.strictEqual(await formatStyle('border: 1px solid var(--border-color);;', '', ''), 'border: 1px solid var(--border-color);');
        });
        it('formats shorthand declaration with a function correctly', async () => {
            assert.strictEqual(await formatStyle('border: 1px solid rgb(0,0,0);;', '', ''), 'border: 1px solid rgb(0,0,0);');
        });
        it('formats declaration with unknown property that contains a function correctly', async () => {
            assert.strictEqual(await formatStyle('unknownProperty: rgba(0,0,0,0);;', '', ''), 'unknownProperty: rgba(0,0,0,0);');
        });
    });
});
//# sourceMappingURL=CSSProperty_test.js.map