#include <stdio.h>
#include <stdlib.h>

void calc(void) {
    char op;
    float n1,n2,resultat;
    printf("Entrer l'operation choisie :\n ");
    printf("==> + : Addition\n");
    printf("==> - : Soustraction\n");
    printf("==> * : Multiplication\n");
    printf("==> / : Division\n");
    printf("==> d : Division entiere\n");
    printf("==> %% : Modulo\n");
    scanf(" %c", &op);
    printf("Entrer les deux nombres :\n");
    scanf("%f %f", &n1, &n2);
    switch(op) {
        case '+':
            resultat = n1 + n2;
            printf("Votre resultat est: %.2f.\n", resultat);
            break;
        case '-':
            resultat = n1 - n2;
            printf("Votre resultat est: %.2f.\n", resultat);
            break;
        case '*':
            resultat = n1 * n2;
            printf("Votre resultat est: %.2f.\n", resultat);
            break;
        case '/':
            if(n2 != 0) {
                resultat = n1 / n2;
                printf("Votre resultat est: %.2f.\n", resultat);
            } else {
                printf("Impossible de diviser par 0!\n");
            }
            break;
        case 'd':
            if((int)n2 != 0) {
                resultat = (int)n1 / (int)n2;
                printf("Votre resultat est: %.0f.\n", resultat);
            } else {
                printf("Impossible de diviser par 0!\n");
            }
            break;
        case '%':
            if((int)n2 != 0) {
                resultat = (int)n1 % (int)n2;
                printf("Votre resultat est: %.0f.\n", resultat);
            } else {
                printf("Impossible de diviser par 0!\n");
            }
            break;
        default:
            printf("Operation invalide!\n");
    }
}
int main(void) {
    calc();
    exit(0);
}
