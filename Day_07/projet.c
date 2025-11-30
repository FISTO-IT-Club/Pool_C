#include <stdio.h>
#include <string.h>

#define MAX_HISTORY 5

char history[MAX_HISTORY][100];
int hist_count = 0;

void save_history(const char *entry) {
    if (hist_count < MAX_HISTORY) {
       strcpy(history[hist_count], entry);
        hist_count++;
   } else {
    	int i;
        for (i = 1; i < MAX_HISTORY; i++)
            strcpy(history[i - 1], history[i]);
        strcpy(history[MAX_HISTORY - 1], entry);
   }
}

void show_history() {
    printf("\n---- Last %d calculations ----\n", MAX_HISTORY);
    if (hist_count == 0) {
        printf("No history yet.\n");
       return;
    }
       	int i;

    for ( i = 0; i < hist_count; i++)
        printf("%d) %s\n", i + 1, history[i]);
   printf("--------------------------------\n\n");
}
  //calc base
void calc_basic() {
    char op;
    float a, b, c;
    char line[100];

    printf("Enter number 1: ");
    scanf("%f", &a);

    printf("Enter number 2: ");
    scanf("%f", &b);

    printf("Choose (+ - * /): ");
    scanf(" %c", &op);

    if (op == '+') c = a + b;
    else if (op == '-') c = a - b;
    else if (op == '*') c = a * b;
    else if (op == '/') {
        if (b == 0) {
            printf("Error: cannot divide by zero!\n");
            return;
        }
        c = a / b;
    } else {
        printf("Invalid operator.\n");
        return;
    }

    printf("Result = %.2f\n", c);
    sprintf(line, "%.2f %c %.2f = %.2f", a, op, b, c);
    save_history(line);
}

int fact(int n) {
    if (n < 0) return 0;
    if (n == 0) return 1;
    return n * fact(n - 1);
}

void calc_fact() {
    int n, f;
    char line[100];

    printf("Enter a number: ");
    scanf("%d", &n);

    f = fact(n);

    printf("fact(%d) = %d\n", n, f);

    sprintf(line, "fact(%d) = %d", n, f);
    save_history(line);
}
  //sqrt
int sqrt_x(int n) {
    if (n < 0) return 0;
    int i;
    for (i = 1; i * i <= n; i++);
    return i - 1;
}

void calc_sqrt() {
    int n, s;
    char line[100];

    printf("Enter a number: ");
    scanf("%d", &n);

    s = sqrt_x(n);

    printf("sqrt(%d) = %d\n", n, s);

    sprintf(line, "sqrt(%d) = %d", n, s);
    save_history(line);
}
//pwr of2
void calc_pwr2() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int r = n * n;
    printf("%d^2 = %d\n", n, r);

    char line[100];
    sprintf(line, "%d^2 = %d", n, r);
    save_history(line);
}
//pwr of 3
void calc_pwr3() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int r = n * n * n;
    printf("%d^3 = %d\n", n, r);

    char line[100];
    sprintf(line, "%d^3 = %d", n, r);
    save_history(line);
}

int main() {
    int choice;

    while (1) {
        printf(" MENU\n");
        printf("1) Basic calculator (+ - * /)\n");
        printf("2) Factorial\n");
        printf("3) Square root\n");
        printf("4) Power 2\n");
        printf("5) Power 3\n");
        printf("6) Show history\n");
        printf("0) Exit\n");
        printf("Choice: ");

        scanf("%d", &choice);

        switch (choice) {
            case 1: calc_basic(); break;
            case 2: calc_fact(); break;
            case 3: calc_sqrt(); break;
            case 4: calc_pwr2(); break;
            case 5: calc_pwr3(); break;
            case 6: show_history(); break;
            case 0: return 0;
            default: printf("Invalid choice.\n");
        }
    }

    return 0;
}

