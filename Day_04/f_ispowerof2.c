#include <stdio.h>

int f_ispowerof2(int x)
{
    int p = 1;

    if (x < 1)
        return 0;

    while (p < x)
        p *= 2;

    if (p == x)
        return 1;

    return 0;
}

int main()
{
    int x = 32;

    if (f_ispowerof2(x))
        printf("%d is power of 2\n", x);
    else
        printf("%d is NOT power of 2\n", x);

    return 0;
}

