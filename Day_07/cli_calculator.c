#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define HISTORY_SIZE 5


char history[HISTORY_SIZE][100];
int history_index = 0;
void add_to_history(const char *entry) {
    snprintf(history[history_index], sizeof(history[history_index]), "%s", entry);
    history_index = (history_index + 1) % HISTORY_SIZE;
}
void show_history() {
    printf("\ndernier %d Calculations\n", HISTORY_SIZE);
    for (int i = 0; i < HISTORY_SIZE; i++) {
        if (strlen(history[i]) > 0) {
            printf("%d: %s\n", i + 1, history[i]);
        }
    }
}
long long factorial(int n) {
    if (n < 0) {
        printf("Ereur : factorial de nombre negatif n'existe pas.\n");
        return -1;
    }
    if (n == 0 || n == 1) return 1;
    return n * factorial(n - 1);
}

int main() {
    char command[20];
    double a, b, result;
    int n;

    printf("CLI Calculator avec historique\n");
    printf("Commands: +, -, *, /, fact, sqrt, pwr2, pwr3, history, exit\n");

    while (1) {
        printf("\nEntre command: ");
        scanf("%s", command);

        if (strcmp(command, "exit") == 0) {
            break;
        } else if (strcmp(command, "+") == 0) {
            scanf("%lf %lf", &a, &b);
            result = a + b;
            printf("Result: %.2f\n", result);
            char entry[100];
            snprintf(entry, sizeof(entry), "%.2f + %.2f = %.2f", a, b, result);
            add_to_history(entry);
        } else if (strcmp(command, "-") == 0) {
            scanf("%lf %lf", &a, &b);
            result = a - b;
            printf("Result: %.2f\n", result);
            char entry[100];
            snprintf(entry, sizeof(entry), "%.2f - %.2f = %.2f", a, b, result);
            add_to_history(entry);
        } else if (strcmp(command, "*") == 0) {
            scanf("%lf %lf", &a, &b);
            result = a * b;
            printf("Result: %.2f\n", result);
            char entry[100];
            snprintf(entry, sizeof(entry), "%.2f * %.2f = %.2f", a, b, result);
            add_to_history(entry);
        } else if (strcmp(command, "/") == 0) {
            scanf("%lf %lf", &a, &b);
            if (b == 0) {
                printf("Error: Division avec zero!\n");
                continue;
            }
            result = a / b;
            printf("Result: %.2f\n", result);
            char entry[100];
            snprintf(entry, sizeof(entry), "%.2f / %.2f = %.2f", a, b, result);
            add_to_history(entry);
        } else if (strcmp(command, "fact") == 0) {
            scanf("%d", &n);
            long long fact = factorial(n);
            if (fact != -1) {
                printf("Result: %lld\n", fact);
                char entry[100];
                snprintf(entry, sizeof(entry), "fact(%d) = %lld", n, fact);
                add_to_history(entry);
            }
        } else if (strcmp(command, "sqrt") == 0) {
            scanf("%lf", &a);
            if (a < 0) {
                printf("Error: sqrt of negative number not defined.\n");
                continue;
            }
            result = sqrt(a);
            printf("Result: %.2f\n", result);
            char entry[100];
            snprintf(entry, sizeof(entry), "sqrt(%.2f) = %.2f", a, result);
            add_to_history(entry);
        } else if (strcmp(command, "pwr2") == 0) {
            scanf("%lf", &a);
            result = pow(a, 2);
            printf("Result: %.2f\n", result);
            char entry[100];
            snprintf(entry, sizeof(entry), "%.2f^2 = %.2f", a, result);
            add_to_history(entry);
        } else if (strcmp(command, "pwr3") == 0) {
            scanf("%lf", &a);
            result = pow(a, 3);
            printf("Result: %.2f\n", result);
            char entry[100];
            snprintf(entry, sizeof(entry), "%.2f^3 = %.2f", a, result);
            add_to_history(entry);
        } else if (strcmp(command, "history") == 0) {
            show_history();
        } else {
            printf("comande inconue . ressayer .\n");
        }
    }

    printf("Exiting calculator. by!\n");
    return 0;
}

