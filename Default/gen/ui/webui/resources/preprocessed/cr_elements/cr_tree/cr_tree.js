// Copyright 2022 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
import { assert, assertNotReached } from '../../js/assert_ts.js';
import { isMac } from '../../js/cr.m.js';
import { getTemplate } from './cr_tree.html.js';
import { CrTreeBaseElement } from './cr_tree_base.js';
import { SELECTED_ATTR } from './cr_tree_item.js';
/**
 * @fileoverview cr-tree is a container for a tree structure. Items can be added
 * or removed from the tree using the add/addAt/removeItem methods. Adding items
 * declaratively is not currently supported, as this class is primarily intended
 * to replace cr.ui.Tree, which is used for cases of creating trees at runtime
 * (e.g. from backend data).
 */
/**
 * Helper function that returns the next visible tree item.
 */
function getNext(item) {
    if (item.expanded) {
        const firstChild = item.items[0];
        if (firstChild) {
            return firstChild;
        }
    }
    return getNextHelper(item);
}
/**
 * Another helper function that returns the next visible tree item.
 */
function getNextHelper(item) {
    if (!item) {
        return null;
    }
    const nextSibling = item.nextElementSibling;
    if (nextSibling) {
        assert(nextSibling.tagName === 'CR-TREE-ITEM');
        return nextSibling;
    }
    const parent = item.parentItem;
    if (!parent || parent.tagName === 'CR-TREE') {
        return null;
    }
    return getNextHelper(item.parentItem);
}
/**
 * Helper function that returns the previous visible tree item.
 */
function getPrevious(item) {
    const previousSibling = item.previousElementSibling;
    if (previousSibling && previousSibling.tagName === 'CR-TREE-ITEM') {
        return getLastHelper(previousSibling);
    }
    return item.parentItem;
}
/**
 * Helper function that returns the last visible tree item in the subtree.
 */
function getLastHelper(item) {
    if (item.expanded && item.hasChildren) {
        const lastChild = item.items[item.items.length - 1];
        return getLastHelper(lastChild);
    }
    return item;
}
export class CrTreeElement extends CrTreeBaseElement {
    constructor() {
        super(...arguments);
        this.selectedItem_ = null;
    }
    static get template() {
        return getTemplate();
    }
    /**
     * Initializes the element.
     */
    connectedCallback() {
        if (!this.hasAttribute('role')) {
            this.setAttribute('role', 'tree');
        }
        this.addEventListener('keydown', this.handleKeyDown.bind(this));
    }
    // CrTreeBase implementation:
    /**
     * The depth of the node. This is 0 for the tree itself.
     */
    get depth() {
        return 0;
    }
    get itemsRoot() {
        return this.shadowRoot;
    }
    // These two methods should never be called for the tree itself.
    set depth(_depth) {
        assertNotReached();
    }
    setParent(_parent) {
        assertNotReached();
    }
    /**
     * The selected tree item or null if none.
     */
    get selectedItem() {
        return this.selectedItem_ || null;
    }
    set selectedItem(item) {
        const oldSelectedItem = this.selectedItem_;
        if (oldSelectedItem !== item) {
            // Set the selectedItem_ before deselecting the old item since we only
            // want one change when moving between items.
            this.selectedItem_ = item;
            if (oldSelectedItem) {
                oldSelectedItem.toggleAttribute(SELECTED_ATTR, false);
            }
            if (item) {
                item.toggleAttribute(SELECTED_ATTR, true);
                if (item.id) {
                    this.setAttribute('aria-activedescendant', item.id);
                }
                if (this.matches(':focus-within') || this.shadowRoot.activeElement) {
                    item.rowElement.focus();
                }
            }
            else {
                this.removeAttribute('aria-activedescendant');
            }
            this.dispatchEvent(new CustomEvent('cr-tree-change', { bubbles: true, composed: true }));
        }
    }
    addAt(child, index) {
        super.addAt(child, index);
        // aria-owns doesn't work well for the tree because the treeitem role is
        // set on the rowElement within cr-tree-item's shadow DOM. Set the size
        // here, so the correct number of items is read.
        this.setAttribute('aria-setsize', this.items.length.toString());
    }
    /**
     * Handles keydown events on the tree and updates selection and exanding
     * of tree items.
     */
    handleKeyDown(e) {
        let itemToSelect = null;
        if (e.ctrlKey) {
            return;
        }
        const item = this.selectedItem;
        if (!item) {
            return;
        }
        const rtl = getComputedStyle(item).direction === 'rtl';
        switch (e.key) {
            case 'ArrowUp':
                itemToSelect = getPrevious(item);
                break;
            case 'ArrowDown':
                itemToSelect = getNext(item);
                break;
            case 'ArrowLeft':
            case 'ArrowRight':
                // Don't let back/forward keyboard shortcuts be used.
                if (!isMac && e.altKey || isMac && e.metaKey) {
                    break;
                }
                if (e.key === 'ArrowLeft' && !rtl || e.key === 'ArrowRight' && rtl) {
                    if (item.expanded) {
                        item.expanded = false;
                    }
                    else {
                        itemToSelect = item.parentItem;
                    }
                }
                else {
                    if (!item.expanded) {
                        item.expanded = true;
                    }
                    else {
                        itemToSelect = item.items[0] || null;
                    }
                }
                break;
            case 'Home':
                itemToSelect = this.items[0] || null;
                break;
            case 'End':
                itemToSelect = this.items[this.items.length - 1] || null;
                break;
        }
        if (itemToSelect) {
            itemToSelect.toggleAttribute(SELECTED_ATTR, true);
            e.preventDefault();
        }
    }
    setIconVisibility(visibility) {
        this.setAttribute('icon-visibility', visibility);
    }
}
customElements.define('cr-tree', CrTreeElement);
