#include <stdio.h>

int mySqrt(int x) {
    int i = 0;

    
    while ((long)i * i <= x) {
        i++;
    }

    return i - 1;  
}

int main() {
    int x;

    printf("Entrez un entier positif : ");
    scanf("%d", &x);

    if (x < 0) {
        printf("Erreur : la racine carree n'existe pas pour un nombre negatif.\n");
    } else {
        printf("Racine carree entier (arrondie vers le bas) de %d = %d\n", x, mySqrt(x));
    }

    return 0;
}
