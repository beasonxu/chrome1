// Copyright 2022 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
import { assert, assertNotReached } from '../../js/assert_ts.js';
import { CrTreeBaseElement, EXPANDED_ATTR } from './cr_tree_base.js';
import { getTemplate } from './cr_tree_item.html.js';
/**
 * @fileoverview cr-tree-item represents a node in a tree structure. Child items
 * can be added or removed using the add/addAt/removeItem methods. A parent can
 * be set using the setParent() method; the parent may be a cr-tree or
 * cr-tree-item. Adding items declaratively is not currently supported, as this
 * class is primarily intended to replace cr.ui.TreeItem, which is used for
 * cases of creating trees at runtime (e.g. from backend data).
 */
export const SELECTED_ATTR = 'selected';
export const MAY_HAVE_CHILDREN_ATTR = 'may-have-children';
const INDENT_PX = 20;
let treeItemAutoGeneratedIdCounter = 0;
// Returns true if |root| has |el| as a descendant.
function hasDescendant(root, el) {
    const itemsToCheck = [root];
    while (itemsToCheck.length > 0) {
        const item = itemsToCheck.shift();
        if (item === el) {
            return true;
        }
        if (item.items.includes(el)) {
            return true;
        }
        itemsToCheck.push(...item.items);
    }
    return false;
}
export class CrTreeItemElement extends CrTreeBaseElement {
    constructor() {
        super(...arguments);
        this.label_ = '';
        this.extraAriaLabel_ = '';
        this.depth_ = 0;
        this.rowElement_ = null;
    }
    static get template() {
        return getTemplate();
    }
    static get observedAttributes() {
        return super.observedAttributes.concat([SELECTED_ATTR, EXPANDED_ATTR]);
    }
    connectedCallback() {
        this.id = 'tree-item-autogen-id-' + treeItemAutoGeneratedIdCounter++;
        this.labelElement.textContent = this.label_;
        const extraAriaLabel = this.shadowRoot.querySelector('#extra-aria-label');
        assert(extraAriaLabel);
        extraAriaLabel.textContent = this.extraAriaLabel_;
        this.toggleAttribute(SELECTED_ATTR, false);
        this.rowElement.setAttribute('aria-selected', 'false');
        const expand = this.shadowRoot.querySelector('.expand-icon');
        assert(expand);
        expand.addEventListener('click', this.handleExpandClick_.bind(this));
        expand.addEventListener('mousedown', this.handleExpandMouseDown_.bind(this));
        this.addEventListener('click', this.handleClick_.bind(this));
        this.addEventListener('mousedown', this.handleMouseDown_.bind(this));
        this.addEventListener('dblclick', this.handleDblClick_.bind(this));
    }
    attributeChangedCallback(name, oldValue, newValue) {
        if (name === SELECTED_ATTR) {
            this.onSelectedChange_(newValue === '');
            return;
        }
        if (name === EXPANDED_ATTR) {
            this.onExpandedChange_(newValue === '');
            return;
        }
        super.attributeChangedCallback(name, oldValue, newValue);
    }
    forceHoverStyle(hover) {
        this.toggleAttribute('force-hover-style', hover);
    }
    onSelectedChange_(selected) {
        const rowElement = this.rowElement;
        if (selected) {
            rowElement.setAttribute('tabIndex', '0');
            this.reveal();
            this.labelElement.scrollIntoViewIfNeeded();
            if (this.tree) {
                this.tree.selectedItem = this;
            }
            rowElement.setAttribute('aria-selected', 'true');
        }
        else if (this.tree && this.tree.selectedItem === this) {
            this.tree.selectedItem = null;
            rowElement.setAttribute('aria-selected', 'false');
            rowElement.setAttribute('tabIndex', '-1');
        }
        else {
            rowElement.setAttribute('aria-selected', 'false');
            rowElement.setAttribute('tabIndex', '-1');
        }
    }
    onExpandedChange_(expanded) {
        const rowElement = this.rowElement;
        if (expanded) {
            if (this.hasAttribute(MAY_HAVE_CHILDREN_ATTR)) {
                rowElement.setAttribute('aria-expanded', 'true');
                this.dispatchEvent(new CustomEvent('cr-tree-item-expand', { bubbles: true, composed: true, detail: true }));
                this.scrollIntoViewIfNeeded();
            }
            return;
        }
        if (this.tree && !this.hasAttribute(SELECTED_ATTR)) {
            const oldSelected = this.tree.selectedItem;
            if (oldSelected && hasDescendant(this, oldSelected)) {
                this.toggleAttribute(SELECTED_ATTR, true);
            }
        }
        if (this.hasAttribute(MAY_HAVE_CHILDREN_ATTR)) {
            rowElement.setAttribute('aria-expanded', 'false');
        }
        else {
            rowElement.removeAttribute('aria-expanded');
        }
        this.dispatchEvent(new CustomEvent('cr-tree-item-collapse', { bubbles: true, composed: true, detail: true }));
    }
    // CrTreeBaseElement implementation:
    get depth() {
        return this.depth_;
    }
    set depth(depth) {
        if (depth !== this.depth_) {
            const rowDepth = Math.max(0, depth - 1);
            const row = this.shadowRoot.querySelector('.tree-row');
            assert(row);
            row.style.paddingInlineStart = rowDepth * INDENT_PX + 'px';
            this.rowElement.setAttribute('aria-level', depth.toString());
            this.depth_ = depth;
            this.items.forEach(item => item.depth = depth + 1);
        }
    }
    get itemsRoot() {
        const root = this.shadowRoot.querySelector('.tree-children');
        assert(root);
        return root;
    }
    removeTreeItem(child) {
        // If we removed the selected item we should become selected.
        const tree = this.tree;
        assert(tree);
        const selectedItem = tree.selectedItem;
        if (selectedItem && hasDescendant(child, selectedItem)) {
            this.toggleAttribute(SELECTED_ATTR, true);
        }
        super.removeTreeItem(child);
    }
    /**
     * Whether the tree item has children.
     */
    setHasChildren(hasChildren) {
        super.setHasChildren(hasChildren);
        if (hasChildren) {
            this.toggleAttribute(MAY_HAVE_CHILDREN_ATTR, true);
            this.rowElement.toggleAttribute('aria-expanded', this.expanded);
        }
    }
    // These methods shouldn't be called on a tree item.
    set selectedItem(_item) {
        assertNotReached();
    }
    get selectedItem() {
        return null;
    }
    // Mouse event handlers
    handleMouseDown_(e) {
        if (e.button === 2) { // right
            this.handleClick_(e);
        }
    }
    handleExpandMouseDown_(e) {
        if (e.button === 2) { // right
            this.handleExpandClick_(e);
        }
    }
    /**
     * Handles double click events on the tree item.
     */
    handleDblClick_(e) {
        const expanded = this.expanded;
        this.expanded = !expanded;
        e.stopPropagation();
    }
    /**
     * Called when the user clicks on a tree item's expand icon.
     */
    handleExpandClick_(e) {
        this.expanded = !this.expanded;
        e.stopPropagation();
    }
    /**
     * Called when the user clicks on a tree item.
     */
    handleClick_(e) {
        this.toggleAttribute(SELECTED_ATTR, true);
        e.stopPropagation();
    }
    // Additional methods unique to CrTreeItem:
    /**
     * Expands all parent items.
     */
    reveal() {
        let pi = this.parentItem;
        while (pi) {
            pi.expanded = true;
            pi = pi.parentItem;
        }
    }
    /**
     * The element containing the label text.
     */
    get labelElement() {
        const labelEl = this.shadowRoot.querySelector('.tree-label');
        assert(labelEl);
        return labelEl;
    }
    get rowElement() {
        if (!this.rowElement_) {
            this.rowElement_ =
                this.shadowRoot.querySelector('.tree-row');
        }
        assert(this.rowElement_);
        return this.rowElement_;
    }
    /**
     * The label text.
     */
    get label() {
        return this.label_;
    }
    set label(s) {
        this.label_ = s;
        if (this.shadowRoot && this.shadowRoot.querySelector('.tree-label')) {
            this.labelElement.textContent = s;
        }
    }
    setExtraAriaLabel(s) {
        this.extraAriaLabel_ = s;
        if (this.shadowRoot && this.shadowRoot.querySelector('#extra-aria-label')) {
            this.shadowRoot.querySelector('#extra-aria-label').textContent = s;
        }
    }
}
customElements.define('cr-tree-item', CrTreeItemElement);
