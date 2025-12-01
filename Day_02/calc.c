#include <stdio.h>

void calc(void)
{
    char operation;
    float a, b;

    printf("Enter operation (+, -, *, /): ");
    scanf(" %c", &operation);

    printf("Enter le premier numéro : ");
    scanf("%f", &a);

    printf("Enter le deuxème number: ");
    scanf("%f", &b);

    if (operation == '+')
        printf("Result = %f\n", a + b);
    else if (operation == '-')
        printf("Result = %f\n", a - b);
    else if (operation == '*')
        printf("Result = %f\n", a * b);
    else if (operation == '/')
    {
        if (b == 0)
            printf("Error: diviser par zero!\n");
        else
            printf("Result = %.2f\n", a / b);
    }
    else
        printf("Unknown operation\n");
}