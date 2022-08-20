import {getTrustedHTML} from 'chrome://resources/js/static_types.js';
export function getTemplate() {
  return getTrustedHTML`<!--_html_template_start_--><style>
  .brief-content {
    align-items: center;
    background-color: var(--brief-content-background-color, white);
    border-bottom: var(--divider-border);
    color: white;
    cursor: pointer;
    display: flex;
    font-weight: 600;
    height: 40px;
    padding: 8px;
  }

  .expanded-content {
    height: 0;
    overflow: hidden;
  }

  :host([expanded]) .expanded-content {
    height: auto;
  }
</style>
<div class="brief-content">
  <slot name="brief-content"></slot>
</div>
<div class="expanded-content">
  <slot name="expanded-content"></slot>
</div>
<!--_html_template_end_-->`;
}