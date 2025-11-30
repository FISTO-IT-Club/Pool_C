#include <stdio.h>
#include <math.h>

void calc(int x, float a, float b) {
    float somme = 0;

    if (x == 1) {
        somme = a + b;
    } else if (x == 2) {
        somme = a - b;
    } else if (x == 3) {
        somme = a * b;
    } else if (x == 4) {
        somme = a / b;
    }

    printf("Le resultat est : %.2f\n", somme);
}

int main(void) {
    float a, b;
    int x;

    printf("donner un nombre pour calculer:\n");
    scanf("%f", &a);

    printf("donner un deuxieme nombre pour calculer:\n");
    scanf("%f", &b);

    printf("Choisissez une operation (1:Add, 2:Sous, 3:Mult, 4:Div) : ");
    scanf("%d", &x);

    calc(x, a, b);

    return 0;
}