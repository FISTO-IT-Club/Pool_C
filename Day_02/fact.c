#include <stdio.h>

long factorial(int n) {
    if (n <= 1)  
        return 1;
    return n * factorial(n - 1);  
}

int main() {
    int nb;
    
    printf("Entrez un nombre entier positif : ");
    scanf("%d", &nb);

    if (nb < 0) {
        printf("Erreur : la factorielle n'existe pas pour les nombres négatifs.\n");
    } else {
        printf("Factorielle de %d = %ld\n", nb, factorial(nb));
    }

    return 0;
}
