export namespace String16Spec {
    const $: mojo.internal.MojomType;
}
export namespace BigString16Spec {
    const $_1: mojo.internal.MojomType;
    export { $_1 as $ };
}
/**
 * @record
 */
export class String16 {
    /** @type { !Array<!number> } */
    data: Array<number>;
}
/**
 * @record
 */
export class BigString16 {
    /** @type { !mojoBase_mojom_BigBuffer } */
    data: mojoBase_mojom_BigBuffer;
}
import { mojo } from "//resources/mojo/mojo/public/js/bindings.js";
import { BigBuffer as mojoBase_mojom_BigBuffer } from "./big_buffer.mojom-webui.js";
