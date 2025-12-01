#include <stdio.h>
#include <math.h>

#define HISTORY 5

int main() {
    double last[HISTORY] = {0};
    int count = 0;
    int running = 1;
    int choice;
    double a, b, result;
    int n;

    while (running) {
        printf("\n    Simple Calculator    \n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Factorial\n");
        printf("6. Square root\n");
        printf("7. Power of 2\n");
        printf("8. Power of 3\n");
        printf("9. Show last 5 results\n");
        printf("0. Exit\n");
        printf("Choose: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1: 
            printf("Enter two numbers: ");
            scanf("%lf %lf", &a, &b);
            result = a + b;
            break;

        case 2: 
            printf("Enter two numbers: ");
            scanf("%lf %lf", &a, &b);
            result = a - b;
            break;

        case 3: 
            printf("Enter two numbers: ");
            scanf("%lf %lf", &a, &b);
            result = a * b;
            break;

        case 4: 
            printf("Enter two numbers: ");
            scanf("%lf %lf", &a, &b);
            if (b == 0) { 
                printf("Error\n");
                continue;
            }
            result = a / b;
            break;

        case 5: 
            printf("Enter integer: ");
            scanf("%d", &n);
            if (n < 0) {
                printf("Error\n");
                continue;
            }
            result = 1;
            for (int i = 1; i <= n; i++)
                result *= i;
            break;

        case 6:
            printf("Enter number: ");
            scanf("%lf", &a);
            if (a < 0) {
                printf("Error\n");
                continue;
            }
            result = sqrt(a);
            break;

        case 7: 
            printf("Enter number: ");
            scanf("%lf", &a);
            result = a * a;
            break;

        case 8: 
            printf("Enter number: ");
            scanf("%lf", &a);
            result = a * a * a;
            break;

        case 9: 
            printf("\n    Last Results    \n");
            for (int i = 0; i < HISTORY && i < count; i++)
                printf("%d: %.2lf\n", i + 1, last[i]);
            continue;

        case 0:
            running = 0;
            continue;

        default:
            printf("Invalid choice\n");
            continue;
        }
        printf("Result: %.2lf\n", result);

        last[count % HISTORY] = result;
        count++;
    }
    return 0;
}
