#include <stdbool.h>
#include <stdio.h>

bool is_powerof3(int n)
{
    if (n <= 0)
        return false;

    while (n % 3 == 0)
    {
        n /= 3;
    }

    return n == 1;
}

int main(void)
{
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);
    if (is_powerof3(number))
    {
        printf("%d is a power of 3.\n", number);
    }
    else
    {
        printf("%d is not a power of 3.\n", number);
    }
}
