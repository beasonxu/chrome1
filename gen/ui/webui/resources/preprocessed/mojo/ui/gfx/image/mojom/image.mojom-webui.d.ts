export namespace ImageSkiaRepSpec {
    const $: mojo.internal.MojomType;
}
export namespace ImageSkiaSpec {
    const $_1: mojo.internal.MojomType;
    export { $_1 as $ };
}
/**
 * @record
 */
export class ImageSkiaRep {
    /** @type { !skia_mojom_BitmapWithArbitraryBpp } */
    bitmap: skia_mojom_BitmapWithArbitraryBpp;
    /** @type { !number } */
    scale: number;
}
/**
 * @record
 */
export class ImageSkia {
    /** @type { !Array<!ImageSkiaRep> } */
    imageReps: Array<ImageSkiaRep>;
}
import { mojo } from "//resources/mojo/mojo/public/js/bindings.js";
import { BitmapWithArbitraryBpp as skia_mojom_BitmapWithArbitraryBpp } from "../../../../skia/public/mojom/bitmap.mojom-webui.js";
