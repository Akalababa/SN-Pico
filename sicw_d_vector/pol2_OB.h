// Sleptsov-net in sparse matrix format
#define m 117
#define n 124
#define KB 313
#define KD 137
#define KR 27
static int bs[313][2] = {
{19, -1},
{22, 1},
{43, -1},
{46, 1},
{67, -1},
{70, 1},
{89, 1},
{92, -1},
{103, 1},
{106, -1},
{18, -1},
{19, -1},
{23, 1},
{17, 1},
{23, -1},
{21, 1},
{23, -1},
{18, 2},
{22, -1},
{22, -1},
{25, 1},
{18, 1},
{25, -1},
{27, 1},
{25, -1},
{28, 1},
{17, 1},
{27, -1},
{28, -1},
{17, 1},
{26, -1},
{28, -1},
{28, -1},
{30, 1},
{24, 1},
{30, -1},
{30, -1},
{31, 1},
{29, 1},
{31, -1},
{19, 1},
{26, 1},
{27, -1},
{31, -1},
{19, 1},
{26, -1},
{31, -1},
{6, 1},
{33, -1},
{32, 1},
{34, -1},
{6, -1},
{33, -1},
{34, 1},
{32, -1},
{34, -1},
{35, 1},
{7, 1},
{37, -1},
{36, 1},
{38, -1},
{7, -1},
{37, -1},
{38, 1},
{36, -1},
{38, -1},
{39, 1},
{0, -1},
{33, 1},
{37, 1},
{19, 1},
{35, -1},
{39, -1},
{20, 1},
{40, -1},
{8, 1},
{21, -1},
{8, -1},
{21, -1},
{40, 1},
{1, 1},
{20, -1},
{40, -1},
{42, -1},
{43, -1},
{47, 1},
{41, 1},
{47, -1},
{45, 1},
{47, -1},
{42, 2},
{46, -1},
{46, -1},
{49, 1},
{42, 1},
{49, -1},
{51, 1},
{49, -1},
{52, 1},
{41, 1},
{51, -1},
{52, -1},
{41, 1},
{50, -1},
{52, -1},
{52, -1},
{54, 1},
{48, 1},
{54, -1},
{54, -1},
{55, 1},
{53, 1},
{55, -1},
{43, 1},
{50, 1},
{51, -1},
{55, -1},
{43, 1},
{50, -1},
{55, -1},
{8, 1},
{57, -1},
{56, 1},
{58, -1},
{8, -1},
{57, -1},
{58, 1},
{56, -1},
{58, -1},
{59, 1},
{9, 1},
{61, -1},
{60, 1},
{62, -1},
{9, -1},
{61, -1},
{62, 1},
{60, -1},
{62, -1},
{63, 1},
{1, -1},
{57, 1},
{61, 1},
{43, 1},
{59, -1},
{63, -1},
{44, 1},
{64, -1},
{10, 1},
{45, -1},
{10, -1},
{45, -1},
{64, 1},
{2, 1},
{44, -1},
{64, -1},
{66, -1},
{67, -1},
{71, 1},
{65, 1},
{71, -1},
{69, 1},
{71, -1},
{66, 2},
{70, -1},
{70, -1},
{73, 1},
{66, 1},
{73, -1},
{75, 1},
{73, -1},
{76, 1},
{65, 1},
{75, -1},
{76, -1},
{65, 1},
{74, -1},
{76, -1},
{76, -1},
{78, 1},
{72, 1},
{78, -1},
{78, -1},
{79, 1},
{77, 1},
{79, -1},
{67, 1},
{74, 1},
{75, -1},
{79, -1},
{67, 1},
{74, -1},
{79, -1},
{11, 1},
{81, -1},
{80, 1},
{82, -1},
{11, -1},
{81, -1},
{82, 1},
{80, -1},
{82, -1},
{83, 1},
{12, 1},
{85, -1},
{84, 1},
{86, -1},
{12, -1},
{85, -1},
{86, 1},
{84, -1},
{86, -1},
{87, 1},
{2, -1},
{81, 1},
{85, 1},
{67, 1},
{83, -1},
{87, -1},
{68, 1},
{88, -1},
{13, 1},
{69, -1},
{13, -1},
{69, -1},
{88, 1},
{3, 1},
{68, -1},
{88, -1},
{90, 1},
{92, -1},
{89, -1},
{90, -1},
{92, -1},
{93, 1},
{10, 1},
{95, -1},
{94, 1},
{96, -1},
{10, -1},
{95, -1},
{96, 1},
{94, -1},
{96, -1},
{97, 1},
{13, 1},
{99, -1},
{98, 1},
{100, -1},
{13, -1},
{99, -1},
{100, 1},
{98, -1},
{100, -1},
{101, 1},
{3, -1},
{95, 1},
{99, 1},
{92, 1},
{97, -1},
{101, -1},
{91, 1},
{102, -1},
{14, 1},
{93, -1},
{14, -1},
{93, -1},
{102, 1},
{4, 1},
{91, -1},
{102, -1},
{104, 1},
{106, -1},
{103, -1},
{104, -1},
{106, -1},
{107, 1},
{14, 1},
{109, -1},
{108, 1},
{110, -1},
{14, -1},
{109, -1},
{110, 1},
{108, -1},
{110, -1},
{111, 1},
{15, 1},
{113, -1},
{112, 1},
{114, -1},
{15, -1},
{113, -1},
{114, 1},
{112, -1},
{114, -1},
{115, 1},
{4, -1},
{109, 1},
{113, 1},
{106, 1},
{111, -1},
{115, -1},
{105, 1},
{116, -1},
{16, 1},
{107, -1},
{16, -1},
{107, -1},
{116, 1},
{5, 1},
{105, -1},
{116, -1}};
static int tbs[125] = {0, 2, 4, 6, 8, 10, 13, 15, 17, 19, 21, 24, 26, 29, 32, 34, 36, 38, 40, 44, 47, 49, 51, 54, 57, 59, 61, 64, 67, 70, 73, 75, 77, 80, 83, 86, 88, 90, 92, 94, 97, 99, 102, 105, 107, 109, 111, 113, 117, 120, 122, 124, 127, 130, 132, 134, 137, 140, 143, 146, 148, 150, 153, 156, 159, 161, 163, 165, 167, 170, 172, 175, 178, 180, 182, 184, 186, 190, 193, 195, 197, 200, 203, 205, 207, 210, 213, 216, 219, 221, 223, 226, 229, 231, 235, 237, 239, 242, 245, 247, 249, 252, 255, 258, 261, 263, 265, 268, 271, 273, 277, 279, 281, 284, 287, 289, 291, 294, 297, 300, 303, 305, 307, 310, 313};
static int ds[137][2] = {
{19, 1},
{43, 1},
{67, 1},
{91, 1},
{105, 1},
{19, 1},
{23, 1},
{24, 1},
{22, 1},
{26, 1},
{25, 1},
{20, 1},
{29, 1},
{29, 1},
{28, 1},
{18, 1},
{30, 1},
{17, 2},
{27, 1},
{31, 1},
{31, 1},
{17, 1},
{32, 1},
{6, 1},
{33, 1},
{34, 1},
{18, 1},
{36, 1},
{7, 1},
{37, 1},
{38, 1},
{0, 1},
{35, 1},
{39, 1},
{8, 1},
{21, 1},
{40, 1},
{43, 1},
{47, 1},
{48, 1},
{46, 1},
{50, 1},
{49, 1},
{44, 1},
{53, 1},
{53, 1},
{52, 1},
{42, 1},
{54, 1},
{41, 2},
{51, 1},
{55, 1},
{55, 1},
{41, 1},
{56, 1},
{8, 1},
{57, 1},
{58, 1},
{42, 1},
{60, 1},
{9, 1},
{61, 1},
{62, 1},
{1, 1},
{59, 1},
{63, 1},
{10, 1},
{45, 1},
{64, 1},
{67, 1},
{71, 1},
{72, 1},
{70, 1},
{74, 1},
{73, 1},
{68, 1},
{77, 1},
{77, 1},
{76, 1},
{66, 1},
{78, 1},
{65, 2},
{75, 1},
{79, 1},
{79, 1},
{65, 1},
{80, 1},
{11, 1},
{81, 1},
{82, 1},
{66, 1},
{84, 1},
{12, 1},
{85, 1},
{86, 1},
{2, 1},
{83, 1},
{87, 1},
{13, 1},
{69, 1},
{88, 1},
{91, 1},
{92, 1},
{89, 1},
{94, 1},
{10, 1},
{95, 1},
{96, 1},
{90, 1},
{98, 1},
{13, 1},
{99, 1},
{100, 1},
{3, 1},
{97, 1},
{101, 1},
{14, 1},
{93, 1},
{102, 1},
{105, 1},
{106, 1},
{103, 1},
{108, 1},
{14, 1},
{109, 1},
{110, 1},
{104, 1},
{112, 1},
{15, 1},
{113, 1},
{114, 1},
{4, 1},
{111, 1},
{115, 1},
{16, 1},
{107, 1},
{116, 1}};
static int tds[125] = {0, 1, 2, 3, 4, 5, 6, 6, 7, 8, 9, 10, 11, 13, 14, 15, 16, 17, 18, 20, 21, 23, 24, 25, 26, 28, 29, 30, 31, 32, 34, 35, 35, 36, 37, 38, 38, 39, 40, 41, 42, 43, 45, 46, 47, 48, 49, 50, 52, 53, 55, 56, 57, 58, 60, 61, 62, 63, 64, 66, 67, 67, 68, 69, 70, 70, 71, 72, 73, 74, 75, 77, 78, 79, 80, 81, 82, 84, 85, 87, 88, 89, 90, 92, 93, 94, 95, 96, 98, 99, 99, 100, 101, 102, 103, 105, 106, 107, 108, 110, 111, 112, 113, 114, 116, 117, 117, 118, 119, 120, 121, 123, 124, 125, 126, 128, 129, 130, 131, 132, 134, 135, 135, 136, 137};
static int rs[27][2] = {
{0, 1},
{7, 1},
{9, 1},
{11, 1},
{14, 1},
{14, 1},
{16, 1},
{18, 1},
{19, 1},
{1, 1},
{36, 1},
{38, 1},
{40, 1},
{43, 1},
{43, 1},
{45, 1},
{47, 1},
{48, 1},
{2, 1},
{65, 1},
{67, 1},
{69, 1},
{72, 1},
{72, 1},
{74, 1},
{76, 1},
{77, 1}};
static int trs[125] = {0, 0, 0, 0, 0, 0, 1, 2, 2, 3, 3, 4, 4, 5, 6, 6, 7, 7, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 10, 11, 11, 12, 12, 13, 13, 14, 15, 15, 16, 16, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 19, 20, 20, 21, 21, 22, 22, 23, 24, 24, 25, 25, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27};
static int mu[117] = {0, 1, 1, 1, 1, 1, 8, 2, 0, 2, 0, 5, 2, 0, 0, 1, 0, 0, 0, 1, 0, 1, 1, 1, 0, 1, 0, 1, 1, 0, 1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 1, 0, 0, 1, 0, 1, 1, 1, 0, 1, 0, 1, 1, 0, 1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 1, 0, 0, 1, 0, 1, 1, 1, 0, 1, 0, 1, 1, 0, 1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 1, 0, 0, 0, 1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 1, 0, 0, 0, 1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 1};
static int vector[124] = {3, 4, 5, 6, 8, 10, 12, 13, 15, 17, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 37, 39, 41, 42, 44, 46, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 66, 68, 70, 71, 73, 75, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 0, 1, 2, 7, 9, 11, 14, 16, 18, 19, 36, 38, 40, 43, 45, 47, 48, 65, 67, 69, 72, 74, 76, 77};
