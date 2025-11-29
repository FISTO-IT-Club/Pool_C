#include <stdio.h>


int f_ispowerof2(int x)
{
    if (x <= 0)
        return 0;
    if ((x & (x - 1)) == 0)
        return 1;
    else
        return 0;
}