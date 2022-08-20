import {getTrustedHTML} from 'chrome://resources/js/static_types.js';
export function getTemplate() {
  return getTrustedHTML`<!--_html_template_start_--><style>
  :host {
    list-style-type: none;
    outline: none;
  }

  .spinner {
    background-image: url(chrome://resources/images/throbber_small.svg);
    background-size: 100%;
    height: 48px;
    margin: 0 auto;
    pointer-events: none;
    width: 48px;
  }

  .empty-message {
    font-weight: normal;
    line-height: 1;
    padding-inline-start: calc(2 * var(--section-padding));
    user-select: none;
  }
</style>
<h3 class="empty-message" hidden></h3>
<div class="list-items"></div>
<div class="spinner"></div>
<!--_html_template_end_-->`;
}