declare class ActionLink extends HTMLAnchorElement {
    connectedCallback(): void;
    set disabled(arg: boolean);
    get disabled(): boolean;
    override setAttribute(attr: any, val: any, ...args: any[]): void;
    override removeAttribute(attr: any, ...args: any[]): void;
}
