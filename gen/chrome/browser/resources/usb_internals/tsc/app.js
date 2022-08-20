// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
/**
 * Javascript for usb_internals.html, served from chrome://usb-internals/.
 */
import 'chrome://resources/cr_elements/cr_tab_box/cr_tab_box.js';
import { assert } from 'chrome://resources/js/assert_ts.js';
import { getTemplate } from './app.html.js';
import { DevicesPage } from './devices_page.js';
import { UsbInternalsPageHandler } from './usb_internals.mojom-webui.js';
import { UsbDeviceManagerRemote } from './usb_manager.mojom-webui.js';
import { UsbDeviceManagerTestRemote } from './usb_manager_test.mojom-webui.js';
let setupFn = () => {
    return Promise.resolve();
};
export function setSetupFn(newSetupFn) {
    setupFn = newSetupFn;
}
class UsbInternalsAppElement extends HTMLElement {
    constructor() {
        super();
        this.usbManagerTest_ = null;
        this.attachShadow({ mode: 'open' });
        const template = document.createElement('template');
        template.innerHTML = (UsbInternalsAppElement.template ||
            window.trustedTypes.emptyHTML);
        this.shadowRoot.appendChild(template.content.cloneNode(true));
    }
    static get template() {
        return getTemplate();
    }
    $(query) {
        const element = this.shadowRoot.querySelector(query);
        assert(element);
        return element;
    }
    async connectedCallback() {
        // setupFn() provides a hook for the test suite to perform setup
        // actions after the page is loaded but before any script is run.
        await setupFn();
        const pageHandler = UsbInternalsPageHandler.getRemote();
        // Connection to the UsbInternalsPageHandler instance running in the
        // browser process.
        const usbManager = new UsbDeviceManagerRemote();
        await pageHandler.bindUsbDeviceManagerInterface(usbManager.$.bindNewPipeAndPassReceiver());
        new DevicesPage(usbManager, this.shadowRoot);
        this.usbManagerTest_ = new UsbDeviceManagerTestRemote();
        await pageHandler.bindTestInterface(this.usbManagerTest_.$.bindNewPipeAndPassReceiver());
        this.$('#add-test-device-form')
            .addEventListener('submit', (event) => {
            this.addTestDevice(event);
        });
        this.refreshTestDeviceList();
        const tabbox = this.$('cr-tab-box');
        tabbox.hidden = false;
    }
    async refreshTestDeviceList() {
        assert(this.usbManagerTest_);
        const response = await this.usbManagerTest_.getTestDevices();
        const tableBody = this.$('#test-device-list');
        tableBody.innerHTML = window.trustedTypes.emptyHTML;
        const rowTemplate = this.$('#test-device-row');
        const td = rowTemplate.content.querySelectorAll('td');
        for (const device of response.devices) {
            td[0].textContent = device.name;
            td[1].textContent = device.serialNumber;
            td[2].textContent = device.landingPage.url;
            const clone = document.importNode(rowTemplate.content, true);
            const removeButton = clone.querySelector('button');
            assert(removeButton);
            removeButton.addEventListener('click', async () => {
                assert(this.usbManagerTest_);
                await this.usbManagerTest_.removeDeviceForTesting(device.guid);
                this.refreshTestDeviceList();
            });
            tableBody.appendChild(clone);
        }
    }
    async addTestDevice(event) {
        event.preventDefault();
        assert(this.usbManagerTest_);
        const response = await this.usbManagerTest_.addDeviceForTesting(this.$('#test-device-name').value, this.$('#test-device-serial').value, this.$('#test-device-landing-page').value);
        if (response.success) {
            this.refreshTestDeviceList();
        }
        this.$('#add-test-device-result').textContent =
            response.message;
        this.$('#add-test-device-result').className =
            response.success ? 'action-success' : 'action-failure';
    }
}
customElements.define('usb-internals-app', UsbInternalsAppElement);
