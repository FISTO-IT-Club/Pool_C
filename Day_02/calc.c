#include <stdio.h>

void calc(void) {
    char op;
    float a, b;
    
    printf("Operation (+, -, *, /): ");
    scanf(" %c", &op);
    
    printf("Premier nombre: ");
    scanf("%f", &a);
    
    printf("Deuxieme nombre: ");
    scanf("%f", &b);
    
    if (op == '+') printf("Resultat: %.2f\n", a + b);
    else if (op == '-') printf("Resultat: %.2f\n", a - b);
    else if (op == '*') printf("Resultat: %.2f\n", a * b);
    else if (op == '/') printf("Resultat: %.2f\n", a / b);
    else printf("Operation invalide\n");
}

int main() {
    calc();
    return 0;
}