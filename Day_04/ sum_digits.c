#include <stdio.h>

int sum_digits(int n)
{
    int i;
    int sum = 0;

    if (n < 0)
        return 0; 

    for (i = 0; i <= n; i++)
        sum += i;

    return sum;
}