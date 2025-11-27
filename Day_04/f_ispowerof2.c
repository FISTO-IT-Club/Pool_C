#include <stdio.h>
#include <stdlib.h>

int f_ispowerof2(int x) {
    if (x <= 0) {
        printf("La valeur doive etre positive!");
    }
    else;
        while (x > 1) {
            if (x % 2 != 0) {
                printf("Ce nombre ne peut pas l'ecrire sous forme 2^n.");
            }
            x = x / 2;
        }
        printf("Ce nombre peut l'ecrire sous forme 2^n");
}

int main() {
    printf("Entrer votre nombre:\n=>");
    int n;
    scanf("%d",n);
    int test;
    test = f_ispowerof2(n);
    printf("%d",test);
    return 0;
}
