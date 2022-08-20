export namespace OriginSpec {
    const $: mojo.internal.MojomType;
}
/**
 * @record
 */
export class Origin {
    /** @type { !string } */
    scheme: string;
    /** @type { !string } */
    host: string;
    /** @type { !number } */
    port: number;
    /** @type { (mojoBase_mojom_UnguessableToken|undefined) } */
    nonceIfOpaque: (mojoBase_mojom_UnguessableToken | undefined);
}
import { mojo } from "//resources/mojo/mojo/public/js/bindings.js";
import { UnguessableToken as mojoBase_mojom_UnguessableToken } from "../../mojo/public/mojom/base/unguessable_token.mojom-webui.js";
