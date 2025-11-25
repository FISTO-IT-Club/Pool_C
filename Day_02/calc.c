#include <stdio.h>

void calc(void)
{
    char op;
    float a, b;

    printf("Enter first number: ");
    scanf("%f", &a);

    printf("Operation (+ - * /): ");
    scanf(" %c", &op);

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
            printf("Error: division by zero \n");
        else
            printf("Result = %.2f\n", a / b);
    }
    else
        printf("Invalid operator\n");
}
