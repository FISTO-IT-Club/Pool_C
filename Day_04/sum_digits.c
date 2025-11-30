#include <stdio.h>

int sum_digits(int n)
{
    int sum = 0, i;
    

    for (i = 0; i <= n; i++)
    {
        sum += i;
    }

    return sum;
}
int main()
{
    int n = 5, result;

    printf("Sum from 0 to %d = %d ", n, result = sum_digits(n));

    return 0;
}
