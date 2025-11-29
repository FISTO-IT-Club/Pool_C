#include <stdio.h>

void calc(void)
{
    char op;
    float a, b, result;

    printf("Operation (+ - * /): ");
    if (scanf(" %c", &op) != 1)
        return;

    printf("First number: ");
    if (scanf("%f", &a) != 1)
        return;

    printf("Second number: ");
    if (scanf("%f", &b) != 1)
        return;

    if (op == '+')
        result = a + b;
    else if (op == '-')
        result = a - b;
    else if (op == '*')
        result = a * b;
    else if (op == '/')
    {
        if (b == 0)
        {
            printf("Error: division by zero\n");
            return;
        }
        result = a / b;
    }
    else
    {
        printf("Unknown operation\n");
        return;
    }

    printf("Result: %f\n", result);
}
