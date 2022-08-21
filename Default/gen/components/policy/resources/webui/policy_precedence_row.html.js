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

.precedence.row:hover {
  background-color: rgb(250, 250, 250);
}

.precedence.row .value {
  flex-grow: 1;
  max-height: 200px;
  overflow: auto;
  overflow-wrap: break-word;
  text-overflow: unset;
  white-space: pre-wrap;
}

<if expr="not is_android and not is_ios">
.precedence.row .name {
  text-align: end;
}
</if>

<if expr="is_android or is_ios">
.value {
  display: none;
}

.name {
  flex: 0 0 50%;
}

.value.row .name {
  flex: 0 0 25%;
}

.precedence.row .value {
  display: block;
  flex: 1;
}
</if>
</style>
<div class="precedence row" role="row">
  <div class="name" role="rowheader">$i18n{labelPrecedence}</div>
  <div class="value" role="cell"></div>
</div>
<!--_html_template_end_-->`;
}