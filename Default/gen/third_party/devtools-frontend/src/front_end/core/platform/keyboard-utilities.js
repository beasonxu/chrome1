// Copyright (c) 2020 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
export const ENTER_KEY = 'Enter';
export const ESCAPE_KEY = 'Escape';
export const TAB_KEY = 'Tab';
export const ARROW_KEYS = new Set([
    "ArrowUp" /* ArrowKey.UP */,
    "ArrowDown" /* ArrowKey.DOWN */,
    "ArrowLeft" /* ArrowKey.LEFT */,
    "ArrowRight" /* ArrowKey.RIGHT */,
]);
export function keyIsArrowKey(key) {
    return ARROW_KEYS.has(key);
}
//# sourceMappingURL=keyboard-utilities.js.map