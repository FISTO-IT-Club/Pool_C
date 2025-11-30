#include <stdio.h>
#include <math.h>
#include <string.h>
#define HISTORY_SIZE 5
#define FILE_NAME "history.txt"
void load_history(char history[][50], int *count) {
    FILE *f = fopen(FILE_NAME, "r");
    if (!f) return;
    char line[50];
    while (fgets(line, sizeof(line), f) != NULL && *count < HISTORY_SIZE) {
        line[strcspn(line, "\n")] = 0;
        strcpy(history[*count], line);
        (*count)++;
    }
    fclose(f);
}
void save_history(char history[][50], int count) {
    FILE *f = fopen(FILE_NAME, "w");
    if (!f) return;
    for (int i = 0; i < count; i++)
        fprintf(f, "%s\n", history[i]);
    fclose(f);
}
void add_to_history(char history[][50], int *count, char *entry) {
    if (*count < HISTORY_SIZE) {
        strcpy(history[*count], entry);
        (*count)++;
    } else {
        for (int i = 1; i < HISTORY_SIZE; i++) {
            strcpy(history[i - 1], history[i]);
        }
        strcpy(history[HISTORY_SIZE - 1], entry);
    }
    save_history(history, *count);
}
long long fact(int n) {
    long long f = 1;
    for (int i = 1; i <= n; i++)
        f *= i;
    return f;
}
int main() {
    char op[10];
    double x, y, result;
    char history[HISTORY_SIZE][50];
    int history_count = 0;
    load_history(history, &history_count);
    while (1) {
        printf("==== Calculatrice ====\n");
        printf("Basique: +  -  *  /\n");
        printf("Avancee: factoriel  racine  pwr2  pwr3\n");
        printf("Type 'historique' pour regarder dernier 5 calculations\n");
        printf("Type 'sortie' to quitter\n");
        printf("Enter une operation: ");
        scanf("%s", op);
        if (strcmp(op, "sortie") == 0)
            break;
        if (strcmp(op, "historique") == 0) {
            printf("\n-- Dernier %d Calculations --\n", history_count);
            for (int i = 0; i < history_count; i++)
                printf("%d) %s\n", i + 1, history[i]);
            continue;
        }
        char entry[50];
        if (strcmp(op, "factoriel") == 0) {
            printf("Enter un nombre: ");
            scanf("%lf", &x);
            long long r = fact((int)x);
            printf("Result = %lld\n", r);
            sprintf(entry, "factoriel(%.0f) = %lld", x, r);
            add_to_history(history, &history_count, entry);
            continue;
        }
        if (strcmp(op, "racine") == 0) {
            printf("Enter un nombre: ");
            scanf("%lf", &x);
            result = sqrt(x);
            printf("Result = %.2f\n", result);
            sprintf(entry, "racine(%.2f) = %.2f", x, result);
            add_to_history(history, &history_count, entry);
            continue;
        }
        if (strcmp(op, "pwr2") == 0) {
            printf("Enter un nombre: ");
            scanf("%lf", &x);
            result = x * x;
            printf("Result = %.2f\n", result);
            sprintf(entry, "%.2f^2 = %.2f", x, result);
            add_to_history(history, &history_count, entry);
            continue;
        }
        if (strcmp(op, "pwr3") == 0) {
            printf("Enter un nombre: ");
            scanf("%lf", &x);
            result = x * x * x;
            printf("Result = %.2f\n", result);
            sprintf(entry, "%.2f^3 = %.2f", x, result);
            add_to_history(history, &history_count, entry);
            continue;
        }
        printf("Enter premier nombre: ");
        scanf("%lf", &x);
        printf("Enter deuxième nombre: ");
        scanf("%lf", &y);
        if (strcmp(op, "+") == 0) result = x + y;
        else if (strcmp(op, "-") == 0) result = x - y;
        else if (strcmp(op, "*") == 0) result = x * y;
        else if (strcmp(op, "/") == 0) result = (y != 0) ? x / y : 0;
        else {
            printf("Invalide operation!\n");
            continue;
        }
        printf("Result = %.2f\n", result);
        sprintf(entry, "%.2f %s %.2f = %.2f", x, op, y, result);
        add_to_history(history, &history_count, entry);
    }
    return 0;
}