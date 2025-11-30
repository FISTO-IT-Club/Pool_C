#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

char history[5][100];
int history_count = 0;

void AddToHistory(char* record) {
    if (history_count < 5) {
        strcpy(history[history_count], record);
        history_count++;
    }
    else {
        for (int i = 0; i < 4; i++) {
            strcpy(history[i], history[i + 1]);
        }
        strcpy(history[4], record);
    }
}

void PrintHistory() {
    printf("\n--- Last 5 Calculations ---\n");
    if (history_count == 0) printf("(Empty)\n");

    for (int i = 0; i < history_count; i++) {
        printf("%d: %s\n", i + 1, history[i]);
    }
    printf("---------------------------\n");
}

enum enOperation { enSum = 1, enSub = 2, enMul = 3, enDiv = 4, enSqrt = 5, enSquare = 6, enCube = 7, enFact = 8, enExit = 9 };

double Min(double a, double b) { return a - b; }

double sqrt_n(double n) {
    if (n <= 0) return 0;
    int i = 1;
    while (true) {
        if ((i * i) <= n && (i + 1) * (i + 1) > n) return i;
        i++;
    }
}

double Square(double x) { return x * x; }
double Cube(double x) { return x * x * x; }

long long fact(int n) {
    if (n == 0 || n == 1) return 1;
    else return n * fact(n - 1);
}

void PerformCalculation(enum enOperation Op) {
    double Number1, Number2 = 0;
    double result = 0;
    char buffer[100];

    if (Op >= enSqrt && Op <= enFact) {
        printf("Please enter the number: ");
        scanf("%lf", &Number1);
    }
    else {
        printf("Please enter the first number: ");
        scanf("%lf", &Number1);
        printf("Please enter the second number: ");
        scanf("%lf", &Number2);
    }

    printf("\nResult: ");

    switch (Op) {
    case enSum:
        result = Number1 + Number2;
        printf("%.2f", result);
        sprintf(buffer, "%.2f + %.2f = %.2f", Number1, Number2, result);
        break;

    case enSub:
        result = Number1 - Number2;
        printf("%.2f", result);
        sprintf(buffer, "%.2f - %.2f = %.2f", Number1, Number2, result);
        break;

    case enMul:
        result = Number1 * Number2;
        printf("%.2f", result);
        sprintf(buffer, "%.2f * %.2f = %.2f", Number1, Number2, result);
        break;

    case enDiv:
        if (Number2 == 0) {
            printf("Error: Division by Zero!");
            return;
        }
        else {
            result = Number1 / Number2;
            printf("%.2f", result);
            sprintf(buffer, "%.2f / %.2f = %.2f", Number1, Number2, result);
        }
        break;

    case enSqrt:
        result = sqrt_n(Number1);
        printf("%.2f", result);
        sprintf(buffer, "sqrt(%.2f) = %.2f", Number1, result);
        break;

    case enSquare:
        result = Square(Number1);
        printf("%.2f", result);
        sprintf(buffer, "sqr(%.2f) = %.2f", Number1, result);
        break;

    case enCube:
        result = Cube(Number1);
        printf("%.2f", result);
        sprintf(buffer, "cube(%.2f) = %.2f", Number1, result);
        break;

    case enFact:
        long long f_res = fact((int)Number1);
        printf("%lld", f_res);
        sprintf(buffer, "%d! = %lld", (int)Number1, f_res);
        break;
    default:
        return;
    }

    AddToHistory(buffer);
    printf("\n\n(Press Enter to continue...)");

    while (getchar() != '\n');
    getchar();
}

void ShowMenu() {
    system("cls");
    printf("========================================\n");
    printf("            Simple Calculator           \n");
    printf("========================================\n");
    PrintHistory();
    printf("========================================\n");
    printf("\t[1] : Sum\n");
    printf("\t[2] : Sub\n");
    printf("\t[3] : Mul\n");
    printf("\t[4] : Div\n");
    printf("\t[5] : Sqrt(x)\n");
    printf("\t[6] : Square(x)\n");
    printf("\t[7] : Cube(x)\n");
    printf("\t[8] : Factorial\n");
    printf("\t[9] : EXIT\n");
    printf("========================================\n");
}

enum enOperation ReadOperation() {
    int Choice = -1;
    printf("Please Enter Your Choice (1-9): ");
    scanf("%d", &Choice);
    return (enum enOperation)Choice;
}

int main() {
    while (true) {
        ShowMenu();
        enum enOperation Op = ReadOperation();

        if (Op == 9) break;

        if (Op < 1 || Op > 9) {
            printf("Invalid Choice. Try again.\n");
            continue;
        }

        PerformCalculation(Op);
    }
    return 0;
}