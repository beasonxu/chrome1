// Copyright 2020 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
import 'chrome://resources/cr_elements/cr_tab_box/cr_tab_box.js';
import './attribution_internals_table.js';
import { assert } from 'chrome://resources/js/assert_ts.js';
import { getTrustedHTML } from 'chrome://resources/js/static_types.js';
import { Handler as AttributionInternalsHandler, ObserverReceiver, ReportType, SourceType, WebUISource_Attributability, WebUITrigger_Status } from './attribution_internals.mojom-webui.js';
import { TableModel } from './table_model.js';
function compareDefault(a, b) {
    if (a < b) {
        return -1;
    }
    if (a > b) {
        return 1;
    }
    return 0;
}
function bigintReplacer(_key, value) {
    return typeof value === 'bigint' ? value.toString() : value;
}
class ValueColumn {
    constructor(header, getValue, compare) {
        this.header = header;
        this.getValue = getValue;
        if (compare) {
            this.compare = compare;
        }
        else {
            this.compare = (a, b) => compareDefault(getValue(a), getValue(b));
        }
    }
    render(td, row) {
        td.innerText = `${this.getValue(row)}`;
    }
    renderHeader(th) {
        th.innerText = `${this.header}`;
    }
}
class DateColumn extends ValueColumn {
    constructor(header, getValue) {
        super(header, getValue);
    }
    render(td, row) {
        td.innerText = this.getValue(row).toLocaleString();
    }
}
class CodeColumn extends ValueColumn {
    constructor(header, getValue) {
        super(header, getValue);
    }
    render(td, row) {
        const code = td.ownerDocument.createElement('code');
        code.innerText = this.getValue(row);
        const pre = td.ownerDocument.createElement('pre');
        pre.appendChild(code);
        td.appendChild(pre);
    }
}
const debugPathPattern = /(?<=\/\.well-known\/attribution-reporting\/)debug(?=\/)/;
class ReportUrlColumn extends ValueColumn {
    constructor() {
        super('Report URL', (e) => e.reportUrl);
    }
    render(td, row) {
        if (!row.isDebug) {
            td.innerText = row.reportUrl;
            return;
        }
        const [pre, post] = row.reportUrl.split(debugPathPattern, 2);
        td.appendChild(new Text(pre));
        const span = td.ownerDocument.createElement('span');
        span.classList.add('debug-url');
        span.innerText = 'debug';
        td.appendChild(span);
        td.appendChild(new Text(post));
    }
}
class Selectable {
    constructor() {
        this.input = document.createElement('input');
        this.input.type = 'checkbox';
    }
}
class SelectionColumn {
    constructor(model) {
        this.compare = null;
        this.model = model;
        this.selectAll = document.createElement('input');
        this.selectAll.type = 'checkbox';
        this.selectAll.addEventListener('input', () => {
            const checked = this.selectAll.checked;
            this.model.getRows().forEach((row) => {
                if (!row.input.disabled) {
                    row.input.checked = checked;
                }
            });
            this.notifySelectionChanged(checked);
        });
        this.listener = () => this.onChange();
        this.model.rowsChangedListeners.add(this.listener);
        this.selectionChangedListeners = new Set();
    }
    render(td, row) {
        td.appendChild(row.input);
    }
    renderHeader(th) {
        th.appendChild(this.selectAll);
    }
    onChange() {
        let anySelectable = false;
        let anySelected = false;
        let anyUnselected = false;
        this.model.getRows().forEach((row) => {
            // addEventListener deduplicates, so only one event will be fired per
            // input.
            row.input.addEventListener('input', this.listener);
            if (row.input.disabled) {
                return;
            }
            anySelectable = true;
            if (row.input.checked) {
                anySelected = true;
            }
            else {
                anyUnselected = true;
            }
        });
        this.selectAll.disabled = !anySelectable;
        this.selectAll.checked = anySelected && !anyUnselected;
        this.selectAll.indeterminate = anySelected && anyUnselected;
        this.notifySelectionChanged(anySelected);
    }
    notifySelectionChanged(anySelected) {
        this.selectionChangedListeners.forEach((f) => f(anySelected));
    }
}
class Source {
    constructor(mojo) {
        this.sourceEventId = mojo.sourceEventId;
        this.sourceOrigin = originToText(mojo.sourceOrigin);
        this.attributionDestination = mojo.attributionDestination;
        this.reportingOrigin = originToText(mojo.reportingOrigin);
        this.sourceTime = new Date(mojo.sourceTime);
        this.expiryTime = new Date(mojo.expiryTime);
        this.sourceType = sourceTypeToText(mojo.sourceType);
        this.priority = mojo.priority;
        this.filterData = JSON.stringify(mojo.filterData, null, ' ');
        this.aggregationKeys =
            JSON.stringify(mojo.aggregationKeys, bigintReplacer, ' ');
        this.debugKey = mojo.debugKey ? mojo.debugKey.value.toString() : '';
        this.dedupKeys = mojo.dedupKeys.join(', ');
        this.status = attributabilityToText(mojo.attributability);
    }
}
class SourceTableModel extends TableModel {
    constructor() {
        super();
        this.storedSources = [];
        this.unstoredSources = [];
        this.cols = [
            new ValueColumn('Source Event ID', (e) => e.sourceEventId),
            new ValueColumn('Status', (e) => e.status),
            new ValueColumn('Source Origin', (e) => e.sourceOrigin),
            new ValueColumn('Destination', (e) => e.attributionDestination),
            new ValueColumn('Report To', (e) => e.reportingOrigin),
            new DateColumn('Source Registration Time', (e) => e.sourceTime),
            new DateColumn('Expiry Time', (e) => e.expiryTime),
            new ValueColumn('Source Type', (e) => e.sourceType),
            new ValueColumn('Priority', (e) => e.priority),
            new CodeColumn('Filter Data', (e) => e.filterData),
            new CodeColumn('Aggregation Keys', (e) => e.aggregationKeys),
            new ValueColumn('Debug Key', (e) => e.debugKey),
            new ValueColumn('Dedup Keys', (e) => e.dedupKeys),
        ];
        this.emptyRowText = 'No sources.';
        // Sort by source registration time by default.
        this.sortIdx = 5;
    }
    getRows() {
        return this.unstoredSources.concat(this.storedSources);
    }
    setStoredSources(storedSources) {
        this.storedSources = storedSources;
        this.notifyRowsChanged();
    }
    addUnstoredSource(source) {
        // Prevent the page from consuming ever more memory if the user leaves the
        // page open for a long time.
        if (this.unstoredSources.length >= 1000) {
            this.unstoredSources = [];
        }
        this.unstoredSources.push(source);
        this.notifyRowsChanged();
    }
    clear() {
        this.storedSources = [];
        this.unstoredSources = [];
        this.notifyRowsChanged();
    }
}
class Trigger {
    constructor(mojo) {
        this.triggerTime = new Date(mojo.triggerTime);
        this.destinationOrigin = originToText(mojo.destinationOrigin);
        this.reportingOrigin = originToText(mojo.reportingOrigin);
        this.filters = JSON.stringify(mojo.filters, null, ' ');
        this.notFilters = JSON.stringify(mojo.notFilters, null, ' ');
        this.debugKey = mojo.debugKey ? mojo.debugKey.value.toString() : '';
        this.eventTriggers = JSON.stringify(mojo.eventTriggers.map((e) => {
            // Omit the dedup key, filters, and not filters if they are empty for
            // brevity.
            return {
                'data': e.data,
                'priority': e.priority,
                'deduplication_key': e.dedupKey ? e.dedupKey.value : undefined,
                'filters': Object.entries(e.filters).length > 0 ? e.filters :
                    undefined,
                'not_filters': Object.entries(e.notFilters).length > 0 ?
                    e.notFilters :
                    undefined,
            };
        }), bigintReplacer, ' ');
        this.aggregatableTriggers = JSON.stringify(mojo.aggregatableTriggers.map((e) => {
            // Omit the filters and not filters if they are empty for brevity.
            return {
                'key_piece': e.keyPiece,
                'source_keys': e.sourceKeys,
                'filters': Object.entries(e.filters).length > 0 ? e.filters :
                    undefined,
                'not_filters': Object.entries(e.notFilters).length > 0 ?
                    e.notFilters :
                    undefined,
            };
        }), bigintReplacer, ' ');
        this.aggregatableValues = JSON.stringify(mojo.aggregatableValues, null, ' ');
        this.eventLevelStatus = triggerStatusToText(mojo.eventLevelStatus);
        this.aggregatableStatus = triggerStatusToText(mojo.aggregatableStatus);
    }
}
class TriggerTableModel extends TableModel {
    constructor() {
        super();
        this.triggers = [];
        this.cols = [
            new DateColumn('Trigger Time', (e) => e.triggerTime),
            new ValueColumn('Event-Level Status', (e) => e.eventLevelStatus),
            new ValueColumn('Aggregatable Status', (e) => e.aggregatableStatus),
            new ValueColumn('Destination', (e) => e.destinationOrigin),
            new ValueColumn('Report To', (e) => e.reportingOrigin),
            new ValueColumn('Debug Key', (e) => e.debugKey),
            new CodeColumn('Filters', (e) => e.filters),
            new CodeColumn('Negated Filters', (e) => e.notFilters),
            new CodeColumn('Event Triggers', (e) => e.eventTriggers),
            new CodeColumn('Aggregatable Triggers', (e) => e.aggregatableTriggers),
            new CodeColumn('Aggregatable Values', (e) => e.aggregatableValues),
        ];
        this.emptyRowText = 'No triggers.';
        // Sort by trigger time by default.
        this.sortIdx = 0;
    }
    getRows() {
        return this.triggers;
    }
    addTrigger(trigger) {
        // Prevent the page from consuming ever more memory if the user leaves the
        // page open for a long time.
        if (this.triggers.length >= 1000) {
            this.triggers = [];
        }
        this.triggers.push(trigger);
        this.notifyRowsChanged();
    }
    clear() {
        this.triggers = [];
        this.notifyRowsChanged();
    }
}
class Report extends Selectable {
    constructor(mojo) {
        super();
        this.id = mojo.id;
        this.reportBody = mojo.reportBody;
        this.reportUrl = mojo.reportUrl.url;
        this.triggerTime = new Date(mojo.triggerTime);
        this.reportTime = new Date(mojo.reportTime);
        // Only pending reports are selectable.
        if (mojo.status.pending === undefined) {
            this.input.disabled = true;
        }
        this.isDebug = this.reportUrl.indexOf('/.well-known/attribution-reporting/debug/') >= 0;
        if (mojo.status.sent !== undefined) {
            this.status = `Sent: HTTP ${mojo.status.sent}`;
            this.httpResponseCode = mojo.status.sent;
        }
        else if (mojo.status.pending !== undefined) {
            this.status = 'Pending';
        }
        else if (mojo.status.replacedByHigherPriorityReport !== undefined) {
            this.status = `Replaced by higher-priority report: ${mojo.status.replacedByHigherPriorityReport}`;
        }
        else if (mojo.status.prohibitedByBrowserPolicy !== undefined) {
            this.status = 'Prohibited by browser policy';
        }
        else if (mojo.status.networkError !== undefined) {
            this.status = `Network error: ${mojo.status.networkError}`;
        }
        else if (mojo.status.failedToAssemble !== undefined) {
            this.status = 'Dropped due to assembly failure';
        }
        else {
            throw new Error('invalid ReportStatus union');
        }
    }
}
class EventLevelReport extends Report {
    constructor(mojo) {
        super(mojo);
        this.reportPriority = mojo.data.eventLevelData.priority;
        this.attributedTruthfully = mojo.data.eventLevelData.attributedTruthfully;
    }
}
class AggregatableAttributionReport extends Report {
    constructor(mojo) {
        super(mojo);
        this.contributions = JSON.stringify(mojo.data.aggregatableAttributionData.contributions, bigintReplacer, ' ');
    }
}
class ReportTableModel extends TableModel {
    constructor(showDebugReportsContainer, sendReportsButton) {
        super();
        this.sentOrDroppedReports = [];
        this.storedReports = [];
        this.debugReports = [];
        const showDebugReportsCheckbox = showDebugReportsContainer.querySelector('input[type="checkbox"]');
        assert(showDebugReportsCheckbox);
        this.showDebugReportsCheckbox = showDebugReportsCheckbox;
        const hiddenDebugReportsSpan = showDebugReportsContainer.querySelector('span');
        assert(hiddenDebugReportsSpan);
        this.hiddenDebugReportsSpan = hiddenDebugReportsSpan;
        this.sendReportsButton = sendReportsButton;
        this.selectionColumn = new SelectionColumn(this);
        this.emptyRowText = 'No sent or pending reports.';
        this.showDebugReportsCheckbox.addEventListener('input', () => this.notifyRowsChanged());
        this.sendReportsButton.addEventListener('click', () => this.sendReports_());
        this.selectionColumn.selectionChangedListeners.add((anySelected) => {
            this.sendReportsButton.disabled = !anySelected;
        });
        this.rowsChangedListeners.add(() => this.updateHiddenDebugReportsSpan_());
    }
    styleRow(tr, report) {
        tr.classList.toggle('http-error', report.httpResponseCode !== undefined &&
            (report.httpResponseCode < 200 || report.httpResponseCode >= 400));
    }
    getRows() {
        let rows = this.sentOrDroppedReports.concat(this.storedReports);
        if (this.showDebugReportsCheckbox.checked) {
            rows = rows.concat(this.debugReports);
        }
        return rows;
    }
    setStoredReports(storedReports) {
        this.storedReports = storedReports;
        this.notifyRowsChanged();
    }
    addSentOrDroppedReport(report) {
        // Prevent the page from consuming ever more memory if the user leaves the
        // page open for a long time.
        if (this.sentOrDroppedReports.length + this.debugReports.length >= 1000) {
            this.sentOrDroppedReports = [];
            this.debugReports = [];
        }
        if (report.isDebug) {
            this.debugReports.push(report);
        }
        else {
            this.sentOrDroppedReports.push(report);
        }
        this.notifyRowsChanged();
    }
    clear() {
        this.storedReports = [];
        this.sentOrDroppedReports = [];
        this.debugReports = [];
        this.notifyRowsChanged();
    }
    updateHiddenDebugReportsSpan_() {
        this.hiddenDebugReportsSpan.innerText =
            this.showDebugReportsCheckbox.checked ?
                '' :
                ` (${this.debugReports.length} hidden)`;
    }
    /**
     * Sends all selected reports.
     * Disables the button while the reports are still being sent.
     * Observer.onReportsChanged and Observer.onSourcesChanged will be called
     * automatically as reports are deleted, so there's no need to manually
     * refresh the data on completion.
     */
    sendReports_() {
        const ids = [];
        this.storedReports.forEach((report) => {
            if (!report.input.disabled && report.input.checked) {
                ids.push(report.id);
            }
        });
        if (ids.length === 0) {
            return;
        }
        const previousText = this.sendReportsButton.innerText;
        this.sendReportsButton.disabled = true;
        this.sendReportsButton.innerText = 'Sending...';
        assert(pageHandler);
        pageHandler.sendReports(ids).then(() => {
            this.sendReportsButton.innerText = previousText;
        });
    }
}
class EventLevelReportTableModel extends ReportTableModel {
    constructor(showDebugReportsContainer, sendReportsButton) {
        super(showDebugReportsContainer, sendReportsButton);
        this.cols = [
            this.selectionColumn,
            new CodeColumn('Report Body', (e) => e.reportBody),
            new ValueColumn('Status', (e) => e.status),
            new ReportUrlColumn(),
            new DateColumn('Trigger Time', (e) => e.triggerTime),
            new DateColumn('Report Time', (e) => e.reportTime),
            new ValueColumn('Report Priority', (e) => e.reportPriority),
            new ValueColumn('Randomized Report', (e) => e.attributedTruthfully ? 'no' : 'yes'),
        ];
        // Sort by report time by default.
        this.sortIdx = 5;
    }
}
class AggregatableAttributionReportTableModel extends ReportTableModel {
    constructor(showDebugReportsContainer, sendReportsButton) {
        super(showDebugReportsContainer, sendReportsButton);
        this.cols = [
            this.selectionColumn,
            new CodeColumn('Report Body', (e) => e.reportBody),
            new ValueColumn('Status', (e) => e.status),
            new ReportUrlColumn(),
            new DateColumn('Trigger Time', (e) => e.triggerTime),
            new DateColumn('Report Time', (e) => e.reportTime),
            new CodeColumn('Histograms', (e) => e.contributions),
        ];
        // Sort by report time by default.
        this.sortIdx = 5;
    }
}
/**
 * Reference to the backend providing all the data.
 */
let pageHandler = null;
let sourceTableModel = null;
let triggerTableModel = null;
let eventLevelReportTableModel = null;
let aggregatableAttributionReportTableModel = null;
/**
 * Converts a mojo origin into a user-readable string, omitting default ports.
 * @param origin Origin to convert
 */
function originToText(origin) {
    if (origin.host.length === 0) {
        return 'Null';
    }
    let result = origin.scheme + '://' + origin.host;
    if ((origin.scheme === 'https' && origin.port !== 443) ||
        (origin.scheme === 'http' && origin.port !== 80)) {
        result += ':' + origin.port;
    }
    return result;
}
/**
 * Converts a mojo SourceType into a user-readable string.
 * @param sourceType Source type to convert
 */
function sourceTypeToText(sourceType) {
    switch (sourceType) {
        case SourceType.kNavigation:
            return 'Navigation';
        case SourceType.kEvent:
            return 'Event';
        default:
            return sourceType.toString();
    }
}
/**
 * Converts a mojo Attributability into a user-readable string.
 * @param attributability Attributability to convert
 */
function attributabilityToText(attributability) {
    switch (attributability) {
        case WebUISource_Attributability.kAttributable:
            return 'Attributable';
        case WebUISource_Attributability.kNoised:
            return 'Unattributable: noised';
        case WebUISource_Attributability.kReplacedByNewerSource:
            return 'Unattributable: replaced by newer source';
        case WebUISource_Attributability.kReachedEventLevelAttributionLimit:
            return 'Attributable: reached event-level attribution limit';
        case WebUISource_Attributability.kInternalError:
            return 'Rejected: internal error';
        case WebUISource_Attributability.kInsufficientSourceCapacity:
            return 'Rejected: insufficient source capacity';
        case WebUISource_Attributability.kInsufficientUniqueDestinationCapacity:
            return 'Rejected: insufficient unique destination capacity';
        case WebUISource_Attributability.kExcessiveReportingOrigins:
            return 'Rejected: excessive reporting origins';
        case WebUISource_Attributability.kProhibitedByBrowserPolicy:
            return 'Rejected: prohibited by browser policy';
        default:
            return attributability.toString();
    }
}
function triggerStatusToText(status) {
    switch (status) {
        case WebUITrigger_Status.kSuccess:
            return 'Success: Report stored';
        case WebUITrigger_Status.kInternalError:
            return 'Failure: Internal error';
        case WebUITrigger_Status.kNoMatchingSources:
            return 'Failure: No matching sources';
        case WebUITrigger_Status.kNoMatchingSourceFilterData:
            return 'Failure: No matching source filter data';
        case WebUITrigger_Status.kNoReportCapacityForDestinationSite:
            return 'Failure: No report capacity for destination site';
        case WebUITrigger_Status.kExcessiveAttributions:
            return 'Failure: Excessive attributions';
        case WebUITrigger_Status.kExcessiveReportingOrigins:
            return 'Failure: Excessive reporting origins';
        case WebUITrigger_Status.kDeduplicated:
            return 'Failure: Deduplicated against an earlier report';
        case WebUITrigger_Status.kLowPriority:
            return 'Failure: Priority too low';
        case WebUITrigger_Status.kNoised:
            return 'Failure: Noised';
        case WebUITrigger_Status.kNoHistograms:
            return 'Failure: No source histograms';
        case WebUITrigger_Status.kInsufficientBudget:
            return 'Failure: Insufficient budget';
        case WebUITrigger_Status.kNotRegistered:
            return 'Failure: No aggregatable data present';
        case WebUITrigger_Status.kProhibitedByBrowserPolicy:
            return 'Failure: Prohibited by browser policy';
        case WebUITrigger_Status.kNoMatchingConfigurations:
            return 'Rejected: no matching event-level configurations';
        default:
            return status.toString();
    }
}
/**
 * Fetch all sources, pending reports, and sent reports from the
 * backend and populate the tables. Also update measurement enabled status.
 */
function updatePageData() {
    assert(pageHandler);
    // Get the feature status for Attribution Reporting and populate it.
    pageHandler.isAttributionReportingEnabled().then((response) => {
        const featureStatusContent = document.querySelector('#feature-status-content');
        assert(featureStatusContent);
        featureStatusContent.innerText = response.enabled ? 'enabled' : 'disabled';
        featureStatusContent.classList.toggle('disabled', !response.enabled);
        const debugModeContent = document.querySelector('#debug-mode-content');
        assert(debugModeContent);
        const html = getTrustedHTML `The #attribution-reporting-debug-mode flag is
 <strong>enabled</strong>, reports are sent immediately and never pending.`;
        debugModeContent.innerHTML = html;
        if (!response.debugMode) {
            debugModeContent.innerText = '';
        }
    });
    updateSources();
    updateReports(ReportType.kEventLevel);
    updateReports(ReportType.kAggregatableAttribution);
}
function updateSources() {
    assert(pageHandler);
    pageHandler.getActiveSources().then((response) => {
        assert(sourceTableModel);
        sourceTableModel.setStoredSources(response.sources.map((mojo) => new Source(mojo)));
    });
}
function updateReports(reportType) {
    assert(pageHandler);
    pageHandler.getReports(reportType).then((response) => {
        switch (reportType) {
            case ReportType.kEventLevel:
                assert(eventLevelReportTableModel);
                eventLevelReportTableModel.setStoredReports(response.reports
                    .filter((mojo) => mojo.data.eventLevelData !== undefined)
                    .map((mojo) => new EventLevelReport(mojo)));
                break;
            case ReportType.kAggregatableAttribution:
                assert(aggregatableAttributionReportTableModel);
                aggregatableAttributionReportTableModel.setStoredReports(response.reports
                    .filter((mojo) => mojo.data.aggregatableAttributionData !== undefined)
                    .map((mojo) => new AggregatableAttributionReport(mojo)));
                break;
        }
    });
}
/**
 * Deletes all data stored by the conversions backend.
 * Observer.onReportsChanged and Observer.onSourcesChanged will be called
 * automatically as reports are deleted, so there's no need to manually refresh
 * the data on completion.
 */
function clearStorage() {
    assert(sourceTableModel);
    sourceTableModel.clear();
    assert(triggerTableModel);
    triggerTableModel.clear();
    assert(eventLevelReportTableModel);
    eventLevelReportTableModel.clear();
    assert(aggregatableAttributionReportTableModel);
    aggregatableAttributionReportTableModel.clear();
    assert(pageHandler);
    pageHandler.clearStorage();
}
function addSentOrDroppedReport(mojo) {
    if (mojo.data.eventLevelData !== undefined) {
        assert(eventLevelReportTableModel);
        eventLevelReportTableModel.addSentOrDroppedReport(new EventLevelReport(mojo));
    }
    else {
        assert(aggregatableAttributionReportTableModel);
        aggregatableAttributionReportTableModel.addSentOrDroppedReport(new AggregatableAttributionReport(mojo));
    }
}
class Observer {
    onSourcesChanged() {
        updateSources();
    }
    onReportsChanged(reportType) {
        updateReports(reportType);
    }
    onSourceRejectedOrDeactivated(mojo) {
        assert(sourceTableModel);
        sourceTableModel.addUnstoredSource(new Source(mojo));
    }
    onReportSent(mojo) {
        addSentOrDroppedReport(mojo);
    }
    onReportDropped(mojo) {
        addSentOrDroppedReport(mojo);
    }
    onTriggerHandled(mojo) {
        assert(triggerTableModel);
        triggerTableModel.addTrigger(new Trigger(mojo));
    }
}
function installUnreadIndicator(model, tab) {
    assert(tab);
    model.rowsChangedListeners.add(() => {
        if (!tab.hasAttribute('selected')) {
            tab.classList.add('unread');
        }
    });
}
document.addEventListener('DOMContentLoaded', function () {
    // Setup the mojo interface.
    pageHandler = AttributionInternalsHandler.getRemote();
    sourceTableModel = new SourceTableModel();
    triggerTableModel = new TriggerTableModel();
    const showDebugReports = document.querySelector('#show-debug-event-reports');
    assert(showDebugReports);
    const sendReports = document.querySelector('#send-reports');
    assert(sendReports);
    eventLevelReportTableModel =
        new EventLevelReportTableModel(showDebugReports, sendReports);
    const showDebugAggregatableReports = document.querySelector('#show-debug-aggregatable-reports');
    assert(showDebugAggregatableReports);
    const sendAggregatableReports = document.querySelector('#send-aggregatable-reports');
    assert(sendAggregatableReports);
    aggregatableAttributionReportTableModel =
        new AggregatableAttributionReportTableModel(showDebugAggregatableReports, sendAggregatableReports);
    const tabBox = document.querySelector('cr-tab-box');
    assert(tabBox);
    tabBox.addEventListener('selected-index-change', e => {
        const tabs = document.querySelectorAll('div[slot=\'tab\']');
        tabs[e.detail].classList.remove('unread');
    });
    installUnreadIndicator(sourceTableModel, document.querySelector('#sources-tab'));
    installUnreadIndicator(triggerTableModel, document.querySelector('#triggers-tab'));
    installUnreadIndicator(eventLevelReportTableModel, document.querySelector('#event-level-reports-tab'));
    installUnreadIndicator(aggregatableAttributionReportTableModel, document.querySelector('#aggregatable-reports-tab'));
    const refresh = document.querySelector('#refresh');
    assert(refresh);
    refresh.addEventListener('click', updatePageData);
    const clearData = document.querySelector('#clear-data');
    assert(clearData);
    clearData.addEventListener('click', clearStorage);
    const sourceTable = document.querySelector('#sourceTable');
    assert(sourceTable);
    sourceTable.setModel(sourceTableModel);
    const triggerTable = document.querySelector('#triggerTable');
    assert(triggerTable);
    triggerTable.setModel(triggerTableModel);
    const reportTable = document.querySelector('#reportTable');
    assert(reportTable);
    reportTable.setModel(eventLevelReportTableModel);
    const aggregatableReportTable = document.querySelector('#aggregatableReportTable');
    assert(aggregatableReportTable);
    aggregatableReportTable.setModel(aggregatableAttributionReportTableModel);
    tabBox.hidden = false;
    const receiver = new ObserverReceiver(new Observer());
    assert(pageHandler);
    pageHandler.addObserver(receiver.$.bindNewPipeAndPassRemote());
    updatePageData();
});
