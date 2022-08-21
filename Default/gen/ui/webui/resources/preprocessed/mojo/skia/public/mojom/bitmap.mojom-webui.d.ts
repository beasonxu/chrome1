export namespace BitmapN32Spec {
    const $: mojo.internal.MojomType;
}
export namespace BitmapWithArbitraryBppSpec {
    const $_1: mojo.internal.MojomType;
    export { $_1 as $ };
}
export namespace BitmapMappedFromTrustedProcessSpec {
    const $_2: mojo.internal.MojomType;
    export { $_2 as $ };
}
export namespace InlineBitmapSpec {
    const $_3: mojo.internal.MojomType;
    export { $_3 as $ };
}
/**
 * @record
 */
export class BitmapN32 {
    /** @type { !skia_mojom_BitmapN32ImageInfo } */
    imageInfo: skia_mojom_BitmapN32ImageInfo;
    /** @type { !mojoBase_mojom_BigBuffer } */
    pixelData: mojoBase_mojom_BigBuffer;
}
/**
 * @record
 */
export class BitmapWithArbitraryBpp {
    /** @type { !skia_mojom_ImageInfo } */
    imageInfo: skia_mojom_ImageInfo;
    /** @type { !bigint } */
    uNUSEDRowBytes: bigint;
    /** @type { !mojoBase_mojom_BigBuffer } */
    pixelData: mojoBase_mojom_BigBuffer;
}
/**
 * @record
 */
export class BitmapMappedFromTrustedProcess {
    /** @type { !skia_mojom_ImageInfo } */
    imageInfo: skia_mojom_ImageInfo;
    /** @type { !bigint } */
    uNUSEDRowBytes: bigint;
    /** @type { !mojoBase_mojom_BigBuffer } */
    pixelData: mojoBase_mojom_BigBuffer;
}
/**
 * @record
 */
export class InlineBitmap {
    /** @type { !skia_mojom_BitmapN32ImageInfo } */
    imageInfo: skia_mojom_BitmapN32ImageInfo;
    /** @type { !Array<!number> } */
    pixelData: Array<number>;
}
import { mojo } from "//resources/mojo/mojo/public/js/bindings.js";
import { BitmapN32ImageInfo as skia_mojom_BitmapN32ImageInfo } from "./image_info.mojom-webui.js";
import { BigBuffer as mojoBase_mojom_BigBuffer } from "../../../mojo/public/mojom/base/big_buffer.mojom-webui.js";
import { ImageInfo as skia_mojom_ImageInfo } from "./image_info.mojom-webui.js";
