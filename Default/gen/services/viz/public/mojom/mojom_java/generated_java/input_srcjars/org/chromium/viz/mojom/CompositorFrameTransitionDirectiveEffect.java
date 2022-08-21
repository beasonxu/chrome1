// CompositorFrameTransitionDirectiveEffect.java is auto generated by mojom_bindings_generator.py, do not edit


// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by:
//     mojo/public/tools/bindings/mojom_bindings_generator.py
// For:
//     services/viz/public/mojom/compositing/compositor_frame_transition_directive.mojom
//

package org.chromium.viz.mojom;

import androidx.annotation.IntDef;

public final class CompositorFrameTransitionDirectiveEffect {
    private static final boolean IS_EXTENSIBLE = false;
    @IntDef({

        CompositorFrameTransitionDirectiveEffect.NONE,
        CompositorFrameTransitionDirectiveEffect.COVER_DOWN,
        CompositorFrameTransitionDirectiveEffect.COVER_LEFT,
        CompositorFrameTransitionDirectiveEffect.COVER_RIGHT,
        CompositorFrameTransitionDirectiveEffect.COVER_UP,
        CompositorFrameTransitionDirectiveEffect.EXPLODE,
        CompositorFrameTransitionDirectiveEffect.FADE,
        CompositorFrameTransitionDirectiveEffect.IMPLODE,
        CompositorFrameTransitionDirectiveEffect.REVEAL_DOWN,
        CompositorFrameTransitionDirectiveEffect.REVEAL_LEFT,
        CompositorFrameTransitionDirectiveEffect.REVEAL_RIGHT,
        CompositorFrameTransitionDirectiveEffect.REVEAL_UP})
    public @interface EnumType {}

    public static final int NONE = 0;
    public static final int COVER_DOWN = 1;
    public static final int COVER_LEFT = 2;
    public static final int COVER_RIGHT = 3;
    public static final int COVER_UP = 4;
    public static final int EXPLODE = 5;
    public static final int FADE = 6;
    public static final int IMPLODE = 7;
    public static final int REVEAL_DOWN = 8;
    public static final int REVEAL_LEFT = 9;
    public static final int REVEAL_RIGHT = 10;
    public static final int REVEAL_UP = 11;
    public static final int MIN_VALUE = 0;
    public static final int MAX_VALUE = 11;

    public static boolean isKnownValue(int value) {
        return value >= 0 && value <= 11;
    }

    public static void validate(int value) {
        if (IS_EXTENSIBLE || isKnownValue(value)) return;
        throw new org.chromium.mojo.bindings.DeserializationException("Invalid enum value.");
    }

    public static int toKnownValue(int value) {
      return value;
    }

    private CompositorFrameTransitionDirectiveEffect() {}
}