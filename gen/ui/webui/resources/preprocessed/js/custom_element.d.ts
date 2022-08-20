/// <reference types="trusted-types" />
export declare class CustomElement extends HTMLElement {
    static get template(): string | TrustedHTML;
    constructor();
    $<E extends Element = Element>(query: string): E | null;
    $all<E extends Element = Element>(query: string): NodeListOf<E>;
}
