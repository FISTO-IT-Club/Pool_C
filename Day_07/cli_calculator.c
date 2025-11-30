#include <stdio.h>
#include <stdbool.h>

#define HISTORY_SIZE 5

typedef struct {
    char expr[100];
    double result;
} History;

History history[HISTORY_SIZE];
int hist_count = 0;

void add_history(const char *expr, double result) {
    if (hist_count < HISTORY_SIZE) {
        sprintf(history[hist_count].expr, "%s", expr);
        history[hist_count].result = result;
        hist_count++;
    } else {
        for (int i = 0; i < HISTORY_SIZE - 1; i++) {
            history[i] = history[i + 1];
        }
        sprintf(history[HISTORY_SIZE - 1].expr, "%s", expr);
        history[HISTORY_SIZE - 1].result = result;
    }
}

void show_history() {
    printf("\n========== HISTORY ==========\n");
    if (hist_count == 0) {
        printf("No calculations yet.\n");
    } else {
        for (int i = 0; i < hist_count; i++) {
            printf("%d. %s = %.2f\n", i + 1, history[i].expr, history[i].result);
        }
    }
    printf("=============================\n\n");
}

double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    if (b == 0) {
        printf("Error: Division by zero!\n");
        return 0;
    }
    return a / b;
}

long long factorial(int n) {
    if (n < 0) {
        printf("Error: Factorial of negative number!\n");
        return -1;
    }
    long long result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

double square_root(double x) {
    if (x < 0) {
        printf("Error: Square root of negative number!\n");
        return -1;
    }
    if (x == 0) return 0;
    
    // Newton's method for square root
    double guess = x;
    double epsilon = 0.00001;
    
    while ((guess * guess - x) > epsilon || (x - guess * guess) > epsilon) {
        guess = (guess + x / guess) / 2.0;
    }
    
    return guess;
}

double power2(double x) {
    return x * x;
}

double power3(double x) {
    return x * x * x;
}

void print_menu() {
    printf("\n========== CALCULATOR ==========\n");
    printf("1. Addition (+)\n");
    printf("2. Subtraction (-)\n");
    printf("3. Multiplication (*)\n");
    printf("4. Division (/)\n");
    printf("5. Factorial (!)\n");
    printf("6. Square Root (sqrt)\n");
    printf("7. Power of 2 (x^2)\n");
    printf("8. Power of 3 (x^3)\n");
    printf("9. Show History\n");
    printf("0. Exit\n");
    printf("================================\n");
}

int main() {
    int choice;
    double a, b, result;
    int n;
    long long fact_result;
    char expr[100];
    bool running = true;

    printf("\nWelcome to Simple CLI Calculator!\n");

    while (running) {
        print_menu();
        printf("Enter choice: ");
        
        if (scanf("%d", &choice) != 1) {
            printf("Invalid input!\n");
            while (getchar() != '\n');
            continue;
        }

        switch (choice) {
            case 1:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &a, &b);
                result = add(a, b);
                sprintf(expr, "%.2f + %.2f", a, b);
                printf("Result: %.2f\n", result);
                add_history(expr, result);
                break;

            case 2:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &a, &b);
                result = subtract(a, b);
                sprintf(expr, "%.2f - %.2f", a, b);
                printf("Result: %.2f\n", result);
                add_history(expr, result);
                break;

            case 3:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &a, &b);
                result = multiply(a, b);
                sprintf(expr, "%.2f * %.2f", a, b);
                printf("Result: %.2f\n", result);
                add_history(expr, result);
                break;

            case 4:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &a, &b);
                if (b != 0) {
                    result = divide(a, b);
                    sprintf(expr, "%.2f / %.2f", a, b);
                    printf("Result: %.2f\n", result);
                    add_history(expr, result);
                }
                break;

            case 5:
                printf("Enter integer: ");
                scanf("%d", &n);
                fact_result = factorial(n);
                if (fact_result != -1) {
                    sprintf(expr, "%d!", n);
                    printf("Result: %lld\n", fact_result);
                    add_history(expr, (double)fact_result);
                }
                break;

            case 6:
                printf("Enter number: ");
                scanf("%lf", &a);
                result = square_root(a);
                if (result != -1) {
                    sprintf(expr, "sqrt(%.2f)", a);
                    printf("Result: %.2f\n", result);
                    add_history(expr, result);
                }
                break;

            case 7:
                printf("Enter number: ");
                scanf("%lf", &a);
                result = power2(a);
                sprintf(expr, "(%.2f)^2", a);
                printf("Result: %.2f\n", result);
                add_history(expr, result);
                break;

            case 8:
                printf("Enter number: ");
                scanf("%lf", &a);
                result = power3(a);
                sprintf(expr, "(%.2f)^3", a);
                printf("Result: %.2f\n", result);
                add_history(expr, result);
                break;

            case 9:
                show_history();
                break;

            case 0:
                printf("\nFinal History:\n");
                show_history();
                printf("Thank you for using the calculator!\n");
                running = false;
                break;

            default:
                printf("Invalid choice! Please enter 0-9.\n");
                break;
        }
    }

    return 0;
}