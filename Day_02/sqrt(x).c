#include <stdio.h>


int sqrt_x(int nb)
{
    int i;

    if (nb <= 0)
        return 0;

    i = 1;
    while ((long)i * (long)i <= nb)
        i++;
    return i - 1;
}
