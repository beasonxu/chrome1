import {getTrustedHTML} from 'chrome://resources/js/static_types.js';
export function getTemplate() {
  return getTrustedHTML`<!--_html_template_start_--><style>
  :host {
    --brief-content-background-color: var(--dark-primary-color);
  }

  .info-container > h4,
  .info-container > div {
    margin: 1em;
  }

  /* Object Fieldset */
  .object-fieldset .status {
    align-items: center;
    display: flex;
    margin-bottom: 0.8em;
  }

  .object-fieldset .status div:first-child {
    margin-inline-end: 1em;
    white-space: nowrap;
  }

  .object-fieldset .status:last-child {
    margin-bottom: 0;
  }

  .toggle-status {
    background-image: url(chrome://resources/images/cancel_red.svg);
    background-repeat: no-repeat;
    min-height: 24px;
    min-width: 24px;
  }

  .toggle-status.checked {
    background-image:
        url(chrome://resources/images/check_circle_green.svg);
  }

  /* Object Fieldset Container */
  .flex {
    overflow-x: auto;
  }

  @media screen and (min-width: 601px) {
    .flex {
      display: flex;
    }
  }

  /* Value Control */
  .value-control > div {
    display: flex;
    margin: 4px 0;
  }

  .value-control > div > input {
    flex-grow: 1;
  }

  .value-control > div:nth-of-type(2) {
    justify-content: flex-end;
  }

  button.show-all-properties {
    background-image: linear-gradient(#ededed, #ededed 38%, #dedede);
    border: 1px solid rgba(0, 0, 0, 0.25);
    border-radius: 2px;
    box-shadow: 0 1px 0 rgba(0, 0, 0, 0.08),
        inset 0 1px 2px rgba(255, 255, 255, 0.75);
    color: #444;
    font: inherit;
    margin: 10px;
    min-height: 2em;
    min-width: 4em;
    outline: none;
    padding: 1px 10px;
    text-shadow: 0 1px 0 rgb(240, 240, 240);
    user-select: none;
  }

  button.show-all-properties:hover {
    background-image: -webkit-linear-gradient(#f0f0f0, #f0f0f0 38%, #e0e0e0);
    border-color: rgba(0, 0, 0, 0.3);
    box-shadow: 0 1px 0 rgba(0, 0, 0, 0.12),
        inset 0 1px 2px rgba(255, 255, 255, 0.95);
    color: black;
  }

  button.show-all-properties:active {
    background-image: -webkit-linear-gradient(#e7e7e7, #e7e7e7 38%, #d7d7d7);
    box-shadow: none;
    text-shadow: none;
  }

  button.show-all-properties:focus {
    border-color: rgb(77, 144, 254);
    outline: none;
    /* OVERRIDE */
    transition: border-color 200ms;
  }

  h3 {
    font-weight: normal;
    line-height: 1;
    user-select: none;
  }
</style>
<expandable-list-item>
  <div slot="brief-content">
    <div>Characteristic:</div>
    <div class="header-value"></div>
  </div>
  <div slot="expanded-content" class="info-container">
    <h4>Characteristic Info</h4>
    <div class="flex characteristic-div"></div>
    <h4>Properties<button class="show-all-properties">Show All</button></h4>
    <div class="flex properties-div"></div>
    <h4>Descriptors</h4>
    <descriptor-list></descriptor-list>
    <h4>Value</h4>
  </div>
</expandable-list-item>
<!--_html_template_end_-->`;
}