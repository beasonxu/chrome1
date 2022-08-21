// Copyright 2020 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
import { luminance } from '../front_end/core/common/ColorUtils.js'; // eslint-disable-line rulesdir/es_modules_import
import { createChild } from './common.js';
import { applyMatrixToPoint, parseHexa } from './highlight_common.js';
/**
 * There are 12 different types of arrows for labels.
 *
 * The first word in an arrow type corresponds to the side of the label
 * container the arrow is on (e.g. 'left' means the arrow is on the left side of
 * the container).
 *
 * The second word defines where, along that side, the arrow is (e.g. 'top' in
 * a 'leftTop' type means the arrow is at the top of the left side of the
 * container).
 *
 * Here are 2 examples to illustrate:
 *
 *              +----+
 * rightMid:    |     >
 *              +----+
 *
 *              +----+
 * bottomRight: |    |
 *              +--  +
 *                  \|
 */
// eslint-disable-next-line @typescript-eslint/naming-convention
const GridArrowTypes = {
    leftTop: 'left-top',
    leftMid: 'left-mid',
    leftBottom: 'left-bottom',
    topLeft: 'top-left',
    topMid: 'top-mid',
    topRight: 'top-right',
    rightTop: 'right-top',
    rightMid: 'right-mid',
    rightBottom: 'right-bottom',
    bottomLeft: 'bottom-left',
    bottomMid: 'bottom-mid',
    bottomRight: 'bottom-right',
};
// The size (in px) of a label arrow.
const gridArrowWidth = 3;
// The minimum distance (in px) a label has to be from the edge of the viewport
// to avoid being flipped inside the grid.
const gridPageMargin = 20;
// The minimum distance (in px) 2 labels can be to eachother. This is set to
// allow 2 consecutive 2-digits labels to not overlap.
const gridLabelDistance = 20;
// The maximum number of custom line names that can be displayed in a label.
const maxLineNamesCount = 3;
const defaultLabelColor = '#1A73E8';
const defaultLabelTextColor = '#121212';
/**
 * Places all of the required grid labels on the overlay. This includes row and
 * column line number labels, and area labels.
 */
export function drawGridLabels(config, gridBounds, areaBounds, canvasSize, labelState, emulationScaleFactor, writingModeMatrix = new DOMMatrix()) {
    // Find and clear the layer for the node specified in the config, or the default layer:
    // Each node has a layer for grid labels in order to draw multiple grid highlights
    // at once.
    const labelContainerId = `grid-${labelState.gridLayerCounter++}-labels`;
    let labelContainerForNode = document.getElementById(labelContainerId);
    if (!labelContainerForNode) {
        const mainLabelLayerContainer = document.getElementById('grid-label-container');
        if (!mainLabelLayerContainer) {
            throw new Error('#grid-label-container is not found');
        }
        labelContainerForNode = createChild(mainLabelLayerContainer, 'div');
        labelContainerForNode.id = labelContainerId;
    }
    const rowColor = config.gridHighlightConfig && config.gridHighlightConfig.rowLineColor ?
        config.gridHighlightConfig.rowLineColor :
        defaultLabelColor;
    const rowTextColor = generateLegibleTextColor(rowColor);
    labelContainerForNode.style.setProperty('--row-label-color', rowColor);
    labelContainerForNode.style.setProperty('--row-label-text-color', rowTextColor);
    const columnColor = config.gridHighlightConfig && config.gridHighlightConfig.columnLineColor ?
        config.gridHighlightConfig.columnLineColor :
        defaultLabelColor;
    const columnTextColor = generateLegibleTextColor(columnColor);
    labelContainerForNode.style.setProperty('--column-label-color', columnColor);
    labelContainerForNode.style.setProperty('--column-label-text-color', columnTextColor);
    labelContainerForNode.innerText = '';
    // Add the containers for the line and area to the node's layer
    const areaNameContainer = createChild(labelContainerForNode, 'div', 'area-names');
    const lineNameContainer = createChild(labelContainerForNode, 'div', 'line-names');
    const lineNumberContainer = createChild(labelContainerForNode, 'div', 'line-numbers');
    const trackSizesContainer = createChild(labelContainerForNode, 'div', 'track-sizes');
    // Draw line numbers and names.
    const normalizedData = normalizePositionData(config, gridBounds);
    if (config.gridHighlightConfig && config.gridHighlightConfig.showLineNames) {
        drawGridLineNames(lineNameContainer, normalizedData, canvasSize, emulationScaleFactor, writingModeMatrix, config.writingMode);
    }
    else {
        drawGridLineNumbers(lineNumberContainer, normalizedData, canvasSize, emulationScaleFactor, writingModeMatrix, config.writingMode);
    }
    // Draw area names.
    drawGridAreaNames(areaNameContainer, areaBounds, writingModeMatrix, config.writingMode);
    if (config.columnTrackSizes) {
        // Draw column sizes.
        drawGridTrackSizes(trackSizesContainer, config.columnTrackSizes, 'column', canvasSize, emulationScaleFactor, writingModeMatrix, config.writingMode);
    }
    if (config.rowTrackSizes) {
        // Draw row sizes.
        drawGridTrackSizes(trackSizesContainer, config.rowTrackSizes, 'row', canvasSize, emulationScaleFactor, writingModeMatrix, config.writingMode);
    }
}
/**
 * This is a generator function used to iterate over grid label positions in a way
 * that skips the ones that are too close to eachother, in order to avoid overlaps.
 */
function* positionIterator(positions, axis) {
    let lastEmittedPos = null;
    for (const [i, pos] of positions.entries()) {
        // Only emit the position if this is the first.
        const isFirst = i === 0;
        // Or if this is the last.
        const isLast = i === positions.length - 1;
        // Or if there is some minimum distance between the last emitted position.
        const isFarEnoughFromPrevious = Math.abs(pos[axis] - (lastEmittedPos ? lastEmittedPos[axis] : 0)) > gridLabelDistance;
        // And if there is also some minium distance from the very last position.
        const isFarEnoughFromLast = !isLast && Math.abs(positions[positions.length - 1][axis] - pos[axis]) > gridLabelDistance;
        if (isFirst || isLast || (isFarEnoughFromPrevious && isFarEnoughFromLast)) {
            yield [i, pos];
            lastEmittedPos = pos;
        }
    }
}
const last = (array) => array[array.length - 1];
const first = (array) => array[0];
/**
 * Massage the list of line name positions given by the backend for easier consumption.
 */
function normalizeNameData(namePositions) {
    const positions = [];
    const names = [];
    for (const { name, x, y } of namePositions) {
        const normalizedX = Math.round(x);
        const normalizedY = Math.round(y);
        // If the same position already exists, just add the name to the existing entry, as there can be
        // several custom names for a single line.
        const existingIndex = positions.findIndex(({ x, y }) => x === normalizedX && y === normalizedY);
        if (existingIndex > -1) {
            names[existingIndex].push(name);
        }
        else {
            positions.push({ x: normalizedX, y: normalizedY });
            names.push([name]);
        }
    }
    return { positions, names };
}
/**
 * Take the highlight config and bound objects in, and spits out an object with
 * the same information, but with 2 key differences:
 * - the information is organized in a way that makes the rest of the code more
 *   readable
 * - all pixel values are rounded to integers in order to safely compare
 *   positions (on high-dpi monitors floats are passed by the backend, this means
 *   checking if a position is at either edges of the container can't be done).
 */
export function normalizePositionData(config, bounds) {
    const width = Math.round(bounds.maxX - bounds.minX);
    const height = Math.round(bounds.maxY - bounds.minY);
    const data = {
        rows: {
            positive: { positions: [], hasFirst: false, hasLast: false },
            negative: { positions: [], hasFirst: false, hasLast: false },
        },
        columns: {
            positive: { positions: [], hasFirst: false, hasLast: false },
            negative: { positions: [], hasFirst: false, hasLast: false },
        },
        bounds: {
            minX: Math.round(bounds.minX),
            maxX: Math.round(bounds.maxX),
            minY: Math.round(bounds.minY),
            maxY: Math.round(bounds.maxY),
            allPoints: bounds.allPoints,
            width,
            height,
        },
    };
    // Line numbers and line names can't be shown together at once for now.
    // If showLineNames is set to true, then don't show line numbers, even if the
    // data is present.
    if (config.gridHighlightConfig && config.gridHighlightConfig.showLineNames) {
        const rowData = normalizeNameData(config.rowLineNameOffsets || []);
        const positiveRows = {
            positions: rowData.positions,
            names: rowData.names,
            hasFirst: rowData.positions.length ? first(rowData.positions).y === data.bounds.minY : false,
            hasLast: rowData.positions.length ? last(rowData.positions).y === data.bounds.maxY : false,
        };
        data.rows.positive = positiveRows;
        const columnData = normalizeNameData(config.columnLineNameOffsets || []);
        const positiveColumns = {
            positions: columnData.positions,
            names: columnData.names,
            hasFirst: columnData.positions.length ? first(columnData.positions).x === data.bounds.minX : false,
            hasLast: columnData.positions.length ? last(columnData.positions).x === data.bounds.maxX : false,
        };
        data.columns.positive = positiveColumns;
    }
    else {
        const normalizeXY = ({ x, y }) => ({ x: Math.round(x), y: Math.round(y) });
        // TODO (alexrudenko): hasFirst & hasLast checks won't probably work for rotated grids.
        if (config.positiveRowLineNumberPositions) {
            data.rows.positive = {
                positions: config.positiveRowLineNumberPositions.map(normalizeXY),
                hasFirst: Math.round(first(config.positiveRowLineNumberPositions).y) === data.bounds.minY,
                hasLast: Math.round(last(config.positiveRowLineNumberPositions).y) === data.bounds.maxY,
            };
        }
        if (config.negativeRowLineNumberPositions) {
            data.rows.negative = {
                positions: config.negativeRowLineNumberPositions.map(normalizeXY),
                hasFirst: Math.round(first(config.negativeRowLineNumberPositions).y) === data.bounds.minY,
                hasLast: Math.round(last(config.negativeRowLineNumberPositions).y) === data.bounds.maxY,
            };
        }
        if (config.positiveColumnLineNumberPositions) {
            data.columns.positive = {
                positions: config.positiveColumnLineNumberPositions.map(normalizeXY),
                hasFirst: Math.round(first(config.positiveColumnLineNumberPositions).x) === data.bounds.minX,
                hasLast: Math.round(last(config.positiveColumnLineNumberPositions).x) === data.bounds.maxX,
            };
        }
        if (config.negativeColumnLineNumberPositions) {
            data.columns.negative = {
                positions: config.negativeColumnLineNumberPositions.map(normalizeXY),
                hasFirst: Math.round(first(config.negativeColumnLineNumberPositions).x) === data.bounds.minX,
                hasLast: Math.round(last(config.negativeColumnLineNumberPositions).x) === data.bounds.maxX,
            };
        }
    }
    return data;
}
/**
 * Places the grid row and column number labels on the overlay.
 *
 * @param {HTMLElement} container Where to append the labels
 * @param {GridPositionNormalizedData} data The grid line number data
 * @param {DOMMatrix=} writingModeMatrix The transformation matrix in case a vertical writing-mode is applied, to map label positions
 * @param {string=} writingMode The current writing-mode value
 */
export function drawGridLineNumbers(container, data, canvasSize, emulationScaleFactor, writingModeMatrix = new DOMMatrix(), writingMode = 'horizontal-tb') {
    if (!data.columns.positive.names) {
        for (const [i, pos] of positionIterator(data.columns.positive.positions, 'x')) {
            const element = createLabelElement(container, (i + 1).toString(), 'column');
            placePositiveColumnLabel(element, applyMatrixToPoint(pos, writingModeMatrix), data, writingMode, canvasSize, emulationScaleFactor);
        }
    }
    if (!data.rows.positive.names) {
        for (const [i, pos] of positionIterator(data.rows.positive.positions, 'y')) {
            const element = createLabelElement(container, (i + 1).toString(), 'row');
            placePositiveRowLabel(element, applyMatrixToPoint(pos, writingModeMatrix), data, writingMode, canvasSize, emulationScaleFactor);
        }
    }
    for (const [i, pos] of positionIterator(data.columns.negative.positions, 'x')) {
        // Negative positions are sorted such that the first position corresponds to the line closest to start edge of the grid.
        const element = createLabelElement(container, (data.columns.negative.positions.length * -1 + i).toString(), 'column');
        placeNegativeColumnLabel(element, applyMatrixToPoint(pos, writingModeMatrix), data, writingMode, canvasSize, emulationScaleFactor);
    }
    for (const [i, pos] of positionIterator(data.rows.negative.positions, 'y')) {
        // Negative positions are sorted such that the first position corresponds to the line closest to start edge of the grid.
        const element = createLabelElement(container, (data.rows.negative.positions.length * -1 + i).toString(), 'row');
        placeNegativeRowLabel(element, applyMatrixToPoint(pos, writingModeMatrix), data, writingMode, canvasSize, emulationScaleFactor);
    }
}
/**
 * Places the grid track size labels on the overlay.
 */
export function drawGridTrackSizes(container, trackSizes, direction, canvasSize, emulationScaleFactor, writingModeMatrix = new DOMMatrix(), writingMode = 'horizontal-tb') {
    const { main, cross } = getAxes(writingMode);
    const { crossSize } = getCanvasSizes(writingMode, canvasSize);
    for (const { x, y, computedSize, authoredSize } of trackSizes) {
        const point = applyMatrixToPoint({ x, y }, writingModeMatrix);
        const size = computedSize.toFixed(2);
        const formattedComputed = `${size.endsWith('.00') ? size.slice(0, -3) : size}px`;
        const element = createLabelElement(container, `${authoredSize ? authoredSize + '·' : ''}${formattedComputed}`, direction);
        const labelSize = getLabelSize(element, writingMode);
        let flipIn = point[main] - labelSize.mainSize < gridPageMargin;
        if (direction === 'column') {
            flipIn = writingMode === 'vertical-rl' ? crossSize - point[cross] - labelSize.crossSize < gridPageMargin :
                point[cross] - labelSize.crossSize < gridPageMargin;
        }
        let arrowType = adaptArrowTypeForWritingMode(direction === 'column' ? GridArrowTypes.bottomMid : GridArrowTypes.rightMid, writingMode);
        arrowType = flipArrowTypeIfNeeded(arrowType, flipIn);
        placeLineLabel(element, arrowType, point.x, point.y, labelSize, emulationScaleFactor);
    }
}
/**
 * Places the grid row and column name labels on the overlay.
 */
export function drawGridLineNames(container, data, canvasSize, emulationScaleFactor, writingModeMatrix = new DOMMatrix(), writingMode = 'horizontal-tb') {
    for (const [i, pos] of data.columns.positive.positions.entries()) {
        const names = data.columns.positive.names[i];
        const element = createLabelElement(container, makeLineNameLabelContent(names), 'column');
        placePositiveColumnLabel(element, applyMatrixToPoint(pos, writingModeMatrix), data, writingMode, canvasSize, emulationScaleFactor);
    }
    for (const [i, pos] of data.rows.positive.positions.entries()) {
        const names = data.rows.positive.names[i];
        const element = createLabelElement(container, makeLineNameLabelContent(names), 'row');
        placePositiveRowLabel(element, applyMatrixToPoint(pos, writingModeMatrix), data, writingMode, canvasSize, emulationScaleFactor);
    }
}
/**
 * Turn an array of custom line names into DOM content that can be used in a label.
 */
function makeLineNameLabelContent(names) {
    const content = document.createElement('ul');
    const namesToDisplay = names.slice(0, maxLineNamesCount);
    for (const name of namesToDisplay) {
        createChild(content, 'li', 'line-name').textContent = name;
    }
    return content;
}
/**
 * Places the grid area name labels on the overlay.
 */
export function drawGridAreaNames(container, areaBounds, writingModeMatrix = new DOMMatrix(), writingMode = 'horizontal-tb') {
    for (const { name, bounds } of areaBounds) {
        const element = createLabelElement(container, name, 'row');
        const { width, height } = getLabelSize(element, writingMode);
        // The list of all points comes from the path created by the backend. This path is a rectangle with its starting point being
        // the top left corner, which is where we want to place the label (except for vertical-rl writing-mode).
        const point = writingMode === 'vertical-rl' ? bounds.allPoints[3] : bounds.allPoints[0];
        const corner = applyMatrixToPoint(point, writingModeMatrix);
        const flipX = bounds.allPoints[1].x < bounds.allPoints[0].x;
        const flipY = bounds.allPoints[3].y < bounds.allPoints[0].y;
        element.style.left = (corner.x - (flipX ? width : 0)) + 'px';
        element.style.top = (corner.y - (flipY ? height : 0)) + 'px';
    }
}
/**
 * Create the necessary DOM for a single label element.
 */
function createLabelElement(container, textContent, direction) {
    const wrapper = createChild(container, 'div');
    const element = createChild(wrapper, 'div', 'grid-label-content');
    element.dataset.direction = direction;
    if (typeof textContent === 'string') {
        element.textContent = textContent;
    }
    else {
        element.appendChild(textContent);
    }
    return element;
}
/**
 * Get the start and end points of the edge where labels are displayed.
 */
function getLabelSideEdgePoints(gridBounds, direction, side) {
    const [p1, p2, p3, p4] = gridBounds.allPoints;
    // Here are where all the points are in standard, untransformed, horizontal-tb mode:
    // p1                        p2
    //   +----------------------+
    //   |                      |
    //   +----------------------+
    // p4                        p3
    if (direction === 'row') {
        return side === 'positive' ? { start: p1, end: p4 } : { start: p2, end: p3 };
    }
    return side === 'positive' ? { start: p1, end: p2 } : { start: p4, end: p3 };
}
/**
 * Get the name of the main and cross axes depending on the writing mode.
 * In "normal" horizonta-tb mode, the main axis is the one that goes horizontally from left to right,
 * hence, the x axis.
 * In vertical writing modes, the axes are swapped.
 */
function getAxes(writingMode) {
    return writingMode.startsWith('vertical') ? { main: 'y', cross: 'x' } : { main: 'x', cross: 'y' };
}
/**
 * Get the main and cross sizes of the canvas area depending on the writing mode.
 * In "normal" horizonta-tb mode, the main axis is the one that goes horizontally from left to right,
 * hence, the main size of the canvas is its width, and its cross size is its height.
 * In vertical writing modes, those sizes are swapped.
 */
function getCanvasSizes(writingMode, canvasSize) {
    return writingMode.startsWith('vertical') ? { mainSize: canvasSize.canvasHeight, crossSize: canvasSize.canvasWidth } :
        { mainSize: canvasSize.canvasWidth, crossSize: canvasSize.canvasHeight };
}
/**
 * Determine the position of a positive row label, and place it.
 */
function placePositiveRowLabel(element, pos, data, writingMode, canvasSize, emulationScaleFactor) {
    const { start, end } = getLabelSideEdgePoints(data.bounds, 'row', 'positive');
    const { main, cross } = getAxes(writingMode);
    const { crossSize } = getCanvasSizes(writingMode, canvasSize);
    const labelSize = getLabelSize(element, writingMode);
    const isAtSharedStartCorner = pos[cross] === start[cross] && data.columns && data.columns.positive.hasFirst;
    const isAtSharedEndCorner = pos[cross] === end[cross] && data.columns && data.columns.negative.hasFirst;
    const isTooCloseToViewportStart = pos[cross] < gridPageMargin;
    const isTooCloseToViewportEnd = crossSize - pos[cross] < gridPageMargin;
    const flipIn = pos[main] - labelSize.mainSize < gridPageMargin;
    if (flipIn && (isAtSharedStartCorner || isAtSharedEndCorner)) {
        element.classList.add('inner-shared-corner');
    }
    let arrowType = adaptArrowTypeForWritingMode(GridArrowTypes.rightMid, writingMode);
    if (isTooCloseToViewportStart || isAtSharedStartCorner) {
        arrowType = adaptArrowTypeForWritingMode(GridArrowTypes.rightTop, writingMode);
    }
    else if (isTooCloseToViewportEnd || isAtSharedEndCorner) {
        arrowType = adaptArrowTypeForWritingMode(GridArrowTypes.rightBottom, writingMode);
    }
    arrowType = flipArrowTypeIfNeeded(arrowType, flipIn);
    placeLineLabel(element, arrowType, pos.x, pos.y, labelSize, emulationScaleFactor);
}
/**
 * Determine the position of a negative row label, and place it.
 */
function placeNegativeRowLabel(element, pos, data, writingMode, canvasSize, emulationScaleFactor) {
    const { start, end } = getLabelSideEdgePoints(data.bounds, 'row', 'negative');
    const { main, cross } = getAxes(writingMode);
    const { mainSize, crossSize } = getCanvasSizes(writingMode, canvasSize);
    const labelSize = getLabelSize(element, writingMode);
    const isAtSharedStartCorner = pos[cross] === start[cross] && data.columns && data.columns.positive.hasLast;
    const isAtSharedEndCorner = pos[cross] === end[cross] && data.columns && data.columns.negative.hasLast;
    const isTooCloseToViewportStart = pos[cross] < gridPageMargin;
    const isTooCloseToViewportEnd = crossSize - pos[cross] < gridPageMargin;
    const flipIn = mainSize - pos[main] - labelSize.mainSize < gridPageMargin;
    if (flipIn && (isAtSharedStartCorner || isAtSharedEndCorner)) {
        element.classList.add('inner-shared-corner');
    }
    let arrowType = adaptArrowTypeForWritingMode(GridArrowTypes.leftMid, writingMode);
    if (isTooCloseToViewportStart || isAtSharedStartCorner) {
        arrowType = adaptArrowTypeForWritingMode(GridArrowTypes.leftTop, writingMode);
    }
    else if (isTooCloseToViewportEnd || isAtSharedEndCorner) {
        arrowType = adaptArrowTypeForWritingMode(GridArrowTypes.leftBottom, writingMode);
    }
    arrowType = flipArrowTypeIfNeeded(arrowType, flipIn);
    placeLineLabel(element, arrowType, pos.x, pos.y, labelSize, emulationScaleFactor);
}
/**
 * Determine the position of a positive column label, and place it.
 */
function placePositiveColumnLabel(element, pos, data, writingMode, canvasSize, emulationScaleFactor) {
    const { start, end } = getLabelSideEdgePoints(data.bounds, 'column', 'positive');
    const { main, cross } = getAxes(writingMode);
    const { mainSize, crossSize } = getCanvasSizes(writingMode, canvasSize);
    const labelSize = getLabelSize(element, writingMode);
    const isAtSharedStartCorner = pos[main] === start[main] && data.rows && data.rows.positive.hasFirst;
    const isAtSharedEndCorner = pos[main] === end[main] && data.rows && data.rows.negative.hasFirst;
    const isTooCloseToViewportStart = pos[main] < gridPageMargin;
    const isTooCloseToViewportEnd = mainSize - pos[main] < gridPageMargin;
    const flipIn = writingMode === 'vertical-rl' ? crossSize - pos[cross] - labelSize.crossSize < gridPageMargin :
        pos[cross] - labelSize.crossSize < gridPageMargin;
    if (flipIn && (isAtSharedStartCorner || isAtSharedEndCorner)) {
        element.classList.add('inner-shared-corner');
    }
    let arrowType = adaptArrowTypeForWritingMode(GridArrowTypes.bottomMid, writingMode);
    if (isTooCloseToViewportStart) {
        arrowType = adaptArrowTypeForWritingMode(GridArrowTypes.bottomLeft, writingMode);
    }
    else if (isTooCloseToViewportEnd) {
        arrowType = adaptArrowTypeForWritingMode(GridArrowTypes.bottomRight, writingMode);
    }
    arrowType = flipArrowTypeIfNeeded(arrowType, flipIn);
    placeLineLabel(element, arrowType, pos.x, pos.y, labelSize, emulationScaleFactor);
}
/**
 * Determine the position of a negative column label, and place it.
 */
function placeNegativeColumnLabel(element, pos, data, writingMode, canvasSize, emulationScaleFactor) {
    const { start, end } = getLabelSideEdgePoints(data.bounds, 'column', 'negative');
    const { main, cross } = getAxes(writingMode);
    const { mainSize, crossSize } = getCanvasSizes(writingMode, canvasSize);
    const labelSize = getLabelSize(element, writingMode);
    const isAtSharedStartCorner = pos[main] === start[main] && data.rows && data.rows.positive.hasLast;
    const isAtSharedEndCorner = pos[main] === end[main] && data.rows && data.rows.negative.hasLast;
    const isTooCloseToViewportStart = pos[main] < gridPageMargin;
    const isTooCloseToViewportEnd = mainSize - pos[main] < gridPageMargin;
    const flipIn = writingMode === 'vertical-rl' ? pos[cross] - labelSize.crossSize < gridPageMargin :
        crossSize - pos[cross] - labelSize.crossSize < gridPageMargin;
    if (flipIn && (isAtSharedStartCorner || isAtSharedEndCorner)) {
        element.classList.add('inner-shared-corner');
    }
    let arrowType = adaptArrowTypeForWritingMode(GridArrowTypes.topMid, writingMode);
    if (isTooCloseToViewportStart) {
        arrowType = adaptArrowTypeForWritingMode(GridArrowTypes.topLeft, writingMode);
    }
    else if (isTooCloseToViewportEnd) {
        arrowType = adaptArrowTypeForWritingMode(GridArrowTypes.topRight, writingMode);
    }
    arrowType = flipArrowTypeIfNeeded(arrowType, flipIn);
    placeLineLabel(element, arrowType, pos.x, pos.y, labelSize, emulationScaleFactor);
}
/**
 * Correctly place a line label element in the page. The given coordinates are
 * the ones where the arrow of the label needs to point.
 * Therefore, the width of the text in the label, and the position of the arrow
 * relative to the label are taken into account here to calculate the final x
 * and y coordinates of the label DOM element.
 */
function placeLineLabel(element, arrowType, x, y, labelSize, emulationScaleFactor) {
    const { contentLeft, contentTop } = getLabelPositionByArrowType(arrowType, x, y, labelSize.width, labelSize.height, emulationScaleFactor);
    element.classList.add(arrowType);
    element.style.left = contentLeft + 'px';
    element.style.top = contentTop + 'px';
}
/**
 * Given a label element, return its width and height, as well as what the main and cross sizes are depending on
 * the current writing mode.
 */
function getLabelSize(element, writingMode) {
    const width = getAdjustedLabelWidth(element);
    const height = element.getBoundingClientRect().height;
    const mainSize = writingMode.startsWith('vertical') ? height : width;
    const crossSize = writingMode.startsWith('vertical') ? width : height;
    return { width, height, mainSize, crossSize };
}
/**
 * Forces the width of the provided grid label element to be an even
 * number of pixels to allow centered placement of the arrow
 */
function getAdjustedLabelWidth(element) {
    let labelWidth = element.getBoundingClientRect().width;
    if (labelWidth % 2 === 1) {
        labelWidth += 1;
        element.style.width = labelWidth + 'px';
    }
    return labelWidth;
}
/**
 * In some cases, a label doesn't fit where it's supposed to be displayed.
 * This happens when it's too close to the edge of the viewport. When it does,
 * the label's position is flipped so that instead of being outside the grid, it
 * moves inside the grid.
 *
 * Example of a leftMid arrowType, which is by default outside the grid:
 *  -----------------------------
 * |                             |   +------+
 * |                             |   |      |
 * |-----------------------------|  <       |
 * |                             |   |      |
 * |                             |   +------+
 *  -----------------------------
 * When flipped, the label will be drawn inside the grid, so the arrow now needs
 * to point the other way:
 *  -----------------------------
 * |                  +------+   |
 * |                  |      |   |
 * |------------------|       >--|
 * |                  |      |   |
 * |                  +------+   |
 *  -----------------------------
 */
function flipArrowTypeIfNeeded(arrowType, flipIn) {
    if (!flipIn) {
        return arrowType;
    }
    switch (arrowType) {
        case GridArrowTypes.leftTop:
            return GridArrowTypes.rightTop;
        case GridArrowTypes.leftMid:
            return GridArrowTypes.rightMid;
        case GridArrowTypes.leftBottom:
            return GridArrowTypes.rightBottom;
        case GridArrowTypes.rightTop:
            return GridArrowTypes.leftTop;
        case GridArrowTypes.rightMid:
            return GridArrowTypes.leftMid;
        case GridArrowTypes.rightBottom:
            return GridArrowTypes.leftBottom;
        case GridArrowTypes.topLeft:
            return GridArrowTypes.bottomLeft;
        case GridArrowTypes.topMid:
            return GridArrowTypes.bottomMid;
        case GridArrowTypes.topRight:
            return GridArrowTypes.bottomRight;
        case GridArrowTypes.bottomLeft:
            return GridArrowTypes.topLeft;
        case GridArrowTypes.bottomMid:
            return GridArrowTypes.topMid;
        case GridArrowTypes.bottomRight:
            return GridArrowTypes.topRight;
    }
    return arrowType;
}
/**
 * Given an arrow type for the standard horizontal-tb writing-mode, return the corresponding type for a differnet
 * writing-mode.
 */
function adaptArrowTypeForWritingMode(arrowType, writingMode) {
    if (writingMode === 'vertical-lr') {
        switch (arrowType) {
            case GridArrowTypes.leftTop:
                return GridArrowTypes.topLeft;
            case GridArrowTypes.leftMid:
                return GridArrowTypes.topMid;
            case GridArrowTypes.leftBottom:
                return GridArrowTypes.topRight;
            case GridArrowTypes.topLeft:
                return GridArrowTypes.leftTop;
            case GridArrowTypes.topMid:
                return GridArrowTypes.leftMid;
            case GridArrowTypes.topRight:
                return GridArrowTypes.leftBottom;
            case GridArrowTypes.rightTop:
                return GridArrowTypes.bottomRight;
            case GridArrowTypes.rightMid:
                return GridArrowTypes.bottomMid;
            case GridArrowTypes.rightBottom:
                return GridArrowTypes.bottomLeft;
            case GridArrowTypes.bottomLeft:
                return GridArrowTypes.rightTop;
            case GridArrowTypes.bottomMid:
                return GridArrowTypes.rightMid;
            case GridArrowTypes.bottomRight:
                return GridArrowTypes.rightBottom;
        }
    }
    if (writingMode === 'vertical-rl') {
        switch (arrowType) {
            case GridArrowTypes.leftTop:
                return GridArrowTypes.topRight;
            case GridArrowTypes.leftMid:
                return GridArrowTypes.topMid;
            case GridArrowTypes.leftBottom:
                return GridArrowTypes.topLeft;
            case GridArrowTypes.topLeft:
                return GridArrowTypes.rightTop;
            case GridArrowTypes.topMid:
                return GridArrowTypes.rightMid;
            case GridArrowTypes.topRight:
                return GridArrowTypes.rightBottom;
            case GridArrowTypes.rightTop:
                return GridArrowTypes.bottomRight;
            case GridArrowTypes.rightMid:
                return GridArrowTypes.bottomMid;
            case GridArrowTypes.rightBottom:
                return GridArrowTypes.bottomLeft;
            case GridArrowTypes.bottomLeft:
                return GridArrowTypes.leftTop;
            case GridArrowTypes.bottomMid:
                return GridArrowTypes.leftMid;
            case GridArrowTypes.bottomRight:
                return GridArrowTypes.leftBottom;
        }
    }
    return arrowType;
}
/**
 * Returns the required properties needed to place a label arrow based on the
 * arrow type and dimensions of the label
 */
function getLabelPositionByArrowType(arrowType, x, y, labelWidth, labelHeight, emulationScaleFactor) {
    let contentTop = 0;
    let contentLeft = 0;
    x *= emulationScaleFactor;
    y *= emulationScaleFactor;
    switch (arrowType) {
        case GridArrowTypes.leftTop:
            contentTop = y;
            contentLeft = x + gridArrowWidth;
            break;
        case GridArrowTypes.leftMid:
            contentTop = y - (labelHeight / 2);
            contentLeft = x + gridArrowWidth;
            break;
        case GridArrowTypes.leftBottom:
            contentTop = y - labelHeight;
            contentLeft = x + gridArrowWidth;
            break;
        case GridArrowTypes.rightTop:
            contentTop = y;
            contentLeft = x - gridArrowWidth - labelWidth;
            break;
        case GridArrowTypes.rightMid:
            contentTop = y - (labelHeight / 2);
            contentLeft = x - gridArrowWidth - labelWidth;
            break;
        case GridArrowTypes.rightBottom:
            contentTop = y - labelHeight;
            contentLeft = x - labelWidth - gridArrowWidth;
            break;
        case GridArrowTypes.topLeft:
            contentTop = y + gridArrowWidth;
            contentLeft = x;
            break;
        case GridArrowTypes.topMid:
            contentTop = y + gridArrowWidth;
            contentLeft = x - (labelWidth / 2);
            break;
        case GridArrowTypes.topRight:
            contentTop = y + gridArrowWidth;
            contentLeft = x - labelWidth;
            break;
        case GridArrowTypes.bottomLeft:
            contentTop = y - gridArrowWidth - labelHeight;
            contentLeft = x;
            break;
        case GridArrowTypes.bottomMid:
            contentTop = y - gridArrowWidth - labelHeight;
            contentLeft = x - (labelWidth / 2);
            break;
        case GridArrowTypes.bottomRight:
            contentTop = y - gridArrowWidth - labelHeight;
            contentLeft = x - labelWidth;
            break;
    }
    return {
        contentTop,
        contentLeft,
    };
}
/**
 * Given a background color, generate a color for text to be legible.
 * This assumes the background color is given as either a "rgba(r, g, b, a)" string or a #rrggbb string.
 * This is because colors are sent by the backend using blink::Color:Serialized() which follows the logic for
 * serializing colors from https://html.spec.whatwg.org/#serialization-of-a-color
 *
 * In rgba form, the alpha channel is ignored.
 *
 * This is made to be small and fast and not require importing the entire Color utility from DevTools as it would make
 * the overlay bundle unnecessarily big.
 *
 * This is also made to generate the defaultLabelTextColor for all of the default label colors that the
 * OverlayColorGenerator produces.
 */
export function generateLegibleTextColor(backgroundColor) {
    let rgb = [];
    // Try to parse it as a #rrggbbaa string first
    const rgba = parseHexa(backgroundColor + '00');
    if (rgba.length === 4) {
        rgb = rgba.slice(0, 3).map(c => c);
    }
    else {
        // Next try to parse as a rgba() string
        const parsed = backgroundColor.match(/[0-9.]+/g);
        if (!parsed) {
            return null;
        }
        rgb = parsed.slice(0, 3).map(s => parseInt(s, 10) / 255);
    }
    if (!rgb.length) {
        return null;
    }
    return luminance(rgb) > 0.2 ? defaultLabelTextColor : 'white';
}
//# sourceMappingURL=css_grid_label_helpers.js.map