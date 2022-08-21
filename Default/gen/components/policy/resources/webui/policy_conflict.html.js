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

.policy.conflict.row .value {
  flex-grow: 1;
  font-family: monospace;
  max-height: 200px;
  overflow: auto;
  overflow-wrap: break-word;
  text-overflow: unset;
  white-space: pre-wrap;
}

<if expr="not is_android and not is_ios">
.conflict.row .name {
  text-align: end;
}
</if>

.toggle {
  cursor: pointer;
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
<div class="policy conflict row" role="row">
  <div class="name" role="rowheader">$i18n{conflictValue}</div>
  <div class="value" role="cell"></div>
  <div class="source" role="cell"></div>
  <div class="scope" role="cell"></div>
  <div class="level" role="cell"></div>
  <div class="messages" role="cell"></div>
  <div class="toggle" role="cell"></div>
</div>
<!--_html_template_end_-->`;
}