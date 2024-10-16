// Sleptsov-net in sparse matrix format
#define m 492
#define n 535
#define KB 1345
#define KD 590
#define KR 135
static int bs[1345][2] = {
{64, 1},
{67, 2},
{88, 1},
{91, 2},
{112, 1},
{115, 2},
{136, 1},
{139, 2},
{160, 1},
{163, 2},
{184, 1},
{187, 2},
{208, 1},
{211, 2},
{232, 1},
{235, 2},
{256, 1},
{259, 2},
{278, 2},
{281, 1},
{294, 1},
{297, 2},
{318, 1},
{321, 2},
{342, 1},
{345, 2},
{364, 2},
{367, 1},
{380, 1},
{383, 2},
{404, 1},
{407, 2},
{426, 2},
{429, 1},
{442, 1},
{445, 2},
{464, 2},
{467, 1},
{478, 2},
{481, 1},
{63, 1},
{64, 1},
{68, 2},
{62, 2},
{68, 1},
{66, 2},
{68, 1},
{63, 3},
{67, 1},
{67, 1},
{70, 2},
{63, 2},
{70, 1},
{72, 2},
{70, 1},
{73, 2},
{62, 2},
{72, 1},
{73, 1},
{62, 2},
{71, 1},
{73, 1},
{73, 1},
{75, 2},
{69, 2},
{75, 1},
{75, 1},
{76, 2},
{74, 2},
{76, 1},
{64, 2},
{71, 2},
{72, 1},
{76, 1},
{64, 2},
{71, 1},
{76, 1},
{21, 2},
{78, 1},
{77, 2},
{79, 1},
{21, 1},
{78, 1},
{79, 2},
{77, 1},
{79, 1},
{80, 2},
{22, 2},
{82, 1},
{81, 2},
{83, 1},
{22, 1},
{82, 1},
{83, 2},
{81, 1},
{83, 1},
{84, 2},
{0, 1},
{78, 2},
{82, 2},
{64, 2},
{80, 1},
{84, 1},
{65, 2},
{85, 1},
{23, 2},
{66, 1},
{23, 1},
{66, 1},
{85, 2},
{1, 2},
{65, 1},
{85, 1},
{87, 1},
{88, 1},
{92, 2},
{86, 2},
{92, 1},
{90, 2},
{92, 1},
{87, 3},
{91, 1},
{91, 1},
{94, 2},
{87, 2},
{94, 1},
{96, 2},
{94, 1},
{97, 2},
{86, 2},
{96, 1},
{97, 1},
{86, 2},
{95, 1},
{97, 1},
{97, 1},
{99, 2},
{93, 2},
{99, 1},
{99, 1},
{100, 2},
{98, 2},
{100, 1},
{88, 2},
{95, 2},
{96, 1},
{100, 1},
{88, 2},
{95, 1},
{100, 1},
{23, 2},
{102, 1},
{101, 2},
{103, 1},
{23, 1},
{102, 1},
{103, 2},
{101, 1},
{103, 1},
{104, 2},
{24, 2},
{106, 1},
{105, 2},
{107, 1},
{24, 1},
{106, 1},
{107, 2},
{105, 1},
{107, 1},
{108, 2},
{1, 1},
{102, 2},
{106, 2},
{88, 2},
{104, 1},
{108, 1},
{89, 2},
{109, 1},
{25, 2},
{90, 1},
{25, 1},
{90, 1},
{109, 2},
{2, 2},
{89, 1},
{109, 1},
{111, 1},
{112, 1},
{116, 2},
{110, 2},
{116, 1},
{114, 2},
{116, 1},
{111, 3},
{115, 1},
{115, 1},
{118, 2},
{111, 2},
{118, 1},
{120, 2},
{118, 1},
{121, 2},
{110, 2},
{120, 1},
{121, 1},
{110, 2},
{119, 1},
{121, 1},
{121, 1},
{123, 2},
{117, 2},
{123, 1},
{123, 1},
{124, 2},
{122, 2},
{124, 1},
{112, 2},
{119, 2},
{120, 1},
{124, 1},
{112, 2},
{119, 1},
{124, 1},
{25, 2},
{126, 1},
{125, 2},
{127, 1},
{25, 1},
{126, 1},
{127, 2},
{125, 1},
{127, 1},
{128, 2},
{26, 2},
{130, 1},
{129, 2},
{131, 1},
{26, 1},
{130, 1},
{131, 2},
{129, 1},
{131, 1},
{132, 2},
{2, 1},
{126, 2},
{130, 2},
{112, 2},
{128, 1},
{132, 1},
{113, 2},
{133, 1},
{27, 2},
{114, 1},
{27, 1},
{114, 1},
{133, 2},
{3, 2},
{113, 1},
{133, 1},
{135, 1},
{136, 1},
{140, 2},
{134, 2},
{140, 1},
{138, 2},
{140, 1},
{135, 3},
{139, 1},
{139, 1},
{142, 2},
{135, 2},
{142, 1},
{144, 2},
{142, 1},
{145, 2},
{134, 2},
{144, 1},
{145, 1},
{134, 2},
{143, 1},
{145, 1},
{145, 1},
{147, 2},
{141, 2},
{147, 1},
{147, 1},
{148, 2},
{146, 2},
{148, 1},
{136, 2},
{143, 2},
{144, 1},
{148, 1},
{136, 2},
{143, 1},
{148, 1},
{27, 2},
{150, 1},
{149, 2},
{151, 1},
{27, 1},
{150, 1},
{151, 2},
{149, 1},
{151, 1},
{152, 2},
{28, 2},
{154, 1},
{153, 2},
{155, 1},
{28, 1},
{154, 1},
{155, 2},
{153, 1},
{155, 1},
{156, 2},
{3, 1},
{150, 2},
{154, 2},
{136, 2},
{152, 1},
{156, 1},
{137, 2},
{157, 1},
{29, 2},
{138, 1},
{29, 1},
{138, 1},
{157, 2},
{4, 2},
{137, 1},
{157, 1},
{159, 1},
{160, 1},
{164, 2},
{158, 2},
{164, 1},
{162, 2},
{164, 1},
{159, 3},
{163, 1},
{163, 1},
{166, 2},
{159, 2},
{166, 1},
{168, 2},
{166, 1},
{169, 2},
{158, 2},
{168, 1},
{169, 1},
{158, 2},
{167, 1},
{169, 1},
{169, 1},
{171, 2},
{165, 2},
{171, 1},
{171, 1},
{172, 2},
{170, 2},
{172, 1},
{160, 2},
{167, 2},
{168, 1},
{172, 1},
{160, 2},
{167, 1},
{172, 1},
{29, 2},
{174, 1},
{173, 2},
{175, 1},
{29, 1},
{174, 1},
{175, 2},
{173, 1},
{175, 1},
{176, 2},
{30, 2},
{178, 1},
{177, 2},
{179, 1},
{30, 1},
{178, 1},
{179, 2},
{177, 1},
{179, 1},
{180, 2},
{4, 1},
{174, 2},
{178, 2},
{160, 2},
{176, 1},
{180, 1},
{161, 2},
{181, 1},
{31, 2},
{162, 1},
{31, 1},
{162, 1},
{181, 2},
{5, 2},
{161, 1},
{181, 1},
{183, 1},
{184, 1},
{188, 2},
{182, 2},
{188, 1},
{186, 2},
{188, 1},
{183, 3},
{187, 1},
{187, 1},
{190, 2},
{183, 2},
{190, 1},
{192, 2},
{190, 1},
{193, 2},
{182, 2},
{192, 1},
{193, 1},
{182, 2},
{191, 1},
{193, 1},
{193, 1},
{195, 2},
{189, 2},
{195, 1},
{195, 1},
{196, 2},
{194, 2},
{196, 1},
{184, 2},
{191, 2},
{192, 1},
{196, 1},
{184, 2},
{191, 1},
{196, 1},
{32, 2},
{198, 1},
{197, 2},
{199, 1},
{32, 1},
{198, 1},
{199, 2},
{197, 1},
{199, 1},
{200, 2},
{33, 2},
{202, 1},
{201, 2},
{203, 1},
{33, 1},
{202, 1},
{203, 2},
{201, 1},
{203, 1},
{204, 2},
{5, 1},
{198, 2},
{202, 2},
{184, 2},
{200, 1},
{204, 1},
{185, 2},
{205, 1},
{34, 2},
{186, 1},
{34, 1},
{186, 1},
{205, 2},
{6, 2},
{185, 1},
{205, 1},
{207, 1},
{208, 1},
{212, 2},
{206, 2},
{212, 1},
{210, 2},
{212, 1},
{207, 3},
{211, 1},
{211, 1},
{214, 2},
{207, 2},
{214, 1},
{216, 2},
{214, 1},
{217, 2},
{206, 2},
{216, 1},
{217, 1},
{206, 2},
{215, 1},
{217, 1},
{217, 1},
{219, 2},
{213, 2},
{219, 1},
{219, 1},
{220, 2},
{218, 2},
{220, 1},
{208, 2},
{215, 2},
{216, 1},
{220, 1},
{208, 2},
{215, 1},
{220, 1},
{34, 2},
{222, 1},
{221, 2},
{223, 1},
{34, 1},
{222, 1},
{223, 2},
{221, 1},
{223, 1},
{224, 2},
{35, 2},
{226, 1},
{225, 2},
{227, 1},
{35, 1},
{226, 1},
{227, 2},
{225, 1},
{227, 1},
{228, 2},
{6, 1},
{222, 2},
{226, 2},
{208, 2},
{224, 1},
{228, 1},
{209, 2},
{229, 1},
{36, 2},
{210, 1},
{36, 1},
{210, 1},
{229, 2},
{7, 2},
{209, 1},
{229, 1},
{231, 1},
{232, 1},
{236, 2},
{230, 2},
{236, 1},
{234, 2},
{236, 1},
{231, 3},
{235, 1},
{235, 1},
{238, 2},
{231, 2},
{238, 1},
{240, 2},
{238, 1},
{241, 2},
{230, 2},
{240, 1},
{241, 1},
{230, 2},
{239, 1},
{241, 1},
{241, 1},
{243, 2},
{237, 2},
{243, 1},
{243, 1},
{244, 2},
{242, 2},
{244, 1},
{232, 2},
{239, 2},
{240, 1},
{244, 1},
{232, 2},
{239, 1},
{244, 1},
{36, 2},
{246, 1},
{245, 2},
{247, 1},
{36, 1},
{246, 1},
{247, 2},
{245, 1},
{247, 1},
{248, 2},
{37, 2},
{250, 1},
{249, 2},
{251, 1},
{37, 1},
{250, 1},
{251, 2},
{249, 1},
{251, 1},
{252, 2},
{7, 1},
{246, 2},
{250, 2},
{232, 2},
{248, 1},
{252, 1},
{233, 2},
{253, 1},
{38, 2},
{234, 1},
{38, 1},
{234, 1},
{253, 2},
{8, 2},
{233, 1},
{253, 1},
{255, 1},
{256, 1},
{260, 2},
{254, 2},
{260, 1},
{258, 2},
{260, 1},
{255, 3},
{259, 1},
{259, 1},
{262, 2},
{255, 2},
{262, 1},
{264, 2},
{262, 1},
{265, 2},
{254, 2},
{264, 1},
{265, 1},
{254, 2},
{263, 1},
{265, 1},
{265, 1},
{267, 2},
{261, 2},
{267, 1},
{267, 1},
{268, 2},
{266, 2},
{268, 1},
{256, 2},
{263, 2},
{264, 1},
{268, 1},
{256, 2},
{263, 1},
{268, 1},
{38, 2},
{270, 1},
{269, 2},
{271, 1},
{38, 1},
{270, 1},
{271, 2},
{269, 1},
{271, 1},
{272, 2},
{39, 2},
{274, 1},
{273, 2},
{275, 1},
{39, 1},
{274, 1},
{275, 2},
{273, 1},
{275, 1},
{276, 2},
{8, 1},
{270, 2},
{274, 2},
{256, 2},
{272, 1},
{276, 1},
{257, 2},
{277, 1},
{40, 2},
{258, 1},
{40, 1},
{258, 1},
{277, 2},
{9, 2},
{257, 1},
{277, 1},
{279, 2},
{281, 1},
{278, 1},
{279, 1},
{281, 1},
{282, 2},
{31, 2},
{284, 1},
{283, 2},
{285, 1},
{31, 1},
{284, 1},
{285, 2},
{283, 1},
{285, 1},
{286, 2},
{40, 2},
{288, 1},
{287, 2},
{289, 1},
{40, 1},
{288, 1},
{289, 2},
{287, 1},
{289, 1},
{290, 2},
{9, 1},
{284, 2},
{288, 2},
{281, 2},
{286, 1},
{290, 1},
{280, 2},
{291, 1},
{41, 2},
{282, 1},
{41, 1},
{282, 1},
{291, 2},
{10, 2},
{280, 1},
{291, 1},
{293, 1},
{294, 1},
{298, 2},
{292, 2},
{298, 1},
{296, 2},
{298, 1},
{293, 3},
{297, 1},
{297, 1},
{300, 2},
{293, 2},
{300, 1},
{302, 2},
{300, 1},
{303, 2},
{292, 2},
{302, 1},
{303, 1},
{292, 2},
{301, 1},
{303, 1},
{303, 1},
{305, 2},
{299, 2},
{305, 1},
{305, 1},
{306, 2},
{304, 2},
{306, 1},
{294, 2},
{301, 2},
{302, 1},
{306, 1},
{294, 2},
{301, 1},
{306, 1},
{42, 2},
{308, 1},
{307, 2},
{309, 1},
{42, 1},
{308, 1},
{309, 2},
{307, 1},
{309, 1},
{310, 2},
{43, 2},
{312, 1},
{311, 2},
{313, 1},
{43, 1},
{312, 1},
{313, 2},
{311, 1},
{313, 1},
{314, 2},
{10, 1},
{308, 2},
{312, 2},
{294, 2},
{310, 1},
{314, 1},
{295, 2},
{315, 1},
{44, 2},
{296, 1},
{44, 1},
{296, 1},
{315, 2},
{11, 2},
{295, 1},
{315, 1},
{317, 1},
{318, 1},
{322, 2},
{316, 2},
{322, 1},
{320, 2},
{322, 1},
{317, 3},
{321, 1},
{321, 1},
{324, 2},
{317, 2},
{324, 1},
{326, 2},
{324, 1},
{327, 2},
{316, 2},
{326, 1},
{327, 1},
{316, 2},
{325, 1},
{327, 1},
{327, 1},
{329, 2},
{323, 2},
{329, 1},
{329, 1},
{330, 2},
{328, 2},
{330, 1},
{318, 2},
{325, 2},
{326, 1},
{330, 1},
{318, 2},
{325, 1},
{330, 1},
{44, 2},
{332, 1},
{331, 2},
{333, 1},
{44, 1},
{332, 1},
{333, 2},
{331, 1},
{333, 1},
{334, 2},
{45, 2},
{336, 1},
{335, 2},
{337, 1},
{45, 1},
{336, 1},
{337, 2},
{335, 1},
{337, 1},
{338, 2},
{11, 1},
{332, 2},
{336, 2},
{318, 2},
{334, 1},
{338, 1},
{319, 2},
{339, 1},
{46, 2},
{320, 1},
{46, 1},
{320, 1},
{339, 2},
{12, 2},
{319, 1},
{339, 1},
{341, 1},
{342, 1},
{346, 2},
{340, 2},
{346, 1},
{344, 2},
{346, 1},
{341, 3},
{345, 1},
{345, 1},
{348, 2},
{341, 2},
{348, 1},
{350, 2},
{348, 1},
{351, 2},
{340, 2},
{350, 1},
{351, 1},
{340, 2},
{349, 1},
{351, 1},
{351, 1},
{353, 2},
{347, 2},
{353, 1},
{353, 1},
{354, 2},
{352, 2},
{354, 1},
{342, 2},
{349, 2},
{350, 1},
{354, 1},
{342, 2},
{349, 1},
{354, 1},
{46, 2},
{356, 1},
{355, 2},
{357, 1},
{46, 1},
{356, 1},
{357, 2},
{355, 1},
{357, 1},
{358, 2},
{47, 2},
{360, 1},
{359, 2},
{361, 1},
{47, 1},
{360, 1},
{361, 2},
{359, 1},
{361, 1},
{362, 2},
{12, 1},
{356, 2},
{360, 2},
{342, 2},
{358, 1},
{362, 1},
{343, 2},
{363, 1},
{48, 2},
{344, 1},
{48, 1},
{344, 1},
{363, 2},
{13, 2},
{343, 1},
{363, 1},
{365, 2},
{367, 1},
{364, 1},
{365, 1},
{367, 1},
{368, 2},
{48, 2},
{370, 1},
{369, 2},
{371, 1},
{48, 1},
{370, 1},
{371, 2},
{369, 1},
{371, 1},
{372, 2},
{41, 2},
{374, 1},
{373, 2},
{375, 1},
{41, 1},
{374, 1},
{375, 2},
{373, 1},
{375, 1},
{376, 2},
{13, 1},
{370, 2},
{374, 2},
{367, 2},
{372, 1},
{376, 1},
{366, 2},
{377, 1},
{49, 2},
{368, 1},
{49, 1},
{368, 1},
{377, 2},
{14, 2},
{366, 1},
{377, 1},
{379, 1},
{380, 1},
{384, 2},
{378, 2},
{384, 1},
{382, 2},
{384, 1},
{379, 3},
{383, 1},
{383, 1},
{386, 2},
{379, 2},
{386, 1},
{388, 2},
{386, 1},
{389, 2},
{378, 2},
{388, 1},
{389, 1},
{378, 2},
{387, 1},
{389, 1},
{389, 1},
{391, 2},
{385, 2},
{391, 1},
{391, 1},
{392, 2},
{390, 2},
{392, 1},
{380, 2},
{387, 2},
{388, 1},
{392, 1},
{380, 2},
{387, 1},
{392, 1},
{50, 2},
{394, 1},
{393, 2},
{395, 1},
{50, 1},
{394, 1},
{395, 2},
{393, 1},
{395, 1},
{396, 2},
{51, 2},
{398, 1},
{397, 2},
{399, 1},
{51, 1},
{398, 1},
{399, 2},
{397, 1},
{399, 1},
{400, 2},
{14, 1},
{394, 2},
{398, 2},
{380, 2},
{396, 1},
{400, 1},
{381, 2},
{401, 1},
{52, 2},
{382, 1},
{52, 1},
{382, 1},
{401, 2},
{15, 2},
{381, 1},
{401, 1},
{403, 1},
{404, 1},
{408, 2},
{402, 2},
{408, 1},
{406, 2},
{408, 1},
{403, 3},
{407, 1},
{407, 1},
{410, 2},
{403, 2},
{410, 1},
{412, 2},
{410, 1},
{413, 2},
{402, 2},
{412, 1},
{413, 1},
{402, 2},
{411, 1},
{413, 1},
{413, 1},
{415, 2},
{409, 2},
{415, 1},
{415, 1},
{416, 2},
{414, 2},
{416, 1},
{404, 2},
{411, 2},
{412, 1},
{416, 1},
{404, 2},
{411, 1},
{416, 1},
{52, 2},
{418, 1},
{417, 2},
{419, 1},
{52, 1},
{418, 1},
{419, 2},
{417, 1},
{419, 1},
{420, 2},
{53, 2},
{422, 1},
{421, 2},
{423, 1},
{53, 1},
{422, 1},
{423, 2},
{421, 1},
{423, 1},
{424, 2},
{15, 1},
{418, 2},
{422, 2},
{404, 2},
{420, 1},
{424, 1},
{405, 2},
{425, 1},
{54, 2},
{406, 1},
{54, 1},
{406, 1},
{425, 2},
{16, 2},
{405, 1},
{425, 1},
{427, 2},
{429, 1},
{426, 1},
{427, 1},
{429, 1},
{430, 2},
{54, 2},
{432, 1},
{431, 2},
{433, 1},
{54, 1},
{432, 1},
{433, 2},
{431, 1},
{433, 1},
{434, 2},
{49, 2},
{436, 1},
{435, 2},
{437, 1},
{49, 1},
{436, 1},
{437, 2},
{435, 1},
{437, 1},
{438, 2},
{16, 1},
{432, 2},
{436, 2},
{429, 2},
{434, 1},
{438, 1},
{428, 2},
{439, 1},
{55, 2},
{430, 1},
{55, 1},
{430, 1},
{439, 2},
{17, 2},
{428, 1},
{439, 1},
{441, 1},
{442, 1},
{446, 2},
{440, 2},
{446, 1},
{444, 2},
{446, 1},
{441, 3},
{445, 1},
{445, 1},
{448, 2},
{441, 2},
{448, 1},
{450, 2},
{448, 1},
{451, 2},
{440, 2},
{450, 1},
{451, 1},
{440, 2},
{449, 1},
{451, 1},
{451, 1},
{453, 2},
{447, 2},
{453, 1},
{453, 1},
{454, 2},
{452, 2},
{454, 1},
{442, 2},
{449, 2},
{450, 1},
{454, 1},
{442, 2},
{449, 1},
{454, 1},
{56, 2},
{456, 1},
{455, 2},
{457, 1},
{56, 1},
{456, 1},
{457, 2},
{455, 1},
{457, 1},
{458, 2},
{57, 2},
{460, 1},
{459, 2},
{461, 1},
{57, 1},
{460, 1},
{461, 2},
{459, 1},
{461, 1},
{462, 2},
{17, 1},
{456, 2},
{460, 2},
{442, 2},
{458, 1},
{462, 1},
{443, 2},
{463, 1},
{58, 2},
{444, 1},
{58, 1},
{444, 1},
{463, 2},
{18, 2},
{443, 1},
{463, 1},
{465, 2},
{467, 1},
{464, 1},
{465, 1},
{467, 1},
{468, 2},
{58, 2},
{470, 1},
{469, 2},
{471, 1},
{58, 1},
{470, 1},
{471, 2},
{469, 1},
{471, 1},
{472, 2},
{55, 2},
{474, 1},
{473, 2},
{475, 1},
{55, 1},
{474, 1},
{475, 2},
{473, 1},
{475, 1},
{476, 2},
{18, 1},
{470, 2},
{474, 2},
{467, 2},
{472, 1},
{476, 1},
{466, 2},
{477, 1},
{59, 2},
{468, 1},
{59, 1},
{468, 1},
{477, 2},
{19, 2},
{466, 1},
{477, 1},
{479, 2},
{481, 1},
{478, 1},
{479, 1},
{481, 1},
{482, 2},
{59, 2},
{484, 1},
{483, 2},
{485, 1},
{59, 1},
{484, 1},
{485, 2},
{483, 1},
{485, 1},
{486, 2},
{60, 2},
{488, 1},
{487, 2},
{489, 1},
{60, 1},
{488, 1},
{489, 2},
{487, 1},
{489, 1},
{490, 2},
{19, 1},
{484, 2},
{488, 2},
{481, 2},
{486, 1},
{490, 1},
{480, 2},
{491, 1},
{61, 2},
{482, 1},
{61, 1},
{482, 1},
{491, 2},
{20, 2},
{480, 1},
{491, 1}};
static int tbs[536] = {0, 2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30, 32, 34, 36, 38, 40, 43, 45, 47, 49, 51, 54, 56, 59, 62, 64, 66, 68, 70, 74, 77, 79, 81, 84, 87, 89, 91, 94, 97, 100, 103, 105, 107, 110, 113, 116, 118, 120, 122, 124, 127, 129, 132, 135, 137, 139, 141, 143, 147, 150, 152, 154, 157, 160, 162, 164, 167, 170, 173, 176, 178, 180, 183, 186, 189, 191, 193, 195, 197, 200, 202, 205, 208, 210, 212, 214, 216, 220, 223, 225, 227, 230, 233, 235, 237, 240, 243, 246, 249, 251, 253, 256, 259, 262, 264, 266, 268, 270, 273, 275, 278, 281, 283, 285, 287, 289, 293, 296, 298, 300, 303, 306, 308, 310, 313, 316, 319, 322, 324, 326, 329, 332, 335, 337, 339, 341, 343, 346, 348, 351, 354, 356, 358, 360, 362, 366, 369, 371, 373, 376, 379, 381, 383, 386, 389, 392, 395, 397, 399, 402, 405, 408, 410, 412, 414, 416, 419, 421, 424, 427, 429, 431, 433, 435, 439, 442, 444, 446, 449, 452, 454, 456, 459, 462, 465, 468, 470, 472, 475, 478, 481, 483, 485, 487, 489, 492, 494, 497, 500, 502, 504, 506, 508, 512, 515, 517, 519, 522, 525, 527, 529, 532, 535, 538, 541, 543, 545, 548, 551, 554, 556, 558, 560, 562, 565, 567, 570, 573, 575, 577, 579, 581, 585, 588, 590, 592, 595, 598, 600, 602, 605, 608, 611, 614, 616, 618, 621, 624, 627, 629, 631, 633, 635, 638, 640, 643, 646, 648, 650, 652, 654, 658, 661, 663, 665, 668, 671, 673, 675, 678, 681, 684, 687, 689, 691, 694, 697, 699, 703, 705, 707, 710, 713, 715, 717, 720, 723, 726, 729, 731, 733, 736, 739, 742, 744, 746, 748, 750, 753, 755, 758, 761, 763, 765, 767, 769, 773, 776, 778, 780, 783, 786, 788, 790, 793, 796, 799, 802, 804, 806, 809, 812, 815, 817, 819, 821, 823, 826, 828, 831, 834, 836, 838, 840, 842, 846, 849, 851, 853, 856, 859, 861, 863, 866, 869, 872, 875, 877, 879, 882, 885, 888, 890, 892, 894, 896, 899, 901, 904, 907, 909, 911, 913, 915, 919, 922, 924, 926, 929, 932, 934, 936, 939, 942, 945, 948, 950, 952, 955, 958, 960, 964, 966, 968, 971, 974, 976, 978, 981, 984, 987, 990, 992, 994, 997, 1000, 1003, 1005, 1007, 1009, 1011, 1014, 1016, 1019, 1022, 1024, 1026, 1028, 1030, 1034, 1037, 1039, 1041, 1044, 1047, 1049, 1051, 1054, 1057, 1060, 1063, 1065, 1067, 1070, 1073, 1076, 1078, 1080, 1082, 1084, 1087, 1089, 1092, 1095, 1097, 1099, 1101, 1103, 1107, 1110, 1112, 1114, 1117, 1120, 1122, 1124, 1127, 1130, 1133, 1136, 1138, 1140, 1143, 1146, 1148, 1152, 1154, 1156, 1159, 1162, 1164, 1166, 1169, 1172, 1175, 1178, 1180, 1182, 1185, 1188, 1191, 1193, 1195, 1197, 1199, 1202, 1204, 1207, 1210, 1212, 1214, 1216, 1218, 1222, 1225, 1227, 1229, 1232, 1235, 1237, 1239, 1242, 1245, 1248, 1251, 1253, 1255, 1258, 1261, 1263, 1267, 1269, 1271, 1274, 1277, 1279, 1281, 1284, 1287, 1290, 1293, 1295, 1297, 1300, 1303, 1305, 1309, 1311, 1313, 1316, 1319, 1321, 1323, 1326, 1329, 1332, 1335, 1337, 1339, 1342, 1345};
static int ds[590][3] = {
{64, 1},
{88, 1},
{112, 1},
{136, 1},
{160, 1},
{184, 1},
{208, 1},
{232, 1},
{256, 1},
{280, 1},
{294, 1},
{318, 1},
{342, 1},
{366, 1},
{380, 1},
{404, 1},
{428, 1},
{442, 1},
{466, 1},
{480, 1},
{64, 1},
{68, 1},
{69, 1},
{67, 1},
{71, 1},
{70, 1},
{65, 1},
{74, 1},
{74, 1},
{73, 1},
{63, 1},
{75, 1},
{62, 2},
{72, 1},
{76, 1},
{76, 1},
{62, 1},
{77, 1},
{21, 1},
{78, 1},
{79, 1},
{63, 1},
{81, 1},
{22, 1},
{82, 1},
{83, 1},
{0, 1},
{80, 1},
{84, 1},
{23, 1},
{66, 1},
{85, 1},
{88, 1},
{92, 1},
{93, 1},
{91, 1},
{95, 1},
{94, 1},
{89, 1},
{98, 1},
{98, 1},
{97, 1},
{87, 1},
{99, 1},
{86, 2},
{96, 1},
{100, 1},
{100, 1},
{86, 1},
{101, 1},
{23, 1},
{102, 1},
{103, 1},
{87, 1},
{105, 1},
{24, 1},
{106, 1},
{107, 1},
{1, 1},
{104, 1},
{108, 1},
{25, 1},
{90, 1},
{109, 1},
{112, 1},
{116, 1},
{117, 1},
{115, 1},
{119, 1},
{118, 1},
{113, 1},
{122, 1},
{122, 1},
{121, 1},
{111, 1},
{123, 1},
{110, 2},
{120, 1},
{124, 1},
{124, 1},
{110, 1},
{125, 1},
{25, 1},
{126, 1},
{127, 1},
{111, 1},
{129, 1},
{26, 1},
{130, 1},
{131, 1},
{2, 1},
{128, 1},
{132, 1},
{27, 1},
{114, 1},
{133, 1},
{136, 1},
{140, 1},
{141, 1},
{139, 1},
{143, 1},
{142, 1},
{137, 1},
{146, 1},
{146, 1},
{145, 1},
{135, 1},
{147, 1},
{134, 2},
{144, 1},
{148, 1},
{148, 1},
{134, 1},
{149, 1},
{27, 1},
{150, 1},
{151, 1},
{135, 1},
{153, 1},
{28, 1},
{154, 1},
{155, 1},
{3, 1},
{152, 1},
{156, 1},
{29, 1},
{138, 1},
{157, 1},
{160, 1},
{164, 1},
{165, 1},
{163, 1},
{167, 1},
{166, 1},
{161, 1},
{170, 1},
{170, 1},
{169, 1},
{159, 1},
{171, 1},
{158, 2},
{168, 1},
{172, 1},
{172, 1},
{158, 1},
{173, 1},
{29, 1},
{174, 1},
{175, 1},
{159, 1},
{177, 1},
{30, 1},
{178, 1},
{179, 1},
{4, 1},
{176, 1},
{180, 1},
{31, 1},
{162, 1},
{181, 1},
{184, 1},
{188, 1},
{189, 1},
{187, 1},
{191, 1},
{190, 1},
{185, 1},
{194, 1},
{194, 1},
{193, 1},
{183, 1},
{195, 1},
{182, 2},
{192, 1},
{196, 1},
{196, 1},
{182, 1},
{197, 1},
{32, 1},
{198, 1},
{199, 1},
{183, 1},
{201, 1},
{33, 1},
{202, 1},
{203, 1},
{5, 1},
{200, 1},
{204, 1},
{34, 1},
{186, 1},
{205, 1},
{208, 1},
{212, 1},
{213, 1},
{211, 1},
{215, 1},
{214, 1},
{209, 1},
{218, 1},
{218, 1},
{217, 1},
{207, 1},
{219, 1},
{206, 2},
{216, 1},
{220, 1},
{220, 1},
{206, 1},
{221, 1},
{34, 1},
{222, 1},
{223, 1},
{207, 1},
{225, 1},
{35, 1},
{226, 1},
{227, 1},
{6, 1},
{224, 1},
{228, 1},
{36, 1},
{210, 1},
{229, 1},
{232, 1},
{236, 1},
{237, 1},
{235, 1},
{239, 1},
{238, 1},
{233, 1},
{242, 1},
{242, 1},
{241, 1},
{231, 1},
{243, 1},
{230, 2},
{240, 1},
{244, 1},
{244, 1},
{230, 1},
{245, 1},
{36, 1},
{246, 1},
{247, 1},
{231, 1},
{249, 1},
{37, 1},
{250, 1},
{251, 1},
{7, 1},
{248, 1},
{252, 1},
{38, 1},
{234, 1},
{253, 1},
{256, 1},
{260, 1},
{261, 1},
{259, 1},
{263, 1},
{262, 1},
{257, 1},
{266, 1},
{266, 1},
{265, 1},
{255, 1},
{267, 1},
{254, 2},
{264, 1},
{268, 1},
{268, 1},
{254, 1},
{269, 1},
{38, 1},
{270, 1},
{271, 1},
{255, 1},
{273, 1},
{39, 1},
{274, 1},
{275, 1},
{8, 1},
{272, 1},
{276, 1},
{40, 1},
{258, 1},
{277, 1},
{280, 1},
{281, 1},
{278, 1},
{283, 1},
{31, 1},
{284, 1},
{285, 1},
{279, 1},
{287, 1},
{40, 1},
{288, 1},
{289, 1},
{9, 1},
{286, 1},
{290, 1},
{41, 1},
{282, 1},
{291, 1},
{294, 1},
{298, 1},
{299, 1},
{297, 1},
{301, 1},
{300, 1},
{295, 1},
{304, 1},
{304, 1},
{303, 1},
{293, 1},
{305, 1},
{292, 2},
{302, 1},
{306, 1},
{306, 1},
{292, 1},
{307, 1},
{42, 1},
{308, 1},
{309, 1},
{293, 1},
{311, 1},
{43, 1},
{312, 1},
{313, 1},
{10, 1},
{310, 1},
{314, 1},
{44, 1},
{296, 1},
{315, 1},
{318, 1},
{322, 1},
{323, 1},
{321, 1},
{325, 1},
{324, 1},
{319, 1},
{328, 1},
{328, 1},
{327, 1},
{317, 1},
{329, 1},
{316, 2},
{326, 1},
{330, 1},
{330, 1},
{316, 1},
{331, 1},
{44, 1},
{332, 1},
{333, 1},
{317, 1},
{335, 1},
{45, 1},
{336, 1},
{337, 1},
{11, 1},
{334, 1},
{338, 1},
{46, 1},
{320, 1},
{339, 1},
{342, 1},
{346, 1},
{347, 1},
{345, 1},
{349, 1},
{348, 1},
{343, 1},
{352, 1},
{352, 1},
{351, 1},
{341, 1},
{353, 1},
{340, 2},
{350, 1},
{354, 1},
{354, 1},
{340, 1},
{355, 1},
{46, 1},
{356, 1},
{357, 1},
{341, 1},
{359, 1},
{47, 1},
{360, 1},
{361, 1},
{12, 1},
{358, 1},
{362, 1},
{48, 1},
{344, 1},
{363, 1},
{366, 1},
{367, 1},
{364, 1},
{369, 1},
{48, 1},
{370, 1},
{371, 1},
{365, 1},
{373, 1},
{41, 1},
{374, 1},
{375, 1},
{13, 1},
{372, 1},
{376, 1},
{49, 1},
{368, 1},
{377, 1},
{380, 1},
{384, 1},
{385, 1},
{383, 1},
{387, 1},
{386, 1},
{381, 1},
{390, 1},
{390, 1},
{389, 1},
{379, 1},
{391, 1},
{378, 2},
{388, 1},
{392, 1},
{392, 1},
{378, 1},
{393, 1},
{50, 1},
{394, 1},
{395, 1},
{379, 1},
{397, 1},
{51, 1},
{398, 1},
{399, 1},
{14, 1},
{396, 1},
{400, 1},
{52, 1},
{382, 1},
{401, 1},
{404, 1},
{408, 1},
{409, 1},
{407, 1},
{411, 1},
{410, 1},
{405, 1},
{414, 1},
{414, 1},
{413, 1},
{403, 1},
{415, 1},
{402, 2},
{412, 1},
{416, 1},
{416, 1},
{402, 1},
{417, 1},
{52, 1},
{418, 1},
{419, 1},
{403, 1},
{421, 1},
{53, 1},
{422, 1},
{423, 1},
{15, 1},
{420, 1},
{424, 1},
{54, 1},
{406, 1},
{425, 1},
{428, 1},
{429, 1},
{426, 1},
{431, 1},
{54, 1},
{432, 1},
{433, 1},
{427, 1},
{435, 1},
{49, 1},
{436, 1},
{437, 1},
{16, 1},
{434, 1},
{438, 1},
{55, 1},
{430, 1},
{439, 1},
{442, 1},
{446, 1},
{447, 1},
{445, 1},
{449, 1},
{448, 1},
{443, 1},
{452, 1},
{452, 1},
{451, 1},
{441, 1},
{453, 1},
{440, 2},
{450, 1},
{454, 1},
{454, 1},
{440, 1},
{455, 1},
{56, 1},
{456, 1},
{457, 1},
{441, 1},
{459, 1},
{57, 1},
{460, 1},
{461, 1},
{17, 1},
{458, 1},
{462, 1},
{58, 1},
{444, 1},
{463, 1},
{466, 1},
{467, 1},
{464, 1},
{469, 1},
{58, 1},
{470, 1},
{471, 1},
{465, 1},
{473, 1},
{55, 1},
{474, 1},
{475, 1},
{18, 1},
{472, 1},
{476, 1},
{59, 1},
{468, 1},
{477, 1},
{480, 1},
{481, 1},
{478, 1},
{483, 1},
{59, 1},
{484, 1},
{485, 1},
{479, 1},
{487, 1},
{60, 1},
{488, 1},
{489, 1},
{19, 1},
{486, 1},
{490, 1},
{61, 1},
{482, 1},
{491, 1}};
static int tds[536] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 21, 22, 23, 24, 25, 26, 28, 29, 30, 31, 32, 33, 35, 36, 38, 39, 40, 41, 43, 44, 45, 46, 47, 49, 50, 50, 51, 52, 53, 53, 54, 55, 56, 57, 58, 60, 61, 62, 63, 64, 65, 67, 68, 70, 71, 72, 73, 75, 76, 77, 78, 79, 81, 82, 82, 83, 84, 85, 85, 86, 87, 88, 89, 90, 92, 93, 94, 95, 96, 97, 99, 100, 102, 103, 104, 105, 107, 108, 109, 110, 111, 113, 114, 114, 115, 116, 117, 117, 118, 119, 120, 121, 122, 124, 125, 126, 127, 128, 129, 131, 132, 134, 135, 136, 137, 139, 140, 141, 142, 143, 145, 146, 146, 147, 148, 149, 149, 150, 151, 152, 153, 154, 156, 157, 158, 159, 160, 161, 163, 164, 166, 167, 168, 169, 171, 172, 173, 174, 175, 177, 178, 178, 179, 180, 181, 181, 182, 183, 184, 185, 186, 188, 189, 190, 191, 192, 193, 195, 196, 198, 199, 200, 201, 203, 204, 205, 206, 207, 209, 210, 210, 211, 212, 213, 213, 214, 215, 216, 217, 218, 220, 221, 222, 223, 224, 225, 227, 228, 230, 231, 232, 233, 235, 236, 237, 238, 239, 241, 242, 242, 243, 244, 245, 245, 246, 247, 248, 249, 250, 252, 253, 254, 255, 256, 257, 259, 260, 262, 263, 264, 265, 267, 268, 269, 270, 271, 273, 274, 274, 275, 276, 277, 277, 278, 279, 280, 281, 282, 284, 285, 286, 287, 288, 289, 291, 292, 294, 295, 296, 297, 299, 300, 301, 302, 303, 305, 306, 306, 307, 308, 309, 310, 312, 313, 314, 315, 317, 318, 319, 320, 321, 323, 324, 324, 325, 326, 327, 327, 328, 329, 330, 331, 332, 334, 335, 336, 337, 338, 339, 341, 342, 344, 345, 346, 347, 349, 350, 351, 352, 353, 355, 356, 356, 357, 358, 359, 359, 360, 361, 362, 363, 364, 366, 367, 368, 369, 370, 371, 373, 374, 376, 377, 378, 379, 381, 382, 383, 384, 385, 387, 388, 388, 389, 390, 391, 391, 392, 393, 394, 395, 396, 398, 399, 400, 401, 402, 403, 405, 406, 408, 409, 410, 411, 413, 414, 415, 416, 417, 419, 420, 420, 421, 422, 423, 424, 426, 427, 428, 429, 431, 432, 433, 434, 435, 437, 438, 438, 439, 440, 441, 441, 442, 443, 444, 445, 446, 448, 449, 450, 451, 452, 453, 455, 456, 458, 459, 460, 461, 463, 464, 465, 466, 467, 469, 470, 470, 471, 472, 473, 473, 474, 475, 476, 477, 478, 480, 481, 482, 483, 484, 485, 487, 488, 490, 491, 492, 493, 495, 496, 497, 498, 499, 501, 502, 502, 503, 504, 505, 506, 508, 509, 510, 511, 513, 514, 515, 516, 517, 519, 520, 520, 521, 522, 523, 523, 524, 525, 526, 527, 528, 530, 531, 532, 533, 534, 535, 537, 538, 540, 541, 542, 543, 545, 546, 547, 548, 549, 551, 552, 552, 553, 554, 555, 556, 558, 559, 560, 561, 563, 564, 565, 566, 567, 569, 570, 570, 571, 572, 573, 574, 576, 577, 578, 579, 581, 582, 583, 584, 585, 587, 588, 588, 589, 590};
static int rs[135][3] = {
{0,  1},
{22,  1},
{24,  1},
{26,  1},
{29,  1},
{29,  1},
{31,  1},
{33,  1},
{34,  1},
{1,  1},
{51,  1},
{53,  1},
{55,  1},
{58,  1},
{58,  1},
{60,  1},
{62,  1},
{63,  1},
{2,  1},
{80,  1},
{82,  1},
{84,  1},
{87,  1},
{87,  1},
{89,  1},
{91,  1},
{92,  1},
{3,  1},
{109,  1},
{111,  1},
{113,  1},
{116,  1},
{116,  1},
{118,  1},
{120,  1},
{121,  1},
{4,  1},
{138,  1},
{140,  1},
{142,  1},
{145,  1},
{145,  1},
{147,  1},
{149,  1},
{150,  1},
{5,  1},
{167,  1},
{169,  1},
{171,  1},
{174,  1},
{174,  1},
{176,  1},
{178,  1},
{179,  1},
{6,  1},
{196,  1},
{198,  1},
{200,  1},
{203,  1},
{203,  1},
{205,  1},
{207,  1},
{208,  1},
{7,  1},
{225,  1},
{227,  1},
{229,  1},
{232,  1},
{232,  1},
{234,  1},
{236,  1},
{237,  1},
{8,  1},
{254,  1},
{256,  1},
{258,  1},
{261,  1},
{261,  1},
{263,  1},
{265,  1},
{266,  1},
{10,  1},
{299,  1},
{301,  1},
{303,  1},
{306,  1},
{306,  1},
{308,  1},
{310,  1},
{311,  1},
{11,  1},
{328,  1},
{330,  1},
{332,  1},
{335,  1},
{335,  1},
{337,  1},
{339,  1},
{340,  1},
{12,  1},
{357,  1},
{359,  1},
{361,  1},
{364,  1},
{364,  1},
{366,  1},
{368,  1},
{369,  1},
{14,  1},
{402,  1},
{404,  1},
{406,  1},
{409,  1},
{409,  1},
{411,  1},
{413,  1},
{414,  1},
{15,  1},
{431,  1},
{433,  1},
{435,  1},
{438,  1},
{438,  1},
{440,  1},
{442,  1},
{443,  1},
{17,  1},
{476,  1},
{478,  1},
{480,  1},
{483,  1},
{483,  1},
{485,  1},
{487,  1},
{488,  1}};
static int trs[536] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 2, 2, 3, 3, 4, 4, 5, 6, 6, 7, 7, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 10, 11, 11, 12, 12, 13, 13, 14, 15, 15, 16, 16, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 19, 20, 20, 21, 21, 22, 22, 23, 24, 24, 25, 25, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 28, 29, 29, 30, 30, 31, 31, 32, 33, 33, 34, 34, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 37, 38, 38, 39, 39, 40, 40, 41, 42, 42, 43, 43, 45, 45, 45, 45, 45, 45, 45, 45, 45, 45, 45, 45, 45, 45, 45, 45, 45, 46, 47, 47, 48, 48, 49, 49, 50, 51, 51, 52, 52, 54, 54, 54, 54, 54, 54, 54, 54, 54, 54, 54, 54, 54, 54, 54, 54, 54, 55, 56, 56, 57, 57, 58, 58, 59, 60, 60, 61, 61, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 64, 65, 65, 66, 66, 67, 67, 68, 69, 69, 70, 70, 72, 72, 72, 72, 72, 72, 72, 72, 72, 72, 72, 72, 72, 72, 72, 72, 72, 73, 74, 74, 75, 75, 76, 76, 77, 78, 78, 79, 79, 81, 81, 81, 81, 81, 81, 81, 81, 81, 81, 81, 81, 81, 81, 81, 81, 81, 81, 81, 81, 81, 81, 81, 81, 81, 81, 81, 81, 81, 81, 81, 81, 81, 82, 83, 83, 84, 84, 85, 85, 86, 87, 87, 88, 88, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 91, 92, 92, 93, 93, 94, 94, 95, 96, 96, 97, 97, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 100, 101, 101, 102, 102, 103, 103, 104, 105, 105, 106, 106, 108, 108, 108, 108, 108, 108, 108, 108, 108, 108, 108, 108, 108, 108, 108, 108, 108, 108, 108, 108, 108, 108, 108, 108, 108, 108, 108, 108, 108, 108, 108, 108, 108, 109, 110, 110, 111, 111, 112, 112, 113, 114, 114, 115, 115, 117, 117, 117, 117, 117, 117, 117, 117, 117, 117, 117, 117, 117, 117, 117, 117, 117, 118, 119, 119, 120, 120, 121, 121, 122, 123, 123, 124, 124, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 127, 128, 128, 129, 129, 130, 130, 131, 132, 132, 133, 133, 135, 135, 135, 135, 135, 135, 135, 135, 135, 135, 135, 135, 135, 135, 135, 135, 135, 135, 135, 135, 135, 135, 135, 135, 135, 135, 135, 135, 135, 135, 135, 135, 135, 135, 135, 135, 135, 135, 135, 135, 135, 135, 135, 135, 135, 135, 135, 135, 135};
static int mu[492] = {0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 8, 2, 0, 2, 0, 2, 0, 2, 0, 2, 0, 5, 2, 0, 2, 0, 2, 0, 2, 0, 0, 1, 2, 0, 2, 0, 2, 0, 0, 10, 2, 0, 2, 0, 0, 5, 2, 0, 0, 9, 0, 0, 0, 1, 0, 1, 1, 1, 0, 1, 0, 1, 1, 0, 1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 1, 0, 0, 1, 0, 1, 1, 1, 0, 1, 0, 1, 1, 0, 1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 1, 0, 0, 1, 0, 1, 1, 1, 0, 1, 0, 1, 1, 0, 1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 1, 0, 0, 1, 0, 1, 1, 1, 0, 1, 0, 1, 1, 0, 1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 1, 0, 0, 1, 0, 1, 1, 1, 0, 1, 0, 1, 1, 0, 1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 1, 0, 0, 1, 0, 1, 1, 1, 0, 1, 0, 1, 1, 0, 1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 1, 0, 0, 1, 0, 1, 1, 1, 0, 1, 0, 1, 1, 0, 1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 1, 0, 0, 1, 0, 1, 1, 1, 0, 1, 0, 1, 1, 0, 1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 1, 0, 0, 1, 0, 1, 1, 1, 0, 1, 0, 1, 1, 0, 1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 1, 0, 0, 0, 1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 1, 0, 0, 1, 0, 1, 1, 1, 0, 1, 0, 1, 1, 0, 1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 1, 0, 0, 1, 0, 1, 1, 1, 0, 1, 0, 1, 1, 0, 1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 1, 0, 0, 1, 0, 1, 1, 1, 0, 1, 0, 1, 1, 0, 1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 1, 0, 0, 0, 1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 1, 0, 0, 1, 0, 1, 1, 1, 0, 1, 0, 1, 1, 0, 1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 1, 0, 0, 1, 0, 1, 1, 1, 0, 1, 0, 1, 1, 0, 1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 1, 0, 0, 0, 1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 1, 0, 0, 1, 0, 1, 1, 1, 0, 1, 0, 1, 1, 0, 1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 1, 0, 0, 0, 1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 1, 0, 0, 0, 1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 1};
static int vector[535] = {20, 21, 23, 25, 27, 28, 30, 32, 49, 50, 52, 54, 56, 57, 59, 61, 78, 79, 81, 83, 85, 86, 88, 90, 107, 108, 110, 112, 114, 115, 117, 119, 136, 137, 139, 141, 143, 144, 146, 148, 165, 166, 168, 170, 172, 173, 175, 177, 194, 195, 197, 199, 201, 202, 204, 206, 223, 224, 226, 228, 230, 231, 233, 235, 252, 253, 255, 257, 259, 260, 262, 264, 297, 298, 300, 302, 304, 305, 307, 309, 326, 327, 329, 331, 333, 334, 336, 338, 355, 356, 358, 360, 362, 363, 365, 367, 400, 401, 403, 405, 407, 408, 410, 412, 429, 430, 432, 434, 436, 437, 439, 441, 474, 475, 477, 479, 481, 482, 484, 486, 0, 1, 2, 3, 4, 5, 6, 7, 8, 10, 11, 12, 14, 15, 17, 22, 24, 26, 29, 31, 33, 34, 51, 53, 55, 58, 60, 62, 63, 80, 82, 84, 87, 89, 91, 92, 109, 111, 113, 116, 118, 120, 121, 138, 140, 142, 145, 147, 149, 150, 167, 169, 171, 174, 176, 178, 179, 196, 198, 200, 203, 205, 207, 208, 225, 227, 229, 232, 234, 236, 237, 254, 256, 258, 261, 263, 265, 266, 299, 301, 303, 306, 308, 310, 311, 328, 330, 332, 335, 337, 339, 340, 357, 359, 361, 364, 366, 368, 369, 402, 404, 406, 409, 411, 413, 414, 431, 433, 435, 438, 440, 442, 443, 476, 478, 480, 483, 485, 487, 488, 9, 13, 16, 18, 19, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 267, 268, 269, 270, 271, 272, 273, 274, 275, 276, 277, 278, 279, 280, 281, 282, 283, 284, 285, 286, 287, 288, 289, 290, 291, 292, 293, 294, 295, 296, 312, 313, 314, 315, 316, 317, 318, 319, 320, 321, 322, 323, 324, 325, 341, 342, 343, 344, 345, 346, 347, 348, 349, 350, 351, 352, 353, 354, 370, 371, 372, 373, 374, 375, 376, 377, 378, 379, 380, 381, 382, 383, 384, 385, 386, 387, 388, 389, 390, 391, 392, 393, 394, 395, 396, 397, 398, 399, 415, 416, 417, 418, 419, 420, 421, 422, 423, 424, 425, 426, 427, 428, 444, 445, 446, 447, 448, 449, 450, 451, 452, 453, 454, 455, 456, 457, 458, 459, 460, 461, 462, 463, 464, 465, 466, 467, 468, 469, 470, 471, 472, 473, 489, 490, 491, 492, 493, 494, 495, 496, 497, 498, 499, 500, 501, 502, 503, 504, 505, 506, 507, 508, 509, 510, 511, 512, 513, 514, 515, 516, 517, 518, 519, 520, 521, 522, 523, 524, 525, 526, 527, 528, 529, 530, 531, 532, 533, 534};
