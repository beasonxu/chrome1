// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
import { OmniboxElement } from './omnibox_element.js';
export class OmniboxInput extends OmniboxElement {
    constructor() {
        super('omnibox-input-template');
    }
    connectedCallback() {
        this.elements = {
            arrowPadding: this.$('#arrow-padding'),
            connectWindowOmnibox: this.$('#connect-window-omnibox'),
            currentUrl: this.$('#current-url'),
            elideCells: this.$('#elide-cells'),
            exportClipboard: this.$('#export-clipboard'),
            exportFile: this.$('#export-file'),
            filterText: this.$('#filter-text'),
            historyWarning: this.$('#history-warning'),
            importClipboard: this.$('#import-clipboard'),
            importedWarning: this.$('#imported-warning'),
            importFile: this.$('#import-file'),
            importFileInput: this.$('#import-file-input'),
            inputText: this.$('#input-text'),
            lockCursorPosition: this.$('#lock-cursor-position'),
            pageClassification: this.$('#page-classification'),
            preferKeyword: this.$('#prefer-keyword'),
            preventInlineAutocomplete: this.$('#prevent-inline-autocomplete'),
            processBatch: this.$('#process-batch'),
            processBatchInput: this.$('#process-batch-input'),
            resetAutocompleteController: this.$('#reset-autocomplete-controller'),
            responsesCount: this.$('#responses-count'),
            responseSelection: this.$('#response-selection'),
            showAllProviders: this.$('#show-all-providers'),
            showDetails: this.$('#show-details'),
            showIncompleteResults: this.$('#show-incomplete-results'),
            thinRows: this.$('#thin-rows'),
            zeroSuggest: this.$('#zero-suggest'),
        };
        this.restoreInputs();
        this.setupElementListeners();
    }
    storeInputs() {
        const inputs = {
            connectWindowOmnibox: this.connectWindowOmnibox,
            displayInputs: this.displayInputs,
        };
        window.localStorage.setItem('preserved-inputs', JSON.stringify(inputs));
    }
    restoreInputs() {
        const inputsString = window.localStorage.getItem('preserved-inputs');
        const inputs = inputsString && JSON.parse(inputsString) || {};
        this.elements.connectWindowOmnibox.checked = inputs.connectWindowOmnibox;
        this.displayInputs =
            inputs.displayInputs || OmniboxInput.defaultDisplayInputs;
    }
    setupElementListeners() {
        [this.elements.inputText,
            this.elements.resetAutocompleteController,
            this.elements.lockCursorPosition,
            this.elements.zeroSuggest,
            this.elements.preventInlineAutocomplete,
            this.elements.preferKeyword,
            this.elements.currentUrl,
            this.elements.pageClassification,
        ].forEach(element => {
            element.addEventListener('input', this.onQueryInputsChanged.bind(this));
        });
        // Set text of #arrow-padding to substring of #input-text text, from
        // beginning until cursor position, in order to correctly align .arrow-up.
        this.elements.inputText.addEventListener('input', this.positionCursorPositionIndicators.bind(this));
        this.elements.connectWindowOmnibox.addEventListener('input', this.storeInputs.bind(this));
        this.elements.responseSelection.addEventListener('input', this.onResponseSelectionChanged.bind(this));
        this.elements.responseSelection.addEventListener('blur', this.onResponseSelectionBlur.bind(this));
        [this.elements.showIncompleteResults,
            this.elements.showDetails,
            this.elements.showAllProviders,
            this.elements.elideCells,
            this.elements.thinRows,
        ].forEach(element => {
            element.addEventListener('input', this.onDisplayInputsChanged.bind(this));
        });
        this.elements.filterText.addEventListener('input', this.onFilterInputsChanged.bind(this));
        this.elements.exportClipboard.addEventListener('click', this.onExportClipboard.bind(this));
        this.elements.exportFile.addEventListener('click', this.onExportFile.bind(this));
        this.elements.importClipboard.addEventListener('click', this.onImportClipboard.bind(this));
        this.elements.importFileInput.addEventListener('input', this.onImportFile.bind(this));
        this.elements.processBatchInput.addEventListener('input', this.onProcessBatchFile.bind(this));
        [this.elements.importClipboard, this.elements.importFile].forEach(element => {
            this.setupDragListeners(element);
            element.addEventListener('drop', this.onImportDropped.bind(this));
        });
        this.setupDragListeners(this.elements.processBatch);
        this.elements.processBatch.addEventListener('drop', this.onProcessBatchDropped.bind(this));
        this.$all('.button').forEach(el => el.addEventListener('keypress', (e) => {
            if (e.key === ' ' || e.key === 'Enter') {
                el.click();
            }
        }));
    }
    /**
     * Sets up boilerplate event listeners for an element that is able to receive
     * drag events.
     */
    setupDragListeners(element) {
        element.addEventListener('dragenter', () => element.classList.add('drag-hover'));
        element.addEventListener('dragleave', () => element.classList.remove('drag-hover'));
        element.addEventListener('dragover', e => e.preventDefault());
        element.addEventListener('drop', e => {
            e.preventDefault();
            element.classList.remove('drag-hover');
        });
    }
    onQueryInputsChanged() {
        this.elements.importedWarning.hidden = true;
        this.elements.currentUrl.disabled = this.elements.zeroSuggest.checked;
        if (this.elements.zeroSuggest.checked) {
            this.elements.currentUrl.value = this.elements.inputText.value;
        }
        this.dispatchEvent(new CustomEvent('query-inputs-changed', { detail: this.queryInputs }));
    }
    get queryInputs() {
        return {
            inputText: this.elements.inputText.value,
            resetAutocompleteController: this.elements.resetAutocompleteController.checked,
            cursorLock: this.elements.lockCursorPosition.checked,
            cursorPosition: this.cursorPosition,
            zeroSuggest: this.elements.zeroSuggest.checked,
            preventInlineAutocomplete: this.elements.preventInlineAutocomplete.checked,
            preferKeyword: this.elements.preferKeyword.checked,
            currentUrl: this.elements.currentUrl.value,
            pageClassification: Number(this.elements.pageClassification.value),
        };
    }
    set queryInputs(queryInputs) {
        this.elements.inputText.value = queryInputs.inputText;
        this.elements.resetAutocompleteController.checked =
            queryInputs.resetAutocompleteController;
        this.elements.lockCursorPosition.checked = queryInputs.cursorLock;
        this.cursorPosition = queryInputs.cursorPosition;
        this.elements.zeroSuggest.checked = queryInputs.zeroSuggest;
        this.elements.preventInlineAutocomplete.checked =
            queryInputs.preventInlineAutocomplete;
        this.elements.preferKeyword.checked = queryInputs.preferKeyword;
        this.elements.currentUrl.value = queryInputs.currentUrl;
        this.elements.pageClassification.value =
            String(queryInputs.pageClassification);
    }
    get cursorPosition() {
        return this.elements.lockCursorPosition.checked ?
            this.elements.inputText.value.length :
            Number(this.elements.inputText.selectionEnd);
    }
    set cursorPosition(value) {
        this.elements.inputText.setSelectionRange(value, value);
        this.positionCursorPositionIndicators();
    }
    positionCursorPositionIndicators() {
        this.elements.arrowPadding.textContent =
            this.elements.inputText.value.substring(0, this.cursorPosition);
    }
    get connectWindowOmnibox() {
        return this.elements.connectWindowOmnibox.checked;
    }
    onResponseSelectionChanged() {
        const { value, max } = this.elements.responseSelection;
        this.elements.historyWarning.hidden = value === '0' || value === max;
        this.dispatchEvent(new CustomEvent('response-select', { detail: Number(value) - 1 }));
    }
    onResponseSelectionBlur() {
        const { value, min, max } = this.elements.responseSelection;
        this.elements.responseSelection.value =
            String(Math.max(Math.min(Number(value), Number(max)), Number(min)));
        this.onResponseSelectionChanged();
    }
    set responsesCount(value) {
        if (this.elements.responseSelection.value ===
            this.elements.responseSelection.max) {
            this.elements.responseSelection.value = String(value);
        }
        this.elements.responseSelection.max = String(value);
        this.elements.responseSelection.min = String(value ? 1 : 0);
        this.elements.responsesCount.textContent = String(value);
        this.onResponseSelectionBlur();
    }
    onDisplayInputsChanged() {
        this.storeInputs();
        this.dispatchEvent(new CustomEvent('display-inputs-changed', { detail: this.displayInputs }));
    }
    get displayInputs() {
        return {
            showIncompleteResults: this.elements.showIncompleteResults.checked,
            showDetails: this.elements.showDetails.checked,
            showAllProviders: this.elements.showAllProviders.checked,
            elideCells: this.elements.elideCells.checked,
            thinRows: this.elements.thinRows.checked,
        };
    }
    set displayInputs(displayInputs) {
        this.elements.showIncompleteResults.checked =
            displayInputs.showIncompleteResults;
        this.elements.showDetails.checked = displayInputs.showDetails;
        this.elements.showAllProviders.checked = displayInputs.showAllProviders;
        this.elements.elideCells.checked = displayInputs.elideCells;
        this.elements.thinRows.checked = displayInputs.thinRows;
    }
    onFilterInputsChanged() {
        this.dispatchEvent(new CustomEvent('filter-input-changed', { detail: this.elements.filterText.value }));
    }
    onExportClipboard() {
        this.dispatchEvent(new CustomEvent('export-clipboard'));
    }
    onExportFile() {
        this.dispatchEvent(new CustomEvent('export-file'));
    }
    async onImportClipboard() {
        this.import(await navigator.clipboard.readText());
    }
    onImportFile(event) {
        const file = event.target.files?.[0];
        if (file) {
            this.importFile(file);
        }
    }
    onProcessBatchFile(event) {
        const file = event.target.files?.[0];
        if (file) {
            this.processBatchFile(file);
        }
    }
    onImportDropped(event) {
        const data = event.dataTransfer;
        const dragText = data.getData('Text');
        if (dragText) {
            this.import(dragText);
        }
        else if (data.files[0]) {
            this.importFile(data.files[0]);
        }
    }
    onProcessBatchDropped(event) {
        const data = event.dataTransfer;
        const dragText = data.getData('Text');
        if (dragText) {
            this.processBatch(dragText);
        }
        else if (data.files[0]) {
            this.processBatchFile(data.files[0]);
        }
    }
    importFile(file) {
        OmniboxInput.readFile(file).then(this.import.bind(this));
    }
    processBatchFile(file) {
        OmniboxInput.readFile(file).then(this.processBatch.bind(this));
    }
    import(importString) {
        try {
            const importData = JSON.parse(importString);
            // TODO(manukh): If import fails, this UI state change shouldn't happen.
            this.elements.importedWarning.hidden = false;
            this.dispatchEvent(new CustomEvent('import', { detail: importData }));
        }
        catch (error) {
            console.error('error during import, invalid json:', error);
        }
    }
    processBatch(processBatchString) {
        try {
            const processBatchData = JSON.parse(processBatchString);
            this.dispatchEvent(new CustomEvent('process-batch', { detail: processBatchData }));
        }
        catch (error) {
            console.error('error during process batch, invalid json:', error);
        }
    }
    static readFile(file) {
        return new Promise(resolve => {
            const reader = new FileReader();
            reader.onloadend = () => {
                if (reader.readyState === FileReader.DONE) {
                    resolve(reader.result);
                }
                else {
                    console.error('error importing, unable to read file:', reader.error);
                }
            };
            reader.readAsText(file);
        });
    }
    static get defaultDisplayInputs() {
        return {
            showIncompleteResults: false,
            showDetails: false,
            showAllProviders: true,
            elideCells: true,
            thinRows: false,
        };
    }
}
customElements.define('omnibox-input', OmniboxInput);
