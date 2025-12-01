#include <stdio.h>

int main() {
    double x, y;
    char o;

    printf("entrez le 1er nombre : \n ");
    scanf("%lf", &x);
    printf(" entrez l'un des operations (+, -, *, /): ");
    scanf(" %c", &o);
    printf("entrez le 2eme nombre : \n ");
    scanf("%lf", &y);
    
    if (o == '+') {
        printf("le resultat est  %f\n", x + y);
    } else if (o == '-') {
        printf("le resultat est: %.2lf\n", x - y);
    } else if (o == '*') {
        printf("le resultat est: %.2lf\n", x * y);
    } else if (o == '/') {
        if (y != 0) {
            printf("le resultat est: %.2lf\n" x / y);
        } else {
            printf(" erreur la division sur 0 EST IMPOSSIBLE .\n");
        }
    } else {
        printf("erreur operation introuvable .\n");
    }

    return 0;
}