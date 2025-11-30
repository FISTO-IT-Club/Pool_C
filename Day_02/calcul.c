#include <stdio.h>
void calc(void)
{
    float x, y;
    char op;
    printf("choisissez l operation :\n");
    scanf(" %c", &op);
    printf("le premier nombre :\n");
    scanf("%f", &x);
    printf("le deuxieme nombre :\n");
    scanf("%f", &y);
    switch (op)
    {
    case '+':
        printf("la somme de %f+%f est %f", x, y, x + y);
        break;
    case '-':
        printf("la differences de %f-%f est %f", x, y, x - y);
        break;
    case '*':
        printf("le produit est %f", x * y);
        break;
    case '/':
        if (y == 0)
            printf("la division sur le 0 est impossible ");
        else
            printf("le quotient de %f sur %f est%f ", x, y, x / y);
        break;
    default:
        printf("erreur");
    }
}
