export class FocusOutlineManager {
    static forDocument(doc: Document): FocusOutlineManager;
    constructor(doc: Document);
    private focusByKeyboard_;
    classList_: DOMTokenList;
    updateVisibility(): void;
    set visible(arg: boolean);
    get visible(): boolean;
}
