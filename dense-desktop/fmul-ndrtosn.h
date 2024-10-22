// SN obtained from NDR
#define m 15
#define n 16
// incoming arcs of transitions
static short int b[15][16]=
{
{1,0,-1,-1,0,0,0,0,0,0,0,0,0,0,0,0},
{-1,-1,0,0,0,0,0,0,0,0,0,0,0,0,1,1},
{-1,0,0,0,2,0,1,0,0,0,0,0,0,0,0,0},
{0,1,0,0,-1,-1,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,1,-1,-1,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,1,-1,-1,-1,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,1,-1,-1,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,1,-1,-1,-1},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0},
{0,0,0,0,0,0,1,0,-1,0,0,0,0,0,-1,0},
{0,0,0,0,0,0,0,0,0,-1,0,0,0,0,1,-1},
{0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0},
{0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,1,0,0,0,0,0,1,1,0,0,0,0,0,0}
};
// outgoing arcs of transitions
static short int d[15][16]=
{
{0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0},
{1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0},
{0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1},
{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0},
{0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0},
{0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,2,0,0}
};
// priority arcs connecting transitions
static short int r[16][16]=
{
{0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}
};
// initial marking
static short int mu[15]={1,0,2,1,1,1,1,1,0,0,1,0,0,1,8};
// Table of places
// no	name
// 0	p7
// 1	p3
// 2	p2
// 3	p6
// 4	p9
// 5	p12
// 6	p14
// 7	p15
// 8	p4
// 9	p8
// 10	p11
// 11	p10
// 12	p13
// 13	p5
// 14	p1
// Table of transitions
// no	name
// 0	t1
// 1	t2
// 2	t3
// 3	t4
// 4	t5
// 5	t6
// 6	t7
// 7	t8
// 8	t9
// 9	t10
// 10	t11
// 11	t12
// 12	t13
// 13	t14
// 14	t15
// 15	t16
// end of SN


