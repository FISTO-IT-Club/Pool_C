#include <stdio.h>

int factorial(int nb) {
    if (nb == 1) {
        return 1;
    }
    else {
        return nb*factorial(nb - 1);
    }
}

int main(){
    int a, r;

    printf("tapez un entier : ");
    scanf("%d", &a);
    r = factorial(a);
    printf("la factorial de %d est : %d", a, r);
}