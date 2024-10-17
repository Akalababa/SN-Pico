// Sleptsov-net in sparse matrix format
#define m 5
#define n 3
#define KB 8
#define KD 3
#define KR 0
static int bs[8][2] = {
{2, -1},
{4, 1},
{2, -1},
{3, 1},
{1, 1},
{2, -1},
{3, -1},
{4, -1}};
static int tbs[4] = {0, 2, 4, 8};
static int ds[3][2] = {
{0, 1},
{0, 1},
{2, 1}};
static int tds[4] = {0, 1, 2, 3};
static int mu[5] = {0, 1, 0, 5, 10};
