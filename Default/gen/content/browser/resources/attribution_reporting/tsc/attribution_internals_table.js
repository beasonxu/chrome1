// Copyright 2022 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
import { assert } from 'chrome://resources/js/assert_ts.js';
import { CustomElement } from 'chrome://resources/js/custom_element.js';
import { getTemplate } from './attribution_internals_table.html.js';
/**
 * Helper function for setting sort attributes on |th|.
 */
function setSortAttrs(th, sortDesc) {
    let nextDir;
    if (sortDesc === null) {
        th.ariaSort = 'none';
        nextDir = 'ascending';
    }
    else if (sortDesc) {
        th.ariaSort = 'descending';
        nextDir = 'ascending';
    }
    else {
        th.ariaSort = 'ascending';
        nextDir = 'descending';
    }
    th.title = `Sort by ${th.innerText} ${nextDir}`;
    th.ariaLabel = th.title;
}
/**
 * Table abstracts the logic for rendering and sorting a table. The table's
 * columns are supplied by a TableModel supplied to the decorate function. Each
 * Column knows how to render the underlying value of the row type T, and
 * optionally sort rows of type T by that value.
 */
export class AttributionInternalsTableElement extends CustomElement {
    constructor() {
        super(...arguments);
        this.model_ = null;
        this.sortDesc_ = false;
    }
    static get template() {
        return getTemplate();
    }
    setModel(model) {
        this.model_ = model;
        this.sortDesc_ = false;
        const tr = this.$('tr');
        assert(tr);
        model.cols.forEach((col, idx) => {
            const th = document.createElement('th');
            th.scope = 'col';
            col.renderHeader(th);
            if (col.compare) {
                th.setAttribute('role', 'button');
                setSortAttrs(th, /*sortDesc=*/ null);
                th.addEventListener('click', () => this.changeSortHeader_(idx));
            }
            tr.appendChild(th);
        });
        this.addSpanningText_();
        this.model_.rowsChangedListeners.add(() => this.updateTbody());
    }
    addSpanningText_() {
        const td = document.createElement('td');
        assert(this.model_);
        td.textContent = this.model_.emptyRowText;
        td.colSpan = this.model_.cols.length;
        const tr = document.createElement('tr');
        tr.appendChild(td);
        const tbody = this.$('tbody');
        assert(tbody);
        tbody.appendChild(tr);
    }
    changeSortHeader_(idx) {
        const ths = this.$all('thead th');
        assert(this.model_);
        if (idx === this.model_.sortIdx) {
            this.sortDesc_ = !this.sortDesc_;
        }
        else {
            this.sortDesc_ = false;
            if (this.model_.sortIdx >= 0) {
                setSortAttrs(ths[this.model_.sortIdx], /*descending=*/ null);
            }
        }
        this.model_.sortIdx = idx;
        setSortAttrs(ths[this.model_.sortIdx], this.sortDesc_);
        this.updateTbody();
    }
    sort_(rows) {
        assert(this.model_);
        if (this.model_.sortIdx < 0) {
            return;
        }
        const multiplier = this.sortDesc_ ? -1 : 1;
        rows.sort((a, b) => this.model_.cols[this.model_.sortIdx].compare(a, b) *
            multiplier);
    }
    updateTbody() {
        const tbody = this.$('tbody');
        assert(tbody);
        tbody.innerText = '';
        assert(this.model_);
        const rows = this.model_.getRows();
        if (rows.length === 0) {
            this.addSpanningText_();
            return;
        }
        this.sort_(rows);
        rows.forEach((row) => {
            const tr = document.createElement('tr');
            assert(this.model_);
            this.model_.cols.forEach((col) => {
                const td = document.createElement('td');
                col.render(td, row);
                tr.appendChild(td);
            });
            this.model_.styleRow(tr, row);
            tbody.appendChild(tr);
        });
    }
}
customElements.define('attribution-internals-table', AttributionInternalsTableElement);
