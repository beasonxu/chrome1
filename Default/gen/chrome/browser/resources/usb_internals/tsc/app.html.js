import { getTrustedHTML } from 'chrome://resources/js/static_types.js';
export function getTemplate() {
    return getTrustedHTML `<!--_html_template_start_--><link rel="stylesheet" href="usb_internals.css">
<cr-tab-box sticky-tabs hidden>
  <div slot="tab">Test Devices</div>
  <div slot="tab">Devices</div>
  <div slot="panel">
    <!-- Test Devices -->
    <h2>Test Devices</h2>
    <p>
      <table class="styled-table">
        <thead>
          <tr>
            <th>Name</th>
            <th>Serial number</th>
            <th>Landing page</th>
            <th>
          </tr>
        </thead>
        <tbody id="test-device-list">
        </tbody>

        <template id="test-device-row">
          <tr>
            <td></td>
            <td></td>
            <td></td>
            <td><button>Remove</button></td>
          </tr>
        </template>

      </table>
    </p>
    <div class="page-section">
      <strong>Add a test device:</strong>
      <form id="add-test-device-form" action="">
        <p>
          <label>
            Name: <input id="test-device-name" type="text" size="40">
          </label>
        </p>
        <p>
          <label>
            Serial number:
            <input id="test-device-serial" type="text" size="40">
          </label>
        </p>
        <p>
          <label>
            Landing page:
            <input id="test-device-landing-page" type="text" size="40">
          </label>
        </p>
        <button type="submit">Add</button>
        <span id="add-test-device-result"></span>
      </form>
    </div>
  </div>

  <div slot="panel">
    <!-- Devices -->
    <h2>Devices</h2>
    <table class="styled-table">
      <thead>
        <tr>
          <th>Bus Number</th>
          <th>Port Number</th>
          <th>Vendor Id</th>
          <th>Product Id</th>
          <th>Manufacturer Name</th>
          <th>Product Name</th>
          <th>Serial Number</th>
          <th>
        </tr>
      </thead>
      <tbody id="device-list"></tbody>

      <template id="device-row">
        <tr>
          <td></td>
          <td></td>
          <td></td>
          <td></td>
          <td></td>
          <td></td>
          <td></td>
          <td><button>Inspect</button></td>
        </tr>
      </template>

    </table>
  </div>
</cr-tab-box>


<template id="tab-template">
  <div slot="tab"></div>
</template>

<template id="device-tabpanel-template">
  <div slot="panel">
    <cr-tree class="tree-view"></cr-tree>
    <div class="descriptor-button">
      <button class="device-descriptor-button">Get Device Descriptor</button>
    </div>
    <div class="device-descriptor-panel" hidden></div>
    <div class="descriptor-button">
      <button class="configuration-descriptor-button">
        Get Configuration Descriptor
      </button>
    </div>
    <div class="configuration-descriptor-panel" hidden></div>
    <div class="descriptor-button">
      <button class="string-descriptor-button">Get String Descriptor</button>
    </div>
    <div class="string-descriptor-panel" hidden>
      String Descriptor Index:
      <input id="index-input" type="number" min="1" list="indexes">
      <datalist id="indexes"></datalist>
      Language Code:
      <input id="language-code-input" list="languages">
      <datalist id="languages"></datalist>
      <button>GET</button>
    </div>
    <div class="descriptor-button">
      <button class="bos-descriptor-button">
        Get WebUSB & Microsoft OS 2.0 Descriptors
      </button>
    </div>
    <div class="bos-descriptor-panel" hidden></div>
    <div class="descriptor-button">
      <button class="testing-tool-button">Testing Tool Panel</button>
    </div>
    <div class="testing-tool-panel" hidden>
      <select id="input-type">
        <option label="Decimal with Dropdown Menu"></option>
        <option label="Hex Bytes"></option>
      </select>
      <table class="styled-table">
        <thead>
          <tr>
            <th>bmRequestType</th>
            <th>bRequest</th>
            <th>wValue</th>
            <th>wIndex</th>
            <th>wLength</th>
          </tr>
        </thead>
        <tbody id="testing-tool">
          <tr>
            <td>
              <select id="transfer-direction">
                <option label="Host-to-Device" value="Host-to-Device">
                </option>
                <option label="Device-to-Host" value="Device-to-Host">
                </option>
              </select>
              <select id="transfer-type">
                <option label="Standard" value="STANDARD"></option>
                <option label="Class" value="CLASS"></option>
                <option label="Vendor" value="VENDOR"></option>
              </select>
              <select id="transfer-recipient">
                <option label="Device" value="DEVICE"></option>
                <option label="Interface" value="INTERFACE"></option>
                <option label="Endpoint" value="ENDPOINT"></option>
                <option label="Other" value="OTHER"></option>
              </select>
            </td>
            <td><input id="query-request" type="number" placeholder="0"></td>
            <td><input id="query-value" type="number" placeholder="0"></td>
            <td><input id="query-index" type="number" placeholder="0"></td>
            <td><input id="query-length" type="number" placeholder="0"></td>
            <td><button>Send</button></td>
          </tr>
          <tr hidden>
            <td>0x<input id="query-request-type" placeholder="00"></td>
            <td>0x<input id="query-request" placeholder="00"></td>
            <td>0x<input id="query-value" placeholder="0000"></td>
            <td>0x<input id="query-index" placeholder="0000"></td>
            <td>0x<input id="query-length" placeholder="0000"></td>
            <td><button>Send</button></td>
          </tr>
        </tbody>
      </table>
      <div id="data-input-area">
        Data (in Hex):
        <textarea cols="31"></textarea>
      </div>
    </div>
  </div>
</template>

<template id="descriptor-panel-template">
  <descriptorpanel>
    <cr-tree class="raw-data-tree-view"></cr-tree>
    <div class="raw-data-byte-view"></div>
  </descriptorpanel>
</template>

<template id="raw-data-byte-container-template">
  <div></div>
</template>

<template id="raw-data-byte-template">
  <span></span>
</template>

<template id="raw-data-tree-button">
  <button>GET</button>
</template>

<template id="descriptor-panel-title">
  <descriptorpaneltitle></descriptorpaneltitle>
</template>
<!--_html_template_end_-->`;
}
