// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
/**
 * Javascript for DevicesPage, served from
 *     chrome://usb-internals/.
 */
import 'chrome://resources/cr_elements/cr_tree/cr_tree.js';
import 'chrome://resources/cr_elements/cr_tree/cr_tree_item.js';
import { assert } from 'chrome://resources/js/assert_ts.js';
import { DescriptorPanel, renderClassCodeWithDescription } from './descriptor_panel.js';
import { UsbDeviceRemote, UsbTransferDirection, UsbTransferType } from './usb_device.mojom-webui.js';
/**
 * Page that contains a tab header and a tab panel displaying devices table.
 */
export class DevicesPage {
    constructor(usbManager, root) {
        this.usbManager_ = usbManager;
        this.root_ = root;
        this.renderDeviceList_();
    }
    /**
     * Sets the device collection for the page's device table.
     */
    async renderDeviceList_() {
        const response = await this.usbManager_.getDevices(null);
        const devices = response.results;
        const tableBody = this.root_.querySelector('#device-list');
        assert(tableBody);
        tableBody.innerHTML = window.trustedTypes.emptyHTML;
        const rowTemplate = this.root_.querySelector('#device-row');
        assert(rowTemplate);
        for (const device of devices) {
            const clone = document.importNode(rowTemplate.content, true);
            const td = clone.querySelectorAll('td');
            td[0].textContent = String(device.busNumber);
            td[1].textContent = String(device.portNumber);
            td[2].textContent = toHex(device.vendorId);
            td[3].textContent = toHex(device.productId);
            if (device.manufacturerName) {
                td[4].textContent = decodeString16(device.manufacturerName);
            }
            if (device.productName) {
                td[5].textContent = decodeString16(device.productName);
            }
            if (device.serialNumber) {
                td[6].textContent = decodeString16(device.serialNumber);
            }
            const inspectButton = clone.querySelector('button');
            assert(inspectButton);
            inspectButton.addEventListener('click', () => {
                this.switchToTab_(device);
            });
            tableBody.appendChild(clone);
        }
        document.body.dispatchEvent(new CustomEvent('device-list-complete-for-test', { bubbles: true, composed: true }));
    }
    /**
     * Switches to the device's tab, creating one if necessary.
     */
    switchToTab_(device) {
        const tabs = Array.from(this.root_.querySelectorAll('div[slot=\'tab\']'));
        const tabId = device.guid;
        let index = tabs.findIndex(tab => tab.id === tabId);
        if (index === -1) {
            new DevicePage(this.usbManager_, device, this.root_);
            index = tabs.length;
        }
        const tabBox = this.root_.querySelector('cr-tab-box');
        assert(tabBox);
        tabBox.setAttribute('selected-index', String(index));
    }
}
/**
 * Page that contains a tree view displaying devices detail and can get
 * descriptors.
 */
class DevicePage {
    constructor(usbManager, device, root) {
        this.usbManager_ = usbManager;
        this.root = root;
        this.renderTab_(device);
    }
    /**
     * Renders a tab to display a tree view showing device's detail information.
     */
    renderTab_(device) {
        const tabBox = this.root.querySelector('cr-tab-box');
        assert(tabBox);
        const tabTemplate = this.root.querySelector('#tab-template');
        assert(tabTemplate);
        const tabClone = document.importNode(tabTemplate.content, true);
        const tab = tabClone.querySelector('div[slot=\'tab\']');
        assert(tab);
        if (device.productName && device.productName.data.length > 0) {
            tab.textContent = decodeString16(device.productName);
        }
        else {
            const vendorId = toHex(device.vendorId).slice(2);
            const productId = toHex(device.productId).slice(2);
            tab.textContent = `${vendorId}:${productId}`;
        }
        tab.id = device.guid;
        const firstPanel = tabBox.querySelector('div[slot=\'panel\']');
        tabBox.insertBefore(tab, firstPanel);
        const tabPanelTemplate = this.root.querySelector('#device-tabpanel-template');
        assert(tabPanelTemplate);
        const tabPanelClone = document.importNode(tabPanelTemplate.content, true);
        /**
         * Root of the WebContents tree of current device.
         */
        const treeViewRoot = tabPanelClone.querySelector('.tree-view');
        assert(treeViewRoot);
        treeViewRoot.detail = { payload: {}, children: {} };
        // Clear the tree first before populating it with the new content.
        treeViewRoot.innerText = '';
        renderDeviceTree(device, treeViewRoot);
        const tabPanel = tabPanelClone.querySelector('div[slot=\'panel\']');
        assert(tabPanel);
        this.initializeDescriptorPanels_(tabPanel, device.guid);
        tabBox.appendChild(tabPanel);
    }
    /**
     * Initializes all the descriptor panels.
     */
    async initializeDescriptorPanels_(tabPanel, guid) {
        const usbDevice = new UsbDeviceRemote();
        assert(this.usbManager_);
        await this.usbManager_.getDevice(guid, /*blocked_interface_classes=*/ [], usbDevice.$.bindNewPipeAndPassReceiver(), /*device_client=*/ null);
        const deviceDescriptorPanel = initialInspectorPanel(tabPanel, 'device-descriptor', usbDevice, guid);
        const configurationDescriptorPanel = initialInspectorPanel(tabPanel, 'configuration-descriptor', usbDevice, guid);
        const stringDescriptorPanel = initialInspectorPanel(tabPanel, 'string-descriptor', usbDevice, guid);
        deviceDescriptorPanel.setStringDescriptorPanel(stringDescriptorPanel);
        configurationDescriptorPanel.setStringDescriptorPanel(stringDescriptorPanel);
        initialInspectorPanel(tabPanel, 'bos-descriptor', usbDevice, guid);
        initialInspectorPanel(tabPanel, 'testing-tool', usbDevice, guid);
        document.body.dispatchEvent(new CustomEvent('device-tab-initialized-for-test', { bubbles: true, composed: true }));
    }
}
/**
 * Renders a tree to display the device's detail information.
 */
function renderDeviceTree(device, root) {
    root.add(customTreeItem(`USB Version: ${device.usbVersionMajor}.${device.usbVersionMinor}.${device.usbVersionSubminor}`));
    root.add(customTreeItem(`Class Code: ${renderClassCodeWithDescription(device.classCode)}`));
    root.add(customTreeItem(`Subclass Code: ${device.subclassCode}`));
    root.add(customTreeItem(`Protocol Code: ${device.protocolCode}`));
    root.add(customTreeItem(`Port Number: ${device.portNumber}`));
    root.add(customTreeItem(`Vendor Id: ${toHex(device.vendorId)}`));
    root.add(customTreeItem(`Product Id: ${toHex(device.productId)}`));
    root.add(customTreeItem(`Device Version: ${device.deviceVersionMajor}.${device.deviceVersionMinor}.${device.deviceVersionSubminor}`));
    if (device.manufacturerName) {
        root.add(customTreeItem(`Manufacturer Name: ${decodeString16(device.manufacturerName)}`));
    }
    if (device.productName) {
        root.add(customTreeItem(`Product Name: ${decodeString16(device.productName)}`));
    }
    if (device.serialNumber) {
        root.add(customTreeItem(`Serial Number: ${decodeString16(device.serialNumber)}`));
    }
    if (device.webusbLandingPage) {
        const urlItem = customTreeItem(`WebUSB Landing Page: ${device.webusbLandingPage.url}`);
        root.add(urlItem);
        urlItem.labelElement.addEventListener('click', () => window.open(device.webusbLandingPage.url, '_blank'));
    }
    root.add(customTreeItem(`Active Configuration: ${device.activeConfiguration}`));
    const configurationsArray = device.configurations;
    renderConfigurationTreeItem(configurationsArray, root);
}
/**
 * Renders a tree item to display the device's configuration information.
 */
function renderConfigurationTreeItem(configurationsArray, root) {
    for (const configuration of configurationsArray) {
        const configurationItem = customTreeItem(`Configuration ${configuration.configurationValue}`);
        if (configuration.configurationName) {
            configurationItem.add(customTreeItem(`Configuration Name: ${decodeString16(configuration.configurationName)}`));
        }
        const interfacesArray = configuration.interfaces;
        renderInterfacesTreeItem(interfacesArray, configurationItem);
        root.add(configurationItem);
    }
}
/**
 * Renders a tree item to display the device's interface information.
 */
function renderInterfacesTreeItem(interfacesArray, root) {
    for (const currentInterface of interfacesArray) {
        const interfaceItem = customTreeItem(`Interface ${currentInterface.interfaceNumber}`);
        const alternatesArray = currentInterface.alternates;
        renderAlternatesTreeItem(alternatesArray, interfaceItem);
        root.add(interfaceItem);
    }
}
/**
 * Renders a tree item to display the device's alternate interfaces
 * information.
 */
function renderAlternatesTreeItem(alternatesArray, root) {
    for (const alternate of alternatesArray) {
        const alternateItem = customTreeItem(`Alternate ${alternate.alternateSetting}`);
        alternateItem.add(customTreeItem(`Class Code: ${renderClassCodeWithDescription(alternate.classCode)}`));
        alternateItem.add(customTreeItem(`Subclass Code: ${alternate.subclassCode}`));
        alternateItem.add(customTreeItem(`Protocol Code: ${alternate.protocolCode}`));
        if (alternate.interfaceName) {
            alternateItem.add(customTreeItem(`Interface Name: ${decodeString16(alternate.interfaceName)}`));
        }
        const endpointsArray = alternate.endpoints;
        renderEndpointsTreeItem(endpointsArray, alternateItem);
        root.add(alternateItem);
    }
}
/**
 * Renders a tree item to display the device's endpoints information.
 */
function renderEndpointsTreeItem(endpointsArray, root) {
    for (const endpoint of endpointsArray) {
        let itemLabel = 'Endpoint ';
        itemLabel += endpoint.endpointNumber;
        switch (endpoint.direction) {
            case UsbTransferDirection.INBOUND:
                itemLabel += ' (INBOUND)';
                break;
            case UsbTransferDirection.OUTBOUND:
                itemLabel += ' (OUTBOUND)';
                break;
        }
        const endpointItem = customTreeItem(itemLabel);
        let usbTransferType = '';
        switch (endpoint.type) {
            case UsbTransferType.CONTROL:
                usbTransferType = 'CONTROL';
                break;
            case UsbTransferType.ISOCHRONOUS:
                usbTransferType = 'ISOCHRONOUS';
                break;
            case UsbTransferType.BULK:
                usbTransferType = 'BULK';
                break;
            case UsbTransferType.INTERRUPT:
                usbTransferType = 'INTERRUPT';
                break;
        }
        endpointItem.add(customTreeItem(`USB Transfer Type: ${usbTransferType}`));
        endpointItem.add(customTreeItem(`Packet Size: ${endpoint.packetSize}`));
        root.add(endpointItem);
    }
}
/**
 * Initialize a descriptor panel.
 */
function initialInspectorPanel(tabPanel, panelType, usbDevice, guid) {
    const button = tabPanel.querySelector(`.${panelType}-button`);
    assert(button);
    const displayElement = tabPanel.querySelector(`.${panelType}-panel`);
    assert(displayElement);
    const descriptorPanel = new DescriptorPanel(usbDevice, displayElement);
    switch (panelType) {
        case 'string-descriptor':
            descriptorPanel.initialStringDescriptorPanel(guid);
            break;
        case 'testing-tool':
            descriptorPanel.initialTestingToolPanel();
            break;
    }
    button.addEventListener('click', async () => {
        displayElement.hidden = !displayElement.hidden;
        // Clear the panel before rendering new data.
        descriptorPanel.clearView();
        if (!displayElement.hidden) {
            switch (panelType) {
                case 'device-descriptor':
                    await descriptorPanel.getDeviceDescriptor();
                    break;
                case 'configuration-descriptor':
                    await descriptorPanel.getConfigurationDescriptor();
                    break;
                case 'string-descriptor':
                    await descriptorPanel.getAllLanguageCodes();
                    break;
                case 'bos-descriptor':
                    await descriptorPanel.getBosDescriptor();
                    break;
            }
        }
    });
    return descriptorPanel;
}
/**
 * Parses utf16 coded string.
 */
function decodeString16(arr) {
    return arr.data.map(ch => String.fromCodePoint(ch)).join('');
}
/**
 * Parses the decimal number to hex format.
 */
function toHex(num) {
    return `0x${num.toString(16).padStart(4, '0').toUpperCase()}`;
}
/**
 * Renders a customized TreeItem with the given content and class name.
 */
function customTreeItem(itemLabel) {
    const item = document.createElement('cr-tree-item');
    item.label = itemLabel;
    return item;
}
