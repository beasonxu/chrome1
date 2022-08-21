// Copyright (c) 2022 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
import * as Platform from '../../../../../front_end/core/platform/platform.js';
import { renderElementIntoDOM } from '../../helpers/DOMHelpers.js';
const { assert } = chai;
describe('DOMUtilities', () => {
    describe('deepActiveElement', () => {
        it('returns the active element if there is no shadow root', () => {
            const btn = document.createElement('button');
            btn.innerText = 'Click me!';
            renderElementIntoDOM(btn);
            btn.focus();
            const activeElement = Platform.DOMUtilities.deepActiveElement(document);
            assert.strictEqual(activeElement, btn);
        });
        it('dives through the shadow root and finds the right active element', () => {
            class TestComponent extends HTMLElement {
                shadow = this.attachShadow({ mode: 'open' });
                button = document.createElement('button');
                connectedCallback() {
                    this.button.innerText = 'Click me from the shadow root!';
                    this.shadow.appendChild(this.button);
                    this.button.focus();
                }
            }
            customElements.define('dom-utilities-test-component', TestComponent);
            const component = new TestComponent();
            renderElementIntoDOM(component);
            const activeElement = Platform.DOMUtilities.deepActiveElement(document);
            assert.strictEqual(activeElement, component.button);
        });
    });
});
//# sourceMappingURL=DOMUtilities_test.js.map