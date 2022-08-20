// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
/**
 * @fileoverview Base class for Web Components that don't use Polymer.
 * See the following file for usage:
 * chrome/test/data/webui/js/custom_element_test.js
 */
function emptyHTML() {
    return window.trustedTypes ? window.trustedTypes.emptyHTML : '';
}
export class CustomElement extends HTMLElement {
    static get template() {
        return emptyHTML();
    }
    constructor() {
        super();
        this.attachShadow({ mode: 'open' });
        const template = document.createElement('template');
        const html = this.constructor.template || emptyHTML();
        // This is a workaround for the fact that the innerHTML setter only accepts
        // a string and not TrustedHTML.
        template.innerHTML = html;
        this.shadowRoot.appendChild(template.content.cloneNode(true));
    }
    $(query) {
        return this.shadowRoot.querySelector(query);
    }
    $all(query) {
        return this.shadowRoot.querySelectorAll(query);
    }
}
