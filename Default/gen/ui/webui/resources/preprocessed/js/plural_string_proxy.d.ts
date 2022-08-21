export class PluralStringProxy {
    getPluralString(messageName: string, itemCount: number): Promise<string>;
    getPluralStringTupleWithComma(messageName1: string, itemCount1: number, messageName2: string, itemCount2: number): Promise<string>;
    getPluralStringTupleWithPeriods(messageName1: string, itemCount1: number, messageName2: string, itemCount2: number): Promise<string>;
}
export class PluralStringProxyImpl implements PluralStringProxy {
    static getInstance(): PluralStringProxy;
    static setInstance(obj: PluralStringProxy): void;
    getPluralString(messageName: any, itemCount: any): Promise<any>;
    getPluralStringTupleWithComma(messageName1: any, itemCount1: any, messageName2: any, itemCount2: any): Promise<any>;
    getPluralStringTupleWithPeriods(messageName1: any, itemCount1: any, messageName2: any, itemCount2: any): Promise<any>;
}
