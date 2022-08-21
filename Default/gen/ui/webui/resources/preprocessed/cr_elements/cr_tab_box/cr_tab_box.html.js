import { getTrustedHTML } from 'chrome://resources/js/static_types.js';
export function getTemplate() {
    return getTrustedHTML `<!--_html_template_start_--><style>:host{display:flex;flex-direction:column;width:fit-content;--tabs-background-color:#fbfbfb;--tabs-border-color:#c8c8c8;--tabs-hover-text-color:black;--tabs-unselected-text-color:#646464}#tablist{background:var(--tabs-background-color);border-bottom:1px solid var(--tabs-border-color);display:flex;margin:0;padding-inline-start:9px;padding-top:14px}:host([sticky-tabs]) #tablist{position:sticky;top:0;z-index:var(--cr-tab-box-tabs-z-index,1)}#tablist ::slotted(*){background:var(--tabs-background-color);border:1px solid var(--tabs-background-color);border-bottom:0;border-radius:0;cursor:default;display:block;margin-inline-start:0;padding:4px 9px 4px 10px;text-align:center;transition:none}#tablist ::slotted(:not([selected])){color:var(--tabs-unselected-text-color)}#tablist ::slotted(:not([selected]):hover){color:var(--tabs-hover-text-color)}#tablist ::slotted([selected]){border-color:var(--tabs-border-color);font-weight:700;margin-bottom:-1px;position:relative;transition:none;z-index:0}#tablist:focus{outline:0}html.focus-outline-visible #tablist:focus ::slotted([selected]){outline:5px auto -webkit-focus-ring-color;outline-offset:-2px}#tabpanels{background:var(--tabs-background-color);box-shadow:none;display:flex;flex:1;overflow:hidden;padding:0 20px}#tabpanels ::slotted([slot=panel]){display:none;flex:1}#tabpanels ::slotted([slot=panel][selected]){display:block}</style>

<div id="tablist">
  <slot name="tab"></slot>
</div>
<div id="tabpanels">
  <slot name="panel"></slot>
</div>
<!--_html_template_end_-->`;
}
