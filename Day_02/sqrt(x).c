#include <stdio.h>
#include <math.h>

int sqrt_x(int nb) {
    float resultat;
    resultat = pow(nb, 0.5);
    return resultat;
}

int main(){
    int n, r;

    printf("tapez un entier : ");
    scanf("%d", &n);

    r = sqrt_x(n);
    printf("la resultat est : %d", r);
}