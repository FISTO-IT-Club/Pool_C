#include <stdio.h>

void calc(void) {
    char op;
    float a, b, res;

    printf("Enter operation (+, -, *, /): ");
    scanf(" %c", &op);

    printf("Enter first number: ");
    scanf("%f", &a);

    printf("Enter second number: ");
    scanf("%f", &b);

    switch (op) {
        case '+':
            res = a + b;
            printf("Result: %.2f\n", res);
            break;

        case '-':
            res = a - b;
            printf("Result: %.2f\n", res);
            break;

        case '*':
            res = a * b;
            printf("Result: %.2f\n", res);
            break;

        case '/':
            if (b == 0) {
                printf("Division by zero is not allowed.\n");
            } else {
                res = a / b;
                printf("Result: %.2f\n", res);
            }
            break;

        default:
            printf("Invalid operation.\n");
    }
}

int main() {
    calc();
    return 0;
}
