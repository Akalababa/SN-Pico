#define m 294
#define n 310
#define KB 786
#define KD 345
#define KR 72
static int bs[786][2] = {
{0,1},
{2,2},
{13,2},
{24,2},
{35,2},
{1,2},
{5,1},
{16,1},
{27,1},
{38,1},
{48,1},
{51,2},
{72,1},
{75,2},
{94,2},
{97,1},
{110,1},
{113,2},
{134,1},
{137,2},
{156,2},
{159,1},
{172,1},
{175,2},
{196,1},
{199,2},
{218,2},
{221,1},
{234,1},
{237,2},
{258,1},
{261,2},
{280,2},
{283,1},
{47,1},
{48,1},
{52,2},
{46,2},
{52,1},
{50,2},
{52,1},
{47,3},
{51,1},
{51,1},
{54,2},
{47,2},
{54,1},
{56,2},
{54,1},
{57,2},
{46,2},
{56,1},
{57,1},
{46,2},
{55,1},
{57,1},
{57,1},
{59,2},
{53,2},
{59,1},
{59,1},
{60,2},
{58,2},
{60,1},
{48,2},
{55,2},
{56,1},
{60,1},
{48,2},
{55,1},
{60,1},
{6,2},
{62,1},
{61,2},
{63,1},
{6,1},
{62,1},
{63,2},
{61,1},
{63,1},
{64,2},
{7,2},
{66,1},
{65,2},
{67,1},
{7,1},
{66,1},
{67,2},
{65,1},
{67,1},
{68,2},
{2,1},
{62,2},
{66,2},
{48,2},
{64,1},
{68,1},
{49,2},
{69,1},
{8,2},
{50,1},
{8,1},
{50,1},
{69,2},
{3,2},
{49,1},
{69,1},
{71,1},
{72,1},
{76,2},
{70,2},
{76,1},
{74,2},
{76,1},
{71,3},
{75,1},
{75,1},
{78,2},
{71,2},
{78,1},
{80,2},
{78,1},
{81,2},
{70,2},
{80,1},
{81,1},
{70,2},
{79,1},
{81,1},
{81,1},
{83,2},
{77,2},
{83,1},
{83,1},
{84,2},
{82,2},
{84,1},
{72,2},
{79,2},
{80,1},
{84,1},
{72,2},
{79,1},
{84,1},
{9,2},
{86,1},
{85,2},
{87,1},
{9,1},
{86,1},
{87,2},
{85,1},
{87,1},
{88,2},
{10,2},
{90,1},
{89,2},
{91,1},
{10,1},
{90,1},
{91,2},
{89,1},
{91,1},
{92,2},
{3,1},
{86,2},
{90,2},
{72,2},
{88,1},
{92,1},
{73,2},
{93,1},
{11,2},
{74,1},
{11,1},
{74,1},
{93,2},
{4,2},
{73,1},
{93,1},
{95,2},
{97,1},
{94,1},
{95,1},
{97,1},
{98,2},
{8,2},
{100,1},
{99,2},
{101,1},
{8,1},
{100,1},
{101,2},
{99,1},
{101,1},
{102,2},
{11,2},
{104,1},
{103,2},
{105,1},
{11,1},
{104,1},
{105,2},
{103,1},
{105,1},
{106,2},
{4,1},
{100,2},
{104,2},
{97,2},
{102,1},
{106,1},
{96,2},
{107,1},
{12,2},
{98,1},
{12,1},
{98,1},
{107,2},
{5,2},
{96,1},
{107,1},
{109,1},
{110,1},
{114,2},
{108,2},
{114,1},
{112,2},
{114,1},
{109,3},
{113,1},
{113,1},
{116,2},
{109,2},
{116,1},
{118,2},
{116,1},
{119,2},
{108,2},
{118,1},
{119,1},
{108,2},
{117,1},
{119,1},
{119,1},
{121,2},
{115,2},
{121,1},
{121,1},
{122,2},
{120,2},
{122,1},
{110,2},
{117,2},
{118,1},
{122,1},
{110,2},
{117,1},
{122,1},
{17,2},
{124,1},
{123,2},
{125,1},
{17,1},
{124,1},
{125,2},
{123,1},
{125,1},
{126,2},
{18,2},
{128,1},
{127,2},
{129,1},
{18,1},
{128,1},
{129,2},
{127,1},
{129,1},
{130,2},
{13,1},
{124,2},
{128,2},
{110,2},
{126,1},
{130,1},
{111,2},
{131,1},
{19,2},
{112,1},
{19,1},
{112,1},
{131,2},
{14,2},
{111,1},
{131,1},
{133,1},
{134,1},
{138,2},
{132,2},
{138,1},
{136,2},
{138,1},
{133,3},
{137,1},
{137,1},
{140,2},
{133,2},
{140,1},
{142,2},
{140,1},
{143,2},
{132,2},
{142,1},
{143,1},
{132,2},
{141,1},
{143,1},
{143,1},
{145,2},
{139,2},
{145,1},
{145,1},
{146,2},
{144,2},
{146,1},
{134,2},
{141,2},
{142,1},
{146,1},
{134,2},
{141,1},
{146,1},
{20,2},
{148,1},
{147,2},
{149,1},
{20,1},
{148,1},
{149,2},
{147,1},
{149,1},
{150,2},
{21,2},
{152,1},
{151,2},
{153,1},
{21,1},
{152,1},
{153,2},
{151,1},
{153,1},
{154,2},
{14,1},
{148,2},
{152,2},
{134,2},
{150,1},
{154,1},
{135,2},
{155,1},
{22,2},
{136,1},
{22,1},
{136,1},
{155,2},
{15,2},
{135,1},
{155,1},
{157,2},
{159,1},
{156,1},
{157,1},
{159,1},
{160,2},
{19,2},
{162,1},
{161,2},
{163,1},
{19,1},
{162,1},
{163,2},
{161,1},
{163,1},
{164,2},
{22,2},
{166,1},
{165,2},
{167,1},
{22,1},
{166,1},
{167,2},
{165,1},
{167,1},
{168,2},
{15,1},
{162,2},
{166,2},
{159,2},
{164,1},
{168,1},
{158,2},
{169,1},
{23,2},
{160,1},
{23,1},
{160,1},
{169,2},
{16,2},
{158,1},
{169,1},
{171,1},
{172,1},
{176,2},
{170,2},
{176,1},
{174,2},
{176,1},
{171,3},
{175,1},
{175,1},
{178,2},
{171,2},
{178,1},
{180,2},
{178,1},
{181,2},
{170,2},
{180,1},
{181,1},
{170,2},
{179,1},
{181,1},
{181,1},
{183,2},
{177,2},
{183,1},
{183,1},
{184,2},
{182,2},
{184,1},
{172,2},
{179,2},
{180,1},
{184,1},
{172,2},
{179,1},
{184,1},
{28,2},
{186,1},
{185,2},
{187,1},
{28,1},
{186,1},
{187,2},
{185,1},
{187,1},
{188,2},
{29,2},
{190,1},
{189,2},
{191,1},
{29,1},
{190,1},
{191,2},
{189,1},
{191,1},
{192,2},
{24,1},
{186,2},
{190,2},
{172,2},
{188,1},
{192,1},
{173,2},
{193,1},
{30,2},
{174,1},
{30,1},
{174,1},
{193,2},
{25,2},
{173,1},
{193,1},
{195,1},
{196,1},
{200,2},
{194,2},
{200,1},
{198,2},
{200,1},
{195,3},
{199,1},
{199,1},
{202,2},
{195,2},
{202,1},
{204,2},
{202,1},
{205,2},
{194,2},
{204,1},
{205,1},
{194,2},
{203,1},
{205,1},
{205,1},
{207,2},
{201,2},
{207,1},
{207,1},
{208,2},
{206,2},
{208,1},
{196,2},
{203,2},
{204,1},
{208,1},
{196,2},
{203,1},
{208,1},
{31,2},
{210,1},
{209,2},
{211,1},
{31,1},
{210,1},
{211,2},
{209,1},
{211,1},
{212,2},
{32,2},
{214,1},
{213,2},
{215,1},
{32,1},
{214,1},
{215,2},
{213,1},
{215,1},
{216,2},
{25,1},
{210,2},
{214,2},
{196,2},
{212,1},
{216,1},
{197,2},
{217,1},
{33,2},
{198,1},
{33,1},
{198,1},
{217,2},
{26,2},
{197,1},
{217,1},
{219,2},
{221,1},
{218,1},
{219,1},
{221,1},
{222,2},
{30,2},
{224,1},
{223,2},
{225,1},
{30,1},
{224,1},
{225,2},
{223,1},
{225,1},
{226,2},
{33,2},
{228,1},
{227,2},
{229,1},
{33,1},
{228,1},
{229,2},
{227,1},
{229,1},
{230,2},
{26,1},
{224,2},
{228,2},
{221,2},
{226,1},
{230,1},
{220,2},
{231,1},
{34,2},
{222,1},
{34,1},
{222,1},
{231,2},
{27,2},
{220,1},
{231,1},
{233,1},
{234,1},
{238,2},
{232,2},
{238,1},
{236,2},
{238,1},
{233,3},
{237,1},
{237,1},
{240,2},
{233,2},
{240,1},
{242,2},
{240,1},
{243,2},
{232,2},
{242,1},
{243,1},
{232,2},
{241,1},
{243,1},
{243,1},
{245,2},
{239,2},
{245,1},
{245,1},
{246,2},
{244,2},
{246,1},
{234,2},
{241,2},
{242,1},
{246,1},
{234,2},
{241,1},
{246,1},
{39,2},
{248,1},
{247,2},
{249,1},
{39,1},
{248,1},
{249,2},
{247,1},
{249,1},
{250,2},
{40,2},
{252,1},
{251,2},
{253,1},
{40,1},
{252,1},
{253,2},
{251,1},
{253,1},
{254,2},
{35,1},
{248,2},
{252,2},
{234,2},
{250,1},
{254,1},
{235,2},
{255,1},
{41,2},
{236,1},
{41,1},
{236,1},
{255,2},
{36,2},
{235,1},
{255,1},
{257,1},
{258,1},
{262,2},
{256,2},
{262,1},
{260,2},
{262,1},
{257,3},
{261,1},
{261,1},
{264,2},
{257,2},
{264,1},
{266,2},
{264,1},
{267,2},
{256,2},
{266,1},
{267,1},
{256,2},
{265,1},
{267,1},
{267,1},
{269,2},
{263,2},
{269,1},
{269,1},
{270,2},
{268,2},
{270,1},
{258,2},
{265,2},
{266,1},
{270,1},
{258,2},
{265,1},
{270,1},
{42,2},
{272,1},
{271,2},
{273,1},
{42,1},
{272,1},
{273,2},
{271,1},
{273,1},
{274,2},
{43,2},
{276,1},
{275,2},
{277,1},
{43,1},
{276,1},
{277,2},
{275,1},
{277,1},
{278,2},
{36,1},
{272,2},
{276,2},
{258,2},
{274,1},
{278,1},
{259,2},
{279,1},
{44,2},
{260,1},
{44,1},
{260,1},
{279,2},
{37,2},
{259,1},
{279,1},
{281,2},
{283,1},
{280,1},
{281,1},
{283,1},
{284,2},
{41,2},
{286,1},
{285,2},
{287,1},
{41,1},
{286,1},
{287,2},
{285,1},
{287,1},
{288,2},
{44,2},
{290,1},
{289,2},
{291,1},
{44,1},
{290,1},
{291,2},
{289,1},
{291,1},
{292,2},
{37,1},
{286,2},
{290,2},
{283,2},
{288,1},
{292,1},
{282,2},
{293,1},
{45,2},
{284,1},
{45,1},
{284,1},
{293,2},
{38,2},
{282,1},
{293,1}
};
static int tbs[311] = {0, 5, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30, 32, 34, 37, 39, 41, 43, 45, 48, 50, 53, 56, 58, 60, 62, 64, 68, 71, 73, 75, 78, 81, 83, 85, 88, 91, 94, 97, 99, 101, 104, 107, 110, 112, 114, 116, 118, 121, 123, 126, 129, 131, 133, 135, 137, 141, 144, 146, 148, 151, 154, 156, 158, 161, 164, 167, 170, 172, 174, 177, 180, 182, 186, 188, 190, 193, 196, 198, 200, 203, 206, 209, 212, 214, 216, 219, 222, 225, 227, 229, 231, 233, 236, 238, 241, 244, 246, 248, 250, 252, 256, 259, 261, 263, 266, 269, 271, 273, 276, 279, 282, 285, 287, 289, 292, 295, 298, 300, 302, 304, 306, 309, 311, 314, 317, 319, 321, 323, 325, 329, 332, 334, 336, 339, 342, 344, 346, 349, 352, 355, 358, 360, 362, 365, 368, 370, 374, 376, 378, 381, 384, 386, 388, 391, 394, 397, 400, 402, 404, 407, 410, 413, 415, 417, 419, 421, 424, 426, 429, 432, 434, 436, 438, 440, 444, 447, 449, 451, 454, 457, 459, 461, 464, 467, 470, 473, 475, 477, 480, 483, 486, 488, 490, 492, 494, 497, 499, 502, 505, 507, 509, 511, 513, 517, 520, 522, 524, 527, 530, 532, 534, 537, 540, 543, 546, 548, 550, 553, 556, 558, 562, 564, 566, 569, 572, 574, 576, 579, 582, 585, 588, 590, 592, 595, 598, 601, 603, 605, 607, 609, 612, 614, 617, 620, 622, 624, 626, 628, 632, 635, 637, 639, 642, 645, 647, 649, 652, 655, 658, 661, 663, 665, 668, 671, 674, 676, 678, 680, 682, 685, 687, 690, 693, 695, 697, 699, 701, 705, 708, 710, 712, 715, 718, 720, 722, 725, 728, 731, 734, 736, 738, 741, 744, 746, 750, 752, 754, 757, 760, 762, 764, 767, 770, 773, 776, 778, 780, 783, 786};
static int ds[345][2] = {
{0,1},
{5,1},
{16,1},
{27,1},
{38,1},
{48,1},
{72,1},
{96,1},
{110,1},
{134,1},
{158,1},
{172,1},
{196,1},
{220,1},
{234,1},
{258,1},
{282,1},
{48,1},
{52,1},
{53,1},
{51,1},
{55,1},
{54,1},
{49,1},
{58,1},
{58,1},
{57,1},
{47,1},
{59,1},
{46,2},
{56,1},
{60,1},
{60,1},
{46,1},
{61,1},
{6,1},
{62,1},
{63,1},
{47,1},
{65,1},
{7,1},
{66,1},
{67,1},
{2,1},
{64,1},
{68,1},
{8,1},
{50,1},
{69,1},
{72,1},
{76,1},
{77,1},
{75,1},
{79,1},
{78,1},
{73,1},
{82,1},
{82,1},
{81,1},
{71,1},
{83,1},
{70,2},
{80,1},
{84,1},
{84,1},
{70,1},
{85,1},
{9,1},
{86,1},
{87,1},
{71,1},
{89,1},
{10,1},
{90,1},
{91,1},
{3,1},
{88,1},
{92,1},
{11,1},
{74,1},
{93,1},
{96,1},
{97,1},
{94,1},
{99,1},
{8,1},
{100,1},
{101,1},
{95,1},
{103,1},
{11,1},
{104,1},
{105,1},
{4,1},
{102,1},
{106,1},
{12,1},
{98,1},
{107,1},
{110,1},
{114,1},
{115,1},
{113,1},
{117,1},
{116,1},
{111,1},
{120,1},
{120,1},
{119,1},
{109,1},
{121,1},
{108,2},
{118,1},
{122,1},
{122,1},
{108,1},
{123,1},
{17,1},
{124,1},
{125,1},
{109,1},
{127,1},
{18,1},
{128,1},
{129,1},
{13,1},
{126,1},
{130,1},
{19,1},
{112,1},
{131,1},
{134,1},
{138,1},
{139,1},
{137,1},
{141,1},
{140,1},
{135,1},
{144,1},
{144,1},
{143,1},
{133,1},
{145,1},
{132,2},
{142,1},
{146,1},
{146,1},
{132,1},
{147,1},
{20,1},
{148,1},
{149,1},
{133,1},
{151,1},
{21,1},
{152,1},
{153,1},
{14,1},
{150,1},
{154,1},
{22,1},
{136,1},
{155,1},
{158,1},
{159,1},
{156,1},
{161,1},
{19,1},
{162,1},
{163,1},
{157,1},
{165,1},
{22,1},
{166,1},
{167,1},
{15,1},
{164,1},
{168,1},
{23,1},
{160,1},
{169,1},
{172,1},
{176,1},
{177,1},
{175,1},
{179,1},
{178,1},
{173,1},
{182,1},
{182,1},
{181,1},
{171,1},
{183,1},
{170,2},
{180,1},
{184,1},
{184,1},
{170,1},
{185,1},
{28,1},
{186,1},
{187,1},
{171,1},
{189,1},
{29,1},
{190,1},
{191,1},
{24,1},
{188,1},
{192,1},
{30,1},
{174,1},
{193,1},
{196,1},
{200,1},
{201,1},
{199,1},
{203,1},
{202,1},
{197,1},
{206,1},
{206,1},
{205,1},
{195,1},
{207,1},
{194,2},
{204,1},
{208,1},
{208,1},
{194,1},
{209,1},
{31,1},
{210,1},
{211,1},
{195,1},
{213,1},
{32,1},
{214,1},
{215,1},
{25,1},
{212,1},
{216,1},
{33,1},
{198,1},
{217,1},
{220,1},
{221,1},
{218,1},
{223,1},
{30,1},
{224,1},
{225,1},
{219,1},
{227,1},
{33,1},
{228,1},
{229,1},
{26,1},
{226,1},
{230,1},
{34,1},
{222,1},
{231,1},
{234,1},
{238,1},
{239,1},
{237,1},
{241,1},
{240,1},
{235,1},
{244,1},
{244,1},
{243,1},
{233,1},
{245,1},
{232,2},
{242,1},
{246,1},
{246,1},
{232,1},
{247,1},
{39,1},
{248,1},
{249,1},
{233,1},
{251,1},
{40,1},
{252,1},
{253,1},
{35,1},
{250,1},
{254,1},
{41,1},
{236,1},
{255,1},
{258,1},
{262,1},
{263,1},
{261,1},
{265,1},
{264,1},
{259,1},
{268,1},
{268,1},
{267,1},
{257,1},
{269,1},
{256,2},
{266,1},
{270,1},
{270,1},
{256,1},
{271,1},
{42,1},
{272,1},
{273,1},
{257,1},
{275,1},
{43,1},
{276,1},
{277,1},
{36,1},
{274,1},
{278,1},
{44,1},
{260,1},
{279,1},
{282,1},
{283,1},
{280,1},
{285,1},
{41,1},
{286,1},
{287,1},
{281,1},
{289,1},
{44,1},
{290,1},
{291,1},
{37,1},
{288,1},
{292,1},
{45,1},
{284,1},
{293,1}
};
static int tds[311] = {0, 1, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 18, 19, 20, 21, 22, 23, 25, 26, 27, 28, 29, 30, 32, 33, 35, 36, 37, 38, 40, 41, 42, 43, 44, 46, 47, 47, 48, 49, 50, 50, 51, 52, 53, 54, 55, 57, 58, 59, 60, 61, 62, 64, 65, 67, 68, 69, 70, 72, 73, 74, 75, 76, 78, 79, 79, 80, 81, 82, 83, 85, 86, 87, 88, 90, 91, 92, 93, 94, 96, 97, 97, 98, 99, 100, 100, 101, 102, 103, 104, 105, 107, 108, 109, 110, 111, 112, 114, 115, 117, 118, 119, 120, 122, 123, 124, 125, 126, 128, 129, 129, 130, 131, 132, 132, 133, 134, 135, 136, 137, 139, 140, 141, 142, 143, 144, 146, 147, 149, 150, 151, 152, 154, 155, 156, 157, 158, 160, 161, 161, 162, 163, 164, 165, 167, 168, 169, 170, 172, 173, 174, 175, 176, 178, 179, 179, 180, 181, 182, 182, 183, 184, 185, 186, 187, 189, 190, 191, 192, 193, 194, 196, 197, 199, 200, 201, 202, 204, 205, 206, 207, 208, 210, 211, 211, 212, 213, 214, 214, 215, 216, 217, 218, 219, 221, 222, 223, 224, 225, 226, 228, 229, 231, 232, 233, 234, 236, 237, 238, 239, 240, 242, 243, 243, 244, 245, 246, 247, 249, 250, 251, 252, 254, 255, 256, 257, 258, 260, 261, 261, 262, 263, 264, 264, 265, 266, 267, 268, 269, 271, 272, 273, 274, 275, 276, 278, 279, 281, 282, 283, 284, 286, 287, 288, 289, 290, 292, 293, 293, 294, 295, 296, 296, 297, 298, 299, 300, 301, 303, 304, 305, 306, 307, 308, 310, 311, 313, 314, 315, 316, 318, 319, 320, 321, 322, 324, 325, 325, 326, 327, 328, 329, 331, 332, 333, 334, 336, 337, 338, 339, 340, 342, 343, 343, 344, 345};
static int v_per[310] = {0, 1, 4, 7, 10, 13, 14, 15, 17, 19, 21, 22, 24, 26, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 46, 48, 50, 51, 53, 55, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 91, 93, 95, 96, 98, 100, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 120, 122, 124, 125, 127, 129, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 165, 167, 169, 170, 172, 174, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 194, 196, 198, 199, 201, 203, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 239, 241, 243, 244, 246, 248, 251, 252, 253, 254, 255, 256, 257, 258, 259, 260, 261, 262, 263, 264, 265, 266, 268, 270, 272, 273, 275, 277, 280, 281, 282, 283, 284, 285, 286, 287, 288, 289, 290, 291, 292, 293, 294, 295, 296, 297, 298, 299, 300, 301, 302, 303, 304, 305, 306, 307, 308, 309, 2, 3, 5, 6, 8, 9, 11, 12, 16, 18, 20, 23, 25, 27, 28, 45, 47, 49, 52, 54, 56, 57, 90, 92, 94, 97, 99, 101, 102, 119, 121, 123, 126, 128, 130, 131, 164, 166, 168, 171, 173, 175, 176, 193, 195, 197, 200, 202, 204, 205, 238, 240, 242, 245, 247, 249, 250, 267, 269, 271, 274, 276, 278, 279};
static int mu[294]={0,1,1,1,1,1,2,8,0,5,5,0,0,1,1,1,1,2,1,0,5,9,0,0,1,1,1,1,10,8,0,9,5,0,0,1,1,1,1,10,1,0,9,9,0,0,0,0,1,0,1,1,1,0,1,0,1,1,0,1,1,0,1,1,1,0,1,1,1,1,0,0,1,0,1,1,1,0,1,0,1,1,0,1,1,0,1,1,1,0,1,1,1,1,0,0,0,1,1,0,1,1,1,0,1,1,1,1,0,0,1,0,1,1,1,0,1,0,1,1,0,1,1,0,1,1,1,0,1,1,1,1,0,0,1,0,1,1,1,0,1,0,1,1,0,1,1,0,1,1,1,0,1,1,1,1,0,0,0,1,1,0,1,1,1,0,1,1,1,1,0,0,1,0,1,1,1,0,1,0,1,1,0,1,1,0,1,1,1,0,1,1,1,1,0,0,1,0,1,1,1,0,1,0,1,1,0,1,1,0,1,1,1,0,1,1,1,1,0,0,0,1,1,0,1,1,1,0,1,1,1,1,0,0,1,0,1,1,1,0,1,0,1,1,0,1,1,0,1,1,1,0,1,1,1,1,0,0,1,0,1,1,1,0,1,0,1,1,0,1,1,0,1,1,1,0,1,1,1,1,0,0,0,1,1,0,1,1,1,0,1,1,1,1};

