#include <stdio.h>

int factorial(int n)
{
    if (n < 0)
        return 0;
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}
