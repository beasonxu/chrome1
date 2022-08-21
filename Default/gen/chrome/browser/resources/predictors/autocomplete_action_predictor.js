// Copyright (c) 2012 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
import { assert } from 'chrome://resources/js/assert_ts.js';
import { sendWithPromise } from 'chrome://resources/js/cr.m.js';
/**
 * Requests the database from the backend.
 */
function requestAutocompleteActionPredictorDb() {
    sendWithPromise('requestAutocompleteActionPredictorDb')
        .then(updateAutocompleteActionPredictorDb);
}
/**
 * Callback from backend with the database contents. Sets up some globals and
 * calls to create the UI.
 * @param database Information about
 *     AutocompleteActionPredictor including the database as a flattened list,
 *     a boolean indicating if the system is enabled and the current hit weight.
 */
function updateAutocompleteActionPredictorDb(database) {
    const filter = document.body.querySelector('#filter');
    assert(filter);
    filter.disabled = false;
    filter.onchange = function () {
        updateAutocompleteActionPredictorDbView(database);
    };
    updateAutocompleteActionPredictorDbView(database);
}
/**
 * Updates the table from the database.
 * @param database Information about
 *     AutocompleteActionPredictor including the database as a flattened list,
 *     a boolean indicating if the system is enabled and the current hit weight.
 */
function updateAutocompleteActionPredictorDbView(database) {
    const databaseSection = document.body.querySelector('#databaseTableBody');
    assert(databaseSection);
    const showEnabled = database.enabled && !!database.db;
    const enabledMode = document.body.querySelector('#autocompleteActionPredictorEnabledMode');
    const disabledMode = document.body.querySelector('#autocompleteActionPredictorDisabledMode');
    assert(enabledMode);
    assert(disabledMode);
    enabledMode.hidden = !showEnabled;
    disabledMode.hidden = showEnabled;
    if (!showEnabled) {
        return;
    }
    const filter = document.body.querySelector('#filter');
    assert(filter);
    // Clear any previous list.
    databaseSection.textContent = '';
    for (let i = 0; i < database.db.length; ++i) {
        const entry = database.db[i];
        if (!filter.checked || entry.confidence > 0) {
            const row = document.createElement('tr');
            row.className =
                (entry.confidence > 0.8 ?
                    'action-prerender' :
                    (entry.confidence > 0.5 ? 'action-preconnect' : 'action-none'));
            row.appendChild(document.createElement('td')).textContent =
                entry.user_text;
            row.appendChild(document.createElement('td')).textContent = entry.url;
            row.appendChild(document.createElement('td')).textContent =
                entry.hit_count.toString();
            row.appendChild(document.createElement('td')).textContent =
                entry.miss_count.toString();
            row.appendChild(document.createElement('td')).textContent =
                entry.confidence.toString();
            databaseSection.appendChild(row);
        }
    }
    const banner = document.body.querySelector('#countBanner');
    assert(banner);
    banner.textContent = 'Entries: ' + databaseSection.children.length;
}
document.addEventListener('DOMContentLoaded', requestAutocompleteActionPredictorDb);
