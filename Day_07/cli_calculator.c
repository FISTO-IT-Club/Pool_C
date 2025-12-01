#include <stdio.h>
#include <string.h>
#define HISTORY_SIZE 5

double factorial(int n);
double sqrt_manual(double x);
double power2(double x);
double power3(double x);
void add_to_history(char history[][100], int *count, const char *entry);

int main() {
    char input[100];
    char history[HISTORY_SIZE][100];
    int history_count = 0;
    printf("Simple CLI Calculator (No math.h)\n");
    printf("Supports: +, -, *, /, fact(x), sqrt(x), pwr2(x), pwr3(x)\n");
    printf("Type 'history' to view last calculations.\n");
    printf("Type 'exit' to quit.\n\n");
    while (1) {
        printf("> ");
        fgets(input, sizeof(input), stdin);
        input[strcspn(input, "\n")] = 0;
        if (strcmp(input, "exit") == 0) break;
        if (strcmp(input, "history") == 0) {
            printf("--- Last Calculations ---\n");
            for (int i = 0; i < history_count; i++)
                printf("%s\n", history[i]);
            continue;
        }
        double a, b, result;
        char op;
        if (sscanf(input, "%lf %c %lf", &a, &op, &b) == 3) {
            switch (op) {
                case '+': result = a + b; break;
                case '-': result = a - b; break;
                case '*': result = a * b; break;
                case '/':
                    if (b == 0) {
                        printf("Error: division by zero.\n");
                        continue;
                    }
                    result = a / b;
                    break;
                default:
                    printf("Unknown operator.\n");
                    continue;
            }
            printf("= %.4lf\n", result);
            char entry[100];
            snprintf(entry, sizeof(entry), "%s = %.4lf", input, result);
            add_to_history(history, &history_count, entry);
            continue;
        }
        int n;
        if (sscanf(input, "fact(%d)", &n) == 1) {
            if (n < 0) {
                printf("Error: negative factorial.\n");
                continue;
            }
            result = factorial(n);
            printf("= %.0lf\n", result);
            char entry[100];
            snprintf(entry, sizeof(entry), "fact(%d) = %.0lf", n, result);
            add_to_history(history, &history_count, entry);
            continue;
        }
        if (sscanf(input, "sqrt(%lf)", &a) == 1) {
            if (a < 0) {
                printf("Error: sqrt of negative number.\n");
                continue;
            }
            result = sqrt_manual(a);
            printf("= %.6lf\n", result);

            char entry[100];
            snprintf(entry, sizeof(entry), "sqrt(%.4lf) = %.6lf", a, result);
            add_to_history(history, &history_count, entry);
            continue;
        }
        if (sscanf(input, "pwr2(%lf)", &a) == 1) {
            result = power2(a);
            printf("= %.4lf\n", result);
            char entry[100];
            snprintf(entry, sizeof(entry), "pwr2(%.4lf) = %.4lf", a, result);
            add_to_history(history, &history_count, entry);
            continue;
        }
        if (sscanf(input, "pwr3(%lf)", &a) == 1) {
            result = power3(a);
            printf("= %.4lf\n", result);
            char entry[100];
            snprintf(entry, sizeof(entry), "pwr3(%.4lf) = %.4lf", a, result);
            add_to_history(history, &history_count, entry);
            continue;
        }
        printf("Invalid command.\n");
    }
    return 0;
}
double factorial(int n) {
    double r = 1;
    for (int i = 1; i <= n; i++)
        r *= i;
    return r;
}
double sqrt_manual(double x) {
    if (x == 0) return 0;
    double guess = x;
    for (int i = 0; i < 20; i++) {    
        guess = 0.5 * (guess + x / guess);
    }
    return guess;
}
double power2(double x) {
    return x * x;
}
double power3(double x) {
    return x * x * x;
}
void add_to_history(char history[][100], int *count, const char *entry) {
    if (*count < HISTORY_SIZE) {
        strcpy(history[*count], entry);
        (*count)++;
    } else {
        for (int i = 1; i < HISTORY_SIZE; i++)
            strcpy(history[i - 1], history[i]);
        strcpy(history[HISTORY_SIZE - 1], entry);
    }
}
