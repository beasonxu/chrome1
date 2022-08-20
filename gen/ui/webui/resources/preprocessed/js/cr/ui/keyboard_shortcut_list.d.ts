export class KeyboardShortcutList {
    constructor(shortcuts: string);
    shortcuts_: KeyboardShortcut[];
    matchesEvent(e: Event): boolean;
}
declare class KeyboardShortcut {
    constructor(shortcut: string);
    private useKeyCode_;
    private mods_;
    private key_;
    private keyCode_;
    matchesEvent(e: Event): boolean;
}
export {};
