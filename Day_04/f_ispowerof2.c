#include <stdio.h>

int f_ispowerof2(int x)
{

    while (x % 2 == 0)
    {
        x = x / 2;
    }

    if (x == 1)
        return 1;

    return 0;
}

  int main()
{
    int n = 32;

    if (f_ispowerof2(n) == 1)
        printf("%d is a power of 2 \n", n);
    else
        printf("%d isn't a power of 2 \n", n);

    return 0;
}
