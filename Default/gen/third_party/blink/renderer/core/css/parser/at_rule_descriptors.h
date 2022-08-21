// Copyright 2017 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_RENDERER_CORE_CSS_PARSER_AT_RULE_DESCRIPTORS_H_
#define THIRD_PARTY_BLINK_RENDERER_CORE_CSS_PARSER_AT_RULE_DESCRIPTORS_H_

#include "base/notreached.h"
#include "third_party/blink/renderer/core/css/css_property_names.h"
#include "third_party/blink/renderer/platform/wtf/text/string_view.h"
#include <string.h>

namespace blink {

enum class AtRuleDescriptorID {
  Invalid = 0,
  AdditiveSymbols = 1,
  AscentOverride = 2,
  BasePalette = 3,
  DescentOverride = 4,
  End = 5,
  FontDisplay = 6,
  FontFamily = 7,
  FontFeatureSettings = 8,
  FontStretch = 9,
  FontStyle = 10,
  FontVariant = 11,
  FontWeight = 12,
  Height = 13,
  Inherits = 14,
  InitialValue = 15,
  Fallback = 16,
  LineGapOverride = 17,
  MaxHeight = 18,
  MaxWidth = 19,
  MaxZoom = 20,
  MinHeight = 21,
  MinWidth = 22,
  MinZoom = 23,
  Negative = 24,
  Orientation = 25,
  OverrideColors = 26,
  Pad = 27,
  Prefix = 28,
  Range = 29,
  SizeAdjust = 30,
  Source = 31,
  SpeakAs = 32,
  Src = 33,
  Start = 34,
  Suffix = 35,
  Symbols = 36,
  Syntax = 37,
  System = 38,
  UnicodeRange = 39,
  UserZoom = 40,
  Width = 41,
  Zoom = 42,
};

const int numAtRuleDescriptors = 43;

const char* getValueName(AtRuleDescriptorID);

AtRuleDescriptorID AsAtRuleDescriptorID(StringView string);

CSSPropertyID AtRuleDescriptorIDAsCSSPropertyID(AtRuleDescriptorID);
AtRuleDescriptorID CSSPropertyIDAsAtRuleDescriptor(CSSPropertyID id);

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_CORE_CSS_PARSER_AT_RULE_DESCRIPTORS_H_
