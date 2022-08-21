import * as puppeteer from 'puppeteer';
import { getDevToolsFrontendHostname, reloadDevTools } from '../conductor/hooks.js';
import { getBrowserAndPages, getTestServerPort } from '../conductor/puppeteer-state.js';
import { AsyncScope } from './async-scope.js';
declare global {
    interface Window {
        __pendingEvents: Map<string, Event[]>;
        __getRenderCoordinatorPendingFrames(): number;
    }
}
export declare type Platform = 'mac' | 'win32' | 'linux';
export declare let platform: Platform;
/**
 * Returns an {x, y} position within the element identified by the selector within the root.
 * By default the position is the center of the bounding box. If the element's bounding box
 * extends beyond that of a containing element, this position may not correspond to the element.
 * In this case, specifying maxPixelsFromLeft will constrain the returned point to be close to
 * the left edge of the bounding box.
 */
export declare const getElementPosition: (selector: string | puppeteer.ElementHandle, root?: puppeteer.JSHandle, maxPixelsFromLeft?: number) => Promise<{
    x: number;
    y: number;
}>;
export interface ClickOptions {
    root?: puppeteer.JSHandle;
    clickOptions?: PuppeteerClickOptions;
    maxPixelsFromLeft?: number;
}
interface PuppeteerClickOptions extends puppeteer.ClickOptions {
    modifier?: 'ControlOrMeta';
}
export declare const click: (selector: string | puppeteer.ElementHandle, options?: ClickOptions) => Promise<void>;
export declare const doubleClick: (selector: string, options?: {
    root?: puppeteer.JSHandle;
    clickOptions?: puppeteer.ClickOptions;
}) => Promise<void>;
export declare const typeText: (text: string) => Promise<void>;
export declare const pressKey: (key: puppeteer.KeyInput, modifiers?: {
    control?: boolean;
    alt?: boolean;
    shift?: boolean;
}) => Promise<void>;
export declare const pasteText: (text: string) => Promise<void>;
export declare const $: <ElementType extends Element = Element>(selector: string, root?: puppeteer.JSHandle, handler?: string) => Promise<puppeteer.ElementHandle<ElementType> | null>;
export declare const $$: <ElementType extends Element = Element>(selector: string, root?: puppeteer.JSHandle, handler?: string) => Promise<puppeteer.ElementHandle<ElementType>[]>;
/**
 * Search for an element based on its textContent.
 *
 * @param textContent The text content to search for.
 * @param root The root of the search.
 */
export declare const $textContent: (textContent: string, root?: puppeteer.JSHandle) => Promise<puppeteer.ElementHandle<Element> | null>;
/**
 * Search for all elements based on their textContent
 *
 * @param textContent The text content to search for.
 * @param root The root of the search.
 */
export declare const $$textContent: (textContent: string, root?: puppeteer.JSHandle) => Promise<puppeteer.ElementHandle<Element>[]>;
export declare const timeout: (duration: number) => Promise<unknown>;
export declare const waitFor: <ElementType extends Element = Element>(selector: string, root?: puppeteer.JSHandle, asyncScope?: AsyncScope, handler?: string) => Promise<puppeteer.ElementHandle<ElementType>>;
export declare const waitForMany: (selector: string, count: number, root?: puppeteer.JSHandle, asyncScope?: AsyncScope, handler?: string) => Promise<puppeteer.ElementHandle<Element>[]>;
export declare const waitForNone: (selector: string, root?: puppeteer.JSHandle, asyncScope?: AsyncScope, handler?: string) => Promise<boolean>;
export declare const waitForAria: (selector: string, root?: puppeteer.JSHandle, asyncScope?: AsyncScope) => Promise<puppeteer.ElementHandle<Element>>;
export declare const waitForAriaNone: (selector: string, root?: puppeteer.JSHandle, asyncScope?: AsyncScope) => Promise<boolean>;
export declare const waitForElementWithTextContent: (textContent: string, root?: puppeteer.JSHandle, asyncScope?: AsyncScope) => Promise<puppeteer.ElementHandle<Element>>;
export declare const waitForElementsWithTextContent: (textContent: string, root?: puppeteer.JSHandle, asyncScope?: AsyncScope) => Promise<puppeteer.ElementHandle<Element>[]>;
export declare const waitForNoElementsWithTextContent: (textContent: string, root?: puppeteer.JSHandle, asyncScope?: AsyncScope) => Promise<boolean>;
export declare const waitForFunction: <T>(fn: () => Promise<T | undefined>, asyncScope?: AsyncScope) => Promise<T>;
export declare const waitForFunctionWithTries: <T>(fn: () => Promise<T | undefined>, options?: {
    tries: number;
}, asyncScope?: AsyncScope) => Promise<T | undefined>;
export declare const waitForWithTries: (selector: string, root?: puppeteer.JSHandle, options?: {
    tries: number;
}, asyncScope?: AsyncScope, handler?: string) => Promise<puppeteer.ElementHandle<Element> | undefined>;
export declare const debuggerStatement: (frontend: puppeteer.Page) => Promise<void>;
export declare const logToStdOut: (msg: string) => void;
export declare const logFailure: () => void;
export declare const enableExperiment: (experiment: string, options?: {
    selectedPanel?: {
        name: string;
        selector?: string;
    };
    canDock?: boolean;
}) => Promise<void>;
export declare const setDevToolsSettings: (settings: Record<string, string>) => Promise<void>;
export declare const goTo: (url: string) => Promise<void>;
export declare const overridePermissions: (permissions: puppeteer.Permission[]) => Promise<void>;
export declare const clearPermissionsOverride: () => Promise<void>;
export declare const goToResource: (path: string) => Promise<void>;
export declare const goToResourceWithCustomHost: (host: string, path: string) => Promise<void>;
export declare const getResourcesPath: (host?: string) => string;
export declare const step: (description: string, step: Function) => Promise<any>;
export declare const waitForAnimationFrame: () => Promise<void>;
export declare const activeElement: () => Promise<puppeteer.ElementHandle>;
export declare const activeElementTextContent: () => Promise<string | null>;
export declare const activeElementAccessibleName: () => Promise<string | null>;
export declare const tabForward: (page?: puppeteer.Page) => Promise<void>;
export declare const tabBackward: (page?: puppeteer.Page) => Promise<void>;
export declare const selectTextFromNodeToNode: (from: puppeteer.JSHandle | Promise<puppeteer.JSHandle>, to: puppeteer.JSHandle | Promise<puppeteer.JSHandle>, direction: 'up' | 'down') => Promise<string>;
export declare const closePanelTab: (panelTabSelector: string) => Promise<void>;
export declare const closeAllCloseableTabs: () => Promise<void>;
export declare const enableCDPLogging: () => Promise<void>;
export declare const enableCDPTracking: () => Promise<void>;
export declare const logOutstandingCDP: () => Promise<void>;
export declare const selectOption: (select: puppeteer.ElementHandle<HTMLSelectElement>, value: string) => Promise<void>;
export declare const scrollElementIntoView: (selector: string, root?: puppeteer.JSHandle) => Promise<void>;
export declare const installEventListener: (frontend: puppeteer.Page, eventType: string) => Promise<void>;
export declare const getPendingEvents: (frontend: puppeteer.Page, eventType: string) => Promise<Event[] | undefined>;
export declare const hasClass: (element: puppeteer.ElementHandle<Element>, classname: string) => Promise<boolean>;
export declare const waitForClass: (element: puppeteer.ElementHandle<Element>, classname: string) => Promise<void>;
/**
 * This is useful to keep TypeScript happy in a test - if you have a value
 * that's potentially `null` you can use this function to assert that it isn't,
 * and satisfy TypeScript that the value is present.
 */
export declare function assertNotNullOrUndefined<T>(val: T): asserts val is NonNullable<T>;
export { getBrowserAndPages, getDevToolsFrontendHostname, getTestServerPort, reloadDevTools, puppeteer };
export declare function matchString(actual: string, expected: string | RegExp): true | string;
export declare function matchArray<A, E>(actual: A[], expected: E[], comparator: (actual: A, expected: E) => true | string): true | string;
export declare function assertOk<Args extends unknown[]>(check: (...args: Args) => true | string): (...args: Args) => void;
export declare function matchTable<A, E>(actual: A[][], expected: E[][], comparator: (actual: A, expected: E) => true | string): string | true;
export declare const matchStringArray: (actual: string[], expected: (string | RegExp)[]) => string | true;
export declare const assertMatchArray: (actual: string[], expected: (string | RegExp)[]) => void;
export declare const matchStringTable: (actual: string[][], expected: (string | RegExp)[][]) => string | true;
export declare function renderCoordinatorQueueEmpty(): Promise<void>;
export declare function setCheckBox(selector: string, wantChecked: boolean): Promise<void>;
