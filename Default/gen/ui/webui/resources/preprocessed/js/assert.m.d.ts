export function assert<T>(condition: T, opt_message?: string | undefined): T;
export function assertNotReached(message?: string | undefined): void;
export function assertInstanceof<T>(value: any, type: new (...arg1: any[]) => T, message?: string | undefined): T;
