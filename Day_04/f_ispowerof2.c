// #include <stdio.h>

#include "calculatrice.h"
int f_ispowerof2(int x)
{
    if (x == 0){
        printf("0 is not a power of 2\n");
        return 0;
    } 
    while (x % 2 == 0) {
        x /= 2;
    }
    if (x == 1) {
        printf("%d is a power of 2\n", x);
    } else {
        printf("num %d It is not a power of 2\n", x);
    }
    return x == 1;
}

// int main()
// {
//     int x;
//     printf("Enter a number: ");
//     scanf("%d", &x);
//     f_ispowerof2(x);
//     return 0;
// }