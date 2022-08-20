// Copyright (c) 2011 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
import 'chrome://resources/cr_elements/cr_splitter/cr_splitter.js';
import { assert } from 'chrome://resources/js/assert_ts.js';
import { decorateQuickQueryControls, SyncSearchManager } from './sync_search.js';
const submit = document.querySelector('#sync-search-submit');
const query = document.querySelector('#sync-search-query');
const quickLinks = document.querySelectorAll('.sync-search-quicklink');
const status = document.querySelector('#sync-search-status');
const results = document.querySelector('#sync-results-list');
const detail = document.querySelector('#sync-result-details');
assert(submit && query && status && results && detail);
decorateQuickQueryControls(quickLinks, submit, query);
const manager = new SyncSearchManager(query, submit, status, results, detail);
// Add a way to override the data model for the sync results list for testing.
function setupSyncResultsListForTest(data) {
    manager.setDataForTest(data);
}
Object.assign(window, { setupSyncResultsListForTest });
