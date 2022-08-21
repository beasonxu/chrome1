// Copyright 2022 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
export class TestPlugin {
    constructor(name) {
        this.name = name;
    }
    name;
    handleScript(_script) {
        return false;
    }
    async evaluate(_expression, _context, _stopId) {
        return null;
    }
    async getProperties(_objectId) {
        return [];
    }
    async releaseObject(_objectId) {
    }
    async addRawModule(_rawModuleId, _symbolsURL, _rawModule) {
        return [];
    }
    async sourceLocationToRawLocation(_sourceLocation) {
        return [];
    }
    async rawLocationToSourceLocation(_rawLocation) {
        return [];
    }
    async getScopeInfo(type) {
        return { type, typeName: type };
    }
    async listVariablesInScope(_rawLocation) {
        return [];
    }
    async removeRawModule(_rawModuleId) {
    }
    async getTypeInfo(_expression, _context) {
        return null;
    }
    async getFormatter(_expressionOrField, _context) {
        return null;
    }
    getInspectableAddress(_field) {
        throw new Error('Not implemented yet');
    }
    async getFunctionInfo(_rawLocation) {
        return { frames: [] };
    }
    async getInlinedFunctionRanges(_rawLocation) {
        return [];
    }
    async getInlinedCalleesRanges(_rawLocation) {
        return [];
    }
    async getMappedLines(_rawModuleId, _sourceFileURL) {
        return undefined;
    }
}
//# sourceMappingURL=LanguagePluginHelpers.js.map