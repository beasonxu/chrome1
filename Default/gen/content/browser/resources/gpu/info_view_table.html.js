import {getTrustedHTML} from 'chrome://resources/js/static_types.js';
export function getTemplate() {
  return getTrustedHTML`<!--_html_template_start_--><style>
  :host {
    display: flex;
    cursor: auto;
    width: 100%;
  }

  div {
    width: 100%;
  }
</style>
<div id="info-view-table"></div>
<!--_html_template_end_-->`;
}