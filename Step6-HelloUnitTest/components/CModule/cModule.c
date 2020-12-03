#include <stdio.h>

#define LIMIT 100

int SaturatedAdd(int p1, int p2)
{
    if ((p1 >= LIMIT) || (p2 >= LIMIT))
        return LIMIT;

    int s = p1 + p2;
    if (s >= LIMIT)
        return LIMIT;
    
    return s;
}
