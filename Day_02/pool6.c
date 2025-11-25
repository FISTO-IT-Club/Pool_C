#include <stdio.h>

int sqrt_x(int nb)
{
    if (nb < 0)
        return 0;

    int i = 0;
    while ((long long)i * i <= nb)
    {
        if (i * i == nb)
            return i;
        i++;
    }
    return i - 1;
}