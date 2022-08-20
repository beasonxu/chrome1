export class FocusRow {
    static isFocusable(element: Element): boolean;
    static getFocusableElement(element: HTMLElement): HTMLElement;
    constructor(root: Element, boundary: Element | null, delegate?: FocusRowDelegate | undefined);
    root: Element;
    private boundary_;
    delegate: FocusRowDelegate | undefined;
    protected eventTracker: EventTracker;
    addItem(type: string, selectorOrElement: string | HTMLElement): boolean;
    destroy(): void;
    protected getCustomEquivalent(sampleElement: HTMLElement): HTMLElement;
    getElements(): Array<HTMLElement>;
    getEquivalentElement(sampleElement: HTMLElement): HTMLElement;
    getFirstFocusable(opt_type?: string | undefined): HTMLElement | null;
    getFocusableElements(): Array<HTMLElement>;
    getTypeForElement(element: Element): string;
    isActive(): boolean;
    makeActive(active: boolean): void;
    private onBlur_;
    private onFocus_;
    private onMousedown_;
    private onKeydown_;
}
export namespace FocusRow {
    const ACTIVE_CLASS: string;
}
export class FocusRowDelegate {
    onKeydown(row: FocusRow, e: Event): boolean;
    onFocus(row: FocusRow, e: Event): void;
    getCustomEquivalent(sampleElement: HTMLElement): HTMLElement | null;
}
import { EventTracker } from "chrome://resources/js/event_tracker.m.js";
