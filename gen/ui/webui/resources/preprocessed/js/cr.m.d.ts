export function dispatchSimpleEvent(target: EventTarget, type: string, bubbles?: boolean | undefined, cancelable?: boolean | undefined): boolean;
export function addSingletonGetter(ctor: Function): void;
export function dispatchPropertyChange(target: EventTarget, propertyName: string, newValue: any, oldValue: any): void;
export function webUIResponse(id: string, isSuccess: boolean, response: any): void;
export function sendWithPromise(methodName: string, ...args: any[]): Promise<any>;
export function webUIListenerCallback(event: string, ...args: any[]): void;
export function addWebUIListener(eventName: string, callback: Function): WebUIListener;
export function removeWebUIListener(listener: WebUIListener): boolean;
export function getPropertyDescriptor(name: string, kind?: PropertyKind | undefined, setHook?: ((arg0: unknown, arg1: unknown) => void) | undefined): {
    get: () => any;
    set: (arg0: any) => void;
};
export type WebUIListener = {
    eventName: string;
    uid: number;
};
export let WebUIListener: any;
export const isMac: boolean;
export const isWindows: boolean;
export const isChromeOS: boolean;
export const isLacros: boolean;
export const isLinux: boolean;
export const isAndroid: boolean;
export const isIOS: boolean;
export type PropertyKind = string;
export namespace PropertyKind {
    const JS: string;
    const ATTR: string;
    const BOOL_ATTR: string;
}
