#include <stdio.h>

void calc(void) {
    char op;
    float a, b, s;
    printf("Tapez deux valeurs a et b : ");
    scanf("%f %f", &a, &b);

    printf("Saisir l'operateur (+, -, *, /) : ");
    scanf(" %c", &op);

    if (op == '+') {
        s = a+b;
        printf("%f\n",s);
    }
    else if (op == '-') {
        s = a-b;
        printf("%f\n", s);
    }
    else if (op == '*') {
        s = a*b;
        printf("%f\n", s);
    }
    else if (op == '/') {
        s = a/b;
        printf("%f\n", s);
    }

    printf("le resultat est : %f", s);
}

int main(){
    float a, b, s;
    char op;

    calc();
    return 0;
}