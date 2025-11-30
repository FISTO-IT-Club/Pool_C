#include<stdio.h>

void calc(void) {
    int a, b;
    char op;
    printf("Entrer le premier nombre, et le deuxieme nombre: ");
    scanf("%d %d", &a, &b);
    printf("Entrer l'operateur (+, -, *, /): ");
    scanf(" %c", &op);
     switch(op) {
        case '+':
            printf("Resultat: %d\n", a + b);
            break;
        case '-':
            printf("Resultat: %d\n", a - b);
            break;
        case '*':
            printf("Resultat: %d\n", a * b);
            break;
        case '/':
            if (b != 0) {
                printf("Resultat: %d\n", a / b);
            } else {
                printf("Erreur: Division par zero!\n");
            }
            break;
        default:
            printf("Operateur invalide!\n");
            break;
    }
}
    int main() {
        calc();
        return 0;
 }