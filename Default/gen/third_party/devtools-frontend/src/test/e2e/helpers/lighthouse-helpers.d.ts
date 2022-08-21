import { type ElementHandle } from 'puppeteer';
export declare function waitForLighthousePanelContentLoaded(): Promise<void>;
export declare function navigateToLighthouseTab(path?: string): Promise<ElementHandle<Element>>;
export declare function waitForResult(): Promise<{
    reportEl: ElementHandle<Element>;
    lhr: any;
    artifacts: any;
}>;
/**
 * Set the category checkboxes
 * @param selectedCategoryIds One of 'performance'|'accessibility'|'best-practices'|'seo'|'pwa'|'lighthouse-plugin-publisher-ads'
 */
export declare function selectCategories(selectedCategoryIds: string[]): Promise<void>;
export declare function selectMode(device: 'mobile' | 'desktop'): Promise<void>;
export declare function setClearStorage(enabled: boolean): Promise<void>;
export declare function setLegacyNavigation(enabled: boolean): Promise<void>;
export declare function setThrottlingMethod(throttlingMethod: 'simulate' | 'devtools'): Promise<void>;
export declare function clickStartButton(): Promise<void>;
export declare function isGenerateReportButtonDisabled(): Promise<boolean>;
export declare function openStorageView(): Promise<void>;
export declare function clearSiteData(): Promise<void>;
export declare function waitForStorageUsage(p: (quota: number) => boolean): Promise<void>;
export declare function getAuditsBreakdown(lhr: any, flakyAudits?: string[]): {
    auditResults: any[];
    erroredAudits: any[];
    failedAudits: any[];
};
