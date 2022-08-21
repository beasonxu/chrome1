// ui/gfx/geometry/mojom/geometry.mojom-lite-for-compile.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
'use strict';

goog.require('mojo.internal');







goog.provide('gfx.mojom.PointSpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
gfx.mojom.PointSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

goog.provide('gfx.mojom.PointFSpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
gfx.mojom.PointFSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

goog.provide('gfx.mojom.Point3FSpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
gfx.mojom.Point3FSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

goog.provide('gfx.mojom.SizeSpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
gfx.mojom.SizeSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

goog.provide('gfx.mojom.SizeFSpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
gfx.mojom.SizeFSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

goog.provide('gfx.mojom.RectSpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
gfx.mojom.RectSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

goog.provide('gfx.mojom.RectFSpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
gfx.mojom.RectFSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

goog.provide('gfx.mojom.InsetsSpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
gfx.mojom.InsetsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

goog.provide('gfx.mojom.InsetsFSpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
gfx.mojom.InsetsFSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

goog.provide('gfx.mojom.Vector2dSpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
gfx.mojom.Vector2dSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

goog.provide('gfx.mojom.Vector2dFSpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
gfx.mojom.Vector2dFSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

goog.provide('gfx.mojom.Vector3dFSpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
gfx.mojom.Vector3dFSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

goog.provide('gfx.mojom.QuaternionSpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
gfx.mojom.QuaternionSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };




mojo.internal.Struct(
    gfx.mojom.PointSpec.$,
    'Point',
    [
      mojo.internal.StructField(
        'x', 0,
        0,
        mojo.internal.Int32,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'y', 4,
        0,
        mojo.internal.Int32,
        0,
        false /* nullable */),
    ],
    [[0, 16],]);



goog.provide('gfx.mojom.Point');

/** @record */
gfx.mojom.Point = class {
  constructor() {
    /** @export { !number } */
    this.x;
    /** @export { !number } */
    this.y;
  }
};




mojo.internal.Struct(
    gfx.mojom.PointFSpec.$,
    'PointF',
    [
      mojo.internal.StructField(
        'x', 0,
        0,
        mojo.internal.Float,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'y', 4,
        0,
        mojo.internal.Float,
        0,
        false /* nullable */),
    ],
    [[0, 16],]);



goog.provide('gfx.mojom.PointF');

/** @record */
gfx.mojom.PointF = class {
  constructor() {
    /** @export { !number } */
    this.x;
    /** @export { !number } */
    this.y;
  }
};




mojo.internal.Struct(
    gfx.mojom.Point3FSpec.$,
    'Point3F',
    [
      mojo.internal.StructField(
        'x', 0,
        0,
        mojo.internal.Float,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'y', 4,
        0,
        mojo.internal.Float,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'z', 8,
        0,
        mojo.internal.Float,
        0,
        false /* nullable */),
    ],
    [[0, 24],]);



goog.provide('gfx.mojom.Point3F');

/** @record */
gfx.mojom.Point3F = class {
  constructor() {
    /** @export { !number } */
    this.x;
    /** @export { !number } */
    this.y;
    /** @export { !number } */
    this.z;
  }
};




mojo.internal.Struct(
    gfx.mojom.SizeSpec.$,
    'Size',
    [
      mojo.internal.StructField(
        'width', 0,
        0,
        mojo.internal.Int32,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'height', 4,
        0,
        mojo.internal.Int32,
        0,
        false /* nullable */),
    ],
    [[0, 16],]);



goog.provide('gfx.mojom.Size');

/** @record */
gfx.mojom.Size = class {
  constructor() {
    /** @export { !number } */
    this.width;
    /** @export { !number } */
    this.height;
  }
};




mojo.internal.Struct(
    gfx.mojom.SizeFSpec.$,
    'SizeF',
    [
      mojo.internal.StructField(
        'width', 0,
        0,
        mojo.internal.Float,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'height', 4,
        0,
        mojo.internal.Float,
        0,
        false /* nullable */),
    ],
    [[0, 16],]);



goog.provide('gfx.mojom.SizeF');

/** @record */
gfx.mojom.SizeF = class {
  constructor() {
    /** @export { !number } */
    this.width;
    /** @export { !number } */
    this.height;
  }
};




mojo.internal.Struct(
    gfx.mojom.RectSpec.$,
    'Rect',
    [
      mojo.internal.StructField(
        'x', 0,
        0,
        mojo.internal.Int32,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'y', 4,
        0,
        mojo.internal.Int32,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'width', 8,
        0,
        mojo.internal.Int32,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'height', 12,
        0,
        mojo.internal.Int32,
        0,
        false /* nullable */),
    ],
    [[0, 24],]);



goog.provide('gfx.mojom.Rect');

/** @record */
gfx.mojom.Rect = class {
  constructor() {
    /** @export { !number } */
    this.x;
    /** @export { !number } */
    this.y;
    /** @export { !number } */
    this.width;
    /** @export { !number } */
    this.height;
  }
};




mojo.internal.Struct(
    gfx.mojom.RectFSpec.$,
    'RectF',
    [
      mojo.internal.StructField(
        'x', 0,
        0,
        mojo.internal.Float,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'y', 4,
        0,
        mojo.internal.Float,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'width', 8,
        0,
        mojo.internal.Float,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'height', 12,
        0,
        mojo.internal.Float,
        0,
        false /* nullable */),
    ],
    [[0, 24],]);



goog.provide('gfx.mojom.RectF');

/** @record */
gfx.mojom.RectF = class {
  constructor() {
    /** @export { !number } */
    this.x;
    /** @export { !number } */
    this.y;
    /** @export { !number } */
    this.width;
    /** @export { !number } */
    this.height;
  }
};




mojo.internal.Struct(
    gfx.mojom.InsetsSpec.$,
    'Insets',
    [
      mojo.internal.StructField(
        'top', 0,
        0,
        mojo.internal.Int32,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'left', 4,
        0,
        mojo.internal.Int32,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'bottom', 8,
        0,
        mojo.internal.Int32,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'right', 12,
        0,
        mojo.internal.Int32,
        0,
        false /* nullable */),
    ],
    [[0, 24],]);



goog.provide('gfx.mojom.Insets');

/** @record */
gfx.mojom.Insets = class {
  constructor() {
    /** @export { !number } */
    this.top;
    /** @export { !number } */
    this.left;
    /** @export { !number } */
    this.bottom;
    /** @export { !number } */
    this.right;
  }
};




mojo.internal.Struct(
    gfx.mojom.InsetsFSpec.$,
    'InsetsF',
    [
      mojo.internal.StructField(
        'top', 0,
        0,
        mojo.internal.Float,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'left', 4,
        0,
        mojo.internal.Float,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'bottom', 8,
        0,
        mojo.internal.Float,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'right', 12,
        0,
        mojo.internal.Float,
        0,
        false /* nullable */),
    ],
    [[0, 24],]);



goog.provide('gfx.mojom.InsetsF');

/** @record */
gfx.mojom.InsetsF = class {
  constructor() {
    /** @export { !number } */
    this.top;
    /** @export { !number } */
    this.left;
    /** @export { !number } */
    this.bottom;
    /** @export { !number } */
    this.right;
  }
};




mojo.internal.Struct(
    gfx.mojom.Vector2dSpec.$,
    'Vector2d',
    [
      mojo.internal.StructField(
        'x', 0,
        0,
        mojo.internal.Int32,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'y', 4,
        0,
        mojo.internal.Int32,
        0,
        false /* nullable */),
    ],
    [[0, 16],]);



goog.provide('gfx.mojom.Vector2d');

/** @record */
gfx.mojom.Vector2d = class {
  constructor() {
    /** @export { !number } */
    this.x;
    /** @export { !number } */
    this.y;
  }
};




mojo.internal.Struct(
    gfx.mojom.Vector2dFSpec.$,
    'Vector2dF',
    [
      mojo.internal.StructField(
        'x', 0,
        0,
        mojo.internal.Float,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'y', 4,
        0,
        mojo.internal.Float,
        0,
        false /* nullable */),
    ],
    [[0, 16],]);



goog.provide('gfx.mojom.Vector2dF');

/** @record */
gfx.mojom.Vector2dF = class {
  constructor() {
    /** @export { !number } */
    this.x;
    /** @export { !number } */
    this.y;
  }
};




mojo.internal.Struct(
    gfx.mojom.Vector3dFSpec.$,
    'Vector3dF',
    [
      mojo.internal.StructField(
        'x', 0,
        0,
        mojo.internal.Float,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'y', 4,
        0,
        mojo.internal.Float,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'z', 8,
        0,
        mojo.internal.Float,
        0,
        false /* nullable */),
    ],
    [[0, 24],]);



goog.provide('gfx.mojom.Vector3dF');

/** @record */
gfx.mojom.Vector3dF = class {
  constructor() {
    /** @export { !number } */
    this.x;
    /** @export { !number } */
    this.y;
    /** @export { !number } */
    this.z;
  }
};




mojo.internal.Struct(
    gfx.mojom.QuaternionSpec.$,
    'Quaternion',
    [
      mojo.internal.StructField(
        'x', 0,
        0,
        mojo.internal.Double,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'y', 8,
        0,
        mojo.internal.Double,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'z', 16,
        0,
        mojo.internal.Double,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'w', 24,
        0,
        mojo.internal.Double,
        0,
        false /* nullable */),
    ],
    [[0, 40],]);



goog.provide('gfx.mojom.Quaternion');

/** @record */
gfx.mojom.Quaternion = class {
  constructor() {
    /** @export { !number } */
    this.x;
    /** @export { !number } */
    this.y;
    /** @export { !number } */
    this.z;
    /** @export { !number } */
    this.w;
  }
};


