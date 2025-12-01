#include<stdio.h>
int factorial(int nb) {
    if (nb < 0)
        return -1;
    if (nb == 0 || nb == 1)
        return 1;
    return nb * factorial(nb - 1);
}
int main() {
    int n, result;
    printf("Entrez un nombre : ");
    scanf("%d", &n);

    result = factorial(n);
    if (result == -1) {
        printf("Erreur : la factorielle d'un nombre negatif n'existe pas.\n");
    } else {
        printf("La factorielle de %d est %d\n", n, result);
    }
    return 0;
}
