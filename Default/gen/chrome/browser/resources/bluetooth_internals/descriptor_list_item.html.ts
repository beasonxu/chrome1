import {getTrustedHTML} from 'chrome://resources/js/static_types.js';
export function getTemplate() {
  return getTrustedHTML`<!--_html_template_start_--><style>
  :host {
    --brief-content-background-color: var(--darker-primary-color);
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

  h3 {
    font-weight: normal;
    line-height: 1;
    user-select: none;
  }
</style>
<expandable-list-item>
  <div slot="brief-content">
    <div>Descriptor:</div>
    <div class="header-value"></div>
  </div>
  <div slot="expanded-content" class="info-container">
    <h4>Descriptor Info</h4>
    <div class="flex"></div>
    <h4>Value</h4>
  </div>
</expandable-list-item>
<!--_html_template_end_-->`;
}