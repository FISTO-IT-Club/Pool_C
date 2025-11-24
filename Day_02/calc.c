#include <stdio.h>

int main (int argc, char *argv[]) {
    int n1;
    int n2;
    char op;
    printf("Number 1 = ");
    scanf("%d", &n1);
    printf("\n");
    printf("Operator (+, -, *, /) = ");
    scanf(" %c", &op);
    printf("\n");
    printf("Number 2 = ");
    scanf("%d", &n2);
    printf("\n");

    switch (op) {
        case '+':
            printf("%d + %d = %d\n", n1, n2, n1 + n2);
            break;
        case '-':
            printf("%d - %d = %d\n", n1, n2, n1 - n2);
            break;
        case '*':
            printf("%d * %d = %d\n", n1, n2, n1 * n2);
            break;
        case '/':
            if (n2 != 0) {
                printf("%d / %d = %d\n", n1, n2, n1 / n2);
            } else {
                printf("Division by zero\n");
            }
            break;
        default:
            printf("Invalid operator\n");
    }

    return 0;
}