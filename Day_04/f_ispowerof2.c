#include <stdio.h>
#include <math.h>

int f_ispowerof2(int x);

int main() {
    int X,P;
    printf("Entrer un entier : ");
    scanf("%d", &X);
    P = f_ispowerof2(X);
    if (P == 0) {
        printf("%d n'est pas une puissance exacte de 2 !", X);
    } else {
        printf("%d est une puissance exacte de 2\n", X);
    }
    return 0;
}
int f_ispowerof2(int X) {
    if (X <= 0)
        return 0;
    if ((X & (X - 1)) == 0) {
        return (int)sqrt(X);
    } else {
        return 0;
    }
}

 
