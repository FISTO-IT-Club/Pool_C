#include <stdio.h>
int factoriel(int n) {
    if (n == 0) {
        return 1;
    }
    return n * factoriel(n - 1);
}
int main() {
    int n ;
    printf("Enter a number positif pour calculer son factoriel: ");
    scanf("%d", &n);
    if (n < 0) {
        printf("Erreur : Le factoriel n'est pas défini pour les nombres négatifs.\n");
    } else {
        printf("Factoriel de %d = %d\n", n, factoriel(n));
    }
    return 0;
}