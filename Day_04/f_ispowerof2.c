#include <stdio.h>

int f_ispowerof2(int x)
{
    if (x <= 0)
        return 0;
    return (x & (x - 1)) == 0;
}

int main(void)
{
    printf("1 is power of 2: %d\n", f_ispowerof2(1));
    printf("2 is power of 2: %d\n", f_ispowerof2(2));
    printf("3 is power of 2: %d\n", f_ispowerof2(3));
    printf("4 is power of 2: %d\n", f_ispowerof2(4));
    printf("8 is power of 2: %d\n", f_ispowerof2(8));
    printf("16 is power of 2: %d\n", f_ispowerof2(16));
    printf("17 is power of 2: %d\n", f_ispowerof2(17));
    printf("64 is power of 2: %d\n", f_ispowerof2(64));
    printf("0 is power of 2: %d\n", f_ispowerof2(0));
    printf("-4 is power of 2: %d\n", f_ispowerof2(-4));
    return 0;
}