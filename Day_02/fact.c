#include <stdio.h>
#include <stdlib.h>

int factorial(int nb) {
    if (nb < 0) {
        printf("En ne peut pas calculer le factoriel d'un nombre negative!\n");
        return -1;
    }
    if (nb == 0 || nb == 1) {
        return 1;
    }
    return nb * factorial(nb - 1);
}
int main(void) {
    int n;
    printf("Entrer votre nombre pour calculer son factoriel:\n");
    scanf("%d", &n);
    int resultat = factorial(n);
    if (resultat != -1) {
        printf("Le factoriel de %d est %d.\n", n, resultat);
    }
    exit(0);
}