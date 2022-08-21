// Copyright 2017 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
import { assert } from 'chrome://resources/js/assert_ts.js';
import { writeUserEvent } from './chrome_sync.js';
function write() {
    const timeInput = document.querySelector('#event-time-usec-input');
    const navigationInput = document.querySelector('#navigation-id-input');
    assert(timeInput && navigationInput);
    writeUserEvent(timeInput.value, navigationInput.value);
}
document.addEventListener('DOMContentLoaded', () => {
    const button = document.querySelector('#create-event-button');
    assert(button);
    button.addEventListener('click', write);
}, false);
