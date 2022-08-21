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

.policy-table {
  margin-bottom: 5px;
  margin-top: 17px;
  position: relative;
  width: 100%;
}

.policy-table .main {
  border: 1px solid rgba(0, 0, 0, .06);
}

.policy-precedence-data {
  border: 1px solid rgba(0, 0, 0, .06);
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

.no-policy:not([hidden]) {
  display: flex;
  justify-content: center;
  padding: 12px;
}

a {
  color: rgb(26, 115, 232);
  cursor: pointer;
  text-decoration: underline;
}

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

.reload-show-unset-section {
  flex-wrap: wrap;
}

.messages.row .value,
.value.row .value {
  display: block;
  flex: 1;
}
</if>
</style>
<div class="policy-table" role="table" aria-labelledby="policy-header">
  <h3 class="header" id="policy-header"></h3>
  <p class="id"></p>
  <div class="main">
    <div class="header row" role="row">
      <div class="name" role="columnheader">$i18n{headerName}</div>
      <div class="value" role="columnheader">$i18n{headerValue}</div>
      <div class="source" role="columnheader">$i18n{headerSource}</div>
      <div class="scope" role="columnheader">$i18n{headerScope}</div>
      <div class="level" role="columnheader">$i18n{headerLevel}</div>
      <div class="messages" role="columnheader">$i18n{headerStatus}</div>
      <div class="toggle" role="columnheader"></div>
    </div>
    <div class="no-policy">$i18n{noPoliciesSet}</div>
  </div>
</div>
<!--_html_template_end_-->`;
}