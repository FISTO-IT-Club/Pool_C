#include <stdio.h>

int main() {
    float a, b, result;
    char op;

    
    printf("Entrez une operation (+, -, *, /) : ");
    scanf(" %c", &op); 

    
    printf("Entrez le premier nombre : ");
    scanf("%f", &a);

    printf("Entrez le deuxieme nombre : ");
    scanf("%f", &b);

    
    if (op == '+') {
        result = a + b;
    } else if (op == '-') {
        result = a - b;
    } else if (op == '*') {
        result = a * b;
    } else if (op == '/') {
        if (b == 0) {
            printf("Erreur : division par zero impossible.\n");
            return 0;
        }
        result = a / b;
    } else {
        printf("Operation invalide !\n");
        return 0;
    }

    
    printf("Resultat = %.2f\n", result);

    return 0;
}
