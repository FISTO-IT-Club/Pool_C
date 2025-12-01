#include <stdio.h> 

void calc(void)
{
    char operation;
    float n1;
    float n2;

    printf("Entrez l'opération (+, -, *, /) : ");
    scanf(" %c", &operation);
    printf("Entrez le premier nombre : ");
    scanf("%f", &n1);
    printf("Entree le deuxième nombre : ");
    scanf("%f", &n2);

    switch (operation)
    {
        case '+':
            printf("Résultat : %.2f\n", n1 + n2);
            break;
        case '-':
            printf("Résultat : %.2f\n", n1 - n2);
            break;
        case '*':
            printf("Résultat : %.2f\n", n1 * n2);
            break;
        case '/':
            if (n2 != 0)
                printf("Résultat : %.2f\n", n1 / n2);
            else
                printf("Erreur : Division par zéro.\n");
            break;
        default:
            printf("Opération introuvable \n");
    }
}
