#include "raylib.h"
#include "const.h"

typedef struct 
{
    signed short seed[504];
    signed short revealed[20];
    signed short flagged[13];
    signed short layout;
} Levels;

Levels level[12] = {
    {
        {
        0,0,0,0,0,0,0,0,0,0,0,0,0,0,
        0,7,7,0,0,0,0,0,0,0,-1,-1,0,0,
        0,7,6,7,0,0,0,0,0,0,-1,-1,-1,0,
        0,7,7,0,0,0,-1,0,0,0,-1,-1,0,0,
        0,0,0,0,0,0,0,-1,0,0,0,0,0,0,
        0,0,0,0,0,0,1,0,0,0,0,0,0,0,
        0,0,0,0,0,0,0,7,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0,0,0,0,0,0,0
},
        {30,39,48,30,30,30,30,30,30,30,30,30,30,-1,-1,-1,-1,-1,-1,-1},
        {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
        0
    },
    {
        {
        0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
        0,0,0,7,2,7,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
        0,0,0,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
        0,0,7,2,7,2,7,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
        0,0,0,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
        0,0,0,7,2,7,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,7,2,0,0,0,
        0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,7,7,0,0,0,
        0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,7,3,5,7,1,0,0,
        0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,7,7,0,0,0,
        0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,7,2,0,0,0,
        0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        },
        {217,215,172,170,258,260,93,48,69,70,113,114,136,-1,-1,-1,-1,-1,-1,-1},
        {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
        1
    },
    {
        {
        0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
        0,0,0,0,0,0,1,-1,0,0,0,0,0,0,1,-1,0,0,0,0,0,0,
        0,0,0,0,0,0,7,1,0,0,0,0,0,0,7,0,-1,0,0,0,0,0,
        0,0,0,0,0,0,0,0,0,0,0,0,0,2,0,1,-1,0,0,0,0,0,
        0,0,0,0,0,0,0,0,0,0,0,0,0,7,2,7,1,0,0,0,0,0,
        0,0,0,0,0,0,1,0,0,0,0,0,0,1,2,2,0,0,0,0,0,0,
        0,0,0,0,0,0,0,7,1,0,0,0,0,0,0,7,1,0,0,0,0,0,
        0,0,0,0,0,0,2,2,0,0,0,0,0,0,2,0,0,0,0,0,0,0,
        0,0,0,0,0,0,0,7,1,0,0,0,0,0,1,7,1,0,0,0,0,0,
        0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,7,1,0,0,0,0,0,
        0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        },
        {29,116,140,160,184,79,102,82,104,168,190,213,29,-1,-1,-1,-1,-1,-1,-1},
        {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
        1
    },
    {
        {
        0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0,7,3,7,0,1,0,0,0,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0,7,4,7,4,7,1,0,0,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0,7,3,7,2,1,0,0,0,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0,0,1,2,2,1,0,0,0,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0,1,2,7,3,7,0,0,0,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0,7,2,7,7,3,0,0,0,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0,1,2,7,3,7,0,0,0,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0,0,1,2,2,1,0,0,0,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0,7,3,7,2,1,0,0,0,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0,7,4,7,4,7,1,0,0,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0,7,0,7,0,1,0,0,0,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        },
        {31,53,55,77,97,121,141,144,162,165,209,231,231,-1,-1,-1,-1,-1,-1,-1},
        {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
        1
    },
    {
        {
        0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0,0,1,7,0,0,0,0,0,0,0,0,0,0,0,
        0,0,0,0,0,0,0,-1,-1,-1,3,7,0,7,0,0,0,0,0,0,0,0,
        0,0,0,0,0,0,-1,0,0,1,7,0,0,2,0,7,0,0,0,0,0,0,
        0,0,0,0,0,0,1,0,0,0,0,0,0,7,2,2,0,0,0,0,0,0,
        0,0,0,0,0,7,2,0,0,0,0,0,0,2,7,0,0,0,0,0,0,0,
        0,0,0,0,0,0,3,7,0,0,0,0,0,0,1,0,0,0,0,0,0,0,
        0,0,0,0,0,7,3,7,0,-1,1,0,0,0,-1,0,0,0,0,0,0,0,
        0,0,0,0,0,0,2,0,0,-1,1,7,1,-1,-1,0,0,0,0,0,0,0,
        0,0,0,0,0,0,7,0,0,-1,1,0,0,0,0,0,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        },
        {230,226,204,182,147,147,147,147,147,147,147,147,147,-1,-1,-1,-1,-1,-1,-1},
        {248,159,145,168,125,-1,-1,-1,-1,-1,-1,-1,-1},
        1
    },
    {
        {
        0,0,0,0,0,0,0,0,0,0,40,-1,0,0,
        0,0,0,0,0,0,0,0,0,1,-1,1,0,0,
        0,0,0,0,0,0,0,43,7,7,1,2,7,0,
        0,0,0,0,0,0,0,0,0,1,1,7,0,0,
        0,0,0,0,0,0,0,0,0,40,-1,0,0,0,
        0,0,0,0,0,0,0,7,3,0,0,0,0,0,
        0,0,0,0,0,43,7,4,7,7,0,0,0,0,
        0,0,0,0,0,0,42,7,4,7,0,0,0,0
        },
        {104,89,65,35,10,91,78,106,106,106,106,106,106,-1,-1,-1,-1,-1,-1,-1},
        {248,159,145,168,125,-1,-1,-1,-1,-1,-1,-1,-1},
        0
    },
    {
        {
        0,0,0,0,0,0,0,0,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0,0,0,0,0,0,0,
        0,0,53,1,7,0,7,7,1,0,-1,-1,0,0,
        0,0,0,0,0,0,0,0,0,0,0,0,0,0,
        0,0,0,0,41,1,2,3,7,0,0,0,0,0,
        0,0,0,54,1,7,7,7,7,0,0,0,0,0,
        0,0,0,0,42,2,7,7,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0,0,0,0,0,0,0
        },
        {31,30,62,60,73,88,31,31,31,31,31,31,31,-1,-1,-1,-1,-1,-1,-1},
        {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
        0
    },
    {
        {
        0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0,0,0,0,1,7,0,0,0,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0,0,40,-1,0,1,0,0,0,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0,0,41,1,0,0,1,0,7,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0,52,1,7,0,7,3,0,0,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0,54,-1,2,7,7,7,7,0,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0,53,-1,3,7,7,7,0,0,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0,0,0,41,7,3,0,0,0,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0,0,40,2,1,0,0,0,0,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0,0,42,7,0,2,7,0,0,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0,53,1,0,3,7,7,7,0,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0,0,53,1,7,7,7,0,0,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        },
        {75,97,118,140,162,186,207,229,250,273,273,273,273,-1,-1,-1,-1,-1,-1,-1},
        {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
        1
    },
    {
        {
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	 0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,7,7,0,0,7,7,0,
	 0,0,0,0,0,0,0,4,7,0,0,14,7,0,
	0,0,0,0,0,0,0,0,7,0,0,1,7,0,
	 0,0,0,0,0,0,-1,13,7,0,0,1,0,0,
	0,0,0,0,0,0,0,1,7,0,0,0,-1,0,
	 0,0,0,0,0,0,0,0,0,0,0,0,0,0
},
        {49,77,53,81,81,81,81,81,81,81,81,81,81,-1,-1,-1,-1,-1,-1,-1},
        {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
        0
    },
    {
        {
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,1,7,13,1,0,0,0,0,0,0,0,
 0,0,0,0,0,0,0,0,0,0,0,12,7,7,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,7,12,-1,0,0,0,0,
 0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,7,2,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,13,7,1,-1,13,7,0,0,0,0,0,
 0,0,0,0,0,0,0,0,0,0,7,7,0,0,0,7,7,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,12,1,-1,0,1,12,1,0,0,0,0,
 0,0,0,0,0,0,0,0,0,0,0,-1,-1,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,13,7,13,1,0,0,0,0,0,
 0,0,0,0,0,0,0,0,0,0,0,0,7,7,7,7,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,12,2,0,0,0,0,0,0,
 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
},
        {57,77,104,143,187,192,235,278,278,278,278,278,278,-1,-1,-1,-1,-1,-1,-1},
        {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
        1
    },
    {
        {
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
 0,0,0,0,0,0,0,0,0,0,0,0,7,7,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,2,7,23,0,0,0,0,0,0,0,
 0,0,0,0,0,0,0,0,0,0,0,0,1,22,7,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,22,0,0,0,0,1,0,0,
 0,0,0,0,0,0,0,0,0,0,0,0,0,1,7,23,7,0,7,22,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,22,2,7,2,22,3,7,0,
 0,0,0,0,0,0,0,0,0,0,0,0,0,7,1,22,2,0,7,22,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,2,22,0,7,0,0,1,0,0,
 0,0,0,0,0,0,0,0,0,0,0,0,0,7,1,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,7,24,2,0,0,0,0,0,0,0,
 0,0,0,0,0,0,0,0,0,0,0,0,7,7,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
},
        {79,102,125,129,146,169,173,233,233,233,233,233,233,-1,-1,-1,-1,-1,-1,-1},
        {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
        1
    },
    {
        {
	0,0,0,0,0,0,0,45,7,0,0,0,7,0,0,0,7,7,7,0,0,-1,0,0,0,0,0,0,
	 0,0,0,0,0,0,0,62,2,0,0,7,23,0,0,0,7,3,1,0,0,-1,0,0,0,0,0,0,
	0,0,0,0,0,0,0,62,7,0,0,1,2,7,0,0,0,2,1,0,0,-1,0,0,0,0,0,0,
	 0,0,0,0,0,0,0,0,0,0,41,-1,0,0,0,0,0,7,1,0,0,-1,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,42,-1,0,7,7,0,0,2,0,0,1,0,0,0,0,0,0,
	 0,0,0,0,0,0,0,0,63,1,0,0,0,2,7,2,0,7,0,0,0,7,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,42,7,3,7,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,
	 0,0,0,0,0,0,0,0,62,2,7,2,0,0,0,0,0,0,2,7,0,-1,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,-1,0,0,0,0,0,7,22,0,-1,0,0,0,0,0,0,
	 0,0,0,0,0,0,0,43,7,0,0,0,-1,0,0,7,7,0,3,1,0,-1,0,0,0,0,0,0,
	0,0,0,0,0,0,0,45,7,7,0,0,0,1,0,0,7,0,7,7,1,-1,0,0,0,0,0,0,
	 0,0,0,0,0,0,0,0,0,0,0,42,7,1,0,0,7,0,3,1,0,-1,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,7,1,0,1,0,0,0,0,0,0,
	 0,0,0,0,0,0,0,0,0,0,0,41,1,0,0,0,0,0,0,0,0,7,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,41,-1,0,0,0,7,0,0,2,0,0,0,0,1,0,0,0,0,0,0,
	 0,0,0,0,0,0,0,52,-1,-1,0,0,2,0,0,7,7,0,0,0,0,-1,0,0,0,0,0,0,
	0,0,0,0,0,0,0,52,1,1,0,0,7,0,0,0,7,2,0,0,0,1,0,0,0,0,0,0,
	 0,0,0,0,0,0,0,42,7,0,0,1,1,0,0,1,1,0,0,0,0,7,0,0,0,0,0,0
},
        {7,35,40,63,74,94,123,130,148,176,178,204,259,287,319,375,400,427,455,483},
        {436,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
        2
    },

};
