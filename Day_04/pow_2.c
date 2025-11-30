#include <stdio.h>
#include <math.h>
int f_ispowerof2(int x) {
    if (x < 1) {
        printf("%d n est pas une puissance de 2\n", x);
        return 0;
    }
    int k = 0;
    while (pow(2,k) < x) {
        k++;
    }
    if (pow(2,k)==x){
        printf("Il existe k = %d tel que % d = 2^k\n", k, x);
        return 1;
    }else{
        printf("%d n est pas une puissance de 2\n", x);
        return 0;}
}

