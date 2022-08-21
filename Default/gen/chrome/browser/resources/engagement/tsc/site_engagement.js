// Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
import { assert, assertNotReached } from 'chrome://resources/js/assert_ts.js';
import { PromiseResolver } from 'chrome://resources/js/promise_resolver.m.js';
import { createElementWithClassName } from 'chrome://resources/js/util.m.js';
import { SiteEngagementDetailsProvider } from './site_engagement_details.mojom-webui.js';
const pageIsPopulatedResolver = new PromiseResolver();
const whenPageIsPopulatedForTest = function () {
    return pageIsPopulatedResolver.promise;
};
function initialize() {
    const engagementDetailsProvider = SiteEngagementDetailsProvider.getRemote();
    const engagementTableBody = document.body.querySelector('#engagement-table-body');
    let updateInterval = null;
    let info = null;
    let sortKey = 'totalScore';
    let sortReverse = true;
    // Set table header sort handlers.
    const engagementTableHeader = document.body.querySelector('#engagement-table-header');
    assert(engagementTableHeader);
    const headers = engagementTableHeader.children;
    for (let i = 0; i < headers.length; i++) {
        headers[i].addEventListener('click', e => {
            const target = e.target;
            const newSortKey = target.getAttribute('sort-key');
            assert(newSortKey);
            if (sortKey === newSortKey) {
                sortReverse = !sortReverse;
            }
            else {
                sortKey = newSortKey;
                sortReverse = false;
            }
            const oldSortColumn = document.querySelector('.sort-column');
            assert(oldSortColumn);
            oldSortColumn.classList.remove('sort-column');
            target.classList.add('sort-column');
            target.toggleAttribute('sort-reverse', sortReverse);
            renderTable();
        });
    }
    /**
     * Creates a single row in the engagement table.
     * @param info The info to create the row from.
     */
    function createRow(info) {
        const originCell = createElementWithClassName('td', 'origin-cell');
        originCell.textContent = info.origin.url;
        const baseScoreInput = createElementWithClassName('input', 'base-score-input');
        baseScoreInput.addEventListener('focus', disableAutoupdate);
        baseScoreInput.addEventListener('blur', enableAutoupdate);
        baseScoreInput.value = String(info.baseScore);
        const baseScoreCell = createElementWithClassName('td', 'base-score-cell');
        baseScoreCell.appendChild(baseScoreInput);
        const bonusScoreCell = createElementWithClassName('td', 'bonus-score-cell');
        bonusScoreCell.textContent = String(info.installedBonus);
        const totalScoreCell = createElementWithClassName('td', 'total-score-cell');
        totalScoreCell.textContent = String(info.totalScore);
        const engagementBar = createElementWithClassName('div', 'engagement-bar');
        engagementBar.style.width = (info.totalScore * 4) + 'px';
        const engagementBarCell = createElementWithClassName('td', 'engagement-bar-cell');
        engagementBarCell.appendChild(engagementBar);
        const row = document.createElement('tr');
        row.appendChild(originCell);
        row.appendChild(baseScoreCell);
        row.appendChild(bonusScoreCell);
        row.appendChild(totalScoreCell);
        row.appendChild(engagementBarCell);
        baseScoreInput.addEventListener('change', handleBaseScoreChange.bind(undefined, info.origin, engagementBar));
        return row;
    }
    function disableAutoupdate() {
        if (updateInterval) {
            clearInterval(updateInterval);
        }
        updateInterval = null;
    }
    function enableAutoupdate() {
        if (updateInterval) {
            clearInterval(updateInterval);
        }
        updateInterval = setInterval(updateEngagementTable, 5000);
    }
    /**
     * Sets the base engagement score when a score input is changed.
     * Resets the length of engagement-bar-cell to match the new score.
     * Also resets the update interval.
     * @param origin The origin of the engagement score to set.
     */
    function handleBaseScoreChange(origin, barCell, e) {
        const baseScoreInput = e.target;
        engagementDetailsProvider.setSiteEngagementBaseScoreForUrl(origin, parseFloat(baseScoreInput.value));
        barCell.style.width = (parseFloat(baseScoreInput.value) * 4) + 'px';
        baseScoreInput.blur();
        enableAutoupdate();
    }
    /**
     * Remove all rows from the engagement table.
     */
    function clearTable() {
        engagementTableBody.innerHTML =
            window.trustedTypes.emptyHTML;
    }
    /**
     * Sort the engagement info based on |sortKey| and |sortReverse|.
     */
    function sortInfo() {
        assert(info);
        info.sort((a, b) => {
            return (sortReverse ? -1 : 1) * compareTableItem(sortKey, a, b);
        });
    }
    /**
     * Compares two SiteEngagementDetails objects based on |sortKey|.
     * @param sortKey The name of the property to sort by.
     * @return A negative number if |a| should be ordered before |b|, a
     *     positive number otherwise.
     */
    function compareTableItem(sortKey, a, b) {
        const val1 = a[sortKey];
        const val2 = b[sortKey];
        // Compare the hosts of the origin ignoring schemes.
        if (sortKey === 'origin') {
            return new URL(val1.url).host > new URL(val2.url).host ? 1 : -1;
        }
        if (sortKey === 'baseScore' || sortKey === 'bonusScore' ||
            sortKey === 'totalScore') {
            return val1 - val2;
        }
        assertNotReached('Unsupported sort key: ' + sortKey);
    }
    /**
     * Rounds the supplied value to two decimal places of accuracy.
     */
    function roundScore(score) {
        return Number(Math.round(score * 100) / 100);
    }
    /**
     * Regenerates the engagement table from |info|.
     */
    function renderTable() {
        clearTable();
        sortInfo();
        assert(info);
        info.forEach((info) => {
            // Round all scores to 2 decimal places.
            info.baseScore = roundScore(info.baseScore);
            info.installedBonus = roundScore(info.installedBonus);
            info.totalScore = roundScore(info.totalScore);
            engagementTableBody.appendChild(createRow(info));
        });
    }
    /**
     * Retrieve site engagement info and render the engagement table.
     */
    async function updateEngagementTable() {
        // Populate engagement table.
        ({ info } = await engagementDetailsProvider.getSiteEngagementDetails());
        renderTable();
        pageIsPopulatedResolver.resolve();
    }
    updateEngagementTable();
    enableAutoupdate();
    // We explicitly set these on the global Window object so test code can use
    // them.
    Object.assign(window, {
        whenPageIsPopulatedForTest,
        disableAutoupdateForTests: disableAutoupdate,
        engagementDetailsProvider,
    });
}
document.addEventListener('DOMContentLoaded', initialize);
