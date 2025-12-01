#include <stdio.h>
#include <math.h>
#include <string.h>
#define HISTORY_SIZE 5

void add_to_history(char history[HISTORY_SIZE][100], int *count, const char* e) {
    if (*count < HISTORY_SIZE) {
        snprintf(history[*count], 100, "%s", e);
        (*count)++;
    } else {
        for (int i = 1; i < HISTORY_SIZE; i++) {
            snprintf(history[i-1], 100, "%s", history[i]);
        }
        snprintf(history[HISTORY_SIZE-1], 100, "%s", e);
    }
}

int factorial(int n) {
    if (n < 0) return -1;
    int res = 1;
    for (int i = 1; i <= n; i++) res *= i;
    return res;
}

/*int sqrt_x(int nb) {
    int i = 0;
    if (nb < 0) return -1;  
    while (i * i <= nb) {
        i++;
    }
    return i - 1;  
}*/

int main() {
    char op[10];
    double a, b;
    char history[HISTORY_SIZE][100];
    int history_count = 0;

    printf("Calculator (last 5 history)\n");

    while (1) {
        printf("\nEnter operation: ");
        scanf("%s", op);

        if (strcmp(op, "exit") == 0) {
            printf("Exiting...\n");
            break;
        }

        char entry[100];

        if (strcmp(op, "+") == 0 ||
            strcmp(op, "-") == 0 ||
            strcmp(op, "*") == 0 ||
            strcmp(op, "/") == 0) {

            printf("Enter two numbers: ");
            scanf("%lf %lf", &a, &b);

            double result;

            if (strcmp(op, "+") == 0) result = a + b;
            else if (strcmp(op, "-") == 0) result = a - b;
            else if (strcmp(op, "*") == 0) result = a * b;
            else if (strcmp(op, "/") == 0) {
                if (b == 0) {
                    printf("Error: Division by zero!\n");
                    continue;
                }
                result = a / b;
            }

            printf("Result: %.2lf\n", result);
            snprintf(entry, 100, "%.2lf %s %.2lf = %.2lf", a, op, b, result);
        }

        else if (strcmp(op, "fact") == 0) {
            printf("Enter a number: ");
            scanf("%lf", &a);
            int r = factorial((int)a);
            if (r < 0) {
                printf("Error: Negative factorial\n");
                continue;
            }
            printf("Result: %d\n", r);
            snprintf(entry, 100, "fact(%d) = %d", (int)a, r);
        }

        else if (strcmp(op, "sqrt") == 0) {
            printf("Enter a number: ");
            scanf("%lf", &a);
            if (a < 0) {
                printf("Error: Negative sqrt!\n");
                continue;
            }
            double r = sqrt(a);
            printf("Result: %.2lf\n", r);
            snprintf(entry, 100, "sqrt(%.2lf) = %.2lf", a, r);
        }

        else if (strcmp(op, "pwr2") == 0) {
            printf("Enter a number: ");
            scanf("%lf", &a);
            double r = a * a;
            printf("Result: %.2lf\n", r);
            snprintf(entry, 100, "pwr2(%.2lf) = %.2lf", a, r);
        }

        else if (strcmp(op, "pwr3") == 0) {
            printf("Enter a number: ");
            scanf("%lf", &a);
            double r = a * a * a;
            printf("Result: %.2lf\n", r);
            snprintf(entry, 100, "pwr3(%.2lf) = %.2lf", a, r);
        }

        else if (strcmp(op, "history") == 0) {
            printf("\n--- Last 5 Calculations ---\n");
            for (int i = 0; i < history_count; i++) {
                printf("%d: %s\n", i + 1, history[i]);
            }
            continue;
        }

        else {
            printf("Unknown command! (use +, -, *, /, fact, sqrt, pwr2, pwr3)\n");
            continue;
        }

        add_to_history(history, &history_count, entry);
    }



    return 0;
}

//gcc cli_calculator.c -o calc -lm comand pour run pour undefined reference to `sqrt'
