import {getTrustedHTML} from 'chrome://resources/js/static_types.js';
export function getTemplate() {
  return getTrustedHTML`<!--_html_template_start_--><style>
/*
 * Note: some styles below are duplicated across a few HTML files (policy_row,
 * policy_precedence_row, policy_conflict, policy_table). This is preferable
 * to using a stylesheet, as otherwise the content appears unstyled initially
 * and then flashes to the correct styling after the stylesheet loads.
 */
:host(:not([hidden])) {
  display: block;
}

.row:not([hidden]) {
  display: flex;
}

.row > * {
  box-sizing: border-box;
  flex: 0 0 10%;
  overflow: hidden;
  padding: 12px;
  text-align: start;
  text-overflow: ellipsis;
  white-space: nowrap;
}

.name {
  border-inline-end: 1px solid rgba(0, 0, 0, .06);
  flex: 0 0 15%;
}

.value {
  flex: 0 0 35%;
}

.row.header {
  background-color: rgb(240, 240, 240);
  border-bottom: 1px solid rgba(0, 0, 0, .06);
}

.value.row .value {
  font-family: monospace;
}

.policy.row .value {
  font-family: monospace;
  overflow: hidden;
  text-overflow: ellipsis;
  white-space: nowrap;
}

.expanded .policy.row,
.policy.row:hover {
  background-color: rgb(250, 250, 250);
}

.warnings.row .value,
.errors.row .value,
.infos.row .value,
.value.row .value {
  flex-grow: 1;
  max-height: 200px;
  overflow: auto;
  overflow-wrap: break-word;
  text-overflow: unset;
  white-space: pre-wrap;
}

<if expr="not is_android and not is_ios">
.errors.row .name,
.warnings.row .name,
.infos.row .name,
.value.row .name {
  text-align: end;
}
</if>

a {
  color: rgb(26, 115, 232);
  cursor: pointer;
  text-decoration: underline;
}

.toggle {
  cursor: pointer;
}

.name .link {
  align-items: center;
  display: flex;
}

.link span {
  overflow: hidden;
  text-overflow: ellipsis;
  white-space: nowrap;
}

.link img {
  height: 12px;
  width: 12px;
}

:host([no-help-link]) .name .link {
  color: inherit;
  pointer-events: none;
  text-decoration: none;
}

:host([no-help-link]) .link img {
  display: none;
}

<if expr="is_android or is_ios">
.value,
.level,
.messages,
.scope {
  display: none;
}

.name {
  flex: 0 0 50%;
}

.toggle,
.source,
.messages.row .name,
.value.row .name {
  flex: 0 0 25%;
}

.messages.row .value,
.value.row .value {
  display: block;
  flex: 1;
}
</if>
</style>
<div class="policy row" role="row">
  <div class="name" role="rowheader" aria-labelledby="name">
    <a class="link" target="_blank">
      <span id="name"></span>
      <img src="chrome://resources/images/open_in_new.svg">
    </a>
  </div>
  <div class="value" role="cell"></div>
  <div class="source" role="cell"></div>
  <div class="scope" role="cell"></div>
  <div class="level" role="cell"></div>
  <div class="messages" role="cell"></div>
  <div class="toggle" role="cell">
    <a is="action-link" class="show-more">$i18n{showMore}</a>
    <a is="action-link" class="show-less" hidden>$i18n{showLess}</a>
  </div>
</div>
<div class="value row" role="row" hidden>
  <div class="name" role="rowheader">$i18n{value}</div>
  <div class="value" role="cell"></div>
  <div class="copy" role="cell">
    <a is="action-link" class="copy-value link" role="cell">
      <img src="chrome://resources/images/icon_copy_content.svg">
    </a>
  </div>
</div>
<div class="errors row" role="row" hidden>
  <div class="name" role="rowheader">$i18n{error}</div>
  <div class="value" role="cell"></div>
</div>
<div class="warnings row" role="row" hidden>
  <div class="name" role="rowheader">$i18n{warning}</div>
  <div class="value" role="cell"></div>
</div>
<div class="infos row" role="row" hidden>
  <div class="name" role="rowheader">$i18n{info}</div>
  <div class="value" role="cell"></div>
</div>
<!--_html_template_end_-->`;
}