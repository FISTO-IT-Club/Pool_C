#include <stdio.h>

void calc(void)
{
    char op;
    float a, b;

    printf("Enter operation (+, -, *, /): ");
    scanf(" %c", &op);

    printf("Enter first number: ");
    scanf("%f", &a);

    printf("Enter second number: ");
    scanf("%f", &b);

    if (op == '+')
        printf("Result = %.2f\n", a + b);
    else if (op == '-')
        printf("Result = %.2f\n", a - b);
    else if (op == '*')
        printf("Result = %.2f\n", a * b);
    else if (op == '/')
    {
        if (b == 0)
            printf("Error: division by zero!\n");
        else
            printf("Result = %.2f\n", a / b);
    }
    else
        printf("Unknown operation\n");
}
