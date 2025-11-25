#include <stdio.h>

void calc(void)
{
    char op;
    float a, b, result;

    printf("Enter operation (+, -, *, /): ");
    scanf(" %c", &op);

    while (op != '+' && op != '-' && op != '*' && op != '/')
    {
        printf("Invalid operation. Please enter one of (+, -, *, /): ");
        scanf(" %c", &op);
    }

    printf("Enter first number: ");
    scanf("%f", &a);

    printf("Enter second number: ");
    scanf("%f", &b);

    switch (op)
    {
    case '+':
        result = a + b;
        printf("Result: %.2f\n", result);
        break;

    case '/':
        if (b == 0)
            printf("Error: Division by zero!\n");
        else{
            result = a / b;
            printf("Result: %.2f\n", result);
        }
        break;
    case '*':
        result = a * b;
        printf("Result: %.2f\n", result);
        break;
    case '-':
        result = a - b;
        printf("Result: %.2f\n", result);
        break;

    default:
        printf("Invalid operation.\n");
    }
}

int main(void)
{
    calc();
    return 0;
}
