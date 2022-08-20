export var loadTimeData: LoadTimeData;
declare class LoadTimeData {
    data_: any | null;
    set data(arg: any);
    valueExists(id: string): boolean;
    getValue(id: string): any;
    getString(id: string): string;
    getStringF(id: string, ...args: (string | number)[]): string;
    substituteString(label: string, ...args: (string | number)[]): string;
    getSubstitutedStringPieces(label: string, ...args: (string | number)[]): Array<{
        value: string;
        arg: (null | string);
    }>;
    getBoolean(id: string): boolean;
    getInteger(id: string): number;
    overrideValues(replacements: any): void;
    resetForTesting(newData?: any | null): void;
    isInitialized(): boolean;
}
export {};
