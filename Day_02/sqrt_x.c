// #include <stdio.h>


# include "calculatrice.h"
int sqrt_x(int x) {
   
    int res = 1;
    while (res * res <= x) {
        res++;
    }
    return res - 1;
}

// int main(){
//     int x;
//     printf("Enter a number: ");
//     scanf("%d", &x);
//     printf("Square root of %d is %d\n", x, sqrt_x(x));
//     return 0;

// }