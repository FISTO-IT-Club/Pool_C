#include <stdio.h>
#include <math.h>

int factorial(int nb) {
    if (nb == 1) {
        return 1;
    }
    else {
        return nb*factorial(nb - 1);
    }
}

int sqrt_x(int nb) {
    float resultat;
    resultat = pow(nb, 0.5);
    return resultat;
}

int main(){
    int a, b;
    char op;

    printf("tapez la valeur de a : ");
    scanf("%d", &a);
    printf("tapez l'op (+,-,*,/,^,s,!) : ");
    scanf("%c", &op);
    printf("tapez la valeur de b : ");
    scanf("%d", &b);


    if (op == '+') {
        return a+b;
    }
    else if (op == '-') {
        return a-b;
    }
    else if (op == '*') {
        return a*b;
    }
    else if (op == '/') {
        return a/b;
    }
    else if (op == '!' && b == 0) {
        return factorial(a);
    }
    else if (op == '^') {
        return pow(a, b);
    }
    else if (op == 's' && b == 0) {
        return sqrt_x(a);
    }
}