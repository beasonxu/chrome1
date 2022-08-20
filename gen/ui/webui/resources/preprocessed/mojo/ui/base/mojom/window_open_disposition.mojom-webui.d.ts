export namespace WindowOpenDispositionSpec {
    const $: any;
}
export type WindowOpenDisposition = number;
export namespace WindowOpenDisposition {
    const UNKNOWN: number;
    const CURRENT_TAB: number;
    const SINGLETON_TAB: number;
    const NEW_FOREGROUND_TAB: number;
    const NEW_BACKGROUND_TAB: number;
    const NEW_POPUP: number;
    const NEW_WINDOW: number;
    const SAVE_TO_DISK: number;
    const OFF_THE_RECORD: number;
    const IGNORE_ACTION: number;
    const SWITCH_TO_TAB: number;
    const NEW_PICTURE_IN_PICTURE: number;
    const MIN_VALUE: number;
    const MAX_VALUE: number;
}
export namespace ClickModifiersSpec {
    const $_1: mojo.internal.MojomType;
    export { $_1 as $ };
}
/**
 * @record
 */
export class ClickModifiers {
    /** @type { !boolean } */
    middleButton: boolean;
    /** @type { !boolean } */
    altKey: boolean;
    /** @type { !boolean } */
    ctrlKey: boolean;
    /** @type { !boolean } */
    metaKey: boolean;
    /** @type { !boolean } */
    shiftKey: boolean;
}
import { mojo } from "//resources/mojo/mojo/public/js/bindings.js";
