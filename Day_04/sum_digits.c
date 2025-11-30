#include <stdio.h>

int sum_digits(int n)
{
    int sum = 0;
    for (int i = 0; i <= n; i++)
    {
        sum += i;
    }
    return sum;
}

int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    int result = sum_digits(number);
    printf("The sum of the digits is: %d\n", result);
    return 0;
}