#include<stdio.h>

int my_sqrt(int x) {
    if (x < 0)
        return -1 ; 
    int i = 0;
    while ((i * i) <= x) {
        i++;
    }
    return i - 1 ;
}
int main() {
    int x;
    printf("Entrez un nombre : ");
    scanf("%d", &x);
    int result = my_sqrt(x);

    if (result == -1) {
        printf("Erreur : racine d'un nombre negatif.\n");
    } else {
        printf("La racine carree arrondie vers le bas de %d est %d\n", x, result);
    }
    return 0;
}
