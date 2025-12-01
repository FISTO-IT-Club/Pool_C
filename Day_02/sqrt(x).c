#include<stdio.h>
int sqrt_x(int nb) {
    int i = 0;
    if (nb < 0) return -1;  
    while (i * i <= nb) {
        i++;
    }
    return i - 1;  
}

int main() {
    int resS = sqrt_x(4);
    printf("resS : %d\n",resS);
    return 0;
}