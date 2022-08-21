import type * as puppeteer from 'puppeteer';
export declare const RECORD_BUTTON_SELECTOR = "[aria-label=\"Record\"]";
export declare const STOP_BUTTON_SELECTOR = "[aria-label=\"Stop\"]";
export declare const SUMMARY_TAB_SELECTOR = "[aria-label=\"Summary\"]";
export declare const BOTTOM_UP_SELECTOR = "[aria-label=\"Bottom-Up\"]";
export declare const CALL_TREE_SELECTOR = "[aria-label=\"Call Tree\"]";
export declare const ACTIVITY_COLUMN_SELECTOR = ".activity-column.disclosure";
export declare const TOTAL_TIME_SELECTOR = "div:nth-child(1) > div.vbox.timeline-details-chip-body > div:nth-child(1) > div.timeline-details-view-row-value";
export declare function navigateToPerformanceTab(testName?: string): Promise<void>;
export declare function openCaptureSettings(sectionClassName: string): Promise<puppeteer.ElementHandle<Element>>;
export declare function searchForComponent(frontend: puppeteer.Page, searchEntry: string): Promise<void>;
export declare function navigateToSummaryTab(): Promise<void>;
export declare function navigateToBottomUpTab(): Promise<void>;
export declare function navigateToCallTreeTab(): Promise<void>;
export declare function startRecording(): Promise<void>;
export declare function stopRecording(): Promise<void>;
export declare function getTotalTimeFromSummary(): Promise<number>;
export declare function retrieveSelectedAndExpandedActivityItems(frontend: puppeteer.Page): Promise<any[]>;
export declare function navigateToPerformanceSidebarTab(tabName: string): Promise<void>;
export declare function clickOnFunctionLink(): Promise<void>;
