// Sleptsov-net in sparse matrix format
#define m 15
#define n 16
#define KB 39
#define KD 17
#define KR 9
static int bs[39][2] = {
{0, 2},
{1, 1},
{2, 1},
{1, 1},
{3, 2},
{0, 1},
{14, 2},
{0, 1},
{13, 2},
{2, 3},
{3, 1},
{3, 1},
{4, 2},
{2, 2},
{4, 1},
{10, 2},
{4, 1},
{5, 2},
{5, 1},
{10, 1},
{14, 2},
{5, 1},
{11, 1},
{14, 2},
{5, 1},
{6, 2},
{6, 1},
{9, 2},
{6, 1},
{7, 2},
{7, 1},
{12, 2},
{1, 2},
{7, 1},
{10, 1},
{11, 2},
{1, 2},
{7, 1},
{11, 1}};
static int tbs[17] = {0, 3, 5, 7, 9, 11, 13, 16, 18, 21, 24, 26, 28, 30, 32, 36, 39};
static int ds[17][2] = {
{1, 1},
{1, 1},
{0, 1},
{9, 1},
{3, 1},
{11, 1},
{4, 1},
{8, 1},
{12, 1},
{12, 1},
{5, 1},
{2, 1},
{6, 1},
{14, 2},
{7, 1},
{10, 1},
{7, 1}};
static int tds[17] = {0, 1, 2, 2, 3, 4, 5, 6, 7, 9, 10, 11, 12, 13, 14, 16, 17};
static int mu[15] = {1, 0, 2, 1, 1, 1, 1, 1, 0, 0, 1, 0, 0, 1, 8};
static int v_per[16] = {0, 2, 4, 6, 8, 9, 11, 13, 1, 3, 5, 7, 10, 12, 14, 15};
