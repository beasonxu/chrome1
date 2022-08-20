// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_RENDERER_CORE_CSS_VALUE_KEYWORDS_H_
#define THIRD_PARTY_BLINK_RENDERER_CORE_CSS_VALUE_KEYWORDS_H_

#include <string.h>
#include <stdint.h>

#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/core/css/parser/css_parser_mode.h"

namespace blink {

enum class CSSValueID {
  kInvalid = 0,
  kInherit = 1,
  kInitial = 2,
  kNone = 3,
  kHidden = 4,
  kInset = 5,
  kGroove = 6,
  kOutset = 7,
  kRidge = 8,
  kDotted = 9,
  kDashed = 10,
  kSolid = 11,
  kDouble = 12,
  kCaption = 13,
  kIcon = 14,
  kMenu = 15,
  kMessageBox = 16,
  kSmallCaption = 17,
  kWebkitMiniControl = 18,
  kWebkitSmallControl = 19,
  kWebkitControl = 20,
  kStatusBar = 21,
  kItalic = 22,
  kOblique = 23,
  kAll = 24,
  kCommonLigatures = 25,
  kNoCommonLigatures = 26,
  kDiscretionaryLigatures = 27,
  kNoDiscretionaryLigatures = 28,
  kHistoricalLigatures = 29,
  kNoHistoricalLigatures = 30,
  kContextual = 31,
  kNoContextual = 32,
  kSmallCaps = 33,
  kAllSmallCaps = 34,
  kPetiteCaps = 35,
  kAllPetiteCaps = 36,
  kUnicase = 37,
  kTitlingCaps = 38,
  kJis78 = 39,
  kJis83 = 40,
  kJis90 = 41,
  kJis04 = 42,
  kSimplified = 43,
  kTraditional = 44,
  kFullWidth = 45,
  kProportionalWidth = 46,
  kRuby = 47,
  kLiningNums = 48,
  kOldstyleNums = 49,
  kProportionalNums = 50,
  kTabularNums = 51,
  kDiagonalFractions = 52,
  kStackedFractions = 53,
  kOrdinal = 54,
  kSlashedZero = 55,
  kNormal = 56,
  kBold = 57,
  kBolder = 58,
  kLighter = 59,
  kWeight = 60,
  kUltraCondensed = 61,
  kExtraCondensed = 62,
  kCondensed = 63,
  kSemiCondensed = 64,
  kSemiExpanded = 65,
  kExpanded = 66,
  kExtraExpanded = 67,
  kUltraExpanded = 68,
  kXxSmall = 69,
  kXSmall = 70,
  kSmall = 71,
  kMedium = 72,
  kLarge = 73,
  kXLarge = 74,
  kXxLarge = 75,
  kXxxLarge = 76,
  kSmaller = 77,
  kLarger = 78,
  kWebkitXxxLarge = 79,
  kSerif = 80,
  kSansSerif = 81,
  kCursive = 82,
  kFantasy = 83,
  kMonospace = 84,
  kSystemUi = 85,
  kWebkitBody = 86,
  kMath = 87,
  kSwap = 88,
  kFallback = 89,
  kOptional = 90,
  kAqua = 91,
  kBlack = 92,
  kBlue = 93,
  kFuchsia = 94,
  kGray = 95,
  kGreen = 96,
  kLime = 97,
  kMaroon = 98,
  kNavy = 99,
  kOlive = 100,
  kOrange = 101,
  kPurple = 102,
  kRed = 103,
  kSilver = 104,
  kTeal = 105,
  kWhite = 106,
  kYellow = 107,
  kTransparent = 108,
  kWebkitLink = 109,
  kWebkitActivelink = 110,
  kActiveborder = 111,
  kActivecaption = 112,
  kActivetext = 113,
  kAppworkspace = 114,
  kBackground = 115,
  kButtonborder = 116,
  kButtonface = 117,
  kButtonhighlight = 118,
  kButtonshadow = 119,
  kButtontext = 120,
  kCanvas = 121,
  kCanvastext = 122,
  kCaptiontext = 123,
  kField = 124,
  kFieldtext = 125,
  kGraytext = 126,
  kHighlight = 127,
  kHighlighttext = 128,
  kInactiveborder = 129,
  kInactivecaption = 130,
  kInactivecaptiontext = 131,
  kInfobackground = 132,
  kInfotext = 133,
  kLinktext = 134,
  kMark = 135,
  kMarktext = 136,
  kMenutext = 137,
  kSelecteditem = 138,
  kSelecteditemtext = 139,
  kScrollbar = 140,
  kThreeddarkshadow = 141,
  kThreedface = 142,
  kThreedhighlight = 143,
  kThreedlightshadow = 144,
  kThreedshadow = 145,
  kVisitedtext = 146,
  kWindow = 147,
  kWindowframe = 148,
  kWindowtext = 149,
  kInternalActiveListBoxSelection = 150,
  kInternalActiveListBoxSelectionText = 151,
  kInternalInactiveListBoxSelection = 152,
  kInternalInactiveListBoxSelectionText = 153,
  kWebkitFocusRingColor = 154,
  kCurrentcolor = 155,
  kGrey = 156,
  kInternalQuirkInherit = 157,
  kInternalSpellingErrorColor = 158,
  kInternalGrammarErrorColor = 159,
  kAliceblue = 160,
  kAntiquewhite = 161,
  kAquamarine = 162,
  kAzure = 163,
  kBeige = 164,
  kBisque = 165,
  kBlanchedalmond = 166,
  kBlueviolet = 167,
  kBrown = 168,
  kBurlywood = 169,
  kCadetblue = 170,
  kChartreuse = 171,
  kChocolate = 172,
  kCoral = 173,
  kCornflowerblue = 174,
  kCornsilk = 175,
  kCrimson = 176,
  kCyan = 177,
  kDarkblue = 178,
  kDarkcyan = 179,
  kDarkgoldenrod = 180,
  kDarkgray = 181,
  kDarkgreen = 182,
  kDarkgrey = 183,
  kDarkkhaki = 184,
  kDarkmagenta = 185,
  kDarkolivegreen = 186,
  kDarkorange = 187,
  kDarkorchid = 188,
  kDarkred = 189,
  kDarksalmon = 190,
  kDarkseagreen = 191,
  kDarkslateblue = 192,
  kDarkslategray = 193,
  kDarkslategrey = 194,
  kDarkturquoise = 195,
  kDarkviolet = 196,
  kDeeppink = 197,
  kDeepskyblue = 198,
  kDimgray = 199,
  kDimgrey = 200,
  kDodgerblue = 201,
  kFirebrick = 202,
  kFloralwhite = 203,
  kForestgreen = 204,
  kGainsboro = 205,
  kGhostwhite = 206,
  kGold = 207,
  kGoldenrod = 208,
  kGreenyellow = 209,
  kHoneydew = 210,
  kHotpink = 211,
  kIndianred = 212,
  kIndigo = 213,
  kIvory = 214,
  kKhaki = 215,
  kLavender = 216,
  kLavenderblush = 217,
  kLawngreen = 218,
  kLemonchiffon = 219,
  kLightblue = 220,
  kLightcoral = 221,
  kLightcyan = 222,
  kLightgoldenrodyellow = 223,
  kLightgray = 224,
  kLightgreen = 225,
  kLightgrey = 226,
  kLightpink = 227,
  kLightsalmon = 228,
  kLightseagreen = 229,
  kLightskyblue = 230,
  kLightslategray = 231,
  kLightslategrey = 232,
  kLightsteelblue = 233,
  kLightyellow = 234,
  kLimegreen = 235,
  kLinen = 236,
  kMagenta = 237,
  kMediumaquamarine = 238,
  kMediumblue = 239,
  kMediumorchid = 240,
  kMediumpurple = 241,
  kMediumseagreen = 242,
  kMediumslateblue = 243,
  kMediumspringgreen = 244,
  kMediumturquoise = 245,
  kMediumvioletred = 246,
  kMidnightblue = 247,
  kMintcream = 248,
  kMistyrose = 249,
  kMoccasin = 250,
  kNavajowhite = 251,
  kOldlace = 252,
  kOlivedrab = 253,
  kOrangered = 254,
  kOrchid = 255,
  kPalegoldenrod = 256,
  kPalegreen = 257,
  kPaleturquoise = 258,
  kPalevioletred = 259,
  kPapayawhip = 260,
  kPeachpuff = 261,
  kPeru = 262,
  kPink = 263,
  kPlum = 264,
  kPowderblue = 265,
  kRebeccapurple = 266,
  kRosybrown = 267,
  kRoyalblue = 268,
  kSaddlebrown = 269,
  kSalmon = 270,
  kSandybrown = 271,
  kSeagreen = 272,
  kSeashell = 273,
  kSienna = 274,
  kSkyblue = 275,
  kSlateblue = 276,
  kSlategray = 277,
  kSlategrey = 278,
  kSnow = 279,
  kSpringgreen = 280,
  kSteelblue = 281,
  kTan = 282,
  kThistle = 283,
  kTomato = 284,
  kTurquoise = 285,
  kViolet = 286,
  kWheat = 287,
  kWhitesmoke = 288,
  kYellowgreen = 289,
  kRepeat = 290,
  kRepeatX = 291,
  kRepeatY = 292,
  kNoRepeat = 293,
  kClear = 294,
  kCopy = 295,
  kSourceOver = 296,
  kSourceIn = 297,
  kSourceOut = 298,
  kSourceAtop = 299,
  kDestinationOver = 300,
  kDestinationIn = 301,
  kDestinationOut = 302,
  kDestinationAtop = 303,
  kXor = 304,
  kPlusLighter = 305,
  kBaseline = 306,
  kMiddle = 307,
  kSub = 308,
  kSuper = 309,
  kTextTop = 310,
  kTextBottom = 311,
  kTop = 312,
  kBottom = 313,
  kWebkitBaselineMiddle = 314,
  kWebkitAuto = 315,
  kLeft = 316,
  kRight = 317,
  kCenter = 318,
  kJustify = 319,
  kWebkitLeft = 320,
  kWebkitRight = 321,
  kWebkitCenter = 322,
  kWebkitMatchParent = 323,
  kInternalCenter = 324,
  kInlineStart = 325,
  kInlineEnd = 326,
  kInterWord = 327,
  kDistribute = 328,
  kOutside = 329,
  kInside = 330,
  kDisc = 331,
  kCircle = 332,
  kSquare = 333,
  kDisclosureOpen = 334,
  kDisclosureClosed = 335,
  kDecimal = 336,
  kInline = 337,
  kBlock = 338,
  kFlowRoot = 339,
  kTable = 340,
  kFlex = 341,
  kGrid = 342,
  kContents = 343,
  kTableRowGroup = 344,
  kTableHeaderGroup = 345,
  kTableFooterGroup = 346,
  kTableRow = 347,
  kTableColumnGroup = 348,
  kTableColumn = 349,
  kTableCell = 350,
  kTableCaption = 351,
  kInlineBlock = 352,
  kInlineTable = 353,
  kInlineFlex = 354,
  kInlineGrid = 355,
  kWebkitBox = 356,
  kWebkitInlineBox = 357,
  kWebkitFlex = 358,
  kWebkitInlineFlex = 359,
  kLayout = 360,
  kInlineLayout = 361,
  kListItem = 362,
  kAuto = 363,
  kCrosshair = 364,
  kDefault = 365,
  kPointer = 366,
  kMove = 367,
  kVerticalText = 368,
  kCell = 369,
  kContextMenu = 370,
  kAlias = 371,
  kProgress = 372,
  kNoDrop = 373,
  kNotAllowed = 374,
  kZoomIn = 375,
  kZoomOut = 376,
  kEResize = 377,
  kNeResize = 378,
  kNwResize = 379,
  kNResize = 380,
  kSeResize = 381,
  kSwResize = 382,
  kSResize = 383,
  kWResize = 384,
  kEwResize = 385,
  kNsResize = 386,
  kNeswResize = 387,
  kNwseResize = 388,
  kColResize = 389,
  kRowResize = 390,
  kText = 391,
  kWait = 392,
  kHelp = 393,
  kAllScroll = 394,
  kGrab = 395,
  kGrabbing = 396,
  kWebkitGrab = 397,
  kWebkitGrabbing = 398,
  kWebkitZoomIn = 399,
  kWebkitZoomOut = 400,
  kLtr = 401,
  kRtl = 402,
  kCapitalize = 403,
  kUppercase = 404,
  kLowercase = 405,
  kMathAuto = 406,
  kVisible = 407,
  kCollapse = 408,
  kA3 = 409,
  kA4 = 410,
  kA5 = 411,
  kAbove = 412,
  kAbsolute = 413,
  kAlways = 414,
  kAvoid = 415,
  kB4 = 416,
  kB5 = 417,
  kBelow = 418,
  kBidiOverride = 419,
  kBlink = 420,
  kBoth = 421,
  kBreakSpaces = 422,
  kCloseQuote = 423,
  kEmbed = 424,
  kFixed = 425,
  kHand = 426,
  kHide = 427,
  kIsolate = 428,
  kIsolateOverride = 429,
  kPlaintext = 430,
  kWebkitIsolate = 431,
  kWebkitIsolateOverride = 432,
  kWebkitPlaintext = 433,
  kJisB5 = 434,
  kJisB4 = 435,
  kLandscape = 436,
  kLedger = 437,
  kLegal = 438,
  kLetter = 439,
  kLineThrough = 440,
  kLocal = 441,
  kNoCloseQuote = 442,
  kNoOpenQuote = 443,
  kNowrap = 444,
  kOpenQuote = 445,
  kOverlay = 446,
  kOverline = 447,
  kPortrait = 448,
  kPre = 449,
  kPreLine = 450,
  kPreWrap = 451,
  kRelative = 452,
  kScroll = 453,
  kSeparate = 454,
  kShow = 455,
  kStatic = 456,
  kThick = 457,
  kThin = 458,
  kUnderline = 459,
  kWavy = 460,
  kWebkitNowrap = 461,
  kCompact = 462,
  kStretch = 463,
  kStart = 464,
  kEnd = 465,
  kClone = 466,
  kSlice = 467,
  kReverse = 468,
  kHorizontal = 469,
  kVertical = 470,
  kInlineAxis = 471,
  kBlockAxis = 472,
  kFlexStart = 473,
  kFlexEnd = 474,
  kSpaceBetween = 475,
  kSpaceAround = 476,
  kSpaceEvenly = 477,
  kUnsafe = 478,
  kSafe = 479,
  kRow = 480,
  kRowReverse = 481,
  kColumn = 482,
  kColumnReverse = 483,
  kWrap = 484,
  kWrapReverse = 485,
  kAutoFlow = 486,
  kDense = 487,
  kReadOnly = 488,
  kReadWrite = 489,
  kReadWritePlaintextOnly = 490,
  kElement = 491,
  kWebkitMinContent = 492,
  kWebkitMaxContent = 493,
  kWebkitFillAvailable = 494,
  kWebkitFitContent = 495,
  kMinContent = 496,
  kMaxContent = 497,
  kFitContent = 498,
  kClip = 499,
  kEllipsis = 500,
  kSpellingError = 501,
  kGrammarError = 502,
  kFromFont = 503,
  kBreakAll = 504,
  kKeepAll = 505,
  kBreakWord = 506,
  kSpace = 507,
  kLoose = 508,
  kStrict = 509,
  kAfterWhiteSpace = 510,
  kAnywhere = 511,
  kManual = 512,
  kCheckbox = 513,
  kRadio = 514,
  kPushButton = 515,
  kSquareButton = 516,
  kButton = 517,
  kInnerSpinButton = 518,
  kListbox = 519,
  kMediaSlider = 520,
  kMediaSliderthumb = 521,
  kMediaVolumeSlider = 522,
  kMediaVolumeSliderthumb = 523,
  kInternalMediaControl = 524,
  kMenulist = 525,
  kMenulistButton = 526,
  kMeter = 527,
  kProgressBar = 528,
  kSliderHorizontal = 529,
  kSliderVertical = 530,
  kSliderthumbHorizontal = 531,
  kSliderthumbVertical = 532,
  kSearchfield = 533,
  kSearchfieldCancelButton = 534,
  kTextfield = 535,
  kTextarea = 536,
  kRound = 537,
  kBorder = 538,
  kBorderBox = 539,
  kContent = 540,
  kContentBox = 541,
  kPadding = 542,
  kPaddingBox = 543,
  kMarginBox = 544,
  kContain = 545,
  kCover = 546,
  kLogical = 547,
  kVisual = 548,
  kAlternate = 549,
  kAlternateReverse = 550,
  kForwards = 551,
  kBackwards = 552,
  kInfinite = 553,
  kRunning = 554,
  kPaused = 555,
  kFlat = 556,
  kPreserve3d = 557,
  kFillBox = 558,
  kViewBox = 559,
  kEase = 560,
  kLinear = 561,
  kEaseIn = 562,
  kEaseOut = 563,
  kEaseInOut = 564,
  kJumpBoth = 565,
  kJumpEnd = 566,
  kJumpNone = 567,
  kJumpStart = 568,
  kStepStart = 569,
  kStepEnd = 570,
  kSteps = 571,
  kFrames = 572,
  kCubicBezier = 573,
  kDocument = 574,
  kReset = 575,
  kZoom = 576,
  kVisiblepainted = 577,
  kVisiblefill = 578,
  kVisiblestroke = 579,
  kPainted = 580,
  kFill = 581,
  kStroke = 582,
  kBoundingBox = 583,
  kSpellOut = 584,
  kDigits = 585,
  kLiteralPunctuation = 586,
  kNoPunctuation = 587,
  kAntialiased = 588,
  kSubpixelAntialiased = 589,
  kOptimizespeed = 590,
  kOptimizelegibility = 591,
  kGeometricprecision = 592,
  kCrispedges = 593,
  kEconomy = 594,
  kExact = 595,
  kLr = 596,
  kRl = 597,
  kTb = 598,
  kLrTb = 599,
  kRlTb = 600,
  kTbRl = 601,
  kHorizontalTb = 602,
  kVerticalRl = 603,
  kVerticalLr = 604,
  kAfter = 605,
  kBefore = 606,
  kOver = 607,
  kUnder = 608,
  kFilled = 609,
  kOpen = 610,
  kDot = 611,
  kDoubleCircle = 612,
  kTriangle = 613,
  kSesame = 614,
  kEllipse = 615,
  kClosestSide = 616,
  kClosestCorner = 617,
  kFarthestSide = 618,
  kFarthestCorner = 619,
  kMixed = 620,
  kSideways = 621,
  kSidewaysRight = 622,
  kUpright = 623,
  kVerticalRight = 624,
  kOn = 625,
  kOff = 626,
  kOptimizequality = 627,
  kPixelated = 628,
  kWebkitOptimizeContrast = 629,
  kFromImage = 630,
  kRotateLeft = 631,
  kRotateRight = 632,
  kNonzero = 633,
  kEvenodd = 634,
  kAt = 635,
  kAlphabetic = 636,
  kBorderless = 637,
  kFullscreen = 638,
  kStandalone = 639,
  kMinimalUi = 640,
  kBrowser = 641,
  kWindowControlsOverlay = 642,
  kSticky = 643,
  kCoarse = 644,
  kFine = 645,
  kOnDemand = 646,
  kHover = 647,
  kMultiply = 648,
  kScreen = 649,
  kDarken = 650,
  kLighten = 651,
  kColorDodge = 652,
  kColorBurn = 653,
  kHardLight = 654,
  kSoftLight = 655,
  kDifference = 656,
  kExclusion = 657,
  kHue = 658,
  kSaturation = 659,
  kColor = 660,
  kLuminosity = 661,
  kScaleDown = 662,
  kBalance = 663,
  kDrag = 664,
  kNoDrag = 665,
  kSpan = 666,
  kMinmax = 667,
  kSubgrid = 668,
  kEachLine = 669,
  kHanging = 670,
  kProgressive = 671,
  kInterlace = 672,
  kMarkers = 673,
  kAlpha = 674,
  kLuminance = 675,
  kSRGB = 676,
  kLinearrgb = 677,
  kButt = 678,
  kMiter = 679,
  kBevel = 680,
  kBeforeEdge = 681,
  kAfterEdge = 682,
  kCentral = 683,
  kTextBeforeEdge = 684,
  kTextAfterEdge = 685,
  kIdeographic = 686,
  kMathematical = 687,
  kUseScript = 688,
  kNoChange = 689,
  kResetSize = 690,
  kDynamic = 691,
  kNonScalingStroke = 692,
  kInternalExtendToZoom = 693,
  kPanX = 694,
  kPanY = 695,
  kPanLeft = 696,
  kPanRight = 697,
  kPanUp = 698,
  kPanDown = 699,
  kManipulation = 700,
  kPinchZoom = 701,
  kLastBaseline = 702,
  kFirstBaseline = 703,
  kFirst = 704,
  kLast = 705,
  kSelfStart = 706,
  kSelfEnd = 707,
  kLegacy = 708,
  kSmooth = 709,
  kScrollPosition = 710,
  kRevert = 711,
  kRevertLayer = 712,
  kUnset = 713,
  kLinearGradient = 714,
  kRadialGradient = 715,
  kConicGradient = 716,
  kRepeatingLinearGradient = 717,
  kRepeatingRadialGradient = 718,
  kRepeatingConicGradient = 719,
  kPaint = 720,
  kWebkitCrossFade = 721,
  kWebkitGradient = 722,
  kWebkitLinearGradient = 723,
  kWebkitRadialGradient = 724,
  kWebkitRepeatingLinearGradient = 725,
  kWebkitRepeatingRadialGradient = 726,
  kWebkitImageSet = 727,
  kFrom = 728,
  kTo = 729,
  kColorStop = 730,
  kRadial = 731,
  kAttr = 732,
  kCounter = 733,
  kCounters = 734,
  kRect = 735,
  kPolygon = 736,
  kFormat = 737,
  kInvert = 738,
  kGrayscale = 739,
  kSepia = 740,
  kSaturate = 741,
  kHueRotate = 742,
  kOpacity = 743,
  kBrightness = 744,
  kContrast = 745,
  kBlur = 746,
  kDropShadow = 747,
  kUrl = 748,
  kRgb = 749,
  kRgba = 750,
  kHsl = 751,
  kHsla = 752,
  kHwb = 753,
  kInternalLightDark = 754,
  kMatrix = 755,
  kMatrix3d = 756,
  kPerspective = 757,
  kRotate = 758,
  kRotateX = 759,
  kRotateY = 760,
  kRotateZ = 761,
  kRotate3d = 762,
  kScale = 763,
  kScaleX = 764,
  kScaleY = 765,
  kScaleZ = 766,
  kScale3d = 767,
  kSkew = 768,
  kSkewX = 769,
  kSkewY = 770,
  kTranslate = 771,
  kTranslateX = 772,
  kTranslateY = 773,
  kTranslateZ = 774,
  kTranslate3d = 775,
  kX = 776,
  kY = 777,
  kZ = 778,
  kPath = 779,
  kRay = 780,
  kSides = 781,
  kCalc = 782,
  kWebkitCalc = 783,
  kMin = 784,
  kMax = 785,
  kClamp = 786,
  kSin = 787,
  kCos = 788,
  kInfinity = 789,
  kNegativeInfinity = 790,
  kNan = 791,
  kMandatory = 792,
  kProximity = 793,
  kStyle = 794,
  kSize = 795,
  kBlockSize = 796,
  kInlineSize = 797,
  kName = 798,
  kType = 799,
  kAutoFill = 800,
  kAutoFit = 801,
  kVar = 802,
  kInternalVariableValue = 803,
  kEnv = 804,
  kAvoidPage = 805,
  kPage = 806,
  kRecto = 807,
  kVerso = 808,
  kAvoidColumn = 809,
  kP3 = 810,
  kRec2020 = 811,
  kAdd = 812,
  kAutoAdd = 813,
  kTrue = 814,
  kFalse = 815,
  kNoPreference = 816,
  kDark = 817,
  kLight = 818,
  kOnly = 819,
  kReduce = 820,
  kActive = 821,
  kPreserveParentColor = 822,
  kBackButton = 823,
  kFabricated = 824,
  kSelector = 825,
  kContinuous = 826,
  kFolded = 827,
  kFoldedOver = 828,
  kStable = 829,
  kBothEdges = 830,
  kMore = 831,
  kLess = 832,
  kCustom = 833,
  kCyclic = 834,
  kSymbolic = 835,
  kNumeric = 836,
  kAdditive = 837,
  kExtends = 838,
  kInternalSimpChineseInformal = 839,
  kInternalSimpChineseFormal = 840,
  kInternalTradChineseInformal = 841,
  kInternalTradChineseFormal = 842,
  kInternalKoreanHangulFormal = 843,
  kInternalKoreanHanjaInformal = 844,
  kInternalKoreanHanjaFormal = 845,
  kInternalHebrew = 846,
  kInternalLowerArmenian = 847,
  kInternalUpperArmenian = 848,
  kInternalEthiopicNumeric = 849,
  kBullets = 850,
  kNumbers = 851,
  kWords = 852,
  kStandard = 853,
  kHigh = 854,
  kLayer = 855,
  kGroup = 856,
  kSelf = 857,
  kCycle = 858,
  kCycleOn = 859,
  kPrev = 860,
  kNext = 861,
  kSet = 862,
  kColorContrast = 863,
  kVs = 864,
  kAA = 865,
  kAALarge = 866,
  kAAA = 867,
  kAAALarge = 868,
  kXywh = 869,
  kAnchor = 870,
  kAnchorSize = 871,
  kWidth = 872,
  kHeight = 873,
  kSelfBlock = 874,
  kSelfInline = 875,
};

const int numCSSValueKeywords = 876;
const size_t maxCSSValueKeywordLength = 42;

inline bool IsValidCSSValueID(CSSValueID id)
{
    return id != CSSValueID::kInvalid;
}

CORE_EXPORT const char* getValueName(CSSValueID);
bool isValueAllowedInMode(CSSValueID id, CSSParserMode mode);

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_CORE_CSS_VALUE_KEYWORDS_H_
