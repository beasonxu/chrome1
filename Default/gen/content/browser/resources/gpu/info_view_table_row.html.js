import {getTrustedHTML} from 'chrome://resources/js/static_types.js';
export function getTemplate() {
  return getTrustedHTML`<!--_html_template_start_--><style>
  :host {
    border: none;
    display: flex;
  }

  #array {
    width: 100%;
  }

  #title {
    overflow-x: auto;
    width: 25%;
  }

  #value {
    overflow-x: auto;
    width: 75%;
  }

  :host(:not([is-array])) #array {
    display: none;
  }

  :host([is-array]) #title,
  :host([is-array]) #value {
    display: none;
  }

  div {
    border: 1px solid #777;
    margin-inline-end: -1px;
    margin-top: -1px;
  }

  .row-title {
    font-weight: bold;
  }
</style>
<div id="title">
  <span class="row-title">title</span>
</div>
<div id="value">
  <span>value</span>
</div>
<div id="array">
  <span class="row-title"></span>
</div>
<!--_html_template_end_-->`;
}