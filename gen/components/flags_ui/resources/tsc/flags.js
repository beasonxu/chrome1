// Copyright (c) 2012 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
// 
import 'chrome://resources/js/jstemplate_compiled.js';
import './strings.m.js';
import { assert } from 'chrome://resources/js/assert_ts.js';
import { isIOS, sendWithPromise } from 'chrome://resources/js/cr.m.js';
import { FocusOutlineManager } from 'chrome://resources/js/cr/ui/focus_outline_manager.m.js';
import { loadTimeData } from 'chrome://resources/js/load_time_data.m.js';
import { PromiseResolver } from 'chrome://resources/js/promise_resolver.m.js';
import { $ } from 'chrome://resources/js/util.m.js';
let lastChanged = null;
let lastFocused = null;
const restartButton = $('experiment-restart-button');
const experimentalFeaturesResolver = new PromiseResolver();
// Exported on |window| since this is needed by tests.
Object.assign(window, { experimentalFeaturesReadyForTest: experimentalFeaturesResolver.promise });
const tabs = [
    {
        tabEl: document.body.querySelector('#tab-available'),
        panelEl: document.body.querySelector('#tab-content-available'),
    },
    // 
    {
        tabEl: document.body.querySelector('#tab-unavailable'),
        panelEl: document.body.querySelector('#tab-content-unavailable'),
    },
    // 
];
/**
 * Toggles necessary attributes to display selected tab.
 */
function selectTab(selectedTabEl) {
    for (const tab of tabs) {
        const isSelectedTab = tab.tabEl === selectedTabEl;
        tab.tabEl.parentElement.classList.toggle('selected', isSelectedTab);
        tab.tabEl.setAttribute('aria-selected', String(isSelectedTab));
        tab.panelEl.classList.toggle('selected', isSelectedTab);
    }
}
/**
 * This variable structure is here to document the structure that the template
 * expects to correctly populate the page.
 */
/**
 * Takes the |experimentalFeaturesData| input argument which represents data
 * about all the current feature entries and populates the html jstemplate with
 * that data. It expects an object structure like the above.
 * @param experimentalFeaturesData Information about all experiments.
 */
function renderTemplate(experimentalFeaturesData) {
    const templateToProcess = jstGetTemplate('tab-content-available-template');
    const context = new JsEvalContext(experimentalFeaturesData);
    const content = $('tab-content-available');
    // Duplicate the template into the content area.
    // This prevents the misrendering of available flags when the template
    // is rerendered. Example - resetting flags.
    content.textContent = '';
    content.appendChild(templateToProcess);
    // Process the templates: available / unavailable flags.
    jstProcess(context, templateToProcess);
    // Unavailable flags are not shown on iOS.
    const unavailableTemplate = $('tab-content-unavailable');
    if (unavailableTemplate) {
        jstProcess(context, $('tab-content-unavailable'));
    }
    showRestartToast(experimentalFeaturesData.needsRestart);
    // Add handlers to dynamically created HTML elements.
    let selectElements = document.body.querySelectorAll('.experiment-select');
    for (const element of selectElements) {
        element.onchange = function () {
            handleSelectExperimentalFeatureChoice(element, element.selectedIndex);
            lastChanged = element;
            return false;
        };
        registerFocusEvents(element);
    }
    selectElements = document.body.querySelectorAll('.experiment-enable-disable');
    for (const element of selectElements) {
        element.onchange = function () {
            handleEnableExperimentalFeature(element, element.options[element.selectedIndex].value == 'enabled');
            lastChanged = element;
            return false;
        };
        registerFocusEvents(element);
    }
    const textAreaElements = document.body.querySelectorAll('.experiment-origin-list-value');
    for (const element of textAreaElements) {
        element.onchange = function () {
            handleSetOriginListFlag(element, element.value);
            return false;
        };
    }
    assert(restartButton || isIOS);
    if (restartButton) {
        restartButton.onclick = restartBrowser;
    }
    // Tab panel selection.
    for (const tab of tabs) {
        tab.tabEl.addEventListener('click', e => {
            e.preventDefault();
            selectTab(tab.tabEl);
        });
    }
    const smallScreenCheck = window.matchMedia('(max-width: 480px)');
    // Toggling of experiment description overflow content on smaller screens.
    if (smallScreenCheck.matches) {
        const elements = document.body.querySelectorAll('.experiment .flex:first-child');
        for (const element of elements) {
            element.onclick = () => element.classList.toggle('expand');
        }
    }
    $('experiment-reset-all').onclick = resetAllFlags;
    const crosUrlFlagsRedirectButton = $('os-link-href');
    if (crosUrlFlagsRedirectButton) {
        crosUrlFlagsRedirectButton.onclick = crosUrlFlagsRedirect;
    }
    highlightReferencedFlag();
    const search = FlagSearch.getInstance();
    search.init();
}
/**
 * Add events to an element in order to keep track of the last focused element.
 * Focus restart button if a previous focus target has been set and tab key
 * pressed.
 */
function registerFocusEvents(el) {
    el.addEventListener('keydown', function (e) {
        if (lastChanged && e.key === 'Tab' && !e.shiftKey) {
            lastFocused = lastChanged;
            e.preventDefault();
            restartButton.focus();
        }
    });
    el.addEventListener('blur', function () {
        lastChanged = null;
    });
}
/**
 * Highlight an element associated with the page's location's hash. We need to
 * fake fragment navigation with '.scrollIntoView()', since the fragment IDs
 * don't actually exist until after the template code runs; normal navigation
 * therefore doesn't work.
 */
function highlightReferencedFlag() {
    if (window.location.hash) {
        const el = document.body.querySelector(window.location.hash);
        if (el && !el.classList.contains('referenced')) {
            // Unhighlight whatever's highlighted.
            if (document.body.querySelector('.referenced')) {
                document.body.querySelector('.referenced').classList.remove('referenced');
            }
            // Highlight the referenced element.
            el.classList.add('referenced');
            // 
            // Switch to unavailable tab if the flag is in this section.
            if ($('tab-content-unavailable').contains(el)) {
                selectTab($('tab-unavailable'));
            }
            // 
            el.scrollIntoView();
        }
    }
}
/**
 * Gets details and configuration about the available features. The
 * |returnExperimentalFeatures()| will be called with reply.
 */
function requestExperimentalFeaturesData() {
    sendWithPromise('requestExperimentalFeatures')
        .then(returnExperimentalFeatures);
}
/** Restart browser and restore tabs. */
function restartBrowser() {
    chrome.send('restartBrowser');
}
/**
 * Cause a text string to be announced by screen readers
 * @param text The text that should be announced.
 */
function announceStatus(text) {
    $('screen-reader-status-message').textContent = '';
    setTimeout(function () {
        $('screen-reader-status-message').textContent = text;
    }, 100);
}
/** Reset all flags to their default values and refresh the UI. */
function resetAllFlags() {
    chrome.send('resetAllFlags');
    FlagSearch.getInstance().clearSearch();
    announceStatus(loadTimeData.getString('reset-acknowledged'));
    showRestartToast(true);
    requestExperimentalFeaturesData();
}
function crosUrlFlagsRedirect() {
    chrome.send('crosUrlFlagsRedirect');
}
/**
 * Show the restart toast.
 * @param show Setting to toggle showing / hiding the toast.
 */
function showRestartToast(show) {
    $('needs-restart').classList.toggle('show', show);
    const restartButton = $('experiment-restart-button');
    if (restartButton) {
        restartButton.setAttribute('tabindex', show ? '9' : '-1');
    }
    if (show) {
        $('needs-restart').setAttribute('role', 'alert');
    }
}
/**
 * Called by the WebUI to re-populate the page with data representing the
 * current state of all experimental features.
 */
function returnExperimentalFeatures(experimentalFeaturesData) {
    const bodyContainer = $('body-container');
    renderTemplate(experimentalFeaturesData);
    if (experimentalFeaturesData.showBetaChannelPromotion) {
        $('channel-promo-beta').hidden = false;
    }
    else if (experimentalFeaturesData.showDevChannelPromotion) {
        $('channel-promo-dev').hidden = false;
    }
    $('promos').hidden = !experimentalFeaturesData.showBetaChannelPromotion &&
        !experimentalFeaturesData.showDevChannelPromotion;
    bodyContainer.style.visibility = 'visible';
    const ownerWarningDiv = $('owner-warning');
    if (ownerWarningDiv) {
        ownerWarningDiv.hidden = !experimentalFeaturesData.showOwnerWarning;
    }
    const systemFlagsLinkDiv = $('os-link-container');
    if (systemFlagsLinkDiv && !experimentalFeaturesData.showSystemFlagsLink) {
        systemFlagsLinkDiv.style.display = 'none';
    }
    experimentalFeaturesResolver.resolve();
}
/**
 * Handles updating the UI after experiment selections have been made.
 * Adds or removes experiment highlighting depending on whether the experiment
 * is set to the default option then shows the restart button.
 * @param node The select node for the experiment being changed.
 * @param index The selected option index.
 */
function experimentChangesUiUpdates(node, index) {
    const selected = node.options[index];
    const experimentContainerEl = $(node.internal_name).firstElementChild;
    const isDefault = ('default' in selected.dataset && selected.dataset['default'] === '1') ||
        (!('default' in selected.dataset) && index === 0);
    experimentContainerEl.classList.toggle('experiment-default', isDefault);
    experimentContainerEl.classList.toggle('experiment-switched', !isDefault);
    showRestartToast(true);
}
/**
 * Handles a 'enable' or 'disable' button getting clicked.
 * @param node The node for the experiment being changed.
 * @param enable Whether to enable or disable the experiment.
 */
function handleEnableExperimentalFeature(node, enable) {
    /* This function is an onchange handler, which can be invoked during page
     * restore - see https://crbug.com/1038638. */
    if (!node.internal_name) {
        return;
    }
    chrome.send('enableExperimentalFeature', [String(node.internal_name), String(enable)]);
    experimentChangesUiUpdates(node, enable ? 1 : 0);
}
function handleSetOriginListFlag(node, value) {
    /* This function is an onchange handler, which can be invoked during page
     * restore - see https://crbug.com/1038638. */
    if (!node.internal_name) {
        return;
    }
    chrome.send('setOriginListFlag', [String(node.internal_name), value]);
    showRestartToast(true);
}
/**
 * Invoked when the selection of a multi-value choice is changed to the
 * specified index.
 * @param node The node for the experiment being changed.
 * @param index The index of the option that was selected.
 */
function handleSelectExperimentalFeatureChoice(node, index) {
    /* This function is an onchange handler, which can be invoked during page
     * restore - see https://crbug.com/1038638. */
    if (!node.internal_name) {
        return;
    }
    chrome.send('enableExperimentalFeature', [String(node.internal_name) + '@' + index, 'true']);
    experimentChangesUiUpdates(node, index);
}
const emptySearchContent = Object.freeze({
    link: null,
    title: null,
    description: null,
});
// Delay in ms following a keypress, before a search is made.
const SEARCH_DEBOUNCE_TIME_MS = 150;
/**
 * Handles in page searching. Matches against the experiment flag name.
 */
class FlagSearch {
    constructor() {
        this.experiments_ = Object.assign({}, emptySearchContent);
        this.unavailableExperiments_ = Object.assign({}, emptySearchContent);
        this.searchIntervalId_ = null;
        this.initialized = false;
        this.searchBox_ = document.body.querySelector('#search');
        this.noMatchMsg_ = document.body.querySelectorAll('.tab-content .no-match');
    }
    /**
     * Initialises the in page search. Adding searchbox listeners and
     * collates the text elements used for string matching.
     */
    init() {
        this.experiments_.link =
            document.body.querySelectorAll('#tab-content-available .permalink');
        this.experiments_.title = document.body.querySelectorAll('#tab-content-available .experiment-name');
        this.experiments_.description =
            document.body.querySelectorAll('#tab-content-available p');
        this.unavailableExperiments_.link =
            document.body.querySelectorAll('#tab-content-unavailable .permalink');
        this.unavailableExperiments_.title = document.body.querySelectorAll('#tab-content-unavailable .experiment-name');
        this.unavailableExperiments_.description =
            document.body.querySelectorAll('#tab-content-unavailable p');
        if (!this.initialized) {
            this.searchBox_.addEventListener('input', this.debounceSearch.bind(this));
            document.body.querySelector('.clear-search').addEventListener('click', this.clearSearch.bind(this));
            window.addEventListener('keyup', e => {
                if (document.activeElement.nodeName === 'TEXTAREA') {
                    return;
                }
                switch (e.key) {
                    case '/':
                        this.searchBox_.focus();
                        break;
                    case 'Escape':
                    case 'Enter':
                        this.searchBox_.blur();
                        break;
                }
            });
            this.searchBox_.focus();
            this.initialized = true;
        }
    }
    /**
     * Clears a search showing all experiments.
     */
    clearSearch() {
        this.searchBox_.value = '';
        this.doSearch();
    }
    /**
     * Reset existing highlights on an element.
     * @param el The element to remove all highlighted mark up on.
     * @param text Text to reset the element's textContent to.
     */
    resetHighlights(el, text) {
        if (el.children) {
            el.textContent = text;
        }
    }
    /**
     * Highlights the search term within a given element.
     * @param searchTerm Search term user entered.
     * @param el The node containing the text to match against.
     * @return Whether there was a match.
     */
    highlightMatchInElement(searchTerm, el) {
        // Experiment container.
        const parentEl = el.parentElement.parentElement.parentElement;
        assert(parentEl);
        const text = el.textContent;
        const match = text.toLowerCase().indexOf(searchTerm);
        parentEl.classList.toggle('hidden', match === -1);
        if (match === -1) {
            this.resetHighlights(el, text);
            return false;
        }
        if (searchTerm !== '') {
            // Clear all nodes.
            el.textContent = '';
            if (match > 0) {
                const textNodePrefix = document.createTextNode(text.substring(0, match));
                el.appendChild(textNodePrefix);
            }
            const matchEl = document.createElement('mark');
            matchEl.textContent = text.substr(match, searchTerm.length);
            el.appendChild(matchEl);
            const matchSuffix = text.substring(match + searchTerm.length);
            if (matchSuffix) {
                const textNodeSuffix = document.createTextNode(matchSuffix);
                el.appendChild(textNodeSuffix);
            }
        }
        else {
            this.resetHighlights(el, text);
        }
        return true;
    }
    /**
     * Goes through all experiment text and highlights the relevant matches.
     * Only the first instance of a match in each experiment text block is
     * highlighted. This prevents the sea of yellow that happens using the global
     * find in page search.
     * @param searchContent Object containing the experiment text elements to
     *     search against.
     * @return The number of matches found.
     */
    highlightAllMatches(searchContent, searchTerm) {
        let matches = 0;
        assert(searchContent.description);
        assert(searchContent.link);
        assert(searchContent.title);
        for (let i = 0, j = searchContent.link.length; i < j; i++) {
            if (this.highlightMatchInElement(searchTerm, searchContent.title[i])) {
                this.resetHighlights(searchContent.description[i], searchContent.description[i].textContent);
                this.resetHighlights(searchContent.link[i], searchContent.link[i].textContent);
                matches++;
                continue;
            }
            if (this.highlightMatchInElement(searchTerm, searchContent.description[i])) {
                this.resetHighlights(searchContent.title[i], searchContent.title[i].textContent);
                this.resetHighlights(searchContent.link[i], searchContent.link[i].textContent);
                matches++;
                continue;
            }
            // Match links, replace spaces with hyphens as flag names don't
            // have spaces.
            if (this.highlightMatchInElement(searchTerm.replace(/\s/, '-'), searchContent.link[i])) {
                this.resetHighlights(searchContent.title[i], searchContent.title[i].textContent);
                this.resetHighlights(searchContent.description[i], searchContent.description[i].textContent);
                matches++;
            }
        }
        return matches;
    }
    /**
     * Performs a search against the experiment title, description, permalink.
     */
    doSearch() {
        const searchTerm = this.searchBox_.value.trim().toLowerCase();
        if (searchTerm || searchTerm === '') {
            document.body.classList.toggle('searching', Boolean(searchTerm));
            // Available experiments
            this.noMatchMsg_[0].classList.toggle('hidden', this.highlightAllMatches(this.experiments_, searchTerm) > 0);
            // Unavailable experiments
            this.noMatchMsg_[1].classList.toggle('hidden', this.highlightAllMatches(this.unavailableExperiments_, searchTerm) >
                0);
            this.announceSearchResults();
        }
        this.searchIntervalId_ = null;
    }
    announceSearchResults() {
        const searchTerm = this.searchBox_.value.trim().toLowerCase();
        if (!searchTerm) {
            return;
        }
        const selectedTab = tabs.find(tab => tab.panelEl.classList.contains('selected'));
        const selectedTabId = selectedTab.panelEl.id;
        const queryString = `#${selectedTabId} .experiment:not(.hidden)`;
        const total = document.body.querySelectorAll(queryString).length;
        if (total) {
            announceStatus(total === 1 ?
                loadTimeData.getStringF('searchResultsSingular', searchTerm) :
                loadTimeData.getStringF('searchResultsPlural', total, searchTerm));
        }
    }
    /**
     * Debounces the search to improve performance and prevent too many searches
     * from being initiated.
     */
    debounceSearch() {
        if (this.searchIntervalId_) {
            clearTimeout(this.searchIntervalId_);
        }
        this.searchIntervalId_ =
            setTimeout(this.doSearch.bind(this), SEARCH_DEBOUNCE_TIME_MS);
    }
    /** Get the singleton instance of FlagSearch. */
    static getInstance() {
        return instance || (instance = new FlagSearch());
    }
}
let instance = null;
/**
 * Allows the restart button to jump back to the previously focused experiment
 * in the list instead of going to the top of the page.
 */
function setupRestartButton() {
    restartButton.addEventListener('keydown', function (e) {
        if (e.shiftKey && e.key === 'Tab' && lastFocused) {
            e.preventDefault();
            lastFocused.focus();
        }
    });
    restartButton.addEventListener('blur', () => {
        lastFocused = null;
    });
}
document.addEventListener('DOMContentLoaded', function () {
    // Get and display the data upon loading.
    requestExperimentalFeaturesData();
    setupRestartButton();
    FocusOutlineManager.forDocument(document);
});
// Update the highlighted flag when the hash changes.
window.addEventListener('hashchange', highlightReferencedFlag);
