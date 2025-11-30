#include <stdio.h>
int f_ispowerof2(int x)
{
    if (x <= 0)
        return 0;
    while (x > 1)
    {
        if (x % 2 != 0)
            return 0;
        x = x / 2;
    }

    return 1;
}

int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    if (f_ispowerof2(number))
    {
        printf("%d is a power of 2.\n", number);
    }
    else
    {
        printf("%d is not a power of 2.\n", number);
    }
}