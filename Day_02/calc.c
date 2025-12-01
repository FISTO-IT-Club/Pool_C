#include<stdio.h>
int main() {
    char op;
    float num1, num2, result;

    printf("Entrez l'operation (+, -, *, /) : ");
    scanf(" %c", &op); 

    printf("Entrez le premier nombre : ");
    scanf("%f", &num1);

    printf("Entrez le deuxieme nombre : ");
    scanf("%f", &num2);

    if(op == '+') {
        result = num1 + num2;
    } else if(op == '-') {
        result = num1 - num2;
    } else if(op == '*') {
        result = num1 * num2;
    } else if(op == '/') {
        if(num2 != 0) {
            result = num1 / num2;
        } else {
            printf("Erreur : division par zero!\n");
            return 1;
        }
    } else {
        printf("Erreur : operation invalide!\n");
        return 1;
    }

    printf("Resultat : %.2f\n", result);
    return 0;
}
