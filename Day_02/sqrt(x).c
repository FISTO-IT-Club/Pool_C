#include<stdio.h>
#include<math.h>
int sqrt_x(int nb) {
    if (nb < 0) {
        return -1;
    }else{
        return (int)sqrt(nb);
    }
}
