#include <stdio.h>

int sum_digits(int n)
{
    int i;
    int sum;
    
    i = 0;
    sum = 0;
    while (i <= n)
    {
        sum += i;
        i++;
    }
    return sum;
}

int main(void)
{
    printf("Sum from 0 to 5: %d\n", sum_digits(5));
    printf("Sum from 0 to 10: %d\n", sum_digits(10));
    printf("Sum from 0 to 100: %d\n", sum_digits(100));
    return 0;
}